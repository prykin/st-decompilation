
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
  undefined4 extraout_EDX;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
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
  
  local_8 = *(uint *)(this->field_0029 + 0xc);
  uVar8 = 0;
  local_10 = 2;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar9 = (undefined4 *)&local_14->field_0x89;
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
      local_16 = local_14->field_02E6;
      local_1e = local_14->field_02DE;
      local_1a = local_14->field_02E2;
      local_18 = *(undefined2 *)&local_14->field_0x2e4;
      if (0 < (int)local_8) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pSVar2->field_0029,uVar8,&local_c);
          if ((short)local_c != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2->field_0024),local_c
                                ,CASE_1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc46);
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
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pSVar2->field_0029,uVar8,&local_c);
          if ((short)local_c != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)(local_c >> 8),pSVar2->field_0024),local_c,CASE_1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc51);
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
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc5a,0,iVar3,&DAT_007a4ccc
                                 ,s_STGroupBoatC__Teleport_007ac124);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc5b);
      return 0xffffffff;
    }
  }
  return local_10;
}

