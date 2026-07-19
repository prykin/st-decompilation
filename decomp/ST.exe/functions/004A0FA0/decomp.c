
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::RechargeNewCmd */

void __thiscall STGroupBoatC::RechargeNewCmd(STGroupBoatC *this,void *param_1)

{
  STBoatC_field_06F7State SVar1;
  code *pcVar2;
  STGroupBoatC *this_00;
  int iVar3;
  uint uVar4;
  STBoatC *pSVar5;
  undefined4 extraout_EAX;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  undefined4 extraout_ECX_05;
  int extraout_ECX_06;
  int extraout_ECX_07;
  int extraout_ECX_08;
  int extraout_ECX_09;
  undefined4 extraout_ECX_10;
  undefined4 extraout_ECX_11;
  int extraout_ECX_12;
  int extraout_ECX_13;
  int extraout_ECX_14;
  int extraout_ECX_15;
  int extraout_ECX_16;
  int extraout_ECX_17;
  int extraout_ECX_18;
  int extraout_ECX_19;
  int extraout_ECX_20;
  int extraout_ECX_21;
  undefined4 extraout_ECX_22;
  int extraout_ECX_23;
  int extraout_ECX_24;
  int extraout_ECX_25;
  int extraout_ECX_26;
  int extraout_ECX_27;
  int extraout_ECX_28;
  int extraout_ECX_29;
  undefined4 extraout_ECX_30;
  undefined4 extraout_ECX_31;
  undefined4 extraout_ECX_32;
  undefined4 extraout_ECX_33;
  undefined4 extraout_ECX_34;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 extraout_EDX_08;
  undefined4 extraout_EDX_09;
  undefined4 extraout_EDX_10;
  undefined4 extraout_EDX_11;
  undefined4 extraout_EDX_12;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STBoatC_CmdToObj_param_1Enum SVar12;
  undefined4 *puVar13;
  InternalExceptionFrame local_19c;
  STGroupBoatC *local_158;
  undefined4 local_154;
  undefined2 local_150;
  undefined2 local_14e;
  undefined2 local_14c;
  undefined4 local_14a;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_13a;
  undefined2 local_136;
  undefined1 local_134;
  undefined2 local_133;
  uint *local_130 [3];
  short local_124;
  short local_122;
  short local_120;
  undefined4 local_114;
  short local_110;
  undefined4 local_102;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined2 local_f4;
  undefined2 local_f2;
  undefined2 local_f0;
  undefined2 local_ee;
  undefined2 local_ec;
  undefined2 local_ea;
  uint local_e8;
  undefined4 local_e4 [3];
  undefined4 local_d8;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined2 local_d0;
  undefined4 local_ce;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined2 local_b2;
  undefined2 local_b0;
  undefined4 local_ae;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined2 local_a0;
  undefined4 local_9e;
  undefined4 local_98;
  undefined2 local_94;
  undefined2 local_92;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 local_8c;
  undefined2 local_8a;
  undefined4 local_88;
  undefined1 local_84;
  undefined2 local_83;
  undefined4 local_81;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined2 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined4 local_4c;
  uint local_48;
  int local_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  uint *local_28;
  undefined2 local_22;
  short local_20;
  short local_1e;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  uint *local_c;
  uint local_8;
  
  local_14 = *(uint *)(this->field_002D + 0xc);
  local_e8 = 0xffffffff;
  local_c = (uint *)0x0;
  local_10 = (uint *)0x0;
  local_19c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_19c;
  local_158 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_19c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_158;
  uVar10 = local_14;
  uVar11 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_19c.previous;
    if (iVar3 == -0x5001fff7) {
      return;
    }
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x10dc,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__RechargeNewCmd_007ac1ac);
    if (iVar7 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x10dd);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  while (uVar11 = uVar11 - 1, -1 < (int)uVar11) {
    FUN_006acc70(this_00->field_002D,uVar11,&local_8);
    uVar4 = STAllPlayersC::GetObjPtr
                      (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX >> 8),this_00->field_0024),
                       local_8,CASE_1);
    if ((uVar4 == 0) || (*(int *)(uVar4 + 0x20) != 0x14)) {
      FUN_006b0c70(this_00->field_002D,uVar11);
      uVar10 = uVar10 - 1;
    }
  }
  if (uVar10 == 0) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xdf7);
  }
  iVar3 = this_00->field_01E6;
  uVar11 = *(uint *)(this_00->field_002D + 0xc);
  local_14 = uVar11;
  if (iVar3 == 1) {
    InitWay(this_00,this_00->field_002D,this_00->field_003D,this_00->field_0041,this_00->field_0045)
    ;
    uVar10 = 0;
    local_18 = 0;
    iVar3 = *(int *)(DAT_00802a38 + 0xe4);
    local_40 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0xffff;
    local_44 = iVar3;
    if (uVar11 != 0) {
      do {
        FUN_006acc70(this_00->field_002D,uVar10,&local_8);
        pSVar5 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,
                            CONCAT31((int3)((uint)extraout_EDX >> 8),this_00->field_0024),local_8,
                            CASE_1);
        if (pSVar5 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xe03);
        }
        STBoatC::CmdToObj(pSVar5,CASE_1,&local_44);
        local_18 = local_18 + 1;
        uVar10 = local_18 & 0xffff;
        iVar3 = extraout_ECX_00;
      } while (uVar10 < uVar11);
    }
  }
  if (this_00->field_01E6 == 3) {
    local_18 = 0;
    local_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    if (uVar11 != 0) {
      uVar10 = 0;
      do {
        uVar10 = FUN_006acc70(this_00->field_002D,uVar10,&local_8);
        pSVar5 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,CONCAT31((int3)(uVar10 >> 8),this_00->field_0024),local_8,
                            CASE_1);
        if (pSVar5 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xe46);
        }
        STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
        local_18 = local_18 + 1;
        uVar10 = local_18 & 0xffff;
        iVar3 = extraout_ECX_01;
      } while (uVar10 < uVar11);
    }
  }
  if (this_00->field_01E6 == 2) {
    DistributeTargets(this_00,(uint *)this_00->field_002D);
    iVar3 = extraout_ECX_02;
  }
  if (this_00->field_01E6 == 6) {
    local_4c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    ReMakePatrolPoints(this_00,(int)unaff_EDI);
    local_28 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    if (*(int *)(this_00->field_022E + 0xc) == 0) {
      uVar10 = 0;
      local_18 = 0;
      if (uVar11 != 0) {
        uVar11 = 0;
        do {
          FUN_006acc70(this_00->field_002D,uVar11,&local_8);
          local_110 = (short)local_8;
          local_114 = 0;
          local_102 = 0;
          Library::DKW::TBL::FUN_006ae140((uint *)this_00->field_022E,uVar10,&local_114);
          local_48 = uVar10;
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_EAX >> 8),this_00->field_0024),local_8,
                              CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xe77,0,0,
                                       &DAT_007a4ccc,s_STGroupBoatC__RechargeNewCmd_Pat_007ac1d0);
            if (iVar3 != 0) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xe78);
          }
          Library::DKW::TBL::FUN_006ae1c0(local_28,&local_8);
          STBoatC::CmdToObj(pSVar5,CASE_6,&local_4c);
          uVar10 = uVar10 + 1;
          local_18 = local_18 + 1;
          uVar11 = local_18 & 0xffff;
        } while (uVar11 < local_14);
      }
    }
    else {
      local_18 = 0;
      if (uVar11 != 0) {
        do {
          uVar11 = *(uint *)(this_00->field_022E + 0xc);
          uVar10 = uVar11;
          uVar4 = local_18;
          while (uVar11 = uVar11 - 1, local_18 = uVar4, -1 < (int)uVar11) {
            FUN_006acc70(this_00->field_022E,uVar11,&local_114);
            uVar4 = local_18;
            if (local_110 == -1) {
              uVar10 = uVar11;
            }
          }
          FUN_006acc70(this_00->field_002D,uVar4 & 0xffff,&local_8);
          local_114 = 0;
          local_102 = 0;
          local_110 = (short)local_8;
          Library::DKW::TBL::FUN_006ae140((uint *)this_00->field_022E,uVar10,&local_114);
          local_48 = uVar10;
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            iVar3 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xe64,0,0,
                                       &DAT_007a4ccc,s_STGroupBoatC__RechargeNewCmd_Pat_007ac1d0);
            if (iVar3 != 0) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xe65);
          }
          Library::DKW::TBL::FUN_006ae1c0(local_28,&local_8);
          STBoatC::CmdToObj(pSVar5,CASE_6,&local_4c);
          local_18 = uVar4 + 1;
        } while ((local_18 & 0xffff) < local_14);
      }
    }
    FUN_006acc70(this_00->field_022A,this_00->field_0232,(undefined4 *)&local_124);
    puVar9 = local_28;
    if (local_28[3] != 0) {
      InitWay(this_00,(int)local_28,(int)local_124,(int)local_122,(int)local_120);
    }
    FUN_006ae110((byte *)puVar9);
    iVar3 = extraout_ECX_03;
  }
  if (this_00->field_01E6 == 7) {
    uVar11 = 0;
    iVar3 = *(int *)(DAT_00802a38 + 0xe4);
    local_40 = 0xffff;
    local_3e = 0xffff;
    local_3c = 0xffff;
    local_44 = iVar3;
    if (local_14 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_002D,uVar10,&local_8);
        pSVar5 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,
                            CONCAT31((int3)((uint)extraout_EDX_01 >> 8),this_00->field_0024),local_8
                            ,CASE_1);
        if (pSVar5 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xe8c);
        }
        thunk_FUN_004162b0(pSVar5,&local_20,&local_1e,&local_22);
        thunk_FUN_00481520(pSVar5,(int)local_20,(int)local_1e,*(undefined4 *)&this_00->field_0x222);
        STBoatC::CmdToObj(pSVar5,CASE_1,&local_44);
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
        iVar3 = extraout_ECX_04;
      } while (uVar10 < local_14);
    }
  }
  if (this_00->field_01E6 == 8) {
    local_18 = 0;
    local_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    if (local_14 != 0) {
      do {
        uVar11 = local_18 & 0xffff;
        FUN_006acc70(this_00->field_002D,uVar11,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_EDX_02 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xe9a);
          }
          iVar3 = (*pSVar5->vtable->vfunc_2C)();
          if (((iVar3 != 8) && (iVar3 = (*pSVar5->vtable->vfunc_2C)(), iVar3 != 0x14)) &&
             (iVar3 = (*pSVar5->vtable->vfunc_2C)(), iVar3 != 0x1a)) {
            iVar3 = thunk_FUN_00490d90((int)pSVar5);
            if (iVar3 == 0) {
              STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
            }
            else {
              if (local_c == (uint *)0x0) {
                local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
            }
            FUN_006b0c70(this_00->field_002D,uVar11);
            local_18 = local_18 + 0xffff;
            local_14 = local_14 - 1;
          }
        }
        local_18 = local_18 + 1;
      } while ((local_18 & 0xffff) < local_14);
    }
    uVar11 = 0;
    local_18 = *(uint *)(this_00->field_0029 + 0xc);
    if (local_18 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_0029,uVar10,&local_8);
        if ((short)local_8 != -1) {
          piVar6 = (int *)STAllPlayersC::GetObjPtr
                                    (DAT_007fa174,
                                     CONCAT31((int3)((uint)extraout_ECX_05 >> 8),this_00->field_0024
                                             ),local_8,CASE_1);
          if (piVar6 == (int *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xeb0);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 8) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x14)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x1a)) {
            if (local_10 == (uint *)0x0) {
              local_10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(local_10,&local_8);
          }
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_18);
    }
    puVar9 = local_c;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(local_18 >> 8),this_00->field_0024),local_10,local_c);
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
    }
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
    }
    DistributeMD(this_00,1,*(int *)&this_00->field_0x24e,*(int *)&this_00->field_0x266,
                 this_00->field_002D);
    iVar3 = extraout_ECX_06;
  }
  if (this_00->field_01E6 == 9) {
    uVar11 = 0;
    local_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_154 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_150 = *(undefined2 *)&this_00->field_0x276;
    local_14e = *(undefined2 *)&this_00->field_0x278;
    local_14a = *(undefined4 *)&this_00->field_0x27c;
    local_14c = *(undefined2 *)&this_00->field_0x27a;
    local_146 = *(undefined4 *)&this_00->field_0x280;
    local_133 = *(undefined2 *)&this_00->field_0x293;
    local_142 = *(undefined4 *)&this_00->field_0x284;
    local_13e = *(undefined4 *)&this_00->field_0x288;
    local_13a = *(undefined4 *)&this_00->field_0x28c;
    local_136 = *(undefined2 *)&this_00->field_0x290;
    local_134 = this_00->field_0x292;
    if (local_14 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_002D,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_EDX_03 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xecf);
          }
          iVar3 = (*pSVar5->vtable->vfunc_2C)();
          if (((iVar3 == 0xc) || (iVar3 = (*pSVar5->vtable->vfunc_2C)(), iVar3 == 0x18)) ||
             (iVar3 = (*pSVar5->vtable->vfunc_2C)(), iVar3 == 0x19)) {
            puVar13 = &local_154;
            SVar12 = CASE_11;
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)pSVar5);
            if (iVar3 != 0) {
              if (local_c == (uint *)0x0) {
                local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
              goto LAB_004a1878;
            }
            puVar13 = &local_1c;
            SVar12 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar5,SVar12,puVar13);
        }
