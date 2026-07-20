
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpRepSub */

undefined4 __thiscall STGroupBoatC::GrpRepSub(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  AnonShape_006ACC70_C8641025 *pAVar4;
  AnonShape_006ACC70_C8641025 *groupContent;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  STBoatC *pSVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  uint uVar10;
  InternalExceptionFrame local_84;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_36;
  STGroupBoatC *local_30;
  int local_2c;
  int local_28;
  AnonShape_006ACC70_C8641025 *local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  STBoatC *local_14;
  AnonShape_006ACC70_C8641025 *local_10;
  uint local_c;
  STBoatC *local_8;
  
  local_14 = *(STBoatC **)(this->field_0029 + 0xc);
  local_10 = (AnonShape_006ACC70_C8641025 *)0x0;
  local_24 = (AnonShape_006ACC70_C8641025 *)0x0;
  local_28 = 0;
  local_2c = 0;
  local_1c = 2;
  local_84.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_84;
  local_30 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_30;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_84.previous;
    if (iVar3 == -0x5001fff7) {
      return local_1c;
    }
    iVar6 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xda5,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpRepSub_007ac190);
    if (iVar6 != 0) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xda6);
    return 0xffffffff;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_004a0c5b;
  puVar9 = (undefined4 *)&local_30->field_0x89;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  local_30->field_0065 = 0;
  iVar3 = FUN_006e62d0(PTR_00802a38,local_30->field_01C5,(int *)&local_8);
  if (iVar3 == -4) {
    return 0;
  }
  thunk_FUN_004162f0(local_8,(undefined2 *)&pSVar2->field_0304,
                     (undefined2 *)((int)&pSVar2->field_0304 + 2),(undefined2 *)&pSVar2->field_0308)
  ;
  local_20 = 0;
  *(undefined4 *)((int)&pSVar2->field_0308 + 2) = local_8->field_0018;
  local_40 = PTR_00802a38->field_00E4;
  pSVar8 = local_8;
  groupContent = local_24;
  local_18 = local_40;
  if (0 < (int)local_14) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pSVar2->field_0029,local_20,&local_c);
      if ((short)local_c != -1) {
        local_8 = (STBoatC *)
                  STAllPlayersC::GetObjPtr
                            (g_sTAllPlayers_007FA174,
                             CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2->field_0024),local_c,
                             CASE_1);
        if (local_8 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c
                     ,0xd64);
        }
        iVar3 = (*local_8->vtable->vfunc_F8)();
        if (iVar3 != 0) {
          iVar3 = thunk_FUN_00490d90((int)local_8);
          if (iVar3 == 0) {
            iVar3 = (*local_8->vtable->vfunc_2C)();
            if ((iVar3 == 7) || (iVar3 == 0x13)) {
              iVar3 = thunk_FUN_00492370((int)local_8);
              if (iVar3 == 0) {
                local_3a = *(undefined2 *)((int)&pSVar2->field_0304 + 2);
                local_3c = *(undefined2 *)&pSVar2->field_0304;
                local_38 = *(undefined2 *)&pSVar2->field_0308;
                local_36 = *(undefined4 *)((int)&pSVar2->field_0308 + 2);
                STBoatC::CmdToObj(local_8,CASE_E,&local_40);
                pAVar4 = local_10;
                if (local_10 == (AnonShape_006ACC70_C8641025 *)0x0) {
                  pAVar4 = (AnonShape_006ACC70_C8641025 *)
                           Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  local_10 = pAVar4;
                }
                goto LAB_004a0b93;
              }
            }
            else {
              STBoatC::CmdToObj(local_8,CASE_3,&local_18);
            }
          }
          else {
            pAVar4 = groupContent;
            if (groupContent == (AnonShape_006ACC70_C8641025 *)0x0) {
              groupContent = (AnonShape_006ACC70_C8641025 *)
                             Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              pAVar4 = groupContent;
              local_24 = groupContent;
            }
LAB_004a0b93:
            Library::DKW::TBL::FUN_006ae1c0((uint *)pAVar4,&local_c);
          }
        }
      }
      local_20 = local_20 + 1;
      pSVar8 = local_14;
    } while ((int)local_20 < (int)local_14);
  }
  pAVar4 = local_10;
  if (local_10 == (AnonShape_006ACC70_C8641025 *)0x0) {
LAB_004a0bcc:
    if (groupContent != (AnonShape_006ACC70_C8641025 *)0x0) {
      local_14 = (STBoatC *)groupContent->field_000C;
      uVar10 = 0;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70(groupContent,uVar10,&local_c);
          local_8 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,
                               CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2->field_0024),local_c,
                               CASE_1);
          STBoatC::CmdToObj(local_8,CASE_3,&local_18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)local_14);
      }
      local_1c = 0;
    }
    pAVar4 = local_10;
    if (local_10 != (AnonShape_006ACC70_C8641025 *)0x0) goto LAB_004a0c2f;
    if (groupContent == (AnonShape_006ACC70_C8641025 *)0x0) {
      local_1c = 0;
    }
LAB_004a0c2b:
    if (pAVar4 != (AnonShape_006ACC70_C8641025 *)0x0) goto LAB_004a0c2f;
  }
  else {
    if (groupContent != (AnonShape_006ACC70_C8641025 *)0x0) {
      STAllPlayersC::RegisterPGPair
                (g_sTAllPlayers_007FA174,CONCAT31((int3)((uint)pSVar8 >> 8),pSVar2->field_0024),
                 (uint *)local_10,(uint *)groupContent);
      goto LAB_004a0c2b;
    }
    if (local_10 == (AnonShape_006ACC70_C8641025 *)0x0) goto LAB_004a0bcc;
LAB_004a0c2f:
    FUN_006ae110((byte *)pAVar4);
  }
  if (groupContent != (AnonShape_006ACC70_C8641025 *)0x0) {
    FUN_006ae110((byte *)groupContent);
  }
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd8f);
LAB_004a0c5b:
  pSVar8 = local_14;
  if ((uint)PTR_00802a38->field_00E4 % 0x14 == 4) {
    uVar10 = 0;
    if (0 < (int)local_14) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pSVar2->field_0029,uVar10,&local_c);
        if ((short)local_c != -1) {
          local_8 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (g_sTAllPlayers_007FA174,
                               CONCAT31((int3)(local_c >> 8),pSVar2->field_0024),local_c,CASE_1);
          if (local_8 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd97);
          }
          iVar3 = (*local_8->vtable->vfunc_F8)();
          if ((iVar3 != 0) &&
             (((iVar3 = (*local_8->vtable->vfunc_2C)(), iVar3 == 7 || (iVar3 == 0x13)) ||
              (iVar3 == 0x1b)))) {
            local_28 = 1;
            iVar3 = thunk_FUN_0045ff10((int)local_8);
            if ((iVar3 == 0xe) || (uVar5 = STBoatC::CheckPBoxCmd(local_8,CASE_E), uVar5 == 1)) {
              local_2c = 1;
              break;
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)pSVar8);
    }
    if ((local_28 == 0) || (local_2c == 0)) {
      local_1c = 0;
    }
  }
  g_currentExceptionFrame = local_84.previous;
  return local_1c;
}

