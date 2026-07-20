
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpGuard */

undefined4 __thiscall STGroupBoatC::GrpGuard(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  uint *groupContent;
  STBoatC *pSVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_EDX;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  InternalExceptionFrame local_78;
  undefined4 local_34;
  STGroupBoatC *local_30;
  uint local_2c;
  uint *local_28;
  undefined4 local_24;
  uint local_20;
  uint *local_1c;
  int local_18;
  int local_14;
  uint *local_10;
  uint local_c;
  uint *local_8;
  
  local_8 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_20 = *(uint *)(this->field_0029 + 0xc);
  local_28 = (uint *)0x0;
  local_34 = 2;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_30 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_30;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xa3e,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpGuard_007ac034);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return uVar5;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xa3f);
    return 0xffffffff;
  }
  if ((param_1 == 1) || (param_1 == 0)) {
    puVar9 = (undefined4 *)&local_30->field_0x89;
    for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = 0;
      puVar9 = puVar9 + 1;
    }
    local_30->field_0065 = 0;
    local_8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    if (pSVar2->field_0164 == 0) {
      Library::DKW::TBL::FUN_006afe40((int *)&local_8,(uint *)pSVar2->field_0168);
    }
    if (pSVar2->field_0164 == 1) {
      STAllPlayersC::GetGObjFromBox
                (g_sTAllPlayers_007FA174,pSVar2->field_0024,pSVar2->field_016C,pSVar2->field_016E,
                 pSVar2->field_0170,pSVar2->field_0172,pSVar2->field_0174,pSVar2->field_0176,
                 (int *)&local_1c,(int *)&local_10,&local_14,&local_18);
      if (0 < local_14) {
        Library::DKW::TBL::FUN_006afe40((int *)&local_8,local_1c);
      }
      if (0 < local_18) {
        if (local_14 == 0) {
          Library::DKW::TBL::FUN_006afe40((int *)&local_8,local_10);
        }
        else {
          uVar8 = 0;
          if (0 < local_18) {
            do {
              FUN_006acc70((int)local_10,uVar8,&local_c);
              Library::DKW::TBL::FUN_006ae1c0(local_8,&local_c);
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < local_18);
          }
        }
      }
    }
    local_2c = 0;
    groupContent = local_28;
    if (0 < (int)local_20) {
      do {
        FUN_006acc70(pSVar2->field_0029,local_2c,&local_c);
        if ((short)local_c != -1) {
          pSVar4 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2->field_0024),local_c,
                              CASE_1);
          if (pSVar4 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_to_grpb_cpp_007abe3c,0xa1a);
          }
          iVar3 = thunk_FUN_00490d90((int)pSVar4);
          if (iVar3 == 0) {
            local_24 = *(undefined4 *)(DAT_00802a38 + 0xe4);
            STBoatC::CmdToObj(pSVar4,CASE_3,&local_24);
          }
          else {
            if (groupContent == (uint *)0x0) {
              groupContent = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_28 = groupContent;
            }
            Library::DKW::TBL::FUN_006ae1c0(groupContent,&local_c);
          }
        }
        local_2c = local_2c + 1;
      } while ((int)local_2c < (int)local_20);
    }
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(local_20 >> 8),pSVar2->field_0024),local_8,
               groupContent);
    FUN_006ae110((byte *)local_8);
    if (groupContent != (uint *)0x0) {
      FUN_006ae110((byte *)groupContent);
    }
    if ((byte *)pSVar2->field_0168 != (byte *)0x0) {
      FUN_006ae110((byte *)pSVar2->field_0168);
      pSVar2->field_0168 = 0;
    }
  }
  else if (*(uint *)(DAT_00802a38 + 0xe4) % 5 != 0) {
    g_currentExceptionFrame = local_78.previous;
    return local_34;
  }
  uVar8 = 0;
  if (0 < (int)local_20) {
    do {
      FUN_006acc70(pSVar2->field_0029,uVar8,&local_c);
      if ((short)local_c != -1) {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (g_sTAllPlayers_007FA174,
                            CONCAT31((int3)(local_c >> 8),pSVar2->field_0024),local_c,CASE_1);
        if (pSVar4 == (STBoatC *)0x0) {
          iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xa34,0,0,&DAT_007a4ccc
                                     ,s_STGroupBoatC__GrpGuard_NULL_007ac050);
          if (iVar3 != 0) {
            pcVar1 = (code *)swi(3);
            uVar5 = (*pcVar1)();
            return uVar5;
          }
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0xa35);
        }
        iVar3 = thunk_FUN_0045ff10((int)pSVar4);
        if ((iVar3 == 5) || (uVar6 = STBoatC::CheckPBoxCmd(pSVar4,CASE_5), uVar6 == 1)) break;
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)local_20);
  }
  if ((local_20 != 0) && (uVar8 != local_20)) {
    g_currentExceptionFrame = local_78.previous;
    return local_34;
  }
  g_currentExceptionFrame = local_78.previous;
  return 0;
}