LAB_004a1878:
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_14);
    }
    uVar11 = 0;
    local_18 = *(uint *)(this_00->field_0029 + 0xc);
    if (local_18 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_0029,uVar10,&local_8);
        if ((short)local_8 != -1) {
          piVar6 = (int *)STAllPlayersC::GetObjPtr
                                    (DAT_007fa174,
                                     CONCAT31((int3)((uint)extraout_EDX_04 >> 8),this_00->field_0024
                                             ),local_8,CASE_1);
          if (piVar6 == (int *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xee9);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 0xc) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x18)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x19)) {
            if (local_10 == (uint *)0x0) {
              local_10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(local_10,&local_8);
          }
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_18);
    }
    puVar9 = local_c;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(local_18 >> 8),this_00->field_0024),local_10,local_c);
    iVar3 = extraout_ECX_07;
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
      iVar3 = extraout_ECX_08;
    }
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
      iVar3 = extraout_ECX_09;
    }
  }
  if (this_00->field_01E6 == 10) {
    uVar11 = 0;
    local_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_64 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_60 = *(undefined2 *)&this_00->field_0295;
    local_5e = *(undefined2 *)((int)&this_00->field_0295 + 2);
    local_5c = this_00->field_0299;
    if (local_14 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_002D,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX_10 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xf02);
          }
          iVar3 = (*pSVar5->vtable->vfunc_2C)();
          if (((iVar3 == 8) || (iVar3 = (*pSVar5->vtable->vfunc_2C)(), iVar3 == 0x14)) ||
             (iVar3 = (*pSVar5->vtable->vfunc_2C)(), iVar3 == 0x1a)) {
            puVar13 = &local_64;
            SVar12 = CASE_D;
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)pSVar5);
            if (iVar3 != 0) {
              if (local_c == (uint *)0x0) {
                local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
              goto LAB_004a1a74;
            }
            puVar13 = &local_1c;
            SVar12 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar5,SVar12,puVar13);
        }
