#include "../../pseudocode_runtime.h"


void __fastcall FUN_0062f150(RecoveredRecord_STRubbishC_0062F150 *param_1)

{
  int iVar1;
  STT3DSprC *this;
  VisibleClassTy *pVVar2;
  int *piVar3;
  int local_10;
  int local_c;
  int local_8;

  pVVar2 = g_visibleClass_00802A88;
  local_c = 0;
  if ((param_1->field_01F9 != '\0') && (g_visibleClass_00802A88 != nullptr)) {
    iVar1 = param_1->field_01DD;
    if ((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) {
      /* ST_CALLSITE[0062F1B9]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
      VisibleClassTy::sub_00558C00
                (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,param_1->field_01D5,
                 param_1->field_01D9,&local_8,&local_10);
      if (((((-1 < iVar1) && (iVar1 < 5)) && (-1 < local_8)) &&
          (((local_8 < pVVar2->field_0030 &&
            (local_10 = g_centeredOffsets5[iVar1] + local_10, -1 < local_10)) &&
           (local_10 < pVVar2->field_0034)))) &&
         ((pVVar2->field_004C != nullptr &&
          (pVVar2->field_004C[local_8 + local_10 * pVVar2->field_0030] == 0)))) goto LAB_0062f208;
    }
    local_c = 1;
  }
LAB_0062f208:
  local_8 = 0;
  piVar3 = (int *)&param_1->field_0x1e5;
  do {
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      this = *(STT3DSprC **)(iVar1 + 0x10);
      if (STField<int>(iVar1,0x18) == 2) {
        if (g_playSystem_00802A38->field_00E4 % 5 == 0) {
          if (this != nullptr) {
            /* ST_CALLSITE[0062F261]: CALL 0x0040116d; direct=0040116D STT3DSprC::sub_004ACE30 */
            STT3DSprC::sub_004ACE30
                      (this,PTR_00806724->entries[STField<byte>(iVar1,0x34)],
                       (int)PTR_00806724->field_002C);
          }
          *(char *)(*piVar3 + 0x34) = *(char *)(*piVar3 + 0x34) + '\x01';
          if (PTR_00806724->entryCount <= (short)(ushort)*(byte *)(*piVar3 + 0x34)) {
            thunk_FUN_0062f6c0(param_1,local_8);
          }
        }
      }
      else if (STField<uint>(iVar1,0x39) < g_playSystem_00802A38->field_00E4 - STField<int>(iVar1,0x35))
      {
        STField<undefined4>(iVar1,0x18) = 2;
        *(uint *)(*piVar3 + 0x35) = g_playSystem_00802A38->field_00E4;
        *(undefined4 *)(*piVar3 + 0x39) = 10;
        *(undefined1 *)(*piVar3 + 0x34) = 0;
      }
      iVar1 = *piVar3;
      if (local_c == 0) {
        if (((iVar1 != 0) && (STField<char>(iVar1,0x3D) != '\0')) && (this != nullptr)) {
          thunk_FUN_004ad430(this);
          *(undefined1 *)(*piVar3 + 0x3d) = 0;
        }
      }
      else if (((iVar1 != 0) && (STField<char>(iVar1,0x3D) == '\0')) && (this != nullptr)) {
        thunk_FUN_004ad460(this,0);
        *(undefined1 *)(*piVar3 + 0x3d) = 1;
      }
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + 1;
  } while (local_8 < 5);
  return;
}

