
undefined4 __thiscall thunk_FUN_00415ed0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_007901b0;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  uStack_8 = 0;
  if ((*(int *)((int)this + 0x68) == *(int *)((int)this + 100)) && (0 < *(int *)((int)this + 0x68)))
  {
    return 0;
  }
  if (10 < *(int *)((int)this + 0x8f)) {
    ExceptionList = &pvStack_14;
    thunk_FUN_0041d8e0(this);
  }
  *(undefined4 *)((int)this + 0x8f) = 0xffffffff;
  if (*(int *)((int)this + 0x7a) == 1) {
    *param_1 = 1;
    *(undefined4 *)((int)this + 0x7a) = 0;
    ExceptionList = pvStack_14;
    return 1;
  }
  *(undefined1 *)((int)this + 0x40) = *(undefined1 *)((int)this + 0x4d);
  *(undefined2 *)((int)this + 0x41) = *(undefined2 *)((int)this + 0x4e);
  *(undefined2 *)((int)this + 0x43) = *(undefined2 *)((int)this + 0x50);
  *(undefined2 *)((int)this + 0x45) = *(undefined2 *)((int)this + 0x52);
  *(undefined2 *)((int)this + 0x47) = *(undefined2 *)((int)this + 0x54);
  *(undefined2 *)((int)this + 0x49) = *(undefined2 *)((int)this + 0x56);
  *(undefined2 *)((int)this + 0x4b) = *(undefined2 *)((int)this + 0x58);
  *(undefined1 *)((int)this + 0x4d) = *(undefined1 *)((int)this + 0x5a);
  iVar4 = *(int *)((int)this + 0x68);
  *(int *)((int)this + 0x68) = iVar4 + 1;
  iVar4 = iVar4 + 2;
  iVar5 = *(int *)((int)this + 100);
  sVar6 = *(short *)((int)this + 0x34) +
          (short)((((int)*(short *)((int)this + 0x3a) - (int)*(short *)((int)this + 0x34)) * iVar4)
                 / iVar5);
  *(short *)((int)this + 0x4e) = sVar6;
  sVar1 = (short)((((int)*(short *)((int)this + 0x3c) - (int)*(short *)((int)this + 0x36)) * iVar4)
                 / iVar5) + *(short *)((int)this + 0x36);
  *(short *)((int)this + 0x50) = sVar1;
  sVar2 = (short)((((int)*(short *)((int)this + 0x3e) - (int)*(short *)((int)this + 0x38)) * iVar4)
                 / iVar5) + *(short *)((int)this + 0x38);
  *(short *)((int)this + 0x52) = sVar2;
  iVar7 = (int)sVar6;
  *(short *)((int)this + 0x54) = (short)(iVar7 / 0xc9);
  iVar4 = (int)sVar1;
  *(short *)((int)this + 0x56) = (short)(iVar4 / 0xc9);
  iVar5 = (int)sVar2;
  *(short *)((int)this + 0x58) = (short)(iVar5 / 200);
  uVar3 = (iVar7 / 0xc9) * 0xc9 + 100U & 0xffff;
  if (((int)(uVar3 - 0x1e) < iVar7) && (iVar7 < (int)(uVar3 + 0x1e))) {
    uVar3 = (iVar4 / 0xc9) * 0xc9 + 100U & 0xffff;
    if (((int)(uVar3 - 0x1e) < iVar4) && (iVar4 < (int)(uVar3 + 0x1e))) {
      uVar3 = (iVar5 / 200) * 200 + 100U & 0xffff;
      if (((int)(uVar3 - 0x1d) < iVar5) && (iVar5 < (int)(uVar3 + 0x1d))) {
        *(undefined1 *)((int)this + 0x5a) = 0;
        goto LAB_004160cd;
      }
    }
  }
  *(undefined1 *)((int)this + 0x5a) = 1;
LAB_004160cd:
  if ((*(char *)((int)this + 0x4d) == '\0') && (*(char *)((int)this + 0x5a) == '\x01')) {
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  if (((*(short *)((int)this + 0x47) == *(short *)((int)this + 0x54)) &&
      (*(short *)((int)this + 0x49) == *(short *)((int)this + 0x56))) &&
     (*(short *)((int)this + 0x4b) == *(short *)((int)this + 0x58))) {
    *param_2 = 0;
  }
  else {
    *param_2 = 1;
  }
  if (*(int *)((int)this + 0x68) == *(int *)((int)this + 100)) {
    *(int *)((int)this + 0x8f) = *(int *)((int)this + 0x8f) + 1;
    ExceptionList = pvStack_14;
    return 0;
  }
  ExceptionList = pvStack_14;
  return 1;
}

