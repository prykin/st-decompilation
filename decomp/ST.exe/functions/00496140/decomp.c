
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (2), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00462180 @ 00462CCB -> killed on
   every CFG path | 00462180 @ 00462CEB -> killed on every CFG path | 00462180 @ 00462D0B -> killed
   on every CFG path | 00462180 @ 00462D2D -> killed on every CFG path | 00462180 @ 00463136 ->
   killed on every CFG path | 00462180 @ 00463156 -> killed on every CFG path | 00462180 @ 00463176
   -> killed on every CFG path | 00462180 @ 00463198 -> killed on every CFG path | 00462180 @
   00463E60 -> killed on every CFG path | 00462180 @ 00463E80 -> killed on every CFG path | 00462180
   @ 00463EA0 -> killed on every CFG path | 00462180 @ 00463EC2 -> killed on every CFG path |
   00462180 @ 004642DC -> killed on every CFG path | 00462180 @ 004642FC -> killed on every CFG path
   | 00462180 @ 0046431C -> killed on every CFG path | 00462180 @ 0046433E -> killed on every CFG
   path | 004B80D0 @ 004B8507 -> read as EAX on every CFG path | 004B80D0 @ 004B8633 -> read as EAX
   on every CFG path | 004D2760 @ 004D27F0 -> killed on every CFG path | 004D32C0 @ 004D38B2 ->
   killed on every CFG path */

int FUN_00496140(short param_1,short param_2,short param_3)

{
  int iVar1;

  iVar1 = (int)g_pathingGrid.sizeX * (int)param_2 + (int)g_pathingGrid.planeStride * (int)param_3 +
          (int)param_1;
  if (g_pathingGrid.cells[iVar1] == 0) {
    return -1;
  }
  g_pathingGrid.cells[iVar1] = 0;
  return 0;
}

