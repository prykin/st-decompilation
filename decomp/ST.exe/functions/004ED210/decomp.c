
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004ed210(TLOBaseTy *param_1)

{
  uint uVar1;
  short sVar2;
  TLOBaseTy_field_04D0State TVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  TVar3 = param_1->field_04D0;
  if ((TVar3 == CASE_3) || (TVar3 == CASE_5)) {
    iVar4 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (iVar4 != param_1->field_01F5->field_020C) {
      return 0;
    }
  }
  else {
    if (TVar3 != CASE_4) {
      return 0;
    }
    if (DAT_0079aab8 < 2) {
      return 0;
    }
    if (DAT_0079aab8 <= param_1->field_04D4) {
      return 0;
    }
    if (g_playSystem_00802A38->field_00E4 < param_1->field_04DC + param_1->field_04D8) {
      return 0;
    }
    iVar6 = param_1->field_04D4 + 1;
    param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
    param_1->field_04D4 = iVar6;
    iVar4 = ((_UNK_0079ab34 - _UNK_0079ab28) * iVar6) / DAT_0079aab8 + _UNK_0079ab28;
    uVar5 = ((_UNK_0079ab30 - _UNK_0079ab24) * iVar6) / DAT_0079aab8 + _UNK_0079ab24 +
            (int)param_1->field_0043;
    param_1->field_04E0[0] =
         (int)param_1->field_0041 +
         _UNK_0079ab20 + ((_UNK_0079ab2c - _UNK_0079ab20) * iVar6) / DAT_0079aab8;
    sVar2 = param_1->field_0045;
    param_1->field_04E0[1] = uVar5;
    uVar1 = sVar2 + iVar4;
    param_1->field_04E0[2] = uVar1;
    STT3DSprC::sub_004AD3C0
              ((STT3DSprC *)param_1->field_05FF,
               (float)(int)param_1->field_04E0[0] * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)uVar5 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)uVar1 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (param_1->field_04D4 < *(int *)(&DAT_0079aaa8 + param_1->field_04D0 * 4)) {
      return 0;
    }
    TLOBaseTy::sub_004C4550(param_1,nullptr);
  }
  thunk_FUN_004ecea0((AnonShape_004D9C80_80F657D3 *)param_1);
  TLOBaseTy::RotateSpr(param_1,0);
  return 0;
}

