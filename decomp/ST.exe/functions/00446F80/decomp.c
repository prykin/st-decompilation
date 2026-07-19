
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::DistributeGuardBoats */

void __thiscall STAllPlayersC::DistributeGuardBoats(STAllPlayersC *this,uint param_1)

{
  code *pcVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 unaff_ESI;
  uint uVar9;
  void *unaff_EDI;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  InternalExceptionFrame local_e4;
  int local_a0;
  uint local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  uint *local_88;
  int local_84;
  int local_80;
  uint *local_7c;
  int local_78;
  int local_74;
  uint *local_70;
  STAllPlayersC *local_6c;
  undefined2 local_66;
  uint *local_64;
  uint *local_60;
  int local_5c;
  uint local_58;
  undefined2 local_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  int local_4e;
  uint *local_48;
  int local_44;
  uint *local_40;
  uint local_3c;
  short local_38;
  short local_36;
  uint local_34;
  uint *local_30;
  uint local_2c;
  int *local_28;
  ushort local_24;
  ushort uStack_22;
  uint *local_1c;
  short local_16;
  uint *local_14;
  short local_10;
  short local_e;
  uint *local_c;
  uint local_8;
  
  iVar3 = (char)(byte)param_1 * 0xa62;
  local_7c = *(uint **)((int)&DAT_007f5816 + iVar3);
  local_48 = *(uint **)((int)&DAT_007f581e + iVar3);
  local_60 = *(uint **)((int)&DAT_007f581a + iVar3);
  local_64 = *(uint **)((int)&DAT_007f5822 + iVar3);
  if (local_60 != (uint *)0x0) {
    local_e4.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_e4;
    local_6c = this;
    iVar3 = __setjmp3(local_e4.jumpBuffer,0,unaff_EDI,unaff_ESI);
    puVar4 = local_48;
    if (iVar3 == 0) {
      if (local_48 != (uint *)0x0) {
        iVar3 = *(int *)((int)local_48 + 0xc);
        local_8 = 0;
        if (0 < iVar3) {
          do {
            FUN_006acc70((int)puVar4,local_8,&local_c);
            FUN_006ae110((byte *)local_c);
            local_8 = local_8 + 1;
          } while ((int)local_8 < iVar3);
        }
        FUN_006ae110((byte *)puVar4);
      }
      local_48 = FUN_006ae290((uint *)0x0,1,4,1);
      local_a0 = (int)(char)(byte)param_1;
      iVar3 = local_a0 * 0xa62;
      *(uint **)((int)&DAT_007f581e + iVar3) = local_48;
      puVar4 = (uint *)local_60[3];
      local_5c = iVar3;
      local_30 = puVar4;
      local_1c = puVar4;
      puVar8 = local_60;
joined_r0x0044707d:
      if (local_1c != (uint *)0x0) {
        local_8 = 0;
        if (0 < (int)puVar4) {
          do {
            FUN_006acc70((int)puVar8,local_8,(undefined4 *)&local_54);
            if (local_4e != 1) {
              local_4e = 1;
              FUN_006ae140(puVar8,local_8,(undefined4 *)&local_54);
              local_c = FUN_006ae290((uint *)0x0,1,4,1);
              FUN_006ae1c0(local_c,&local_8);
              local_58 = FUN_006ae1c0(local_48,&local_c);
              local_40 = *(uint **)(CONCAT22(uStack_50,uStack_52) + 0xc);
              local_14 = (uint *)0x0;
              if (0 < (int)local_40) goto LAB_00447106;
              goto LAB_004471ad;
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)puVar4);
        }
        goto LAB_004471bd;
      }
LAB_0044738a:
      puVar4 = local_64;
      if (local_64 != (uint *)0x0) {
        iVar6 = *(int *)((int)local_64 + 0xc);
        if ((iVar6 != 0) && (local_8 = 0, 0 < iVar6)) {
          do {
            FUN_006acc70((int)puVar4,local_8,&local_c);
            if (local_c != (uint *)0x0) {
              FUN_006ae110((byte *)local_c);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < iVar6);
        }
        FUN_006ae110((byte *)puVar4);
        *(undefined4 *)((int)&DAT_007f5822 + iVar3) = 0;
      }
      uVar7 = local_48[3];
      local_3c = uVar7;
      puVar4 = FUN_006ae290((uint *)0x0,uVar7,4,1);
      local_8 = 0;
      *(uint **)((int)&DAT_007f5822 + iVar3) = puVar4;
      local_64 = puVar4;
      if (0 < (int)uVar7) {
        do {
          local_c = FUN_006ae290((uint *)0x0,0,2,1);
          FUN_006ae1c0(puVar4,&local_c);
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)uVar7);
      }
      local_40 = (uint *)local_7c[3];
      local_8 = 0;
      if (0 < (int)local_40) {
        do {
          FUN_006acc70((int)local_7c,local_8,&local_78);
          uVar7 = 0;
          local_30 = *(uint **)(local_78 + 0xc);
          iVar3 = *(int *)(local_74 + 0xc);
          local_1c = (uint *)local_70[3];
          local_14 = (uint *)0x0;
          if (0 < (int)local_1c) {
            do {
              FUN_006acc70((int)local_70,(uint)local_14,(undefined4 *)&local_24);
              local_2c = ((uint)uStack_22 * iVar3 * 10) / (uint)local_30;
              local_30 = (uint *)((int)local_30 - (uint)uStack_22);
              if (7 < (int)local_2c) {
                if ((local_2c == 8) || (local_2c == 9)) {
                  local_2c = 10;
                }
                local_2c = (int)local_2c / 10;
                iVar3 = iVar3 - local_2c;
                FUN_006acc70((int)local_64,(uint)local_24,&local_c);
                uVar10 = uVar7;
                if ((int)uVar7 < (int)(uVar7 + local_2c)) {
                  do {
                    uVar9 = FUN_006acc70(local_74,uVar10,&local_34);
                    if (uVar9 == 0xfffffffc) break;
                    FUN_006ae1c0(local_c,&local_34);
                    uVar10 = uVar10 + 1;
                  } while ((int)uVar10 < (int)(uVar7 + local_2c));
                }
                uVar7 = uVar7 + local_2c;
              }
              local_14 = (uint *)((int)local_14 + 1);
            } while ((int)local_14 < (int)local_1c);
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)local_40);
      }
      uVar7 = local_3c;
      puVar4 = FUN_006ae290((uint *)0x0,local_3c,4,1);
      *(uint **)((int)&DAT_007f5826 + local_5c) = puVar4;
      local_8 = 0;
      local_40 = puVar4;
      if (0 < (int)uVar7) {
        do {
          local_c = FUN_006ae290((uint *)0x0,0,0x18,1);
          FUN_006ae1c0(puVar4,&local_c);
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)uVar7);
      }
      local_8 = 0;
      if (0 < (int)uVar7) {
        do {
          FUN_006acc70((int)local_64,local_8,&local_c);
          if (local_c[3] != 0) {
            FUN_006acc70((int)local_48,local_8,&local_c);
            FUN_006acc70((int)local_c,0,&local_34);
            FUN_006acc70((int)local_60,local_34 & 0xffff,(undefined4 *)&local_54);
            local_28 = (int *)thunk_FUN_0042b620(param_1,CONCAT22(uStack_52,local_54),1);
            if (local_28 != (int *)0x0) {
              thunk_FUN_004162b0(local_28,&local_e,&local_10,&local_16);
              FUN_006acc70((int)local_40,local_8,&local_c);
              puVar4 = thunk_FUN_0043f7b0((byte)param_1,(int *)0x0,(int)local_e,(int)local_10,
                                          (int)local_16,(int *)0x7,7,4,0);
              local_30 = puVar4;
              if (puVar4 != (uint *)0x0) {
                puVar8 = (uint *)puVar4[3];
                uVar7 = 0;
                local_1c = puVar8;
                local_14 = puVar8;
                if (0 < (int)puVar8) {
                  do {
                    FUN_006acc70((int)puVar4,uVar7,&local_28);
                    iVar3 = (**(code **)(*local_28 + 0xf8))();
                    if (((iVar3 == 0) || (iVar3 = (**(code **)(*local_28 + 0xf0))(), iVar3 == 0)) ||
                       (iVar3 = (**(code **)(*local_28 + 0xf4))(local_a0), iVar3 == 0)) {
                      FUN_006b0c70((int)puVar4,uVar7);
                      uVar7 = uVar7 - 1;
                      local_14 = (uint *)((int)local_14 - 1);
                      puVar8 = (uint *)((int)puVar8 - 1);
                    }
                    uVar7 = uVar7 + 1;
                  } while ((int)uVar7 < (int)local_14);
                }
                local_1c = puVar8;
                puVar8 = local_14;
                if (puVar4[3] != 0) {
                  puVar4 = FUN_006ae290((uint *)0x0,(uint)local_14,4,1);
                  FUN_006ae140(puVar4,(int)puVar8 - 1,&local_44);
                  puVar11 = (undefined4 *)puVar4[7];
                  for (; puVar12 = local_1c, puVar2 = local_14, puVar8 != (uint *)0x0;
                      puVar8 = (uint *)((int)puVar8 + -1)) {
                    *puVar11 = 0;
                    puVar11 = puVar11 + 1;
                  }
                  while (local_1c = puVar12, local_14 = puVar2, local_1c != (uint *)0x0) {
                    uVar7 = 0;
                    if (0 < (int)puVar2) {
                      do {
                        FUN_006acc70((int)puVar4,uVar7,&local_44);
                        if (local_44 != 1) {
                          local_44 = 1;
                          FUN_006ae140(puVar4,uVar7,&local_44);
                          FUN_006acc70((int)local_30,uVar7,&local_28);
                          thunk_FUN_004162b0(local_28,&local_e,&local_10,&local_16);
                          local_9c = (uint)local_e;
                          local_98 = (int)local_10;
                          local_94 = (int)local_16;
                          local_90 = 1;
                          local_8c = *(int *)((int)local_28 + 0x219);
                          local_88 = (uint *)0x0;
                          local_58 = FUN_006ae1c0(local_c,&local_9c);
                          local_1c = (uint *)((int)local_1c - 1);
                          break;
                        }
                        uVar7 = uVar7 + 1;
                      } while ((int)uVar7 < (int)puVar2);
                    }
                    if (local_1c == (uint *)0x0) break;
                    uVar7 = uVar7 + 1;
                    puVar12 = local_1c;
                    puVar2 = local_14;
                    if ((int)uVar7 < (int)local_14) {
                      do {
                        FUN_006acc70((int)puVar4,uVar7,&local_44);
                        if (local_44 != 1) {
                          FUN_006acc70((int)local_30,uVar7,&local_28);
                          thunk_FUN_004162b0(local_28,&local_38,&local_36,&local_66);
                          uVar10 = (int)local_38 - (int)local_e >> 0x1f;
                          if (((int)(((int)local_38 - (int)local_e ^ uVar10) - uVar10) < 3) &&
                             (uVar10 = (int)local_36 - (int)local_10 >> 0x1f,
                             (int)(((int)local_36 - (int)local_10 ^ uVar10) - uVar10) < 3)) {
                            local_44 = 1;
                            FUN_006ae140(puVar4,uVar7,&local_44);
                            local_90 = local_90 + 1;
                            local_8c = local_8c + *(int *)((int)local_28 + 0x219);
                            FUN_006ae140(local_c,local_58,&local_9c);
                            puVar12 = (uint *)((int)puVar12 - 1);
                          }
                        }
                        uVar7 = uVar7 + 1;
                        puVar2 = local_14;
                      } while ((int)uVar7 < (int)local_14);
                    }
                  }
                  FUN_006ae110((byte *)local_30);
                }
                FUN_006ae110((byte *)puVar4);
              }
            }
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)local_3c);
      }
      local_8 = 0;
      if (0 < (int)local_3c) {
        do {
          FUN_006acc70((int)local_64,local_8,&local_84);
          local_30 = *(uint **)(local_84 + 0xc);
          if (local_30 != (uint *)0x0) {
            FUN_006acc70((int)local_40,local_8,&local_c);
            local_1c = (uint *)local_c[3];
            if (local_1c == (uint *)0x0) {
              FUN_006acc70((int)local_48,local_8,&local_80);
              FUN_006acc70(local_80,0,&local_34);
              FUN_006acc70((int)local_60,local_34 & 0xffff,(undefined4 *)&local_54);
              local_28 = (int *)thunk_FUN_0042b620(param_1,CONCAT22(uStack_52,local_54),1);
              if (local_28 != (int *)0x0) {
                thunk_FUN_004162b0(local_28,&local_e,&local_10,&local_16);
                thunk_FUN_00448120(local_6c,param_1,(int)local_e,(int)local_10,local_16,(int)local_e
                                   ,(int)local_10,(int)local_16,local_84);
              }
            }
            else {
              uVar7 = 0;
              uVar10 = 0;
              if (0 < (int)local_1c) {
                do {
                  FUN_006acc70((int)local_c,uVar10,&local_9c);
                  uVar7 = uVar7 + local_8c;
                  uVar10 = uVar10 + 1;
                } while ((int)uVar10 < (int)local_1c);
              }
              FUN_006acc70((int)local_48,local_8,&local_80);
              FUN_006acc70(local_80,0,&local_34);
              FUN_006acc70((int)local_60,local_34 & 0xffff,(undefined4 *)&local_54);
              local_28 = (int *)thunk_FUN_0042b620(param_1,CONCAT22(uStack_52,local_54),1);
              if (local_28 != (int *)0x0) {
                thunk_FUN_004162b0(local_28,&local_e,&local_10,&local_16);
                uVar10 = 0;
                local_14 = (uint *)0x0;
                if (0 < (int)local_1c) {
                  do {
                    if (uVar7 != 0) {
                      FUN_006acc70((int)local_c,(uint)local_14,&local_9c);
                      local_2c = (uint)(local_8c * (int)local_30 * 10) / uVar7;
                      uVar7 = uVar7 - local_8c;
                      if (7 < (int)local_2c) {
                        if ((local_2c == 8) || (local_2c == 9)) {
                          local_2c = 10;
                        }
                        local_2c = (int)local_2c / 10;
                        local_30 = (uint *)((int)local_30 - local_2c);
                        if (local_88 == (uint *)0x0) {
                          local_88 = FUN_006ae290((uint *)0x0,1,2,1);
                        }
                        uVar9 = uVar10;
                        if ((int)uVar10 < (int)(uVar10 + local_2c)) {
                          do {
                            uVar5 = FUN_006acc70(local_84,uVar9,&local_34);
                            if (uVar5 == 0xfffffffc) break;
                            FUN_006ae1c0(local_88,&local_34);
                            uVar9 = uVar9 + 1;
                          } while ((int)uVar9 < (int)(uVar10 + local_2c));
                        }
                        uVar10 = uVar10 + local_2c;
                        if ((local_88 != (uint *)0x0) && (local_88[3] != 0)) {
                          thunk_FUN_00448120(local_6c,param_1,(int)local_e,(int)local_10,local_16,
                                             local_9c,local_98,local_94,(int)local_88);
                          FUN_006ae110((byte *)local_88);
                          local_88 = (uint *)0x0;
                        }
                      }
                    }
                    local_14 = (uint *)((int)local_14 + 1);
                  } while ((int)local_14 < (int)local_1c);
                }
              }
            }
          }
          local_8 = local_8 + 1;
        } while ((int)local_8 < (int)local_3c);
      }
      puVar4 = local_7c;
      *(undefined4 *)((int)&DAT_007f582a + local_5c) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (local_7c != (uint *)0x0) {
        uVar7 = local_7c[3];
        local_8 = 0;
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)puVar4,local_8,&local_78);
            if (local_70 != (uint *)0x0) {
              FUN_006ae110((byte *)local_70);
              local_70 = FUN_006ae290((uint *)0x0,1,4,1);
              FUN_006ae140(puVar4,local_8,&local_78);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)uVar7);
        }
      }
      puVar4 = local_60;
      if (local_60 != (uint *)0x0) {
        uVar7 = local_60[3];
        local_8 = 0;
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)puVar4,local_8,(undefined4 *)&local_54);
            if ((byte *)CONCAT22(uStack_50,uStack_52) != (byte *)0x0) {
              FUN_006ae110((byte *)CONCAT22(uStack_50,uStack_52));
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)uVar7);
        }
        FUN_006ae110((byte *)puVar4);
        local_60 = (uint *)0x0;
        *(undefined4 *)((int)&DAT_007f581a + local_5c) = 0;
      }
      uVar7 = local_3c;
      puVar4 = local_48;
      if (local_48 != (uint *)0x0) {
        local_8 = 0;
        if (0 < (int)local_3c) {
          do {
            FUN_006acc70((int)puVar4,local_8,&local_c);
            if (local_c != (uint *)0x0) {
              FUN_006ae110((byte *)local_c);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)uVar7);
        }
        FUN_006ae110((byte *)puVar4);
        local_48 = (uint *)0x0;
        *(undefined4 *)((int)&DAT_007f581e + local_5c) = 0;
      }
      uVar7 = local_3c;
      puVar4 = local_64;
      if (local_64 != (uint *)0x0) {
        local_8 = 0;
        if (0 < (int)local_3c) {
          do {
            FUN_006acc70((int)puVar4,local_8,&local_c);
            if (local_c != (uint *)0x0) {
              FUN_006ae110((byte *)local_c);
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)uVar7);
        }
        FUN_006ae110((byte *)puVar4);
        local_64 = (uint *)0x0;
        *(undefined4 *)((int)&DAT_007f5822 + local_5c) = 0;
      }
      if (local_40 != (uint *)0x0) {
        local_8 = 0;
        puVar4 = local_40;
        if (0 < (int)local_3c) {
          do {
            FUN_006acc70((int)puVar4,local_8,&local_c);
            if (local_c != (uint *)0x0) {
              uVar7 = local_c[3];
              if ((uVar7 != 0) && (uVar10 = 0, 0 < (int)uVar7)) {
                do {
                  FUN_006acc70((int)local_c,uVar10,&local_9c);
                  if (local_88 != (uint *)0x0) {
                    FUN_006ae110((byte *)local_88);
                  }
                  uVar10 = uVar10 + 1;
                } while ((int)uVar10 < (int)uVar7);
              }
              FUN_006ae110((byte *)local_c);
              puVar4 = local_40;
            }
            local_8 = local_8 + 1;
          } while ((int)local_8 < (int)local_3c);
        }
        FUN_006ae110((byte *)puVar4);
        *(undefined4 *)((int)&DAT_007f5826 + local_5c) = 0;
      }
      g_currentExceptionFrame = local_e4.previous;
      return;
    }
    g_currentExceptionFrame = local_e4.previous;
    if (iVar3 != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2b90,0,0,&DAT_007a4ccc,
                                 s_STAllPlayersC__DistributeGuardBo_007a8458);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x2b91);
    }
  }
  return;
