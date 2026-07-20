
void FUN_006c08e0(void)

{
  LPDWORD lpNumberOfBytesRead;
  uint uVar1;
  byte bVar2;
  int iVar3;
  DWORD DVar4;
  undefined3 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  short *psVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined1 local_3c [4];
  byte local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint *local_28;
  uint *local_24;
  uint *local_20;
  uint local_1c;
  uint local_18;
  uint *local_14;
  uint *local_10;
  uint local_c;
  uint *local_8;
  
  do {
    local_34 = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    local_c = 0;
    do {
      uVar1 = local_c;
      bVar2 = 0;
      uVar6 = *(uint *)(&DAT_00854ff8 + local_c * 0xc4);
      iVar9 = local_c * 0xc4;
      puVar8 = (uint *)(&DAT_00854ff8 + iVar9);
      if ((uVar6 & 3) == 1) {
        local_34 = 0;
        if ((uVar6 & 0x20) == 0) {
          local_18 = 0;
          puVar12 = (uint *)(*(uint *)(&DAT_0085500c + iVar9) >> 1);
          local_20 = puVar12;
          iVar3 = (**(code **)(*(int *)(&DAT_00855004)[local_c * 0x31] + 0x24))
                            ((int *)(&DAT_00855004)[local_c * 0x31],local_38);
          if (((iVar3 != 0) || ((local_38[0] & 2) != 0)) ||
             (iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x10))
                                ((int *)(&DAT_00855004)[uVar1 * 0x31],&local_14,local_3c),
             iVar3 != 0)) goto cf_common_join_006C0E00;
          puVar11 = *(uint **)(&DAT_00855010 + iVar9);
          local_28 = *(uint **)(&DAT_0085500c + iVar9);
          if (puVar11 <= local_28) {
            uVar6 = *puVar8;
            if ((uVar6 & 0x10) == 0) {
              puVar11 = *(uint **)(&DAT_00855010 + iVar9);
              if (local_14 < puVar12) {
                if (puVar11 < puVar12) {
LAB_006c0af5:
                  if (local_14 < puVar11) {
                    *puVar8 = uVar6 | 0x10;
                  }
                  else {
                    if ((*(byte *)(&DAT_00854ffc + uVar1 * 0x31) & 1) == 0) {
                      (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x48))
                                ((int *)(&DAT_00855004)[uVar1 * 0x31]);
                      goto cf_common_join_006C0E05;
                    }
                    local_18 = uVar6 & 8;
                    *(undefined4 *)(&DAT_00855010 + iVar9) = 0x7fffffff;
                  }
                }
              }
              else if (puVar12 <= puVar11) goto LAB_006c0af5;
            }
            else if ((puVar11 <= local_14) || ((local_14 < puVar12 && (puVar12 <= puVar11)))) {
              if ((*(byte *)(&DAT_00854ffc + uVar1 * 0x31) & 1) == 0) {
                (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x48))
                          ((int *)(&DAT_00855004)[uVar1 * 0x31]);
                goto cf_common_join_006C0E05;
              }
              *(undefined4 *)(&DAT_00855010 + iVar9) = 0x7fffffff;
              local_18 = uVar6 & 8;
              *puVar8 = uVar6 & 0xffffffef;
            }
          }
          iVar3 = *(int *)(&DAT_008550b8 + iVar9);
          if (iVar3 < 1) {
            if ((local_38[0] & 1) == 0) goto cf_common_join_006C0E05;
            if (((&DAT_00854ffc)[uVar1 * 0x31] & 0x8000) == 0) goto cf_continue_loop_006C0F40;
          }
          if (((&DAT_00854ffc)[uVar1 * 0x31] & 0x4000) == 0) {
            if (((&DAT_00854ffc)[uVar1 * 0x31] & 0x8000) == 0) {
              if (local_20 <= local_14) goto LAB_006c0b45;
              if ((*puVar8 & 4) == 0) goto cf_common_join_006C0F07;
              local_24 = local_20;
              puVar12 = (uint *)((int)local_28 - (int)local_20);
            }
            else {
              if (local_14 < local_20) {
                iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x2c))
                                  ((int *)(&DAT_00855004)[uVar1 * 0x31],local_20,
                                   (int)local_28 - (int)local_20,&local_8,&local_1c,&local_30,
                                   &local_2c,0);
                if (iVar3 == 0) {
                  bVar2 = (*(short *)(&DAT_00855090 + iVar9) != 8) - 1;
                  puVar12 = local_8;
                  for (uVar6 = local_1c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *puVar12 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2)) & 0x80808080;
                    puVar12 = puVar12 + 1;
                  }
                  for (uVar6 = local_1c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(byte *)puVar12 = bVar2 & 0x80;
                    puVar12 = (uint *)((int)puVar12 + 1);
                  }
                  iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x4c))
                                    ((int *)(&DAT_00855004)[uVar1 * 0x31],local_8,local_1c,local_30,
                                     local_2c);
                  if (iVar3 == 0) {
                    (&DAT_00854ffc)[uVar1 * 0x31] = (&DAT_00854ffc)[uVar1 * 0x31] & 0xffff7fff;
                    goto cf_common_join_006C0F07;
                  }
                }
                goto cf_common_join_006C0E00;
              }
