
void FUN_006c08e0(void)

{
  LPDWORD lpNumberOfBytesRead;
  uint uVar1;
  byte bVar2;
  int iVar3;
  DWORD DVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  AnonShape_006BFBF0_13F73F95 *pAVar9;
  AnonShape_006BFBF0_13F73F95 *pAVar10;
  uint *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  AnonShape_006BFE70_9EDC24A5 *pAVar14;
  undefined1 local_3c [4];
  byte local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  AnonShape_006BFBF0_13F73F95 *local_28;
  AnonShape_006BFBF0_13F73F95 *local_24;
  AnonShape_006BFBF0_13F73F95 *local_20;
  uint local_1c;
  uint local_18;
  AnonShape_006BFBF0_13F73F95 *local_14;
  AnonShape_006BFBF0_13F73F95 *local_10;
  uint local_c;
  uint *local_8;

  do {
    local_34 = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    local_c = 0;
    do {
      uVar1 = local_c;
      bVar2 = 0;
      uVar5 = *(uint *)(&DAT_00854ff8 + local_c * 0xc4);
      iVar7 = local_c * 0xc4;
      pAVar14 = (AnonShape_006BFE70_9EDC24A5 *)(&DAT_00854ff8 + iVar7);
      if ((uVar5 & 3) == 1) {
        local_34 = 0;
        if ((uVar5 & 0x20) == 0) {
          local_18 = 0;
          pAVar10 = (AnonShape_006BFBF0_13F73F95 *)(*(uint *)(&DAT_0085500c + iVar7) >> 1);
          local_20 = pAVar10;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar3 = (**(code **)(*(int *)(&DAT_00855004)[local_c * 0x31] + 0x24))
                            ((int *)(&DAT_00855004)[local_c * 0x31],local_38);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if (((iVar3 != 0) || ((local_38[0] & 2) != 0)) ||
             (iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x10))
                                ((int *)(&DAT_00855004)[uVar1 * 0x31],&local_14,local_3c),
             iVar3 != 0)) goto cf_common_join_006C0E00;
          pAVar9 = *(AnonShape_006BFBF0_13F73F95 **)(&DAT_00855010 + iVar7);
          local_28 = *(AnonShape_006BFBF0_13F73F95 **)(&DAT_0085500c + iVar7);
          if (pAVar9 <= local_28) {
            uVar5 = *(uint *)pAVar14;
            if ((uVar5 & 0x10) == 0) {
              pAVar9 = *(AnonShape_006BFBF0_13F73F95 **)(&DAT_00855010 + iVar7);
              if (local_14 < pAVar10) {
                if (pAVar9 < pAVar10) {
LAB_006c0af5:
                  if (local_14 < pAVar9) {
                    *(uint *)pAVar14 = uVar5 | 0x10;
                  }
                  else {
                    if ((*(byte *)(&DAT_00854ffc + uVar1 * 0x31) & 1) == 0) {
                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                      (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x48))
                                ((int *)(&DAT_00855004)[uVar1 * 0x31]);
                      goto cf_common_join_006C0E05;
                    }
                    local_18 = uVar5 & 8;
                    *(undefined4 *)(&DAT_00855010 + iVar7) = 0x7fffffff;
                  }
                }
              }
              else if (pAVar10 <= pAVar9) goto LAB_006c0af5;
            }
            else if ((pAVar9 <= local_14) || ((local_14 < pAVar10 && (pAVar10 <= pAVar9)))) {
              if ((*(byte *)(&DAT_00854ffc + uVar1 * 0x31) & 1) == 0) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x48))
                          ((int *)(&DAT_00855004)[uVar1 * 0x31]);
                goto cf_common_join_006C0E05;
              }
              *(undefined4 *)(&DAT_00855010 + iVar7) = 0x7fffffff;
              local_18 = uVar5 & 8;
              *(uint *)pAVar14 = uVar5 & 0xffffffef;
            }
          }
          iVar3 = *(int *)(&DAT_008550b8 + iVar7);
          if (iVar3 < 1) {
            if ((local_38[0] & 1) == 0) goto cf_common_join_006C0E05;
            if (((&DAT_00854ffc)[uVar1 * 0x31] & 0x8000) == 0) goto cf_continue_loop_006C0F40;
          }
          if (((&DAT_00854ffc)[uVar1 * 0x31] & 0x4000) == 0) {
            if (((&DAT_00854ffc)[uVar1 * 0x31] & 0x8000) == 0) {
              if (local_20 <= local_14) goto LAB_006c0b45;
              if ((*(byte *)pAVar14 & 4) == 0) goto cf_common_join_006C0F07;
              local_24 = local_20;
              pAVar10 = (AnonShape_006BFBF0_13F73F95 *)((int)local_28 - (int)local_20);
            }
            else {
              if (local_14 < local_20) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x2c))
                                  ((int *)(&DAT_00855004)[uVar1 * 0x31],local_20,
                                   (int)local_28 - (int)local_20,&local_8,&local_1c,&local_30,
                                   &local_2c,0);
                if (iVar3 == 0) {
                  bVar2 = (*(short *)(&DAT_00855090 + iVar7) != 8) - 1;
                  puVar11 = local_8;
                  for (uVar5 = local_1c >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar11 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2)) & 0x80808080;
                    puVar11 = puVar11 + 1;
                  }
                  for (uVar5 = local_1c & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *(byte *)puVar11 = bVar2 & 0x80;
                    puVar11 = (uint *)((int)puVar11 + 1);
                  }
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
              if ((*(byte *)pAVar14 & 4) != 0) goto cf_common_join_006C0F07;
              local_24 = (AnonShape_006BFBF0_13F73F95 *)0x0;
              pAVar10 = local_20;
            }
            local_10 = pAVar10;
            if (pAVar10 != (AnonShape_006BFBF0_13F73F95 *)0x0) {
              pAVar9 = pAVar10;
              if (iVar3 < (int)((uint)pAVar10 / (uint)*(ushort *)(&DAT_0085508e + iVar7))) {
                pAVar9 = (AnonShape_006BFBF0_13F73F95 *)
                         ((uint)*(ushort *)(&DAT_0085508e + iVar7) * iVar3);
              }
              local_28 = pAVar9;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x2c))
                                ((int *)(&DAT_00855004)[uVar1 * 0x31],local_24,pAVar10,&local_8,
                                 &local_1c,&local_30,&local_2c,0);
              if (iVar3 == 0) {
                if ((pAVar9 < pAVar10) && ((*(byte *)(&DAT_00854ffc + uVar1 * 0x31) & 1) == 0)) {
                  bVar2 = (*(short *)(&DAT_00855090 + iVar7) != 8) - 1;
                  puVar11 = (uint *)(&pAVar9->field_0x0 + (int)local_8);
                  for (uVar5 = local_1c - (int)pAVar9 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar11 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2)) & 0x80808080;
                    puVar11 = puVar11 + 1;
                  }
                  for (uVar5 = local_1c - (int)pAVar9 & 3; pAVar9 = local_28, pAVar10 = local_10,
                      uVar5 != 0; uVar5 = uVar5 - 1) {
                    *(byte *)puVar11 = bVar2 & 0x80;
                    puVar11 = (uint *)((int)puVar11 + 1);
                  }
                }
                FUN_006bfe70(local_8,pAVar14,pAVar9);
                if (*(int *)(&DAT_008550b8 + iVar7) < 1) {
                  uVar5 = (&DAT_00854ffc)[uVar1 * 0x31];
                  *(undefined1 **)(&DAT_00855010 + iVar7) =
                       &local_24->field_0x0 + (int)&pAVar9->field_0x0;
                  if ((uVar5 & 1) == 0) {
                    if ((pAVar9 < pAVar10) && (piVar12 = DAT_00854ff4, DAT_00854ff4 != (int *)0x0))
                    {
LAB_006c0c93:
                      if (((int)local_c < piVar12[0xd]) || (piVar12[0xe] < (int)local_c))
                      goto LAB_006c0c9d;
                      if ((*(byte *)(piVar12 + 5) & 0x40) != 0) {
                        piVar12[0xd] = -1;
                        piVar12[0xe] = -1;
                        (&DAT_00855024)[uVar1 * 0x31] = piVar12[4];
                        (&DAT_00855014)[uVar1 * 0x31] = piVar12[1];
                        (&DAT_0085501c)[uVar1 * 0x31] = piVar12[3];
                        (&DAT_00854ffc)[uVar1 * 0x31] = piVar12[5];
                        *(undefined4 *)(&DAT_00855010 + iVar7) = 0x7fffffff;
                        DVar4 = timeGetTime();
                        (&DAT_00855000)[uVar1 * 0x31] = DVar4;
                        uVar5 = (&DAT_00854ffc)[uVar1 * 0x31];
                        (&DAT_00855018)[uVar1 * 0x31] = piVar12[2];
                        lpNumberOfBytesRead = (LPDWORD)piVar12[2];
                        *(undefined4 *)(&DAT_008550b4 + iVar7) = 0;
                        *(LPDWORD *)(&DAT_00855020 + iVar7) = lpNumberOfBytesRead;
                        if ((uVar5 & 0x2000) == 0) {
                          uVar6 = (-(uint)(*(short *)(&DAT_0085501c)[uVar1 * 0x31] != 1) & 0x24) +
                                  0x1a;
                          psVar8 = (short *)(&DAT_0085501c)[uVar1 * 0x31];
                          puVar13 = (undefined4 *)(&DAT_00855044 + iVar7);
                          for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                            *puVar13 = *(undefined4 *)psVar8;
                            psVar8 = psVar8 + 2;
                            puVar13 = puVar13 + 1;
                          }
                          for (uVar6 = uVar6 & 3; pAVar9 = local_28, uVar6 != 0; uVar6 = uVar6 - 1)
                          {
                            *(char *)puVar13 = (char)*psVar8;
                            psVar8 = (short *)((int)psVar8 + 1);
                            puVar13 = (undefined4 *)((int)puVar13 + 1);
                          }
                        }
                        else {
                          DVar4 = FUN_006d4930(*(AnonShape_006D4930_676532DD **)
                                                ((&DAT_00855014)[uVar1 * 0x31] + 4),
                                               lpNumberOfBytesRead,
                                               (undefined4 *)(&DAT_00855044 + iVar7),0x3e);
                          if (DVar4 != 0) goto cf_common_join_006C0E00;
                          *(uint *)(&DAT_00855020 + iVar7) =
                               *(int *)(&DAT_00855020 + iVar7) +
                               (-(uint)(*(short *)(&DAT_00855044 + iVar7) != 1) & 0x24) + 0x1a;
                        }
                        if (*(short *)(&DAT_00855044 + iVar7) == 2) {
                          uVar5 = *(uint *)(&DAT_0085505e + iVar7);
                        }
                        else {
                          uVar5 = *(uint *)(&DAT_00855056 + iVar7) /
                                  (uint)*(ushort *)(&DAT_0085508e + iVar7);
                        }
                        *(uint *)(&DAT_008550b8 + iVar7) = uVar5;
                        pAVar10 = (AnonShape_006BFBF0_13F73F95 *)((int)local_10 - (int)pAVar9);
                        goto LAB_006c0d87;
                      }
                    }
                  }
                  else {
                    iVar3 = (&DAT_00855018)[uVar1 * 0x31];
                    *(undefined4 *)(&DAT_008550b4 + iVar7) = 0;
                    *(int *)(&DAT_00855020 + iVar7) = iVar3;
                    if ((uVar5 & 0x2000) != 0) {
                      *(uint *)(&DAT_00855020 + iVar7) =
                           (-(uint)(*(short *)(&DAT_00855044 + iVar7) != 1) & 0x24) + 0x1a + iVar3;
                    }
                    if (*(short *)(&DAT_00855044 + iVar7) == 2) {
                      uVar5 = *(uint *)(&DAT_0085505e + iVar7);
                    }
                    else {
                      uVar5 = *(uint *)(&DAT_00855056 + iVar7) /
                              (uint)*(ushort *)(&DAT_0085508e + iVar7);
                    }
                    *(uint *)(&DAT_008550b8 + iVar7) = uVar5;
                    if (pAVar9 < pAVar10) {
                      pAVar10 = (AnonShape_006BFBF0_13F73F95 *)((int)pAVar10 - (int)pAVar9);
LAB_006c0d87:
                      FUN_006bfe70((undefined4 *)(&pAVar9->field_0x0 + (int)local_8),pAVar14,pAVar10
                                  );
                    }
                  }
                }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_006c0d93:
                iVar3 = (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 0x4c))
                                  ((int *)(&DAT_00855004)[uVar1 * 0x31],local_8,local_1c,local_30,
                                   local_2c);
                if (iVar3 == 0) {
                  *(uint *)pAVar14 = *(uint *)pAVar14 ^ 4;
                  if ((*(int *)(&DAT_008550b8 + iVar7) < 1) &&
                     (((&DAT_00854ffc)[uVar1 * 0x31] & 1) == 0)) {
                    if (local_20 < local_14) {
                      (&DAT_00854ffc)[uVar1 * 0x31] = (&DAT_00854ffc)[uVar1 * 0x31] | 0x8000;
                    }
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
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
          *(uint *)pAVar14 = uVar5 & 0xffffffdf;
          iVar3 = FUN_006bfbf0((AnonShape_006BFBF0_13F73F95 *)pAVar14);
          if (iVar3 == 0) goto cf_continue_loop_006C0F40;
          piVar12 = (int *)(&DAT_00855004)[uVar1 * 0x31];
          bVar2 = 1;
          if (piVar12 != (int *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*piVar12 + 0x48))(piVar12);
            piVar12 = (int *)(&DAT_00855008)[uVar1 * 0x31];
            if (piVar12 != (int *)0x0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(*piVar12 + 8))(piVar12);
              (&DAT_00855008)[uVar1 * 0x31] = 0;
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)(&DAT_00855004)[uVar1 * 0x31] + 8))
                      ((int *)(&DAT_00855004)[uVar1 * 0x31]);
            (&DAT_00855004)[uVar1 * 0x31] = 0;
          }
