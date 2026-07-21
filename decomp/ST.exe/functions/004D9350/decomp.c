
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004d9350(TLOBaseTy *param_1)

{
  TLOBaseTy_field_04D0State TVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  TVar1 = param_1->field_04D0;
  if ((TVar1 == CASE_3) || (TVar1 == CASE_5)) {
    iVar2 = thunk_FUN_004ac910(&param_1->field_01D5,'\f');
    if (iVar2 != param_1->field_01F5->field_01C4) {
      return 0;
    }
    thunk_FUN_004d9000((AnonShape_004D9000_7AA66E43 *)param_1);
  }
  else {
    if (TVar1 != CASE_4) {
      return 0;
    }
    if (DAT_00798de0 < 2) {
      return 0;
    }
    if (DAT_00798de0 <= param_1->field_04D4) {
      return 0;
    }
    if (PTR_00802a38->field_00E4 < param_1->field_04DC + param_1->field_04D8) {
      return 0;
    }
    iVar4 = param_1->field_04D4 + 1;
    param_1->field_04D8 = PTR_00802a38->field_00E4;
    param_1->field_04D4 = iVar4;
    iVar2 = ((_UNK_00798e58 - _UNK_00798e4c) * iVar4) / DAT_00798de0 + _UNK_00798e4c;
    iVar3 = ((_UNK_00798e5c - _UNK_00798e50) * iVar4) / DAT_00798de0 + _UNK_00798e50;
    param_1->field_04E0 =
         param_1->field_0041 + 100 +
         _UNK_00798e48 + ((_UNK_00798e54 - _UNK_00798e48) * iVar4) / DAT_00798de0;
    iVar2 = param_1->field_0043 + 100 + iVar2;
    param_1->field_04E4 = iVar2;
    iVar3 = iVar3 + param_1->field_0045;
    param_1->field_04E8 = iVar3;
    thunk_FUN_004ad3c0(param_1->field_05FF,
                       (float)param_1->field_04E0 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar2 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar3 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (param_1->field_04D4 < *(int *)(&DAT_00798dd0 + param_1->field_04D0 * 4)) {
      return 0;
    }
    if (param_1->field_04D0 == CASE_4) {
      thunk_FUN_004c4550(param_1,(int *)0x0);
      TLOBaseTy::RotateSpr(param_1,0);
      return 0;
    }
  }
  TLOBaseTy::RotateSpr(param_1,0);
  return 0;
}

