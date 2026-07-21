
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004ed210(TLOBaseTy *param_1)

{
  TLOBaseTy_field_04D0State TVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  TVar1 = param_1->field_04D0;
  if ((TVar1 == CASE_3) || (TVar1 == CASE_5)) {
    iVar2 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (iVar2 != param_1->field_01F5->field_020C) {
      return 0;
    }
  }
  else {
    if (TVar1 != CASE_4) {
      return 0;
    }
    if (DAT_0079aab8 < 2) {
      return 0;
    }
    if (DAT_0079aab8 <= param_1->field_04D4) {
      return 0;
    }
    if (PTR_00802a38->field_00E4 < param_1->field_04DC + param_1->field_04D8) {
      return 0;
    }
    iVar4 = param_1->field_04D4 + 1;
    param_1->field_04D8 = PTR_00802a38->field_00E4;
    param_1->field_04D4 = iVar4;
    iVar2 = ((_UNK_0079ab34 - _UNK_0079ab28) * iVar4) / DAT_0079aab8 + _UNK_0079ab28;
    iVar3 = ((_UNK_0079ab30 - _UNK_0079ab24) * iVar4) / DAT_0079aab8 + _UNK_0079ab24 +
            (int)param_1->field_0043;
    param_1->field_04E0 =
         (int)param_1->field_0041 +
         _UNK_0079ab20 + ((_UNK_0079ab2c - _UNK_0079ab20) * iVar4) / DAT_0079aab8;
    param_1->field_04E4 = iVar3;
    iVar2 = param_1->field_0045 + iVar2;
    param_1->field_04E8 = iVar2;
    thunk_FUN_004ad3c0(param_1->field_05FF,
                       (float)param_1->field_04E0 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar3 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar2 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (param_1->field_04D4 < *(int *)(&DAT_0079aaa8 + param_1->field_04D0 * 4)) {
      return 0;
    }
    thunk_FUN_004c4550(param_1,(int *)0x0);
  }
  thunk_FUN_004ecea0((AnonShape_004D9C80_80F657D3 *)param_1);
  TLOBaseTy::RotateSpr(param_1,0);
  return 0;
}

