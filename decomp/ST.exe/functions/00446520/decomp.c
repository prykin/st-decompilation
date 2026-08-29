#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DeleteGuardBoat

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0044EE30 -> 00446520 @ 0045A2BF | 0044EE30 -> 00446520 @ 0045A2D4 | 0044EE30 ->
   00446520 @ 0045AAC8 | 0044EE30 -> 00446520 @ 0045AADD | 0045EF00 -> 00446520 @ 0045EF2A |
   00490E00 -> 00446520 @ 00490E46
   [STAbiConsistencyApplier] stack_parameter_width: parameter=/char Evidence: entry-use width=/char;
   unmasked_dword_reads=0; evidence=00446526 MOVSX EAX,byte ptr [EBP + 0x8] */

void __thiscall
STAllPlayersC::DeleteGuardBoat(STAllPlayersC *this,char param_1,short param_2,int param_3)

{
  dword dVar1;
  STAllPlayersC *this_00;
  int iVar3;
  STBoatC *pSVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  DArrayTy *array;
  uint uVar8;
  InternalExceptionFrame local_68;
  DArrayTy *local_24;
  DArrayTy *local_20;
  DArrayTy *local_1c;
  DArrayTy *local_18;
  STAllPlayersC *local_14;
  uint local_10;
  dword local_c;
  short local_8 [2];

  local_68.previous = g_currentExceptionFrame;
  local_18 = (DArrayTy *)g_packedRecords_A62x8[param_1].field1976_0x9f6;
  g_currentExceptionFrame = &local_68;
  local_14 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  array = local_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_68.previous;
    if (iVar3 != -0x5001fff7) {

      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x296d,0,0,"%s",
                                 "STAllPlayersC::DeleteGuardBoat");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_allpl.cpp",0x296e);
    }
    return;
  }
  if (local_18 == nullptr) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\to_allpl.cpp",
               0x291d);
  }
  local_c = array->count;
  if (param_3 == 1) {
    uVar6 = 0;
    if (0 < (int)local_c) {
      do {

        DArrayGetElement(array,uVar6,&local_24);
        uVar7 = 0;
        uVar8 = local_20->count;
        if (0 < (int)uVar8) {
          do {

            DArrayGetElement(local_20,uVar7,local_8);
            if (local_8[0] == param_2) {

              DArrayRemoveAt(local_20,uVar7);
              /* ST_CALLSITE[00446602]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
              pSVar4 = GetObjPtr(local_14,param_1,local_8[0],CASE_1);
              local_10 = g_playSystem_00802A38->field_00E4;
              /* ST_CALLSITE[0044661E]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
              STBoatC::CmdToObj(pSVar4,CASE_21,&local_10);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar8);
        }
        if (uVar7 != uVar8) {
          if (uVar8 == 1) {
            DArrayDestroy(local_24);
            DArrayDestroy(local_20);
            DArrayDestroy(local_1c);

            DArrayRemoveAt(local_18,uVar6);
            local_c = local_c - 1;
          }
          break;
        }
        uVar6 = uVar6 + 1;
        array = local_18;
      } while ((int)uVar6 < (int)local_c);
    }
    if (local_c == 0) {
      /* ST_CALLSITE[00446670]: CALL 0x00402095; direct=00402095 STAllPlayersC::DeletePGPairs */
      DeletePGPairs(local_14,param_1);
      g_currentExceptionFrame = local_68.previous;
      return;
    }
  }
  else {
    uVar6 = 0;
    if (0 < (int)local_c) {
      do {

        DArrayGetElement(array,uVar6,&local_24);
        uVar7 = 0;
        uVar8 = local_24->count;
        if (0 < (int)uVar8) {
          do {

            DArrayGetElement(local_24,uVar7,local_8);
            if (local_8[0] == param_2) {

              DArrayRemoveAt(local_24,uVar7);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar8);
        }
        if ((uVar7 != uVar8) && (uVar8 == 1)) {
          uVar8 = 0;
          dVar1 = local_20->count;
          if (0 < (int)dVar1) {
            do {

              DArrayGetElement(local_20,uVar8,local_8);
              /* ST_CALLSITE[00446710]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
              pSVar4 = GetObjPtr(local_14,param_1,local_8[0],CASE_1);
              if (pSVar4 == nullptr) {

                iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\to_allpl.cpp",0x2955,0,0,
                                           "%s","STAllPlayersC::DeleteGuardBoat NULL"
                                          );
                if (iVar3 != 0) {
                  STDebugBreak(); /* noreturn in standalone pseudocode */
                }
              }
              else {
                local_10 = g_playSystem_00802A38->field_00E4;
                /* ST_CALLSITE[00446755]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
                STBoatC::CmdToObj(pSVar4,CASE_21,&local_10);
              }
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)dVar1);
          }
          DArrayDestroy(local_24);
          DArrayDestroy(local_20);
          DArrayDestroy(local_1c);

          DArrayRemoveAt(local_18,uVar6);
          local_c = local_c - 1;
          uVar6 = uVar6 - 1;
        }
        uVar6 = uVar6 + 1;
        array = local_18;
      } while ((int)uVar6 < (int)local_c);
    }
    if (local_c == 0) {
      /* ST_CALLSITE[004467A3]: CALL 0x00402095; direct=00402095 STAllPlayersC::DeletePGPairs */
      DeletePGPairs(local_14,param_1);
      g_currentExceptionFrame = local_68.previous;
      return;
    }
  }
  this_00 = local_14;
  /* ST_CALLSITE[004467C3]: CALL 0x004017fd; direct=004017FD STAllPlayersC::OptimizeGuardBoats */
  OptimizeGuardBoats(local_14,param_1);
  /* ST_CALLSITE[004467CB]: CALL 0x0040100a; direct=0040100A STAllPlayersC::DistributeGuardBoats */
  DistributeGuardBoats(this_00,param_1);
  g_currentExceptionFrame = local_68.previous;
  return;
}

