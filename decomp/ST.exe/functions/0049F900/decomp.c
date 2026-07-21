#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Teleport */

undefined4 __thiscall STGroupBoatC::Teleport(STGroupBoatC *this,int param_1)

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
  InternalExceptionFrame local_6c;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  undefined2 local_16;
  STGroupBoatC *local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_8 = *(uint *)(this->field_0029 + 0xc);
  uVar8 = 0;
  local_10 = 2;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0);
  pSVar2 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar9 = &local_14->field_0089;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      local_14->field_0065 = 0;
      local_14->field_02D8 = local_14->field_01A3;
      *(undefined4 *)&local_14->field_0x2dc = local_14->field_01A7;
      *(undefined4 *)&local_14->field_0x2e0 = local_14->field_01AB;
      *(undefined4 *)&local_14->field_0x2e4 = local_14->field_01AF;
      local_24 = local_14->field_02D8;
      local_28 = PTR_00802a38->field_00E4;
      local_20 = *(undefined2 *)&local_14->field_0x2dc;
      local_1c = *(undefined2 *)&local_14->field_0x2e0;
      local_16 = *(undefined2 *)&local_14->field_0x2e6;
      local_1e = *(undefined2 *)&local_14->field_0x2de;
      local_1a = *(undefined2 *)&local_14->field_0x2e2;
      local_18 = *(undefined2 *)&local_14->field_0x2e4;
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
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xc46);
            }
            STBoatC::CmdToObj(pSVar4,CASE_15,&local_28);
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)local_8);
      }
    }
    if ((uint)PTR_00802a38->field_00E4 % 0x19 == 1) {
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
                         "E:\\__titans\\wlad\\to_grpb.cpp",0xc51);
            }
            iVar3 = thunk_FUN_0045ff10((int)pSVar4);
            if (iVar3 == 0x15) break;
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

