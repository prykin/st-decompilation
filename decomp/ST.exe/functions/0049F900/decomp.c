#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Teleport */

undefined4 __thiscall STGroupBoatC::Teleport(STGroupBoatC *this,int param_1)

{
  undefined2 uVar2;
  STGroupBoatC *pSVar3;
  int iVar3;
  STBoatC *pSVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_6c;
  uint local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  STGroupBoatC *local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8 = *(uint *)(this->field_0029 + 0xc);
  uVar8 = 0;
  local_10 = 2;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  pSVar3 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      memset(&local_14->field_0089, 0, 0x54); /* compiler bulk-zero initialization */
      local_14->field_0065 = 0;
      local_14->field_02D8 = local_14->field_01A3;
      uVar2 = local_14->field_01A9;
      local_14->field_02DC = local_14->field_01A7;
      local_14->field_02DE = uVar2;
      uVar2 = local_14->field_01AD;
      local_14->field_02E0 = local_14->field_01AB;
      local_14->field_02E2 = uVar2;
      uVar2 = local_14->field_01B1;
      local_14->field_02E4 = local_14->field_01AF;
      local_14->field_02E6 = uVar2;
      local_24 = local_14->field_02D8;
      local_28 = g_playSystem_00802A38->field_00E4;
      local_20 = local_14->field_02DC;
      local_1c = local_14->field_02E0;
      local_16 = local_14->field_02E6;
      local_1e = local_14->field_02DE;
      local_1a = local_14->field_02E2;
      local_18 = local_14->field_02E4;
      if (0 < (int)local_8) {
        do {
          DArrayGetElement((DArrayTy *)pSVar3->field_0029,uVar8,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_c),CASE_1);
            if (pSVar4 == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xc46);
            }
            STBoatC::CmdToObj(pSVar4,CASE_15,&local_28);
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)local_8);
      }
    }
    if (g_playSystem_00802A38->field_00E4 % 0x19 == 1) {
      uVar8 = 0;
      if (0 < (int)local_8) {
        do {
          DArrayGetElement((DArrayTy *)pSVar3->field_0029,uVar8,local_c);
          if (STPiece<0,2>(local_c) != 0xffff) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_allPlayers_007FA174,pSVar3->field_0024,STPiece<0,2>(local_c),CASE_1);
            if (pSVar4 == nullptr) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xc51);
            }
            iVar7 = thunk_FUN_0045ff10((STGameObjC *)pSVar4);
            if (iVar7 == 0x15) break;
            uVar5 = STBoatC::CheckPBoxCmd(pSVar4,CASE_15);
            if (uVar5 == 1) break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)local_8);
      }
      if (uVar8 == local_8) {
        local_10 = 0;
      }
    }
    g_currentExceptionFrame = local_6c.previous;
  }
  else {
    g_currentExceptionFrame = local_6c.previous;
    if (iVar3 != -0x5001fff7) {
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xc5a,0,iVar3,"%s"
                                 ,"STGroupBoatC::Teleport");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xc5b);
      return 0xffffffff;
    }
  }
  return local_10;
}

