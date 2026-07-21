#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_Rubb.cpp
   STRubbishC::RubbishCreatePart */

int __thiscall STRubbishC::RubbishCreatePart(STRubbishC *this)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  AnonShape_004AB810_8E5693D5 *pAVar5;
  undefined4 uVar6;
  int iVar7;
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
  piVar3 = &local_c->field_01E5;
  iVar2 = 0;
  iVar7 = local_8;
  do {
    if (*piVar3 == 0) {
      local_8 = iVar7;
      puVar4 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(0x3e);
      (&local_c->field_01E5)[iVar2] = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        for (iVar7 = 0xf; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        *(undefined2 *)puVar4 = 0;
        iVar7 = iVar2;
        if (local_c->field_01F9 != '\0') {
          pAVar5 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
          if (pAVar5 == (AnonShape_004AB810_8E5693D5 *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = thunk_FUN_004ab810(pAVar5);
          }
          *(undefined4 *)((&local_c->field_01E5)[iVar2] + 0x10) = uVar6;
        }
      }
      g_currentExceptionFrame = local_50.previous;
      return iVar7;
    }
    iVar7 = 5;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 5);
  g_currentExceptionFrame = local_50.previous;
  return 5;
}

