#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Scout

   [STPrototypeApplier] Propagated return.
   Evidence: 004A0590 returns return of STGroupBoatC::Way3DGrpGetDistrPoint @ 004A0681 */

uint * __thiscall STGroupBoatC::Scout(STGroupBoatC *this,int param_1)

{
  short *psVar1;
  short *psVar2;
  STGroupBoatC *pSVar4;
  int iVar5;
  DArrayTy *array;
  STBoatC *pSVar5;
  int iVar8;
  uint *puVar6;
  int iVar7;
  dword index;
  uint uVar9;
  InternalExceptionFrame local_80;
  uint local_3c;
  ushort local_38;
  ushort local_36;
  ushort local_34;
  ushort local_32;
  ushort local_30;
  ushort local_2e;
  ushort local_2c;
  ushort local_2a;
  ushort local_28;
  ushort local_24;
  ushort local_22;
  ushort local_20;
  DArrayTy *local_1c;
  STGroupBoatC *local_18;
  uint *local_14;
  DArrayTy *local_10;
  byte local_c [4];
  dword local_8;

  local_8 = this->field_0029->count;
  local_14 = (uint *)0x2;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_18 = this;

  iVar5 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
  pSVar4 = local_18;
  if (iVar5 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      psVar1 = &local_18->field_0300;
      memset(&local_18->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
      local_18->field_0065 = 0;
      psVar2 = &local_18->field_0302;
      local_18->field_02FA = local_18->field_01C1;
      local_18->field_02FC = local_18->field_01C3;
      local_18->field_02F8 = local_18->field_01BF;
      /* ST_CALLSITE[004A063B]: CALL 0x004019d8; direct=004019D8 STGroupBoatC::sub_0049A500 */
      sub_0049A500(local_18,&local_18->field_02FE,psVar1,psVar2);
      /* ST_CALLSITE[004A066F]: CALL 0x00403bca; direct=00403BCA STGroupBoatC::Way3DGrpGetDistrPoint; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArrayTy; signature=__stdcall;pointer:/SubmarineTitans/Recovered/DArrayTy;pointer:/STGroupBoatC;pointer:/SubmarineTitans/Recovered/DArrayTy;/int;/int;/undefined4;/int;/int;/int */
      local_10 = Way3DGrpGetDistrPoint
                           (pSVar4,pSVar4->field_0029,(int)pSVar4->field_02FE,(int)*psVar1,
                            (int)*psVar2,(int)pSVar4->field_02F8,(int)pSVar4->field_02FA,
                            (int)pSVar4->field_02FC);
      if (local_10 == nullptr) {
        return nullptr;
      }
      array = (DArrayTy *)
              /* ST_CALLSITE[004A06B3]: CALL 0x00403bca; direct=00403BCA STGroupBoatC::Way3DGrpGetDistrPoint */
              Way3DGrpGetDistrPoint
                        (pSVar4,pSVar4->field_0029,(int)pSVar4->field_02F8,(int)pSVar4->field_02FA,
                         (int)pSVar4->field_02FC,(int)pSVar4->field_02FE,(int)*psVar1,(int)*psVar2);
      local_1c = array;
      if (array == nullptr) {
        DArrayDestroy(local_10);
        return nullptr;
      }
      uVar9 = 0;
      local_3c = g_playSystem_00802A38->field_00E4;
      if (0 < (int)local_8) {
        do {

          DArrayGetElement(local_10,uVar9,&local_24);

          DArrayGetElement(array,uVar9,&local_2c);

          DArrayGetElement(pSVar4->field_0029,uVar9,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[004A0730]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar5 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar4->field_0024,STPiece<0,2>(local_c),CASE_1);
            if (pSVar5 == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xd2a);
            }
            local_38 = local_24;
            local_36 = local_22;
            local_32 = local_2c;
            local_34 = local_20;
            local_30 = local_2a;
            local_2e = local_28;
            /* ST_CALLSITE[004A078E]: CALL 0x00402126; direct=00402126 STBoatC::CmdToObj */
            STBoatC::CmdToObj(pSVar5,CASE_8,&local_3c);
            array = local_1c;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)local_8);
      }
      DArrayDestroy(local_10);
      DArrayDestroy(array);
    }
    if (g_playSystem_00802A38->field_00E4 % 0x19 == 3) {
      index = 0;
      if (0 < (int)local_8) {
        do {

          DArrayGetElement(pSVar4->field_0029,index,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            /* ST_CALLSITE[004A07FC]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/STBoatC; signature=__thiscall;pointer:/STBoatC;pointer:/STAllPlayersC;/char;/ushort;/SubmarineTitans/Recovered/Enums/STAllPlayersC_GetObjPtr_param_3Enum */
            pSVar5 = STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar4->field_0024,STPiece<0,2>(local_c),CASE_1);
            if (pSVar5 == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xd3d);
            }
            /* ST_CALLSITE[004A0824]: CALL 0x00402edc; direct=00402EDC STGameObjC::sub_0045FF10 */
            iVar7 = STGameObjC::sub_0045FF10((STGameObjC *)pSVar5);
            if (iVar7 == 8) break;
            /* ST_CALLSITE[004A0832]: CALL 0x00404df9; direct=00404DF9 STBoatC::CheckPBoxCmd */
            uVar9 = STBoatC::CheckPBoxCmd(pSVar5,CASE_8);
            if (uVar9 == 1) break;
          }
          index = index + 1;
        } while ((int)index < (int)local_8);
      }
      if (index == local_8) {
        local_14 = nullptr;
      }
    }
    g_currentExceptionFrame = local_80.previous;
  }
  else {
    g_currentExceptionFrame = local_80.previous;
    if (iVar5 != -0x5001fff7) {

      iVar8 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xd46,0,iVar5,"%s"
                                 ,"STGroupBoatC::Scout");
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar5,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xd47);
      return (uint *)0xffffffff;
    }
  }
  return local_14;
}

