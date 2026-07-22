
undefined4 __fastcall FUN_004e27e0(TLOBaseTy *param_1)

{
  int iVar1;
  int iVar2;
  TLOBaseTy_field_04D0State *pTVar3;
  STGameObjC *local_8;

  local_8 = (STGameObjC *)param_1;
  if (g_playSystem_00802A38->field_00E4 % 0x4b == 0) {
    pTVar3 = &param_1->field_04D0;
    iVar2 = 2;
    do {
      if ((*pTVar3 != CASE_0) &&
         ((iVar1 = FUN_006e62d0(g_playSystem_00802A38,*pTVar3,(int *)&local_8), iVar1 != 0 ||
          (iVar1 = thunk_FUN_0045ff10(local_8), iVar1 != 4)))) {
        *pTVar3 = CASE_0;
      }
      pTVar3 = pTVar3 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((((param_1->field_0520 != 0) &&
       (iVar2 = thunk_FUN_004ac910(&param_1->field_01D5,'\f'),
       iVar2 == param_1->field_01F5->field_01C4)) && (param_1->field_04D0 == CASE_0)) &&
     (param_1->field_04F8 == 0)) {
    param_1->field_0520 = 0;
    TLOBaseTy::RotateSpr(param_1,0);
  }
  return 0;
}

