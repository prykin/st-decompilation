#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 280 | 281 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl _AddAllGrpExch(uint param_1)

{
  dword dVar1;
  int iVar3;
  DArrayTy *groupContent;
  ushort *puVar3;
  STGameObjC *this;
  int iVar4;
  int iVar5;
  uint uVar5;
  uint uVar6;
  char objPtr;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;

  iVar3 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_48.previous;

    iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_mdef.cpp",0x118,0,iVar3,"%s",
                               "_AddAllGrpExch");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x119);
    return;
  }
  if (g_allPlayers_007FA174 != nullptr) {
    objPtr = (char)param_1;
    /* ST_CALLSITE[00676024]: CALL 0x00404abb; direct=00404ABB STAllPlayersC::GetObjsList; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArrayTy;/char */
    groupContent = STAllPlayersC::GetObjsList(objPtr);
    if (groupContent != nullptr) {
      dVar1 = groupContent->count;
      if (dVar1 != 0) {
        uVar6 = 0;
        if (dVar1 != 0) {
          uVar5 = 0;
          if (dVar1 == 0) {
            puVar3 = nullptr;
            goto LAB_00676053;
          }
          do {
            puVar3 = DArrayAt<ushort>(groupContent, uVar5);
LAB_00676053:
            /* ST_CALLSITE[00676063]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
            this = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,objPtr,*puVar3,CASE_1);
            if (this != nullptr) {
              /* ST_CALLSITE[00676072]: CALL dword ptr [EAX + 0x2c] */
              iVar4 = this->vfunc_2C();
              if (iVar4 == 0x78) {
                /* ST_CALLSITE[0067607E]: CALL dword ptr [EDX + 0x2c] */
                iVar4 = this->vfunc_2C();
                if (iVar4 == 0x78) {
                  this->field_0269 = -1;
                }
              }
            }
            uVar6 = uVar6 + 1;
            uVar5 = uVar6 & 0xffff;
          } while (uVar5 < groupContent->count);
        }
        /* ST_CALLSITE[006760AF]: CALL 0x0040178f; direct=0040178F STAllPlayersC::AddObjsToGroup */
        STAllPlayersC::AddObjsToGroup(g_allPlayers_007FA174,objPtr,0,groupContent,nullptr);
      }
      if (groupContent != nullptr) {
        DArrayDestroy(groupContent);
      }
    }
  }
  g_currentExceptionFrame = local_48.previous;
  return;
}