LAB_00447106:
  do {
    FUN_006acc70(CONCAT22(uStack_50,uStack_52),(uint)local_14,&local_2c);
    FUN_006acc70((int)local_7c,local_2c,&local_78);
    uVar10 = local_58;
    uVar7 = local_70[3];
    if (uVar7 == 0) {
      local_24 = (ushort)local_58;
LAB_00447196:
      uStack_22 = 1;
      FUN_006ae1c0(local_70,(undefined4 *)&local_24);
    }
    else {
      uVar9 = 0;
      if (0 < (int)uVar7) {
        do {
          FUN_006acc70((int)local_70,uVar9,(undefined4 *)&local_24);
          if (local_24 == uVar10) {
            uStack_22 = uStack_22 + 1;
            FUN_006ae140(local_70,uVar9,(undefined4 *)&local_24);
            break;
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uVar7);
      }
      if (uVar9 == uVar7) {
        local_24 = (ushort)local_58;
        goto LAB_00447196;
      }
    }
    local_14 = (uint *)((int)local_14 + 1);
  } while ((int)local_14 < (int)local_40);
LAB_004471ad:
  local_1c = (uint *)((int)local_1c - 1);
  iVar3 = local_5c;
  puVar8 = local_60;
  puVar4 = local_30;
LAB_004471bd:
  if (local_1c == (uint *)0x0) goto LAB_0044738a;
  local_28 = (int *)thunk_FUN_0042b620(param_1,CONCAT22(uStack_52,local_54),1);
  if (local_28 != (int *)0x0) {
    thunk_FUN_004162b0(local_28,&local_e,&local_10,&local_16);
    local_8 = local_8 + 1;
    if ((int)local_8 < (int)puVar4) {
      do {
        FUN_006acc70((int)puVar8,local_8,(undefined4 *)&local_54);
        if ((((local_4e != 1) &&
             (local_28 = (int *)thunk_FUN_0042b620(param_1,CONCAT22(uStack_52,local_54),1),
             local_28 != (int *)0x0)) &&
            (thunk_FUN_004162b0(local_28,&local_38,&local_36,&local_66),
            uVar7 = (int)local_38 - (int)local_e >> 0x1f,
            (int)(((int)local_38 - (int)local_e ^ uVar7) - uVar7) < 3)) &&
           (uVar7 = (int)local_36 - (int)local_10 >> 0x1f,
           (int)(((int)local_36 - (int)local_10 ^ uVar7) - uVar7) < 3)) {
          local_4e = 1;
          FUN_006ae140(puVar8,local_8,(undefined4 *)&local_54);
          FUN_006ae1c0(local_c,&local_8);
          local_14 = (uint *)0x0;
          local_40 = *(uint **)(CONCAT22(uStack_50,uStack_52) + 0xc);
          if (0 < (int)local_40) {
            do {
              FUN_006acc70(CONCAT22(uStack_50,uStack_52),(uint)local_14,&local_2c);
              FUN_006acc70((int)local_7c,local_2c,&local_78);
              uVar10 = local_58;
              uVar7 = local_70[3];
              if (uVar7 == 0) {
                local_24 = (ushort)local_58;
LAB_00447348:
                uStack_22 = 1;
                FUN_006ae1c0(local_70,(undefined4 *)&local_24);
              }
              else {
                uVar9 = 0;
                if (0 < (int)uVar7) {
                  do {
                    FUN_006acc70((int)local_70,uVar9,(undefined4 *)&local_24);
                    if (local_24 == uVar10) {
                      uStack_22 = uStack_22 + 1;
                      FUN_006ae140(local_70,uVar9,(undefined4 *)&local_24);
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar7);
                }
                if (uVar9 == uVar7) {
                  local_24 = (ushort)local_58;
                  goto LAB_00447348;
                }
              }
              local_14 = (uint *)((int)local_14 + 1);
            } while ((int)local_14 < (int)local_40);
          }
          local_1c = (uint *)((int)local_1c - 1);
          iVar3 = local_5c;
          puVar8 = local_60;
          puVar4 = local_30;
        }
        local_8 = local_8 + 1;
      } while ((int)local_8 < (int)puVar4);
    }
  }
  goto joined_r0x0044707d;
}

