#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004d9fe0(TLOBaseTy *param_1)

{
  uint uVar1;
  short sVar2;
  TLOBaseTy_field_04D0State TVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  TVar3 = param_1->field_04D0;
  if ((TVar3 == CASE_3) || (TVar3 == CASE_5)) {
    iVar4 = thunk_FUN_004ac910(&param_1->field_01D5,'\f');
    if (iVar4 != param_1->field_01F5->field_01C4) {
      return 0;
    }
    thunk_FUN_004d9c80((AnonShape_004D9C80_80F657D3 *)param_1);
  }
  else {
    if (TVar3 != CASE_4) {
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
    iVar6 = param_1->field_04D4 + 1;
    param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
    param_1->field_04D4 = iVar6;
    iVar4 = ((_UNK_00798f2c - _UNK_00798f20) * iVar6) / DAT_00798eb0 + _UNK_00798f20;
    uVar5 = ((_UNK_00798f28 - _UNK_00798f1c) * iVar6) / DAT_00798eb0 + _UNK_00798f1c +
            (int)param_1->field_0043;
    param_1->field_04E0[0] =
         (int)param_1->field_0041 +
         _UNK_00798f18 + ((_UNK_00798f24 - _UNK_00798f18) * iVar6) / DAT_00798eb0;
    sVar2 = param_1->field_0045;
    param_1->field_04E0[1] = uVar5;
    uVar1 = sVar2 + iVar4;
    param_1->field_04E0[2] = uVar1;
    /* ST_CALLSITE[004DA133]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    STT3DSprC::sub_004AD3C0
              ((STT3DSprC *)param_1->field_05FF,
               (float)(int)param_1->field_04E0[0] * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)uVar5 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)uVar1 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (param_1->field_04D4 < *(int *)(&DAT_00798ea0 + param_1->field_04D0 * 4)) {
      return 0;
    }
    if (param_1->field_04D0 == CASE_4) {
      /* ST_CALLSITE[004DA156]: CALL 0x00403efe; direct=00403EFE TLOBaseTy::sub_004C4550 */
      TLOBaseTy::sub_004C4550(param_1,nullptr);
      /* ST_CALLSITE[004DA15F]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
      TLOBaseTy::RotateSpr(param_1,0);
      return 0;
    }
  }
  /* ST_CALLSITE[004DA193]: CALL 0x00402cf7; direct=00402CF7 TLOBaseTy::RotateSpr */
  TLOBaseTy::RotateSpr(param_1,0);
  return 0;
}

