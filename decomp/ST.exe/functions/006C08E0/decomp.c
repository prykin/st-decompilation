#include "../../pseudocode_runtime.h"


void FUN_006c08e0(void)

{
  int *piVar1;
  LPDWORD lpNumberOfBytesRead;
  uint uVar2;
  byte bVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar4;
  uint uVar6;
  uint local_ECX_632;
  uint uVar7;
  AnonShape_006BFBF0_13F73F95 *pAVar8;
  int iVar9;
  short *psVar10;
  AnonShape_006BFBF0_13F73F95 *local_ESI_1151;
  uint pAVar10;
  uint *puVar11;
  int *local_EDI_947;
  undefined4 *puVar12;
  AnonShape_006BFE70_9EDC24A5 *pAVar13;
  undefined1 local_3c [4];
  byte local_38 [4];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  AnonShape_006BFBF0_13F73F95 *local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  AnonShape_006BFBF0_13F73F95 *local_10;
  uint local_c;
  uint *local_8;
  uint pAVar9;
  uint temp_5fcb5576f0;

  do {
    local_34 = 1;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00856898);
    local_c = 0;
    do {
      uVar2 = local_c;
      bVar3 = 0;
      uVar6 = *(uint *)(&DAT_00854ff8 + local_c * 0xc4);
      iVar9 = local_c * 0xc4;
      pAVar13 = (AnonShape_006BFE70_9EDC24A5 *)(&DAT_00854ff8 + iVar9);
      if ((uVar6 & 3) == 1) {
        local_34 = 0;
        if ((uVar6 & 0x20) == 0) {
          local_18 = 0;
          pAVar10 = *(uint *)(&DAT_0085500c + iVar9) >> 1;
          local_20 = pAVar10;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar4 = (**(code **)(*(int *)(&DAT_00855004)[local_c * 0x31] + 0x24))
                            ((int *)(&DAT_00855004)[local_c * 0x31],local_38);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if (((iVar4 != 0) || ((local_38[0] & 2) != 0)) ||
             (iVar4 = (**(code **)(*(int *)(&DAT_00855004)[uVar2 * 0x31] + 0x10))
                                ((int *)(&DAT_00855004)[uVar2 * 0x31],&local_14,local_3c),
             iVar4 != 0)) goto cf_common_join_006C0E00;
          pAVar9 = *(uint *)(&DAT_00855010 + iVar9);
          local_28 = *(AnonShape_006BFBF0_13F73F95 **)(&DAT_0085500c + iVar9);
          if (pAVar9 <= local_28) {
            uVar6 = *(uint *)pAVar13;
            if ((uVar6 & 0x10) == 0) {
              temp_5fcb5576f0 = *(uint *)(&DAT_00855010 + iVar9);
              if (local_14 < pAVar10) {
                if (temp_5fcb5576f0 < pAVar10) {
LAB_006c0af5:
                  if (local_14 < temp_5fcb5576f0) {
                    *(uint *)pAVar13 = uVar6 | 0x10;
                  }
                  else {
                    if ((*(byte *)(&DAT_00854ffc + uVar2 * 0x31) & 1) == 0) {
                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                      (**(code **)(*(int *)(&DAT_00855004)[uVar2 * 0x31] + 0x48))
                                ((int *)(&DAT_00855004)[uVar2 * 0x31]);
                      goto cf_common_join_006C0E05;
                    }
                    local_18 = uVar6 & 8;
                    *(undefined4 *)(&DAT_00855010 + iVar9) = 0x7fffffff;
                  }
                }
              }
              else if (pAVar10 <= temp_5fcb5576f0) goto LAB_006c0af5;
            }
            else if ((pAVar9 <= local_14) || ((local_14 < pAVar10 && (pAVar10 <= pAVar9)))) {
              if ((*(byte *)(&DAT_00854ffc + uVar2 * 0x31) & 1) == 0) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                (**(code **)(*(int *)(&DAT_00855004)[uVar2 * 0x31] + 0x48))
                          ((int *)(&DAT_00855004)[uVar2 * 0x31]);
                goto cf_common_join_006C0E05;
              }
              *(undefined4 *)(&DAT_00855010 + iVar9) = 0x7fffffff;
              local_18 = uVar6 & 8;
              *(uint *)pAVar13 = uVar6 & 0xffffffef;
            }
          }
          iVar4 = *(int *)(&DAT_008550b8 + iVar9);
          if (iVar4 < 1) {
            if ((local_38[0] & 1) == 0) goto cf_common_join_006C0E05;
            if (((&DAT_00854ffc)[uVar2 * 0x31] & 0x8000) == 0) goto cf_continue_loop_006C0F40;
          }
          if (((&DAT_00854ffc)[uVar2 * 0x31] & 0x4000) == 0) {
            if (((&DAT_00854ffc)[uVar2 * 0x31] & 0x8000) == 0) {
              if (local_20 <= local_14) goto LAB_006c0b45;
              if ((*(byte *)pAVar13 & 4) == 0) goto cf_common_join_006C0F07;
              local_24 = local_20;
              local_ECX_632 = (int)local_28 - local_20;
            }
            else {
              if (local_14 < local_20) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar4 = (**(code **)(*(int *)(&DAT_00855004)[uVar2 * 0x31] + 0x2c))
                                  ((int *)(&DAT_00855004)[uVar2 * 0x31],local_20,
                                   (int)local_28 - local_20,&local_8,&local_1c,&local_30,&local_2c,0
                                  );
                if (iVar4 == 0) {
                  bVar3 = (*(short *)(&DAT_00855090 + iVar9) != 8) - 1;
                  puVar11 = local_8;
                  for (uVar6 = local_1c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *puVar11 = CONCAT22(CONCAT11(bVar3,bVar3),CONCAT11(bVar3,bVar3)) & 0x80808080;
                    puVar11 = puVar11 + 1;
                  }
                  for (uVar6 = local_1c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(byte *)puVar11 = bVar3 & 0x80;
                    puVar11 = (uint *)((int)puVar11 + 1);
                  }
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                  iVar4 = (**(code **)(*(int *)(&DAT_00855004)[uVar2 * 0x31] + 0x4c))
                                    ((int *)(&DAT_00855004)[uVar2 * 0x31],local_8,local_1c,local_30,
                                     local_2c);
                  if (iVar4 == 0) {
                    (&DAT_00854ffc)[uVar2 * 0x31] = (&DAT_00854ffc)[uVar2 * 0x31] & 0xffff7fff;
                    goto cf_common_join_006C0F07;
                  }
                }
                goto cf_common_join_006C0E00;
              }
LAB_006c0b45:
              if ((*(byte *)pAVar13 & 4) != 0) goto cf_common_join_006C0F07;
              local_24 = 0;
              local_ECX_632 = local_20;
            }
            local_10 = (AnonShape_006BFBF0_13F73F95 *)local_ECX_632;
            if (local_ECX_632 != 0) {
              local_ESI_1151 = (AnonShape_006BFBF0_13F73F95 *)local_ECX_632;
              if (iVar4 < (int)(local_ECX_632 / *(ushort *)(&DAT_0085508e + iVar9))) {
                local_ESI_1151 =
                     (AnonShape_006BFBF0_13F73F95 *)
                     ((uint)*(ushort *)(&DAT_0085508e + iVar9) * iVar4);
              }
              local_28 = local_ESI_1151;
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar4 = (**(code **)(*(int *)(&DAT_00855004)[uVar2 * 0x31] + 0x2c))
                                ((int *)(&DAT_00855004)[uVar2 * 0x31],local_24,local_ECX_632,
                                 &local_8,&local_1c,&local_30,&local_2c,0);
              if (iVar4 == 0) {
                if ((local_ESI_1151 < local_ECX_632) &&
                   ((*(byte *)(&DAT_00854ffc + uVar2 * 0x31) & 1) == 0)) {
                  bVar3 = (*(short *)(&DAT_00855090 + iVar9) != 8) - 1;
                  puVar11 = (uint *)(&local_ESI_1151->field_0x0 + (int)local_8);
                  for (uVar6 = local_1c - (int)local_ESI_1151 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                    *puVar11 = CONCAT22(CONCAT11(bVar3,bVar3),CONCAT11(bVar3,bVar3)) & 0x80808080;
                    puVar11 = puVar11 + 1;
                  }
                  for (uVar6 = local_1c - (int)local_ESI_1151 & 3; local_ESI_1151 = local_28,
                      local_ECX_632 = (uint)local_10, uVar6 != 0; uVar6 = uVar6 - 1) {
                    *(byte *)puVar11 = bVar3 & 0x80;
                    puVar11 = (uint *)((int)puVar11 + 1);
                  }
                }
                FUN_006bfe70(local_8,pAVar13,(int)local_ESI_1151);
                if (*(int *)(&DAT_008550b8 + iVar9) < 1) {
                  uVar6 = (&DAT_00854ffc)[uVar2 * 0x31];
                  *(undefined1 **)(&DAT_00855010 + iVar9) = &local_ESI_1151->field_0x0 + local_24;
                  if ((uVar6 & 1) == 0) {
                    if ((local_ESI_1151 < local_ECX_632) &&
                       (local_EDI_947 = DAT_00854ff4, DAT_00854ff4 != nullptr)) {
LAB_006c0c93:
                      if (((int)local_c < local_EDI_947[0xd]) || (local_EDI_947[0xe] < (int)local_c)
                         ) goto LAB_006c0c9d;
                      if ((*(byte *)(local_EDI_947 + 5) & 0x40) != 0) {
                        local_EDI_947[0xd] = -1;
                        local_EDI_947[0xe] = -1;
                        (&DAT_00855024)[uVar2 * 0x31] = local_EDI_947[4];
                        (&DAT_00855014)[uVar2 * 0x31] = local_EDI_947[1];
                        (&DAT_0085501c)[uVar2 * 0x31] = local_EDI_947[3];
                        (&DAT_00854ffc)[uVar2 * 0x31] = local_EDI_947[5];
                        *(undefined4 *)(&DAT_00855010 + iVar9) = 0x7fffffff;
                        DVar5 = timeGetTime();
                        (&DAT_00855000)[uVar2 * 0x31] = DVar5;
                        uVar6 = (&DAT_00854ffc)[uVar2 * 0x31];
                        (&DAT_00855018)[uVar2 * 0x31] = local_EDI_947[2];
                        lpNumberOfBytesRead = (LPDWORD)local_EDI_947[2];
                        *(undefined4 *)(&DAT_008550b4 + iVar9) = 0;
                        *(LPDWORD *)(&DAT_00855020 + iVar9) = lpNumberOfBytesRead;
                        if ((uVar6 & 0x2000) == 0) {
                          uVar7 = (-(uint)(*(short *)(&DAT_0085501c)[uVar2 * 0x31] != 1) & 0x24) +
                                  0x1a;
                          psVar10 = (short *)(&DAT_0085501c)[uVar2 * 0x31];
                          puVar12 = (undefined4 *)(&DAT_00855044 + iVar9);
                          for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
                            *puVar12 = *(undefined4 *)psVar10;
                            psVar10 = psVar10 + 2;
                            puVar12 = puVar12 + 1;
                          }
                          for (uVar7 = uVar7 & 3; local_ESI_1151 = local_28, uVar7 != 0;
                              uVar7 = uVar7 - 1) {
                            *(char *)puVar12 = (char)*psVar10;
                            psVar10 = (short *)((int)psVar10 + 1);
                            puVar12 = (undefined4 *)((int)puVar12 + 1);
                          }
                        }
                        else {
                          DVar4 = FUN_006d4930(*(AnonShape_006D4930_676532DD **)
                                                ((&DAT_00855014)[uVar2 * 0x31] + 4),
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
                        iVar4 = (int)local_10 - (int)local_ESI_1151;
                        goto LAB_006c0d87;
                      }
                    }
                  }
                  else {
                    iVar4 = (&DAT_00855018)[uVar2 * 0x31];
                    *(undefined4 *)(&DAT_008550b4 + iVar9) = 0;
                    *(int *)(&DAT_00855020 + iVar9) = iVar4;
                    if ((uVar6 & 0x2000) != 0) {
                      *(uint *)(&DAT_00855020 + iVar9) =
                           (-(uint)(*(short *)(&DAT_00855044 + iVar9) != 1) & 0x24) + 0x1a + iVar4;
                    }
                    if (*(short *)(&DAT_00855044 + iVar9) == 2) {
                      uVar6 = *(uint *)(&DAT_0085505e + iVar9);
                    }
                    else {
                      uVar6 = *(uint *)(&DAT_00855056 + iVar9) /
                              (uint)*(ushort *)(&DAT_0085508e + iVar9);
                    }
                    *(uint *)(&DAT_008550b8 + iVar9) = uVar6;
                    if (local_ESI_1151 < local_ECX_632) {
                      iVar4 = local_ECX_632 - (int)local_ESI_1151;
LAB_006c0d87:
                      FUN_006bfe70((undefined4 *)(&local_ESI_1151->field_0x0 + (int)local_8),pAVar13
                                   ,iVar4);
                    }
                  }
                }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_006c0d93:
                iVar4 = (**(code **)(*(int *)(&DAT_00855004)[uVar2 * 0x31] + 0x4c))
                                  ((int *)(&DAT_00855004)[uVar2 * 0x31],local_8,local_1c,local_30,
                                   local_2c);
                if (iVar4 == 0) {
                  *(uint *)pAVar13 = *(uint *)pAVar13 ^ 4;
                  if ((*(int *)(&DAT_008550b8 + iVar9) < 1) &&
                     (((&DAT_00854ffc)[uVar2 * 0x31] & 1) == 0)) {
                    if (local_20 < local_14) {
                      (&DAT_00854ffc)[uVar2 * 0x31] = (&DAT_00854ffc)[uVar2 * 0x31] | 0x8000;
                    }
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    if ((local_20 <= local_24) &&
                       (iVar4 = (**(code **)(*(int *)(&DAT_00855004)[uVar2 * 0x31] + 0x30))
                                          ((int *)(&DAT_00855004)[uVar2 * 0x31],0,0,0), iVar4 != 0))
                    goto cf_common_join_006C0E00;
                  }
                  goto cf_common_join_006C0F07;
                }
              }
cf_common_join_006C0E00:
              bVar3 = 1;
              goto cf_common_join_006C0E05;
            }
          }
cf_common_join_006C0F07:
          if (local_18 != 0) {
            PostMessageA(g_hWnd_00854FF0,0x3b9,1,local_c & 0xffff | 0x44530000);
          }
        }
        else {
          *(uint *)pAVar13 = uVar6 & 0xffffffdf;
          iVar4 = FUN_006bfbf0((AnonShape_006BFBF0_13F73F95 *)pAVar13);
          if (iVar4 == 0) goto cf_continue_loop_006C0F40;
          piVar1 = (int *)(&DAT_00855004)[uVar2 * 0x31];
          bVar3 = 1;
          if (piVar1 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*piVar1 + 0x48))(piVar1);
            piVar1 = (int *)(&DAT_00855008)[uVar2 * 0x31];
            if (piVar1 != nullptr) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(*piVar1 + 8))(piVar1);
              (&DAT_00855008)[uVar2 * 0x31] = 0;
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)(&DAT_00855004)[uVar2 * 0x31] + 8))
                      ((int *)(&DAT_00855004)[uVar2 * 0x31]);
            (&DAT_00855004)[uVar2 * 0x31] = 0;
          }
