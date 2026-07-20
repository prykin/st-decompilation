
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::_AssignDocks */

uint * __thiscall
STAllPlayersC::_AssignDocks(STAllPlayersC *this,uint param_1,DArrayTy *param_2,DArrayTy *param_3)

{
  dword dVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  DArrayTy *pDVar6;
  void *this_00;
  uint *puVar7;
  undefined4 *puVar8;
  STFishC *pSVar9;
  Global_sub_00430750_param_1Enum GVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  DArrayTy *pDVar14;
  undefined4 unaff_ESI;
  uint uVar15;
  void *unaff_EDI;
  uint uVar16;
  short *psVar17;
  undefined4 *puVar18;
  undefined4 local_130 [13];
  short local_fc;
  short local_fa;
  short local_f8;
  int local_d0;
  InternalExceptionFrame local_c8;
  dword local_84;
  DArrayTy *local_80;
  int *local_7c;
  DArrayTy *local_78;
  int local_74;
  DArrayTy *local_70;
  DArrayTy *local_6c;
  int local_68;
  dword local_64;
  uint local_60;
  undefined2 local_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  DArrayTy *local_54;
  DArrayTy *local_50;
  short local_4c;
  undefined2 local_4a;
  dword local_48;
  DArrayTy *local_44;
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
  DArrayTy *local_10;
  DArrayTy *local_c;
  DArrayTy *local_8;
  
  local_70 = (DArrayTy *)0x0;
  local_c8.previous = g_currentExceptionFrame;
  local_80 = g_playerRuntime[(char)param_1].groups;
  g_currentExceptionFrame = &local_c8;
  local_40 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_c8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_c8.previous;
    if (iVar4 != -0x5001fff7) {
      iVar11 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x234b,0,iVar4,
                                  &DAT_007a4ccc,s_STAllPlayersC___AssignDocks_007a8040);
      if (iVar11 != 0) {
        pcVar2 = (code *)swi(3);
        puVar7 = (uint *)(*pcVar2)();
        return puVar7;
      }
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x234c);
    }
    return &local_70->flags;
  }
  if ((((param_2 == (DArrayTy *)0x0) || (param_3 == (DArrayTy *)0x0)) ||
      (uVar16 = param_2->count, local_20 = uVar16, uVar16 == 0)) ||
     (local_48 = param_3->count, local_48 == 0)) {
    uVar16 = local_20;
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2215);
  }
  if ((local_80 == (DArrayTy *)0x0) || (local_84 = local_80->count, local_84 == 0)) {
    RaiseInternalException
              (-0x5001fff8,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2216);
  }
  uVar15 = 0;
  if (0 < (int)uVar16) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,uVar15,&local_28);
      if ((short)local_28 == -1) {
LAB_00440bab:
        FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_2,uVar15);
        uVar16 = uVar16 - 1;
        uVar15 = uVar15 - 1;
        local_20 = uVar16;
      }
      else {
        piVar5 = (int *)GetObjPtr(local_40,param_1,local_28,CASE_1);
        iVar4 = (**(code **)(*piVar5 + 0xf8))();
        if (iVar4 == 0) goto LAB_00440bab;
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar16);
  }
  if (uVar16 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x221e);
  }
  uVar15 = 0;
  if (0 < (int)local_48) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_3,uVar15,&local_28);
      if ((short)local_28 == -1) {
LAB_00440c19:
        FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)param_3,uVar15);
        local_48 = local_48 - 1;
        uVar15 = uVar15 - 1;
      }
      else {
        piVar5 = (int *)GetObjPtr(local_40,param_1,local_28,CASE_1);
        iVar4 = (**(code **)(*piVar5 + 0xf8))();
        if (iVar4 == 0) goto LAB_00440c19;
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)local_48);
  }
  if (local_48 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x2225);
  }
  pDVar6 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar16,0xc,1);
  uVar15 = 0;
  local_44 = pDVar6;
  if (0 < (int)uVar16) {
    do {
      local_10 = (DArrayTy *)0x0;
      local_8 = (DArrayTy *)0x0;
      local_c = (DArrayTy *)0x0;
      Library::DKW::TBL::FUN_006ae140((uint *)pDVar6,uVar15,&local_10);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar16);
  }
  local_1c = 0;
  if (0 < (int)local_84) {
    do {
      uVar16 = local_1c;
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_80,local_1c,&local_7c);
      if (((local_7c != (int *)0x0) && (iVar4 = (**(code **)(*local_7c + 0xc))(), iVar4 == 4)) &&
         (*(short *)((int)local_7c + 0x27) != 0)) {
        local_6c = *(DArrayTy **)((int)local_7c + 0x29);
        local_2c = 0;
        local_78 = (DArrayTy *)local_6c->count;
        if (0 < (int)local_78) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_6c,local_2c,&local_28);
            if ((short)local_28 != -1) {
              this_00 = (void *)GetObjPtr(local_40,param_1,local_28,CASE_1);
              if (this_00 == (void *)0x0) {
                iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2239,0,0,
                                           &DAT_007a4ccc,s_STAllPlayersC___AssignDocks_inva_007a8064
                                          );
                if (iVar4 != 0) {
                  pcVar2 = (code *)swi(3);
                  puVar7 = (uint *)(*pcVar2)();
                  return puVar7;
                }
                RaiseInternalException
                          (-0x5001fffc,g_overwriteContext_007ED77C,
                           s_E____titans_wlad_to_allpl_cpp_007a6004,0x223a);
              }
              if ((*(int *)((int)this_00 + 0x20) == 0x14) &&
                 (iVar4 = thunk_FUN_0045ff10((int)this_00), iVar4 == 4)) {
                puVar8 = (undefined4 *)thunk_FUN_0048dcc0(this_00,local_130);
                psVar17 = &local_fc;
                for (iVar4 = 0xd; dVar1 = local_48, iVar4 != 0; iVar4 = iVar4 + -1) {
                  *(undefined4 *)psVar17 = *puVar8;
                  puVar8 = puVar8 + 1;
                  psVar17 = psVar17 + 2;
                }
                if ((local_d0 != 6) && (local_d0 != 7)) {
                  uVar16 = 0;
                  if (0 < (int)local_48) {
                    do {
                      FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_3,uVar16,
                                   (undefined4 *)&local_22);
                      if ((short)local_28 == local_22) break;
                      uVar16 = uVar16 + 1;
                    } while ((int)uVar16 < (int)dVar1);
                  }
                  if ((int)dVar1 <= (int)uVar16) {
                    if ((((local_fc < 0) || (SHORT_007fb240 <= local_fc)) || (local_fa < 0)) ||
                       (((SHORT_007fb242 <= local_fa || (local_f8 < 0)) ||
                        (SHORT_007fb244 <= local_f8)))) {
                      piVar5 = (int *)0x0;
                    }
                    else {
                      piVar5 = *(int **)(DAT_007fb248 +
                                        ((int)local_f8 * (int)SHORT_007fb246 +
                                         (int)local_fa * (int)SHORT_007fb240 + (int)local_fc) * 8);
                    }
                    if (((piVar5 != (int *)0x0) && (piVar5[9] == (int)(char)param_1)) &&
                       ((iVar4 = (**(code **)(*piVar5 + 0x2c))(), iVar4 == 0x33 &&
                        (iVar4 = (**(code **)(*piVar5 + 0xf8))(), uVar16 = local_20, iVar4 == 1))))
                    {
                      uVar15 = 0;
                      if (0 < (int)local_20) {
                        do {
                          FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,uVar15,
                                       (undefined4 *)&local_22);
                          if (local_22 == *(short *)((int)piVar5 + 0x32)) break;
                          uVar15 = uVar15 + 1;
                        } while ((int)uVar15 < (int)uVar16);
                      }
                      pDVar6 = local_44;
                      if (uVar15 != uVar16) {
                        FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_44,uVar15,&local_10);
                        if (local_10 == (DArrayTy *)0x0) {
                          local_10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
                          Library::DKW::TBL::FUN_006ae140(&pDVar6->flags,uVar15,&local_10);
                        }
                        local_3c = (short)local_28;
                        Library::DKW::TBL::FUN_006ae1c0(&local_10->flags,(undefined4 *)&local_3c);
                      }
                    }
                  }
                }
              }
            }
            local_2c = local_2c + 1;
            uVar16 = local_1c;
          } while ((int)local_2c < (int)local_78);
        }
      }
      local_1c = uVar16 + 1;
    } while ((int)local_1c < (int)local_84);
  }
  dVar1 = local_48;
  pDVar6 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_48,4,1);
  uVar16 = 0;
  local_78 = pDVar6;
  if (0 < (int)dVar1) {
    do {
      local_54 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_20,4,1);
      Library::DKW::TBL::FUN_006ae140((uint *)pDVar6,uVar16,&local_54);
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)dVar1);
  }
  local_1c = 0;
  if (0 < (int)local_20) {
    do {
      uVar16 = local_1c;
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,local_1c,&local_28);
      pSVar9 = (STFishC *)GetObjPtr(local_40,param_1,local_28,CASE_1);
      STFishC::sub_004162B0(pSVar9,&local_12,&local_14,&local_16);
      uVar15 = (int)SHORT_007fb27c * (int)SHORT_007fb27a * (int)SHORT_007fb278;
      puVar8 = DAT_007fb280;
      puVar18 = DAT_007fb238;
      for (uVar13 = (uVar15 & 0x7fffffff) >> 1; uVar13 != 0; uVar13 = uVar13 - 1) {
        *puVar18 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar18 = puVar18 + 1;
      }
      for (uVar15 = uVar15 * 2 & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
        *(undefined1 *)puVar18 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar18 = (undefined4 *)((int)puVar18 + 1);
      }
      FUN_006ab090((int)DAT_007fb238,(int)SHORT_007fb278,(int)SHORT_007fb27a,(int)SHORT_007fb27c,
                   (int)local_12,(int)local_14,(int)local_16,-1,-1,-1);
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_44,uVar16,&local_10);
      if (((local_10 != (DArrayTy *)0x0) && (local_64 = local_10->count, local_64 != 0)) &&
         (uVar16 = 0, 0 < (int)local_64)) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,uVar16,(undefined4 *)&local_3c);
          pSVar9 = (STFishC *)
                   GetObjPtr(local_40,param_1,CONCAT22((undefined2)uStack_3a,local_3c),CASE_1);
          STFishC::sub_004162B0(pSVar9,&local_12,&local_14,&local_16);
          GVar10 = (*pSVar9->vtable->vfunc_2C)();
          bVar3 = thunk_FUN_00430750(GVar10);
          uStack_3a = ((*(short *)((int)DAT_007fb238 +
                                  ((int)local_16 * (int)SHORT_007fb27e +
                                   (int)local_14 * (int)SHORT_007fb278 + (int)local_12) * 2) * 0xc9
                       + -0xc9) / 3) / (int)(uint)bVar3;
          Library::DKW::TBL::FUN_006ae140(&local_10->flags,uVar16,(undefined4 *)&local_3c);
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_64);
      }
      uVar16 = 0;
      if (0 < (int)local_48) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_3,uVar16,&local_28);
          pSVar9 = (STFishC *)GetObjPtr(local_40,param_1,local_28,CASE_1);
          STFishC::sub_004162B0(pSVar9,&local_12,&local_14,&local_16);
          local_68 = (int)*(short *)((int)DAT_007fb238 +
                                    ((int)local_16 * (int)SHORT_007fb27e +
                                     (int)local_14 * (int)SHORT_007fb278 + (int)local_12) * 2);
          if (local_68 < 1) {
            local_68 = -1;
          }
          else {
            GVar10 = (*pSVar9->vtable->vfunc_2C)();
            bVar3 = thunk_FUN_00430750(GVar10);
            local_68 = ((local_68 * 0xc9 + -0xc9) / 3) / (int)(uint)bVar3;
          }
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_78,uVar16,&local_54);
          Library::DKW::TBL::FUN_006ae140(&local_54->flags,local_1c,&local_68);
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_48);
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)local_20);
  }
  local_1c = 0;
  uVar16 = local_20;
  pDVar6 = local_44;
  if (0 < (int)local_20) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar6,local_1c,&local_10);
      if ((local_10 != (DArrayTy *)0x0) && (local_64 = local_10->count, local_64 != 0)) {
        pDVar14 = local_10;
        dVar1 = local_64;
        if (local_64 == 1) {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,0,(undefined4 *)&local_3c);
          piVar5 = (int *)GetObjPtr(local_40,param_1,CONCAT22((undefined2)uStack_3a,local_3c),CASE_1
                                   );
          local_60 = thunk_FUN_00486b40((int)piVar5);
          iVar4 = (**(code **)(*piVar5 + 0x78))();
          if (iVar4 < 1) {
            iVar4 = 1;
          }
          iVar11 = (**(code **)(*piVar5 + 0x2c))();
          local_c = (DArrayTy *)
                    ((int)(*(int *)(&DAT_007e049c + iVar11 * 4) * local_60) / iVar4 + uStack_3a);
          Library::DKW::TBL::FUN_006ae140(&pDVar6->flags,local_1c,&local_10);
          uVar16 = local_20;
        }
        else {
          while (dVar1 = dVar1 - 1, 0 < (int)dVar1) {
            uVar16 = 0;
            if (0 < (int)dVar1) {
              do {
                FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar14,uVar16,(undefined4 *)&local_34);
                uVar15 = uVar16 + 1;
                FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,uVar15,(undefined4 *)&local_5c)
                ;
                if (CONCAT22(uStack_58,uStack_5a) < CONCAT22(uStack_30,uStack_32)) {
                  Library::DKW::TBL::FUN_006ae140(&local_10->flags,uVar16,(undefined4 *)&local_5c);
                  Library::DKW::TBL::FUN_006ae140(&local_10->flags,uVar15,(undefined4 *)&local_34);
                }
                pDVar14 = local_10;
                uVar16 = uVar15;
              } while ((int)uVar15 < (int)dVar1);
            }
          }
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar14,0,(undefined4 *)&local_34);
          piVar5 = (int *)GetObjPtr(local_40,param_1,CONCAT22(uStack_32,local_34),CASE_1);
          iVar4 = thunk_FUN_00486b40((int)piVar5);
          iVar11 = (**(code **)(*piVar5 + 0x78))();
          if (iVar11 < 1) {
            iVar11 = 1;
          }
          iVar12 = (**(code **)(*piVar5 + 0x2c))();
          local_74 = (*(int *)(&DAT_007e049c + iVar12 * 4) * iVar4) / iVar11;
          iVar4 = 0;
          local_50 = (DArrayTy *)(CONCAT22(uStack_30,uStack_32) + local_74);
          local_2c = 1;
          if (1 < (int)local_64) {
            do {
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,local_2c,(undefined4 *)&local_5c)
              ;
              piVar5 = (int *)GetObjPtr(local_40,param_1,CONCAT22(uStack_5a,local_5c),CASE_1);
              local_60 = thunk_FUN_00486b40((int)piVar5);
              iVar11 = (**(code **)(*piVar5 + 0x78))();
              if (iVar11 < 1) {
                iVar11 = 1;
              }
              iVar12 = (**(code **)(*piVar5 + 0x2c))();
              iVar11 = (int)(*(int *)(&DAT_007e049c + iVar12 * 4) * local_60) / iVar11;
              local_50 = (DArrayTy *)((int)&local_50->flags + iVar11);
              iVar4 = (iVar4 - CONCAT22(uStack_58,uStack_5a)) + CONCAT22(uStack_30,uStack_32) +
                      local_74;
              if (iVar4 < 1) {
                local_50 = (DArrayTy *)((int)local_50 - iVar4);
                iVar4 = 0;
              }
              uStack_32 = uStack_5a;
              uStack_30 = uStack_58;
              local_2c = local_2c + 1;
              local_74 = iVar11;
            } while ((int)local_2c < (int)local_64);
          }
          local_c = local_50;
          Library::DKW::TBL::FUN_006ae140(&local_44->flags,local_1c,&local_10);
          uVar16 = local_20;
          pDVar6 = local_44;
        }
      }
      local_1c = local_1c + 1;
    } while ((int)local_1c < (int)uVar16);
  }
  local_1c = 0;
  if (0 < (int)local_48) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_3,local_1c,(undefined4 *)&local_3c);
      uVar15 = 0;
      if (0 < (int)uVar16) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_78,local_1c,&local_54);
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_54,uVar15,&uStack_3a);
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar6,uVar15,&local_10);
          if (uStack_3a == -1) {
            local_8 = (DArrayTy *)0x3b9aca00;
          }
          else {
            if (local_10 == (DArrayTy *)0x0) {
              local_10 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,6,1);
            }
            Library::DKW::TBL::FUN_006ae1c0(&local_10->flags,(undefined4 *)&local_3c);
            local_8 = (DArrayTy *)0x0;
          }
          Library::DKW::TBL::FUN_006ae140(&pDVar6->flags,uVar15,&local_10);
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar16);
      }
      local_2c = 0;
      if (0 < (int)uVar16) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar6,local_2c,&local_10);
          if (local_8 != (DArrayTy *)0x3b9aca00) {
            local_64 = local_10->count;
            dVar1 = local_64;
            if (local_64 == 1) {
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,0,(undefined4 *)&local_3c);
              piVar5 = (int *)GetObjPtr(local_40,param_1,CONCAT22((undefined2)uStack_3a,local_3c),
                                        CASE_1);
              iVar4 = thunk_FUN_00486b40((int)piVar5);
              iVar11 = (**(code **)(*piVar5 + 0x78))();
              if (iVar11 < 1) {
                iVar11 = 1;
              }
              iVar12 = (**(code **)(*piVar5 + 0x2c))();
              local_8 = (DArrayTy *)
                        ((*(int *)(&DAT_007e049c + iVar12 * 4) * iVar4) / iVar11 + uStack_3a);
            }
            else {
              while (dVar1 = dVar1 - 1, 0 < (int)dVar1) {
                uVar16 = 0;
                if (0 < (int)dVar1) {
                  do {
                    FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,uVar16,
                                 (undefined4 *)&local_34);
                    uVar15 = uVar16 + 1;
                    FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,uVar15,
                                 (undefined4 *)&local_5c);
                    if (CONCAT22(uStack_58,uStack_5a) < CONCAT22(uStack_30,uStack_32)) {
                      Library::DKW::TBL::FUN_006ae140
                                (&local_10->flags,uVar16,(undefined4 *)&local_5c);
                      Library::DKW::TBL::FUN_006ae140
                                (&local_10->flags,uVar15,(undefined4 *)&local_34);
                    }
                    uVar16 = uVar15;
                  } while ((int)uVar15 < (int)dVar1);
                }
              }
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,0,(undefined4 *)&local_34);
              piVar5 = (int *)GetObjPtr(local_40,param_1,CONCAT22(uStack_32,local_34),CASE_1);
              iVar4 = thunk_FUN_00486b40((int)piVar5);
              iVar11 = (**(code **)(*piVar5 + 0x78))();
              if (iVar11 < 1) {
                iVar11 = 1;
              }
              iVar12 = (**(code **)(*piVar5 + 0x2c))();
              local_74 = (*(int *)(&DAT_007e049c + iVar12 * 4) * iVar4) / iVar11;
              iVar4 = 0;
              local_50 = (DArrayTy *)(CONCAT22(uStack_30,uStack_32) + local_74);
              local_6c = (DArrayTy *)0x1;
              if (1 < (int)local_64) {
                do {
                  FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,(uint)local_6c,
                               (undefined4 *)&local_5c);
                  piVar5 = (int *)GetObjPtr(local_40,param_1,CONCAT22(uStack_5a,local_5c),CASE_1);
                  local_60 = thunk_FUN_00486b40((int)piVar5);
                  iVar11 = (**(code **)(*piVar5 + 0x78))();
                  if (iVar11 < 1) {
                    iVar11 = 1;
                  }
                  iVar12 = (**(code **)(*piVar5 + 0x2c))();
                  iVar11 = (int)(*(int *)(&DAT_007e049c + iVar12 * 4) * local_60) / iVar11;
                  local_50 = (DArrayTy *)((int)&local_50->flags + iVar11);
                  iVar4 = (iVar4 - CONCAT22(uStack_58,uStack_5a)) + CONCAT22(uStack_30,uStack_32) +
                          local_74;
                  if (iVar4 < 1) {
                    local_50 = (DArrayTy *)((int)local_50 - iVar4);
                    iVar4 = 0;
                  }
                  uStack_32 = uStack_5a;
                  uStack_30 = uStack_58;
                  local_6c = (DArrayTy *)((int)&local_6c->flags + 1);
                  local_74 = iVar11;
                } while ((int)local_6c < (int)local_64);
              }
              local_8 = local_50;
            }
            Library::DKW::TBL::FUN_006ae140(&local_44->flags,local_2c,&local_10);
            uVar16 = local_20;
            pDVar6 = local_44;
          }
          local_2c = local_2c + 1;
        } while ((int)local_2c < (int)uVar16);
      }
      if (local_70 == (DArrayTy *)0x0) {
        local_70 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,4,1);
      }
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_3,local_1c,(undefined4 *)&local_4c);
      uVar15 = 0;
      if (0 < (int)uVar16) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar6,uVar15,&local_10);
          if (local_8 != (DArrayTy *)0x3b9aca00) break;
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar16);
      }
      if (uVar15 == uVar16) {
        local_4a = 0xffff;
        Library::DKW::TBL::FUN_006ae1c0(&local_70->flags,(undefined4 *)&local_4c);
      }
      else if (uVar15 == uVar16 - 1) {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,uVar15,(undefined4 *)&local_4a);
        Library::DKW::TBL::FUN_006ae1c0(&local_70->flags,(undefined4 *)&local_4c);
        local_c = local_8;
        Library::DKW::TBL::FUN_006ae140(&pDVar6->flags,uVar15,&local_10);
      }
      else {
        uVar16 = uVar15 + 1;
        local_6c = local_8;
        local_60 = uVar15;
        if ((int)uVar16 < (int)local_20) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar6,uVar16,&local_10);
            if ((local_8 != (DArrayTy *)0x3b9aca00) && ((int)local_8 < (int)local_6c)) {
              local_6c = local_8;
              uVar15 = uVar16;
            }
            uVar16 = uVar16 + 1;
          } while ((int)uVar16 < (int)local_20);
        }
        local_60 = uVar15;
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)param_2,uVar15,(undefined4 *)&local_4a);
        Library::DKW::TBL::FUN_006ae1c0(&local_70->flags,(undefined4 *)&local_4c);
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar6,uVar15,&local_10);
        local_c = local_8;
        Library::DKW::TBL::FUN_006ae140(&pDVar6->flags,uVar15,&local_10);
        local_2c = 0;
        if (0 < (int)local_20) {
          do {
            if (local_2c != uVar15) {
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar6,local_2c,&local_10);
              if (local_8 != (DArrayTy *)0x3b9aca00) {
                uVar16 = 0;
                dVar1 = local_10->count;
                if (0 < (int)dVar1) {
                  do {
                    FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_10,uVar16,
                                 (undefined4 *)&local_3c);
                    if (local_3c == local_4c) {
                      FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_10,uVar16);
                      pDVar6 = local_44;
                      break;
                    }
                    uVar16 = uVar16 + 1;
                    pDVar6 = local_44;
                  } while ((int)uVar16 < (int)dVar1);
                }
              }
            }
            local_2c = local_2c + 1;
            uVar15 = local_60;
          } while ((int)local_2c < (int)local_20);
        }
      }
      local_1c = local_1c + 1;
      uVar16 = local_20;
    } while ((int)local_1c < (int)local_48);
  }
  uVar15 = 0;
  if (0 < (int)uVar16) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar6,uVar15,&local_10);
      if (local_10 != (DArrayTy *)0x0) {
        FUN_006ae110((byte *)local_10);
      }
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar16);
  }
  FUN_006ae110((byte *)pDVar6);
  dVar1 = local_48;
  pDVar6 = local_78;
  uVar16 = 0;
  if (0 < (int)local_48) {
    do {
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar6,uVar16,&local_54);
      if (local_54 != (DArrayTy *)0x0) {
        FUN_006ae110((byte *)local_54);
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < (int)dVar1);
  }
  FUN_006ae110((byte *)pDVar6);
  g_currentExceptionFrame = local_c8.previous;
  return &local_70->flags;
}

