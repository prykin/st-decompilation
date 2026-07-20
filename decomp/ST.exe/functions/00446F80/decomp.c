
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DistributeGuardBoats */

void __thiscall STAllPlayersC::DistributeGuardBoats(STAllPlayersC *this,uint param_1)

{
  code *pcVar1;
  DArrayTy *pDVar2;
  DArrayTy *pDVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  DArrayTy *pDVar7;
  uint uVar8;
  dword dVar9;
  undefined4 unaff_ESI;
  uint uVar10;
  void *unaff_EDI;
  uint uVar11;
  undefined4 *puVar12;
  DArrayTy *pDVar13;
  InternalExceptionFrame local_e4;
  int local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  DArrayTy *local_88;
  DArrayTy *local_84;
  DArrayTy *local_80;
  DArrayTy *local_7c;
  int local_78;
  DArrayTy *local_74;
  DArrayTy *local_70;
  STAllPlayersC *local_6c;
  undefined2 local_66;
  DArrayTy *local_64;
  DArrayTy *local_60;
  int local_5c;
  uint local_58;
  undefined2 local_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  int local_4e;
  DArrayTy *local_48;
  int local_44;
  DArrayTy *local_40;
  uint local_3c;
  short local_38;
  short local_36;
  uint local_34;
  DArrayTy *local_30;
  uint local_2c;
  STFishC *local_28;
  ushort local_24;
  ushort uStack_22;
  DArrayTy *local_1c;
  short local_16;
  DArrayTy *local_14;
  short local_10;
  short local_e;
  DArrayTy *local_c;
  uint local_8;
  
  iVar6 = (int)(char)(byte)param_1;
  local_7c = g_playerRuntime[iVar6].pgPairs;
  local_48 = g_playerRuntime[iVar6].field2176_0x9fe;
  local_60 = g_playerRuntime[iVar6].field2175_0x9fa;
  local_64 = g_playerRuntime[iVar6].field2177_0xa02;
  if (local_60 != (DArrayTy *)0x0) {
    local_e4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_e4;
    local_6c = this;
    iVar6 = Library::MSVCRT::__setjmp3(local_e4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pDVar3 = local_48;
    if (iVar6 == 0) {
      if (local_48 != (DArrayTy *)0x0) {
        dVar9 = local_48->count;
        local_8 = 0;
        if (0 < (int)dVar9) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar3,local_8,&local_c);
            FUN_006ae110((byte *)local_c);
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)dVar9);
        }
        FUN_006ae110((byte *)pDVar3);
      }
      local_48 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
      local_a0 = (int)(char)(byte)param_1;
      iVar6 = local_a0 * 0xa62;
      g_playerRuntime[local_a0].field2176_0x9fe = local_48;
      pDVar3 = (DArrayTy *)local_60->count;
      local_5c = iVar6;
      local_30 = pDVar3;
      local_1c = pDVar3;
      pDVar7 = local_60;
joined_r0x0044707d:
      if (local_1c != (DArrayTy *)0x0) {
        local_8 = 0;
        if (0 < (int)pDVar3) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar7,local_8,(undefined4 *)&local_54);
            if (local_4e != 1) {
              local_4e = 1;
              Library::DKW::TBL::FUN_006ae140(&pDVar7->flags,local_8,(undefined4 *)&local_54);
              local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
              Library::DKW::TBL::FUN_006ae1c0((uint *)local_c,&local_8);
              local_58 = Library::DKW::TBL::FUN_006ae1c0(&local_48->flags,&local_c);
              local_40 = *(DArrayTy **)(CONCAT22(uStack_50,uStack_52) + 0xc);
              local_14 = (DArrayTy *)0x0;
              if (0 < (int)local_40) goto LAB_00447106;
              goto LAB_004471ad;
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)pDVar3);
        }
        goto LAB_004471bd;
      }
