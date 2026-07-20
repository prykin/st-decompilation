
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Capture */

undefined4 __thiscall STGroupBoatC::Capture(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  STGroupBoatC *pSVar3;
  uint *groupContent;
  int iVar4;
  STBoatC *pSVar5;
  uint *groupContent_00;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar9;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  uint uVar10;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  uint uVar11;
  undefined4 unaff_ESI;
  undefined4 *puVar12;
  void *unaff_EDI;
  undefined4 *puVar13;
  STBoatC_CmdToObj_param_1Enum SVar14;
  undefined4 local_9c [5];
  int local_87;
  InternalExceptionFrame local_7c;
  STGroupBoatC *local_38;
  STBoatC *local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined4 local_29;
  undefined4 local_24;
  uint *local_20;
  int local_1c;
  uint *local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_c = *(uint *)(this->field_0029 + 0xc);
  local_18 = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_1c = 0;
  local_24 = 2;
  local_7c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_7c;
  local_38 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_38;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xbf4,0,iVar4,&DAT_007a4ccc,
                               s_STGroupBoatC__Capture_007ac0ec);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xbf5);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar8 = (*pcVar1)();
    return uVar8;
  }
  if ((param_1 == 0) || (uVar8 = extraout_EDX, uVar9 = extraout_var, param_1 == 1)) {
    puVar12 = (undefined4 *)&local_38->field_0x89;
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    local_38->field_0065 = 0;
    local_10 = 0;
    uVar9 = local_38->field_0193;
    uVar2 = local_38->field_0x195;
    local_38->field_0x2c3 = local_38->field_0x192;
    local_38->field_02C4 = uVar9;
    local_38->field_0x2c6 = uVar2;
    *(undefined2 *)&local_38->field_0x2c7 = *(undefined2 *)&local_38->field_0x196;
    local_38->field_0x2c9 = local_38->field_0x198;
    local_2c = local_38->field_0x192;
    local_2b = local_38->field_0193;
    *(undefined4 *)&local_38->field_0x2ca = 0;
    local_30 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_29 = *(undefined4 *)&local_38->field_0x195;
    groupContent_00 = local_20;
    local_14 = local_30;
    if (local_c != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(pSVar3->field_0029,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar3->field_0024),local_8,
                              CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_to_grpb_cpp_007abe3c,0xbb4);
          }
          iVar4 = (*pSVar5->vtable->vfunc_2C)();
          if (((iVar4 == 6) || (iVar4 = (*pSVar5->vtable->vfunc_2C)(), iVar4 == 0x12)) ||
             (iVar4 = (*pSVar5->vtable->vfunc_2C)(), iVar4 == 0x22)) {
            if (groupContent_00 == (uint *)0x0) {
              groupContent_00 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_20 = groupContent_00;
            }
            Library::DKW::TBL::FUN_006ae1c0(groupContent_00,&local_8);
            puVar12 = &local_30;
            SVar14 = CASE_9;
          }
          else {
            iVar4 = thunk_FUN_00490d90((int)pSVar5);
            if (iVar4 != 0) {
              if (local_18 == (uint *)0x0) {
                local_18 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(local_18,&local_8);
              goto LAB_0049f2b2;
            }
            puVar12 = &local_14;
            SVar14 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar5,SVar14,puVar12);
        }
LAB_0049f2b2:
        local_10 = local_10 + 1;
        uVar10 = local_10 & 0xffff;
      } while (uVar10 < local_c);
    }
    groupContent = local_18;
    STAllPlayersC::RegisterPGPair
              (g_sTAllPlayers_007FA174,CONCAT31((int3)(local_c >> 8),pSVar3->field_0024),
               groupContent_00,local_18);
    uVar8 = extraout_EDX_00;
    uVar9 = extraout_var_00;
    if (groupContent_00 != (uint *)0x0) {
      FUN_006ae110((byte *)groupContent_00);
      uVar8 = extraout_EDX_01;
      uVar9 = extraout_var_01;
    }
    if (groupContent != (uint *)0x0) {
      FUN_006ae110((byte *)groupContent);
      uVar8 = extraout_EDX_02;
      uVar9 = extraout_var_02;
    }
  }
  uVar10 = 0;
  if (*(int *)&pSVar3->field_0x2ca == 0) {
    piVar6 = (int *)STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,
                               CONCAT31((int3)((uint)uVar8 >> 8),pSVar3->field_0x2c3),
                               CONCAT22(uVar9,pSVar3->field_02C4),CASE_1);
    if (((piVar6 == (int *)0x0) || (piVar6[6] != *(int *)&pSVar3->field_0x2c6)) ||
       (iVar4 = (**(code **)(*piVar6 + 0x108))((int)pSVar3->field_0024), iVar4 == 0)) {
      *(undefined4 *)&pSVar3->field_0x2ca = 1;
      local_10 = 0;
      local_14 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (0 < (int)local_c) {
        uVar10 = 0;
        do {
          FUN_006acc70(pSVar3->field_0029,uVar10,&local_8);
          if ((short)local_8 != -1) {
            pSVar5 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)((uint)extraout_EDX_03 >> 8),pSVar3->field_0024),
                                local_8,CASE_1);
            local_34 = pSVar5;
            if (pSVar5 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0xbda);
            }
            iVar4 = thunk_FUN_0045ff10((int)pSVar5);
            if (iVar4 == 9) {
              puVar12 = (undefined4 *)&pSVar5->field_0x5fc;
              puVar13 = local_9c;
              for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar13 = *puVar12;
                puVar12 = puVar12 + 1;
                puVar13 = puVar13 + 1;
              }
              *(undefined1 *)puVar13 = *(undefined1 *)puVar12;
              pSVar5 = local_34;
              if (3 < local_87) goto LAB_0049f3f5;
            }
            STBoatC::CmdToObj(pSVar5,CASE_3,&local_14);
          }
LAB_0049f3f5:
          local_10 = local_10 + 1;
          uVar10 = local_10 & 0xffff;
          if ((int)local_c <= (int)uVar10) {
            g_currentExceptionFrame = local_7c.previous;
            return local_24;
          }
        } while( true );
      }
    }
  }
  else if (*(uint *)(DAT_00802a38 + 0xe4) % 0x14 == 5) {
    if (0 < (int)local_c) {
      uVar11 = 0;
      do {
        FUN_006acc70(pSVar3->field_0029,uVar11,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (g_sTAllPlayers_007FA174,
                              CONCAT31((int3)((uint)extraout_ECX_00 >> 8),pSVar3->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_to_grpb_cpp_007abe3c,0xbeb);
          }
          iVar4 = thunk_FUN_0045ff10((int)pSVar5);
          if ((iVar4 == 9) || (uVar11 = STBoatC::CheckPBoxCmd(pSVar5,CASE_9), uVar11 == 1)) {
            local_1c = local_1c + 1;
            break;
          }
        }
        uVar10 = uVar10 + 1;
        uVar11 = uVar10 & 0xffff;
      } while ((int)uVar11 < (int)local_c);
    }
    if (local_1c == 0) {
      local_24 = 0;
    }
  }
  g_currentExceptionFrame = local_7c.previous;
  return local_24;
}

