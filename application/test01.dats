
dynload "add_lib.dats"
staload "add_lib.sats"

fun addx (x: &int): void = ()

implement main () = let
  var x = 3
  val () = addx (x)
  val y = 4
  val sum = add (x, y)
  val () = printf ("%d + %d = %d\n", @(x, y, sum))
  val () = printf ("gx is %d\n", @(getX()))
in end