LAB_004a1a74:
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_14);
    }
    uVar11 = 0;
    local_18 = *(uint *)(this_00->field_0029 + 0xc);
    if (local_18 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_0029,uVar10,&local_8);
        if ((short)local_8 != -1) {
          piVar6 = (int *)STAllPlayersC::GetObjPtr
                                    (DAT_007fa174,
                                     CONCAT31((int3)((uint)extraout_ECX_11 >> 8),this_00->field_0024
                                             ),local_8,CASE_1);
          if (piVar6 == (int *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xf1c);
          }
          iVar3 = (**(code **)(*piVar6 + 0x2c))();
          if (((iVar3 == 8) || (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x14)) ||
             (iVar3 = (**(code **)(*piVar6 + 0x2c))(), iVar3 == 0x1a)) {
            if (local_10 == (uint *)0x0) {
              local_10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(local_10,&local_8);
          }
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_18);
    }
    puVar9 = local_c;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(local_18 >> 8),this_00->field_0024),local_10,local_c);
    iVar3 = extraout_ECX_12;
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
      iVar3 = extraout_ECX_13;
    }
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
      iVar3 = extraout_ECX_14;
    }
  }
  if (this_00->field_01E6 == 4) {
    DistributeDock(this_00,1,this_00->field_029F,this_00->field_002D);
    iVar3 = extraout_ECX_15;
  }
  if (this_00->field_01E6 == 5) {
    uVar11 = 0;
    if (local_14 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_002D,uVar10,&local_8);
        iVar3 = extraout_ECX_16;
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX_16 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xf35);
          }
          iVar3 = thunk_FUN_00490d90((int)pSVar5);
          if (iVar3 == 0) {
            local_1c = *(undefined4 *)(DAT_00802a38 + 0xe4);
            STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
            iVar3 = extraout_ECX_17;
          }
          else {
            if (local_c == (uint *)0x0) {
              local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
            iVar3 = extraout_ECX_18;
          }
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_14);
    }
    uVar11 = 0;
    local_18 = *(uint *)(this_00->field_0029 + 0xc);
    if (local_18 != 0) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_0029,uVar10,&local_8);
        iVar3 = extraout_ECX_19;
        if ((short)local_8 != -1) {
          uVar10 = STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX_19 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (uVar10 == 0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xf47);
          }
          iVar7 = thunk_FUN_00490d90(uVar10);
          iVar3 = extraout_ECX_20;
          if ((iVar7 == 1) &&
             (local_e8 = thunk_FUN_00449a90(CONCAT31((int3)((uint)extraout_ECX_20 >> 8),
                                                     this_00->field_0024),(short)local_8),
             iVar3 = extraout_ECX_21, local_e8 != 0xffffffff)) break;
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while (uVar10 < local_18);
    }
    if (local_e8 != 0xffffffff) {
      FUN_006acc70(*(int *)((int)&DAT_007f5816 + (char)this_00->field_0024 * 0xa62),local_e8,
                   local_130);
      Library::DKW::TBL::FUN_006afe40((int *)&local_10,local_130[0]);
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)((uint)extraout_ECX_22 >> 8),this_00->field_0024),
                 local_10,local_c);
      iVar3 = extraout_ECX_23;
    }
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
      iVar3 = extraout_ECX_24;
    }
    if (local_c != (uint *)0x0) {
      FUN_006ae110((byte *)local_c);
      iVar3 = extraout_ECX_25;
    }
  }
  if (this_00->field_01E6 == 0xb) {
    uVar11 = 0;
    local_d8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_18 = 0;
    puVar9 = local_c;
    local_1c = local_d8;
    if (0 < (int)local_14) {
      do {
        FUN_006acc70(this_00->field_002D,uVar11,&local_8);
        iVar3 = extraout_ECX_26;
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_EDX_05 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xf5d);
          }
          iVar7 = (*pSVar5->vtable->vfunc_F8)();
          iVar3 = extraout_ECX_27;
          if (iVar7 != 0) {
            iVar3 = thunk_FUN_00490d90((int)pSVar5);
            if (iVar3 == 0) {
              iVar3 = (*pSVar5->vtable->vfunc_2C)();
              if ((((iVar3 != 7) && (iVar3 != 0x13)) && (iVar3 != 0x1b)) ||
                 (iVar3 = thunk_FUN_00492370((int)pSVar5), iVar3 != 0)) {
                STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
                iVar3 = extraout_ECX_28;
                goto LAB_004a1ea4;
              }
              local_d4 = *(undefined2 *)&this_00->field_02A3;
              local_d2 = *(undefined2 *)((int)&this_00->field_02A3 + 2);
              local_d0 = *(undefined2 *)&this_00->field_02A7;
              local_ce = *(undefined4 *)((int)&this_00->field_02A7 + 2);
              STBoatC::CmdToObj(pSVar5,CASE_F,&local_d8);
              puVar8 = local_10;
              if (local_10 == (uint *)0x0) {
                puVar8 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                local_10 = puVar8;
              }
            }
            else {
              puVar8 = puVar9;
              if (puVar9 == (uint *)0x0) {
                puVar9 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                puVar8 = puVar9;
                local_c = puVar9;
              }
            }
            Library::DKW::TBL::FUN_006ae1c0(puVar8,&local_8);
            iVar3 = extraout_ECX_29;
          }
        }