cf_common_join_006C0E05:
          local_18 = *(uint *)pAVar13 & 8;
          piVar1 = (int *)(&DAT_00855008)[uVar2 * 0x31];
          if (piVar1 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*piVar1 + 8))(piVar1);
            (&DAT_00855008)[uVar2 * 0x31] = 0;
          }
          piVar1 = (int *)(&DAT_00855004)[uVar2 * 0x31];
          if (piVar1 != nullptr) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          uVar6 = local_c;
          local_28 = *(AnonShape_006BFBF0_13F73F95 **)(&DAT_00855028 + iVar9);
          iVar9 = *(int *)(&DAT_0085502c + iVar9);
          for (iVar4 = 0x31; piVar1 = DAT_00854ff4, iVar4 != 0; iVar4 = iVar4 + -1) {
            *(undefined4 *)pAVar13 = 0;
            pAVar13 = (AnonShape_006BFE70_9EDC24A5 *)&pAVar13->field_0004;
          }
          for (; piVar1 != nullptr; piVar1 = (int *)*piVar1) {
            if ((piVar1[0xd] <= (int)local_c) && ((int)local_c <= piVar1[0xe])) {
              uVar2 = piVar1[5];
              pAVar8 = local_28;
              if ((uVar2 & 0x10) == 0) {
                pAVar8 = (AnonShape_006BFBF0_13F73F95 *)piVar1[6];
              }
              if ((uVar2 & 0x20) == 0) {
                iVar9 = piVar1[7];
              }
              if ((uVar2 & 0x2000) == 0) {
                FUN_006c0800((short *)piVar1[3],*(byte *)(piVar1 + 4),uVar2,pAVar8,iVar9,piVar1[8],
                             piVar1[9],piVar1[10],piVar1[0xb],piVar1[0xc],local_c);
              }
              else {
                FUN_006c2460(piVar1[1],piVar1[2],*(byte *)(piVar1 + 4),uVar2,pAVar8,iVar9,local_c);
              }
              if (local_18 != 0) {
                FUN_006c18d0(uVar6);
              }
              piVar1[0xd] = -1;
              piVar1[0xe] = -1;
              goto cf_continue_loop_006C0F40;
            }
          }
          if (local_18 != 0) {
            PostMessageA(g_hWnd_00854FF0,0x3b9,(-(uint)bVar3 & 7) + 1,local_c & 0xffff | 0x44530000);
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
  local_EDI_947 = (int *)*local_EDI_947;
  if (local_EDI_947 == nullptr) goto LAB_006c0d93;
  goto LAB_006c0c93;
}

