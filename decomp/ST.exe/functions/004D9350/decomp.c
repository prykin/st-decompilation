#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004d9350(TLOBaseTy *param_1)

{
  uint uVar1;
  short sVar2;
  TLOBaseTy_field_04D0State TVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;

  TVar3 = param_1->field_04D0;
  if ((TVar3 == CASE_3) || (TVar3 == CASE_5)) {
    iVar4 = thunk_FUN_004ac910(&param_1->field_01D5,'\f');
    if (iVar4 != param_1->field_01F5->field_01C4) {
      return 0;
    }
    thunk_FUN_004d9000((AnonShape_004D9000_7AA66E43 *)param_1);
  }
  else {
    if (TVar3 != CASE_4) {
      return 0;
    }
    if (DAT_00798de0 < 2) {
      return 0;
    }
    if (DAT_00798de0 <= param_1->field_04D4) {
      return 0;
    }
    if (g_playSystem_00802A38->field_00E4 < param_1->field_04DC + param_1->field_04D8) {
      return 0;
    }
    iVar7 = param_1->field_04D4 + 1;
    param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
    param_1->field_04D4 = iVar7;
    iVar4 = ((_UNK_00798e58 - _UNK_00798e4c) * iVar7) / DAT_00798de0 + _UNK_00798e4c;
    iVar5 = ((_UNK_00798e5c - _UNK_00798e50) * iVar7) / DAT_00798de0 + _UNK_00798e50;
    param_1->field_04E0[0] =
         param_1->field_0041 + 100 +
         _UNK_00798e48 + ((_UNK_00798e54 - _UNK_00798e48) * iVar7) / DAT_00798de0;
    sVar2 = param_1->field_0045;
    uVar1 = param_1->field_0043 + 100 + iVar4;
    param_1->field_04E0[1] = uVar1;
    uVar6 = iVar5 + sVar2;
    param_1->field_04E0[2] = uVar6;
    STT3DSprC::sub_004AD3C0
              ((STT3DSprC *)param_1->field_05FF,
               (float)(int)param_1->field_04E0[0] * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)uVar1 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)uVar6 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (param_1->field_04D4 < *(int *)(&DAT_00798dd0 + param_1->field_04D0 * 4)) {
      return 0;
    }
    if (param_1->field_04D0 == CASE_4) {
      TLOBaseTy::sub_004C4550(param_1,nullptr);
      TLOBaseTy::RotateSpr(param_1,0);
      return 0;
    }
  }
  TLOBaseTy::RotateSpr(param_1,0);
  return 0;
}