LAB_004a1ea4:
        local_18 = local_18 + 1;
        uVar11 = local_18 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
    if (local_10 == (uint *)0x0) {
LAB_004a1ede:
      if (local_c != (uint *)0x0) {
        uVar10 = 0;
        uVar11 = local_c[3];
        if (0 < (int)uVar11) {
          uVar4 = 0;
          do {
            FUN_006acc70((int)local_c,uVar4,&local_8);
            pSVar5 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,
                                CONCAT31((int3)((uint)extraout_EDX_06 >> 8),this_00->field_0024),
                                local_8,CASE_1);
            STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
            uVar10 = uVar10 + 1;
            uVar4 = uVar10 & 0xffff;
          } while ((int)uVar4 < (int)uVar11);
        }
      }
    }
    else if (puVar9 == (uint *)0x0) {
      if (local_10 == (uint *)0x0) goto LAB_004a1ede;
    }
    else {
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)((uint)iVar3 >> 8),this_00->field_0024),local_10,puVar9
                );
    }
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
    }
    if (local_c != (uint *)0x0) {
      FUN_006ae110((byte *)local_c);
    }
  }
  if (this_00->field_01E6 == 0xc) {
    local_e4[0] = *(undefined4 *)(DAT_00802a38 + 0xe4);
    uVar11 = 0;
    local_18 = 0;
    local_1c = local_e4[0];
    if (0 < (int)local_14) {
      do {
        FUN_006acc70(this_00->field_002D,uVar11,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX_30 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xf8e);
          }
          iVar3 = (*pSVar5->vtable->vfunc_F8)();
          if (iVar3 != 0) {
            iVar3 = (*pSVar5->vtable->vfunc_2C)();
            if ((((iVar3 == 7) || (iVar3 == 0x13)) || (iVar3 == 0x1b)) &&
               (iVar3 = thunk_FUN_00492370((int)pSVar5), iVar3 != 0)) {
              STBoatC::CmdToObj(pSVar5,CASE_10,local_e4);
              if (((*(short *)&this_00->field_0x2ad != -1) ||
                  (*(short *)&this_00->field_0x2af != -1)) ||
                 (*(short *)&this_00->field_0x2b1 != -1)) {
                puVar9 = local_10;
                if (local_10 == (uint *)0x0) {
                  puVar9 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  local_10 = puVar9;
                }
LAB_004a2089:
                Library::DKW::TBL::FUN_006ae1c0(puVar9,&local_8);
              }
            }
            else {
              iVar3 = thunk_FUN_00490d90((int)pSVar5);
              if (iVar3 == 0) {
                STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
              }
              else if (((*(short *)&this_00->field_0x2ad != -1) ||
                       (*(short *)&this_00->field_0x2af != -1)) ||
                      (*(short *)&this_00->field_0x2b1 != -1)) {
                puVar9 = local_c;
                if (local_c == (uint *)0x0) {
                  puVar9 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  local_c = puVar9;
                }
                goto LAB_004a2089;
              }
            }
          }
        }
        local_18 = local_18 + 1;
        uVar11 = local_18 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
    if (local_10 == (uint *)0x0) {
LAB_004a20d0:
      if (local_c != (uint *)0x0) {
        uVar11 = local_c[3];
        uVar10 = 0;
        if (0 < (int)uVar11) {
          uVar4 = 0;
          do {
            uVar4 = FUN_006acc70((int)local_c,uVar4,&local_8);
            pSVar5 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,CONCAT31((int3)(uVar4 >> 8),this_00->field_0024),
                                local_8,CASE_1);
            STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
            uVar10 = uVar10 + 1;
            uVar4 = uVar10 & 0xffff;
          } while ((int)uVar4 < (int)uVar11);
        }
      }
    }
    else if (local_c == (uint *)0x0) {
      if (local_10 == (uint *)0x0) goto LAB_004a20d0;
    }
    else {
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)(uVar11 >> 8),this_00->field_0024),local_10,local_c);
    }
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
    }
    if (local_c != (uint *)0x0) {
      FUN_006ae110((byte *)local_c);
    }
  }
  if (this_00->field_01E6 == 0xd) {
    local_52 = *(undefined2 *)((int)&this_00->field_02B3 + 2);
    uVar11 = 0;
    local_58 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_50 = *(undefined2 *)&this_00->field_02B7;
    local_54 = *(undefined2 *)&this_00->field_02B3;
    local_1c = local_58;
    if (0 < (int)local_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_002D,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX_31 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xfc2);
          }
          iVar3 = *(int *)((int)&this_00->field_02B7 + 2);
          if (iVar3 == -1) {
            if ((*(int *)&pSVar5->field_0x7b6 == 0) || (*(int *)&pSVar5->field_0x7be < 1)) {
LAB_004a221d:
              puVar13 = &local_1c;
              SVar12 = CASE_3;
            }
            else {
              puVar13 = &local_58;
              SVar12 = CASE_7;
            }
          }
          else {
            if ((*(int *)&pSVar5->field_0x7b6 != iVar3) || (*(int *)&pSVar5->field_0x7be < 1))
            goto LAB_004a221d;
            puVar13 = &local_58;
            SVar12 = CASE_7;
          }
          STBoatC::CmdToObj(pSVar5,SVar12,puVar13);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == 0xe) {
    local_78 = *(undefined2 *)&this_00->field_02BD;
    uVar11 = 0;
    local_7c = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_74 = this_00->field_02C1;
    local_76 = *(undefined2 *)((int)&this_00->field_02BD + 2);
    local_1c = local_7c;
    if (0 < (int)local_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_002D,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX_32 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xfea);
          }
          if ((pSVar5->field_06F7 == CASE_4) && (0 < *(int *)&pSVar5->field_0x7a2)) {
            puVar13 = &local_7c;
            SVar12 = CASE_A;
          }
          else {
            puVar13 = &local_1c;
            SVar12 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar5,SVar12,puVar13);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == 0xf) {
    local_83 = *(undefined2 *)((int)&this_00->field_02C3 + 1);
    uVar11 = 0;
    local_88 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_81 = *(undefined4 *)((int)&this_00->field_02C3 + 3);
    local_84 = *(undefined1 *)&this_00->field_02C3;
    local_1c = local_88;
    if (0 < (int)local_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_002D,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX_33 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1003);
          }
          SVar1 = pSVar5->field_06F7;
          if (((SVar1 == CASE_6) || (SVar1 == CASE_12)) || (SVar1 == CASE_22)) {
            puVar13 = &local_88;
            SVar12 = CASE_9;
          }
          else {
            puVar13 = &local_1c;
            SVar12 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar5,SVar12,puVar13);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == 0x11) {
    local_c4 = this_00->field_02CE;
    uVar11 = 0;
    local_c8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_c0 = *(undefined2 *)&this_00->field_02D2;
    local_be = *(undefined2 *)((int)&this_00->field_02D2 + 2);
    local_bc = this_00->field_02D6;
    if (0 < (int)local_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_002D,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_ECX_34 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x101e);
          }
          STBoatC::CmdToObj(pSVar5,CASE_16,&local_c8);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == 0x10) {
    local_f8 = this_00->field_02D8;
    uVar11 = 0;
    local_fc = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_f4 = *(undefined2 *)&this_00->field_02DC;
    local_f0 = *(undefined2 *)&this_00->field_02E0;
    local_ea = *(undefined2 *)((int)&this_00->field_02E4 + 2);
    local_f2 = *(undefined2 *)((int)&this_00->field_02DC + 2);
    local_ee = *(undefined2 *)((int)&this_00->field_02E0 + 2);
    local_ec = *(undefined2 *)&this_00->field_02E4;
    if (0 < (int)local_14) {
      uVar10 = 0;
      do {
        FUN_006acc70(this_00->field_002D,uVar10,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_EDX_07 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1032);
          }
          STBoatC::CmdToObj(pSVar5,CASE_15,&local_fc);
        }
        uVar11 = uVar11 + 1;
        uVar10 = uVar11 & 0xffff;
      } while ((int)uVar10 < (int)local_14);
    }
  }
  if (this_00->field_01E6 == 0x12) {
    local_6c = *(undefined2 *)&this_00->field_02E8;
    local_70 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_6a = *(undefined2 *)((int)&this_00->field_02E8 + 2);
    local_68 = this_00->field_02EC;
    uVar11 = 0;
    local_18 = 0;
    puVar9 = local_c;
    if (0 < (int)local_14) {
      do {
        FUN_006acc70(this_00->field_002D,uVar11,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_EDX_08 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1042);
          }
          iVar3 = (*pSVar5->vtable->vfunc_2C)();
          if (((iVar3 == 7) || (iVar3 = (*pSVar5->vtable->vfunc_2C)(), iVar3 == 0x13)) ||
             (iVar3 = (*pSVar5->vtable->vfunc_2C)(), iVar3 == 0x1b)) {
            STBoatC::CmdToObj(pSVar5,CASE_17,&local_70);
            puVar8 = local_10;
            if (local_10 == (uint *)0x0) {
              local_10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              puVar8 = local_10;
            }
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)pSVar5);
            if (iVar3 == 0) {
              STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
              goto LAB_004a26bb;
            }
            puVar8 = puVar9;
            if (puVar9 == (uint *)0x0) {
              puVar9 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              puVar8 = puVar9;
              local_c = puVar9;
            }
          }
          Library::DKW::TBL::FUN_006ae1c0(puVar8,&local_8);
        }
