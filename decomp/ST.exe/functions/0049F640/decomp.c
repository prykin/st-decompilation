#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Recharge */

undefined4 __thiscall STGroupBoatC::Recharge(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *pSVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  InternalExceptionFrame local_68;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  STGroupBoatC *local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8 = *(uint *)(this->field_0029 + 0xc);
  uVar8 = 0;
  local_10 = 2;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0);
  pSVar2 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar9 = &local_14->field_0089;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_14->field_0065 = 0;
      local_14->field_02CE = local_14->field_0199;
      *(undefined4 *)&local_14->field_0x2d2 = local_14->field_019D;
      local_14->field_02D6 = local_14->field_01A1;
      local_20 = local_14->field_02CE;
      local_24 = PTR_00802a38->field_00E4;
      local_1c = *(undefined2 *)&local_14->field_0x2d2;
      local_18 = local_14->field_02D6;
      local_1a = *(undefined2 *)&local_14->field_0x2d4;
      if (0 < (int)local_8) {
        do {
          DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar8,&local_c);
          if ((short)local_c != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_c,CASE_1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xc11);
            }
            STBoatC::CmdToObj(pSVar4,CASE_16,&local_24);
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)local_8);
      }
    }
    if ((uint)PTR_00802a38->field_00E4 % 0x19 == 7) {
      uVar8 = 0;
      if (0 < (int)local_8) {
        do {
          DArrayGetElement((DArrayTy *)pSVar2->field_0029,uVar8,&local_c);
          if ((short)local_c != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,pSVar2->field_0024,local_c,CASE_1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xc1c);
            }
            iVar3 = thunk_FUN_0045ff10((int)pSVar4);
            if (iVar3 == 0x16) break;
            uVar5 = STBoatC::CheckPBoxCmd(pSVar4,CASE_16);
            if (uVar5 == 1) break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)local_8);
      }
      if (uVar8 == local_8) {
        local_10 = 0;
      }
    }
    g_currentExceptionFrame = local_68.previous;
  }
  else {
    g_currentExceptionFrame = local_68.previous;
    if (iVar3 != -0x5001fff7) {
      iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0xc25,0,iVar3,"%s"
                                 ,"STGroupBoatC::Recharge");
      if (iVar6 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      RaiseInternalException(iVar3,0,"E:\\__titans\\wlad\\to_grpb.cpp",0xc26);
      return 0xffffffff;
    }
  }
  return local_10;
}

