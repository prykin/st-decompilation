#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_DeleteGuardBoat
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=004461B6 MOVSX EAX,byte ptr [EBP + 0x8] */

undefined4 __thiscall
STAllPlayersC::_DeleteGuardBoat(STAllPlayersC *this,char param_1,short param_2,int param_3)

{
  dword dVar1;
  code *pcVar2;
  int exceptionCode;
  STBoatC *pSVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  DArrayTy *array;
  uint uVar8;
  InternalExceptionFrame local_6c;
  DArrayTy *local_28;
  DArrayTy *local_24;
  DArrayTy *local_20;
  STAllPlayersC *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  DArrayTy *local_10;
  uint local_c;
  dword local_8;

  local_18 = 0xffffffff;
  local_6c.previous = g_currentExceptionFrame;
  local_10 = g_playerRuntime[param_1].pgPairs;
  g_currentExceptionFrame = &local_6c;
  local_1c = this;
  exceptionCode = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  array = local_10;
  if (exceptionCode != 0) {
    g_currentExceptionFrame = local_6c.previous;
    if (exceptionCode != -0x5001fff7) {
      iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2906,0,0,"%s",
                                 "STAllPlayersC::_DeleteGuardBoat");
      if (iVar4 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(exceptionCode,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x2907);
    }
    return local_18;
  }
  if (local_10 == (DArrayTy *)0x0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x28ba);
  }
  local_8 = array->count;
  if (param_3 == 1) {
    uVar6 = 0;
    if (0 < (int)local_8) {
      do {
        DArrayGetElement(array,uVar6,&local_28);
        uVar7 = 0;
        uVar8 = local_24->count;
        if (0 < (int)uVar8) {
          do {
            DArrayGetElement(local_24,uVar7,&local_c);
            if ((short)local_c == param_2) {
              FUN_006b0c70(local_24,uVar7);
              pSVar3 = (STBoatC *)GetObjPtr(local_1c,param_1,local_c,CASE_1);
              local_14 = PTR_00802a38->field_00E4;
              STBoatC::CmdToObj(pSVar3,CASE_21,&local_14);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar8);
        }
        if (uVar7 != uVar8) {
          if (uVar8 == 1) {
            DArrayDestroy(local_28);
            DArrayDestroy(local_24);
            DArrayDestroy(local_20);
            FUN_006b0c70(local_10,uVar6);
            local_8 = local_8 - 1;
          }
          local_18 = 0;
          break;
        }
        uVar6 = uVar6 + 1;
        array = local_10;
      } while ((int)uVar6 < (int)local_8);
    }
  }
  else {
    uVar6 = 0;
    if (0 < (int)local_8) {
      do {
        DArrayGetElement(array,uVar6,&local_28);
        uVar7 = 0;
        uVar8 = local_28->count;
        if (0 < (int)uVar8) {
          do {
            DArrayGetElement(local_28,uVar7,&local_c);
            if ((short)local_c == param_2) {
              FUN_006b0c70(local_28,uVar7);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar8);
        }
        if (uVar7 != uVar8) {
          if (uVar8 == 1) {
            uVar8 = 0;
            dVar1 = local_24->count;
            if (0 < (int)dVar1) {
              do {
                DArrayGetElement(local_24,uVar8,&local_c);
                pSVar3 = (STBoatC *)GetObjPtr(local_1c,param_1,local_c,CASE_1);
                local_14 = PTR_00802a38->field_00E4;
                STBoatC::CmdToObj(pSVar3,CASE_21,&local_14);
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < (int)dVar1);
            }
            DArrayDestroy(local_28);
            DArrayDestroy(local_24);
            DArrayDestroy(local_20);
            FUN_006b0c70(local_10,uVar6);
            local_8 = local_8 - 1;
            uVar6 = uVar6 - 1;
          }
          local_18 = 0;
        }
        uVar6 = uVar6 + 1;
        array = local_10;
      } while ((int)uVar6 < (int)local_8);
    }
  }
  if (local_8 == 0) {
    DeletePGPairs(local_1c,param_1);
  }
  g_currentExceptionFrame = local_6c.previous;
  return local_18;
}

