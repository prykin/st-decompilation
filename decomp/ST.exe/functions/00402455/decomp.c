
undefined4 __thiscall
thunk_FUN_00415b30(void *this,short param_1,short param_2,short param_3,short param_4,short param_5,
                  short param_6,byte param_7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 uStack_8;
  
  puStack_c = &DAT_007901a0;
  puStack_10 = &LAB_0072d964;
  pvStack_14 = ExceptionList;
  uStack_8 = 0;
  ExceptionList = &pvStack_14;
  *(short *)((int)this + 0x34) = param_1;
  *(short *)((int)this + 0x36) = param_2;
  *(short *)((int)this + 0x38) = param_3;
  *(short *)((int)this + 0x3a) = param_4;
  *(short *)((int)this + 0x3c) = param_5;
  *(short *)((int)this + 0x3e) = param_6;
  *(short *)((int)this + 0x41) = param_1;
  *(short *)((int)this + 0x43) = param_2;
  *(short *)((int)this + 0x45) = param_3;
  iVar7 = (int)param_1;
  *(short *)((int)this + 0x47) = param_1 / 0xc9;
  iVar3 = (int)param_2;
  *(short *)((int)this + 0x49) = param_2 / 0xc9;
  iVar4 = (int)param_3;
  *(short *)((int)this + 0x4b) = param_3 / 200;
  iVar2 = (int)(short)((param_1 / 0xc9) * 0xc9 + 100);
  if ((((iVar2 + -0x1e < iVar7) && (iVar7 < iVar2 + 0x1e)) &&
      (iVar2 = (int)(short)((param_2 / 0xc9) * 0xc9 + 100), iVar2 + -0x1e < iVar3)) &&
     (((iVar3 < iVar2 + 0x1e &&
       (iVar2 = (int)(short)((param_3 / 200) * 200 + 100), iVar2 + -0x1d < iVar4)) &&
      (iVar4 < iVar2 + 0x1d)))) {
    *(undefined1 *)((int)this + 0x4d) = 0;
  }
  else {
    *(undefined1 *)((int)this + 0x4d) = 1;
  }
  *(undefined1 *)((int)this + 0x40) = *(undefined1 *)((int)this + 0x4d);
  *(byte *)((int)this + 99) = param_7;
  *(undefined4 *)((int)this + 0x68) = 0;
  iVar2 = FUN_006acf0d(iVar7,iVar3,iVar4,(int)param_4,(int)param_5,(int)param_6);
  *(int *)((int)this + 100) = iVar2 / (int)(uint)param_7;
  if (iVar2 / (int)(uint)param_7 < 1) {
    *(undefined4 *)((int)this + 100) = 1;
  }
  iVar2 = *(int *)((int)this + 100);
  sVar6 = param_1 + (short)((param_4 - iVar7) / iVar2);
  *(short *)((int)this + 0x4e) = sVar6;
  sVar1 = (short)((param_5 - iVar3) / iVar2) + param_2;
  *(short *)((int)this + 0x50) = sVar1;
  sVar5 = param_3 + (short)((param_6 - iVar4) / iVar2);
  *(short *)((int)this + 0x52) = sVar5;
  *(short *)((int)this + 0x54) = sVar6 / 0xc9;
  *(short *)((int)this + 0x56) = sVar1 / 0xc9;
  *(short *)((int)this + 0x58) = sVar5 / 200;
  iVar2 = (int)(short)((sVar6 / 0xc9) * 0xc9 + 100);
  if (((iVar2 + -0x1e < (int)sVar6) && ((int)sVar6 < iVar2 + 0x1e)) &&
     ((iVar2 = (int)(short)((sVar1 / 0xc9) * 0xc9 + 100), iVar2 + -0x1e < (int)sVar1 &&
      ((((int)sVar1 < iVar2 + 0x1e &&
        (iVar2 = (int)(short)((sVar5 / 200) * 200 + 100), iVar2 + -0x1d < (int)sVar5)) &&
       ((int)sVar5 < iVar2 + 0x1d)))))) {
    *(undefined1 *)((int)this + 0x5a) = 0;
  }
  else {
    *(undefined1 *)((int)this + 0x5a) = 1;
  }
  if ((*(char *)((int)this + 0x4d) == '\0') && (*(char *)((int)this + 0x5a) == '\x01')) {
    *(undefined4 *)((int)this + 0x7a) = 1;
  }
  else {
    *(undefined4 *)((int)this + 0x7a) = 0;
  }
  *(undefined4 *)((int)this + 0x7e) = 1;
  ExceptionList = pvStack_14;
  return 0;
}

