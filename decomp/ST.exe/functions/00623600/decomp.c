#include "../../pseudocode_runtime.h"


void __fastcall FUN_00623600(AnonShape_00623600_61226D23 *param_1)

{
  byte *puVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  VisibleClassTy *pVVar5;
  int iVar6;
  int local_c;
  int local_8;

  pVVar5 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == nullptr) {
    cVar2 = param_1->field_02E9;
  }
  else {
    iVar6 = (int)param_1->field_004B;
    if (((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
         /* ST_CALLSITE[0062364B]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
         (VisibleClassTy::sub_00558C00
                    (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                     (int)param_1->field_0047,(int)param_1->field_0049,&local_8,&local_c), iVar6 < 0
         )) || ((((4 < iVar6 || (local_8 < 0)) ||
                 ((pVVar5->field_0030 <= local_8 ||
                  ((local_c = g_centeredOffsets5[iVar6] + local_c, local_c < 0 ||
                   (pVVar5->field_0034 <= local_c)))))) || (pVVar5->field_004C == nullptr)))) ||
       (pVVar5->field_004C[local_8 + local_c * pVVar5->field_0030] != 0)) {
      bVar4 = false;
      if (param_1->field_02AE == 0) {
        cVar2 = param_1->field_02AD;
        if ((cVar2 == '\x03') || (cVar2 == '\x02')) {
          if (param_1->field_030E == '\0') {
            if ((param_1->field_030A == 0) || ((g_playSystem_00802A38->field_00E4 & 1) == 0))
            goto LAB_0062371f;
            iVar6 = param_1->field_030A + 1;
            param_1->field_030A = iVar6;
            if (iVar6 == 0x2f) {
              param_1->field_030A = 0;
            }
          }
          else if (((g_playSystem_00802A38->field_00E4 & 1) != 0) &&
                  (iVar6 = param_1->field_030A + 1, param_1->field_030A = iVar6, iVar6 == 0x2f)) {
            param_1->field_030A = 0;
          }
          bVar4 = true;
        }
LAB_0062371f:
        if (((DAT_0080732c != 0) || (param_1->field_02CE != 0)) || (bVar4)) {
          if (((cVar2 != '\x03') && (cVar2 != '\x02')) ||
             ((g_playSystem_00802A38->field_00E4 & 1) != 0)) {
            param_1->field_02CE = param_1->field_02CE + 1;
          }
          if (param_1->field_02D2 <= (int)param_1->field_02CE) {
            param_1->field_02CE = 0;
          }
          puVar1 = &param_1->field_0x1d5;
          /* ST_CALLSITE[00623783]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
          STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',param_1->field_02CE);
          /* ST_CALLSITE[0062378C]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
          STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x0e');
          if (param_1->field_0352 != '\0') {
            /* ST_CALLSITE[006237A6]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
            STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\f',param_1->field_02CE);
            /* ST_CALLSITE[006237AF]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
            STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\f');
          }
          if (DAT_00807326 != '\0') {
            bVar3 = param_1->field_02D6;
            goto LAB_00623863;
          }
        }
      }
      else {
        if (((param_1->field_02AD != '\x03') && (param_1->field_02AD != '\x02')) ||
           ((g_playSystem_00802A38->field_00E4 & 1) != 0)) {
          param_1->field_02CE = param_1->field_02CE + 1;
        }
        if (param_1->field_02D2 <= (int)param_1->field_02CE) {
          param_1->field_02CE = 0;
        }
        puVar1 = &param_1->field_0x1d5;
        /* ST_CALLSITE[00623820]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
        STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\x0e',param_1->field_02CE);
        /* ST_CALLSITE[00623829]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
        STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\x0e');
        if (param_1->field_0352 != '\0') {
          /* ST_CALLSITE[00623843]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
          STT3DSprC::SetCurFase((STT3DSprC *)puVar1,'\f',param_1->field_02CE);
          /* ST_CALLSITE[0062384C]: CALL 0x004030bc; direct=004030BC STT3DSprC::ShowCurFase */
          STT3DSprC::ShowCurFase((STT3DSprC *)puVar1,'\f');
        }
        if (DAT_00807326 != '\0') {
          bVar3 = param_1->field_02D6;
LAB_00623863:
          /* ST_CALLSITE[00623867]: CALL 0x004052fe; direct=004052FE STT3DSprC::SetCurShad */
          STT3DSprC::SetCurShad((STT3DSprC *)&param_1->field_0x1d5,'\x0e',(uint)bVar3);
        }
      }
      if (param_1->field_02E9 == '\0') {
        thunk_FUN_004ad460(&param_1->field_0x1d5,0);
        param_1->field_02E9 = 1;
        /* ST_CALLSITE[0062388D]: CALL dword ptr [EDX + 0xd8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(param_1->field_0000 + 0xd8))();
        return;
      }
      goto LAB_006238c2;
    }
    cVar2 = param_1->field_02E9;
  }
  if (cVar2 != '\0') {
    thunk_FUN_004ad430((STT3DSprC *)&param_1->field_0x1d5);
    param_1->field_02E9 = 0;
  }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
LAB_006238c2:
  /* ST_CALLSITE[006238C6]: CALL dword ptr [EDX + 0xd8] */
  (**(code **)(param_1->field_0000 + 0xd8))();
  return;
}

