
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AssignMDPairs */

uint * __thiscall
STAllPlayersC::_AssignMDPairs
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  STFishC *pSVar8;
  undefined2 uVar9;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined4 unaff_ESI;
  uint uVar10;
  uint uVar11;
  short *psVar12;
  uint uVar13;
  void *unaff_EDI;
  short *psVar14;
  uint *puVar15;
  undefined8 uVar16;
  undefined4 local_19c [17];
  short local_158 [3];
  int local_152;
  short local_14e;
  short local_14c;
  short local_14a;
  int local_148;
  int local_13e;
  int local_13a;
  InternalExceptionFrame local_114;
  int local_d0 [6];
  uint local_b8;
  uint local_b4;
  undefined4 local_b0;
  short local_aa;
  short local_a2;
  int local_94;
  int local_90;
  STAllPlayersC *local_8c;
  uint local_88;
  int local_84;
  short local_80;
  short local_7e;
  undefined2 local_7c;
  int local_7a;
  int local_76;
  short local_70;
  short local_6e;
  short local_6c;
  short local_6a;
  short local_62;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint *local_4c;
  uint *local_48;
  uint local_44;
  STFishC *local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  uint *local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint *local_20;
  STGroupC *local_1c;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  int local_e;
  uint local_8;
  
  local_d0[4] = 4;
  local_d0[0] = 0x38;
  local_d0[1] = 0x39;
  local_d0[2] = 0x4f;
  local_d0[3] = 0x5e;
  local_84 = 0;
  local_4c = (uint *)0x0;
  local_114.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_114;
  local_8c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_114.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_114.previous;
    if (iVar4 != -0x5001fff7) {
      iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x25ed,0,iVar4,
                                 &DAT_007a4ccc,s_STAllPlayersC___AssignMDPairs_007a8114);
      if (iVar7 != 0) {
        pcVar1 = (code *)swi(3);
        puVar6 = (uint *)(*pcVar1)();
        return puVar6;
      }
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x25ee);
    }
    return local_4c;
  }
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) {
    uVar11 = *(uint *)(param_3 + 0xc);
    local_3c = uVar11;
    if (((uVar11 != 0) && (local_2c = *(uint *)(param_4 + 0xc), *(uint *)(param_4 + 0xc) != 0)) &&
       (local_38 = *(uint *)(param_5 + 0xc), *(uint *)(param_5 + 0xc) != 0)) goto LAB_00442f1f;
  }
  uVar11 = local_3c;
  RaiseInternalException
            (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,0x24ce
            );
