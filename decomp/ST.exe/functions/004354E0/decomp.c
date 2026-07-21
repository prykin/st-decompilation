#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::ReplaceObject
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=0043553B MOVSX ECX,byte ptr [EBP + 0x8] | 00435596 MOVSX
   EAX,byte ptr [EBP + 0x8] */

void __thiscall
STAllPlayersC::ReplaceObject(STAllPlayersC *this,char param_1,undefined4 param_2,undefined4 param_3)

{
  DArrayTy *pDVar1;
  code *pcVar2;
  int errorCode;
  int iVar3;
  DArrayTy **ppDVar4;
  uint uVar5;
  uint index;
  int *piVar6;
  dword dVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined3 in_stack_00000005;
  InternalExceptionFrame local_64;
  DArrayTy *local_20 [3];
  dword local_14;
  DArrayTy *local_10;
  void *local_c;
  undefined4 local_8;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  errorCode = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  if (errorCode != 0) {
    g_currentExceptionFrame = local_64.previous;
    if (errorCode != -0x5001fff7) {
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x117c,0,errorCode,
                                 "%s","STAllPlayersC::ReplaceObject");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(errorCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x117d);
    }
    return;
  }
  local_10 = (DArrayTy *)0x0;
  do {
    uVar5 = (uint)DAT_0080874d;
    if ((*(int *)((int)(g_playerRuntime[uVar5].tempSlots + 2) + (int)local_10 + 4) == 0x19a) &&
       (*(int *)((int)(g_playerRuntime[uVar5].tempSlots + 2) + (int)local_10 + 8) == (int)param_1))
    {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      pDVar1 = *(DArrayTy **)((int)(g_playerRuntime[uVar5].tempSlots + 2) + (int)local_10 + 0xe);
      uVar5 = 0;
      dVar7 = pDVar1->count;
      if (0 < (int)dVar7) {
        do {
          DArrayGetElement(pDVar1,uVar5,&local_8);
          if ((short)local_8 == (short)param_2) {
            local_8 = param_3;
            Library::DKW::TBL::FUN_006ae140(&pDVar1->flags,uVar5,&local_8);
            break;
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 < (int)dVar7);
      }
    }
    local_10 = (DArrayTy *)((int)local_10 + 0x10);
  } while ((int)local_10 < 0x91);
  local_10 = g_playerRuntime[param_1].pgPairs;
  if (((local_10 != (DArrayTy *)0x0) && (local_14 = local_10->count, local_14 != 0)) &&
     (uVar5 = 0, 0 < (int)local_14)) {
    do {
      DArrayGetElement(local_10,uVar5,local_20);
      if (local_20[0] != (DArrayTy *)0x0) {
        dVar7 = local_20[0]->count;
        index = 0;
        if (0 < (int)dVar7) {
          do {
            DArrayGetElement(local_20[0],index,&local_8);
            if ((short)local_8 == (short)param_2) {
              Library::DKW::TBL::FUN_006ae140(&local_20[0]->flags,index,&param_3);
              break;
            }
            index = index + 1;
          } while ((int)index < (int)dVar7);
        }
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)local_14);
  }
  local_10 = (DArrayTy *)&g_playerRuntime[0].groups;
  do {
    pDVar1 = *(DArrayTy **)local_10;
    uVar5 = 0;
    dVar7 = pDVar1->count;
    if (0 < (int)dVar7) {
      do {
        DArrayGetElement(pDVar1,uVar5,&local_c);
        if (local_c != (void *)0x0) {
          thunk_FUN_004a8220(local_c,param_1,(short)param_2,(short)param_3);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar7);
    }
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    local_10 = (DArrayTy *)((int)local_10 + 0xa62);
  } while ((int)local_10 < 0x7fa135);
  ppDVar4 = &g_playerRuntime[0].objects;
  do {
    pDVar1 = *ppDVar4;
    if (((pDVar1 != (DArrayTy *)0x0) && (dVar7 = pDVar1->count, dVar7 != 0)) &&
       (piVar6 = pDVar1->data, 0 < (int)dVar7)) {
      do {
        if ((int *)*piVar6 != (int *)0x0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)*piVar6 + 0x8c))(_param_1,param_2,param_3);
        }
        piVar6 = piVar6 + 1;
        dVar7 = dVar7 - 1;
      } while (dVar7 != 0);
    }
    /* ST_PSEUDO[flattened_global_record_array]: expected g_playerRuntime[player].field[index...] after base/stride proof */
    ppDVar4 = (DArrayTy **)((int)ppDVar4 + 0xa62);
  } while ((int)ppDVar4 < 0x7fa139);
  g_currentExceptionFrame = local_64.previous;
  return;
}

