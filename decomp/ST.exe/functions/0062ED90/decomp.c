#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::RubbishCreatePart */

int __thiscall STRubbishC::RubbishCreatePart(STRubbishC *this)

{
  int iVar2;
  int *piVar2;
  undefined4 *puVar3;
  AnonShape_004AB810_8E5693D5 *pAVar4;
  int iVar7;
  int iVar5;
  int iVar6;
  InternalExceptionFrame local_50;
  STRubbishC *local_c;
  int local_8;

  local_8 = -1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\nick\\to_Rubb.cpp",0xd9,0,iVar2,"%s",
                               "STRubbishC::RubbishCreatePart");
    if (iVar7 == 0) {
      RaiseInternalException(iVar2,0,"E:\\__titans\\nick\\to_Rubb.cpp",0xdb);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  piVar2 = &local_c->field_01E5;
  iVar6 = 0;
  iVar5 = local_8;
  do {
    if (*piVar2 == 0) {
      local_8 = iVar5;
      puVar3 = Library::DKW::LIB::MemAlloc(0x3e);
      (&local_c->field_01E5)[iVar6] = puVar3;
      if (puVar3 != nullptr) {
        for (iVar5 = 0xf; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar3 = 0;
          puVar3 = puVar3 + 1;
        }
        *(undefined2 *)puVar3 = 0;
        iVar5 = iVar6;
        if (local_c->field_01F9 != '\0') {
          pAVar4 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
          if (pAVar4 == nullptr) {
            pAVar4 = nullptr;
          }
          else {
            pAVar4 = thunk_FUN_004ab810(pAVar4);
          }
          *(AnonShape_004AB810_8E5693D5 **)((&local_c->field_01E5)[iVar6] + 0x10) = pAVar4;
        }
      }
      g_currentExceptionFrame = local_50.previous;
      return iVar5;
    }
    iVar5 = 5;
    iVar6 = iVar6 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar6 < 5);
  g_currentExceptionFrame = local_50.previous;
  return 5;
}

