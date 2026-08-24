#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 875 | 895 | 896 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl
_EnumRCField(short param_1,short param_2,short param_3,short param_4,short param_5,short param_6,
            short param_7,undefined *param_8,undefined4 param_9)

{
  STFishC *this;
  int iVar2;
  uint *puVar2;
  dword dVar3;
  int iVar5;
  int iVar4;
  uint uVar6;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  uint local_10;
  short local_a;
  short local_8;
  short local_6;

  local_14 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_mdef.cpp",0x37f,0,iVar2,"%s",
                               "_EnumRCField");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x380);
    return iVar2;
  }
  if (g_array_007FA15C == nullptr) {
    RaiseInternalException
              (-0x34,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_mdef.cpp",0x36b);
  }
  uVar6 = g_array_007FA15C->count - 1;
  if (-1 < (int)uVar6) {
    do {
      if (uVar6 < g_array_007FA15C->count) {
        puVar2 = DArrayAt<undefined4>(g_array_007FA15C, uVar6);
      }
      else {
        puVar2 = nullptr;
      }
      this = (STFishC *)*puVar2;
      if ((this != nullptr) &&
         ((local_10 = uVar6, param_1 == 0 ||
          /* ST_CALLSITE[00677A01]: CALL dword ptr [EDX + 0x2c] */
          (dVar3 = this->slot_2C(), (int)param_1 == dVar3)))) {
        iVar5 = 1;
        local_18 = 1;
        if ((0 < param_5) &&
           (((0 < param_6 && (0 < param_7)) &&
            /* ST_CALLSITE[00677A3C]: CALL 0x004018c5; direct=004018C5 STFishC::sub_004162B0 */
            ((STFishC::sub_004162B0(this,&local_6,&local_8,&local_a), local_6 < param_2 ||
             ((((local_8 < param_3 || (local_a < param_4)) ||
               ((int)param_2 + (int)param_5 <= (int)local_6)) ||
              (((int)param_3 + (int)param_6 <= (int)local_8 ||
               (iVar5 = local_18, (int)param_4 + (int)param_7 <= (int)local_a)))))))))) {
          iVar5 = 0;
        }
        uVar6 = local_10;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        if (((iVar5 != 0) && (param_8 != nullptr)) &&
           /* ST_CALLSITE[00677AB0]: CALL EAX */
           (iVar5 = (*(code *)param_8)(0,local_10,this,param_9), iVar5 != 0)) {
          g_currentExceptionFrame = local_5c.previous;
          return -1;
        }
      }
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) {
        g_currentExceptionFrame = local_5c.previous;
        return local_14;
      }
    } while( true );
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_14;
}

