
undefined4 FUN_0074bf23(int param_1,ushort *param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  uVar3 = 0;
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = 0x80004003;
  }
  else {
    iVar1 = FUN_0074d5d3(param_2,(ushort *)&DAT_007ee298);
    if (iVar1 == 0) {
      uVar4 = 0;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(param_1 + -0xc);
    }
    else {
      iVar1 = FUN_0074d5d3(param_2,(ushort *)&DAT_007a1738);
      if (iVar1 != 0) {
        *param_3 = 0;
        return 0x80040216;
      }
      uVar4 = 1;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar1 = *(int *)(param_1 + -0xc);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(iVar1 + 0x1c))(uVar4);
    piVar2 = (int *)(-(uint)(iVar1 != 0) & iVar1 + 0xcU);
    *param_3 = piVar2;
    if (piVar2 == (int *)0x0) {
      uVar3 = 0x8007000e;
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  return uVar3;
}

