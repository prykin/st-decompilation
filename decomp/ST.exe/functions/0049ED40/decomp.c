
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::DCBomb */

undefined4 __thiscall STGroupBoatC::DCBomb(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  DArrayTy *groupContent;
  int iVar3;
  STBoatC *pSVar4;
  uint *groupContent_00;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  uint uVar9;
  InternalExceptionFrame local_78;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  STGroupBoatC *local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  DArrayTy *local_c;
  uint local_8;
  
  local_10 = *(int *)(this->field_0029 + 0xc);
  local_c = (DArrayTy *)0x0;
  local_14 = (uint *)0x0;
  local_24 = 2;
  local_18 = 0;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_28 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_28;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar8 = (undefined4 *)&local_28->field_0x89;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      local_28->field_0065 = 0;
      local_20 = 0;
      *(undefined4 *)&local_28->field_0x2bd = local_28->field_018C;
      local_28->field_02C1 = local_28->field_0190;
      local_30 = *(undefined2 *)&local_28->field_0x2bd;
      local_34 = PTR_00802a38->field_00E4;
      local_2c = local_28->field_02C1;
      local_2e = local_28->field_02BF;
      groupContent_00 = local_14;
      local_1c = local_34;
      if (0 < local_10) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pSVar2->field_0029,local_20,&local_8);
          if ((short)local_8 != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2->field_0024),local_8
                                ,CASE_1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb6b);
            }
            if ((pSVar4->field_06F7 == CASE_4) && (0 < *(int *)&pSVar4->field_0x7be)) {
              if (groupContent_00 == (uint *)0x0) {
                groupContent_00 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                local_14 = groupContent_00;
              }
              Library::DKW::TBL::FUN_006ae1c0(groupContent_00,&local_8);
              STBoatC::CmdToObj(pSVar4,CASE_A,&local_34);
            }
            else {
              iVar3 = thunk_FUN_00490d90((int)pSVar4);
              if (iVar3 == 0) {
                STBoatC::CmdToObj(pSVar4,CASE_3,&local_1c);
              }
              else {
                if (local_c == (DArrayTy *)0x0) {
                  local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                }
                Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_8);
              }
            }
          }
          local_20 = local_20 + 1;
        } while ((int)local_20 < local_10);
      }
      groupContent = local_c;
      STAllPlayersC::RegisterPGPair
                (g_sTAllPlayers_007FA174,CONCAT31((int3)((uint)local_10 >> 8),pSVar2->field_0024),
                 groupContent_00,&local_c->flags);
      if (groupContent_00 != (uint *)0x0) {
        FUN_006ae110((byte *)groupContent_00);
      }
      if (groupContent != (DArrayTy *)0x0) {
        FUN_006ae110((byte *)groupContent);
      }
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0xb84);
    }
    uVar9 = 0;
    if ((uint)PTR_00802a38->field_00E4 % 0x1e == 10) {
      if (0 < local_10) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pSVar2->field_0029,uVar9,&local_8);
          if ((short)local_8 != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)(local_8 >> 8),pSVar2->field_0024),local_8,CASE_1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb8b);
            }
            iVar3 = thunk_FUN_0045ff10((int)pSVar4);
            if ((iVar3 == 10) || (uVar5 = STBoatC::CheckPBoxCmd(pSVar4,CASE_A), uVar5 == 1)) {
              local_18 = local_18 + 1;
              break;
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < local_10);
      }
      if (local_18 == 0) {
        local_24 = 0;
      }
    }
    g_currentExceptionFrame = local_78.previous;
  }
  else {
    g_currentExceptionFrame = local_78.previous;
    if (iVar3 != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb94,0,iVar3,&DAT_007a4ccc
                                 ,s_STGroupBoatC__DCBomb_007ac0d0);
      if (iVar6 == 0) {
        RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb95);
        return 0xffffffff;
      }
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
  }
  return local_24;
}

