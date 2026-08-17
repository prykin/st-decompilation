#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 1055 | 1081 | 1082 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
_EnumMines(int param_1,short param_2,char param_3,byte *param_4,short param_5,short param_6,
          short param_7,short param_8,short param_9,short param_10,undefined *param_11,
          undefined4 param_12)

{
  byte bVar1;
  STFishC *this;
  int iVar3;
  undefined4 *puVar3;
  dword dVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  DArrayTy *pDVar7;
  int iVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  InternalExceptionFrame local_6c;
  byte local_28 [16];
  int local_18;
  int local_14;
  uint local_10;
  short local_c;
  short local_a;
  short local_8;
  char local_5;

  local_18 = 0;
  if (param_3 == '\b') {
    local_5 = (char)param_1;
  }
  else if ((param_3 < '\0') || (local_5 = param_3, '\b' < param_3)) {
    local_5 = -1;
  }
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_6c.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_mdef.cpp",0x439,0,iVar3,"%s",
                               "_EnumMines");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x43a);
    return iVar3;
  }
  if (g_array_007FA158 == nullptr) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_mdef.cpp",0x41f);
  }
  uVar9 = g_array_007FA158->count - 1;
  pDVar7 = g_array_007FA158;
  if ((int)uVar9 < 0) {
    g_currentExceptionFrame = local_6c.previous;
    return local_18;
  }
  do {
    if (uVar9 < pDVar7->count) {
      puVar3 = DArrayAt<undefined4>(pDVar7, uVar9);
    }
    else {
      puVar3 = nullptr;
    }
    this = (STFishC *)*puVar3;
    if (((this != nullptr) && (this->field_0024 == param_1)) &&
       /* ST_CALLSITE[006782FD]: CALL dword ptr [EAX + 0x2c] */
       ((local_10 = uVar9, dVar4 = this->slot_2C(), param_2 == 0 ||
        (pDVar7 = g_array_007FA158, (int)param_2 == dVar4)))) {
      iVar8 = 1;
      local_14 = 1;
      if ((param_4 != nullptr) && (*param_4 != 0)) {
        /* ST_CALLSITE[00678330]: CALL dword ptr [EDX + 0x74] */
        (*this->vtable->vfunc_74)((short)local_28);
        pbVar10 = local_28;
        pbVar5 = param_4;
        do {
          bVar1 = *pbVar5;
          bVar11 = bVar1 < *pbVar10;
          if (bVar1 != *pbVar10) {
LAB_0067835d:
            iVar6 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_00678362;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar11 = bVar1 < pbVar10[1];
          if (bVar1 != pbVar10[1]) goto LAB_0067835d;
          pbVar5 = pbVar5 + 2;
          pbVar10 = pbVar10 + 2;
        } while (bVar1 != 0);
        iVar6 = 0;
LAB_00678362:
        if (iVar6 != 0) {
          iVar8 = 0;
          local_14 = 0;
        }
      }
      pDVar7 = g_array_007FA158;
      uVar9 = local_10;
      if ((iVar8 != 0) &&
         ((local_5 == -1 ||
          /* ST_CALLSITE[0067837D]: CALL dword ptr [EAX + 0x6c] */
          (iVar6 = this->vfunc_6C(), pDVar7 = g_array_007FA158, uVar9 = local_10,
          local_5 == iVar6)))) {
        if ((0 < param_8) &&
           (((0 < param_9 && (0 < param_10)) &&
            /* ST_CALLSITE[006783B1]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            ((STFishC::sub_004162B0(this,&local_8,&local_a,&local_c), local_8 < param_5 ||
             ((((local_a < param_6 || (local_c < param_7)) ||
               ((int)param_5 + (int)param_8 <= (int)local_8)) ||
              (((int)param_6 + (int)param_9 <= (int)local_a ||
               (iVar8 = local_14, (int)param_7 + (int)param_10 <= (int)local_c)))))))))) {
          iVar8 = 0;
        }
        pDVar7 = g_array_007FA158;
        uVar9 = local_10;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        if (((iVar8 != 0) && (param_11 != nullptr)) &&
           /* ST_CALLSITE[00678427]: CALL EAX */
           (iVar8 = (*(code *)param_11)(param_1,local_10,this,param_12), pDVar7 = g_array_007FA158,
           uVar9 = local_10, iVar8 != 0)) {
          g_currentExceptionFrame = local_6c.previous;
          return -1;
        }
      }
    }
    uVar9 = uVar9 - 1;
    if ((int)uVar9 < 0) {
      g_currentExceptionFrame = local_6c.previous;
      return local_18;
    }
  } while( true );
}

