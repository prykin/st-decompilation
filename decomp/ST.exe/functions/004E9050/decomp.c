
undefined4 __fastcall FUN_004e9050(TLOBaseTy *param_1)

{
  TLOBaseTy_field_04D0State TVar1;
  uint uVar2;
  int iVar3;
  int iVar4;

  if (param_1->field_05AC != 0x37) goto LAB_004e914a;
  uVar2 = GetPlayerRaceId(*(char *)&param_1->field_0024);
  if ((uVar2 & 0xff) == 1) {
    iVar3 = param_1->field_0024;
    iVar4 = 0x21;
LAB_004e9090:
    iVar3 = thunk_FUN_004e60d0(iVar3,iVar4);
    uVar2 = (uint)(iVar3 != 0);
  }
  else {
    if ((uVar2 & 0xff) == 2) {
      iVar3 = param_1->field_0024;
      iVar4 = 0x8c;
      goto LAB_004e9090;
    }
    uVar2 = 0;
  }
  if (((int)param_1->field_04D0 < 100) &&
     ((uint)(&DAT_0079a9fc)[uVar2] / 100 + param_1->field_04D4 <= g_playSystem_00802A38->field_00E4)
     ) {
    TVar1 = param_1->field_04D0 + CASE_1;
    param_1->field_04D4 = g_playSystem_00802A38->field_00E4;
    param_1->field_04D0 = TVar1;
    if ((99 < (int)TVar1) && (param_1->field_04F4 == 0)) {
      param_1->field_04F4 = 1;
      TLOBaseTy::RotateSpr(param_1,1);
    }
  }
  if (((int)param_1->field_04D0 < 100) && (param_1->field_04F4 != 0)) {
    iVar3 = thunk_FUN_004ac910(&param_1->field_01D5,'\f');
    if (iVar3 == param_1->field_01F5->field_01C4) {
      param_1->field_04F4 = 0;
      TLOBaseTy::RotateSpr(param_1,1);
    }
  }
LAB_004e914a:
  if (((param_1->field_05AC == 0x6c) && (param_1->field_061B != 0)) && (param_1->field_04FC == 0)) {
    iVar3 = FUN_006e62d0(g_playSystem_00802A38,param_1->field_04F8,(int *)0x0);
    if (iVar3 != 0) {
      param_1->field_04F8 = 0;
      param_1->field_061B = 0;
    }
  }
  return 0;
}