LAB_0044738a:
      pDVar3 = local_64;
      if (local_64 != (DArrayTy *)0x0) {
        dVar9 = local_64->count;
        if ((dVar9 != 0) && (local_8 = 0, 0 < (int)dVar9)) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar3,local_8,&local_c);
            if (local_c != (DArrayTy *)0x0) {
              FUN_006ae110((byte *)local_c);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)dVar9);
        }
        FUN_006ae110((byte *)pDVar3);
        *(undefined4 *)((int)&g_playerRuntime[0].field2177_0xa02 + iVar6) = 0;
      }
      uVar8 = local_48->count;
      local_3c = uVar8;
      pDVar3 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,uVar8,4,1);
      local_8 = 0;
      *(DArrayTy **)((int)&g_playerRuntime[0].field2177_0xa02 + iVar6) = pDVar3;
      local_64 = pDVar3;
      if (0 < (int)uVar8) {
        do {
          local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
          Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar3,&local_c);
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)uVar8);
      }
      local_40 = (DArrayTy *)local_7c->count;
      local_8 = 0;
      if (0 < (int)local_40) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_7c,local_8,&local_78);
          uVar8 = 0;
          local_30 = *(DArrayTy **)(local_78 + 0xc);
          dVar9 = local_74->count;
          local_1c = (DArrayTy *)local_70->count;
          local_14 = (DArrayTy *)0x0;
          if (0 < (int)local_1c) {
            do {
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_70,(uint)local_14,
                           (undefined4 *)&local_24);
              local_2c = (uStack_22 * dVar9 * 10) / (uint)local_30;
              local_30 = (DArrayTy *)((int)local_30 - (uint)uStack_22);
              if (7 < (int)local_2c) {
                if ((local_2c == 8) || (local_2c == 9)) {
                  local_2c = 10;
                }
                local_2c = (int)local_2c / 10;
                dVar9 = dVar9 - local_2c;
                FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_64,(uint)local_24,&local_c);
                uVar11 = uVar8;
                if ((int)uVar8 < (int)(uVar8 + local_2c)) {
                  do {
                    uVar10 = FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_74,uVar11,&local_34);
                    if (uVar10 == 0xfffffffc) break;
                    Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_34);
                    uVar11 = uVar11 + 1;
                  } while ((int)uVar11 < (int)(uVar8 + local_2c));
                }
                uVar8 = uVar8 + local_2c;
              }
              local_14 = (DArrayTy *)((int)&local_14->flags + 1);
            } while ((int)local_14 < (int)local_1c);
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)local_40);
      }
      uVar8 = local_3c;
      pDVar3 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,local_3c,4,1);
      *(DArrayTy **)((int)&g_playerRuntime[0].field2178_0xa06 + local_5c) = pDVar3;
      local_8 = 0;
      local_40 = pDVar3;
      if (0 < (int)uVar8) {
        do {
          local_c = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,0x18,1);
          Library::DKW::TBL::FUN_006ae1c0((uint *)pDVar3,&local_c);
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)uVar8);
      }
      local_8 = 0;
      if (0 < (int)uVar8) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_64,local_8,&local_c);
          if (local_c->count != 0) {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_48,local_8,&local_c);
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_c,0,&local_34);
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_60,local_34 & 0xffff,
                         (undefined4 *)&local_54);
            local_28 = (STFishC *)GetObjPtr(local_6c,param_1,CONCAT22(uStack_52,local_54),CASE_1);
            if (local_28 != (STFishC *)0x0) {
              STFishC::sub_004162B0(local_28,&local_e,&local_10,&local_16);
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_40,local_8,&local_c);
              pDVar3 = (DArrayTy *)
                       thunk_FUN_0043f7b0((byte)param_1,(int *)0x0,(uint *)(int)local_e,
                                          (int)local_10,(int)local_16,(int *)0x7,7,4,0);
              local_30 = pDVar3;
              if (pDVar3 != (DArrayTy *)0x0) {
                pDVar7 = (DArrayTy *)pDVar3->count;
                uVar8 = 0;
                local_1c = pDVar7;
                local_14 = pDVar7;
                if (0 < (int)pDVar7) {
                  do {
                    FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar3,uVar8,&local_28);
                    iVar6 = (*local_28->vtable->vfunc_F8)();
                    if (((iVar6 == 0) || (iVar6 = (*local_28->vtable->vfunc_F0)(), iVar6 == 0)) ||
                       (iVar6 = (*local_28->vtable->vfunc_F4)(local_a0), iVar6 == 0)) {
                      FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)pDVar3,uVar8);
                      uVar8 = uVar8 - 1;
                      local_14 = (DArrayTy *)((int)&local_14[-1].data + 3);
                      pDVar7 = (DArrayTy *)((int)&pDVar7[-1].data + 3);
                    }
                    uVar8 = uVar8 + 1;
                  } while ((int)uVar8 < (int)local_14);
                }
                local_1c = pDVar7;
                pDVar7 = local_14;
                if (pDVar3->count != 0) {
                  pDVar3 = (DArrayTy *)
                           Library::DKW::TBL::FUN_006ae290((uint *)0x0,(uint)local_14,4,1);
                  Library::DKW::TBL::FUN_006ae140
                            ((uint *)pDVar3,(uint)((int)&pDVar7[-1].data + 3),&local_44);
                  puVar12 = pDVar3->data;
                  for (; pDVar13 = local_1c, pDVar2 = local_14, pDVar7 != (DArrayTy *)0x0;
                      pDVar7 = (DArrayTy *)((int)&pDVar7[-1].data + 3)) {
                    *puVar12 = 0;
                    puVar12 = puVar12 + 1;
                  }
                  while (local_1c = pDVar13, local_14 = pDVar2, local_1c != (DArrayTy *)0x0) {
                    uVar8 = 0;
                    if (0 < (int)pDVar2) {
                      do {
                        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar3,uVar8,&local_44);
                        if (local_44 != 1) {
                          local_44 = 1;
                          Library::DKW::TBL::FUN_006ae140((uint *)pDVar3,uVar8,&local_44);
                          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_30,uVar8,&local_28);
                          STFishC::sub_004162B0(local_28,&local_e,&local_10,&local_16);
                          local_9c = (uint)local_e;
                          local_98 = (int)local_10;
                          local_94 = (int)local_16;
                          local_90 = 1;
                          local_8c = *(int *)&local_28->field_0x219;
                          local_88 = (DArrayTy *)0x0;
                          local_58 = Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_9c);
                          local_1c = (DArrayTy *)((int)&local_1c[-1].data + 3);
                          break;
                        }
                        uVar8 = uVar8 + 1;
                      } while ((int)uVar8 < (int)pDVar2);
                    }
                    if (local_1c == (DArrayTy *)0x0) break;
                    uVar8 = uVar8 + 1;
                    pDVar13 = local_1c;
                    pDVar2 = local_14;
                    if ((int)uVar8 < (int)local_14) {
                      do {
                        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar3,uVar8,&local_44);
                        if (local_44 != 1) {
                          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_30,uVar8,&local_28);
                          STFishC::sub_004162B0(local_28,&local_38,&local_36,&local_66);
                          uVar11 = (int)local_38 - (int)local_e >> 0x1f;
                          if (((int)(((int)local_38 - (int)local_e ^ uVar11) - uVar11) < 3) &&
                             (uVar11 = (int)local_36 - (int)local_10 >> 0x1f,
                             (int)(((int)local_36 - (int)local_10 ^ uVar11) - uVar11) < 3)) {
                            local_44 = 1;
                            Library::DKW::TBL::FUN_006ae140((uint *)pDVar3,uVar8,&local_44);
                            local_90 = local_90 + 1;
                            local_8c = local_8c + *(int *)&local_28->field_0x219;
                            Library::DKW::TBL::FUN_006ae140(&local_c->flags,local_58,&local_9c);
                            pDVar13 = (DArrayTy *)((int)&pDVar13[-1].data + 3);
                          }
                        }
                        uVar8 = uVar8 + 1;
                        pDVar2 = local_14;
                      } while ((int)uVar8 < (int)local_14);
                    }
                  }
                  FUN_006ae110((byte *)local_30);
                }
                FUN_006ae110((byte *)pDVar3);
              }
            }
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)local_3c);
      }
      local_8 = 0;
      if (0 < (int)local_3c) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_64,local_8,&local_84);
          local_30 = (DArrayTy *)local_84->count;
          if (local_30 != (DArrayTy *)0x0) {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_40,local_8,&local_c);
            local_1c = (DArrayTy *)local_c->count;
            if (local_1c == (DArrayTy *)0x0) {
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_48,local_8,&local_80);
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_80,0,&local_34);
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_60,local_34 & 0xffff,
                           (undefined4 *)&local_54);
              local_28 = (STFishC *)GetObjPtr(local_6c,param_1,CONCAT22(uStack_52,local_54),CASE_1);
              if (local_28 != (STFishC *)0x0) {
                STFishC::sub_004162B0(local_28,&local_e,&local_10,&local_16);
                PutOnPlaceGuardBoats
                          (local_6c,param_1,(int)local_e,(int)local_10,local_16,(int)local_e,
                           (int)local_10,(int)local_16,local_84);
              }
            }
            else {
              uVar8 = 0;
              uVar11 = 0;
              if (0 < (int)local_1c) {
                do {
                  FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_c,uVar11,&local_9c);
                  uVar8 = uVar8 + local_8c;
                  uVar11 = uVar11 + 1;
                } while ((int)uVar11 < (int)local_1c);
              }
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_48,local_8,&local_80);
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_80,0,&local_34);
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_60,local_34 & 0xffff,
                           (undefined4 *)&local_54);
              local_28 = (STFishC *)GetObjPtr(local_6c,param_1,CONCAT22(uStack_52,local_54),CASE_1);
              if (local_28 != (STFishC *)0x0) {
                STFishC::sub_004162B0(local_28,&local_e,&local_10,&local_16);
                uVar11 = 0;
                local_14 = (DArrayTy *)0x0;
                if (0 < (int)local_1c) {
                  do {
                    if (uVar8 != 0) {
                      FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_c,(uint)local_14,&local_9c);
                      local_2c = (uint)(local_8c * (int)local_30 * 10) / uVar8;
                      uVar8 = uVar8 - local_8c;
                      if (7 < (int)local_2c) {
                        if ((local_2c == 8) || (local_2c == 9)) {
                          local_2c = 10;
                        }
                        local_2c = (int)local_2c / 10;
                        local_30 = (DArrayTy *)((int)local_30 - local_2c);
                        if (local_88 == (DArrayTy *)0x0) {
                          local_88 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
                        }
                        uVar10 = uVar11;
                        if ((int)uVar11 < (int)(uVar11 + local_2c)) {
                          do {
                            uVar4 = FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_84,uVar10,
                                                 &local_34);
                            if (uVar4 == 0xfffffffc) break;
                            Library::DKW::TBL::FUN_006ae1c0(&local_88->flags,&local_34);
                            uVar10 = uVar10 + 1;
                          } while ((int)uVar10 < (int)(uVar11 + local_2c));
                        }
                        uVar11 = uVar11 + local_2c;
                        if ((local_88 != (DArrayTy *)0x0) && (local_88->count != 0)) {
                          PutOnPlaceGuardBoats
                                    (local_6c,param_1,(int)local_e,(int)local_10,local_16,local_9c,
                                     local_98,local_94,local_88);
                          FUN_006ae110((byte *)local_88);
                          local_88 = (DArrayTy *)0x0;
                        }
                      }
                    }
                    local_14 = (DArrayTy *)((int)&local_14->flags + 1);
                  } while ((int)local_14 < (int)local_1c);
                }
              }
            }
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)local_3c);
      }
      pDVar3 = local_7c;
      *(undefined4 *)((int)&g_playerRuntime[0].field2179_0xa0a + local_5c) =
           PTR_00802a38->field_00E4;
      if (local_7c != (DArrayTy *)0x0) {
        dVar9 = local_7c->count;
        local_8 = 0;
        if (0 < (int)dVar9) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar3,local_8,&local_78);
            if (local_70 != (DArrayTy *)0x0) {
              FUN_006ae110((byte *)local_70);
              local_70 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,4,1);
              Library::DKW::TBL::FUN_006ae140(&pDVar3->flags,local_8,&local_78);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)dVar9);
        }
      }
      pDVar3 = local_60;
      if (local_60 != (DArrayTy *)0x0) {
        dVar9 = local_60->count;
        local_8 = 0;
        if (0 < (int)dVar9) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar3,local_8,(undefined4 *)&local_54);
            if ((byte *)CONCAT22(uStack_50,uStack_52) != (byte *)0x0) {
              FUN_006ae110((byte *)CONCAT22(uStack_50,uStack_52));
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)dVar9);
        }
        FUN_006ae110((byte *)pDVar3);
        local_60 = (DArrayTy *)0x0;
        *(undefined4 *)((int)&g_playerRuntime[0].field2175_0x9fa + local_5c) = 0;
      }
      uVar8 = local_3c;
      pDVar3 = local_48;
      if (local_48 != (DArrayTy *)0x0) {
        local_8 = 0;
        if (0 < (int)local_3c) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar3,local_8,&local_c);
            if (local_c != (DArrayTy *)0x0) {
              FUN_006ae110((byte *)local_c);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)uVar8);
        }
        FUN_006ae110((byte *)pDVar3);
        local_48 = (DArrayTy *)0x0;
        *(undefined4 *)((int)&g_playerRuntime[0].field2176_0x9fe + local_5c) = 0;
      }
      uVar8 = local_3c;
      pDVar3 = local_64;
      if (local_64 != (DArrayTy *)0x0) {
        local_8 = 0;
        if (0 < (int)local_3c) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar3,local_8,&local_c);
            if (local_c != (DArrayTy *)0x0) {
              FUN_006ae110((byte *)local_c);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)uVar8);
        }
        FUN_006ae110((byte *)pDVar3);
        local_64 = (DArrayTy *)0x0;
        *(undefined4 *)((int)&g_playerRuntime[0].field2177_0xa02 + local_5c) = 0;
      }
      if (local_40 != (DArrayTy *)0x0) {
        local_8 = 0;
        pDVar3 = local_40;
        if (0 < (int)local_3c) {
          do {
            FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar3,local_8,&local_c);
            if (local_c != (DArrayTy *)0x0) {
              dVar9 = local_c->count;
              if ((dVar9 != 0) && (uVar8 = 0, 0 < (int)dVar9)) {
                do {
                  FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_c,uVar8,&local_9c);
                  if (local_88 != (DArrayTy *)0x0) {
                    FUN_006ae110((byte *)local_88);
                  }
                  uVar8 = uVar8 + 1;
                } while ((int)uVar8 < (int)dVar9);
              }
              FUN_006ae110((byte *)local_c);
              pDVar3 = local_40;
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)local_3c);
        }
        FUN_006ae110((byte *)pDVar3);
        *(undefined4 *)((int)&g_playerRuntime[0].field2178_0xa06 + local_5c) = 0;
      }
      g_currentExceptionFrame = local_e4.previous;
      return;
    }
    g_currentExceptionFrame = local_e4.previous;
    if (iVar6 != -0x5001fff7) {
      iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2b90,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__DistributeGuardBo_007a8458);
      if (iVar5 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar6,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2b91);
    }
  }
  return;
