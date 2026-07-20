
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AssignDocks */

uint * __thiscall
STAllPlayersC::_AssignDocks(STAllPlayersC *this,uint param_1,int param_2,int param_3)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  void *this_00;
  undefined4 *puVar6;
  STFishC *pSVar7;
  Global_sub_00430750_param_1Enum GVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 unaff_ESI;
  uint uVar13;
  void *unaff_EDI;
  uint uVar14;
  short *psVar15;
  undefined4 *puVar16;
  undefined4 local_130 [13];
  short local_fc;
  short local_fa;
  short local_f8;
  int local_d0;
  InternalExceptionFrame local_c8;
  int local_84;
  int local_80;
  int *local_7c;
  uint *local_78;
  int local_74;
  uint *local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  uint local_60;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  uint *local_54;
  uint local_50;
  short local_4c;
  undefined2 local_4a;
  uint local_48;
  uint *local_44;
  STAllPlayersC *local_40;
  short local_3c;
  undefined4 uStack_3a;
  undefined2 local_34;
  undefined2 uStack_32;
  undefined2 uStack_30;
  uint local_2c;
  uint local_28;
  short local_22;
  uint local_20;
  uint local_1c;
  short local_16;
  short local_14;
  short local_12;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_70 = (uint *)0x0;
  local_c8.previous = g_currentExceptionFrame;
  local_80 = *(int *)((int)&DAT_007f4e24 + (char)param_1 * 0xa62 + 1);
  g_currentExceptionFrame = &local_c8;
  local_40 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_c8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_c8.previous;
    if (iVar3 != -0x5001fff7) {
      iVar9 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x234b,0,iVar3,
                                 &DAT_007a4ccc,s_STAllPlayersC___AssignDocks_007a8040);
      if (iVar9 != 0) {
        pcVar1 = (code *)swi(3);
        puVar5 = (uint *)(*pcVar1)();
        return puVar5;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x234c);
    }
    return local_70;
  }
  if ((((param_2 == 0) || (param_3 == 0)) ||
      (uVar14 = *(uint *)(param_2 + 0xc), local_20 = uVar14, uVar14 == 0)) ||
     (local_48 = *(uint *)(param_3 + 0xc), local_48 == 0)) {
    uVar14 = local_20;
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2215);
  }
  if ((local_80 == 0) || (local_84 = *(int *)(local_80 + 0xc), local_84 == 0)) {
    RaiseInternalException
              (-0x5001fff8,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2216);
  }
  uVar13 = 0;
  if (0 < (int)uVar14) {
    do {
      FUN_006acc70(param_2,uVar13,&local_28);
      if ((short)local_28 == -1) {
LAB_00440bab:
        FUN_006b0c70(param_2,uVar13);
        uVar14 = uVar14 - 1;
        uVar13 = uVar13 - 1;
        local_20 = uVar14;
      }
      else {
        piVar4 = (int *)GetObjPtr(local_40,param_1,local_28,CASE_1);
        iVar3 = (**(code **)(*piVar4 + 0xf8))();
        if (iVar3 == 0) goto LAB_00440bab;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar14);
  }
  if (uVar14 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x221e);
  }
  uVar13 = 0;
  if (0 < (int)local_48) {
    do {
      FUN_006acc70(param_3,uVar13,&local_28);
      if ((short)local_28 == -1) {
LAB_00440c19:
        FUN_006b0c70(param_3,uVar13);
        local_48 = local_48 - 1;
        uVar13 = uVar13 - 1;
      }
      else {
        piVar4 = (int *)GetObjPtr(local_40,param_1,local_28,CASE_1);
        iVar3 = (**(code **)(*piVar4 + 0xf8))();
        if (iVar3 == 0) goto LAB_00440c19;
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)local_48);
  }
  if (local_48 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2225);
  }
  puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar14,0xc,1);
  uVar13 = 0;
  local_44 = puVar5;
  if (0 < (int)uVar14) {
    do {
      local_10 = (uint *)0x0;
      local_8 = 0;
      local_c = 0;
      Library::DKW::TBL::FUN_006ae140(puVar5,uVar13,&local_10);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar14);
  }
  local_1c = 0;
  if (0 < local_84) {
    do {
      uVar14 = local_1c;
      FUN_006acc70(local_80,local_1c,&local_7c);
      if (((local_7c != (int *)0x0) && (iVar3 = (**(code **)(*local_7c + 0xc))(), iVar3 == 4)) &&
         (*(short *)((int)local_7c + 0x27) != 0)) {
        local_6c = *(uint *)((int)local_7c + 0x29);
        local_2c = 0;
        local_78 = *(uint **)(local_6c + 0xc);
        if (0 < (int)local_78) {
          do {
            FUN_006acc70(local_6c,local_2c,&local_28);
            if ((short)local_28 != -1) {
              this_00 = (void *)GetObjPtr(local_40,param_1,local_28,CASE_1);
              if (this_00 == (void *)0x0) {
                iVar3 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2239,0,0,
                                           &DAT_007a4ccc,s_STAllPlayersC___AssignDocks_inva_007a8064
                                          );
                if (iVar3 != 0) {
                  pcVar1 = (code *)swi(3);
                  puVar5 = (uint *)(*pcVar1)();
                  return puVar5;
                }
                RaiseInternalException
                          (-0x5001fffc,g_overwriteContext_007ED77C,
                           s_E____titans_wlad_to_allpl_cpp_007a6004,0x223a);
              }
              if ((*(int *)((int)this_00 + 0x20) == 0x14) &&
                 (iVar3 = thunk_FUN_0045ff10((int)this_00), iVar3 == 4)) {
                puVar6 = (undefined4 *)thunk_FUN_0048dcc0(this_00,local_130);
                psVar15 = &local_fc;
                for (iVar3 = 0xd; uVar14 = local_48, iVar3 != 0; iVar3 = iVar3 + -1) {
                  *(undefined4 *)psVar15 = *puVar6;
                  puVar6 = puVar6 + 1;
                  psVar15 = psVar15 + 2;
                }
                if ((local_d0 != 6) && (local_d0 != 7)) {
                  uVar13 = 0;
                  if (0 < (int)local_48) {
                    do {
                      FUN_006acc70(param_3,uVar13,(undefined4 *)&local_22);
                      if ((short)local_28 == local_22) break;
                      uVar13 = uVar13 + 1;
                    } while ((int)uVar13 < (int)uVar14);
                  }
                  if ((int)uVar14 <= (int)uVar13) {
                    if ((((local_fc < 0) || (SHORT_007fb240 <= local_fc)) || (local_fa < 0)) ||
                       (((SHORT_007fb242 <= local_fa || (local_f8 < 0)) ||
                        (SHORT_007fb244 <= local_f8)))) {
                      piVar4 = (int *)0x0;
                    }
                    else {
                      piVar4 = *(int **)(DAT_007fb248 +
                                        ((int)local_f8 * (int)SHORT_007fb246 +
                                         (int)local_fa * (int)SHORT_007fb240 + (int)local_fc) * 8);
                    }
                    if (((piVar4 != (int *)0x0) && (piVar4[9] == (int)(char)param_1)) &&
                       ((iVar3 = (**(code **)(*piVar4 + 0x2c))(), iVar3 == 0x33 &&
                        (iVar3 = (**(code **)(*piVar4 + 0xf8))(), uVar14 = local_20, iVar3 == 1))))
                    {
                      uVar13 = 0;
                      if (0 < (int)local_20) {
                        do {
                          FUN_006acc70(param_2,uVar13,(undefined4 *)&local_22);
                          if (local_22 == *(short *)((int)piVar4 + 0x32)) break;
                          uVar13 = uVar13 + 1;
                        } while ((int)uVar13 < (int)uVar14);
                      }
                      puVar5 = local_44;
                      if (uVar13 != uVar14) {
                        FUN_006acc70((int)local_44,uVar13,&local_10);
                        if (local_10 == (uint *)0x0) {
                          local_10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
                          Library::DKW::TBL::FUN_006ae140(puVar5,uVar13,&local_10);
                        }
                        local_3c = (short)local_28;
                        Library::DKW::TBL::FUN_006ae1c0(local_10,(undefined4 *)&local_3c);
                      }
                    }
                  }
                }
              }
            }
            local_2c = local_2c + 1;
            uVar14 = local_1c;
          } while ((int)local_2c < (int)local_78);
        }
      }
      local_1c = uVar14 + 1;
    } while ((int)local_1c < local_84);
  }
  uVar14 = local_48;
  puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_48,4,1);
  uVar13 = 0;
  local_78 = puVar5;
  if (0 < (int)uVar14) {
    do {
      local_54 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_20,4,1);
      Library::DKW::TBL::FUN_006ae140(puVar5,uVar13,&local_54);
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar14);
  }
  local_1c = 0;
  if (0 < (int)local_20) {
    do {
      uVar14 = local_1c;
      FUN_006acc70(param_2,local_1c,&local_28);
      pSVar7 = (STFishC *)GetObjPtr(local_40,param_1,local_28,CASE_1);
      STFishC::sub_004162B0(pSVar7,&local_12,&local_14,&local_16);
      uVar13 = (int)SHORT_007fb27c * (int)SHORT_007fb27a * (int)SHORT_007fb278;
      puVar6 = DAT_007fb280;
      puVar16 = DAT_007fb238;
      for (uVar11 = (uVar13 & 0x7fffffff) >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar16 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar16 = puVar16 + 1;
      }
      for (uVar13 = uVar13 * 2 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar16 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar16 = (undefined4 *)((int)puVar16 + 1);
      }
      FUN_006ab090((int)DAT_007fb238,(int)SHORT_007fb278,(int)SHORT_007fb27a,(int)SHORT_007fb27c,
                   (int)local_12,(int)local_14,(int)local_16,-1,-1,-1);
      FUN_006acc70((int)local_44,uVar14,&local_10);
      if (((local_10 != (uint *)0x0) && (local_64 = local_10[3], local_64 != 0)) &&
         (uVar14 = 0, 0 < (int)local_64)) {
        do {
          FUN_006acc70((int)local_10,uVar14,(undefined4 *)&local_3c);
          pSVar7 = (STFishC *)
                   GetObjPtr(local_40,param_1,CONCAT22((undefined2)uStack_3a,local_3c),CASE_1);
          STFishC::sub_004162B0(pSVar7,&local_12,&local_14,&local_16);
          GVar8 = (*pSVar7->vtable->slot_2C)();
          bVar2 = thunk_FUN_00430750(GVar8);
          uStack_3a = ((*(short *)((int)DAT_007fb238 +
                                  ((int)local_16 * (int)SHORT_007fb27e +
                                   (int)local_14 * (int)SHORT_007fb278 + (int)local_12) * 2) * 0xc9
                       + -0xc9) / 3) / (int)(uint)bVar2;
          Library::DKW::TBL::FUN_006ae140(local_10,uVar14,(undefined4 *)&local_3c);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_64);
      }
      uVar14 = 0;
      if (0 < (int)local_48) {
        do {
          FUN_006acc70(param_3,uVar14,&local_28);
          pSVar7 = (STFishC *)GetObjPtr(local_40,param_1,local_28,CASE_1);
          STFishC::sub_004162B0(pSVar7,&local_12,&local_14,&local_16);
          local_68 = (int)*(short *)((int)DAT_007fb238 +
                                    ((int)local_16 * (int)SHORT_007fb27e +
                                     (int)local_14 * (int)SHORT_007fb278 + (int)local_12) * 2);
          if (local_68 < 1) {
            local_68 = -1;
          }
          else {
            GVar8 = (*pSVar7->vtable->slot_2C)();
            bVar2 = thunk_FUN_00430750(GVar8);
            local_68 = ((local_68 * 0xc9 + -0xc9) / 3) / (int)(uint)bVar2;
          }
          FUN_006acc70((int)local_78,uVar14,&local_54);
          Library::DKW::TBL::FUN_006ae140(local_54,local_1c,&local_68);
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_48);
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)local_20);
  }
  local_1c = 0;
  uVar14 = local_20;
  puVar5 = local_44;
  if (0 < (int)local_20) {
    do {
      FUN_006acc70((int)puVar5,local_1c,&local_10);
      if ((local_10 != (uint *)0x0) && (local_64 = local_10[3], local_64 != 0)) {
        puVar12 = local_10;
        uVar14 = local_64;
        if (local_64 == 1) {
          FUN_006acc70((int)local_10,0,(undefined4 *)&local_3c);
          piVar4 = (int *)GetObjPtr(local_40,param_1,CONCAT22((undefined2)uStack_3a,local_3c),CASE_1
                                   );
          local_60 = thunk_FUN_00486b40((int)piVar4);
          iVar3 = (**(code **)(*piVar4 + 0x78))();
          if (iVar3 < 1) {
            iVar3 = 1;
          }
          iVar9 = (**(code **)(*piVar4 + 0x2c))();
          local_c = (int)(*(int *)(&DAT_007e049c + iVar9 * 4) * local_60) / iVar3 + uStack_3a;
          Library::DKW::TBL::FUN_006ae140(puVar5,local_1c,&local_10);
          uVar14 = local_20;
        }
        else {
          while (uVar14 = uVar14 - 1, 0 < (int)uVar14) {
            uVar13 = 0;
            if (0 < (int)uVar14) {
              do {
                FUN_006acc70((int)puVar12,uVar13,(undefined4 *)&local_34);
                uVar11 = uVar13 + 1;
                FUN_006acc70((int)local_10,uVar11,(undefined4 *)&local_5c);
                if (CONCAT22(uStack_58,uStack_5a) < CONCAT22(uStack_30,uStack_32)) {
                  Library::DKW::TBL::FUN_006ae140(local_10,uVar13,(undefined4 *)&local_5c);
                  Library::DKW::TBL::FUN_006ae140(local_10,uVar11,(undefined4 *)&local_34);
                }
                puVar12 = local_10;
                uVar13 = uVar11;
              } while ((int)uVar11 < (int)uVar14);
            }
          }
          FUN_006acc70((int)puVar12,0,(undefined4 *)&local_34);
          piVar4 = (int *)GetObjPtr(local_40,param_1,CONCAT22(uStack_32,local_34),CASE_1);
          iVar3 = thunk_FUN_00486b40((int)piVar4);
          iVar9 = (**(code **)(*piVar4 + 0x78))();
          if (iVar9 < 1) {
            iVar9 = 1;
          }
          iVar10 = (**(code **)(*piVar4 + 0x2c))();
          local_74 = (*(int *)(&DAT_007e049c + iVar10 * 4) * iVar3) / iVar9;
          iVar3 = 0;
          local_50 = CONCAT22(uStack_30,uStack_32) + local_74;
          local_2c = 1;
          if (1 < (int)local_64) {
            do {
              FUN_006acc70((int)local_10,local_2c,(undefined4 *)&local_5c);
              piVar4 = (int *)GetObjPtr(local_40,param_1,CONCAT22(uStack_5a,local_5c),CASE_1);
              local_60 = thunk_FUN_00486b40((int)piVar4);
              iVar9 = (**(code **)(*piVar4 + 0x78))();
              if (iVar9 < 1) {
                iVar9 = 1;
              }
              iVar10 = (**(code **)(*piVar4 + 0x2c))();
              iVar9 = (int)(*(int *)(&DAT_007e049c + iVar10 * 4) * local_60) / iVar9;
              local_50 = local_50 + iVar9;
              iVar3 = (iVar3 - CONCAT22(uStack_58,uStack_5a)) + CONCAT22(uStack_30,uStack_32) +
                      local_74;
              if (iVar3 < 1) {
                local_50 = local_50 - iVar3;
                iVar3 = 0;
              }
              uStack_32 = uStack_5a;
              uStack_30 = uStack_58;
              local_2c = local_2c + 1;
              local_74 = iVar9;
            } while ((int)local_2c < (int)local_64);
          }
          local_c = local_50;
          Library::DKW::TBL::FUN_006ae140(local_44,local_1c,&local_10);
          uVar14 = local_20;
          puVar5 = local_44;
        }
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)uVar14);
  }
  local_1c = 0;
  if (0 < (int)local_48) {
    do {
      FUN_006acc70(param_3,local_1c,(undefined4 *)&local_3c);
      uVar13 = 0;
      if (0 < (int)uVar14) {
        do {
          FUN_006acc70((int)local_78,local_1c,&local_54);
          FUN_006acc70((int)local_54,uVar13,&uStack_3a);
          FUN_006acc70((int)puVar5,uVar13,&local_10);
          if (uStack_3a == -1) {
            local_8 = 1000000000;
          }
          else {
            if (local_10 == (uint *)0x0) {
              local_10 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(local_10,(undefined4 *)&local_3c);
            local_8 = 0;
          }
          Library::DKW::TBL::FUN_006ae140(puVar5,uVar13,&local_10);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar14);
      }
      local_2c = 0;
      if (0 < (int)uVar14) {
        do {
          FUN_006acc70((int)puVar5,local_2c,&local_10);
          if (local_8 != 1000000000) {
            local_64 = local_10[3];
            uVar14 = local_64;
            if (local_64 == 1) {
              FUN_006acc70((int)local_10,0,(undefined4 *)&local_3c);
              piVar4 = (int *)GetObjPtr(local_40,param_1,CONCAT22((undefined2)uStack_3a,local_3c),
                                        CASE_1);
              iVar3 = thunk_FUN_00486b40((int)piVar4);
              iVar9 = (**(code **)(*piVar4 + 0x78))();
              if (iVar9 < 1) {
                iVar9 = 1;
              }
              iVar10 = (**(code **)(*piVar4 + 0x2c))();
              local_8 = (*(int *)(&DAT_007e049c + iVar10 * 4) * iVar3) / iVar9 + uStack_3a;
            }
            else {
              while (uVar14 = uVar14 - 1, 0 < (int)uVar14) {
                uVar13 = 0;
                if (0 < (int)uVar14) {
                  do {
                    FUN_006acc70((int)local_10,uVar13,(undefined4 *)&local_34);
                    uVar11 = uVar13 + 1;
                    FUN_006acc70((int)local_10,uVar11,(undefined4 *)&local_5c);
                    if (CONCAT22(uStack_58,uStack_5a) < CONCAT22(uStack_30,uStack_32)) {
                      Library::DKW::TBL::FUN_006ae140(local_10,uVar13,(undefined4 *)&local_5c);
                      Library::DKW::TBL::FUN_006ae140(local_10,uVar11,(undefined4 *)&local_34);
                    }
                    uVar13 = uVar11;
                  } while ((int)uVar11 < (int)uVar14);
                }
              }
              FUN_006acc70((int)local_10,0,(undefined4 *)&local_34);
              piVar4 = (int *)GetObjPtr(local_40,param_1,CONCAT22(uStack_32,local_34),CASE_1);
              iVar3 = thunk_FUN_00486b40((int)piVar4);
              iVar9 = (**(code **)(*piVar4 + 0x78))();
              if (iVar9 < 1) {
                iVar9 = 1;
              }
              iVar10 = (**(code **)(*piVar4 + 0x2c))();
              local_74 = (*(int *)(&DAT_007e049c + iVar10 * 4) * iVar3) / iVar9;
              iVar3 = 0;
              local_50 = CONCAT22(uStack_30,uStack_32) + local_74;
              local_6c = 1;
              if (1 < (int)local_64) {
                do {
                  FUN_006acc70((int)local_10,local_6c,(undefined4 *)&local_5c);
                  piVar4 = (int *)GetObjPtr(local_40,param_1,CONCAT22(uStack_5a,local_5c),CASE_1);
                  local_60 = thunk_FUN_00486b40((int)piVar4);
                  iVar9 = (**(code **)(*piVar4 + 0x78))();
                  if (iVar9 < 1) {
                    iVar9 = 1;
                  }
                  iVar10 = (**(code **)(*piVar4 + 0x2c))();
                  iVar9 = (int)(*(int *)(&DAT_007e049c + iVar10 * 4) * local_60) / iVar9;
                  local_50 = local_50 + iVar9;
                  iVar3 = (iVar3 - CONCAT22(uStack_58,uStack_5a)) + CONCAT22(uStack_30,uStack_32) +
                          local_74;
                  if (iVar3 < 1) {
                    local_50 = local_50 - iVar3;
                    iVar3 = 0;
                  }
                  uStack_32 = uStack_5a;
                  uStack_30 = uStack_58;
                  local_6c = local_6c + 1;
                  local_74 = iVar9;
                } while ((int)local_6c < (int)local_64);
              }
              local_8 = local_50;
            }
            Library::DKW::TBL::FUN_006ae140(local_44,local_2c,&local_10);
            uVar14 = local_20;
            puVar5 = local_44;
          }
          local_2c = local_2c + 1;
        } while ((int)local_2c < (int)uVar14);
      }
      if (local_70 == (uint *)0x0) {
        local_70 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
      }
      FUN_006acc70(param_3,local_1c,(undefined4 *)&local_4c);
      uVar13 = 0;
      if (0 < (int)uVar14) {
        do {
          FUN_006acc70((int)puVar5,uVar13,&local_10);
          if (local_8 != 1000000000) break;
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar14);
      }
      if (uVar13 == uVar14) {
        local_4a = 0xffff;
        Library::DKW::TBL::FUN_006ae1c0(local_70,(undefined4 *)&local_4c);
      }
      else if (uVar13 == uVar14 - 1) {
        FUN_006acc70(param_2,uVar13,(undefined4 *)&local_4a);
        Library::DKW::TBL::FUN_006ae1c0(local_70,(undefined4 *)&local_4c);
        local_c = local_8;
        Library::DKW::TBL::FUN_006ae140(puVar5,uVar13,&local_10);
      }
      else {
        uVar14 = uVar13 + 1;
        local_6c = local_8;
        local_60 = uVar13;
        if ((int)uVar14 < (int)local_20) {
          do {
            FUN_006acc70((int)puVar5,uVar14,&local_10);
            if ((local_8 != 1000000000) && ((int)local_8 < (int)local_6c)) {
              local_6c = local_8;
              uVar13 = uVar14;
            }
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < (int)local_20);
        }
        local_60 = uVar13;
        FUN_006acc70(param_2,uVar13,(undefined4 *)&local_4a);
        Library::DKW::TBL::FUN_006ae1c0(local_70,(undefined4 *)&local_4c);
        FUN_006acc70((int)puVar5,uVar13,&local_10);
        local_c = local_8;
        Library::DKW::TBL::FUN_006ae140(puVar5,uVar13,&local_10);
        local_2c = 0;
        if (0 < (int)local_20) {
          do {
            if (local_2c != uVar13) {
              FUN_006acc70((int)puVar5,local_2c,&local_10);
              if (local_8 != 1000000000) {
                uVar13 = 0;
                uVar14 = local_10[3];
                if (0 < (int)uVar14) {
                  do {
                    FUN_006acc70((int)local_10,uVar13,(undefined4 *)&local_3c);
                    if (local_3c == local_4c) {
                      FUN_006b0c70((int)local_10,uVar13);
                      puVar5 = local_44;
                      break;
                    }
                    uVar13 = uVar13 + 1;
                    puVar5 = local_44;
                  } while ((int)uVar13 < (int)uVar14);
                }
              }
            }
            local_2c = local_2c + 1;
            uVar13 = local_60;
          } while ((int)local_2c < (int)local_20);
        }
      }
      local_1c = local_1c + 1;
      uVar14 = local_20;
    } while ((int)local_1c < (int)local_48);
  }
  uVar13 = 0;
  if (0 < (int)uVar14) {
    do {
      FUN_006acc70((int)puVar5,uVar13,&local_10);
      if (local_10 != (uint *)0x0) {
        FUN_006ae110((byte *)local_10);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar14);
  }
  FUN_006ae110((byte *)puVar5);
  uVar14 = local_48;
  puVar5 = local_78;
  uVar13 = 0;
  if (0 < (int)local_48) {
    do {
      FUN_006acc70((int)puVar5,uVar13,&local_54);
      if (local_54 != (uint *)0x0) {
        FUN_006ae110((byte *)local_54);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (int)uVar14);
  }
  FUN_006ae110((byte *)puVar5);
  g_currentExceptionFrame = local_c8.previous;
  return local_70;
}

