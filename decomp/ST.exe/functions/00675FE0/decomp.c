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
    groupContent = (DArrayTy *)STAllPlayersC::GetObjsList(objPtr);
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
            this = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,objPtr,*puVar3,CASE_1);
            if (this != nullptr) {
              iVar4 = this->vfunc_2C();
              if (iVar4 == 0x78) {
                iVar4 = this->vfunc_2C();
                if (iVar4 == 0x78) {
                  this->field_0269 = 0xffffffff;
                }
              }
            }
            uVar6 = uVar6 + 1;
            uVar5 = uVar6 & 0xffff;
          } while (uVar5 < groupContent->count);
        }
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

