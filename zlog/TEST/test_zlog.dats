
staload "zlog.sats"

implement main () = let
  val rc = atslib_zlog_init("./zlog.conf")
in
  if (rc != 0) then let
    val () = printf ("init failed %s\n", @(#LOCATION))
  in end 
  else let 
    val [p:addr] c = atslib_zlog_get_category ("my_cat")
  in 
    if atslib_zlog_category_not_null {p} (c) = false then let
      val () = printf ("get cat fail\n", @())
      val () = atslib_zlog_fini ()
    in end 
    else let
      val () = atslib_zlog_info {p}(c, #LOCATION, "hello, zlog\n", @())
      val () = atslib_zlog_fini ()
    in end
  end
end