LAB_00447106:
  do {
    FUN_006acc70((AnonShape_006ACC70_C8641025 *)CONCAT22(uStack_50,uStack_52),(uint)local_14,
                 &local_2c);
    FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_7c,local_2c,&local_78);
    uVar11 = local_58;
    uVar8 = local_70->count;
    if (uVar8 == 0) {
      local_24 = (ushort)local_58;
LAB_00447196:
      uStack_22 = 1;
      Library::DKW::TBL::FUN_006ae1c0(&local_70->flags,(undefined4 *)&local_24);
    }
    else {
      uVar10 = 0;
      if (0 < (int)uVar8) {
        do {
          FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_70,uVar10,(undefined4 *)&local_24);
          if (local_24 == uVar11) {
            uStack_22 = uStack_22 + 1;
            Library::DKW::TBL::FUN_006ae140(&local_70->flags,uVar10,(undefined4 *)&local_24);
            break;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar8);
      }
      if (uVar10 == uVar8) {
        local_24 = (ushort)local_58;
        goto LAB_00447196;
      }
    }
    local_14 = (DArrayTy *)((int)&local_14->flags + 1);
  } while ((int)local_14 < (int)local_40);
LAB_004471ad:
  local_1c = (DArrayTy *)((int)&local_1c[-1].data + 3);
  iVar6 = local_5c;
  pDVar7 = local_60;
  pDVar3 = local_30;
