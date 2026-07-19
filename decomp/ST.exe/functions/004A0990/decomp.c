
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GrpRepSub */

undefined4 __thiscall STGroupBoatC::GrpRepSub(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  STBoatC *pSVar9;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar10;
  uint uVar11;
  InternalExceptionFrame local_84;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_36;
  STGroupBoatC *local_30;
  int local_2c;
  int local_28;
  uint *local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  STBoatC *local_14;
  uint *local_10;
  uint local_c;
  STBoatC *local_8;
  
  local_14 = *(STBoatC **)(this->field_0029 + 0xc);
  local_10 = (uint *)0x0;
  local_24 = (uint *)0x0;
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
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xda5,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__GrpRepSub_007ac190);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      uVar8 = (*pcVar1)();
      return uVar8;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xda6);
    return 0xffffffff;
  }
  if ((param_1 != 1) && (param_1 != 0)) goto LAB_004a0c5b;
  puVar10 = (undefined4 *)&local_30->field_0x89;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_30->field_0065 = 0;
  iVar3 = FUN_006e62d0(DAT_00802a38,local_30->field_01C5,(int *)&local_8);
  if (iVar3 == -4) {
    return 0;
  }
  thunk_FUN_004162f0(local_8,(undefined2 *)&pSVar2->field_0304,
                     (undefined2 *)((int)&pSVar2->field_0304 + 2),(undefined2 *)&pSVar2->field_0308)
  ;
  local_20 = 0;
  *(undefined4 *)((int)&pSVar2->field_0308 + 2) = local_8->field_0018;
  local_40 = *(undefined4 *)((int)DAT_00802a38 + 0xe4);
  pSVar9 = local_8;
  puVar5 = local_24;
  local_18 = local_40;
  if (0 < (int)local_14) {
    do {
      FUN_006acc70(pSVar2->field_0029,local_20,&local_c);
      if ((short)local_c != -1) {
        local_8 = (STBoatC *)
                  STAllPlayersC::GetObjPtr
                            (DAT_007fa174,
                             CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2->field_0024),local_c,
                             CASE_1);
        if (local_8 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd64);
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
                puVar4 = local_10;
                if (local_10 == (uint *)0x0) {
                  puVar4 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  local_10 = puVar4;
                }
                goto LAB_004a0b93;
              }
            }
            else {
              STBoatC::CmdToObj(local_8,CASE_3,&local_18);
            }
          }
          else {
            puVar4 = puVar5;
            if (puVar5 == (uint *)0x0) {
              puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              puVar4 = puVar5;
              local_24 = puVar5;
            }
LAB_004a0b93:
            Library::DKW::TBL::FUN_006ae1c0(puVar4,&local_c);
          }
        }
      }
      local_20 = local_20 + 1;
      pSVar9 = local_14;
    } while ((int)local_20 < (int)local_14);
  }
  puVar4 = local_10;
  if (local_10 == (uint *)0x0) {
LAB_004a0bcc:
    if (puVar5 != (uint *)0x0) {
      local_14 = (STBoatC *)puVar5[3];
      uVar11 = 0;
      if (0 < (int)local_14) {
        do {
          FUN_006acc70((int)puVar5,uVar11,&local_c);
          local_8 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (DAT_007fa174,
                               CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar2->field_0024),local_c,
                               CASE_1);
          STBoatC::CmdToObj(local_8,CASE_3,&local_18);
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_14);
      }
      local_1c = 0;
    }
    puVar4 = local_10;
    if (local_10 != (uint *)0x0) goto LAB_004a0c2f;
    if (puVar5 == (uint *)0x0) {
      local_1c = 0;
    }
LAB_004a0c2b:
    if (puVar4 != (uint *)0x0) goto LAB_004a0c2f;
  }
  else {
    if (puVar5 != (uint *)0x0) {
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)((uint)pSVar9 >> 8),pSVar2->field_0024),local_10,puVar5
                );
      goto LAB_004a0c2b;
    }
    if (local_10 == (uint *)0x0) goto LAB_004a0bcc;
LAB_004a0c2f:
    FUN_006ae110((byte *)puVar4);
  }
  if (puVar5 != (uint *)0x0) {
    FUN_006ae110((byte *)puVar5);
  }
  RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd8f);
LAB_004a0c5b:
  pSVar9 = local_14;
  if (*(uint *)((int)DAT_00802a38 + 0xe4) % 0x14 == 4) {
    uVar11 = 0;
    if (0 < (int)local_14) {
      do {
        FUN_006acc70(pSVar2->field_0029,uVar11,&local_c);
        if ((short)local_c != -1) {
          local_8 = (STBoatC *)
                    STAllPlayersC::GetObjPtr
                              (DAT_007fa174,CONCAT31((int3)(local_c >> 8),pSVar2->field_0024),
                               local_c,CASE_1);
          if (local_8 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd97);
          }
          iVar3 = (*local_8->vtable->vfunc_F8)();
          if ((iVar3 != 0) &&
             (((iVar3 = (*local_8->vtable->vfunc_2C)(), iVar3 == 7 || (iVar3 == 0x13)) ||
              (iVar3 == 0x1b)))) {
            local_28 = 1;
            iVar3 = thunk_FUN_0045ff10((int)local_8);
            if ((iVar3 == 0xe) || (uVar6 = STBoatC::CheckPBoxCmd(local_8,CASE_E), uVar6 == 1)) {
              local_2c = 1;
              break;
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)pSVar9);
    }
    if ((local_28 == 0) || (local_2c == 0)) {
      local_1c = 0;
    }
  }
  g_currentExceptionFrame = local_84.previous;
  return local_1c;
}

