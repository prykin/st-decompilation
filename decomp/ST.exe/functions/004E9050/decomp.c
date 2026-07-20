
undefined4 __fastcall FUN_004e9050(TLOBaseTy *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1->field_05AC != CASE_37) goto LAB_004e914a;
  uVar1 = thunk_FUN_004406c0(param_1->field_0x24);
  if ((uVar1 & 0xff) == 1) {
    iVar2 = *(int *)&param_1->field_0x24;
    iVar3 = 0x21;
LAB_004e9090:
    iVar2 = thunk_FUN_004e60d0(iVar2,iVar3);
    uVar1 = (uint)(iVar2 != 0);
  }
  else {
    if ((uVar1 & 0xff) == 2) {
      iVar2 = *(int *)&param_1->field_0x24;
      iVar3 = 0x8c;
      goto LAB_004e9090;
    }
    uVar1 = 0;
  }
  if (((int)param_1->field_04D0 < 100) &&
     ((uint)(&DAT_0079a9fc)[uVar1] / 100 + *(int *)&param_1->field_0x4d4 <=
      (uint)PTR_00802a38->field_00E4)) {
    iVar2 = param_1->field_04D0 + 1;
    *(undefined4 *)&param_1->field_0x4d4 = PTR_00802a38->field_00E4;
    param_1->field_04D0 = iVar2;
    if ((99 < iVar2) && (*(int *)&param_1->field_0x4f4 == 0)) {
      *(undefined4 *)&param_1->field_0x4f4 = 1;
      TLOBaseTy::RotateSpr(param_1,1);
    }
  }
  if (((int)param_1->field_04D0 < 100) && (*(int *)&param_1->field_0x4f4 != 0)) {
    iVar2 = thunk_FUN_004ac910(&param_1->field_01D5,'\f');
    if (iVar2 == *(int *)(param_1->field_01F5 + 0x1c4)) {
      *(undefined4 *)&param_1->field_0x4f4 = 0;
      TLOBaseTy::RotateSpr(param_1,1);
    }
  }
LAB_004e914a:
  if (((param_1->field_05AC == CASE_6C) && (param_1->field_061B != 0)) &&
     (*(int *)&param_1->field_0x4fc == 0)) {
    iVar2 = FUN_006e62d0(PTR_00802a38,*(int *)&param_1->field_0x4f8,(int *)0x0);
    if (iVar2 != 0) {
      *(undefined4 *)&param_1->field_0x4f8 = 0;
      param_1->field_061B = 0;
    }
  }
  return 0;
}

