
/* [STPrototypeApplier] Propagated return.
   Evidence: 004D8760 returns zeroed full register at 004D8798 @ 004D879B */

uint FUN_004d8760(int param_1)

{
  thunk_FUN_004d8110((*(int *)(&DAT_007bf594 + param_1 * 4) * (int)g_worldGrid.sizeZ *
                     (int)g_worldGrid.planeStride) / 10);
  return 0;
}

