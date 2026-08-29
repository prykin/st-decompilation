
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004845E0 -> 004E8030 @ 00485155; /STBoatC+0x6f7 | 004845E0 -> 004E8030 @ 00485672;
   /STBoatC+0x6f7 | 00488EE0 -> 004E8030 @ 00488F07; /STBoatC+0x6f7 | 004898C0 -> 004E8030 @
   004898F1; /STBoatC+0x6f7 */

int FUN_004e8030(STBoatC_field_06F7State param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;

  if (((int)param_1 < 1) || (0x28 < (int)param_1)) {
    if (((int)param_1 < 0x32) || (0x73 < (int)param_1)) {
      return 0;
    }
    iVar3 = 0;
    puVar2 = g_bitset_00800FB0;
    while( true ) {
      iVar1 = FUN_006b0fd0((int)puVar2);
      if (iVar1 != 0) break;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + 1;
      if (0x800fdf < (int)puVar2) {
        return 0;
      }
    }
  }
  else {
    iVar3 = 0;
    puVar2 = g_bitset_00800F30;
    while( true ) {
      iVar1 = FUN_006b0fd0((int)puVar2);
      if (iVar1 != 0) break;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + 1;
      if (0x800f5f < (int)puVar2) {
        return 0;
      }
    }
  }
  return iVar3 + 1;
}

