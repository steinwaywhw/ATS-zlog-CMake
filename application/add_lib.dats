

// #define ATS_DYNLOADFLAG 0


staload "add_lib.sats"

fun add_int (x: int): int = x + 1
val gx = add_int (2)

implement add (x, y) = x + y

implement getX () = gx