LAB_00442f1f:
  iVar4 = 0;
  if (0 < local_d0[4]) {
    piVar5 = local_d0;
    do {
      if (param_2 == *piVar5) {
        local_84 = *(int *)((int)&DAT_007f4e2f + (char)param_1 * 0xa62 + iVar4 * 4);
        break;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < local_d0[4]);
  }
  if ((local_84 == 0) || (local_28 = *(int *)(local_84 + 0xc), local_28 == 0)) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x24d1);
  }
  uVar10 = 0;
  if (0 < (int)uVar11) {
    do {
      FUN_006acc70(param_3,uVar10,&local_8);
      if ((short)local_8 != -1) break;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar11);
  }
  if (uVar10 == uVar11) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x24e2);
  }
  pSVar8 = local_40;
  uVar11 = 0;
  if (0 < (int)local_2c) {
    do {
      FUN_006acc70(param_4,uVar11,&local_8);
      if ((pSVar8 != (STFishC *)0x0) && ((short)local_8 != -1)) break;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_2c);
  }
  if (uVar11 == local_2c) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x24f4);
  }
  uVar11 = 0;
  if (0 < (int)local_38) {
    do {
      FUN_006acc70(param_5,uVar11,&local_8);
      if ((short)local_8 != -1) break;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_38);
  }
  if (uVar11 == local_38) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2507);
  }
  local_34 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,0x24,1);
  uVar11 = 0;
  if (0 < (int)local_28) {
    do {
      FUN_006acc70(local_84,uVar11,(undefined4 *)&local_70);
      if ((local_6a != -1) && (local_62 != -1)) {
        bVar2 = false;
        uVar10 = 0;
        if (0 < (int)local_3c) {
          do {
            FUN_006acc70(param_3,uVar10,&local_8);
            if (local_6a == (short)local_8) {
              bVar2 = true;
              break;
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)local_3c);
        }
        if (bVar2) {
          bVar2 = false;
          uVar10 = 0;
          if (0 < (int)local_2c) {
            do {
              FUN_006acc70(param_4,uVar10,&local_8);
              if (local_62 == (short)local_8) {
                bVar2 = true;
                break;
              }
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)local_2c);
          }
          if (bVar2) {
            Library::DKW::TBL::FUN_006ae1c0(local_34,(undefined4 *)&local_70);
          }
        }
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_28);
  }
  if (local_34[3] == 0) {
    FUN_006ae110((byte *)local_34);
    iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2522,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC___AssignMDPairs_pa_007a81fc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      puVar6 = (uint *)(*pcVar1)();
      return puVar6;
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2524);
  }
  local_20 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_3c,6,1);
  local_30 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_2c,6,1);
  iVar4 = *(int *)((int)&DAT_007f4e24 + (char)param_1 * 0xa62 + 1);
  local_d0[5] = iVar4;
  if (iVar4 == 0) {
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x252c,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC___AssignMDPairs_gr_007a81c8);
    if (iVar7 != 0) {
      pcVar1 = (code *)swi(3);
      puVar6 = (uint *)(*pcVar1)();
      return puVar6;
    }
    RaiseInternalException
              (-0x5001fffc,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x252d);
  }
  uVar11 = *(uint *)(iVar4 + 0xc);
  local_24 = 0;
  local_28 = uVar11;
  if (0 < (int)uVar11) {
    do {
      uVar10 = local_24;
      FUN_006acc70(iVar4,local_24,&local_1c);
      if ((local_1c != (STGroupC *)0x0) &&
         (iVar7 = (**(code **)(local_1c->field_0000 + 0xc))(), iVar7 == 8)) {
        local_48 = STGroupC::GetGroupContent(local_1c,(int)unaff_EDI);
        local_b8 = local_48[3];
        if ((local_b8 != 0) && (local_44 = 0, 0 < (int)local_b8)) {
LAB_0044326c:
          uVar11 = local_38;
          FUN_006acc70((int)local_48,local_44,&local_8);
          if ((short)local_8 != -1) {
            pSVar8 = (STFishC *)GetObjPtr(local_8c,param_1,local_8,CASE_1);
            local_40 = pSVar8;
            if (pSVar8 == (STFishC *)0x0) {
              iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2539,0,0,
                                         &DAT_007a4ccc,s_STAllPlayersC___AssignMDPairs_pt_007a8198);
              if (iVar4 != 0) {
                pcVar1 = (code *)swi(3);
                puVar6 = (uint *)(*pcVar1)();
                return puVar6;
              }
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_allpl_cpp_007a6004,0x253a);
            }
            iVar4 = (*pSVar8->vtable->slot_2C)();
            if ((((iVar4 != 8) && (iVar4 = (*pSVar8->vtable->slot_2C)(), iVar4 != 0x14)) &&
                (iVar4 = (*pSVar8->vtable->slot_2C)(), iVar4 != 0x1a)) ||
               (iVar4 = thunk_FUN_0045ff10((int)pSVar8), iVar4 != 0xc))
            goto cf_common_join_004435CD;
            uVar10 = 0;
            if (0 < (int)uVar11) {
              do {
                FUN_006acc70(param_5,uVar10,(undefined4 *)&local_12);
                if ((short)local_8 == local_12) break;
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < (int)uVar11);
            }
            if ((int)uVar10 < (int)uVar11) goto cf_common_join_004435CD;
            uVar16 = thunk_FUN_0048dc90(pSVar8,local_19c);
            iVar4 = (int)((ulonglong)uVar16 >> 0x20);
            psVar12 = (short *)uVar16;
            psVar14 = local_158;
            for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
              *(undefined4 *)psVar14 = *(undefined4 *)psVar12;
              psVar12 = psVar12 + 2;
              psVar14 = psVar14 + 2;
            }
            *psVar14 = *psVar12;
            uVar11 = local_3c;
            if ((local_152 == -1) || (local_148 == -1)) goto cf_common_join_004435CD;
            if ((((local_158[0] < 0) ||
                 ((SHORT_007fb240 <= local_158[0] ||
                  (iVar4 = CONCAT22((short)((ulonglong)uVar16 >> 0x30),local_158[1]),
                  local_158[1] < 0)))) || (SHORT_007fb242 <= local_158[1])) ||
               ((local_158[2] < 0 || (SHORT_007fb244 <= local_158[2])))) {
              local_40 = (STFishC *)0x0;
            }
            else {
              local_40 = *(STFishC **)
                          (DAT_007fb248 +
                          ((int)local_158[2] * (int)SHORT_007fb246 +
                           (int)local_158[1] * (int)SHORT_007fb240 + (int)local_158[0]) * 8);
              iVar4 = DAT_007fb248;
            }
            uVar9 = (undefined2)((uint)iVar4 >> 0x10);
            if (local_40 == (STFishC *)0x0) goto cf_common_join_004435CD;
            local_8 = CONCAT22((short)((uint)local_40 >> 0x10),*(undefined2 *)&local_40->field_0x32)
            ;
            uVar10 = 0;
            if (0 < (int)local_3c) {
              do {
                FUN_006acc70(param_3,uVar10,(undefined4 *)&local_12);
                iVar4 = local_13e;
                uVar9 = extraout_var;
                if ((short)local_8 == local_12) {
                  uVar11 = local_20[3];
                  if (uVar11 == 0) {
                    uVar10 = 0;
                    local_10 = (short)local_8;
                    goto LAB_0044349d;
                  }
                  uVar10 = 0;
                  if ((int)uVar11 < 1) goto LAB_00443473;
                  goto LAB_0044343c;
                }
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < (int)uVar11);
            }
            goto LAB_004434a2;
          }
          goto cf_common_join_004435CD;
        }
