
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Capture */

undefined4 __thiscall STGroupBoatC::Capture(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  STGroupBoatC *pSVar3;
  uint *puVar4;
  int iVar5;
  STBoatC *pSVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined2 extraout_var;
  undefined4 extraout_ECX;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 uVar11;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  uint uVar12;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  uint uVar13;
  undefined4 unaff_ESI;
  undefined4 *puVar14;
  void *unaff_EDI;
  undefined4 *puVar15;
  STBoatC_CmdToObj_param_1Enum SVar16;
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
  iVar5 = Library::MSVCRT::__setjmp3(local_7c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar3 = local_38;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_7c.previous;
    iVar9 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xbf4,0,iVar5,&DAT_007a4ccc,
                               s_STGroupBoatC__Capture_007ac0ec);
    if (iVar9 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xbf5);
      return 0xffffffff;
    }
    pcVar1 = (code *)swi(3);
    uVar10 = (*pcVar1)();
    return uVar10;
  }
  if ((param_1 == 0) || (uVar10 = extraout_EDX, uVar11 = extraout_var, param_1 == 1)) {
    puVar14 = (undefined4 *)&local_38->field_0x89;
    for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    local_38->field_0065 = 0;
    local_10 = 0;
    uVar11 = local_38->field_0193;
    uVar2 = local_38->field_0x195;
    local_38->field_0x2c3 = local_38->field_0x192;
    local_38->field_02C4 = uVar11;
    local_38->field_0x2c6 = uVar2;
    *(undefined2 *)&local_38->field_0x2c7 = *(undefined2 *)&local_38->field_0x196;
    local_38->field_0x2c9 = local_38->field_0x198;
    local_2c = local_38->field_0x192;
    local_2b = local_38->field_0193;
    *(undefined4 *)&local_38->field_0x2ca = 0;
    local_30 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_29 = *(undefined4 *)&local_38->field_0x195;
    puVar7 = local_20;
    local_14 = local_30;
    if (local_c != 0) {
      uVar12 = 0;
      do {
        FUN_006acc70(pSVar3->field_0029,uVar12,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar3->field_0024),local_8,
                              CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xbb4);
          }
          iVar5 = (*pSVar6->vtable->vfunc_2C)();
          if (((iVar5 == 6) || (iVar5 = (*pSVar6->vtable->vfunc_2C)(), iVar5 == 0x12)) ||
             (iVar5 = (*pSVar6->vtable->vfunc_2C)(), iVar5 == 0x22)) {
            if (puVar7 == (uint *)0x0) {
              puVar7 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_20 = puVar7;
            }
            Library::DKW::TBL::FUN_006ae1c0(puVar7,&local_8);
            puVar14 = &local_30;
            SVar16 = CASE_9;
          }
          else {
            iVar5 = thunk_FUN_00490d90((int)pSVar6);
            if (iVar5 != 0) {
              if (local_18 == (uint *)0x0) {
                local_18 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(local_18,&local_8);
              goto LAB_0049f2b2;
            }
            puVar14 = &local_14;
            SVar16 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar6,SVar16,puVar14);
        }
LAB_0049f2b2:
        local_10 = local_10 + 1;
        uVar12 = local_10 & 0xffff;
      } while (uVar12 < local_c);
    }
    puVar4 = local_18;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(local_c >> 8),pSVar3->field_0024),puVar7,local_18);
    uVar10 = extraout_EDX_00;
    uVar11 = extraout_var_00;
    if (puVar7 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar7);
      uVar10 = extraout_EDX_01;
      uVar11 = extraout_var_01;
    }
    if (puVar4 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar4);
      uVar10 = extraout_EDX_02;
      uVar11 = extraout_var_02;
    }
  }
  uVar12 = 0;
  if (*(int *)&pSVar3->field_0x2ca == 0) {
    piVar8 = (int *)STAllPlayersC::GetObjPtr
                              (DAT_007fa174,CONCAT31((int3)((uint)uVar10 >> 8),pSVar3->field_0x2c3),
                               CONCAT22(uVar11,pSVar3->field_02C4),CASE_1);
    if (((piVar8 == (int *)0x0) || (piVar8[6] != *(int *)&pSVar3->field_0x2c6)) ||
       (iVar5 = (**(code **)(*piVar8 + 0x108))((int)pSVar3->field_0024), iVar5 == 0)) {
      *(undefined4 *)&pSVar3->field_0x2ca = 1;
      local_10 = 0;
      local_14 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (0 < (int)local_c) {
        uVar12 = 0;
        do {
          FUN_006acc70(pSVar3->field_0029,uVar12,&local_8);
          if ((short)local_8 != -1) {
            pSVar6 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,
                                CONCAT31((int3)((uint)extraout_EDX_03 >> 8),pSVar3->field_0024),
                                local_8,CASE_1);
            local_34 = pSVar6;
            if (pSVar6 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xbda);
            }
            iVar5 = thunk_FUN_0045ff10((int)pSVar6);
            if (iVar5 == 9) {
              puVar14 = (undefined4 *)&pSVar6->field_0x5fc;
              puVar15 = local_9c;
              for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
                *puVar15 = *puVar14;
                puVar14 = puVar14 + 1;
                puVar15 = puVar15 + 1;
              }
              *(undefined1 *)puVar15 = *(undefined1 *)puVar14;
              pSVar6 = local_34;
              if (3 < local_87) goto LAB_0049f3f5;
            }
            STBoatC::CmdToObj(pSVar6,CASE_3,&local_14);
          }
LAB_0049f3f5:
          local_10 = local_10 + 1;
          uVar12 = local_10 & 0xffff;
          if ((int)local_c <= (int)uVar12) {
            g_currentExceptionFrame = local_7c.previous;
            return local_24;
          }
        } while( true );
      }
    }
  }
  else if (*(uint *)(DAT_00802a38 + 0xe4) % 0x14 == 5) {
    if (0 < (int)local_c) {
      uVar13 = 0;
      do {
        FUN_006acc70(pSVar3->field_0029,uVar13,&local_8);
        if ((short)local_8 != -1) {
          pSVar6 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX_00 >> 8),pSVar3->field_0024),
                              local_8,CASE_1);
          if (pSVar6 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xbeb);
          }
          iVar5 = thunk_FUN_0045ff10((int)pSVar6);
          if ((iVar5 == 9) || (uVar13 = STBoatC::CheckPBoxCmd(pSVar6,CASE_9), uVar13 == 1)) {
            local_1c = local_1c + 1;
            break;
          }
        }
        uVar12 = uVar12 + 1;
        uVar13 = uVar12 & 0xffff;
      } while ((int)uVar13 < (int)local_c);
    }
    if (local_1c == 0) {
      local_24 = 0;
    }
  }
  g_currentExceptionFrame = local_7c.previous;
  return local_24;
}