LAB_004a26bb:
        local_18 = local_18 + 1;
        uVar11 = local_18 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
    if (local_10 == (uint *)0x0) {
LAB_004a26f5:
      if (local_c != (uint *)0x0) {
        uVar11 = local_c[3];
        uVar10 = 0;
        if (0 < (int)uVar11) {
          uVar4 = 0;
          do {
            uVar4 = FUN_006acc70((int)local_c,uVar4,&local_8);
            pSVar5 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,CONCAT31((int3)(uVar4 >> 8),this_00->field_0024),
                                local_8,CASE_1);
            STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
            uVar10 = uVar10 + 1;
            uVar4 = uVar10 & 0xffff;
          } while ((int)uVar4 < (int)uVar11);
        }
      }
    }
    else if (puVar9 == (uint *)0x0) {
      if (local_10 == (uint *)0x0) goto LAB_004a26f5;
    }
    else {
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)(uVar11 >> 8),this_00->field_0024),local_10,puVar9);
    }
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
    }
    if (local_c != (uint *)0x0) {
      FUN_006ae110((byte *)local_c);
    }
  }
  if (this_00->field_01E6 == 0x13) {
    local_b2 = *(undefined2 *)((int)&this_00->field_02EE + 2);
    uVar10 = 0;
    local_b8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    local_b0 = *(undefined2 *)&this_00->field_02F2;
    uVar11 = CONCAT22((short)((uint)DAT_00802a38 >> 0x10),local_b0);
    local_b4 = *(undefined2 *)&this_00->field_02EE;
    local_ae = *(undefined4 *)((int)&this_00->field_02F2 + 2);
    local_1c = local_b8;
    if (0 < (int)local_14) {
      uVar11 = 0;
      do {
        FUN_006acc70(this_00->field_002D,uVar11,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_EDX_09 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x1071);
          }
          iVar3 = (*pSVar5->vtable->vfunc_2C)();
          if (((iVar3 == 0xc) || (iVar3 = (*pSVar5->vtable->vfunc_2C)(), iVar3 == 0x18)) ||
             (iVar3 = (*pSVar5->vtable->vfunc_2C)(), iVar3 == 0x1d)) {
            if (local_10 == (uint *)0x0) {
              local_10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(local_10,&local_8);
            puVar13 = &local_b8;
            SVar12 = CASE_12;
          }
          else {
            iVar3 = thunk_FUN_00490d90((int)pSVar5);
            if (iVar3 != 0) {
              if (local_c == (uint *)0x0) {
                local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              }
              Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
              goto LAB_004a2897;
            }
            puVar13 = &local_1c;
            SVar12 = CASE_3;
          }
          STBoatC::CmdToObj(pSVar5,SVar12,puVar13);
        }
LAB_004a2897:
        uVar10 = uVar10 + 1;
        uVar11 = uVar10 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
    puVar9 = local_c;
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(uVar11 >> 8),this_00->field_0024),local_10,local_c);
    if (local_10 != (uint *)0x0) {
      FUN_006ae110((byte *)local_10);
    }
    if (puVar9 != (uint *)0x0) {
      FUN_006ae110((byte *)puVar9);
    }
  }
  if (this_00->field_01E6 == 0x14) {
    local_28 = Way3DGrpGetDistrPoint
                         (this_00,this_00->field_002D,(int)*(short *)((int)&this_00->field_02FC + 2)
                          ,(int)*(short *)&this_00->field_0300,
                          (int)*(short *)((int)&this_00->field_0300 + 2),
                          (int)*(short *)&this_00->field_02F8,
                          (int)*(short *)((int)&this_00->field_02F8 + 2),
                          (int)*(short *)&this_00->field_02FC);
    if (local_28 == (uint *)0x0) {
      return;
    }
    puVar9 = Way3DGrpGetDistrPoint
                       (this_00,this_00->field_002D,(int)*(short *)&this_00->field_02F8,
                        (int)*(short *)((int)&this_00->field_02F8 + 2),
                        (int)*(short *)&this_00->field_02FC,
                        (int)*(short *)((int)&this_00->field_02FC + 2),
                        (int)*(short *)&this_00->field_0300,
                        (int)*(short *)((int)&this_00->field_0300 + 2));
    if (puVar9 == (uint *)0x0) {
      FUN_006ae110((byte *)local_28);
      return;
    }
    local_18 = 0;
    local_98 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    if (0 < (int)local_14) {
      uVar11 = 0;
      do {
        FUN_006acc70((int)local_28,uVar11,(undefined4 *)&local_38);
        FUN_006acc70((int)puVar9,uVar11,(undefined4 *)&local_30);
        FUN_006acc70(this_00->field_002D,uVar11,&local_8);
        if ((short)local_8 != -1) {
          pSVar5 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,
                              CONCAT31((int3)((uint)extraout_EDX_10 >> 8),this_00->field_0024),
                              local_8,CASE_1);
          if (pSVar5 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x109b);
          }
          local_94 = local_38;
          local_92 = local_36;
          local_8e = local_30;
          local_90 = local_34;
          local_8c = local_2e;
          local_8a = local_2c;
          STBoatC::CmdToObj(pSVar5,CASE_8,&local_98);
        }
        local_18 = local_18 + 1;
        uVar11 = local_18 & 0xffff;
      } while ((int)uVar11 < (int)local_14);
    }
    FUN_006ae110((byte *)local_28);
    FUN_006ae110((byte *)puVar9);
  }
  if (this_00->field_01E6 != 0x15) {
    g_currentExceptionFrame = local_19c.previous;
    return;
  }
  uVar11 = 0;
  local_a8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  local_1c = local_a8;
  if (0 < (int)local_14) {
    uVar10 = 0;
    do {
      FUN_006acc70(this_00->field_002D,uVar10,&local_8);
      if ((short)local_8 != -1) {
        pSVar5 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,
                            CONCAT31((int3)((uint)extraout_EDX_11 >> 8),this_00->field_0024),local_8
                            ,CASE_1);
        if (pSVar5 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0x10b0);
        }
        iVar3 = (*pSVar5->vtable->vfunc_F8)();
        if (iVar3 != 0) {
          iVar3 = thunk_FUN_00490d90((int)pSVar5);
          if (iVar3 == 0) {
            iVar3 = (*pSVar5->vtable->vfunc_2C)();
            if ((iVar3 == 7) || (iVar3 == 0x13)) {
              iVar3 = thunk_FUN_00492370((int)pSVar5);
              if (iVar3 == 0) {
                local_a2 = *(undefined2 *)((int)&this_00->field_0304 + 2);
                local_a4 = *(undefined2 *)&this_00->field_0304;
                local_a0 = *(undefined2 *)&this_00->field_0308;
                local_9e = *(undefined4 *)((int)&this_00->field_0308 + 2);
                STBoatC::CmdToObj(pSVar5,CASE_F,&local_a8);
                puVar9 = local_10;
                if (local_10 == (uint *)0x0) {
                  puVar9 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                  local_10 = puVar9;
                }
                goto LAB_004a2bcf;
              }
            }
            else {
              STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
            }
          }
          else {
            puVar9 = local_c;
            if (local_c == (uint *)0x0) {
              puVar9 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
              local_c = puVar9;
            }
LAB_004a2bcf:
            Library::DKW::TBL::FUN_006ae1c0(puVar9,&local_8);
          }
        }
      }
      uVar11 = uVar11 + 1;
      uVar10 = uVar11 & 0xffff;
    } while ((int)uVar10 < (int)local_14);
  }
  if (local_10 != (uint *)0x0) {
    if (local_c != (uint *)0x0) {
      STAllPlayersC::RegisterPGPair
                (DAT_007fa174,CONCAT31((int3)((uint)local_c >> 8),this_00->field_0024),local_10,
                 local_c);
      goto LAB_004a2c5d;
    }
    if (local_10 != (uint *)0x0) goto LAB_004a2c5d;
  }
  if (local_c != (uint *)0x0) {
    uVar10 = 0;
    uVar11 = local_c[3];
    if (0 < (int)uVar11) {
      uVar4 = 0;
      do {
        FUN_006acc70((int)local_c,uVar4,&local_8);
        pSVar5 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,
                            CONCAT31((int3)((uint)extraout_EDX_12 >> 8),this_00->field_0024),local_8
                            ,CASE_1);
        STBoatC::CmdToObj(pSVar5,CASE_3,&local_1c);
        uVar10 = uVar10 + 1;
        uVar4 = uVar10 & 0xffff;
      } while ((int)uVar4 < (int)uVar11);
    }
  }
LAB_004a2c5d:
  if (local_10 != (uint *)0x0) {
    FUN_006ae110((byte *)local_10);
  }
  if (local_c != (uint *)0x0) {
    FUN_006ae110((byte *)local_c);
  }
  g_currentExceptionFrame = local_19c.previous;
  return;
}

