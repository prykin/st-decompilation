
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00462180 @ 00462D5D -> killed on
   every CFG path | 00462180 @ 00462D7D -> killed on every CFG path | 00462180 @ 00462D9D -> killed
   on every CFG path | 00462180 @ 00462DBF -> killed on every CFG path | 00462180 @ 004631C8 ->
   killed on every CFG path | 00462180 @ 004631E8 -> killed on every CFG path | 00462180 @ 00463208
   -> killed on every CFG path | 00462180 @ 0046322A -> killed on every CFG path | 00462180 @
   00463EF2 -> killed on every CFG path | 00462180 @ 00463F12 -> killed on every CFG path | 00462180
   @ 00463F32 -> killed on every CFG path | 00462180 @ 00463F54 -> killed on every CFG path |
   00462180 @ 0046436E -> killed on every CFG path | 00462180 @ 0046438E -> killed on every CFG path
   | 00462180 @ 004643AE -> killed on every CFG path | 00462180 @ 004643D0 -> killed on every CFG
   path | 004B80D0 @ 004B842F -> read as EAX on every CFG path | 004B9FA0 @ 004BAD16 -> read as EAX
   on every CFG path | 004D11D0 @ 004D1382 -> killed on every CFG path */

int FUN_004960d0(short param_1,short param_2,short param_3)

{
  int iVar1;

  iVar1 = (int)g_pathingGrid.sizeX * (int)param_2 + (int)g_pathingGrid.planeStride * (int)param_3 +
          (int)param_1;
  if (g_pathingGrid.cells[iVar1] < 0) {
    return -1;
  }
  g_pathingGrid.cells[iVar1] = -2;
  return 0;
}