LAB_006c0b45:
              if ((*puVar8 & 4) != 0) goto cf_common_join_006C0F07;
              local_24 = (uint *)0x0;
              puVar12 = local_20;
            }
            local_10 = puVar12;
            if (puVar12 != (uint *)0x0) {
              puVar11 = puVar12;
              if (iVar3 < (int)((uint)puVar12 / (uint)*(ushort *)(&DAT_0085508e + iVar9))) {
                puVar11 = (uint *)((uint)*(ushort *)(&DAT_0085508e + iVar9) * iVar3);
              }
              local_28 = puVar11;
              iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x2c))
                                ((int *)(&DAT_00855004)[uVar1 * 0x31],local_24,puVar12,&local_8,
                                 &local_1c,&local_30,&local_2c,0);
              if (iVar3 == 0) {
                if ((puVar11 < puVar12) && ((*(byte *)(&DAT_00854ffc + uVar1 * 0x31) & 1) == 0)) {
                  bVar2 = (*(short *)(&DAT_00855090 + iVar9) != 8) - 1;
                  puVar13 = (uint *)((int)puVar11 + (int)local_8);
                  for (uVar6 = local_1c - (int)puVar11 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *puVar13 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2)) & 0x80808080;
                    puVar13 = puVar13 + 1;
                  }
                  for (uVar6 = local_1c - (int)puVar11 & 3; puVar11 = local_28, puVar12 = local_10,
                      uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(byte *)puVar13 = bVar2 & 0x80;
                    puVar13 = (uint *)((int)puVar13 + 1);
                  }
                }
                FUN_006bfe70(local_8,(int)puVar8,puVar11);
                if (*(int *)(&DAT_008550b8 + iVar9) < 1) {
                  uVar6 = (&DAT_00854ffc)[uVar1 * 0x31];
                  *(int *)(&DAT_00855010 + iVar9) = (int)puVar11 + (int)local_24;
                  if ((uVar6 & 1) == 0) {
                    if ((puVar11 < puVar12) && (piVar14 = DAT_00854ff4, DAT_00854ff4 != (int *)0x0))
                    {
LAB_006c0c93:
                      if (((int)local_c < piVar14[0xd]) || (piVar14[0xe] < (int)local_c))
                      goto LAB_006c0c9d;
                      if ((*(byte *)(piVar14 + 5) & 0x40) != 0) {
                        piVar14[0xd] = -1;
                        piVar14[0xe] = -1;
                        (&DAT_00855024)[uVar1 * 0x31] = piVar14[4];
                        (&DAT_00855014)[uVar1 * 0x31] = piVar14[1];
                        (&DAT_0085501c)[uVar1 * 0x31] = piVar14[3];
                        (&DAT_00854ffc)[uVar1 * 0x31] = piVar14[5];
                        *(undefined4 *)(&DAT_00855010 + iVar9) = 0x7fffffff;
                        DVar4 = timeGetTime();
                        (&DAT_00855000)[uVar1 * 0x31] = DVar4;
                        uVar6 = (&DAT_00854ffc)[uVar1 * 0x31];
                        (&DAT_00855018)[uVar1 * 0x31] = piVar14[2];
                        lpNumberOfBytesRead = (LPDWORD)piVar14[2];
                        *(undefined4 *)(&DAT_008550b4 + iVar9) = 0;
                        *(LPDWORD *)(&DAT_00855020 + iVar9) = lpNumberOfBytesRead;
                        if ((uVar6 & 0x2000) == 0) {
                          uVar7 = (-(uint)(*(short *)(&DAT_0085501c)[uVar1 * 0x31] != 1) & 0x24) +
                                  0x1a;
                          psVar10 = (short *)(&DAT_0085501c)[uVar1 * 0x31];
                          puVar15 = (undefined4 *)(&DAT_00855044 + iVar9);
                          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                            *puVar15 = *(undefined4 *)psVar10;
                            psVar10 = psVar10 + 2;
                            puVar15 = puVar15 + 1;
                          }
                          for (uVar7 = uVar7 & 3; puVar11 = local_28, uVar7 != 0; uVar7 = uVar7 - 1)
                          {
                            *(char *)puVar15 = (char)*psVar10;
                            psVar10 = (short *)((int)psVar10 + 1);
                            puVar15 = (undefined4 *)((int)puVar15 + 1);
                          }
                        }
                        else {
                          DVar4 = FUN_006d4930(*(int *)((&DAT_00855014)[uVar1 * 0x31] + 4),
                                               lpNumberOfBytesRead,
                                               (undefined4 *)(&DAT_00855044 + iVar9),0x3e);
                          if (DVar4 != 0) goto cf_common_join_006C0E00;
                          *(uint *)(&DAT_00855020 + iVar9) =
                               *(int *)(&DAT_00855020 + iVar9) +
                               (-(uint)(*(short *)(&DAT_00855044 + iVar9) != 1) & 0x24) + 0x1a;
                        }
                        if (*(short *)(&DAT_00855044 + iVar9) == 2) {
                          uVar6 = *(uint *)(&DAT_0085505e + iVar9);
                        }
                        else {
                          uVar6 = *(uint *)(&DAT_00855056 + iVar9) /
                                  (uint)*(ushort *)(&DAT_0085508e + iVar9);
                        }
                        *(uint *)(&DAT_008550b8 + iVar9) = uVar6;
                        puVar12 = (uint *)((int)local_10 - (int)puVar11);
                        goto LAB_006c0d87;
                      }
                    }
                  }
                  else {
                    iVar3 = (&DAT_00855018)[uVar1 * 0x31];
                    *(undefined4 *)(&DAT_008550b4 + iVar9) = 0;
                    *(int *)(&DAT_00855020 + iVar9) = iVar3;
                    if ((uVar6 & 0x2000) != 0) {
                      *(uint *)(&DAT_00855020 + iVar9) =
                           (-(uint)(*(short *)(&DAT_00855044 + iVar9) != 1) & 0x24) + 0x1a + iVar3;
                    }
                    if (*(short *)(&DAT_00855044 + iVar9) == 2) {
                      uVar6 = *(uint *)(&DAT_0085505e + iVar9);
                    }
                    else {
                      uVar6 = *(uint *)(&DAT_00855056 + iVar9) /
                              (uint)*(ushort *)(&DAT_0085508e + iVar9);
                    }
                    *(uint *)(&DAT_008550b8 + iVar9) = uVar6;
                    if (puVar11 < puVar12) {
                      puVar12 = (uint *)((int)puVar12 - (int)puVar11);
LAB_006c0d87:
                      FUN_006bfe70((undefined4 *)((int)puVar11 + (int)local_8),(int)puVar8,puVar12);
                    }
                  }
                }