cf_common_join_006C0E05:
          local_18 = *(uint *)pAVar14 & 8;
          piVar12 = (int *)(&DAT_00855008)[uVar1 * 0x31];
          if (piVar12 != (int *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*piVar12 + 8))(piVar12);
            (&DAT_00855008)[uVar1 * 0x31] = 0;
          }
          piVar12 = (int *)(&DAT_00855004)[uVar1 * 0x31];
          if (piVar12 != (int *)0x0) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*piVar12 + 8))(piVar12);
          }
          uVar5 = local_c;
          local_28 = *(AnonShape_006BFBF0_13F73F95 **)(&DAT_00855028 + iVar7);
          iVar7 = *(int *)(&DAT_0085502c + iVar7);
          for (iVar3 = 0x31; piVar12 = DAT_00854ff4, iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pAVar14 = 0;
            pAVar14 = (AnonShape_006BFE70_9EDC24A5 *)&pAVar14->field_0004;
          }
          for (; piVar12 != (int *)0x0; piVar12 = (int *)*piVar12) {
            if ((piVar12[0xd] <= (int)local_c) && ((int)local_c <= piVar12[0xe])) {
              uVar1 = piVar12[5];
              pAVar10 = local_28;
              if ((uVar1 & 0x10) == 0) {
                pAVar10 = (AnonShape_006BFBF0_13F73F95 *)piVar12[6];
              }
              if ((uVar1 & 0x20) == 0) {
                iVar7 = piVar12[7];
              }
              if ((uVar1 & 0x2000) == 0) {
                FUN_006c0800((short *)piVar12[3],*(byte *)(piVar12 + 4),uVar1,pAVar10,iVar7,
                             piVar12[8],piVar12[9],piVar12[10],piVar12[0xb],piVar12[0xc],local_c);
              }
              else {
                FUN_006c2460(piVar12[1],piVar12[2],*(byte *)(piVar12 + 4),uVar1,pAVar10,iVar7,
                             local_c);
              }
              if (local_18 != 0) {
                FUN_006c18d0(uVar5);
              }
              piVar12[0xd] = -1;
              piVar12[0xe] = -1;
              goto cf_continue_loop_006C0F40;
            }
          }
          if (local_18 != 0) {
            PostMessageA(g_hWnd_00854FF0,0x3b9,(-(uint)bVar2 & 7) + 1,local_c & 0xffff | 0x44530000);
          }
        }
      }
      else if ((uVar5 & 3) == 3) {
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
  piVar12 = (int *)*piVar12;
  if (piVar12 == (int *)0x0) goto LAB_006c0d93;
  goto LAB_006c0c93;
}

