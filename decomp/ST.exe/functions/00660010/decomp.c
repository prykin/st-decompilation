
undefined4 __fastcall FUN_00660010(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint *puVar5;
  undefined2 extraout_var;
  uint uVar6;
  int *piVar7;
  undefined4 extraout_EDX;
  undefined4 local_14;
  uint *local_10;
  undefined2 local_c;
  undefined4 local_8;
  
  local_8 = 0;
  sVar1 = *(short *)(param_1 + 0x39);
  *(undefined4 *)(param_1 + 0xa7) = 0;
  if (0 < sVar1) {
    if (sVar1 < 3) {
      iVar4 = 0x33;
      goto LAB_00660050;
    }
    if (sVar1 == 3) {
      iVar4 = 0x62;
      goto LAB_00660050;
    }
  }
  iVar4 = 0;
LAB_00660050:
  puVar5 = thunk_FUN_0065fa60(iVar4,(sVar1 != 3) - 1 & 2,(short *)0x0);
  if (puVar5 == (uint *)0x0) {
    return 0xfffffffe;
  }
  uVar3 = thunk_FUN_0065d9c0(param_1,extraout_EDX);
  if (CONCAT22(extraout_var,uVar3) == 0) {
    FUN_006ae110((byte *)puVar5);
    return 0xffffffff;
  }
  uVar6 = CONCAT22(extraout_var,*(short *)(param_1 + 0x7d));
  if ((*(short *)(param_1 + 0x7d) != -2) && (DAT_007fa174 != 0)) {
    piVar7 = (int *)thunk_FUN_0042b760(CONCAT31((int3)(uVar6 >> 8),*(undefined1 *)(param_1 + 0x24)),
                                       uVar6);
    if (piVar7 != (int *)0x0) {
      if (*(short *)(param_1 + 0x39) == 3) {
        local_14 = 1;
        local_10 = (uint *)0x0;
        local_c = 0;
        (**(code **)(*piVar7 + 8))(0x11,&local_14);
        uVar2 = local_8;
        FUN_006ae110((byte *)puVar5);
        return uVar2;
      }
      local_14 = 0;
      local_10 = puVar5;
      (**(code **)(*piVar7 + 8))(4,&local_14);
      uVar2 = local_8;
      FUN_006ae110((byte *)puVar5);
      return uVar2;
    }
  }
  FUN_006ae110((byte *)puVar5);
  return 0xfffffffd;
}