LAB_006c0d93:
                iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x4c))
                                  ((int *)(&DAT_00855004)[uVar1 * 0x31],local_8,local_1c,local_30,
                                   local_2c);
                if (iVar3 == 0) {
                  *puVar8 = *puVar8 ^ 4;
                  if ((*(int *)(&DAT_008550b8 + iVar9) < 1) &&
                     (((&DAT_00854ffc)[uVar1 * 0x31] & 1) == 0)) {
                    if (local_20 < local_14) {
                      (&DAT_00854ffc)[uVar1 * 0x31] = (&DAT_00854ffc)[uVar1 * 0x31] | 0x8000;
                    }
                    if ((local_20 <= local_24) &&
                       (iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x30))
                                          ((int *)(&DAT_00855004)[uVar1 * 0x31],0,0,0), iVar3 != 0))
                    goto cf_common_join_006C0E00;
                  }
                  goto cf_common_join_006C0F07;
                }
              }
cf_common_join_006C0E00:
              bVar2 = 1;
              goto cf_common_join_006C0E05;
            }
          }
cf_common_join_006C0F07:
          if (local_18 != 0) {
            PostMessageA(g_hWnd_00854FF0,0x3b9,1,local_c & 0xffff | 0x44530000);
          }
        }
        else {
          *puVar8 = uVar6 & 0xffffffdf;
          iVar3 = FUN_006bfbf0(puVar8);
          if (iVar3 == 0) goto cf_continue_loop_006C0F40;
          piVar14 = (int *)(&DAT_00855004)[uVar1 * 0x31];
          bVar2 = 1;
          if (piVar14 != (int *)0x0) {
            (**(code **)(*piVar14 + 0x48))(piVar14);
            piVar14 = (int *)(&DAT_00855008)[uVar1 * 0x31];
            if (piVar14 != (int *)0x0) {
              (**(code **)(*piVar14 + 8))(piVar14);
              (&DAT_00855008)[uVar1 * 0x31] = 0;
            }
            (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 8))
                      ((int *)(&DAT_00855004)[uVar1 * 0x31]);
            (&DAT_00855004)[uVar1 * 0x31] = 0;
          }