LAB_004471bd:
  if (local_1c == (DArrayTy *)0x0) goto LAB_0044738a;
  local_28 = (STFishC *)GetObjPtr(local_6c,param_1,CONCAT22(uStack_52,local_54),CASE_1);
  if (local_28 != (STFishC *)0x0) {
    STFishC::sub_004162B0(local_28,&local_e,&local_10,&local_16);
    local_8 = local_8 + 1;
    if ((int)local_8 < (int)pDVar3) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar7,local_8,(undefined4 *)&local_54);
        if ((((local_4e != 1) &&
             (local_28 = (STFishC *)GetObjPtr(local_6c,param_1,CONCAT22(uStack_52,local_54),CASE_1),
             local_28 != (STFishC *)0x0)) &&
            (STFishC::sub_004162B0(local_28,&local_38,&local_36,&local_66),
            uVar8 = (int)local_38 - (int)local_e >> 0x1f,
            (int)(((int)local_38 - (int)local_e ^ uVar8) - uVar8) < 3)) &&
           (uVar8 = (int)local_36 - (int)local_10 >> 0x1f,
           (int)(((int)local_36 - (int)local_10 ^ uVar8) - uVar8) < 3)) {
          local_4e = 1;
          Library::DKW::TBL::FUN_006ae140(&pDVar7->flags,local_8,(undefined4 *)&local_54);
          Library::DKW::TBL::FUN_006ae1c0(&local_c->flags,&local_8);
          local_14 = (DArrayTy *)0x0;
          local_40 = *(DArrayTy **)(CONCAT22(uStack_50,uStack_52) + 0xc);
          if (0 < (int)local_40) {
            do {
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)CONCAT22(uStack_50,uStack_52),
                           (uint)local_14,&local_2c);
              FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_7c,local_2c,&local_78);
              uVar11 = local_58;
              uVar8 = local_70->count;
              if (uVar8 == 0) {
                local_24 = (ushort)local_58;
LAB_00447348:
                uStack_22 = 1;
                Library::DKW::TBL::FUN_006ae1c0(&local_70->flags,(undefined4 *)&local_24);
              }
              else {
                uVar10 = 0;
                if (0 < (int)uVar8) {
                  do {
                    FUN_006acc70((AnonShape_006ACC70_C8641025 *)local_70,uVar10,
                                 (undefined4 *)&local_24);
                    if (local_24 == uVar11) {
                      uStack_22 = uStack_22 + 1;
                      Library::DKW::TBL::FUN_006ae140
                                (&local_70->flags,uVar10,(undefined4 *)&local_24);
                      break;
                    }
                    uVar10 = uVar10 + 1;
                  } while ((int)uVar10 < (int)uVar8);
                }
                if (uVar10 == uVar8) {
                  local_24 = (ushort)local_58;
                  goto LAB_00447348;
                }
              }
              local_14 = (DArrayTy *)((int)&local_14->flags + 1);
            } while ((int)local_14 < (int)local_40);
          }
          local_1c = (DArrayTy *)((int)&local_1c[-1].data + 3);
          iVar6 = local_5c;
          pDVar7 = local_60;
          pDVar3 = local_30;
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < (int)pDVar3);
    }
  }
  goto joined_r0x0044707d;
}