LAB_004435f1:
        FUN_006ae110((byte *)local_48);
      }
      local_24 = uVar10 + 1;
    } while ((int)local_24 < (int)uVar11);
  }
  local_24 = 0;
  if (0 < (int)local_3c) {
    do {
      FUN_006acc70(param_3,local_24,&local_8);
      puVar6 = local_20;
      sVar3 = (short)local_8;
      if (sVar3 != -1) {
        uVar10 = 0;
        uVar11 = local_20[3];
        local_28 = uVar11;
        if (uVar11 != 0) {
          if (0 < (int)uVar11) {
            do {
              FUN_006acc70((int)puVar6,uVar10,(undefined4 *)&local_10);
              sVar3 = (short)local_8;
              if (local_10 == sVar3) break;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar11);
          }
          if (uVar10 != uVar11) goto LAB_00443676;
        }
        local_10 = sVar3;
        local_e = 0;
        Library::DKW::TBL::FUN_006ae1c0(puVar6,(undefined4 *)&local_10);
      }
LAB_00443676:
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_3c);
  }
  local_24 = 0;
  if (0 < (int)local_2c) {
    do {
      FUN_006acc70(param_4,local_24,&local_8);
      puVar6 = local_30;
      sVar3 = (short)local_8;
      if (sVar3 != -1) {
        uVar10 = 0;
        uVar11 = local_30[3];
        local_28 = uVar11;
        if (uVar11 != 0) {
          if (0 < (int)uVar11) {
            do {
              FUN_006acc70((int)puVar6,uVar10,(undefined4 *)&local_10);
              sVar3 = (short)local_8;
              if (local_10 == sVar3) break;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar11);
          }
          if (uVar10 != uVar11) goto LAB_004436f7;
        }
        local_10 = sVar3;
        local_e = 0;
        Library::DKW::TBL::FUN_006ae1c0(puVar6,(undefined4 *)&local_10);
      }
LAB_004436f7:
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_2c);
  }
  uVar11 = 0;
  local_28 = local_34[3];
  if (0 < (int)local_28) {
    do {
      FUN_006acc70((int)local_34,uVar11,(undefined4 *)&local_70);
      uVar13 = 0;
      uVar10 = local_20[3];
      local_3c = uVar10;
      if (0 < (int)uVar10) {
        do {
          FUN_006acc70((int)local_20,uVar13,(undefined4 *)&local_10);
          if (local_10 == local_6a) {
            local_54 = local_e;
            break;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar10);
      }
      if (uVar13 == uVar10) {
        iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x25a4,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC___AssignMDPairs_M_a_007a8168);
        if (iVar4 != 0) {
          pcVar1 = (code *)swi(3);
          puVar6 = (uint *)(*pcVar1)();
          return puVar6;
        }
        RaiseInternalException
                  (-0x5001fff8,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                   0x25a5);
      }
      uVar13 = 0;
      uVar10 = local_30[3];
      local_2c = uVar10;
      if (0 < (int)uVar10) {
        do {
          FUN_006acc70((int)local_30,uVar13,(undefined4 *)&local_10);
          if (local_10 == local_62) {
            local_50 = local_e;
            break;
          }
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar10);
      }
      if (uVar13 == uVar10) {
        iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x25ad,0,0,&DAT_007a4ccc
                                   ,s_STAllPlayersC___AssignMDPairs_D_a_007a8138);
        if (iVar4 != 0) {
          pcVar1 = (code *)swi(3);
          puVar6 = (uint *)(*pcVar1)();
          return puVar6;
        }
        RaiseInternalException
                  (-0x5001fff8,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
                   0x25ae);
      }
      Library::DKW::TBL::FUN_006ae140(local_34,uVar11,(undefined4 *)&local_70);
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)local_28);
  }
  FUN_006ae110((byte *)local_20);
  FUN_006ae110((byte *)local_30);
  uVar11 = local_38;
  uVar13 = 0;
  uVar10 = 0;
  local_30 = (uint *)0x0;
  puVar6 = local_30;
  if (0 < (int)local_38) {
    do {
      FUN_006acc70(param_5,uVar10,&local_8);
      if ((short)local_8 != -1) {
        uVar13 = uVar13 + 1;
      }
      uVar10 = uVar10 + 1;
      puVar6 = (uint *)uVar13;
    } while ((int)uVar10 < (int)uVar11);
  }
  local_30 = puVar6;
  puVar6 = local_30;
  local_20 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,(uint)local_30,0x24,1);
  puVar15 = local_34;
  if (0 < (int)puVar6) {
    do {
      local_44 = (uint)puVar6;
      uVar11 = 0;
      local_48 = (uint *)0x5f5e100;
      if (0 < (int)local_28) {
        do {
          FUN_006acc70((int)puVar15,uVar11,(undefined4 *)&local_70);
          if (local_5c + local_54 < 0x65) {
            iVar4 = 0;
          }
          else {
            iVar4 = ((local_5c + local_54 + -100) * local_60) / 100;
          }
          if (local_58 + local_50 < 0x65) {
            local_88 = 0;
          }
          else {
            local_88 = ((local_58 + local_50 + -100) * local_60) / 100;
          }
          puVar6 = (uint *)(local_88 + local_60 + iVar4);
          if ((int)puVar6 < (int)local_48) {
            local_b4 = uVar11;
            local_48 = puVar6;
          }
          uVar11 = uVar11 + 1;
          puVar15 = local_34;
        } while ((int)uVar11 < (int)local_28);
      }
      uVar10 = local_28;
      uVar11 = local_b4;
      FUN_006acc70((int)puVar15,local_b4,(undefined4 *)&local_70);
      local_54 = local_54 + local_5c;
      local_50 = local_50 + local_58;
      Library::DKW::TBL::FUN_006ae140(puVar15,uVar11,(undefined4 *)&local_70);
      Library::DKW::TBL::FUN_006ae1c0(local_20,(undefined4 *)&local_70);
      uVar11 = 0;
      if (0 < (int)uVar10) {
        do {
          FUN_006acc70((int)puVar15,uVar11,&local_b0);
          if (local_aa == local_6a) {
            local_94 = local_54;
          }
          if (local_a2 == local_62) {
            local_90 = local_50;
          }
          if (local_a2 == local_62 || local_aa == local_6a) {
            Library::DKW::TBL::FUN_006ae140(puVar15,uVar11,&local_b0);
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar10);
      }
      puVar6 = (uint *)(local_44 - 1);
    } while (local_44 - 1 != 0);
    local_44 = 0;
  }
  FUN_006ae110((byte *)puVar15);
  uVar11 = local_38;
  puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_38,2,1);
  uVar10 = 0;
  if (0 < (int)uVar11) {
    do {
      FUN_006acc70(param_5,uVar10,&local_8);
      Library::DKW::TBL::FUN_006ae140(puVar6,uVar10,&local_8);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar11);
  }
  puVar15 = local_30;
  local_4c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,(uint)local_30,0xe,1);
  local_24 = 0;
  if (0 < (int)puVar15) {
    do {
      FUN_006acc70((int)local_20,local_24,(undefined4 *)&local_70);
      uVar11 = 0;
      iVar4 = 100000000;
      if (0 < (int)local_38) {
        do {
          FUN_006acc70((int)puVar6,uVar11,&local_8);
          if ((short)local_8 != -1) {
            local_40 = (STFishC *)GetObjPtr(local_8c,param_1,local_8,CASE_1);
            STFishC::sub_004162B0(local_40,&local_18,&local_14,&local_16);
            iVar7 = FUN_006aadd0((int)local_18,(int)local_14,(int)local_16,(int)local_70,
                                 (int)local_6e,(int)local_6c);
            if (iVar7 < iVar4) {
              iVar4 = iVar7;
              local_88 = uVar11;
            }
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_38);
      }
      uVar11 = local_88;
      FUN_006acc70((int)puVar6,local_88,&local_8);
      local_80 = local_6a;
      local_7c = (short)local_8;
      local_7a = local_5c;
      local_7e = local_62;
      local_76 = local_58;
      Library::DKW::TBL::FUN_006ae1c0(local_4c,(undefined4 *)&local_80);
      local_8 = 0xffff;
      Library::DKW::TBL::FUN_006ae140(puVar6,uVar11,&local_8);
      local_24 = local_24 + 1;
    } while ((int)local_24 < (int)local_30);
  }
  FUN_006ae110((byte *)puVar6);
  FUN_006ae110((byte *)local_20);
  g_currentExceptionFrame = local_114.previous;
  return local_4c;
  while (uVar10 = uVar10 + 1, uVar9 = extraout_var_00, (int)uVar10 < (int)uVar11) {
LAB_0044343c:
    FUN_006acc70((int)local_20,uVar10,(undefined4 *)&local_10);
    if (local_10 == (short)local_8) {
      local_e = local_e + iVar4;
      Library::DKW::TBL::FUN_006ae140(local_20,uVar10,(undefined4 *)&local_10);
      uVar9 = extraout_var_01;
      break;
    }
  }
LAB_00443473:
  if (uVar10 == uVar11) {
    local_10 = (short)local_8;
LAB_0044349d:
    local_e = iVar4;
    Library::DKW::TBL::FUN_006ae140(local_20,uVar10,(undefined4 *)&local_10);
    uVar9 = extraout_var_02;
  }
LAB_004434a2:
  uVar11 = local_2c;
  iVar4 = CONCAT22(uVar9,local_14e);
  if ((((local_14e < 0) || (SHORT_007fb240 <= local_14e)) || (local_14c < 0)) ||
     (((SHORT_007fb242 <= local_14c || (local_14a < 0)) || (SHORT_007fb244 <= local_14a)))) {
    local_40 = (STFishC *)0x0;
  }
  else {
    iVar4 = (int)local_14e;
    local_40 = *(STFishC **)
                (DAT_007fb248 +
                ((int)local_14a * (int)SHORT_007fb246 + (int)local_14c * (int)SHORT_007fb240 + iVar4
                ) * 8);
  }
  if (local_40 != (STFishC *)0x0) {
    local_8 = CONCAT22((short)((uint)iVar4 >> 0x10),*(undefined2 *)&local_40->field_0x32);
    uVar10 = 0;
    if (0 < (int)local_2c) {
      do {
        FUN_006acc70(param_4,uVar10,(undefined4 *)&local_12);
        puVar6 = local_30;
        sVar3 = (short)local_8;
        if (sVar3 == local_12) {
          uVar11 = local_30[3];
          if (uVar11 == 0) {
            uVar10 = 0;
            goto LAB_004435c8;
          }
          uVar10 = 0;
          if ((int)uVar11 < 1) goto LAB_00443598;
          goto LAB_0044355f;
        }
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < (int)uVar11);
    }
  }
cf_common_join_004435CD:
  local_44 = local_44 + 1;
  uVar11 = local_28;
  iVar4 = local_d0[5];
  uVar10 = local_24;
  if ((int)local_b8 <= (int)local_44) goto LAB_004435f1;
  goto LAB_0044326c;
  while (uVar10 = uVar10 + 1, (int)uVar10 < (int)uVar11) {
LAB_0044355f:
    FUN_006acc70((int)puVar6,uVar10,(undefined4 *)&local_10);
    sVar3 = (short)local_8;
    if (local_10 == sVar3) {
      local_e = local_e + local_13a;
      Library::DKW::TBL::FUN_006ae140(puVar6,uVar10,(undefined4 *)&local_10);
      sVar3 = (short)local_8;
      break;
    }
  }
LAB_00443598:
  if (uVar10 == uVar11) {
LAB_004435c8:
    local_10 = sVar3;
    local_e = local_13a;
    Library::DKW::TBL::FUN_006ae140(local_30,uVar10,(undefined4 *)&local_10);
  }
  goto cf_common_join_004435CD;
}

