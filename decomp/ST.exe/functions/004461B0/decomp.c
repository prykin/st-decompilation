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
  int exceptionCode;
  STBoatC *pSVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  DArrayTy *array;
  uint uVar8;
  InternalExceptionFrame local_6c;
  DArrayTy *local_28;
  DArrayTy *local_24;
  DArrayTy *local_20;
  STAllPlayersC *local_1c;
  uint local_18;
  uint local_14;
  DArrayTy *local_10;
  short local_c [2];
  dword local_8;

  local_18 = 0xffffffff;
  local_6c.previous = g_currentExceptionFrame;
  local_10 = (DArrayTy *)g_packedRecords_A62x8[param_1].field1976_0x9f6;
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
  if (local_10 == nullptr) {
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

            DArrayGetElement(local_24,uVar7,local_c);
            if (local_c[0] == param_2) {

              DArrayRemoveAt(local_24,uVar7);
              /* ST_CALLSITE[00446299]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
              pSVar3 = GetObjPtr(local_1c,param_1,local_c[0],CASE_1);
              local_14 = g_playSystem_00802A38->field_00E4;
              /* ST_CALLSITE[004462B5]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
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

            DArrayRemoveAt(local_10,uVar6);
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

            DArrayGetElement(local_28,uVar7,local_c);
            if (local_c[0] == param_2) {

              DArrayRemoveAt(local_28,uVar7);
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

                DArrayGetElement(local_24,uVar8,local_c);
                /* ST_CALLSITE[00446391]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
                pSVar3 = GetObjPtr(local_1c,param_1,local_c[0],CASE_1);
                local_14 = g_playSystem_00802A38->field_00E4;
                /* ST_CALLSITE[004463AD]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
                STBoatC::CmdToObj(pSVar3,CASE_21,&local_14);
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < (int)dVar1);
            }
            DArrayDestroy(local_28);
            DArrayDestroy(local_24);
            DArrayDestroy(local_20);

            DArrayRemoveAt(local_10,uVar6);
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
    /* ST_CALLSITE[00446402]: CALL 0x00402095; direct=00402095 STAllPlayersC::DeletePGPairs */
    DeletePGPairs(local_1c,param_1);
  }
  g_currentExceptionFrame = local_6c.previous;
  return local_18;
}

