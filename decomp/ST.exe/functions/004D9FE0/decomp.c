
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004d9fe0(TLOBaseTy *param_1)

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
    thunk_FUN_004d9c80((AnonShape_004D9C80_80F657D3 *)param_1);
  }
  else {
    if (TVar1 != CASE_4) {
      return 0;
    }
    if (DAT_00798eb0 < 2) {
      return 0;
    }
    if (DAT_00798eb0 <= param_1->field_04D4) {
      return 0;
    }
    if (g_playSystem_00802A38->field_00E4 < param_1->field_04DC + param_1->field_04D8) {
      return 0;
    }
    iVar4 = param_1->field_04D4 + 1;
    param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
    param_1->field_04D4 = iVar4;
    iVar2 = ((_UNK_00798f2c - _UNK_00798f20) * iVar4) / DAT_00798eb0 + _UNK_00798f20;
    iVar3 = ((_UNK_00798f28 - _UNK_00798f1c) * iVar4) / DAT_00798eb0 + _UNK_00798f1c +
            (int)param_1->field_0043;
    param_1->field_04E0 =
         (int)param_1->field_0041 +
         _UNK_00798f18 + ((_UNK_00798f24 - _UNK_00798f18) * iVar4) / DAT_00798eb0;
    param_1->field_04E4 = iVar3;
    iVar2 = param_1->field_0045 + iVar2;
    param_1->field_04E8 = iVar2;
    STT3DSprC::sub_004AD3C0
              (param_1->field_05FF,(float)param_1->field_04E0 * _DAT_007904f8 * _DAT_007904f0,
               (float)iVar3 * _DAT_007904f8 * _DAT_007904f0,
               (float)iVar2 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (param_1->field_04D4 < *(int *)(&DAT_00798ea0 + param_1->field_04D0 * 4)) {
      return 0;
    }
    if (param_1->field_04D0 == CASE_4) {
      TLOBaseTy::sub_004C4550(param_1,(int *)0x0);
      TLOBaseTy::RotateSpr(param_1,0);
      return 0;
    }
  }
  TLOBaseTy::RotateSpr(param_1,0);
  return 0;
}

