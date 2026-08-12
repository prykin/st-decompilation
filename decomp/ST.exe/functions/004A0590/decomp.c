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
  uint uVar6;
  int iVar8;
  uint *puVar7;
  int iVar9;
  uint uVar11;
  InternalExceptionFrame local_80;
  uint local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  DArrayTy *local_1c;
  STGroupBoatC *local_18;
  uint *local_14;
  DArrayTy *local_10;
  undefined1 local_c [4];
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8 = *(uint *)(this->field_0029 + 0xc);
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
      sub_0049A500(local_18,&local_18->field_02FE,psVar1,psVar2);
      local_10 = (DArrayTy *)
                 Way3DGrpGetDistrPoint
                           (pSVar4,(DArrayTy *)pSVar4->field_0029,(int)pSVar4->field_02FE,
                            (int)*psVar1,(int)*psVar2,(int)pSVar4->field_02F8,
                            (int)pSVar4->field_02FA,(int)pSVar4->field_02FC);
      if (local_10 == nullptr) {
        return nullptr;
      }
      array = (DArrayTy *)
              Way3DGrpGetDistrPoint
                        (pSVar4,(DArrayTy *)pSVar4->field_0029,(int)pSVar4->field_02F8,
                         (int)pSVar4->field_02FA,(int)pSVar4->field_02FC,(int)pSVar4->field_02FE,
                         (int)*psVar1,(int)*psVar2);
      local_1c = array;
      if (array == nullptr) {
        DArrayDestroy(local_10);
        return nullptr;
      }
      uVar11 = 0;
      local_3c = g_playSystem_00802A38->field_00E4;
      if (0 < (int)local_8) {
        do {
          DArrayGetElement(local_10,uVar11,&local_24);
          DArrayGetElement(array,uVar11,&local_2c);
          DArrayGetElement((DArrayTy *)pSVar4->field_0029,uVar11,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar5 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
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
            STBoatC::CmdToObj(pSVar5,CASE_8,&local_3c);
            array = local_1c;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_8);
      }
      DArrayDestroy(local_10);
      DArrayDestroy(array);
    }
    if (g_playSystem_00802A38->field_00E4 % 0x19 == 3) {
      uVar11 = 0;
      if (0 < (int)local_8) {
        do {
          DArrayGetElement((DArrayTy *)pSVar4->field_0029,uVar11,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar5 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar4->field_0024,STPiece<0,2>(local_c),CASE_1);
            if (pSVar5 == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xd3d);
            }
            iVar9 = thunk_FUN_0045ff10((STGameObjC *)pSVar5);
            if (iVar9 == 8) break;
            uVar6 = STBoatC::CheckPBoxCmd(pSVar5,CASE_8);
            if (uVar6 == 1) break;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_8);
      }
      if (uVar11 == local_8) {
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

