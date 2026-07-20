
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
  int iVar8;
  short *psVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  undefined4 *puVar14;
  AnonShape_006BFE70_9EDC24A5 *pAVar15;
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
      iVar8 = local_c * 0xc4;
      pAVar15 = (AnonShape_006BFE70_9EDC24A5 *)(&DAT_00854ff8 + iVar8);
      if ((uVar6 & 3) == 1) {
        local_34 = 0;
        if ((uVar6 & 0x20) == 0) {
          local_18 = 0;
          puVar11 = (uint *)(*(uint *)(&DAT_0085500c + iVar8) >> 1);
          local_20 = puVar11;
          iVar3 = (**(code **)(*(int *)(&DAT_00855004)[local_c * 0x31] + 0x24))
                            ((int *)(&DAT_00855004)[local_c * 0x31],local_38);
          if (((iVar3 != 0) || ((local_38[0] & 2) != 0)) ||
             (iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x10))
                                ((int *)(&DAT_00855004)[uVar1 * 0x31],&local_14,local_3c),
             iVar3 != 0)) goto cf_common_join_006C0E00;
          puVar10 = *(uint **)(&DAT_00855010 + iVar8);
          local_28 = *(uint **)(&DAT_0085500c + iVar8);
          if (puVar10 <= local_28) {
            uVar6 = *(uint *)pAVar15;
            if ((uVar6 & 0x10) == 0) {
              puVar10 = *(uint **)(&DAT_00855010 + iVar8);
              if (local_14 < puVar11) {
                if (puVar10 < puVar11) {
LAB_006c0af5:
                  if (local_14 < puVar10) {
                    *(uint *)pAVar15 = uVar6 | 0x10;
                  }
                  else {
                    if ((*(byte *)(&DAT_00854ffc + uVar1 * 0x31) & 1) == 0) {
                      (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x48))
                                ((int *)(&DAT_00855004)[uVar1 * 0x31]);
                      goto cf_common_join_006C0E05;
                    }
                    local_18 = uVar6 & 8;
                    *(undefined4 *)(&DAT_00855010 + iVar8) = 0x7fffffff;
                  }
                }
              }
              else if (puVar11 <= puVar10) goto LAB_006c0af5;
            }
            else if ((puVar10 <= local_14) || ((local_14 < puVar11 && (puVar11 <= puVar10)))) {
              if ((*(byte *)(&DAT_00854ffc + uVar1 * 0x31) & 1) == 0) {
                (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x48))
                          ((int *)(&DAT_00855004)[uVar1 * 0x31]);
                goto cf_common_join_006C0E05;
              }
              *(undefined4 *)(&DAT_00855010 + iVar8) = 0x7fffffff;
              local_18 = uVar6 & 8;
              *(uint *)pAVar15 = uVar6 & 0xffffffef;
            }
          }
          iVar3 = *(int *)(&DAT_008550b8 + iVar8);
          if (iVar3 < 1) {
            if ((local_38[0] & 1) == 0) goto cf_common_join_006C0E05;
            if (((&DAT_00854ffc)[uVar1 * 0x31] & 0x8000) == 0) goto cf_continue_loop_006C0F40;
          }
          if (((&DAT_00854ffc)[uVar1 * 0x31] & 0x4000) == 0) {
            if (((&DAT_00854ffc)[uVar1 * 0x31] & 0x8000) == 0) {
              if (local_20 <= local_14) goto LAB_006c0b45;
              if ((*(byte *)pAVar15 & 4) == 0) goto cf_common_join_006C0F07;
              local_24 = local_20;
              puVar11 = (uint *)((int)local_28 - (int)local_20);
            }
            else {
              if (local_14 < local_20) {
                iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x2c))
                                  ((int *)(&DAT_00855004)[uVar1 * 0x31],local_20,
                                   (int)local_28 - (int)local_20,&local_8,&local_1c,&local_30,
                                   &local_2c,0);
                if (iVar3 == 0) {
                  bVar2 = (*(short *)(&DAT_00855090 + iVar8) != 8) - 1;
                  puVar11 = local_8;
                  for (uVar6 = local_1c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *puVar11 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2)) & 0x80808080;
                    puVar11 = puVar11 + 1;
                  }
                  for (uVar6 = local_1c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(byte *)puVar11 = bVar2 & 0x80;
                    puVar11 = (uint *)((int)puVar11 + 1);
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
              if ((*(byte *)pAVar15 & 4) != 0) goto cf_common_join_006C0F07;
              local_24 = (uint *)0x0;
              puVar11 = local_20;
            }
            local_10 = puVar11;
            if (puVar11 != (uint *)0x0) {
              puVar10 = puVar11;
              if (iVar3 < (int)((uint)puVar11 / (uint)*(ushort *)(&DAT_0085508e + iVar8))) {
                puVar10 = (uint *)((uint)*(ushort *)(&DAT_0085508e + iVar8) * iVar3);
              }
              local_28 = puVar10;
              iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x2c))
                                ((int *)(&DAT_00855004)[uVar1 * 0x31],local_24,puVar11,&local_8,
                                 &local_1c,&local_30,&local_2c,0);
              if (iVar3 == 0) {
                if ((puVar10 < puVar11) && ((*(byte *)(&DAT_00854ffc + uVar1 * 0x31) & 1) == 0)) {
                  bVar2 = (*(short *)(&DAT_00855090 + iVar8) != 8) - 1;
                  puVar12 = (uint *)((int)puVar10 + (int)local_8);
                  for (uVar6 = local_1c - (int)puVar10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *puVar12 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2)) & 0x80808080;
                    puVar12 = puVar12 + 1;
                  }
                  for (uVar6 = local_1c - (int)puVar10 & 3; puVar10 = local_28, puVar11 = local_10,
                      uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(byte *)puVar12 = bVar2 & 0x80;
                    puVar12 = (uint *)((int)puVar12 + 1);
                  }
                }
                FUN_006bfe70(local_8,pAVar15,puVar10);
                if (*(int *)(&DAT_008550b8 + iVar8) < 1) {
                  uVar6 = (&DAT_00854ffc)[uVar1 * 0x31];
                  *(int *)(&DAT_00855010 + iVar8) = (int)puVar10 + (int)local_24;
                  if ((uVar6 & 1) == 0) {
                    if ((puVar10 < puVar11) && (piVar13 = DAT_00854ff4, DAT_00854ff4 != (int *)0x0))
                    {
LAB_006c0c93:
                      if (((int)local_c < piVar13[0xd]) || (piVar13[0xe] < (int)local_c))
                      goto LAB_006c0c9d;
                      if ((*(byte *)(piVar13 + 5) & 0x40) != 0) {
                        piVar13[0xd] = -1;
                        piVar13[0xe] = -1;
                        (&DAT_00855024)[uVar1 * 0x31] = piVar13[4];
                        (&DAT_00855014)[uVar1 * 0x31] = piVar13[1];
                        (&DAT_0085501c)[uVar1 * 0x31] = piVar13[3];
                        (&DAT_00854ffc)[uVar1 * 0x31] = piVar13[5];
                        *(undefined4 *)(&DAT_00855010 + iVar8) = 0x7fffffff;
                        DVar4 = timeGetTime();
                        (&DAT_00855000)[uVar1 * 0x31] = DVar4;
                        uVar6 = (&DAT_00854ffc)[uVar1 * 0x31];
                        (&DAT_00855018)[uVar1 * 0x31] = piVar13[2];
                        lpNumberOfBytesRead = (LPDWORD)piVar13[2];
                        *(undefined4 *)(&DAT_008550b4 + iVar8) = 0;
                        *(LPDWORD *)(&DAT_00855020 + iVar8) = lpNumberOfBytesRead;
                        if ((uVar6 & 0x2000) == 0) {
                          uVar7 = (-(uint)(*(short *)(&DAT_0085501c)[uVar1 * 0x31] != 1) & 0x24) +
                                  0x1a;
                          psVar9 = (short *)(&DAT_0085501c)[uVar1 * 0x31];
                          puVar14 = (undefined4 *)(&DAT_00855044 + iVar8);
                          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                            *puVar14 = *(undefined4 *)psVar9;
                            psVar9 = psVar9 + 2;
                            puVar14 = puVar14 + 1;
                          }
                          for (uVar7 = uVar7 & 3; puVar10 = local_28, uVar7 != 0; uVar7 = uVar7 - 1)
                          {
                            *(char *)puVar14 = (char)*psVar9;
                            psVar9 = (short *)((int)psVar9 + 1);
                            puVar14 = (undefined4 *)((int)puVar14 + 1);
                          }
                        }
                        else {
                          DVar4 = FUN_006d4930(*(AnonShape_006D4930_676532DD **)
                                                ((&DAT_00855014)[uVar1 * 0x31] + 4),
                                               lpNumberOfBytesRead,
                                               (undefined4 *)(&DAT_00855044 + iVar8),0x3e);
                          if (DVar4 != 0) goto cf_common_join_006C0E00;
                          *(uint *)(&DAT_00855020 + iVar8) =
                               *(int *)(&DAT_00855020 + iVar8) +
                               (-(uint)(*(short *)(&DAT_00855044 + iVar8) != 1) & 0x24) + 0x1a;
                        }
                        if (*(short *)(&DAT_00855044 + iVar8) == 2) {
                          uVar6 = *(uint *)(&DAT_0085505e + iVar8);
                        }
                        else {
                          uVar6 = *(uint *)(&DAT_00855056 + iVar8) /
                                  (uint)*(ushort *)(&DAT_0085508e + iVar8);
                        }
                        *(uint *)(&DAT_008550b8 + iVar8) = uVar6;
                        puVar11 = (uint *)((int)local_10 - (int)puVar10);
                        goto LAB_006c0d87;
                      }
                    }
                  }
                  else {
                    iVar3 = (&DAT_00855018)[uVar1 * 0x31];
                    *(undefined4 *)(&DAT_008550b4 + iVar8) = 0;
                    *(int *)(&DAT_00855020 + iVar8) = iVar3;
                    if ((uVar6 & 0x2000) != 0) {
                      *(uint *)(&DAT_00855020 + iVar8) =
                           (-(uint)(*(short *)(&DAT_00855044 + iVar8) != 1) & 0x24) + 0x1a + iVar3;
                    }
                    if (*(short *)(&DAT_00855044 + iVar8) == 2) {
                      uVar6 = *(uint *)(&DAT_0085505e + iVar8);
                    }
                    else {
                      uVar6 = *(uint *)(&DAT_00855056 + iVar8) /
                              (uint)*(ushort *)(&DAT_0085508e + iVar8);
                    }
                    *(uint *)(&DAT_008550b8 + iVar8) = uVar6;
                    if (puVar10 < puVar11) {
                      puVar11 = (uint *)((int)puVar11 - (int)puVar10);
LAB_006c0d87:
                      FUN_006bfe70((undefined4 *)((int)puVar10 + (int)local_8),pAVar15,puVar11);
                    }
                  }
                }