cf_common_join_006C0E05:
          local_18 = *puVar8 & 8;
          piVar14 = (int *)(&DAT_00855008)[uVar1 * 0x31];
          if (piVar14 != (int *)0x0) {
            (**(code **)(*piVar14 + 8))(piVar14);
            (&DAT_00855008)[uVar1 * 0x31] = 0;
          }
          piVar14 = (int *)(&DAT_00855004)[uVar1 * 0x31];
          if (piVar14 != (int *)0x0) {
            (**(code **)(*piVar14 + 8))(piVar14);
          }
          uVar6 = local_c;
          local_28 = *(uint **)(&DAT_00855028 + iVar9);
          iVar9 = *(int *)(&DAT_0085502c + iVar9);
          for (iVar3 = 0x31; piVar14 = DAT_00854ff4, iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          for (; piVar14 != (int *)0x0; piVar14 = (int *)*piVar14) {
            if ((piVar14[0xd] <= (int)local_c) && ((int)local_c <= piVar14[0xe])) {
              uVar1 = piVar14[5];
              puVar8 = local_28;
              if ((uVar1 & 0x10) == 0) {
                puVar8 = (uint *)piVar14[6];
              }
              if ((uVar1 & 0x20) == 0) {
                iVar9 = piVar14[7];
              }
              uVar5 = (undefined3)(uVar1 >> 8);
              if ((uVar1 & 0x2000) == 0) {
                FUN_006c0800((short *)piVar14[3],CONCAT31(uVar5,(char)piVar14[4]),uVar1,puVar8,iVar9
                             ,piVar14[8],piVar14[9],piVar14[10],piVar14[0xb],piVar14[0xc],local_c);
              }
              else {
                FUN_006c2460(piVar14[1],piVar14[2],CONCAT31(uVar5,(char)piVar14[4]),uVar1,puVar8,
                             iVar9,local_c);
              }
              if (local_18 != 0) {
                FUN_006c18d0(uVar6);
              }
              piVar14[0xd] = -1;
              piVar14[0xe] = -1;
              goto cf_continue_loop_006C0F40;
            }
          }
          if (local_18 != 0) {
            PostMessageA(g_hWnd_00854FF0,0x3b9,(-(uint)bVar2 & 7) + 1,local_c & 0xffff | 0x44530000)
            ;
          }
        }
      }
      else if ((uVar6 & 3) == 3) {
        local_34 = 0;
      }
cf_continue_loop_006C0F40:
      local_c = local_c + 1;
    } while ((int)local_c < 0x20);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    if (local_34 == 0) {
      Sleep(0x32);
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
      DAT_008568c4 = (uint)(DAT_008568c4 == 0);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00856880);
      SuspendThread(g_hThread_008568C0);
    }
  } while( true );
LAB_006c0c9d:
  piVar14 = (int *)*piVar14;
  if (piVar14 == (int *)0x0) goto LAB_006c0d93;
  goto LAB_006c0c93;
}

