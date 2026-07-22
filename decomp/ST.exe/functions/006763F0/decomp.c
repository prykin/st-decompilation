#include "../../pseudocode_runtime.h"


/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 336 | 337 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

int __cdecl _GetEmbrGrpTobjGrpExch(uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  DArrayTy *array;
  int iVar2;
  STGroupBoatC *this;
  ushort *puVar3;
  STGameObjC *pSVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  InternalExceptionFrame local_50;
  DArrayTy *local_c;
  int local_8;

  uVar7 = 0;
  local_c = (DArrayTy *)0x0;
  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    if (g_allPlayers_007FA174 == (STAllPlayersC *)0x0) {
      this = (STGroupBoatC *)0x0;
    }
    else {
      this = thunk_FUN_0042b760((char)param_1,0);
    }
    if (this != (STGroupBoatC *)0x0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      local_c = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)this,unaff_EDI);
    }
    array = local_c;
    if (local_c->count != 0) {
      uVar6 = 0;
      if (local_c->count == 0) {
        puVar3 = (ushort *)0x0;
        goto LAB_00676470;
      }
      do {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, uVar6) (runtime stride) */
        puVar3 = (ushort *)(array->elementSize * uVar6 + (int)array->data);
LAB_00676470:
        pSVar4 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,(char)param_1,(uint)*puVar3,CASE_1);
        if (pSVar4 != (STGameObjC *)0x0) {
          iVar2 = (*pSVar4->vtable->vfunc_2C)();
          if (iVar2 == 0x78) {
            iVar2 = pSVar4->field_0259;
          }
          else {
            iVar2 = 0;
          }
          if (param_2 == iVar2) {
            iVar2 = (*pSVar4->vtable->vfunc_2C)();
            if (iVar2 == 0x78) {
              iVar2 = pSVar4->field_0269;
            }
            else {
              iVar2 = -1;
            }
            if (param_3 == iVar2) {
              local_8 = local_8 + 1;
            }
          }
        }
        uVar7 = uVar7 + 1;
        uVar6 = uVar7 & 0xffff;
      } while (uVar6 < array->count);
    }
    if (array != (DArrayTy *)0x0) {
      DArrayDestroy(array);
    }
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  if (local_c != (DArrayTy *)0x0) {
    DArrayDestroy(local_c);
  }
  iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_mdef.cpp",0x150,0,iVar2,"%s",
                             "_GetEmbrGrpTobjGrpExch");
  if (iVar5 == 0) {
    RaiseInternalException(iVar2,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x151);
    return iVar2;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