LAB_006c0d93:
                iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x4c))
                                  ((int *)(&DAT_00855004)[uVar1 * 0x31],local_8,local_1c,local_30,
                                   local_2c);
                if (iVar3 == 0) {
                  *(uint *)pAVar15 = *(uint *)pAVar15 ^ 4;
                  if ((*(int *)(&DAT_008550b8 + iVar8) < 1) &&
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
          *(uint *)pAVar15 = uVar6 & 0xffffffdf;
          iVar3 = FUN_006bfbf0((AnonShape_006BFBF0_13F73F95 *)pAVar15);
          if (iVar3 == 0) goto cf_continue_loop_006C0F40;
          piVar13 = (int *)(&DAT_00855004)[uVar1 * 0x31];
          bVar2 = 1;
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 0x48))(piVar13);
            piVar13 = (int *)(&DAT_00855008)[uVar1 * 0x31];
            if (piVar13 != (int *)0x0) {
              (**(code **)(*piVar13 + 8))(piVar13);
              (&DAT_00855008)[uVar1 * 0x31] = 0;
            }
            (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 8))
                      ((int *)(&DAT_00855004)[uVar1 * 0x31]);
            (&DAT_00855004)[uVar1 * 0x31] = 0;
          }
cf_common_join_006C0E05:
          local_18 = *(uint *)pAVar15 & 8;
          piVar13 = (int *)(&DAT_00855008)[uVar1 * 0x31];
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))(piVar13);
            (&DAT_00855008)[uVar1 * 0x31] = 0;
          }
          piVar13 = (int *)(&DAT_00855004)[uVar1 * 0x31];
          if (piVar13 != (int *)0x0) {
            (**(code **)(*piVar13 + 8))(piVar13);
          }
          uVar6 = local_c;
          local_28 = *(uint **)(&DAT_00855028 + iVar8);
          iVar8 = *(int *)(&DAT_0085502c + iVar8);
          for (iVar3 = 0x31; piVar13 = DAT_00854ff4, iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pAVar15 = 0;
            pAVar15 = (AnonShape_006BFE70_9EDC24A5 *)&pAVar15->field_0004;
          }
          for (; piVar13 != (int *)0x0; piVar13 = (int *)*piVar13) {
            if ((piVar13[0xd] <= (int)local_c) && ((int)local_c <= piVar13[0xe])) {
              uVar1 = piVar13[5];
              puVar11 = local_28;
              if ((uVar1 & 0x10) == 0) {
                puVar11 = (uint *)piVar13[6];
              }
              if ((uVar1 & 0x20) == 0) {
                iVar8 = piVar13[7];
              }
              uVar5 = (undefined3)(uVar1 >> 8);
              if ((uVar1 & 0x2000) == 0) {
                FUN_006c0800((short *)piVar13[3],CONCAT31(uVar5,(char)piVar13[4]),uVar1,puVar11,
                             iVar8,piVar13[8],piVar13[9],piVar13[10],piVar13[0xb],piVar13[0xc],
                             local_c);
              }
              else {
                FUN_006c2460(piVar13[1],piVar13[2],CONCAT31(uVar5,(char)piVar13[4]),uVar1,puVar11,
                             iVar8,local_c);
              }
              if (local_18 != 0) {
                FUN_006c18d0(uVar6);
              }
              piVar13[0xd] = -1;
              piVar13[0xe] = -1;
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
  piVar13 = (int *)*piVar13;
  if (piVar13 == (int *)0x0) goto LAB_006c0d93;
  goto LAB_006c0c93;
}

