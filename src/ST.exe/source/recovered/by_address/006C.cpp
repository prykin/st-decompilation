#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/006C.cpp

// 006C0800 FUN_006c0800
#line 4 "decomp/ST.exe/functions/006C0800/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=006C0816 MOV EAX,dword ptr [EBP + 0xc];
   first-use mask */

void st::fn_006C0800(short *param_1,byte param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,int param_11)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  AnonShape_006BFBF0_13F73F95 *pAVar7;

  iVar5 = param_11 * 0xc4;
  (&DAT_00855024)[param_11 * 0x31] = (uint)param_2;
  *(undefined4 *)(&DAT_00855028 + iVar5) = param_4;
  *(undefined4 *)(&DAT_0085502c + iVar5) = param_5;
  (&DAT_00854ffc)[param_11 * 0x31] = param_3;
  *(undefined4 *)(&DAT_00855030 + iVar5) = param_6;
  *(undefined4 *)(&DAT_00855034 + iVar5) = param_7;
  (&DAT_0085501c)[param_11 * 0x31] = param_1;
  *(undefined4 *)(&DAT_00855038 + iVar5) = param_8;
  *(undefined4 *)(&DAT_0085503c + iVar5) = param_9;
  *(undefined4 *)(&DAT_00855040 + iVar5) = param_10;
  uVar3 = (-(uint)(*param_1 != 1) & 0x24) + 0x1a;
  puVar6 = (undefined4 *)(&DAT_00855044 + iVar5);
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = *(undefined4 *)param_1;
    param_1 = param_1 + 2;
    puVar6 = puVar6 + 1;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)puVar6 = (char)*param_1;
    param_1 = (short *)((int)param_1 + 1);
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  }
  iVar2 = st::fn_006BFBF0((AnonShape_006BFBF0_13F73F95 *)(&DAT_00854ff8 + iVar5));
  if (iVar2 != 0) {
    piVar1 = st::pointer_boundary_cast<int *>((&PTR_00855004)[param_11 * 0x31]);
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006C0899]: CALL dword ptr [ECX + 0x48] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 0x48))(piVar1);
      piVar1 = st::pointer_boundary_cast<int *>((&PTR_00855008)[param_11 * 0x31]);
      if (piVar1 != nullptr) {
        /* ST_CALLSITE[006C08A9]: CALL dword ptr [EDX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar1 + 8))(piVar1);
        (&PTR_00855008)[param_11 * 0x31] = nullptr;
      }
      /* ST_CALLSITE[006C08BF]: CALL dword ptr [EAX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)(&PTR_00855004)[param_11 * 0x31] + 8))((&PTR_00855004)[param_11 * 0x31]);
    }
    pAVar7 = (AnonShape_006BFBF0_13F73F95 *)(&DAT_00854ff8 + iVar5);
    for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pAVar7 = 0;
      pAVar7 = (AnonShape_006BFBF0_13F73F95 *)&pAVar7->field_0x4;
    }
  }
  return;
}

// 006C08E0 FUN_006c08e0
#line 4 "decomp/ST.exe/functions/006C08E0/decomp.c"
void st::fn_006C08E0(void)

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
    /* ST_CALLSITE[006C08F5]: CALL dword ptr [0x0085bb8c] */
    st::external_00000018((LPCRITICAL_SECTION)&DAT_00856898);
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
          /* ST_CALLSITE[006C0992]: CALL dword ptr [ECX + 0x24] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar4 = (**(code **)(*(int *)(&PTR_00855004)[local_c * 0x31] + 0x24))
                            ((&PTR_00855004)[local_c * 0x31],local_38);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          if (((iVar4 != 0) || ((local_38[0] & 2) != 0)) ||
             /* ST_CALLSITE[006C09B5]: CALL dword ptr [ECX + 0x10] */
             (iVar4 = (**(code **)(*(int *)(&PTR_00855004)[uVar2 * 0x31] + 0x10))
                                ((&PTR_00855004)[uVar2 * 0x31],&local_14,local_3c), iVar4 != 0))
          goto cf_common_join_006C0E00;
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
                      /* ST_CALLSITE[006C0B06]: CALL dword ptr [EDX + 0x48] */
                      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                      (**(code **)(*(int *)(&PTR_00855004)[uVar2 * 0x31] + 0x48))
                                ((&PTR_00855004)[uVar2 * 0x31]);
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
                /* ST_CALLSITE[006C09F2]: CALL dword ptr [ECX + 0x48] */
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                (**(code **)(*(int *)(&PTR_00855004)[uVar2 * 0x31] + 0x48))
                          ((&PTR_00855004)[uVar2 * 0x31]);
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
                /* ST_CALLSITE[006C0A6F]: CALL dword ptr [ESI + 0x2c] */
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                iVar4 = (**(code **)(*(int *)(&PTR_00855004)[uVar2 * 0x31] + 0x2c))
                                  ((&PTR_00855004)[uVar2 * 0x31],local_20,(int)local_28 - local_20,
                                   &local_8,&local_1c,&local_30,&local_2c,0);
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
                  /* ST_CALLSITE[006C0AC1]: CALL dword ptr [ECX + 0x4c] */
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                  iVar4 = (**(code **)(*(int *)(&PTR_00855004)[uVar2 * 0x31] + 0x4c))
                                    ((&PTR_00855004)[uVar2 * 0x31],local_8,local_1c,local_30,
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
              /* ST_CALLSITE[006C0BA1]: CALL dword ptr [ECX + 0x2c] */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              iVar4 = (**(code **)(*(int *)(&PTR_00855004)[uVar2 * 0x31] + 0x2c))
                                ((&PTR_00855004)[uVar2 * 0x31],local_24,local_ECX_632,&local_8,
                                 &local_1c,&local_30,&local_2c,0);
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
                st::fn_006BFE70(local_8,pAVar13,(int)local_ESI_1151);
                if (*(int *)(&DAT_008550b8 + iVar9) < 1) {
                  uVar6 = (&DAT_00854ffc)[uVar2 * 0x31];
                  *(undefined1 **)(&DAT_00855010 + iVar9) = &local_ESI_1151->field_0x0 + local_24;
                  if ((uVar6 & 1) == 0) {
                    if ((local_ESI_1151 < local_ECX_632) &&
                       (local_EDI_947 = st::pointer_boundary_cast<int *>(DAT_00854ff4), DAT_00854ff4 != 0)) {
LAB_006c0c93:
                      if (((int)local_c < local_EDI_947[0xd]) || (local_EDI_947[0xe] < (int)local_c)
                         ) goto LAB_006c0c9d;
                      if ((((byte *)local_EDI_947)[5] & 0x40) != 0) {
                        local_EDI_947[0xd] = -1;
                        local_EDI_947[0xe] = -1;
                        (&DAT_00855024)[uVar2 * 0x31] = local_EDI_947[4];
                        (&DAT_00855014)[uVar2 * 0x31] = local_EDI_947[1];
                        (&DAT_0085501c)[uVar2 * 0x31] = local_EDI_947[3];
                        (&DAT_00854ffc)[uVar2 * 0x31] = local_EDI_947[5];
                        *(undefined4 *)(&DAT_00855010 + iVar9) = 0x7fffffff;
                        /* ST_CALLSITE[006C0CDA]: CALL dword ptr [0x0085bedc] */
                        DVar5 = st::external_000000DA();
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
                          DVar4 = st::fn_006D4930(*(AnonShape_006D4930_676532DD **)
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
                      st::fn_006BFE70((undefined4 *)(&local_ESI_1151->field_0x0 + (int)local_8),pAVar13
                                   ,iVar4);
                    }
                  }
                }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
LAB_006c0d93:
                /* ST_CALLSITE[006C0DA9]: CALL dword ptr [ECX + 0x4c] */
                iVar4 = (**(code **)(*(int *)(&PTR_00855004)[uVar2 * 0x31] + 0x4c))
                                  ((&PTR_00855004)[uVar2 * 0x31],local_8,local_1c,local_30,local_2c);
                if (iVar4 == 0) {
                  *(uint *)pAVar13 = *(uint *)pAVar13 ^ 4;
                  if ((*(int *)(&DAT_008550b8 + iVar9) < 1) &&
                     (((&DAT_00854ffc)[uVar2 * 0x31] & 1) == 0)) {
                    if (local_20 < local_14) {
                      (&DAT_00854ffc)[uVar2 * 0x31] = (&DAT_00854ffc)[uVar2 * 0x31] | 0x8000;
                    }
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                    if ((local_20 <= local_24) &&
                       /* ST_CALLSITE[006C0DF5]: CALL dword ptr [ECX + 0x30] */
                       (iVar4 = (**(code **)(*(int *)(&PTR_00855004)[uVar2 * 0x31] + 0x30))
                                          ((&PTR_00855004)[uVar2 * 0x31],0,0,0), iVar4 != 0))
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
            /* ST_CALLSITE[006C0F2C]: CALL dword ptr [0x0085be5c] */
            st::external_0000009D(g_hWnd_00854FF0,0x3b9,1,local_c & 0xffff | 0x44530000);
          }
        }
        else {
          *(uint *)pAVar13 = uVar6 & 0xffffffdf;
          iVar4 = st::fn_006BFBF0((AnonShape_006BFBF0_13F73F95 *)pAVar13);
          if (iVar4 == 0) goto cf_continue_loop_006C0F40;
          piVar1 = st::pointer_boundary_cast<int *>((&PTR_00855004)[uVar2 * 0x31]);
          bVar3 = 1;
          if (piVar1 != nullptr) {
            /* ST_CALLSITE[006C0957]: CALL dword ptr [EDX + 0x48] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*piVar1 + 0x48))(piVar1);
            piVar1 = st::pointer_boundary_cast<int *>((&PTR_00855008)[uVar2 * 0x31]);
            if (piVar1 != nullptr) {
              /* ST_CALLSITE[006C0966]: CALL dword ptr [ECX + 0x8] */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(*piVar1 + 8))(piVar1);
              (&PTR_00855008)[uVar2 * 0x31] = nullptr;
            }
            /* ST_CALLSITE[006C0972]: CALL dword ptr [EDX + 0x8] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*(int *)(&PTR_00855004)[uVar2 * 0x31] + 8))((&PTR_00855004)[uVar2 * 0x31]);
            (&PTR_00855004)[uVar2 * 0x31] = nullptr;
          }
cf_common_join_006C0E05:
          local_18 = *(uint *)pAVar13 & 8;
          piVar1 = st::pointer_boundary_cast<int *>((&PTR_00855008)[uVar2 * 0x31]);
          if (piVar1 != nullptr) {
            /* ST_CALLSITE[006C0E17]: CALL dword ptr [EDX + 0x8] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*piVar1 + 8))(piVar1);
            (&PTR_00855008)[uVar2 * 0x31] = nullptr;
          }
          piVar1 = st::pointer_boundary_cast<int *>((&PTR_00855004)[uVar2 * 0x31]);
          if (piVar1 != nullptr) {
            /* ST_CALLSITE[006C0E2B]: CALL dword ptr [ECX + 0x8] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*piVar1 + 8))(piVar1);
          }
          uVar6 = local_c;
          local_28 = *(AnonShape_006BFBF0_13F73F95 **)(&DAT_00855028 + iVar9);
          iVar9 = *(int *)(&DAT_0085502c + iVar9);
          for (iVar4 = 0x31; piVar1 = st::pointer_boundary_cast<int *>(DAT_00854ff4), iVar4 != 0; iVar4 = iVar4 + -1) {
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
                st::fn_006C0800((short *)piVar1[3],((byte *)piVar1)[4],uVar2,st::machine_word_boundary_cast<undefined4>(pAVar8),iVar9,piVar1[8],
                             piVar1[9],piVar1[10],piVar1[0xb],piVar1[0xc],local_c);
              }
              else {
                st::fn_006C2460(piVar1[1],piVar1[2],((byte *)piVar1)[4],uVar2,st::machine_word_boundary_cast<undefined4>(pAVar8),iVar9,local_c);
              }
              if (local_18 != 0) {
                st::fn_006C18D0(uVar6);
              }
              piVar1[0xd] = -1;
              piVar1[0xe] = -1;
              goto cf_continue_loop_006C0F40;
            }
          }
          if (local_18 != 0) {
            /* ST_CALLSITE[006C0E8E]: CALL dword ptr [0x0085be5c] */
            st::external_0000009D(g_hWnd_00854FF0,0x3b9,(-(uint)bVar3 & 7) + 1,local_c & 0xffff | 0x44530000);
          }
        }
      }
      else if ((uVar6 & 3) == 3) {
        local_34 = 0;
      }
cf_continue_loop_006C0F40:
      local_c = local_c + 1;
    } while ((int)local_c < 0x20);
    /* ST_CALLSITE[006C0F5B]: CALL ESI */
    st::external_00000019((LPCRITICAL_SECTION)&DAT_00856898);
    if (local_34 == 0) {
      /* ST_CALLSITE[006C0F9C]: CALL dword ptr [0x0085bc6c] */
      st::external_00000050(0x32);
    }
    else {
      /* ST_CALLSITE[006C0F69]: CALL dword ptr [0x0085bb8c] */
      st::external_00000018((LPCRITICAL_SECTION)&DAT_00856880);
      DAT_008568c4 = (uint)(DAT_008568c4 == 0);
      /* ST_CALLSITE[006C0F86]: CALL ESI */
      st::external_00000019((LPCRITICAL_SECTION)&DAT_00856880);
      /* ST_CALLSITE[006C0F8F]: CALL dword ptr [0x0085bb7c] */
      st::external_00000014(g_hThread_008568C0);
    }
  } while( true );
LAB_006c0c9d:
  local_EDI_947 = (int *)*local_EDI_947;
  if (local_EDI_947 == nullptr) goto LAB_006c0d93;
  goto LAB_006c0c93;
}

// 006C1390 FUN_006c1390
#line 1 "decomp/ST.exe/functions/006C1390/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 006C1390 returns return of Library::DKW::SND::FUN_006c0fb0 @ 006C13BF */

int st::fn_006C1390(uint *param_1,byte param_2,uint param_3,uint param_4,uint param_5,int param_6,
                int param_7)

{
  int iVar1;

  iVar1 = st::fn_006C0FB0
                    (param_1,param_2,param_3,param_4,param_5,0,0,0,0,0,param_6,param_7);
  return iVar1;
}

// 006C18B0 FUN_006c18b0
#line 1 "decomp/ST.exe/functions/006C18B0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 006C18B0 @ 0056B468 | 005D9470 -> 006C18B0 @ 005D9827

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006C18B0(uint param_1)

{
  if (DAT_008568bc != 0) {
    DAT_007ede10 = param_1;
  }
  return;
}

// 006C18D0 FUN_006c18d0
#line 4 "decomp/ST.exe/functions/006C18D0/decomp.c"
undefined4 st::fn_006C18D0(int param_1)

{
  if (DAT_008568b4 == 0) {
    return 0xffffffcc;
  }
  /* ST_CALLSITE[006C18EE]: CALL dword ptr [0x0085bb8c] */
  st::external_00000018((LPCRITICAL_SECTION)&DAT_00856898);
  if ((-1 < param_1) && (param_1 < 0x20)) {
    if ((*(uint *)(&DAT_00854ff8 + param_1 * 0xc4) & 1) != 0) {
      *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) = *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) | 8;
      /* ST_CALLSITE[006C1923]: CALL dword ptr [0x0085bb90] */
      st::external_00000019((LPCRITICAL_SECTION)&DAT_00856898);
      return 0;
    }
  }
  /* ST_CALLSITE[006C193A]: CALL dword ptr [0x0085bb90] */
  st::external_00000019((LPCRITICAL_SECTION)&DAT_00856898);
  return 0xfffffffc;
}

// 006C1950 FUN_006c1950
#line 4 "decomp/ST.exe/functions/006C1950/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=006C1994 MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

undefined4 st::fn_006C1950(int param_1,byte param_2)

{
  if (DAT_008568b4 == 0) {
    return 0xffffffcc;
  }
  /* ST_CALLSITE[006C196E]: CALL dword ptr [0x0085bb8c] */
  st::external_00000018((LPCRITICAL_SECTION)&DAT_00856898);
  if (((-1 < param_1) && (param_1 < 0x20)) && (((&DAT_00854ff8)[param_1 * 0xc4] & 1) != 0)) {
    (&DAT_00855024)[param_1 * 0x31] = (uint)param_2;
    /* ST_CALLSITE[006C19A8]: CALL dword ptr [0x0085bb90] */
    st::external_00000019((LPCRITICAL_SECTION)&DAT_00856898);
    return 0;
  }
  /* ST_CALLSITE[006C19BF]: CALL dword ptr [0x0085bb90] */
  st::external_00000019((LPCRITICAL_SECTION)&DAT_00856898);
  return 0xfffffffc;
}

// 006C1BA0 FUN_006c1ba0
#line 4 "decomp/ST.exe/functions/006C1BA0/decomp.c"
void st::fn_006C1BA0(int param_1)

{
  int *piVar1;
  int *piVar2;

  if (DAT_008568b4 != 0) {
    /* ST_CALLSITE[006C1BB8]: CALL dword ptr [0x0085bb8c] */
    st::external_00000018((LPCRITICAL_SECTION)&DAT_00856898);
    if ((-1 < param_1) && (param_1 < 0x20)) {
      if ((*(uint *)(&DAT_00854ff8 + param_1 * 0xc4) & 1) != 0) {
        *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) =
             *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) & 0xfffffff7;
        piVar1 = st::pointer_boundary_cast<int *>((&PTR_00855004)[param_1 * 0x31]);
        if (piVar1 != nullptr) {
          /* ST_CALLSITE[006C1C01]: CALL dword ptr [ECX + 0x48] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*piVar1 + 0x48))(piVar1);
          piVar1 = st::pointer_boundary_cast<int *>((&PTR_00855008)[param_1 * 0x31]);
          if (piVar1 != nullptr) {
            /* ST_CALLSITE[006C1C11]: CALL dword ptr [EDX + 0x8] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*piVar1 + 8))(piVar1);
            (&PTR_00855008)[param_1 * 0x31] = nullptr;
          }
          /* ST_CALLSITE[006C1C27]: CALL dword ptr [EAX + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*(int *)(&PTR_00855004)[param_1 * 0x31] + 8))
                    ((&PTR_00855004)[param_1 * 0x31]);
          piVar1 = st::pointer_boundary_cast<int *>(DAT_00854ff4);
          while (piVar1 != nullptr) {
            if ((piVar1[0xe] < 0) || ((piVar1[0xd] <= param_1 && (param_1 <= piVar1[0xe])))) {
              piVar2 = (int *)*piVar1;
              st::fn_006B98C0((int *)&DAT_00854ff4,piVar1);
              st::fn_006A5E90((short *)piVar1);
              piVar1 = piVar2;
            }
            else {
              piVar1 = (int *)*piVar1;
            }
          }
        }
        memset((uint *)(&DAT_00854ff8 + param_1 * 0xc4), 0, 0xc4); /* compiler bulk-zero initialization */
      }
    }
    /* ST_CALLSITE[006C1C74]: CALL dword ptr [0x0085bb90] */
    st::external_00000019((LPCRITICAL_SECTION)&DAT_00856898);
  }
  return;
}

// 006C1C90 FUN_006c1c90
#line 1 "decomp/ST.exe/functions/006C1C90/decomp.c"

void st::fn_006C1C90(int param_1)

{
  if (DAT_008568b4 != 0) {
    /* ST_CALLSITE[006C1CA1]: CALL dword ptr [0x0085bb8c] */
    st::external_00000018((LPCRITICAL_SECTION)&DAT_00856898);
    if (((-1 < param_1) && (param_1 < 0x20)) && (((&DAT_00854ff8)[param_1 * 0xc4] & 1) != 0)) {
      (&DAT_00854ffc)[param_1 * 0x31] = (&DAT_00854ffc)[param_1 * 0x31] & 0xfffffffe;
    }
    /* ST_CALLSITE[006C1CD3]: CALL dword ptr [0x0085bb90] */
    st::external_00000019((LPCRITICAL_SECTION)&DAT_00856898);
  }
  return;
}

// 006C1E20 FUN_006c1e20
#line 4 "decomp/ST.exe/functions/006C1E20/decomp.c"
void st::fn_006C1E20(void)

{
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  void **ppvVar4;

  if ((DAT_008568b4 != 0) && (g_hThread_008568C0 != (HANDLE)0x0)) {
    /* ST_CALLSITE[006C1E46]: CALL ESI */
    st::external_00000018((LPCRITICAL_SECTION)&DAT_00856880);
    if (DAT_008568c4 == 0) {
      /* ST_CALLSITE[006C1E5B]: CALL ESI */
      st::external_00000018((LPCRITICAL_SECTION)&DAT_00856898);
      st::fn_006B9890(st::pointer_boundary_cast<int *>(&DAT_00854ff4));
      ppvVar3 = &PTR_00855004;
      do {
        if (((uint)ppvVar3[-3] & 1) != 0) {
          ppvVar3[-3] = (void *)((uint)ppvVar3[-3] & 8);
          piVar1 = st::pointer_boundary_cast<int *>(*ppvVar3);
          if (piVar1 != nullptr) {
            /* ST_CALLSITE[006C1E84]: CALL dword ptr [ECX + 0x48] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*piVar1 + 0x48))(piVar1);
            piVar1 = st::pointer_boundary_cast<int *>(ppvVar3[1]);
            if (piVar1 != nullptr) {
              /* ST_CALLSITE[006C1E91]: CALL dword ptr [EDX + 0x8] */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(*piVar1 + 8))(piVar1);
              ppvVar3[1] = nullptr;
            }
            /* ST_CALLSITE[006C1EA0]: CALL dword ptr [ECX + 0x8] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*(int *)*ppvVar3 + 8))(*ppvVar3);
          }
          ppvVar4 = ppvVar3 + -3;
          for (iVar2 = 0x31; iVar2 != 0; iVar2 = iVar2 + -1) {
            *ppvVar4 = nullptr;
            ppvVar4 = ppvVar4 + 1;
          }
        }
        ppvVar3 = ppvVar3 + 0x31;
      } while ((int)ppvVar3 < 0x856884);
      /* ST_CALLSITE[006C1EBF]: CALL dword ptr [0x0085bb90] */
      st::external_00000019((LPCRITICAL_SECTION)&DAT_00856898);
      /* ST_CALLSITE[006C1ECC]: CALL dword ptr [0x0085bb7c] */
      st::external_00000014(g_hThread_008568C0);
      DAT_008568c4 = (uint)(DAT_008568c4 == 0);
    }
    /* ST_CALLSITE[006C1EEA]: CALL dword ptr [0x0085bb90] */
    st::external_00000019((LPCRITICAL_SECTION)&DAT_00856880);
  }
  return;
}

// 006C1F00 FUN_006c1f00
#line 4 "decomp/ST.exe/functions/006C1F00/decomp.c"
undefined4 st::fn_006C1F00(int param_1,uint *param_2,uint *param_3)

{
  if (DAT_008568b4 == 0) {
    return 0xffffffcc;
  }
  if ((-1 < param_1) && (param_1 < 0x20)) {
    /* ST_CALLSITE[006C1F2B]: CALL dword ptr [0x0085bb8c] */
    st::external_00000018((LPCRITICAL_SECTION)&DAT_00856898);
    if (param_2 != nullptr) {
      *param_2 = *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) & 1;
    }
    if (param_3 != nullptr) {
      *param_3 = *(uint *)(&DAT_00854ff8 + param_1 * 0xc4) >> 1 & 1;
    }
    /* ST_CALLSITE[006C1F6E]: CALL dword ptr [0x0085bb90] */
    st::external_00000019((LPCRITICAL_SECTION)&DAT_00856898);
    return 0;
  }
  return 0xfffffffc;
}

// 006C1F90 FUN_006c1f90
#line 4 "decomp/ST.exe/functions/006C1F90/decomp.c"
undefined4 st::fn_006C1F90(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 local_8;

  local_8 = 0;
  if (DAT_008568b4 == 0) {
    return 0xffffffcc;
  }
  if ((param_1 < 0) || (0x1f < param_1)) {
    return 0xfffffffc;
  }
  /* ST_CALLSITE[006C1FC3]: CALL dword ptr [0x0085bb8c] */
  st::external_00000018((LPCRITICAL_SECTION)&DAT_00856898);
  piVar1 = st::pointer_boundary_cast<int *>(DAT_00854ff4);
  if (DAT_00854ff4 != 0) {
    do {
      if (piVar1[0xe] < 0) {
        piVar2 = (int *)*piVar1;
        st::fn_006B98C0((int *)&DAT_00854ff4,piVar1);
        st::fn_006A5E90((short *)piVar1);
      }
      else {
        if ((piVar1[0xd] <= param_1) && (param_1 <= piVar1[0xe])) {
          local_8 = 1;
          break;
        }
        piVar2 = (int *)*piVar1;
      }
      piVar1 = piVar2;
      if (piVar2 == nullptr) {
        /* ST_CALLSITE[006C2005]: CALL dword ptr [0x0085bb90] */
        st::external_00000019((LPCRITICAL_SECTION)&DAT_00856898);
        return 0;
      }
    } while( true );
  }
  /* ST_CALLSITE[006C2023]: CALL dword ptr [0x0085bb90] */
  st::external_00000019((LPCRITICAL_SECTION)&DAT_00856898);
  return local_8;
}

// 006C2050 FUN_006c2050
#line 4 "decomp/ST.exe/functions/006C2050/decomp.c"
void st::fn_006C2050(void)

{
  int *piVar1;
  void **ppvVar2;

  if (DAT_008568b4 != 0) {
    /* ST_CALLSITE[006C206C]: CALL ESI */
    st::external_00000018((LPCRITICAL_SECTION)&DAT_00856880);
    /* ST_CALLSITE[006C2073]: CALL ESI */
    st::external_00000018((LPCRITICAL_SECTION)&DAT_00856898);
    st::fn_006B9890(st::pointer_boundary_cast<int *>(&DAT_00854ff4));
    if (g_hThread_008568C0 != (HANDLE)0x0) {
      /* ST_CALLSITE[006C208A]: CALL dword ptr [0x0085bb6c] */
      st::external_00000010(g_hThread_008568C0,0);
      g_hThread_008568C0 = (HANDLE)0x0;
    }
    /* ST_CALLSITE[006C20A1]: CALL ESI */
    st::external_00000016((LPCRITICAL_SECTION)&DAT_00856880);
    /* ST_CALLSITE[006C20A8]: CALL ESI */
    st::external_00000016((LPCRITICAL_SECTION)&DAT_00856898);
    ppvVar2 = &PTR_00855008;
    do {
      if (((uint)ppvVar2[-4] & 1) != 0) {
        ppvVar2[-4] = (void *)((uint)ppvVar2[-4] & 0xfffffff7);
        piVar1 = st::pointer_boundary_cast<int *>(ppvVar2[-1]);
        if (piVar1 != nullptr) {
          /* ST_CALLSITE[006C20C5]: CALL dword ptr [ECX + 0x48] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*piVar1 + 0x48))(piVar1);
          piVar1 = st::pointer_boundary_cast<int *>(*ppvVar2);
          if (piVar1 != nullptr) {
            /* ST_CALLSITE[006C20D1]: CALL dword ptr [EDX + 0x8] */
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)(*piVar1 + 8))(piVar1);
            *ppvVar2 = nullptr;
          }
          /* ST_CALLSITE[006C20DC]: CALL dword ptr [ECX + 0x8] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*(int *)ppvVar2[-1] + 8))(ppvVar2[-1]);
        }
      }
      ppvVar2 = ppvVar2 + 0x31;
    } while ((int)ppvVar2 < 0x856888);
    if (DAT_008568b8 != 0) {
      /* ST_CALLSITE[006C20FA]: CALL dword ptr [EDX + 0x48] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*DAT_008568b8 + 0x48))(DAT_008568b8);
      /* ST_CALLSITE[006C2105]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*DAT_008568b8 + 8))(DAT_008568b8);
      DAT_008568b8 = 0;
    }
    /* ST_CALLSITE[006C2116]: CALL dword ptr [EDX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*DAT_008568b4 + 8))(DAT_008568b4);
    DAT_008568b4 = 0;
    DAT_00856878 = 0;
    st::fn_006AB060(&g_lpBuffer_008568B0);
  }
  return;
}

// 006C2140 FUN_006c2140
#line 4 "decomp/ST.exe/functions/006C2140/decomp.c"
void st::fn_006C2140(undefined4 param_1)

{
  if (DAT_008568bc != 0) {
    /* ST_CALLSITE[006C2155]: CALL dword ptr [ECX + 0x2c] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*DAT_008568bc + 0x2c))(DAT_008568bc,param_1,0);
  }
  return;
}

// 006C21E0 FUN_006c21e0
#line 1 "decomp/ST.exe/functions/006C21E0/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 006C21E0 returns return of Library::DKW::SND::FUN_006c0fb0 @ 006C221A */

int st::fn_006C21E0(uint *param_1,byte param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                uint param_7,uint param_8,uint param_9,int param_10,int param_11)

{
  int iVar1;

  iVar1 = st::fn_006C0FB0
                    (param_1,param_2,param_3 | 0x1000,param_4,0,param_5,param_6,param_7,param_8,
                     param_9,param_10,param_11);
  return iVar1;
}

// 006C2390 FUN_006c2390
#line 1 "decomp/ST.exe/functions/006C2390/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_006C2390(AnonShape_006C2390_A203A467 *param_1)

{
  uint local_8;

  if (param_1 != nullptr) {
    if ((-1 < param_1->field_0046) &&
       (st::fn_006C1F00(param_1->field_0046,&local_8,nullptr), local_8 != 0)) {
      st::fn_006C1BA0(param_1->field_0046);
    }
    if ((*(uint *)param_1 & 0x8000) != 0) {
      st::fn_006D46A0(param_1->field_0042,0);
    }
    st::fn_006AB060(&param_1);
  }
  return;
}

// 006C23F0 FUN_006c23f0
#line 4 "decomp/ST.exe/functions/006C23F0/decomp.c"
undefined4 st::fn_006C23F0(short *param_1)

{
  longlong lVar1;
  undefined8 uVar2;

  if (*param_1 == 1) {
    lVar1 = st::fn_0072E4F0(*(uint *)(param_1 + 9),0,1000,0);
    uVar2 = st::fn_0072E440
                      ((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),*(uint *)(param_1 + 4),0);
    return (int)uVar2;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  lVar1 = st::fn_0072E4F0
                    (*(uint *)(param_1 + 0xd),(int)*(uint *)(param_1 + 0xd) >> 0x1f,1000,0);
  uVar2 = st::fn_0072E440
                    ((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),*(uint *)(param_1 + 2),0);
  return (int)uVar2;
}

// 006C2460 FUN_006c2460
#line 4 "decomp/ST.exe/functions/006C2460/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=006C2476 MOV EAX,dword ptr [EBP + 0x10];
   first-use mask */

void st::fn_006C2460(int param_1,DWORD param_2,byte param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  AnonShape_006BFBF0_13F73F95 *pAVar4;

  iVar3 = param_7 * 0xc4;
  pAVar4 = (AnonShape_006BFBF0_13F73F95 *)(&DAT_00854ff8 + iVar3);
  *(undefined4 *)(&DAT_00855028 + iVar3) = param_5;
  (&DAT_00855024)[param_7 * 0x31] = (uint)param_3;
  *(undefined4 *)(&DAT_0085502c + iVar3) = param_6;
  (&DAT_00855014)[param_7 * 0x31] = param_1;
  (&DAT_00855018)[param_7 * 0x31] = param_2;
  (&DAT_00854ffc)[param_7 * 0x31] = param_4 | 0x2000;
  DVar2 = st::fn_006D4930(*(AnonShape_006D4930_676532DD **)(param_1 + 4),(LPDWORD)param_2,
                       (undefined4 *)(&DAT_00855044 + iVar3),0x3e);
  if (DVar2 == 0) {
    *(uint *)(&DAT_00855020 + iVar3) =
         (-(uint)(*(short *)(&DAT_00855044 + iVar3) != 1) & 0x24) + 0x1a + param_2;
    if ((param_4 & 4) != 0) {
      *(uint *)pAVar4 = *(uint *)pAVar4 | 0x21;
      return;
    }
    iVar3 = st::fn_006BFBF0(pAVar4);
    if (iVar3 == 0) {
      return;
    }
  }
  piVar1 = st::pointer_boundary_cast<int *>((&PTR_00855004)[param_7 * 0x31]);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C2503]: CALL dword ptr [EDX + 0x48] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 0x48))(piVar1);
    /* ST_CALLSITE[006C250F]: CALL dword ptr [EAX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)(&PTR_00855004)[param_7 * 0x31] + 8))((&PTR_00855004)[param_7 * 0x31]);
  }
  for (iVar3 = 0x31; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pAVar4 = 0;
    pAVar4 = (AnonShape_006BFBF0_13F73F95 *)&pAVar4->field_0x4;
  }
  return;
}

// 006C2980 FUN_006c2980
#line 4 "decomp/ST.exe/functions/006C2980/decomp.c"
/* WARNING: Removing unreachable block (ram,0x006c29a8) */

char * st::fn_006C2980(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar4_mg2;
  char *pcVar4_mg0;

  if (param_2 == nullptr) {
    return nullptr;
  }
  uVar3 = 0xffffffff;
  pcVar4_mg0 = param_2;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar4_mg0;
    pcVar4_mg0 = pcVar4_mg0 + 1;
  } while (cVar1 != '\0');
  pcVar4 = param_2 + (~uVar3 - 1);
  do {
    pcVar2 = pcVar4;
    if (pcVar2 <= param_2) break;
    pcVar4 = pcVar2 + -1;
  } while ((*pcVar4 == ' ') || (*pcVar4 == '\t'));
  if ((param_1 != nullptr) && (param_1 != param_2)) {
    uVar5 = (int)pcVar2 - (int)param_2;
    pcVar4_mg2 = param_1;
    memmove(pcVar4_mg2, param_2, uVar5); /* compiler REP MOVS byte copy */
    param_1[uVar5] = '\0';
    return param_1;
  }
  *pcVar2 = '\0';
  return param_2;
}

// 006C2A00 FUN_006c2a00
#line 4 "decomp/ST.exe/functions/006C2A00/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 006C2A00 -> EXTERNAL:0000004F @ 006C2A3F */

undefined4 st::fn_006C2A00(LPVOID lpBuffer)

{
  HANDLE hFile;
  BOOL BVar1;
  undefined4 uVar2;
  DWORD local_8;

  uVar2 = 0;
  /* ST_CALLSITE[006C2A1B]: CALL dword ptr [0x0085bc80] */
  hFile = st::external_00000055(st::pointer_boundary_cast<LPCSTR>(lpBuffer),0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  /* ST_CALLSITE[006C2A3F]: CALL dword ptr [0x0085bc68] */
  BVar1 = st::external_0000004F(hFile,(LPVOID)&lpBuffer,4,st::pointer_boundary_cast<LPDWORD>(&local_8),(LPOVERLAPPED)0x0);
  if ((((BVar1 != 0) && (local_8 == 4)) && ((char)lpBuffer == 'B')) &&
     (((char)((uint)lpBuffer >> 8) == 'I' && (STPiece<2,1>(lpBuffer) == 'K')))) {
    uVar2 = 1;
  }
  /* ST_CALLSITE[006C2A67]: CALL dword ptr [0x0085bbc8] */
  st::external_00000027(hFile);
  return uVar2;
}

// 006C2A80 FUN_006c2a80
#line 4 "decomp/ST.exe/functions/006C2A80/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056ADC0 -> 006C2A80 @ 0056B28E

   [STPrototypeApplier] Propagated return.
   Evidence: 006C2A80 returns zeroed full register at 006C2AAD @ 006C2AB1

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0056ADC0 -> 006C2A80 @ 0056B28E; data at 0080759C */

uint st::fn_006C2A80(int *param_1,DDXContext *param_2)

{
  void *pvVar1;

  *param_1 = 0;
  pvVar1 = st::fn_006AAC10(0xb8);
  if (pvVar1 == nullptr) {
    return 0xfffffffe;
  }
  STField<DDXContext *>(pvVar1,4) = param_2;
  *param_1 = (int)pvVar1;
  return 0;
}

// 006C2AC0 FUN_006c2ac0
#line 1 "decomp/ST.exe/functions/006C2AC0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056C750 -> 006C2AC0 @ 0056C82B */

void st::fn_006C2AC0(int *param_1)

{
  if (param_1 != nullptr) {
    st::fn_006AB060(&param_1);
  }
  return;
}

// 006C2C80 FUN_006c2c80
#line 4 "decomp/ST.exe/functions/006C2C80/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006C2C80(int *param_1)

{
  if (param_1 != nullptr) {
    if (*param_1 != 0) {
      /* ST_CALLSITE[006C2C92]: CALL dword ptr [0x0085bf94] */
      _BinkClose_4(*param_1);
    }
    *param_1 = 0;
    /* ST_CALLSITE[006C2CA4]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)param_1[0xd] + 8))((int *)param_1[0xd]);
    param_1[0xd] = 0;
    param_1[2] = st::machine_word_boundary_cast<int>(param_1[2] & 0xbfffffff);
  }
  return;
}

// 006C3340 FUN_006c3340
#line 4 "decomp/ST.exe/functions/006C3340/decomp.c"
void st::fn_006C3340(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  tagRECT local_18;

  iVar2 = param_1;
  /* ST_CALLSITE[006C3357]: CALL dword ptr [0x0085be58] */
  st::external_0000009C(*(HWND *)(*(int *)(param_1 + 4) + 4),st::pointer_boundary_cast<LPRECT>(&local_18));
  piVar1 = (int *)(param_1 + 4);
  iVar6 = *(int *)(*piVar1 + 0x18);
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = local_18.bottom;
  if (iVar6 < local_18.right) {
    local_18.right = iVar6;
  }
  iVar6 = *(int *)(*piVar1 + 0x1c);
  if (iVar6 < local_18.bottom) {
    param_1 = iVar6;
  }
  iVar3 = *(int *)(iVar2 + 0x40);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  iVar6 = *(int *)(iVar2 + 0x3c);
  uVar5 = *(uint *)(iVar2 + 8) & 0x4000000;
  *(int *)(iVar2 + 0x24) = iVar6;
  *(int *)(iVar2 + 0x28) = iVar3;
  if (uVar5 == 0) {
    iVar4 = param_1;
    iVar7 = local_18.right;
    if ((*(uint *)(iVar2 + 8) & 4) != 0) goto LAB_006c33bb;
  }
  else {
    iVar6 = *(int *)(iVar2 + 0x14);
    iVar3 = *(int *)(iVar2 + 0x18);
  }
  iVar4 = iVar3;
  iVar7 = iVar6;
LAB_006c33bb:
  if (uVar5 == 0) {
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(LONG *)(iVar2 + 0x14) = local_18.right;
    *(int *)(iVar2 + 0x18) = param_1;
  }
  else {
    iVar6 = *(int *)(iVar2 + 0x14);
    if (local_18.right < iVar6) {
      *(LONG *)(iVar2 + 0x14) = local_18.right;
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + (iVar6 - local_18.right) / 2;
    }
    else if (param_1 < *(int *)(iVar2 + 0x18)) {
      *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + (*(int *)(iVar2 + 0x18) - param_1) / 2;
      *(int *)(iVar2 + 0x18) = param_1;
    }
  }
  iVar6 = *(int *)(iVar2 + 0x14);
  if (iVar6 < iVar7) {
    *(int *)(iVar2 + 0x24) = iVar6;
    *(int *)(iVar2 + 0x1c) = (iVar7 - iVar6) / 2;
  }
  iVar6 = *(int *)(iVar2 + 0x18);
  if (iVar6 < iVar4) {
    *(int *)(iVar2 + 0x28) = iVar6;
    *(int *)(iVar2 + 0x20) = (iVar4 - iVar6) / 2;
  }
  if ((((byte *)iVar2)[8] & 4) == 0) {
    iVar6 = *(int *)(iVar2 + 0x24);
    if (iVar7 < iVar6) {
      *(int *)(iVar2 + 0x24) = iVar7;
      *(int *)(iVar2 + 0x1c) = *(int *)(iVar2 + 0x1c) + (iVar6 - iVar7) / 2;
    }
    iVar6 = *(int *)(iVar2 + 0x28);
    if (iVar4 < iVar6) {
      *(int *)(iVar2 + 0x28) = iVar4;
      *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + (iVar6 - iVar4) / 2;
    }
  }
  return;
}

// 006C3480 FUN_006c3480
#line 1 "decomp/ST.exe/functions/006C3480/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C3480 -> EXTERNAL:00000090 @ 006C34EF

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006C3480 -> EXTERNAL:00000090 @ 006C34EF */

LRESULT st::fn_006C3480(HWND hWnd,uint param_2,uint param_3,LPARAM lParam)

{
  LRESULT LVar1;

  if (param_2 < 0x86) {
    if ((param_2 == 0x85) || (param_2 == 0xf)) {
LAB_006c34e5:
      /* ST_CALLSITE[006C34EF]: CALL dword ptr [0x0085be28] */
      LVar1 = st::external_00000090(hWnd,param_2,param_3,lParam);
      return LVar1;
    }
  }
  else if (param_2 != 0x86) {
    if (param_2 == 0x101) {
      if (param_3 == 0x1b) {
        DAT_008568cc = 1;
      }
      goto LAB_006c34e5;
    }
    if ((param_2 == 0x112) && ((param_3 & 0xfff0) != 0xf140)) {
      return 0;
    }
  }
  return 0;
}

// 006C3500 FUN_006c3500
#line 4 "decomp/ST.exe/functions/006C3500/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_006C3500(AnonShape_006C3500_19C01617 *param_1)

{
  int iVar1;
  undefined4 local_80 [26];
  uint local_18;

  iVar1 = param_1->field_0028;
  if (((param_1->field_0004 & 1) != 0) && (*(int *)(iVar1 + 0x40) == 0)) {
    memset(local_80, 0, 0x7c); /* compiler bulk-zero initialization */
    local_80[0] = 0x7c;
    local_18 = st::machine_word_boundary_cast<uint>(param_1->field_002C & 0x4840);
    local_80[1] = 7;
    local_80[3] = *(undefined4 *)(iVar1 + 0x18);
    local_80[2] = *(undefined4 *)(iVar1 + 0x1c);
    /* ST_CALLSITE[006C355E]: CALL dword ptr [ECX + 0x18] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(**(int **)(iVar1 + 0x30) + 0x18))(*(int **)(iVar1 + 0x30),local_80,iVar1 + 0x40,0);
  }
  return;
}

// 006C3570 FUN_006c3570
#line 4 "decomp/ST.exe/functions/006C3570/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=5, used=0), and
   decompilation contains no value return */

void st::fn_006C3570(AnonShape_006C3570_37024033 *param_1)

{
  int *piVar1;

  if (param_1 != nullptr) {
    /* ST_CALLSITE[006C358A]: CALL dword ptr [0x0085bb8c] */
    st::external_00000018((LPCRITICAL_SECTION)&param_1[9].field_0040);
    if ((param_1->field_0004 & 0x20000000) != 0) {
      st::fn_006C4110((AnonShape_006C3FC0_72DDFA27 *)param_1);
    }
    if ((param_1->field_0004 & 0x40000000) != 0) {
      st::fn_006C3F00((int)param_1);
    }
    if ((HANDLE)param_1->field_0084 != (HANDLE)0x0) {
      /* ST_CALLSITE[006C35BA]: CALL dword ptr [0x0085bb6c] */
      st::external_00000010((HANDLE)param_1->field_0084,0);
      param_1->field_0084 = 0;
    }
    piVar1 = (int *)param_1->field_0058;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006C35D0]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1->field_0058 = 0;
    }
    piVar1 = (int *)param_1->field_0054;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006C35E0]: CALL dword ptr [EDX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1->field_0054 = 0;
    }
    if ((int *)param_1->field_0040 != 0) {
      st::fn_006D4F50((int *)param_1->field_0040);
    }
    param_1->field_0040 = 0;
    if ((int *)param_1->field_0044 != 0) {
      st::fn_006D4F50((int *)param_1->field_0044);
    }
    param_1->field_0044 = 0;
    param_1->field_0074 = 0;
    param_1->field_0004 = st::machine_word_boundary_cast<uint>(param_1->field_0004 & 0x7ffffffe);
    /* ST_CALLSITE[006C3616]: CALL dword ptr [0x0085bb90] */
    st::external_00000019((LPCRITICAL_SECTION)&param_1[9].field_0040);
  }
  return;
}

// 006C3630 FUN_006c3630
#line 4 "decomp/ST.exe/functions/006C3630/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 006C3630 -> EXTERNAL:00000011 @ 006C36CB */

DWORD st::fn_006C3630(LPDWORD lpThreadId)

{
  undefined4 *puVar1;
  int *piVar2;
  LPDWORD lpParameter;
  DWORD DVar3;
  HANDLE pvVar4;

  lpParameter = lpThreadId;
  if ((lpThreadId[1] & 0x80000000) != 0) {
    st::fn_006C3570((AnonShape_006C3570_37024033 *)lpThreadId);
  }
  /* ST_CALLSITE[006C365A]: CALL dword ptr [0x0085c0e4] */
  DVar3 = st::external_000000D0((IID *)&DAT_007a10e8,(LPUNKNOWN)0x0,1,(IID *)&DAT_007a10f8,
                           (LPVOID *)(lpParameter + 0x15));
  if (-1 < (int)DVar3) {
    puVar1 = (undefined4 *)lpParameter[0x15];
    /* ST_CALLSITE[006C3678]: CALL dword ptr [ECX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    DVar3 = (**(code **)*puVar1)(puVar1,&DAT_007a10d8,lpParameter + 0x16);
    if (DVar3 == 0) {
      piVar2 = (int *)lpParameter[0x16];
      /* ST_CALLSITE[006C368D]: CALL dword ptr [EDX + 0x1c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      DVar3 = (**(code **)(*piVar2 + 0x1c))(piVar2,lpParameter + 0x1d);
      if (-1 < (int)DVar3) {
        DVar3 = st::fn_006D4EF0(st::pointer_boundary_cast<undefined4 *>(lpParameter + 0x10),st::machine_word_boundary_cast<undefined4>(lpParameter + 0x12),(int)lpParameter);
        if (DVar3 == 0) {
          DVar3 = st::fn_006D4F70(st::pointer_boundary_cast<undefined4 *>(lpParameter + 0x11),st::machine_word_boundary_cast<undefined4>(lpParameter + 0x13),st::machine_word_boundary_cast<undefined4>(lpParameter));
          if (DVar3 == 0) {
            /* ST_CALLSITE[006C36CB]: CALL dword ptr [0x0085bb70] */
            pvVar4 = st::external_00000011((LPSECURITY_ATTRIBUTES)0x0,0,st::function_address_boundary_cast<LPTHREAD_START_ROUTINE>(st::fn_006C3720),st::pointer_boundary_cast<LPVOID>(lpParameter),0,
                                  (LPDWORD)&lpThreadId);
            lpParameter[0x21] = (DWORD)pvVar4;
            if (pvVar4 != (HANDLE)0x0) {
              lpParameter[1] = lpParameter[1] | 0x80000000;
              return 0;
            }
            /* ST_CALLSITE[006C36DB]: CALL dword ptr [0x0085bbcc] */
            DVar3 = st::external_00000028();
            if (DVar3 == 0) {
              st::fn_006C3570((AnonShape_006C3570_37024033 *)lpParameter);
              return 0xffffff03;
            }
          }
        }
      }
    }
  }
  st::fn_006C3570((AnonShape_006C3570_37024033 *)lpParameter);
  return DVar3;
}

// 006C3720 FUN_006c3720
#line 4 "decomp/ST.exe/functions/006C3720/decomp.c"
undefined4 st::fn_006C3720(WPARAM param_1)

{
  uint uVar1;
  WPARAM WVar2;
  LPARAM lParam;
  DWORD DVar3;
  int iVar4;
  undefined1 local_c [4];
  LPARAM local_8;

  WVar2 = param_1;
  /* ST_CALLSITE[006C3731]: CALL dword ptr [0x0085bce0] */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  DVar3 = st::external_0000006D(*(HANDLE *)(param_1 + 0x74),0xffffffff);
  while (DVar3 == 0) {
    /* ST_CALLSITE[006C3747]: CALL dword ptr [0x0085bb8c] */
    st::external_00000018((LPCRITICAL_SECTION)(WVar2 + 0x508));
    /* ST_CALLSITE[006C3761]: CALL dword ptr [ECX + 0x20] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar4 = (**(code **)(**(int **)(WVar2 + 0x58) + 0x20))
                      (*(int **)(WVar2 + 0x58),&param_1,&local_8,local_c,0);
    lParam = local_8;
    if (iVar4 == 0) {
      uVar1 = *(uint *)(WVar2 + 4);
      if (((int)param_1 < 1) || (3 < (int)param_1)) {
        param_1 = 0;
      }
      else {
        st::fn_006C4110((AnonShape_006C3FC0_72DDFA27 *)WVar2);
        if ((param_1 != 0) && ((uVar1 & 0x20000000) != 0)) {
          /* ST_CALLSITE[006C379C]: CALL dword ptr [0x0085be5c] */
          st::external_0000009D(*(HWND *)(WVar2 + 0x78),*(UINT *)(WVar2 + 0x80),param_1,lParam);
        }
      }
    }
    /* ST_CALLSITE[006C37A9]: CALL dword ptr [0x0085bb90] */
    st::external_00000019((LPCRITICAL_SECTION)(WVar2 + 0x508));
    /* ST_CALLSITE[006C37B5]: CALL dword ptr [0x0085bce0] */
    DVar3 = st::external_0000006D(*(HANDLE *)(WVar2 + 0x74),0xffffffff);
  }
  /* ST_CALLSITE[006C37C7]: CALL dword ptr [0x0085bb8c] */
  st::external_00000018((LPCRITICAL_SECTION)(WVar2 + 0x508));
  *(undefined4 *)(WVar2 + 0x84) = 0;
  /* ST_CALLSITE[006C37D8]: CALL dword ptr [0x0085bb90] */
  st::external_00000019((LPCRITICAL_SECTION)(WVar2 + 0x508));
  return 0;
}

// 006C3AA0 FUN_006c3aa0
#line 1 "decomp/ST.exe/functions/006C3AA0/decomp.c"

void st::fn_006C3AA0(int *param_1)

{
  int iVar1;

  st::fn_006C3570((AnonShape_006C3570_37024033 *)param_1);
  /* ST_CALLSITE[006C3AB4]: CALL dword ptr [0x0085bb84] */
  st::external_00000016((LPCRITICAL_SECTION)(param_1 + 0x142));
  st::fn_006B98C0((int *)&DAT_008568d0,param_1);
  iVar1 = st::fn_006C38D0(st::pointer_boundary_cast<undefined4 *>(DAT_008568d0),param_1[0x1e]);
  if (iVar1 == 0) {
    /* ST_CALLSITE[006C3AE6]: CALL dword ptr [0x0085be60] */
    st::external_0000009E((HWND)param_1[0x1e],-4,param_1[0x22]);
  }
  st::fn_006A5E90((short *)param_1);
  /* ST_CALLSITE[006C3AF2]: CALL dword ptr [0x0085c0e0] */
  st::external_000000CF();
  return;
}

// 006C3F00 FUN_006c3f00
#line 4 "decomp/ST.exe/functions/006C3F00/decomp.c"
undefined4 st::fn_006C3F00(int param_1)

{
  int *piVar1;

  /* ST_CALLSITE[006C3F10]: CALL dword ptr [0x0085bb8c] */
  st::external_00000018((LPCRITICAL_SECTION)(param_1 + 0x508));
  piVar1 = *(int **)(param_1 + 100);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C3F22]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 100) = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x60);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C3F32]: CALL dword ptr [EDX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x5c);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C3F42]: CALL dword ptr [ECX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = *(int **)(param_1 + 0x50);
  if (piVar1 != nullptr) {
    /* ST_CALLSITE[006C3F52]: CALL dword ptr [EDX + 0x8] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  st::fn_006C3500((AnonShape_006C3500_19C01617 *)param_1);
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xbffffffe;
  st::fn_006C3570((AnonShape_006C3570_37024033 *)param_1);
  /* ST_CALLSITE[006C3F71]: CALL dword ptr [0x0085bb90] */
  st::external_00000019((LPCRITICAL_SECTION)(param_1 + 0x508));
  return 0;
}

// 006C3F80 FUN_006c3f80
#line 4 "decomp/ST.exe/functions/006C3F80/decomp.c"
void st::fn_006C3F80(AnonShape_006C3F80_1EACF9F3 *param_1,undefined4 param_2,undefined4 param_3,
                 undefined4 param_4,undefined4 param_5)

{
  if ((param_1->field_0004 & 2) == 0) {
    param_1->field_0008 = param_2;
    param_1->field_000C = param_3;
    param_1->field_0010 = param_4;
    param_1->field_0014 = param_5;
    param_1->field_0004 = st::machine_word_boundary_cast<uint>(param_1->field_0004 | 0x8000000);
    st::fn_006C3D80((AnonShape_006C3D80_5E5410BE *)param_1);
  }
  return;
}

// 006C3FC0 FUN_006c3fc0
#line 4 "decomp/ST.exe/functions/006C3FC0/decomp.c"
void st::fn_006C3FC0(AnonShape_006C3FC0_72DDFA27 *param_1,undefined4 param_2,undefined4 param_3,
                 undefined4 param_4,undefined4 param_5)

{
  param_1->field_0018 = param_2;
  param_1->field_001C = param_3;
  if ((param_1->field_0004 & 2) == 0) {
    param_1->field_0020 = param_4;
    param_1->field_0024 = param_5;
  }
  param_1->field_0004 = st::machine_word_boundary_cast<uint>(param_1->field_0004 | 0x4000000);
  st::fn_006C3D80((AnonShape_006C3D80_5E5410BE *)param_1);
  return;
}

// 006C4480 FUN_006c4480
#line 4 "decomp/ST.exe/functions/006C4480/decomp.c"
void st::fn_006C4480(AnonShape_006C4480_8B824940 *param_1,undefined4 *param_2)

{
  if ((param_1->field_0008 & 0x4000000) != 0) {
    /* ST_CALLSITE[006C4497]: CALL dword ptr [0x0085bb8c] */
    st::external_00000018((LPCRITICAL_SECTION)&param_1[1].field_0x2c);
  }
  *param_2 = param_1->field_0040;
  param_2[2] = param_1->field_0010;
  param_2[3] = param_1->field_0014;
  param_2[1] = param_1->field_04C0;
  if ((param_1->field_0008 & 0x4000000) != 0) {
    /* ST_CALLSITE[006C44CB]: CALL dword ptr [0x0085bb90] */
    st::external_00000019((LPCRITICAL_SECTION)&param_1[1].field_0x2c);
  }
  return;
}

// 006C49B0 FUN_006c49b0
#line 4 "decomp/ST.exe/functions/006C49B0/decomp.c"
char * st::fn_006C49B0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar5;
  char *pcVar6;
  char *pcVar2_mg1;
  char *pcVar5_mg0;

  pcVar2 = nullptr;
  if (param_1 != nullptr) {
    uVar3 = 0xffffffff;
    pcVar2_mg1 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2_mg1;
      pcVar2_mg1 = pcVar2_mg1 + 1;
    } while (cVar1 != '\0');
    pcVar2 = st::pointer_boundary_cast<char *>(st::fn_006AAC70(~uVar3));
    if (pcVar2 != nullptr) {
      uVar3 = 0xffffffff;
      do {
        pcVar5_mg0 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5_mg0 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar5_mg0;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5_mg0 + -uVar3;
      pcVar6 = pcVar2;
      memmove(pcVar6, pcVar5, uVar3); /* compiler REP MOVS byte copy */
    }
  }
  return pcVar2;
}

// 006C4A00 FUN_006c4a00
#line 4 "decomp/ST.exe/functions/006C4A00/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006C4A00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (param_1 != nullptr) {
    *param_1 = param_3;
    param_1[1] = param_4;
    param_1[0xc] = param_2;
  }
  return;
}

// 006C4A70 FUN_006c4a70
#line 4 "decomp/ST.exe/functions/006C4A70/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_006C4A70(undefined4 *param_1)

{
  if (param_1 != nullptr) {
    st::fn_006D46A0((undefined4 *)param_1[7],0);
    st::fn_006A5E90((short *)param_1);
  }
  return;
}

// 006C4AA0 FUN_006c4aa0
#line 1 "decomp/ST.exe/functions/006C4AA0/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_006C4AA0(AnonShape_006C4AA0_6E9A3AA4 *param_1)

{
  param_1->field_0018 = 0xffffffff;
  param_1->field_0020 = param_1->field_0028;
  return;
}

// 006C5210 FUN_006c5210
#line 4 "decomp/ST.exe/functions/006C5210/decomp.c"
int st::fn_006C5210(AnonShape_006C5210_E9B30C00 *param_1,undefined4 param_2,int param_3,int param_4,
                undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_28;
  undefined4 local_14;
  int local_10;
  int local_c;
  int local_8;

  local_28 = param_5;
  uVar2 = 0;
  local_78[0] = 100;
  if (param_1->field_0498 == 7) {
    uVar2 = 0x20000;
    local_70 = 0x5a0049;
  }
  local_14 = param_2;
  local_10 = param_3;
  local_c = param_4 + 1;
  local_8 = param_3 + 1;
  uVar3 = 0;
  while( true ) {
    /* ST_CALLSITE[006C5279]: CALL dword ptr [ECX + 0x14] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*param_1->field_0040 + 0x14))
                      /* ST_CALLSITE[006C5279]: CALL dword ptr [ECX + 0x14] */
                      (param_1->field_0040,&local_14,0,0,uVar2 | 0x1000400,local_78);
    if (iVar1 == 0) break;
    if (iVar1 == -0x7789fe3e) {
      st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)param_1);
    }
    else {
      if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (uVar3 != 0)) break;
      st::external_00000050(2);
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) break;
  }
  if ((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) {
    return iVar1;
  }
  return 0;
}

// 006C52E0 FUN_006c52e0
#line 4 "decomp/ST.exe/functions/006C52E0/decomp.c"
int st::fn_006C52E0(AnonShape_006C52E0_B18BC6D0 *param_1,int param_2,undefined4 param_3,int param_4,
                undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined4 local_28;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;

  local_28 = param_5;
  uVar2 = 0;
  local_78[0] = 100;
  if (param_1->field_0498 == 7) {
    uVar2 = 0x20000;
    local_70 = 0x5a0049;
  }
  local_14 = param_2;
  local_c = param_2 + 1;
  local_8 = param_4 + 1;
  uVar3 = 0;
  local_10 = param_3;
  while( true ) {
    /* ST_CALLSITE[006C5349]: CALL dword ptr [EDX + 0x14] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar1 = (**(code **)(*param_1->field_0040 + 0x14))
                      /* ST_CALLSITE[006C5349]: CALL dword ptr [EDX + 0x14] */
                      (param_1->field_0040,&local_14,0,0,uVar2 | 0x1000400,local_78);
    if (iVar1 == 0) break;
    if (iVar1 == -0x7789fe3e) {
      st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)param_1);
    }
    else {
      if (((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) || (uVar3 != 0)) break;
      st::external_00000050(2);
    }
    uVar3 = uVar3 + 1;
    if (1 < uVar3) break;
  }
  if ((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) {
    return iVar1;
  }
  return 0;
}

// 006C59E0 FUN_006c59e0
#line 4 "decomp/ST.exe/functions/006C59E0/decomp.c"
uint __cdecl st::fn_006C59E0(uint param_1)

{
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uint in_EAX;
  int iVar1;
  bool bVar2;

  iVar1 = 0x20;
  do {
    bVar2 = (param_1 & 1) != 0;
    param_1 = param_1 >> 1 | (uint)bVar2 << 0x1f;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    in_EAX = in_EAX << 1 | (uint)bVar2;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  return in_EAX;
}

// 006C5A10 FUN_006c5a10
#line 1 "decomp/ST.exe/functions/006C5A10/decomp.c"

void st::fn_006C5A10(AnonShape_006C5A10_DB2339A4 *param_1,ushort *param_2,uint param_3,uint param_4,
                 uint param_5,ushort param_6,int param_7)

{
  if ((param_1->field_049C & 1) == 0) {
    if (param_1->field_0498 != 7) {
      st::fn_006CE6C0(param_2,param_3,param_6);
      return;
    }
    if (param_3 != 0) {
      do {
        *param_2 = *param_2 ^ param_6;
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
  }
  else if (param_1->field_0498 == 7) {
    if (param_3 != 0) {
      do {
        if ((param_5 & param_4) == 0) {
          if (param_7 != -1) {
            *param_2 = *param_2 ^ (ushort)param_7;
          }
        }
        else {
          *param_2 = *param_2 ^ param_6;
        }
        param_2 = param_2 + 1;
        param_5 = param_5 >> 1;
        if (param_5 == 0) {
          param_5 = 0x80000000;
        }
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if ((param_5 & param_4) == 0) {
        if (param_7 != -1) {
          *param_2 = (ushort)param_7;
        }
      }
      else {
        *param_2 = param_6;
      }
      param_2 = param_2 + 1;
      param_5 = param_5 >> 1;
      if (param_5 == 0) {
        param_5 = 0x80000000;
      }
    }
  }
  return;
}

// 006C5B00 FUN_006c5b00
#line 4 "decomp/ST.exe/functions/006C5B00/decomp.c"
void st::fn_006C5B00(AnonShape_006C5B00_75F2A72F *param_1,byte *param_2,uint param_3,uint param_4,
                 uint param_5,byte param_6,int param_7)

{
  uint uVar1;

  if ((param_1->field_049C & 1) == 0) {
    if (param_1->field_0498 != 7) {
      for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(uint *)param_2 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
        param_2 = param_2 + 4;
      }
      for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *param_2 = param_6;
        param_2 = param_2 + 1;
      }
      return;
    }
    if (param_3 != 0) {
      do {
        *param_2 = *param_2 ^ param_6;
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
  }
  else if (param_1->field_0498 == 7) {
    if (param_3 != 0) {
      do {
        if ((param_5 & param_4) == 0) {
          if (param_7 != -1) {
            *param_2 = *param_2 ^ (byte)param_7;
          }
        }
        else {
          *param_2 = *param_2 ^ param_6;
        }
        param_2 = param_2 + 1;
        param_5 = param_5 >> 1;
        if (param_5 == 0) {
          param_5 = 0x80000000;
        }
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if ((param_5 & param_4) == 0) {
        if (param_7 != -1) {
          *param_2 = (byte)param_7;
        }
      }
      else {
        *param_2 = param_6;
      }
      param_2 = param_2 + 1;
      param_5 = param_5 >> 1;
      if (param_5 == 0) {
        param_5 = 0x80000000;
      }
    }
  }
  return;
}

// 006C5BF0 FUN_006c5bf0
#line 1 "decomp/ST.exe/functions/006C5BF0/decomp.c"

void st::fn_006C5BF0(AnonShape_006C5BF0_474F0272 *param_1,ushort *param_2,int param_3,int param_4,
                 uint param_5,uint param_6,ushort param_7,int param_8)

{
  if ((param_1->field_049C & 1) == 0) {
    if (param_1->field_0498 == 7) {
      if (param_4 != 0) {
        do {
          *param_2 = *param_2 ^ param_7;
          param_2 = (ushort *)((int)param_2 + param_3);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return;
      }
    }
    else if (param_4 != 0) {
      do {
        *param_2 = param_7;
        param_2 = (ushort *)((int)param_2 + param_3);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else if (param_1->field_0498 == 7) {
    if (param_4 != 0) {
      do {
        if ((param_5 & param_6) == 0) {
          if (param_8 != -1) {
            *param_2 = *param_2 ^ (ushort)param_8;
          }
        }
        else {
          *param_2 = *param_2 ^ param_7;
        }
        param_2 = (ushort *)((int)param_2 + param_3);
        param_6 = param_6 >> 1;
        if (param_6 == 0) {
          param_6 = 0x80000000;
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      if ((param_5 & param_6) == 0) {
        if (param_8 != -1) {
          *param_2 = (ushort)param_8;
        }
      }
      else {
        *param_2 = param_7;
      }
      param_2 = (ushort *)((int)param_2 + param_3);
      param_6 = param_6 >> 1;
      if (param_6 == 0) {
        param_6 = 0x80000000;
      }
    }
  }
  return;
}

// 006C5D00 FUN_006c5d00
#line 1 "decomp/ST.exe/functions/006C5D00/decomp.c"

void st::fn_006C5D00(AnonShape_006C5D00_C5C8A2E6 *param_1,byte *param_2,int param_3,int param_4,
                 uint param_5,uint param_6,byte param_7,int param_8)

{
  if ((param_1->field_049C & 1) == 0) {
    if (param_1->field_0498 == 7) {
      if (param_4 != 0) {
        do {
          *param_2 = *param_2 ^ param_7;
          param_2 = param_2 + param_3;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return;
      }
    }
    else if (param_4 != 0) {
      do {
        *param_2 = param_7;
        param_2 = param_2 + param_3;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else if (param_1->field_0498 == 7) {
    if (param_4 != 0) {
      do {
        if ((param_5 & param_6) == 0) {
          if (param_8 != -1) {
            *param_2 = *param_2 ^ (byte)param_8;
          }
        }
        else {
          *param_2 = *param_2 ^ param_7;
        }
        param_2 = param_2 + param_3;
        param_6 = param_6 >> 1;
        if (param_6 == 0) {
          param_6 = 0x80000000;
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      if ((param_5 & param_6) == 0) {
        if (param_8 != -1) {
          *param_2 = (byte)param_8;
        }
      }
      else {
        *param_2 = param_7;
      }
      param_2 = param_2 + param_3;
      param_6 = param_6 >> 1;
      if (param_6 == 0) {
        param_6 = 0x80000000;
      }
    }
  }
  return;
}

// 006C5E00 FUN_006c5e00
#line 1 "decomp/ST.exe/functions/006C5E00/decomp.c"

void st::fn_006C5E00(AnonShape_006C5E00_04F0C4FF *param_1,ushort *param_2,int param_3,int param_4,
                 int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,
                 uint param_11,uint param_12,ushort param_13,uint param_14)

{
  uint uVar1;

  if ((param_1->field_049C & 1) == 0) {
    if (param_1->field_0498 == 7) {
      if (param_4 <= param_6) {
        while (param_5 <= param_7) {
          *param_2 = *param_2 ^ param_13;
          if (-1 < param_8) {
            param_2 = (ushort *)((int)param_2 + param_3);
            param_8 = param_8 - param_10;
            param_5 = param_5 + 1;
          }
          param_2 = param_2 + 1;
          param_8 = param_8 + param_9;
          param_4 = param_4 + 1;
          if (param_6 < param_4) {
            return;
          }
        }
      }
    }
    else if (param_4 <= param_6) {
      while (param_5 <= param_7) {
        *param_2 = param_13;
        if (-1 < param_8) {
          param_2 = (ushort *)((int)param_2 + param_3);
          param_8 = param_8 - param_10;
          param_5 = param_5 + 1;
        }
        param_2 = param_2 + 1;
        param_8 = param_8 + param_9;
        param_4 = param_4 + 1;
        if (param_6 < param_4) {
          return;
        }
      }
    }
  }
  else if (param_1->field_0498 == 7) {
    if (param_4 <= param_6) {
      while (param_5 <= param_7) {
        if ((param_11 & param_12) == 0) {
          uVar1 = param_14;
          if (param_14 != 0xffffffff) goto LAB_006c5ef3;
        }
        else {
          uVar1 = (uint)param_13;
LAB_006c5ef3:
          *param_2 = *param_2 ^ (ushort)uVar1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_12 = param_12 >> 1;
        if (param_12 == 0) {
          param_12 = 0x80000000;
        }
        if (-1 < param_8) {
          param_2 = (ushort *)((int)param_2 + param_3);
          param_8 = param_8 - param_10;
          param_5 = param_5 + 1;
        }
        param_2 = param_2 + 1;
        param_8 = param_8 + param_9;
        param_4 = param_4 + 1;
        if (param_6 < param_4) {
          return;
        }
      }
    }
  }
  else {
    while ((param_4 <= param_6 && (param_5 <= param_7))) {
      if ((param_11 & param_12) == 0) {
        uVar1 = param_14;
        if (param_14 != 0xffffffff) goto LAB_006c5f55;
      }
      else {
        uVar1 = (uint)param_13;
LAB_006c5f55:
        *param_2 = (ushort)uVar1;
      }
      param_12 = param_12 >> 1;
      if (param_12 == 0) {
        param_12 = 0x80000000;
      }
      if (-1 < param_8) {
        param_2 = (ushort *)((int)param_2 + param_3);
        param_8 = param_8 - param_10;
        param_5 = param_5 + 1;
      }
      param_2 = param_2 + 1;
      param_8 = param_8 + param_9;
      param_4 = param_4 + 1;
    }
  }
  return;
}

// 006C5F90 FUN_006c5f90
#line 1 "decomp/ST.exe/functions/006C5F90/decomp.c"

void st::fn_006C5F90(AnonShape_006C5F90_8AFC020B *param_1,byte *param_2,int param_3,int param_4,
                 int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,
                 uint param_11,uint param_12,byte param_13,uint param_14)

{
  uint uVar1;

  if ((param_1->field_049C & 1) == 0) {
    if (param_1->field_0498 == 7) {
      if (param_4 <= param_6) {
        while (param_5 <= param_7) {
          *param_2 = *param_2 ^ param_13;
          if (-1 < param_8) {
            param_8 = param_8 - param_10;
            param_2 = param_2 + param_3;
            param_5 = param_5 + 1;
          }
          param_2 = param_2 + 1;
          param_8 = param_8 + param_9;
          param_4 = param_4 + 1;
          if (param_6 < param_4) {
            return;
          }
        }
      }
    }
    else if (param_4 <= param_6) {
      while (param_5 <= param_7) {
        *param_2 = param_13;
        if (-1 < param_8) {
          param_8 = param_8 - param_10;
          param_2 = param_2 + param_3;
          param_5 = param_5 + 1;
        }
        param_2 = param_2 + 1;
        param_8 = param_8 + param_9;
        param_4 = param_4 + 1;
        if (param_6 < param_4) {
          return;
        }
      }
    }
  }
  else if (param_1->field_0498 == 7) {
    if (param_4 <= param_6) {
      while (param_5 <= param_7) {
        if ((param_11 & param_12) == 0) {
          uVar1 = param_14;
          if (param_14 != 0xffffffff) goto LAB_006c6077;
        }
        else {
          uVar1 = (uint)param_13;
LAB_006c6077:
          *param_2 = *param_2 ^ (byte)uVar1;
        }
        param_12 = param_12 >> 1;
        if (param_12 == 0) {
          param_12 = 0x80000000;
        }
        if (-1 < param_8) {
          param_2 = param_2 + param_3;
          param_8 = param_8 - param_10;
          param_5 = param_5 + 1;
        }
        param_2 = param_2 + 1;
        param_8 = param_8 + param_9;
        param_4 = param_4 + 1;
        if (param_6 < param_4) {
          return;
        }
      }
    }
  }
  else {
    while ((param_4 <= param_6 && (param_5 <= param_7))) {
      if ((param_11 & param_12) == 0) {
        uVar1 = param_14;
        if (param_14 != 0xffffffff) goto LAB_006c60cd;
      }
      else {
        uVar1 = (uint)param_13;
LAB_006c60cd:
        *param_2 = (byte)uVar1;
      }
      param_12 = param_12 >> 1;
      if (param_12 == 0) {
        param_12 = 0x80000000;
      }
      if (-1 < param_8) {
        param_2 = param_2 + param_3;
        param_8 = param_8 - param_10;
        param_5 = param_5 + 1;
      }
      param_2 = param_2 + 1;
      param_8 = param_8 + param_9;
      param_4 = param_4 + 1;
    }
  }
  return;
}

// 006C6100 FUN_006c6100
#line 1 "decomp/ST.exe/functions/006C6100/decomp.c"

void st::fn_006C6100(AnonShape_006C6100_D1CCA835 *param_1,ushort *param_2,int param_3,int param_4,
                 int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,
                 uint param_11,uint param_12,ushort param_13,uint param_14)

{
  uint uVar1;

  if ((param_1->field_049C & 1) == 0) {
    if (param_1->field_0498 == 7) {
      if (param_4 <= param_6) {
        while (param_5 <= param_7) {
          *param_2 = *param_2 ^ param_13;
          if (-1 < param_8) {
            param_2 = param_2 + 1;
            param_8 = param_8 - param_9;
            param_4 = param_4 + 1;
          }
          param_8 = param_8 + param_10;
          param_2 = (ushort *)((int)param_2 + param_3);
          param_5 = param_5 + 1;
          if (param_6 < param_4) {
            return;
          }
        }
      }
    }
    else if (param_4 <= param_6) {
      while (param_5 <= param_7) {
        *param_2 = param_13;
        if (-1 < param_8) {
          param_2 = param_2 + 1;
          param_8 = param_8 - param_9;
          param_4 = param_4 + 1;
        }
        param_8 = param_8 + param_10;
        param_2 = (ushort *)((int)param_2 + param_3);
        param_5 = param_5 + 1;
        if (param_6 < param_4) {
          return;
        }
      }
    }
  }
  else if (param_1->field_0498 == 7) {
    if (param_4 <= param_6) {
      while (param_5 <= param_7) {
        if ((param_11 & param_12) == 0) {
          uVar1 = param_14;
          if (param_14 != 0xffffffff) goto LAB_006c61f3;
        }
        else {
          uVar1 = (uint)param_13;
LAB_006c61f3:
          *param_2 = *param_2 ^ (ushort)uVar1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_12 = param_12 >> 1;
        if (param_12 == 0) {
          param_12 = 0x80000000;
        }
        if (-1 < param_8) {
          param_2 = param_2 + 1;
          param_8 = param_8 - param_9;
          param_4 = param_4 + 1;
        }
        param_8 = param_8 + param_10;
        param_2 = (ushort *)((int)param_2 + param_3);
        param_5 = param_5 + 1;
        if (param_6 < param_4) {
          return;
        }
      }
    }
  }
  else {
    for (; (param_4 <= param_6 && (param_5 <= param_7)); param_5 = param_5 + 1) {
      if ((param_11 & param_12) == 0) {
        uVar1 = param_14;
        if (param_14 != 0xffffffff) goto LAB_006c6255;
      }
      else {
        uVar1 = (uint)param_13;
LAB_006c6255:
        *param_2 = (ushort)uVar1;
      }
      param_12 = param_12 >> 1;
      if (param_12 == 0) {
        param_12 = 0x80000000;
      }
      if (-1 < param_8) {
        param_2 = param_2 + 1;
        param_8 = param_8 - param_9;
        param_4 = param_4 + 1;
      }
      param_8 = param_8 + param_10;
      param_2 = (ushort *)((int)param_2 + param_3);
    }
  }
  return;
}

// 006C6290 FUN_006c6290
#line 1 "decomp/ST.exe/functions/006C6290/decomp.c"

void st::fn_006C6290(AnonShape_006C6290_2B502C58 *param_1,byte *param_2,int param_3,int param_4,
                 int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,
                 uint param_11,uint param_12,byte param_13,uint param_14)

{
  uint uVar1;

  if ((param_1->field_049C & 1) == 0) {
    if (param_1->field_0498 == 7) {
      if (param_4 <= param_6) {
        while (param_5 <= param_7) {
          *param_2 = *param_2 ^ param_13;
          if (-1 < param_8) {
            param_2 = param_2 + 1;
            param_8 = param_8 - param_9;
            param_4 = param_4 + 1;
          }
          param_8 = param_8 + param_10;
          param_2 = param_2 + param_3;
          param_5 = param_5 + 1;
          if (param_6 < param_4) {
            return;
          }
        }
      }
    }
    else if (param_4 <= param_6) {
      while (param_5 <= param_7) {
        *param_2 = param_13;
        if (-1 < param_8) {
          param_2 = param_2 + 1;
          param_8 = param_8 - param_9;
          param_4 = param_4 + 1;
        }
        param_8 = param_8 + param_10;
        param_2 = param_2 + param_3;
        param_5 = param_5 + 1;
        if (param_6 < param_4) {
          return;
        }
      }
    }
  }
  else if (param_1->field_0498 == 7) {
    if (param_4 <= param_6) {
      while (param_5 <= param_7) {
        if ((param_11 & param_12) == 0) {
          uVar1 = param_14;
          if (param_14 != 0xffffffff) goto LAB_006c637a;
        }
        else {
          uVar1 = (uint)param_13;
LAB_006c637a:
          *param_2 = *param_2 ^ (byte)uVar1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_12 = param_12 >> 1;
        if (param_12 == 0) {
          param_12 = 0x80000000;
        }
        if (-1 < param_8) {
          param_2 = param_2 + 1;
          param_8 = param_8 - param_9;
          param_4 = param_4 + 1;
        }
        param_8 = param_8 + param_10;
        param_2 = param_2 + param_3;
        param_5 = param_5 + 1;
        if (param_6 < param_4) {
          return;
        }
      }
    }
  }
  else {
    for (; (param_4 <= param_6 && (param_5 <= param_7)); param_5 = param_5 + 1) {
      if ((param_11 & param_12) == 0) {
        uVar1 = param_14;
        if (param_14 != 0xffffffff) goto LAB_006c63d8;
      }
      else {
        uVar1 = (uint)param_13;
LAB_006c63d8:
        *param_2 = (byte)uVar1;
      }
      param_12 = param_12 >> 1;
      if (param_12 == 0) {
        param_12 = 0x80000000;
      }
      if (-1 < param_8) {
        param_2 = param_2 + 1;
        param_8 = param_8 - param_9;
        param_4 = param_4 + 1;
      }
      param_8 = param_8 + param_10;
      param_2 = param_2 + param_3;
    }
  }
  return;
}

// 006C6410 FUN_006c6410
#line 1 "decomp/ST.exe/functions/006C6410/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006B94E0 -> 006C6410 @ 006B9577 */

int st::fn_006C6410(AnonShape_006B94E0_A7E74DF0 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;

  iVar1 = param_1->field_04A0;
  uVar2 = *(uint *)&param_1->field_0x49c & 0xfffffffe;
  param_1->field_04A0 = param_2;
  *(uint *)&param_1->field_0x49c = uVar2;
  if (param_2 != -1) {
    *(uint *)&param_1->field_0x49c = uVar2 | 1;
  }
  return iVar1;
}

// 006C6450 FUN_006c6450
#line 4 "decomp/ST.exe/functions/006C6450/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006B94E0 -> 006C6450 @ 006B956D */

undefined4 st::fn_006C6450(AnonShape_006B94E0_A7E74DF0 *param_1,undefined4 param_2)

{
  undefined4 uVar1;

  uVar1 = param_1->field_04A4;
  param_1->field_04A4 = param_2;
  return uVar1;
}

// 006C6850 FUN_006c6850
#line 4 "decomp/ST.exe/functions/006C6850/decomp.c"
void st::fn_006C6850(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (param_4 < 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = param_2 + 1 + param_4;
    param_4 = -param_4;
  }
  if (param_5 < 0) {
    param_3 = param_3 + 1 + param_5;
    param_5 = -param_5;
  }
  iVar3 = param_2 + -1 + param_4;
  iVar1 = param_3 + -1 + param_5;
  iVar2 = st::fn_006C53B0(param_1,param_2,param_3,iVar3 + -1,param_3,param_6);
  if (((iVar2 == 0) &&
      (iVar2 = st::fn_006C53B0(param_1,iVar3,param_3,iVar3,iVar1 + -1,param_6),
      iVar2 == 0)) &&
     (iVar3 = st::fn_006C53B0(param_1,iVar3,iVar1,param_2 + 1,iVar1,param_6),
     iVar3 == 0)) {
    st::fn_006C53B0(param_1,param_2,iVar1,param_2,param_3 + 1,param_6);
  }
  return;
}

// 006C6A60 FUN_006c6a60
#line 1 "decomp/ST.exe/functions/006C6A60/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C6A60 -> 006BC360 @ 006C6A76 */

void st::fn_006C6A60(ushort *param_1)

{
  LOGPALETTE local_408 [128];

  st::fn_006BC360(param_1,st::pointer_boundary_cast<undefined4 *>(local_408[0].palPalEntry),nullptr);
  st::fn_006D7CF0(local_408);
  return;
}

// 006C6A90 FUN_006c6a90
#line 1 "decomp/ST.exe/functions/006C6A90/decomp.c"

void st::fn_006C6A90(int *param_1,int param_2,int param_3)

{
  if (*param_1 == -1) {
    *param_1 = (param_2 - param_1[2]) / 2;
  }
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  if (param_1[1] == -1) {
    param_1[1] = (param_3 - param_1[3]) / 2;
  }
  if (param_1[1] < 0) {
    param_1[1] = 0;
  }
  return;
}

// 006C6AE0 FUN_006c6ae0
#line 4 "decomp/ST.exe/functions/006C6AE0/decomp.c"
int st::fn_006C6AE0(AnonShape_006C6AE0_9C4F43C2 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  short local_14;
  short local_12;
  byte local_10;
  undefined1 local_f;
  short local_c;
  short local_a;
  short local_8;

  /* ST_CALLSITE[006C6AF3]: CALL dword ptr [ESI + 0x42] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (*(code *)param_1->field_0042)(param_1,&local_c,6);
  if (iVar2 == 6) {
    if (local_c != 0x4947) {
      return -5;
    }
    if (local_a != 0x3846) {
      return -5;
    }
    if ((local_8 != 0x6137) && (local_8 != 0x6139)) {
      return -5;
    }
    /* ST_CALLSITE[006C6B32]: CALL dword ptr [ESI + 0x42] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar2 = (*(code *)param_1->field_0042)(param_1,&local_14,7);
    if (iVar2 == 7) {
      param_1->field_000C = (int)local_12;
      param_1->field_0008 = (int)local_14;
      iVar2 = 0;
      param_1->field_0011 = local_f;
      param_1->field_0010 = local_10 & 7;
      if ((local_10 & 0x80) != 0) {
        iVar1 = (1 << (local_10 & 7) + 1) * 3;
        piVar3 = st::fn_006BFB70(iVar1);
        param_1->field_0012 = (int)piVar3;
        if (piVar3 == nullptr) {
          return -2;
        }
        /* ST_CALLSITE[006C6B8C]: CALL dword ptr [ESI + 0x42] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        iVar2 = (*(code *)param_1->field_0042)(param_1,piVar3,iVar1);
        if (iVar2 == iVar1) {
          iVar2 = 0;
        }
        else {
          st::fn_006AB060(&param_1->field_0012);
          if (-1 < iVar2) {
            iVar2 = -5;
          }
        }
      }
      /* ST_CALLSITE[006C6BAC]: CALL dword ptr [ESI + 0x4a] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      uVar4 = (*(code *)param_1->field_004A)(param_1);
      param_1->field_0052 = uVar4;
      param_1->field_0056 = 4;
      return iVar2;
    }
  }
  if (-1 < iVar2) {
    return -5;
  }
  return iVar2;
}

// 006C6BE0 FUN_006c6be0
#line 4 "decomp/ST.exe/functions/006C6BE0/decomp.c"
uint st::fn_006C6BE0(AnonShape_006C6BE0_5C8BBC13 *param_1)

{
  AnonShape_006C6BE0_5C8BBC13 *pAVar1;
  AnonShape_006C6BE0_5C8BBC13 *pAVar2;
  uint uVar4;
  uint uVar3;
  int iVar5;
  bool bVar6;

  pAVar2 = param_1;
  param_1->field_005E = 0;
  param_1->field_005F = 0;
  /* ST_CALLSITE[006C6BF8]: CALL dword ptr [ESI + 0x42] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar4 = (*(code *)param_1->field_0042)(param_1,(int)&param_1 + 3,1);
  pAVar1 = param_1;
  do {
    if (uVar4 != 1) {
      if (uVar4 == 0) {
        return 0xffffffff;
      }
      if ((int)uVar4 < 0) {
        return uVar4;
      }
      return 0xfffffffb;
    }
    STPiece<3,1>(param_1) = (char)((uint)pAVar1 >> 0x18);
    param_1 = pAVar1;
    if (STPiece<3,1>(param_1) == '!') {
      uVar3 = st::fn_006C6C80((int)pAVar2);
      if (uVar3 != 0) {
        return uVar3;
      }
    }
    else {
      if (STPiece<3,1>(param_1) == ',') {
        return 0;
      }
      bVar6 = STPiece<3,1>(param_1) == ';';
      if (bVar6) {
        uVar4 = *(uint *)&pAVar2->field_0x56;
        if ((uVar4 & 2) != 0) {
          iVar5 = *(int *)&pAVar2->field_0x5a + -1;
          *(uint *)&pAVar2->field_0x56 = uVar4 | 1;
          *(int *)&pAVar2->field_0x5a = iVar5;
          if (iVar5 == 0) {
            *(uint *)&pAVar2->field_0x56 = STReplaceLowByte((uint32_t)(uVar4), (uint8_t)((char)(uVar4 | 1))) | 8;
            return 0xffffffff;
          }
          if (iVar5 < 1) {
            *(undefined4 *)&pAVar2->field_0x5a = 0;
          }
        }
        return 0xffffffff;
      }
    }
    /* ST_CALLSITE[006C6C22]: CALL dword ptr [ESI + 0x42] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar4 = (*(code *)pAVar2->field_0042)(pAVar2,(int)&param_1 + 3,1);
    pAVar1 = param_1;
  } while( true );
}

// 006C6C80 FUN_006c6c80
#line 4 "decomp/ST.exe/functions/006C6C80/decomp.c"
uint st::fn_006C6C80(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte local_108;
  undefined4 local_107;
  uint local_8;

  iVar2 = param_1;
  /* ST_CALLSITE[006C6C96]: CALL dword ptr [ESI + 0x42] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(param_1 + 0x42))(param_1,(int)&param_1 + 3,1);
  if (uVar3 != 1) {
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    return 0xfffffffb;
  }
  bVar1 = false;
  if (STPiece<3,1>(param_1) == -1) {
    /* ST_CALLSITE[006C6CC8]: CALL dword ptr [ESI + 0x42] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar3 = (**(code **)(iVar2 + 0x42))(iVar2,&local_8,1);
    if (uVar3 != 1) {
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      return 0xfffffffb;
    }
    /* ST_CALLSITE[006C6CF8]: CALL dword ptr [ESI + 0x42] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar3 = (**(code **)(iVar2 + 0x42))(iVar2,&local_108,local_8 & 0xff);
    if (uVar3 != (local_8 & 0xff)) {
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      return 0xfffffffb;
    }
    if (((char)local_8 == '\v') &&
       (iVar4 = st::fn_0072E6F0((char *)&local_108,st::mutable_c_string("NETSCAPE2.0"),0xb), iVar4 == 0
       )) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  /* ST_CALLSITE[006C6D4F]: CALL dword ptr [ESI + 0x42] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  uVar3 = (**(code **)(iVar2 + 0x42))(iVar2,&local_8,1);
  while( true ) {
    if (uVar3 != 1) {
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      return 0xfffffffb;
    }
    if ((char)local_8 == '\0') {
      return 0;
    }
    /* ST_CALLSITE[006C6D74]: CALL dword ptr [ESI + 0x42] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar3 = (**(code **)(iVar2 + 0x42))(iVar2,&local_108,local_8 & 0xff);
    if (uVar3 != (local_8 & 0xff)) break;
    if (((bVar1) && ((local_108 & 7) == 1)) && (2 < (byte)local_8)) {
      *(uint *)(iVar2 + 0x56) = *(uint *)(iVar2 + 0x56) | 2;
      *(uint *)(iVar2 + 0x5a) = local_107 & 0xffff;
    }
    if ((STPiece<3,1>(param_1) == -7) && (3 < (byte)local_8)) {
      ((byte *)iVar2)[0x5e] = local_108;
      *(short *)(iVar2 + 0x5f) = (short)local_107;
      ((undefined1 *)iVar2)[0x61] = STPiece<2,1>(local_107);
      if ((short)local_107 != 0) {
        *(uint *)(iVar2 + 0x56) = *(uint *)(iVar2 + 0x56) | 2;
      }
    }
    /* ST_CALLSITE[006C6DEC]: CALL dword ptr [ESI + 0x42] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    uVar3 = (**(code **)(iVar2 + 0x42))(iVar2,&local_8,1);
  }
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  return 0xfffffffb;
}

// 006C6E30 FUN_006c6e30
#line 4 "decomp/ST.exe/functions/006C6E30/decomp.c"
int st::fn_006C6E30(AnonShape_006C6E30_3C2F0429 *param_1)

{
  undefined1 *slotStorage;
  AnonShape_006C6E30_3C2F0429 *pAVar1;
  int iVar2;
  int *piVar3;
  AnonShape_006C6E30_3C2F0429 *pAVar4;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  byte local_8;

  slotStorage = &param_1->field_0x2a;
  st::fn_006AB060(slotStorage);
  /* ST_CALLSITE[006C6E4C]: CALL dword ptr [ESI + 0x42] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar2 = (*(code *)param_1->field_0042)(param_1,&local_10,9);
  if (iVar2 == 9) {
    param_1->field_001A = (int)local_10;
    param_1->field_001E = (int)local_e;
    param_1->field_0026 = (int)local_a;
    param_1->field_0022 = (int)local_c;
    if ((local_8 & 0x80) == 0) {
      param_1->field_0019 = param_1->field_0010;
    }
    else {
      param_1->field_0019 = local_8 & 7;
      pAVar1 = (AnonShape_006C6E30_3C2F0429 *)((1 << (local_8 & 7) + 1) * 3);
      piVar3 = st::fn_006BFB70((int)pAVar1);
      *(int **)slotStorage = piVar3;
      if (piVar3 == nullptr) {
        return -2;
      }
      /* ST_CALLSITE[006C6EBC]: CALL dword ptr [ESI + 0x42] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      pAVar4 = (AnonShape_006C6E30_3C2F0429 *)(*(code *)param_1->field_0042)(param_1,piVar3,pAVar1);
      if (pAVar4 != pAVar1) {
        st::fn_006AB060(slotStorage);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = pAVar4;
        if (-1 < (int)pAVar4) {
          param_1 = (AnonShape_006C6E30_3C2F0429 *)0xfffffffb;
        }
        return (int)param_1;
      }
    }
    param_1->field_0018 = (local_8 & 0x40) == 0x40;
    iVar2 = 0;
  }
  else if (-1 < iVar2) {
    return -5;
  }
  return iVar2;
}

// 006C6F10 FUN_006c6f10
#line 4 "decomp/ST.exe/functions/006C6F10/decomp.c"
uint st::fn_006C6F10(AnonShape_006C6F10_68E82598 *param_1,undefined *param_2,undefined *param_3)

{
  byte bVar1;
  uint uVar2;

  while( true ) {
    if ((0 < (int)param_1->field_006A) && (0 < (int)param_1->field_006E)) {
      /* ST_CALLSITE[006C6F2E]: CALL EDI */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (*(code *)param_3)(param_1);
    }
    uVar2 = st::fn_006D80C0((int)param_1);
    if (uVar2 != 0) {
      return uVar2;
    }
    bVar1 = param_1->field_005E & 0x1c;
    if (bVar1 == 8) {
      param_1->field_0062 = param_1->field_001A;
      param_1->field_0066 = param_1->field_001E;
      param_1->field_006A = param_1->field_0022;
      param_1->field_006E = param_1->field_0026;
    }
    else if (bVar1 == 0xc) {
      param_1->field_0062 = param_1->field_001A;
      param_1->field_0066 = param_1->field_001E;
      param_1->field_006A = param_1->field_0022;
      param_1->field_006E = param_1->field_0026;
      /* ST_CALLSITE[006C6F7A]: CALL EBX */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (*(code *)param_2)(param_1);
    }
    else {
      param_1->field_006A = 0xffffffff;
    }
    uVar2 = st::fn_006D7D9A((AnonShape_006D7D9A_A5401417 *)param_1);
    if (uVar2 != 0) break;
    param_1->field_0056 = st::machine_word_boundary_cast<uint>(param_1->field_0056 & 0xfffffffb);
    if (param_1->field_005F != 0) {
      return 0;
    }
  }
  if (uVar2 != 0xffffffff) {
    return uVar2;
  }
  return 0;
}

// 006C6FC0 FUN_006c6fc0
#line 1 "decomp/ST.exe/functions/006C6FC0/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=12, used=0), and
   decompilation contains no value return */

void st::fn_006C6FC0(AnonShape_006C6FC0_B2C34C14 *param_1)

{
  if (param_1 != nullptr) {
    st::fn_006A5E90(param_1->field_002A);
    st::fn_006A5E90(param_1->field_0012);
    st::fn_006A5E90(param_1->field_0072);
    st::fn_006A5E90((short *)param_1);
  }
  return;
}

// 006C7000 FUN_006c7000
#line 1 "decomp/ST.exe/functions/006C7000/decomp.c"

int st::fn_006C7000(AnonShape_006C7000_4A8D1200 *param_1)

{
  if ((param_1->field_0056 & 8) != 0) {
    return 0;
  }
  if ((param_1->field_0056 & 1) != 0) {
    return -1;
  }
  return (uint)param_1->field_005F * 10;
}

// 006C7030 FUN_006c7030
#line 4 "decomp/ST.exe/functions/006C7030/decomp.c"
void st::fn_006C7030(AnonShape_006C7030_23487746 *param_1)

{
  /* ST_CALLSITE[006C703C]: CALL dword ptr [ESI + 0x4e] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  (*(code *)param_1->field_004E)(param_1,param_1->field_0052);
  param_1->field_0017 = 0;
  st::fn_006AB060(&param_1->field_0x2a);
  param_1->field_0056 = 4;
  param_1->field_005E = 0;
  param_1->field_005F = 0;
  st::fn_006AB060(&param_1[1].field_0xe);
  return;
}

// 006C72F0 FUN_006c72f0
#line 4 "decomp/ST.exe/functions/006C72F0/decomp.c"
void st::fn_006C72F0(AnonShape_006C72F0_54F06289 *param_1)

{
  alignas(4) byte st_stack_frame[136];

  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  undefined4 *puVar4;
  int iVar6;
  uint uVar7;
  InternalExceptionFrame local_70;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_0079da08;
  puStack_10 = (undefined1 *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 0);
  local_20 = st::machine_word_boundary_cast<int>(param_1->field_0062 + *(int *)param_1);
  iVar6 = param_1->field_006A;
  iVar3 = *(int *)(param_1->field_003A + 4);
  if (iVar3 < iVar6 + local_20) {
    iVar6 = iVar3 - local_20;
  }
  local_24 = param_1->field_0066 + *(int *)&param_1->field_0x4;
  iVar3 = param_1->field_006E;
  uVar1 = *(uint *)(param_1->field_003A + 8);
  uVar7 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar7) - uVar7;
  if (iVar2 < iVar3 + local_24) {
    iVar3 = iVar2 - local_24;
  }
  ExceptionList = &local_14;
  local_2c = iVar3;
  local_28 = iVar6;
  st::fn_006AB060(&param_1->field_0072);
  if ((iVar6 == param_1->field_006A) && (iVar3 == param_1->field_006E)) {
    local_70.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_70;
    iVar5 = st::fn_0072D7F0
                      (local_70.jumpBuffer,2,st::fn_0072DA21,local_8);
    local_1c = (st_stack_frame + 0);
    if (iVar5 == 0) {
      local_8 = 0;
      puVar4 = st::fn_006B55F0
                         (nullptr,0,0,0,(byte *)param_1->field_003A,
                          param_1->field_003E,local_20,local_24,local_28,local_2c);
      param_1->field_0072 = st::machine_word_boundary_cast<undefined4>(puVar4);
      g_currentExceptionFrame = local_70.previous;
      ExceptionList = local_14;
      return;
    }
    g_currentExceptionFrame = local_70.previous;
    param_1->field_0072 = 0;
  }
  ExceptionList = local_14;
  return;
}

// 006C7430 FUN_006c7430
#line 4 "decomp/ST.exe/functions/006C7430/decomp.c"
void st::fn_006C7430(AnonShape_006C7430_D1D36538 *param_1)

{
  alignas(4) byte st_stack_frame[136];

  uint uVar1;
  int iVar2;
  uint uVar3;
  InternalExceptionFrame local_70;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  int local_8;

  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_0079da18;
  puStack_10 = (undefined1 *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 0);
  local_20 = st::machine_word_boundary_cast<int>(param_1->field_0062 + *(int *)param_1);
  local_28 = param_1->field_006A;
  iVar2 = *(int *)(param_1->field_003A + 4);
  if (iVar2 < local_28 + local_20) {
    local_28 = iVar2 - local_20;
  }
  local_24 = param_1->field_0066 + *(int *)&param_1->field_0x4;
  local_2c = param_1->field_006E;
  uVar1 = *(uint *)(param_1->field_003A + 8);
  uVar3 = (int)uVar1 >> 0x1f;
  iVar2 = (uVar1 ^ uVar3) - uVar3;
  if (iVar2 < local_2c + local_24) {
    local_2c = iVar2 - local_24;
  }
  local_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_70;
  ExceptionList = &local_14;
  local_8 = st::fn_0072D7F0
                      (local_70.jumpBuffer,2,st::fn_0072DA21,0xffffffff);
  local_1c = (st_stack_frame + 0);
  if (local_8 == 0) {
    if (param_1->field_0072 == nullptr) {
      st::fn_006B4170((RecoveredSourceFamily_dibcopy *)param_1->field_003A,param_1->field_003E,local_20
                   ,local_24,local_28,local_2c,param_1->field_0011);
    }
    else {
      local_1c = (st_stack_frame + 0);
      st::fn_006B55F0
                ((RecoveredSourceFamily_dibcopy *)param_1->field_003A,param_1->field_003E,local_20,
                 local_24,param_1->field_0072,0,0,0,local_28,local_2c);
    }
    g_currentExceptionFrame = local_70.previous;
    ExceptionList = local_14;
    return;
  }
  g_currentExceptionFrame = local_70.previous;
  ExceptionList = local_14;
  return;
}

// 006C7570 FUN_006c7570
#line 4 "decomp/ST.exe/functions/006C7570/decomp.c"
/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void st::fn_006C7570(RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,int param_4,
                 undefined4 *param_5,int param_6,int param_7,byte param_8)

{
  uint uVar1;

  if (((param_7 != 0) && (param_7 * 2 <= (int)param_5)) && (param_7 * 2 <= param_6)) {
    if (param_2 == 0) {
      param_2 = st::fn_006B4FA0((int *)param_1);
    }
    uVar1 = (uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc;
    st::fn_006D7830((undefined1 *)(((param_1->field_0008 - param_4) + -1) * uVar1 + param_2 + param_3),
                 -uVar1,param_5,param_6,param_7,param_8);
    return;
  }
  st::fn_006B5EE0(param_1,param_2,param_3,param_4,(int)param_5,param_6,param_8,0xd);
  return;
}

// 006C7610 FUN_006c7610
#line 1 "decomp/ST.exe/functions/006C7610/decomp.c"

/* [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 7.
   Evidence: 005C0B00 -> 006C7610 @ 005C0BD2; literal 76 at 005C0BBE | 005C8A40 -> 006C7610 @
   005CA877; literal 103 at 005CA84D | 005E11D0 -> 006C7610 @ 005E1259; literal 0 at 005E124C |
   005E4300 -> 006C7610 @ 005E43E7; literal 0 at 005E43D1 | 005E4570 -> 006C7610 @ 005E4D1D; literal
   0 at 005E4D07 | 005E4570 -> 006C7610 @ 005E4EEC; literal 0 at 005E4ED4 | 005E4570 -> 006C7610 @
   005E5100; literal 0 at 005E50E8 | 006C7610 -> 006D7A30 @ 006C7675

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void st::fn_006C7610(RecoveredSourceFamily_dibcopy *param_1,int param_2,int param_3,int param_4,
                 uint param_5,uint param_6,int param_7,byte param_8)

{
  uint uVar1;

  if (((param_7 != 0) && (param_7 * 2 <= (int)param_5)) && (param_7 * 2 <= (int)param_6)) {
    if (param_2 == 0) {
      param_2 = st::fn_006B4FA0((int *)param_1);
    }
    uVar1 = (uint)param_1->field_000E * param_1->field_0004 + 0x1f >> 3 & 0x1ffffffc;
    st::fn_006D7A30(((param_1->field_0008 - param_4) + -1) * uVar1 + param_2 + param_3,-uVar1,param_5,
                 param_6,param_7,param_8);
    return;
  }
  st::fn_006B4170(param_1,param_2,param_3,param_4,param_5,param_6,param_8);
  return;
}

// 006C76B0 FUN_006c76b0
#line 1 "decomp/ST.exe/functions/006C76B0/decomp.c"

void st::fn_006C76B0(int *param_1,int param_2,int param_3)

{
  if (*param_1 == -1) {
    *param_1 = (param_2 - param_1[2]) / 2;
  }
  if (*param_1 < 0) {
    *param_1 = 0;
  }
  if (param_1[1] == -1) {
    param_1[1] = (param_3 - param_1[3]) / 2;
  }
  if (param_1[1] < 0) {
    param_1[1] = 0;
  }
  return;
}

// 006C7700 FUN_006c7700
#line 4 "decomp/ST.exe/functions/006C7700/decomp.c"
DWORD st::fn_006C7700(AnonShape_006C7700_7DDC3CA1 *param_1,uint param_2)

{
  bool bVar1;
  DWORD DVar2;
  LONG LVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  char local_94;
  char local_93;
  char local_92;
  byte local_91;
  short sStack_90;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  short local_8c;
  short local_8a;
  int local_84 [12];
  byte local_53;
  short sStack_52;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined4 local_14;
  int local_10;
  int *local_c;
  char local_5;

  local_c = nullptr;
  /* ST_CALLSITE[006C7723]: CALL dword ptr [EBX + 0x36] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  DVar2 = (*(code *)param_1->field_0036)(param_1,&local_94,0x80);
  if (DVar2 != 0x80) {
    if (-1 < (int)DVar2) {
      return 0xfffffffb;
    }
    return DVar2;
  }
  if (local_94 != '\n') {
    return 0xfffffffb;
  }
  if (local_92 != '\x01') {
    return 0xfffffffb;
  }
  if ((local_93 != '\x05') || (bVar1 = true, (uint3)((uint3)local_53 * (uint3)local_91) < 5)) {
    bVar1 = false;
  }
  iVar7 = local_10;
  if (param_1->field_0026 != 0) {
    /* ST_CALLSITE[006C778B]: CALL dword ptr [0x0085bb64] */
    LVar3 = st::external_0000000E(param_1->field_0026,0,1);
    if (LVar3 == -1) {
      /* ST_CALLSITE[006C7798]: CALL dword ptr [0x0085bbcc] */
      DVar2 = st::external_00000028();
      return DVar2;
    }
    iVar7 = LVar3 + -0x80;
    local_10 = iVar7;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((param_2 == 0) && (bVar1)) {
      /* ST_CALLSITE[006C77C5]: CALL dword ptr [0x0085bb64] */
      LVar3 = st::external_0000000E(param_1->field_0026,0,2);
      if (LVar3 == -1) {
        /* ST_CALLSITE[006C77D2]: CALL dword ptr [0x0085bbcc] */
        DVar2 = st::external_00000028();
        return DVar2;
      }
      param_2 = LVar3 - iVar7;
    }
  }
  local_14 = param_1->field_002A;
  uVar5 = (-(uint)(local_93 != '\x03') & 0xe) + 2;
  if (bVar1) {
    local_c = st::fn_006BFB70(0x300);
    param_1->field_001E = st::pointer_boundary_cast<undefined4 *>(local_c);
    if (local_c == nullptr) {
      return 0xfffffffe;
    }
    if (0x380 < param_2) {
      if (param_1->field_0026 == 0) {
        param_1->field_002A = st::machine_word_boundary_cast<undefined4>(param_1->field_002A + (param_2 - 0x381));
      }
      else {
        /* ST_CALLSITE[006C7854]: CALL dword ptr [0x0085bb64] */
        st::external_0000000E(param_1->field_0026,iVar7 + -0x301 + param_2,0);
      }
      /* ST_CALLSITE[006C7871]: CALL dword ptr [EBX + 0x36] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      DVar2 = (*(code *)param_1->field_0036)(param_1,&local_5,1);
      if (DVar2 != 1) {
        if (-1 < (int)DVar2) {
          return 0xfffffff4;
        }
        return DVar2;
      }
      if (local_5 == '\f') {
        param_2 = 0x100;
        /* ST_CALLSITE[006C78A6]: CALL dword ptr [EBX + 0x36] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        DVar2 = (*(code *)param_1->field_0036)(param_1,local_c,0x300);
        if (DVar2 != 0x300) {
          if (-1 < (int)DVar2) {
            return 0xfffffff4;
          }
          return DVar2;
        }
        goto LAB_006c78ff;
      }
    }
  }
  else if (local_93 != '\x03') {
    local_c = st::fn_006BFB70(0x30);
    param_1->field_001E = st::pointer_boundary_cast<undefined4 *>(local_c);
    if (local_c == nullptr) {
      return 0xfffffffe;
    }
  }
  param_2 = uVar5;
  if (uVar5 == 0x10) {
    piVar6 = local_84;
    piVar8 = local_c;
    for (iVar4 = 0xc; iVar7 = local_10, iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
  }
LAB_006c78ff:
  param_1->field_001A = param_2;
  param_1->field_002A = local_14;
  if (param_1->field_0026 != 0) {
    /* ST_CALLSITE[006C791C]: CALL dword ptr [0x0085bb64] */
    st::external_0000000E(param_1->field_0026,iVar7 + 0x80,0);
  }
  param_1->field_0000 = (int)sStack_90;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  param_1->field_0004 = (int)CONCAT11(uStack_8d,uStack_8e);
  param_1->field_0x10 = local_91;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  param_1->field_000C = ((int)local_8a - (int)CONCAT11(uStack_8d,uStack_8e)) + 1;
  param_1->field_0008 = ((int)local_8c - (int)sStack_90) + 1;
  param_1->field_0011 = local_53;
  param_1->field_0012 = (int)sStack_52;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  param_1->field_0016 = (int)CONCAT11(uStack_4f,uStack_50);
  return 0;
}

// 006C7980 FUN_006c7980
#line 4 "decomp/ST.exe/functions/006C7980/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005A1920 -> 006C7980 @ 005A1CCC

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=8, used=0), and
   decompilation contains no value return */

void st::fn_006C7980(int *param_1)

{
  if (param_1 != nullptr) {
    st::fn_006A5E90(STField<short *>(param_1,0x1e));
    st::fn_006A5E90((short *)param_1);
  }
  return;
}

// 006C7B90 FUN_006c7b90
#line 1 "decomp/ST.exe/functions/006C7B90/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005A1920 -> 006C7B90 @ 005A1CB7 */

void st::fn_006C7B90(int *param_1,int param_2,int param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 006C7BB0 FUN_006c7bb0
#line 4 "decomp/ST.exe/functions/006C7BB0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005A1920 -> 006C7BB0 @ 005A1C39 */

undefined1 * st::fn_006C7BB0(int *param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;

  iVar1 = STField<int>(param_1,0x1a);
  iVar4 = STField<int>(param_1,0x1e);
  if (param_2 == nullptr) {
    param_2 = st::pointer_boundary_cast<undefined1 *>(st::fn_006AAC70(iVar1 * 4));
    if (param_2 == nullptr) {
      return nullptr;
    }
  }
  if (iVar1 == 2) {
    param_2[3] = 0;
    param_2[2] = 0;
    param_2[1] = 0;
    *param_2 = 0;
    param_2[6] = 0xff;
    param_2[5] = 0xff;
    param_2[4] = 0xff;
    param_2[7] = 0;
  }
  else if (0 < iVar1) {
    puVar2 = param_2 + 2;
    puVar3 = (undefined1 *)(iVar4 + 2);
    iVar4 = iVar1;
    do {
      puVar2[-2] = puVar3[-2];
      puVar2[-1] = puVar3[-1];
      *puVar2 = *puVar3;
      puVar2[1] = 0;
      puVar2 = puVar2 + 4;
      iVar4 = iVar4 + -1;
      puVar3 = puVar3 + 3;
    } while (iVar4 != 0);
  }
  if (param_3 != nullptr) {
    *param_3 = iVar1;
  }
  return param_2;
}

// 006C7D00 FUN_006c7d00
#line 4 "decomp/ST.exe/functions/006C7D00/decomp.c"
void st::fn_006C7D00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}

// 006C7D20 FUN_006c7d20
#line 4 "decomp/ST.exe/functions/006C7D20/decomp.c"
int st::fn_006C7D20(AnonShape_006C7D20_41F6C243 *param_1,int param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;

  uVar2 = st::fn_006D80C0((int)param_1);
  if ((uVar2 != 0) && (uVar2 != 0xffffffff)) {
    return 0;
  }
  cVar1 = param_1->field_0019;
  iVar6 = param_1->field_002A;
  if (iVar6 == 0) {
    cVar1 = param_1->field_0010;
    iVar6 = param_1->field_0012;
  }
  iVar5 = 1 << (cVar1 + 1U & 0x1f);
  if (param_2 == 0) {
    param_2 = (int)st::fn_006AAC70(iVar5 * 4);
    if ((void *)param_2 == 0) {
      return 0;
    }
  }
  if (0 < iVar5) {
    puVar3 = (undefined1 *)(param_2 + 2);
    puVar4 = (undefined1 *)(iVar6 + 2);
    iVar6 = iVar5;
    do {
      puVar3[-2] = puVar4[-2];
      puVar3[-1] = puVar4[-1];
      *puVar3 = *puVar4;
      puVar3[1] = 0;
      puVar3 = puVar3 + 4;
      iVar6 = iVar6 + -1;
      puVar4 = puVar4 + 3;
    } while (iVar6 != 0);
  }
  if (param_3 != nullptr) {
    *param_3 = iVar5;
  }
  return param_2;
}

// 006C7E30 FUN_006c7e30
#line 4 "decomp/ST.exe/functions/006C7E30/decomp.c"
uint st::fn_006C7E30(int param_1,undefined4 *param_2,uint param_3)

{
  BOOL BVar1;
  byte *puVar3;

  /* ST_CALLSITE[006C7E40]: CALL dword ptr [0x0085bb60] */
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  BVar1 = st::external_0000000D(*(void **)(param_1 + 0x36),param_3);
  if (BVar1 != 0) {
    return 0xfffffffb;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar3 = (byte *)(*(undefined4 **)(param_1 + 0x36));
  memmove(param_2, puVar3, param_3); /* compiler REP MOVS byte copy */
  *(uint *)(param_1 + 0x36) = *(int *)(param_1 + 0x36) + param_3;
  return param_3;
}

// 006C7E80 FUN_006c7e80
#line 4 "decomp/ST.exe/functions/006C7E80/decomp.c"
undefined4 st::fn_006C7E80(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return *(undefined4 *)(param_1 + 0x36);
}

// 006C7E90 FUN_006c7e90
#line 4 "decomp/ST.exe/functions/006C7E90/decomp.c"
void st::fn_006C7E90(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x36) = param_2;
  return;
}

// 006C7EA0 FUN_006c7ea0
#line 4 "decomp/ST.exe/functions/006C7EA0/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:4: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=006C7EA9 MOV EDX,dword ptr [EBP + 0x18];
   first-use mask

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005C1610 -> 006C7EA0 @ 005C172E; /MReportTy+0x73 | 005C1610 -> 006C7EA0 @ 005C17C7;
   /MReportTy+0x73

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void st::fn_006C7EA0(AnonPointee_MReportTy_0073 *param_1,undefined4 param_2,undefined4 *param_3,
                 uint param_4,byte param_5)

{
  AnonPointee_MReportTy_0073 *local_10;
  undefined4 local_c;
  uint local_8;

  local_10 = param_1;
  local_8 = (uint)param_5;
  local_c = param_2;
  st::fn_006D8260(param_3,param_4,st::function_address_boundary_cast<undefined *>(st::fn_006C7EE0),st::machine_word_boundary_cast<undefined4>(&local_10));
  return;
}

// 006C7EE0 FUN_006c7ee0
#line 1 "decomp/ST.exe/functions/006C7EE0/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 006C7EE0 returns zeroed full register at 006C7F08 @ 006C7F0B */

uint st::fn_006C7EE0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)*param_1,param_1[1],param_2,param_3,param_4,param_5,
               (byte)param_1[2],0xd);
  return 0;
}

// 006C7F10 FUN_006c7f10
#line 1 "decomp/ST.exe/functions/006C7F10/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C7F10 -> 006B5B10 @ 006C7F4B | 006C7F10 -> 006B5B10 @ 006C7F86

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

void st::fn_006C7F10(RecoveredSourceFamily_dibcopy *param_1,int param_2,int *param_3,int param_4,
                 byte param_5)

{
  int *piVar1;
  int *piVar2;

  piVar1 = param_3;
  if (1 < param_4) {
    piVar2 = param_3 + 1;
    auto param_3_after_write = (int *)(param_4 + -1); /* compiler stack-slot lifetime split */
    do {
      st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,param_2,piVar2[-1],*piVar2,piVar2[1],
                   piVar2[2],param_5,0xd);
      piVar2 = piVar2 + 2;
      param_3_after_write = (int *)((int)param_3_after_write + -1);
    } while (param_3_after_write != nullptr);
  }
  st::fn_006B5B10((AnonShape_006E6FB0_BC494FEA *)param_1,param_2,piVar1[param_4 * 2 + -2],
               piVar1[param_4 * 2 + -1],*piVar1,piVar1[1],param_5,0xd);
  return;
}

// 006C7F90 FUN_006c7f90
#line 4 "decomp/ST.exe/functions/006C7F90/decomp.c"
/* WARNING: Type propagation algorithm not settling */
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DC050 -> 006C7F90 @ 005DC0E2

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void st::fn_006C7F90(ushort *param_1,byte *param_2,HPALETTE param_3,int param_4)

{
  uint uVar1;
  int iVar5;
  HDC hdc;
  PALETTEENTRY *pPVar2;
  UINT UVar3;
  undefined1 *puVar4;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  ushort *puVar10;
  tagPALETTEENTRY *local_914;
  LOGPALETTE local_514 [128];
  byte local_110 [256];
  int local_10;
  ushort *local_c;
  int local_8;

  if (param_1[7] == 8) {
    pbVar9 = local_110;
    for (iVar6 = 0x40; iVar6 != 0; iVar6 = iVar6 + -1) {
      pbVar9[0] = 0;
      pbVar9[1] = 0;
      pbVar9[2] = 0;
      pbVar9[3] = 0;
      pbVar9 = pbVar9 + 4;
    }
    if ((-1 < param_4) && (param_4 < 0x100)) {
      local_110[param_4] = (byte)param_4;
    }
    if (param_2 == nullptr) {
      param_2 = (byte *)st::fn_006B4FA0((int *)param_1);
    }
    local_10 = *(int *)(param_1 + 4);
    puVar10 = param_1 + 0x14;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar8 = *(int *)(param_1 + 2) * (uint)param_1[7] + 0x1f >> 3 & 0x1ffffffc;
    local_c = puVar10;
    iVar5 = st::fn_006B4FE0((int)param_1);
    /* ST_CALLSITE[006C800D]: CALL dword ptr [0x0085be4c] */
    hdc = st::external_00000099((HWND)0x0);
    /* ST_CALLSITE[006C8024]: CALL dword ptr [0x0085ba80] */
    st::external_000000A8(hdc,0,0x100,(LPPALETTEENTRY)&local_914);
    /* ST_CALLSITE[006C802D]: CALL dword ptr [0x0085be48] */
    st::external_00000098((HWND)0x0,hdc);
    /* ST_CALLSITE[006C8045]: CALL dword ptr [0x0085baa0] */
    st::external_000000B0(param_3,0,0x100,local_514[0].palPalEntry);
    iVar7 = 0;
    pPVar2 = local_514[0].palPalEntry;
    local_8 = 0;
    iVar6 = 0x100;
    do {
      if ((pPVar2->peFlags & 2) != 0) {
        iVar7 = 1;
        *pPVar2 = *(PALETTEENTRY *)(&local_914 + pPVar2->peRed);
      }
      pPVar2 = pPVar2 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_8 = iVar7;
    if (iVar7 != 0) {
      local_514[0].palVersion = 0x300;
      local_514[0].palNumEntries = 0x100;
      /* ST_CALLSITE[006C8099]: CALL dword ptr [0x0085ba7c] */
      param_3 = st::external_000000A7(local_514);
    }
    iVar6 = 0;
    if (0 < iVar5) {
      do {
        if (iVar6 != param_4) {
          /* ST_CALLSITE[006C80C6]: CALL dword ptr [0x0085baa8] */
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          UVar3 = st::external_000000B2
                            (param_3,(uint)CONCAT21(CONCAT11((char)*puVar10,
                                                             STField<undefined1>(puVar10,1)),
                                                    (char)puVar10[1]));
          if (UVar3 == 0xffffffff) {
            UVar3 = 0;
          }
          local_110[iVar6] = (byte)UVar3;
        }
        puVar10 = puVar10 + 2;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
    uVar1 = uVar8;
    iVar6 = local_10;
    if (0 < local_10) {
      do {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *param_2 = local_110[*param_2];
          param_2 = param_2 + 1;
        }
        iVar6 = iVar6 + -1;
        uVar1 = uVar8;
      } while (iVar6 != 0);
    }
    puVar4 = (undefined1 *)((int)local_c + 1);
    iVar6 = 0x100;
    do {
      puVar4[1] = puVar4[(int)local_514 + (3 - (int)local_c)];
      *puVar4 = puVar4[(int)local_514 + (4 - (int)local_c)];
      puVar4[-1] = puVar4[(int)local_514 + (5 - (int)local_c)];
      puVar4 = puVar4 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (local_8 != 0) {
      /* ST_CALLSITE[006C815A]: CALL dword ptr [0x0085ba78] */
      st::external_000000A6(st::pointer_boundary_cast<HGDIOBJ>(param_3));
    }
  }
  return;
}

// 006C8170 FUN_006c8170
#line 4 "decomp/ST.exe/functions/006C8170/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 005DA7A0 -> 006C8170 @ 005DA834 | 006B6230 -> 006C8170 @ 006B6290 */

char * st::fn_006C8170(char *resourceString)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  int *piVar5;
  char *pcVar6;
  int *piVar7;

  piVar2 = nullptr;
  if (resourceString != nullptr) {
    uVar3 = 0xffffffff;
    pcVar6 = resourceString;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    piVar2 = st::fn_006BFB70(~uVar3);
    if (piVar2 != nullptr) {
      uVar3 = 0xffffffff;
      do {
        pcVar6 = resourceString;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar6 = resourceString + 1;
        cVar1 = *resourceString;
        resourceString = pcVar6;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      piVar5 = (int *)(pcVar6 + -uVar3);
      piVar7 = piVar2;
      memmove(piVar7, piVar5, uVar3); /* compiler REP MOVS byte copy */
    }
  }
  return (char *)piVar2;
}

// 006C81C0 FUN_006c81c0
#line 1 "decomp/ST.exe/functions/006C81C0/decomp.c"

int * st::fn_006C81C0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  if (param_5 < 1) {
    return nullptr;
  }
  piVar3 = st::pointer_boundary_cast<int *>(st::fn_006AAC70(param_5 * 8));
  if (piVar3 == nullptr) {
    return nullptr;
  }
  *piVar3 = param_1;
  piVar3[1] = param_2;
  if (param_5 != 1) {
    iVar1 = param_5 + -1;
    if (1 < iVar1) {
      iVar6 = param_2 * 0x10000 + 0x8000;
      iVar5 = param_1 * 0x10000 + 0x8000;
      iVar4 = param_5 + -2;
      piVar2 = piVar3;
      do {
        iVar6 = iVar6 + ((param_4 - param_2) * 0x10000) / iVar1;
        iVar5 = iVar5 + ((param_3 - param_1) * 0x10000) / iVar1;
        piVar2[2] = iVar5 >> 0x10;
        piVar2[3] = iVar6 >> 0x10;
        iVar4 = iVar4 + -1;
        piVar2 = piVar2 + 2;
      } while (iVar4 != 0);
    }
    piVar3[param_5 * 2 + -2] = param_3;
    piVar3[param_5 * 2 + -1] = param_4;
  }
  return piVar3;
}

// 006C8290 FUN_006c8290
#line 4 "decomp/ST.exe/functions/006C8290/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006C8290 returns return of FUN_006c82bb @ 006C82A2 */

uint __thiscall st::fn_006C8290(void *this,uint param_1)

{
  uint uVar1;

  uVar1 = st::fn_006C82BB(st::machine_word_boundary_cast<undefined4>(this),param_1);
  return uVar1;
}

// 006C82A3 FUN_006c82a3
#line 4 "decomp/ST.exe/functions/006C82A3/decomp.c"
int __thiscall st::fn_006C82A3(void *this,uint param_1)

{
  uint uVar1;

  uVar1 = st::fn_006C82BB(st::machine_word_boundary_cast<undefined4>(this),param_1);
  return 0x5a - uVar1;
}

// 006C82BB FUN_006c82bb
#line 4 "decomp/ST.exe/functions/006C82BB/decomp.c"
uint __fastcall st::fn_006C82BB(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;

  if (DAT_007eda8c == 100) {
    param_2 = param_2 * 100;
  }
  bVar7 = (int)param_2 < 0;
  if (bVar7) {
    param_2 = -param_2;
  }
  if (param_2 < 0x2711) {
    iVar4 = DAT_007eda8c;
    uVar1 = 0;
    uVar6 = 0x5a;
    while( true ) {
      uVar5 = uVar1;
      uVar2 = uVar6 - uVar5 >> 1;
      uVar3 = (ushort)param_2;
      if (uVar2 == 0) break;
      uVar2 = uVar2 + uVar5;
      iVar4 = uVar2 * 2;
      if (uVar3 == *(ushort *)(&DAT_006ce9a0 + iVar4)) goto LAB_006c832a;
      uVar1 = uVar2;
      if (uVar3 <= *(ushort *)(&DAT_006ce9a0 + iVar4)) {
        uVar1 = uVar5;
        uVar6 = uVar2;
      }
    }
    uVar2 = uVar5;
    if (STReplaceLowWord((uint32_t)(iVar4), (uint16_t)(*(undefined2 *)(&DAT_006ce9a0 + uVar6 * 2))) - param_2
        < STReplaceLowWord((uint32_t)(param_2), (uint16_t)(uVar3 - *(short *)(&DAT_006ce9a0 + uVar5 * 2)))) {
      uVar2 = uVar6 & 0x7fffffff;
    }
  }
  else {
    uVar2 = 0x5a;
  }
LAB_006c832a:
  if (bVar7) {
    uVar2 = -uVar2;
  }
  return uVar2;
}

// 006C8334 FUN_006c8334
#line 4 "decomp/ST.exe/functions/006C8334/decomp.c"
uint __cdecl st::fn_006C8334(uint param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;

  if (-1 < (int)param_1) {
    uVar3 = (ulonglong)param_1 * (ulonglong)DAT_007eda8c;
    uVar7 = (uint)(uVar3 >> 0x20);
    uVar5 = (uint)uVar3;
    iVar6 = 0x20;
    uVar9 = uVar7;
    if (uVar7 == 0) {
      iVar6 = 0;
      uVar9 = uVar5;
    }
    if ((uVar9 & 0xffff0000) == 0) {
      uVar1 = 0xf;
      uVar8 = (ushort)uVar9;
      if (uVar8 != 0) {
        for (; uVar8 >> uVar1 == 0; uVar1 = uVar1 - 1) {
        }
      }
      uVar10 = (uint)uVar1;
      if (uVar8 == 0) {
        return uVar5;
      }
    }
    else {
      uVar10 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> uVar10 == 0; uVar10 = uVar10 - 1) {
        }
      }
    }
    bVar4 = (byte)(iVar6 + uVar10 + 1 >> 1) & 0x1f;
    param_1 = uVar5 >> bVar4 | uVar7 << 0x20 - bVar4;
    do {
      uVar9 = param_1;
      if (param_1 < uVar7) {
        uVar9 = (uVar7 >> 1) + uVar7;
      }
      uVar2 = (ulonglong)uVar7 << 0x20 | uVar3 & 0xffffffff;
      uVar5 = (uint)(uVar2 / uVar9);
      uVar10 = uVar9 + uVar5;
      param_1 = uVar10 >> 1 | (uint)CARRY4(uVar9,uVar5) << 0x1f;
      if ((int)(uVar2 % (ulonglong)uVar9) != 0) {
        param_1 = param_1 + ((uVar10 & 1) != 0);
      }
    } while (param_1 != uVar9);
  }
  return param_1;
}

// 006C87C0 FUN_006c87c0
#line 1 "decomp/ST.exe/functions/006C87C0/decomp.c"

/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 00652810 -> 006C87C0 @ 00654381

   [STPrototypeApplier] Propagated return.
   Evidence: 006C87C0 returns zeroed full register at 006C87DF @ 006C87E2 */

uint st::fn_006C87C0(DArrayTy *param_1,uint param_2)

{
  int *slotStorage;

  if (param_2 < param_1->elementSize) {
    slotStorage = (int *)(param_1->growCapacity + param_2 * 4);
    if (*slotStorage != 0) {
      st::fn_006AB060(slotStorage);
    }
    return 0;
  }
  return 0xfffffffc;
}

// 006C87F0 FUN_006c87f0
#line 4 "decomp/ST.exe/functions/006C87F0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 006C8910 -> 006C87F0 @ 006C8926; FUN_006c8910 parameter param_1 */

int st::fn_006C87F0(DArrayTy *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  dword dVar4;
  undefined4 *puVar5;
  char *pcVar6;

  dVar4 = param_1->elementSize;
  iVar3 = (dVar4 + 7 >> 3) + 0x18;
  if ((int)dVar4 < 1) {
    return iVar3;
  }
  puVar5 = (undefined4 *)param_1->growCapacity;
  do {
    if ((char *)*puVar5 != nullptr) {
      uVar2 = 0xffffffff;
      pcVar6 = (char *)*puVar5;
      do {
        if (uVar2 == 0) break;
        uVar2 = uVar2 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      iVar3 = iVar3 + ~uVar2;
    }
    puVar5 = puVar5 + 1;
    dVar4 = dVar4 - 1;
    if (dVar4 == 0) {
      return iVar3;
    }
  } while( true );
}

// 006C8840 FUN_006c8840
#line 4 "decomp/ST.exe/functions/006C8840/decomp.c"
uint * st::fn_006C8840(uint *param_1,uint *param_2,int *param_3)

{
  char cVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  int local_c;
  char *local_8;

  puVar3 = param_2;
  uVar6 = param_1[2];
  uVar4 = uVar6 + 7 >> 3;
  local_c = uVar4 + 0x18;
  puVar7 = param_1;
  puVar9 = param_2;
  memmove(puVar9, puVar7, 0x18); /* compiler REP MOVS byte copy */
  param_2[5] = 0;
  *param_2 = *param_2 & 0xfffffff7;
  puVar7 = param_2 + 6;
  local_8 = (char *)((int)puVar7 + uVar4);
  puVar9 = puVar7;
  for (uVar6 = uVar6 + 7 >> 5; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar9 = 0;
    puVar9 = puVar9 + 1;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar9 = 0;
    puVar9 = (uint *)((int)puVar9 + 1);
  }
  uint * param_2_after_write = nullptr; /* compiler stack-slot lifetime split */
  if (0 < (int)param_1[2]) {
    do {
      pcVar8 = *(char **)(param_1[5] + (int)param_2_after_write * 4);
      if (pcVar8 != nullptr) {
        uVar6 = 0xffffffff;
        pcVar10 = pcVar8;
        do {
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          cVar1 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        local_c = local_c + uVar6;
        pcVar10 = local_8;
        memmove(pcVar10, pcVar8, uVar6); /* compiler REP MOVS byte copy */
        local_8 = local_8 + uVar6;
        pbVar2 = (byte *)((int)puVar7 + ((int)((uint)param_2_after_write ^ 7) >> 3));
        *pbVar2 = *pbVar2 | '\x01' << (((uint)param_2_after_write ^ 7) & 7);
      }
      param_2_after_write = (uint *)((int)param_2_after_write + 1);
    } while ((int)param_2_after_write < (int)param_1[2]);
  }
  if (param_3 != nullptr) {
    *param_3 = local_c;
  }
  return puVar3;
}

// 006C8910 FUN_006c8910
#line 1 "decomp/ST.exe/functions/006C8910/decomp.c"

void st::fn_006C8910(uint *param_1,int *param_2)

{
  uint size;
  uint *puVar1;

  if (param_2 != nullptr) {
    *param_2 = 0;
  }
  size = st::fn_006C87F0((DArrayTy *)param_1);
  puVar1 = st::pointer_boundary_cast<uint *>(st::fn_006AAC70(size));
  if (puVar1 == nullptr) {
    return;
  }
  st::fn_006C8840(param_1,puVar1,param_2);
  return;
}

// 006C8950 FUN_006c8950
#line 1 "decomp/ST.exe/functions/006C8950/decomp.c"

uint st::fn_006C8950(uint param_1,uint param_2,byte param_3)

{
  if (1 < param_3) {
    return param_1 ^ param_2;
  }
  if (param_3 == 0) {
    return ~param_2 & param_1;
  }
  return param_1 | param_2;
}

// 006C8990 FUN_006c8990
#line 4 "decomp/ST.exe/functions/006C8990/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 st::fn_006C8990(byte *param_1,int *param_2,undefined4 *param_3)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte *pbVar5;
  int uVar8;
  uint uVar6;
  uint uVar7;
  uint uVar9;
  uint uVar10;
  double *pdVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double local_30;
  uint local_28;
  undefined4 local_24;
  uint uStack_1c;
  uint local_18;
  int local_14;
  byte *local_c;
  char local_5;

  iVar12 = 0;
  local_14 = 0;
  local_c = param_1;
  if (param_2 != nullptr) {
    local_c = param_1 + *param_2;
  }
  bVar3 = false;
  local_24 = 0;
  bVar4 = false;
  local_30 = 0.0;
  while( true ) {
    if (DAT_007f148c < 2) {
      uVar8 = (int)*local_c;
      uVar6 = (byte)PTR_DAT_007f1280[uVar8 * 2] & 8;
    }
    else {
      uVar8 = (int)*local_c;
      uVar6 = st::fn_00730610(uVar8,8);
    }
    if (uVar6 == 0) break;
    local_c = local_c + 1;
  }
  if (uVar8 != 0) {
    if (uVar8 == 0x2b) {
      local_c = local_c + 1;
      uVar8 = (int)*local_c;
    }
    else if (uVar8 == 0x2d) {
      local_c = local_c + 1;
      bVar4 = true;
      uVar8 = (int)*local_c;
    }
    uVar10 = 0;
    uVar9 = 1;
    local_5 = '\0';
    local_28 = 0;
    uStack_1c = 0;
    local_18 = 1;
    while( true ) {
      while( true ) {
        if (DAT_007f148c < 2) {
          uVar7 = (byte)PTR_DAT_007f1280[uVar8 * 2] & 4;
        }
        else {
          uVar7 = st::fn_00730610(uVar8,4);
          uVar9 = local_18;
          uVar10 = uStack_1c;
        }
        if (uVar7 == 0) break;
        bVar3 = true;
        if (uVar10 < 0xccccccb) {
          uVar10 = (uVar8 - 0x30U) + uVar10 * 10;
          iVar12 = iVar12 - local_5;
          local_c = local_c + 1;
          uVar8 = (int)*local_c;
          uStack_1c = uVar10;
        }
        else if (uVar9 < 0xccccccb) {
          uVar9 = uVar9 * 10;
          local_28 = (uVar8 - 0x30U) + local_28 * 10;
          iVar12 = iVar12 - local_5;
          local_c = local_c + 1;
          uVar8 = (int)*local_c;
          local_18 = uVar9;
        }
        else {
          iVar12 = (iVar12 + 1) - (int)local_5;
          local_c = local_c + 1;
          uVar8 = (int)*local_c;
        }
      }
      if ((uVar8 != 0x2e) || (local_5 != '\0')) break;
      local_c = local_c + 1;
      local_5 = '\x01';
      local_24 = 1;
      uVar8 = (int)*local_c;
    }
    if (bVar3) {
      if ((uVar8 == 0x65) || (uVar8 == 0x45)) {
        bVar2 = false;
        local_24 = 1;
        uVar10 = (uint)local_c[1];
        if (uVar10 == 0x2b) {
          uVar10 = (uint)local_c[2];
          pbVar5 = local_c + 2;
        }
        else {
          pbVar5 = local_c + 1;
          if (uVar10 == 0x2d) {
            bVar2 = true;
            uVar10 = (uint)local_c[2];
            pbVar5 = local_c + 2;
          }
        }
        local_c = pbVar5;
        iVar14 = 0;
        bVar3 = false;
        while( true ) {
          if (DAT_007f148c < 2) {
            uVar9 = (byte)PTR_DAT_007f1280[uVar10 * 2] & 4;
          }
          else {
            uVar9 = st::fn_00730610(uVar10,4);
          }
          if (uVar9 == 0) {
            if (bVar2) {
              iVar14 = -iVar14;
            }
            iVar12 = iVar12 + iVar14;
            uVar9 = local_18;
            uVar10 = uStack_1c;
            if (bVar3) goto LAB_006c8c04;
            goto LAB_006c8bc4;
          }
          if ((int)(0x164 - uVar10) / 10 < iVar14) break;
          local_c = local_c + 1;
          iVar14 = (uVar10 - 0x30) + iVar14 * 10;
          bVar3 = true;
          uVar10 = (uint)*local_c;
        }
        local_30 = 1.7976931348623157e+308;
        local_14 = -0x3c;
      }
      else {
LAB_006c8c04:
        local_30 = (double)(ulonglong)uVar10;
        local_30 = (double)(longlong)local_30;
        if (uVar9 != 1) {
          local_24 = 1;
          dVar1 = (double)uVar9 * local_30;
          local_30 = (double)(ulonglong)local_28;
          local_30 = (double)(longlong)local_30 + dVar1;
        }
        if (local_30 != _DAT_0079d670) {
          iVar13 = 0;
          iVar14 = 0x100;
          if (0 < iVar12) {
            pdVar11 = (double *)&DAT_007ee0fc;
            do {
              if (iVar14 <= iVar12) {
                do {
                  if (_DAT_0079da30 / *pdVar11 <= local_30) {
                    local_30 = 1.7976931348623157e+308;
                    local_14 = -0x3c;
                    goto LAB_006c8bc4;
                  }
                  local_30 = local_30 * *pdVar11;
                  iVar12 = iVar12 - iVar14;
                } while (iVar14 <= iVar12);
              }
              iVar14 = iVar14 >> 1;
              iVar13 = iVar13 + 1;
              pdVar11 = pdVar11 + 1;
            } while (0 < iVar12);
          }
          if (iVar12 < 0) {
            pdVar11 = (double *)(&DAT_007ee0ac + iVar13);
            do {
              if (iVar12 <= -iVar14) {
                do {
                  if (local_30 < _DAT_0079da28 / *pdVar11) {
                    local_30 = 0.0;
                    goto LAB_006c8bc4;
                  }
                  local_30 = local_30 * *pdVar11;
                  iVar12 = iVar12 + iVar14;
                } while (iVar12 <= -iVar14);
              }
              iVar14 = iVar14 >> 1;
              pdVar11 = pdVar11 + 1;
            } while (iVar12 < 0);
          }
          if (local_30 == _DAT_0079da30) {
            local_14 = -0x3c;
          }
        }
      }
    }
  }
LAB_006c8bc4:
  if (param_3 != nullptr) {
    *param_3 = local_24;
  }
  if (bVar3) {
    if (param_2 != nullptr) {
      *param_2 = (int)local_c - (int)param_1;
    }
  }
  else {
    local_14 = -4;
  }
  if (bVar4) {
    local_30 = -local_30;
  }
  if (local_14 != 0) {
    st::fn_006A5E40(local_14,g_overwriteContext_007ED77C,st::pointer_boundary_cast<char *>(&DAT_007ee144),0xf0);
  }
  return (float10)local_30;
}

// 006C8E60 FUN_006c8e60
#line 4 "decomp/ST.exe/functions/006C8E60/decomp.c"
void st::fn_006C8E60(int *param_1,byte param_2,byte param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;

  iVar2 = *param_1;
  pbVar4 = (byte *)((STField<byte>(param_1,0xd) >> 1 & 0xe) + 0x16 + (int)param_1);
  while (pbVar3 = pbVar4, pbVar3 < (byte *)(iVar2 + (int)param_1)) {
    bVar1 = *pbVar3;
    pbVar4 = pbVar3 + 1;
    if ((bVar1 != 0) && ((bVar1 & 0x80) != 0)) {
      if ((bVar1 & 0x40) == 0) {
        uVar5 = bVar1 & 0x3f;
        if (-1 < (int)(uVar5 - 1)) {
          do {
            if (*pbVar4 == param_2) {
              *pbVar4 = param_3;
            }
            pbVar4 = pbVar4 + 1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
      }
      else {
        if (*pbVar4 == param_2) {
          *pbVar4 = param_3;
        }
        pbVar4 = pbVar3 + 2;
      }
    }
  }
  return;
}

// 006C8EC0 FUN_006c8ec0
#line 4 "decomp/ST.exe/functions/006C8EC0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_006C8EC0_param_3Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:3: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x14, direct_reads=4, scalar_operations=3, signed_comparisons=2, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=true; sites=006C8F72 incoming load: MOV EDX,dword ptr [EBP +
   0x14] | 006C8FC7 incoming load: MOV ECX,dword ptr [EBP + 0x14] | 006C8FCA scalar operation: SUB
   ECX,EDX | 006C8FD2 scalar operation: DEC ECX | 006C90B1 incoming load: MOV ESI,dword ptr [EBP +
   0x14] | 006C90B7 scalar operation: DEC ESI | 006C910C first slot write: MOV dword ptr [EBP +
   0x14],EAX | 006C933E derived scalar comparison: CMP ECX,dword ptr [EBP + -0x70]; JGE */

undefined4
st::fn_006C8EC0(int param_1,int param_2,Global_sub_006C8EC0_param_3Enum param_3,int param_4,int param_5
            ,int param_6,int param_7,short *param_8,int param_9,int param_10)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  int *piVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  short *psVar15;
  undefined4 uVar16;
  int *local_4c_mg2;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int *piVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  short *psVar30;
  Global_sub_006C8EC0_param_3Enum GVar31;
  ushort *puVar32;
  Global_sub_006C8EC0_param_3Enum GVar33;
  ushort *puVar34;
  int iVar35;
  int iVar36;
  int *piVar37;
  int *piVar38;
  int *piVar39;
  ushort uVar40;
  int iVar41;
  uint uVar42;
  bool bVar43;
  bool bVar44;
  int local_54;
  int *local_4c_mg0;
  int local_48;
  int local_40;
  int *local_3c;
  undefined4 local_38;
  int local_34;
  undefined2 local_18;
  uint local_10;

  psVar15 = param_8;
  if ((((int)param_8 < 0) || (param_9 < 0)) || (param_10 < 0)) {
    uVar16 = st::fn_006AB090(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)param_8,
                          param_9,param_10);
    return uVar16;
  }
  iVar18 = param_2 * param_3;
  local_4c_mg0 = nullptr;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_8 = &SHORT_007ed572;
  while ((((iVar19 = (int)param_8[-1] + (int)psVar15, iVar19 < 0 || (param_2 <= iVar19)) ||
          ((iVar41 = *param_8 + param_9, iVar41 < 0 ||
           (((int)param_3 <= iVar41 || (iVar20 = st::machine_word_boundary_cast<int>(param_8[1] + param_10), iVar20 < 0)))))) ||
         ((param_4 <= iVar20 ||
          (*(short *)(param_1 + (iVar41 * param_2 + iVar19 + iVar20 * iVar18) * 2) != 0))))) {
    param_8 = param_8 + 4;
    local_4c_mg0 = (int *)((int)local_4c_mg0 + 1);
    if (0x7ed641 < (int)param_8) {
LAB_006c8f65:
      uVar16 = st::fn_006AB090(param_1,param_2,param_3,param_4,param_5,param_6,param_7,(int)psVar15,
                            param_9,param_10);
      return uVar16;
    }
  }
  if ((int)local_4c_mg0 < 0x1a) {
    iVar19 = -param_9;
    uVar42 = param_7 - param_10;
    iVar41 = param_3 - param_9;
    iVar20 = param_4 - param_10;
    iVar21 = param_6 - param_9;
    psVar1 = (short *)(param_1 + ((int)psVar15 + param_2 * param_9 + iVar18 * param_10) * 2);
    local_38 = 0;
    local_4c_mg0 = nullptr;
    psVar1[iVar21 * param_2 + (param_5 - (int)psVar15) + uVar42 * iVar18] = 1;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if ((((short *)param_5 == psVar15) && (param_6 == param_9)) && (param_7 == param_10)) {
      return 0;
    }
    sVar3 = *psVar1;
    bVar13 = false;
    if (sVar3 != 0) {
      *psVar1 = 0;
      if (((((int)psVar15 < 1) || (psVar1[-1] != 0)) &&
          (((param_2 + -1 <= (int)psVar15 || (psVar1[1] != 0)) &&
           ((param_9 < 1 || (psVar1[-param_2] != 0)))))) &&
         ((((int)(param_3 - CASE_1) <= param_9 || (psVar1[param_2] != 0)) &&
          (((param_10 < 1 || (psVar1[-iVar18] != 0)) &&
           ((param_4 + -1 <= param_10 || (psVar1[iVar18] != 0)))))))) {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
    }
    local_48 = st::fn_006AAE60(param_5,param_6,param_7,(int)psVar15,param_9,param_7);
    local_48 = local_48 + ((uVar42 ^ (int)uVar42 >> 0x1f) - ((int)uVar42 >> 0x1f));
    local_34 = local_48 * 2 + 10;
    param_4 = (int)st::fn_006B04D0(local_34 * 4);
    piVar37 = local_4c_mg0;
    if (((undefined4 *)param_4 == 0) ||
       (local_4c_mg2 = st::fn_006BFB70(0x3e84), local_4c_mg2 == nullptr))
    goto cf_break_loop_006CE63A;
    *local_4c_mg2 = 0;
    piVar37 = local_4c_mg2 + 1;
    local_3c = local_4c_mg2 + 5;
    *piVar37 = 0;
    local_40 = 999;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_9 = -1;
    *piVar37 = *(int *)(param_4 + (local_48 + 1) * 4);
    local_18 = (undefined2)iVar21;
    *(int **)(param_4 + (local_48 + 1) * 4) = piVar37;
    *(short *)(local_4c_mg2 + 2) = (short)(param_5 - (int)psVar15);
    STField<undefined2>(local_4c_mg2,10) = local_18;
    STPiece<0,2>(param_8) = (undefined2)uVar42;
    STField<short>(local_4c_mg2,0xe) = (short)local_48;
    *(undefined2 *)(local_4c_mg2 + 3) = STPiece<0,2>(param_8);
    *(undefined2 *)(local_4c_mg2 + 4) = 1;
    bVar14 = false;
    piVar38 = nullptr;
    local_4c_mg0 = local_4c_mg2;
    goto cf_continue_loop_006C9187;
  }
  goto LAB_006c8f65;
cf_continue_loop_006C9187:
  if (local_34 <= local_48) goto cf_break_loop_006CE641;
  puVar17 = (undefined4 *)(param_4 + local_48 * 4);
  while (piVar11 = (int *)*puVar17, piVar11 == nullptr) {
    local_48 = local_48 + 1;
    puVar17 = puVar17 + 1;
    if (local_34 <= local_48) goto cf_break_loop_006CE641;
  }
  if (local_34 <= local_48) goto cf_break_loop_006CE641;
  if (local_34 <= local_48 + 10) {
    param_4 = (int)st::fn_006BFB50((int *)param_4,local_34 * 4 + 400);
    piVar37 = local_4c_mg0;
    if ((int *)param_4 == 0) goto cf_break_loop_006CE63A;
    memset((int *)(param_4 + local_34 * 4), 0, 0x190); /* compiler bulk-zero initialization */
    local_34 = local_34 + 100;
  }
  local_54 = 0;
  *(undefined4 *)(param_4 + local_48 * 4) = 0;
  piVar37 = piVar11;
  do {
    piVar22 = piVar37;
    sVar4 = (short)piVar22[1];
    iVar36 = (int)sVar4;
    sVar5 = STField<short>(piVar22,6);
    iVar21 = (int)sVar5;
    sVar6 = (short)piVar22[2];
    iVar23 = (int)sVar6;
    psVar2 = psVar1 + iVar21 * param_2 + iVar36 + iVar23 * iVar18;
    if ((short)piVar22[3] <= *psVar2) {
      sVar7 = STField<short>(piVar22,10);
      GVar33 = (Global_sub_006C8EC0_param_3Enum)sVar7;
      iVar24 = (int)(short)piVar22[3] + GVar33;
      if (iVar24 < local_48) {
        local_48 = iVar24;
      }
      sVar8 = *psVar2;
      iVar24 = (int)sVar8;
      piVar37 = local_4c_mg0;
      for (; local_4c_mg0 = piVar37, param_9 < 0x1a; param_9 = param_9 + 1) {
        if (local_40 < 1) {
          local_4c_mg0 = st::fn_006BFB70(0x3e84);
          if (local_4c_mg0 == nullptr) goto cf_break_loop_006CE63A;
          *local_4c_mg0 = (int)piVar37;
          local_3c = local_4c_mg0 + 1;
          local_40 = 1000;
        }
        *local_3c = (int)piVar38;
        local_40 = local_40 + -1;
        piVar38 = local_3c;
        piVar37 = local_4c_mg0;
        local_3c = local_3c + 4;
      }
      local_10 = 0xff;
      auto param_3_after_write = CASE_0; /* compiler stack-slot lifetime split */
      if (iVar36 < 0) {
        param_3_after_write = CASE_1;
        local_10 = 0xfe;
        if (-(int)psVar15 < iVar36) {
          local_10 = 0xee;
        }
      }
      else {
        if (-(int)psVar15 < iVar36) {
          local_10 = 0xef;
        }
        if (iVar36 < (param_2 - (int)psVar15) + -1) {
          local_10 = local_10 & 0xfffffffe;
        }
      }
      if (iVar21 < 0) {
        uVar42 = local_10 & 0xfffffffd;
        if (iVar19 < iVar21) {
          uVar42 = local_10 & 0xffffffdd;
        }
      }
      else {
        param_3_after_write = param_3_after_write | CASE_2;
        if (iVar19 < iVar21) {
          local_10 = local_10 & 0xffffffdf;
        }
        uVar42 = local_10;
        if (iVar21 < iVar41 + -1) {
          uVar42 = local_10 & 0xfffffffd;
        }
      }
      local_10 = uVar42;
      bVar44 = iVar23 < iVar20 + -1;
      if (bVar44) {
        local_10 = local_10 & 0xfffffffb;
      }
      bVar12 = -param_10 < iVar23;
      if (bVar12) {
        local_10 = local_10 & 0xffffffbf;
      }
      if (iVar23 < 1) {
        if (iVar23 == 0) {
          param_5 = GVar33 + CASE_1;
        }
        else {
          param_5 = GVar33 - CASE_1;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = GVar33 + CASE_1;
      }
      else {
        param_5 = GVar33 + CASE_1;
        param_1 = GVar33 - CASE_1;
      }
      switch(param_3_after_write) {
      case CASE_0:
        uVar42 = local_10 & 0x10;
        piVar37 = piVar38;
        if ((uVar42 == 0) && ((psVar2[-1] == 0 || (iVar24 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar24 + 3);
          if (iVar36 == 0) {
            if (iVar21 == 0) {
              iVar35 = GVar33 + CASE_3;
            }
            else {
              iVar35 = GVar33 + CASE_1;
            }
          }
          else if (-iVar21 < iVar36) {
            iVar35 = GVar33 - CASE_3;
          }
          else {
            iVar35 = GVar33 - CASE_1;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          STField<short>(piVar38,6) = sVar5;
          *(short *)(piVar38 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 1;
        piVar38 = piVar37;
        if ((uVar28 == 0) && ((psVar2[1] == 0 || (iVar24 + 3 < (int)psVar2[1])))) {
          psVar2[1] = (short)(iVar24 + 3);
          if (iVar36 < -iVar21) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        uVar29 = local_10 & 0x20;
        piVar37 = piVar38;
        if (uVar29 == 0) {
          sVar7 = psVar2[-param_2];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-param_2] = sVar8 + 3;
            if (-iVar21 < iVar36) {
              iVar35 = GVar33 + CASE_1;
            }
            else {
              iVar35 = GVar33 + CASE_3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 1) = sVar4;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        if ((psVar2[param_2] == 0) || (piVar38 = piVar37, iVar24 + 3 < (int)psVar2[param_2])) {
          psVar2[param_2] = sVar8 + 3;
          if (-iVar36 == iVar21 || -iVar21 < iVar36) {
            iVar35 = GVar33 - CASE_1;
          }
          else {
            iVar35 = GVar33 - CASE_3;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 1) = sVar4;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        piVar37 = piVar38;
        if (bVar12) {
          sVar7 = psVar2[-iVar18];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-iVar18] = sVar8 + 3;
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (param_1 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STField<short>(piVar38,10) = (short)param_1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        piVar38 = piVar37;
        if ((bVar44) && ((psVar2[iVar18] == 0 || (iVar24 + 3 < (int)psVar2[iVar18])))) {
          psVar2[iVar18] = sVar8 + 3;
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (param_5 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 2) = sVar6 + 1;
          *(short *)(piVar37 + 1) = sVar4;
          STField<short>(piVar37,10) = (short)param_5;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        if ((bVar44) && (-1 < psVar2[iVar18])) {
          piVar37 = piVar38;
          if ((uVar42 == 0) &&
             (((psVar2[iVar18 + -1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + -1] = sVar8 + 4;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar35 = param_5 + 3;
              }
              else {
                iVar35 = param_5 + 1;
              }
            }
            else if (-iVar21 < iVar36) {
              iVar35 = param_5 + -3;
            }
            else {
              iVar35 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if (((uVar28 == 0) &&
              ((psVar2[iVar18 + 1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + 1])))) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + 1] = sVar8 + 4;
            if (iVar36 < -iVar21) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar29 == 0) {
            sVar7 = psVar2[iVar18 - param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar18 - param_2] = sVar8 + 4;
              if (-iVar21 < iVar36) {
                iVar35 = param_5 + 1;
              }
              else {
                iVar35 = param_5 + 3;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 1) = sVar4;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if (((psVar2[iVar18 + param_2] == 0) || (iVar24 + 4 < (int)psVar2[iVar18 + param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + param_2] = sVar8 + 4;
            if (-iVar36 == iVar21 || -iVar21 < iVar36) {
              iVar35 = param_5 + -1;
            }
            else {
              iVar35 = param_5 + -3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 1) = sVar4;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar30 = psVar2 + -iVar18, -1 < *psVar30)) {
          piVar37 = piVar38;
          if (((uVar42 == 0) && ((psVar30[-1] == 0 || (iVar24 + 4 < (int)psVar30[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar30[-1] = sVar8 + 4;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar35 = param_1 + 3;
              }
              else {
                iVar35 = param_1 + 1;
              }
            }
            else if (-iVar21 < iVar36) {
              iVar35 = param_1 + -3;
            }
            else {
              iVar35 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if ((uVar28 == 0) &&
             (((psVar30[1] == 0 || (iVar24 + 4 < (int)psVar30[1])) &&
              ((psVar2[1] & 0xc000U) != 0xc000)))) {
            psVar30[1] = sVar8 + 4;
            if (iVar36 < -iVar21) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar29 == 0) {
            sVar7 = psVar30[-param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar30[-param_2] = sVar8 + 4;
              if (-iVar21 < iVar36) {
                iVar35 = param_1 + 1;
              }
              else {
                iVar35 = param_1 + 3;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 1) = sVar4;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if (((psVar30[param_2] == 0) || (iVar24 + 4 < (int)psVar30[param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar30[param_2] = sVar8 + 4;
            if (-iVar36 == iVar21 || -iVar21 < iVar36) {
              iVar35 = param_1 + -1;
            }
            else {
              iVar35 = param_1 + -3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 1) = sVar4;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar42 = local_10 & 0x30;
        piVar37 = piVar38;
        if (uVar42 == 0) {
          psVar30 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar7 = *psVar30;
          if ((((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar30 = sVar8 + 4;
            if (iVar36 == 0) {
              GVar31 = GVar33 + 4;
            }
            else if (1 - iVar21 < iVar36) {
              GVar31 = GVar33 - CASE_2;
            }
            else {
              GVar31 = GVar33;
              if (iVar36 != 1 - iVar21) {
                GVar31 = GVar33 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x21;
        piVar38 = piVar37;
        if (uVar28 == 0) {
          puVar34 = (ushort *)(psVar2 + -param_2);
          if (((puVar34[1] == 0) || (iVar24 + 4 < (int)(short)puVar34[1])) &&
             (((*puVar34 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar34[1] = sVar8 + 4;
            piVar38 = (int *)*piVar37;
            param_9 = param_9 + -1;
            piVar39 = (int *)(param_4 + 0x10 + (GVar33 + 4 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)(GVar33 + 4);
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar29 = local_10 & 0x12;
        piVar37 = piVar38;
        if ((((uVar29 == 0) &&
             ((psVar2[param_2 + -1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + -1])))) &&
            ((psVar2[param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + -1] = sVar8 + 4;
          if (iVar36 == 0) {
            if (iVar21 == 0) {
              param_3_after_write = GVar33 + 4;
            }
            else {
              param_3_after_write = GVar33;
              if (iVar21 != -1) {
                param_3_after_write = GVar33 - CASE_2;
              }
            }
          }
          else {
            param_3_after_write = GVar33 + ~CASE_3;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + 0x10 + (param_3_after_write + iVar24) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          STField<short>(piVar38,6) = sVar5 + 1;
          *(short *)(piVar38 + 2) = sVar6;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          *(short *)(piVar38 + 3) = sVar8 + 4;
        }
        local_10 = local_10 & 3;
        piVar38 = piVar37;
        if (((local_10 == 0) &&
            (((psVar2[param_2 + 1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + 1])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)))) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          bVar43 = -(iVar36 + 1) == iVar21;
          if (bVar43 || -iVar21 < iVar36 + 1) {
            if (!bVar43) {
              GVar33 = GVar33 + CASE_2;
            }
          }
          else {
            GVar33 = GVar33 - CASE_2;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0x10 + (GVar33 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)GVar33;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 4;
        }
        iVar35 = iVar24 + 5;
        uVar40 = (ushort)iVar35;
        if ((bVar44) && (puVar34 = (ushort *)(psVar2 + iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar40;
              if (iVar36 == 0) {
                iVar27 = param_5 + 4;
              }
              else if (1 - iVar21 < iVar36) {
                iVar27 = param_5 + -2;
              }
              else {
                iVar27 = param_5;
                if (iVar36 != 1 - iVar21) {
                  iVar27 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(ushort *)(piVar38 + 3) = uVar40;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            }
          }
          piVar38 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              param_9 = param_9 + -1;
              piVar38 = (int *)*piVar37;
              piVar39 = (int *)(param_4 + (param_5 + 4 + iVar35) * 4);
              *piVar37 = *piVar39;
              *piVar39 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(ushort *)(piVar37 + 3) = uVar40;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STField<short>(piVar37,10) = (short)param_5 + 4;
            }
          }
          piVar37 = piVar38;
          if (((uVar29 == 0) &&
              (((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar40;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar27 = param_5 + 4;
              }
              else {
                iVar27 = param_5;
                if (iVar21 != -1) {
                  iVar27 = param_5 + -2;
                }
              }
            }
            else {
              iVar27 = param_5 + -4;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + 1;
            *(ushort *)(piVar38 + 3) = uVar40;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          }
          piVar38 = piVar37;
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             ((((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))
             )) {
            puVar34[param_2 + 1] = uVar40;
            bVar44 = -(iVar36 + 1) == iVar21;
            if (bVar44 || -iVar21 < iVar36 + 1) {
              if (!bVar44) {
                param_5 = param_5 + 2;
              }
            }
            else {
              param_5 = param_5 + -2;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + (param_5 + iVar35) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(ushort *)(piVar37 + 3) = uVar40;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)param_5;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          }
        }
        if ((bVar12) && (puVar34 = (ushort *)(psVar2 + -iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar40;
              if (iVar36 == 0) {
                iVar27 = param_1 + 4;
              }
              else if (1 - iVar21 < iVar36) {
                iVar27 = param_1 + -2;
              }
              else {
                iVar27 = param_1;
                if (iVar36 != 1 - iVar21) {
                  iVar27 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(ushort *)(piVar38 + 3) = uVar40;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            }
          }
          piVar39 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              param_9 = param_9 + -1;
              piVar39 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (param_1 + 4 + iVar35) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(ushort *)(piVar37 + 3) = uVar40;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STField<short>(piVar37,10) = (short)param_1 + 4;
            }
          }
          piVar38 = piVar39;
          if ((((uVar29 == 0) &&
               ((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000))))))
              && ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar40;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar27 = param_1 + 4;
              }
              else {
                iVar27 = param_1;
                if (iVar21 != -1) {
                  iVar27 = param_1 + -2;
                }
              }
            }
            else {
              iVar27 = param_1 + -4;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar39;
            piVar37 = (int *)(param_4 + (iVar27 + iVar35) * 4);
            *piVar39 = *piVar37;
            *piVar37 = (int)piVar39;
            *(short *)(piVar39 + 1) = sVar4 + -1;
            STField<short>(piVar39,6) = sVar5 + 1;
            *(ushort *)(piVar39 + 3) = uVar40;
            *(short *)(piVar39 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
            STField<undefined2>(piVar39,10) = (undefined2)param_3_after_write;
          }
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             (((puVar34[param_2] & 0xc000) != 0xc000 &&
              (((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))))
             )) {
            puVar34[param_2 + 1] = uVar40;
            iVar27 = iVar21;
            iVar35 = iVar36;
LAB_006ce561:
            bVar44 = -(iVar35 + 1) == iVar27;
            piVar37 = piVar38;
            if (bVar44 || -iVar27 < iVar35 + 1) {
              if (!bVar44) {
                param_1 = param_1 + 2;
              }
            }
            else {
              param_1 = param_1 + -2;
            }
LAB_006ce57c:
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + (param_1 + iVar24 + 5) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)param_1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = (short)(iVar24 + 5);
          }
        }
        break;
      case CASE_1:
        uVar42 = local_10 & 0x10;
        piVar37 = piVar38;
        if ((uVar42 == 0) && ((psVar2[-1] == 0 || (iVar24 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar24 + 3);
          if (iVar21 < iVar36) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          STField<short>(piVar38,6) = sVar5;
          *(short *)(piVar38 + 3) = sVar8 + 3;
        }
        if ((psVar2[1] == 0) || (piVar38 = piVar37, iVar24 + 3 < (int)psVar2[1])) {
          psVar2[1] = (short)(iVar24 + 3);
          if (iVar36 < iVar21) {
            iVar35 = GVar33 - CASE_3;
          }
          else {
            iVar35 = GVar33 - CASE_1;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 0x20;
        piVar37 = piVar38;
        if (uVar28 == 0) {
          sVar9 = psVar2[-param_2];
          if ((sVar9 == 0) || (iVar24 + 3 < (int)sVar9)) {
            psVar2[-param_2] = sVar8 + 3;
            if (iVar36 < iVar21) {
              iVar35 = GVar33 + CASE_1;
            }
            else {
              iVar35 = GVar33 + CASE_3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 1) = sVar4;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        if ((psVar2[param_2] == 0) || (piVar38 = piVar37, iVar24 + 3 < (int)psVar2[param_2])) {
          psVar2[param_2] = sVar8 + 3;
          if (iVar21 < iVar36) {
            iVar35 = GVar33 - CASE_3;
          }
          else {
            iVar35 = GVar33 - CASE_1;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 1) = sVar4;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        piVar37 = piVar38;
        if (bVar12) {
          sVar9 = psVar2[-iVar18];
          if ((sVar9 == 0) || (iVar24 + 3 < (int)sVar9)) {
            psVar2[-iVar18] = sVar8 + 3;
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (param_1 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STField<short>(piVar38,10) = (short)param_1;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        piVar38 = piVar37;
        if ((bVar44) && ((psVar2[iVar18] == 0 || (iVar24 + 3 < (int)psVar2[iVar18])))) {
          psVar2[iVar18] = sVar8 + 3;
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (param_5 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 2) = sVar6 + 1;
          STField<short>(piVar37,10) = (short)param_5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        if ((bVar44) && (-1 < psVar2[iVar18])) {
          piVar37 = piVar38;
          if ((uVar42 == 0) &&
             (((psVar2[iVar18 + -1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + -1] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if (((psVar2[iVar18 + 1] == 0) || (iVar24 + 4 < (int)psVar2[iVar18 + 1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + 1] = sVar8 + 4;
            if (iVar36 < iVar21) {
              iVar35 = param_5 + -3;
            }
            else {
              iVar35 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar28 == 0) {
            sVar9 = psVar2[iVar18 - param_2];
            if (((sVar9 == 0) || (iVar24 + 4 < (int)sVar9)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar18 - param_2] = sVar8 + 4;
              if (iVar36 < iVar21) {
                iVar35 = param_5 + 1;
              }
              else {
                iVar35 = param_5 + 3;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if (((psVar2[iVar18 + param_2] == 0) || (iVar24 + 4 < (int)psVar2[iVar18 + param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + param_2] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_5 + -3;
            }
            else {
              iVar35 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar30 = psVar2 + -iVar18, -1 < *psVar30)) {
          piVar37 = piVar38;
          if (((uVar42 == 0) && ((psVar30[-1] == 0 || (iVar24 + 4 < (int)psVar30[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar30[-1] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if (((psVar30[1] == 0) || (iVar24 + 4 < (int)psVar30[1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar30[1] = sVar8 + 4;
            if (iVar36 < iVar21) {
              iVar35 = param_1 + -3;
            }
            else {
              iVar35 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar28 == 0) {
            sVar9 = psVar30[-param_2];
            if (((sVar9 == 0) || (iVar24 + 4 < (int)sVar9)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar30[-param_2] = sVar8 + 4;
              if (iVar36 < iVar21) {
                iVar35 = param_1 + 1;
              }
              else {
                iVar35 = param_1 + 3;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if (((psVar30[param_2] == 0) || (iVar24 + 4 < (int)psVar30[param_2])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar30[param_2] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_1 + -3;
            }
            else {
              iVar35 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar42 = local_10 & 0x30;
        piVar37 = piVar38;
        if (uVar42 == 0) {
          psVar30 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar9 = *psVar30;
          if ((((sVar9 == 0) || (iVar24 + 4 < (int)sVar9)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar30 = sVar8 + 4;
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (GVar33 + 4 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STField<short>(piVar38,10) = sVar7 + 4;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x21;
        piVar38 = piVar37;
        if (uVar28 == 0) {
          puVar34 = (ushort *)(psVar2 + -param_2);
          if (((puVar34[1] == 0) || (iVar24 + 4 < (int)(short)puVar34[1])) &&
             (((*puVar34 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar34[1] = sVar8 + 4;
            if (iVar36 < iVar21 + -1) {
              GVar31 = GVar33 - CASE_2;
            }
            else {
              GVar31 = GVar33;
              if (iVar36 != iVar21 + -1) {
                GVar31 = GVar33 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        local_10 = local_10 & 0x12;
        piVar37 = piVar38;
        if (((local_10 == 0) &&
            ((psVar2[param_2 + -1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + -1])))) &&
           (((psVar2[param_2] & 0xc000U) != 0xc000 && ((psVar2[-1] & 0xc000U) != 0xc000)))) {
          psVar2[param_2 + -1] = sVar8 + 4;
          if (iVar21 < iVar36 + -1) {
            GVar31 = GVar33 - CASE_2;
          }
          else {
            GVar31 = GVar33;
            if (iVar21 != iVar36 + -1) {
              GVar31 = GVar33 + CASE_2;
            }
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          STField<short>(piVar38,6) = sVar5 + 1;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          *(short *)(piVar38 + 3) = sVar8 + 4;
        }
        iVar35 = param_2 * 2 + 2;
        piVar38 = piVar37;
        if ((((psVar2[param_2 + 1] == 0) || (iVar24 + 4 < (int)psVar2[param_2 + 1])) &&
            ((psVar2[param_2] & 0xc000U) != 0xc000)) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          piVar38 = (int *)*piVar37;
          param_9 = param_9 + -1;
          piVar39 = (int *)(param_4 + 0x10 + (GVar33 + ~CASE_3 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)(GVar33 + ~CASE_3);
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 4;
        }
        iVar27 = iVar24 + 5;
        uVar40 = (ushort)iVar27;
        if ((bVar44) && (puVar34 = (ushort *)(psVar2 + iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            uVar10 = *(ushort *)((int)puVar34 - iVar35);
            if ((((uVar10 == 0) || (iVar27 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - iVar35) & 0xc000) != 0xc000)) {
              *(ushort *)((int)puVar34 - iVar35) = uVar40;
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (param_5 + 4 + iVar27) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STField<short>(piVar38,10) = (short)param_5 + 4;
              *(ushort *)(piVar38 + 3) = uVar40;
            }
          }
          piVar38 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if (((puVar32[1] == 0) || (iVar27 < (short)puVar32[1])) &&
               (((((*puVar32 & 0xc000) != 0xc000 &&
                  (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))
                 && ((psVar2[1] & 0xc000U) != 0xc000)) &&
                (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              if (iVar36 < iVar21 + -1) {
                iVar25 = param_5 + -2;
              }
              else {
                iVar25 = param_5;
                if (iVar36 != iVar21 + -1) {
                  iVar25 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar38 = (int *)*piVar37;
              piVar39 = (int *)(param_4 + (iVar25 + iVar27) * 4);
              *piVar37 = *piVar39;
              *piVar39 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar25;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar40;
            }
          }
          piVar37 = piVar38;
          if (((local_10 == 0) &&
              (((((puVar34[param_2 + -1] == 0 || (iVar27 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar40;
            if (iVar21 < iVar36 + -1) {
              iVar25 = param_5 + -2;
            }
            else {
              iVar25 = param_5;
              if (iVar21 != iVar36 + -1) {
                iVar25 = param_5 + 2;
              }
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + (iVar25 + iVar27) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + 1;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar25;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar38 + 3) = uVar40;
          }
          piVar38 = piVar37;
          if ((((puVar34[param_2 + 1] == 0) || (iVar27 < (short)puVar34[param_2 + 1])) &&
              (((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))))) &&
             ((psVar2[param_2 + 1] & 0xc000U) != 0xc000)) {
            puVar34[param_2 + 1] = uVar40;
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + (param_5 + -4 + iVar27) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)(param_5 + -4);
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar37 + 3) = uVar40;
          }
        }
        if ((bVar12) && (puVar34 = (ushort *)(psVar2 + -iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            uVar10 = *(ushort *)((int)puVar34 - iVar35);
            if ((((uVar10 == 0) || (iVar27 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - iVar35) & 0xc000) != 0xc000)) {
              *(ushort *)((int)puVar34 - iVar35) = uVar40;
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (param_1 + 4 + iVar27) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STField<short>(piVar38,10) = (short)param_1 + 4;
              *(ushort *)(piVar38 + 3) = uVar40;
            }
          }
          piVar39 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar27 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              if (iVar36 < iVar21 + -1) {
                iVar35 = param_1 + -2;
              }
              else {
                iVar35 = param_1;
                if (iVar36 != iVar21 + -1) {
                  iVar35 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar39 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (iVar35 + iVar27) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar40;
            }
          }
          piVar38 = piVar39;
          if ((((local_10 == 0) &&
               ((((puVar34[param_2 + -1] == 0 || (iVar27 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000))))))
              && ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar40;
            if (iVar21 < iVar36 + -1) {
              iVar35 = param_1 + -2;
            }
            else {
              iVar35 = param_1;
              if (iVar21 != iVar36 + -1) {
                iVar35 = param_1 + 2;
              }
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar39;
            piVar37 = (int *)(param_4 + (iVar35 + iVar27) * 4);
            *piVar39 = *piVar37;
            *piVar37 = (int)piVar39;
            *(short *)(piVar39 + 1) = sVar4 + -1;
            STField<short>(piVar39,6) = sVar5 + 1;
            *(short *)(piVar39 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar39,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar39 + 3) = uVar40;
          }
          if ((((puVar34[param_2 + 1] == 0) || (iVar27 < (short)puVar34[param_2 + 1])) &&
              (((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))))) &&
             ((psVar2[param_2 + 1] & 0xc000U) != 0xc000)) {
            puVar34[param_2 + 1] = uVar40;
            param_1 = param_1 + -4;
            piVar37 = piVar38;
            goto LAB_006ce57c;
          }
        }
        break;
      case CASE_2:
        uVar42 = local_10 & 0x10;
        piVar37 = piVar38;
        if ((uVar42 == 0) && ((psVar2[-1] == 0 || (iVar24 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar24 + 3);
          if (iVar36 == 0) {
            if (iVar21 == 0) {
              iVar35 = GVar33 + CASE_3;
            }
            else {
              iVar35 = GVar33 + CASE_1;
            }
          }
          else if (iVar21 < iVar36) {
            iVar35 = GVar33 - CASE_3;
          }
          else {
            iVar35 = GVar33 - CASE_1;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          STField<short>(piVar38,6) = sVar5;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          *(short *)(piVar38 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 1;
        piVar38 = piVar37;
        if ((uVar28 == 0) && ((psVar2[1] == 0 || (iVar24 + 3 < (int)psVar2[1])))) {
          psVar2[1] = (short)(iVar24 + 3);
          if (iVar36 < iVar21) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        uVar29 = local_10 & 0x20;
        piVar37 = piVar38;
        if (uVar29 == 0) {
          sVar7 = psVar2[-param_2];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-param_2] = sVar8 + 3;
            if (iVar21 == 0) {
              if (iVar36 == 0) {
                iVar35 = GVar33 + CASE_3;
              }
              else {
                iVar35 = GVar33 + CASE_1;
              }
            }
            else if (iVar36 < iVar21) {
              iVar35 = GVar33 - CASE_3;
            }
            else {
              iVar35 = GVar33 - CASE_1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        uVar26 = local_10 & 2;
        piVar38 = piVar37;
        if ((uVar26 == 0) && ((psVar2[param_2] == 0 || (iVar24 + 3 < (int)psVar2[param_2])))) {
          psVar2[param_2] = sVar8 + 3;
          if (iVar21 < iVar36) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        piVar37 = piVar38;
        if (bVar12) {
          sVar7 = psVar2[-iVar18];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-iVar18] = sVar8 + 3;
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (param_1 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STField<short>(piVar38,10) = (short)param_1;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        piVar38 = piVar37;
        if ((bVar44) && ((psVar2[iVar18] == 0 || (iVar24 + 3 < (int)psVar2[iVar18])))) {
          psVar2[iVar18] = sVar8 + 3;
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (param_5 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 2) = sVar6 + 1;
          STField<short>(piVar37,10) = (short)param_5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        if ((bVar44) && (-1 < psVar2[iVar18])) {
          piVar37 = piVar38;
          if ((uVar42 == 0) &&
             (((psVar2[iVar18 + -1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + -1] = sVar8 + 4;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar35 = param_5 + 3;
              }
              else {
                iVar35 = param_5 + 1;
              }
            }
            else if (iVar21 < iVar36) {
              iVar35 = param_5 + -3;
            }
            else {
              iVar35 = param_5 + -1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if (((uVar28 == 0) &&
              ((psVar2[iVar18 + 1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + 1])))) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + 1] = sVar8 + 4;
            if (iVar36 < iVar21) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar29 == 0) {
            sVar7 = psVar2[iVar18 - param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar18 - param_2] = sVar8 + 4;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar35 = param_5 + 3;
                }
                else {
                  iVar35 = param_5 + 1;
                }
              }
              else if (iVar36 < iVar21) {
                iVar35 = param_5 + -3;
              }
              else {
                iVar35 = param_5 + -1;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if ((uVar26 == 0) &&
             (((psVar2[iVar18 + param_2] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + param_2])) &&
              ((psVar2[param_2] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + param_2] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar30 = psVar2 + -iVar18, -1 < *psVar30)) {
          piVar37 = piVar38;
          if (((uVar42 == 0) && ((psVar30[-1] == 0 || (iVar24 + 4 < (int)psVar30[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar30[-1] = sVar8 + 4;
            if (iVar36 == 0) {
              if (iVar21 == 0) {
                iVar35 = param_1 + 3;
              }
              else {
                iVar35 = param_1 + 1;
              }
            }
            else if (iVar21 < iVar36) {
              iVar35 = param_1 + -3;
            }
            else {
              iVar35 = param_1 + -1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if ((uVar28 == 0) &&
             (((psVar30[1] == 0 || (iVar24 + 4 < (int)psVar30[1])) &&
              ((psVar2[1] & 0xc000U) != 0xc000)))) {
            psVar30[1] = sVar8 + 4;
            if (iVar36 < iVar21) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar29 == 0) {
            sVar7 = psVar30[-param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar30[-param_2] = sVar8 + 4;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar35 = param_1 + 3;
                }
                else {
                  iVar35 = param_1 + 1;
                }
              }
              else if (iVar36 < iVar21) {
                iVar35 = param_1 + -3;
              }
              else {
                iVar35 = param_1 + -1;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if (((uVar26 == 0) && ((psVar30[param_2] == 0 || (iVar24 + 4 < (int)psVar30[param_2]))))
             && ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar30[param_2] = sVar8 + 4;
            if (iVar21 < iVar36) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar42 = local_10 & 0x30;
        piVar37 = piVar38;
        if (uVar42 == 0) {
          psVar30 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar7 = *psVar30;
          if ((((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar30 = sVar8 + 4;
            GVar31 = GVar33;
            if (iVar21 == 0) {
              if (iVar36 == 0) {
                GVar31 = GVar33 + 4;
              }
              else if (iVar36 != 1) {
                GVar31 = GVar33 - CASE_2;
              }
            }
            else if (iVar36 == 0) {
              if (iVar21 != 1) {
                GVar31 = GVar33 - CASE_2;
              }
            }
            else {
              GVar31 = GVar33 + ~CASE_3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x21;
        piVar38 = piVar37;
        if (uVar28 == 0) {
          puVar34 = (ushort *)(psVar2 + -param_2);
          if (((puVar34[1] == 0) || (iVar24 + 4 < (int)(short)puVar34[1])) &&
             (((*puVar34 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar34[1] = sVar8 + 4;
            if (iVar21 == 0) {
              GVar31 = GVar33 + 4;
            }
            else if (iVar36 + 1 < iVar21) {
              GVar31 = GVar33 - CASE_2;
            }
            else {
              GVar31 = GVar33;
              if (iVar21 != iVar36 + 1) {
                GVar31 = GVar33 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar29 = local_10 & 0x12;
        piVar37 = piVar38;
        if (((uVar29 == 0) &&
            ((psVar2[param_2 + -1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + -1])))) &&
           (((psVar2[param_2] & 0xc000U) != 0xc000 && ((psVar2[-1] & 0xc000U) != 0xc000)))) {
          psVar2[param_2 + -1] = sVar8 + 4;
          if (iVar36 == 0) {
            GVar31 = GVar33 + 4;
          }
          else if (iVar21 + 1 < iVar36) {
            GVar31 = GVar33 - CASE_2;
          }
          else {
            GVar31 = GVar33;
            if (iVar36 != iVar21 + 1) {
              GVar31 = GVar33 + CASE_2;
            }
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          STField<short>(piVar38,6) = sVar5 + 1;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          *(short *)(piVar38 + 3) = sVar8 + 4;
        }
        local_10 = local_10 & 3;
        piVar38 = piVar37;
        if (((local_10 == 0) &&
            (((psVar2[param_2 + 1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + 1])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)))) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          piVar38 = (int *)*piVar37;
          param_9 = param_9 + -1;
          piVar39 = (int *)(param_4 + 0x10 + (GVar33 + 4 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)(GVar33 + 4);
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 4;
        }
        iVar35 = iVar24 + 5;
        uVar40 = (ushort)iVar35;
        if ((bVar44) && (puVar34 = (ushort *)(psVar2 + iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar40;
              iVar27 = param_5;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar27 = param_5 + 4;
                }
                else if (iVar36 != 1) {
                  iVar27 = param_5 + -2;
                }
              }
              else if (iVar36 == 0) {
                if (iVar21 != 1) {
                  iVar27 = param_5 + -2;
                }
              }
              else {
                iVar27 = param_5 + -4;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar38 + 3) = uVar40;
            }
          }
          piVar38 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if (((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
               (((((*puVar32 & 0xc000) != 0xc000 &&
                  (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))
                 && ((psVar2[1] & 0xc000U) != 0xc000)) &&
                (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              if (iVar21 == 0) {
                iVar27 = param_5 + 4;
              }
              else if (iVar36 + 1 < iVar21) {
                iVar27 = param_5 + -2;
              }
              else {
                iVar27 = param_5;
                if (iVar21 != iVar36 + 1) {
                  iVar27 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar38 = (int *)*piVar37;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar37 = *piVar39;
              *piVar39 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar40;
            }
          }
          piVar37 = piVar38;
          if ((uVar29 == 0) &&
             ((((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)))
             ) {
            puVar34[param_2 + -1] = uVar40;
            if (iVar36 == 0) {
              iVar27 = param_5 + 4;
            }
            else if (iVar21 + 1 < iVar36) {
              iVar27 = param_5 + -2;
            }
            else {
              iVar27 = param_5;
              if (iVar36 != iVar21 + 1) {
                iVar27 = param_5 + 2;
              }
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + 1;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar38 + 3) = uVar40;
          }
          piVar38 = piVar37;
          if ((((local_10 == 0) &&
               ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
              (((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))))) &&
             ((psVar2[param_2 + 1] & 0xc000U) != 0xc000)) {
            puVar34[param_2 + 1] = uVar40;
            piVar38 = (int *)*piVar37;
            param_9 = param_9 + -1;
            piVar39 = (int *)(param_4 + (param_5 + 4 + iVar35) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)(param_5 + 4);
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar37 + 3) = uVar40;
          }
        }
        if ((bVar12) && (puVar34 = (ushort *)(psVar2 + -iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar40;
              iVar27 = param_1;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar27 = param_1 + 4;
                }
                else if (iVar36 != 1) {
                  iVar27 = param_1 + -2;
                }
              }
              else if (iVar36 == 0) {
                if (iVar21 != 1) {
                  iVar27 = param_1 + -2;
                }
              }
              else {
                iVar27 = param_1 + -4;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar38 + 3) = uVar40;
            }
          }
          piVar39 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                ((((*puVar32 & 0xc000) != 0xc000 &&
                  (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))
                 && ((psVar2[1] & 0xc000U) != 0xc000)))) &&
               (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)) {
              puVar32[1] = uVar40;
              if (iVar21 == 0) {
                iVar27 = param_1 + 4;
              }
              else if (iVar36 + 1 < iVar21) {
                iVar27 = param_1 + -2;
              }
              else {
                iVar27 = param_1;
                if (iVar21 != iVar36 + 1) {
                  iVar27 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar39 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar40;
            }
          }
          piVar38 = piVar39;
          if (((uVar29 == 0) &&
              ((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                ((puVar34[param_2] & 0xc000) != 0xc000)) &&
               (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))))) &&
             (((psVar2[-1] & 0xc000U) != 0xc000 && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)))) {
            puVar34[param_2 + -1] = uVar40;
            if (iVar36 == 0) {
              iVar27 = param_1 + 4;
            }
            else if (iVar21 + 1 < iVar36) {
              iVar27 = param_1 + -2;
            }
            else {
              iVar27 = param_1;
              if (iVar36 != iVar21 + 1) {
                iVar27 = param_1 + 2;
              }
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar39;
            piVar37 = (int *)(param_4 + (iVar27 + iVar35) * 4);
            *piVar39 = *piVar37;
            *piVar37 = (int)piVar39;
            *(short *)(piVar39 + 1) = sVar4 + -1;
            STField<short>(piVar39,6) = sVar5 + 1;
            *(short *)(piVar39 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
            STField<undefined2>(piVar39,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar39 + 3) = uVar40;
          }
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             (((puVar34[param_2] & 0xc000) != 0xc000 &&
              (((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))))
             )) {
            puVar34[param_2 + 1] = uVar40;
            param_1 = param_1 + 4;
            piVar37 = piVar38;
            goto LAB_006ce57c;
          }
        }
        break;
      case CASE_3:
        uVar42 = local_10 & 0x10;
        piVar37 = piVar38;
        if ((uVar42 == 0) && ((psVar2[-1] == 0 || (iVar24 + 3 < (int)psVar2[-1])))) {
          psVar2[-1] = (short)(iVar24 + 3);
          if (-iVar36 < iVar21) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          STField<short>(piVar38,6) = sVar5;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          *(short *)(piVar38 + 3) = sVar8 + 3;
        }
        if ((psVar2[1] == 0) || (piVar38 = piVar37, iVar24 + 3 < (int)psVar2[1])) {
          psVar2[1] = (short)(iVar24 + 3);
          if (-iVar21 == iVar36 || -iVar36 < iVar21) {
            iVar35 = GVar33 - CASE_1;
          }
          else {
            iVar35 = GVar33 - CASE_3;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + (iVar35 + iVar24 + 3) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        uVar28 = local_10 & 0x20;
        piVar37 = piVar38;
        if (uVar28 == 0) {
          sVar7 = psVar2[-param_2];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-param_2] = sVar8 + 3;
            if (iVar21 == 0) {
              if (iVar36 == 0) {
                iVar35 = GVar33 + CASE_3;
              }
              else {
                iVar35 = GVar33 + CASE_1;
              }
            }
            else if (-iVar36 < iVar21) {
              iVar35 = GVar33 - CASE_3;
            }
            else {
              iVar35 = GVar33 - CASE_1;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        uVar29 = local_10 & 2;
        piVar38 = piVar37;
        if ((uVar29 == 0) && ((psVar2[param_2] == 0 || (iVar24 + 3 < (int)psVar2[param_2])))) {
          psVar2[param_2] = sVar8 + 3;
          if (iVar21 < -iVar36) {
            iVar35 = GVar33 + CASE_1;
          }
          else {
            iVar35 = GVar33 + CASE_3;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (iVar35 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        piVar37 = piVar38;
        if (bVar12) {
          sVar7 = psVar2[-iVar18];
          if ((sVar7 == 0) || (iVar24 + 3 < (int)sVar7)) {
            psVar2[-iVar18] = sVar8 + 3;
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0xc + (param_1 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STField<short>(piVar38,10) = (short)param_1;
            *(short *)(piVar38 + 3) = sVar8 + 3;
          }
        }
        piVar38 = piVar37;
        if ((bVar44) && ((psVar2[iVar18] == 0 || (iVar24 + 3 < (int)psVar2[iVar18])))) {
          psVar2[iVar18] = sVar8 + 3;
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0xc + (param_5 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4;
          STField<short>(piVar37,6) = sVar5;
          *(short *)(piVar37 + 2) = sVar6 + 1;
          STField<short>(piVar37,10) = (short)param_5;
          *(short *)(piVar37 + 3) = sVar8 + 3;
        }
        if ((bVar44) && (-1 < psVar2[iVar18])) {
          piVar37 = piVar38;
          if ((uVar42 == 0) &&
             (((psVar2[iVar18 + -1] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + -1])) &&
              ((psVar2[-1] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + -1] = sVar8 + 4;
            if (-iVar36 < iVar21) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if (((psVar2[iVar18 + 1] == 0) || (iVar24 + 4 < (int)psVar2[iVar18 + 1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar2[iVar18 + 1] = sVar8 + 4;
            if (-iVar21 == iVar36 || -iVar36 < iVar21) {
              iVar35 = param_5 + -1;
            }
            else {
              iVar35 = param_5 + -3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar28 == 0) {
            sVar7 = psVar2[iVar18 - param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar2[iVar18 - param_2] = sVar8 + 4;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar35 = param_5 + 3;
                }
                else {
                  iVar35 = param_5 + 1;
                }
              }
              else if (-iVar36 < iVar21) {
                iVar35 = param_5 + -3;
              }
              else {
                iVar35 = param_5 + -1;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if ((uVar29 == 0) &&
             (((psVar2[iVar18 + param_2] == 0 || (iVar24 + 4 < (int)psVar2[iVar18 + param_2])) &&
              ((psVar2[param_2] & 0xc000U) != 0xc000)))) {
            psVar2[iVar18 + param_2] = sVar8 + 4;
            if (iVar21 < -iVar36) {
              iVar35 = param_5 + 1;
            }
            else {
              iVar35 = param_5 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        if ((bVar12) && (psVar30 = psVar2 + -iVar18, -1 < *psVar30)) {
          piVar37 = piVar38;
          if (((uVar42 == 0) && ((psVar30[-1] == 0 || (iVar24 + 4 < (int)psVar30[-1])))) &&
             ((psVar2[-1] & 0xc000U) != 0xc000)) {
            psVar30[-1] = sVar8 + 4;
            if (-iVar36 < iVar21) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5;
            *(short *)(piVar38 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
          piVar38 = piVar37;
          if (((psVar30[1] == 0) || (iVar24 + 4 < (int)psVar30[1])) &&
             ((psVar2[1] & 0xc000U) != 0xc000)) {
            psVar30[1] = sVar8 + 4;
            if (-iVar21 == iVar36 || -iVar36 < iVar21) {
              iVar35 = param_1 + -1;
            }
            else {
              iVar35 = param_1 + -3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
          piVar37 = piVar38;
          if (uVar28 == 0) {
            sVar7 = psVar30[-param_2];
            if (((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
               ((psVar2[-param_2] & 0xc000U) != 0xc000)) {
              psVar30[-param_2] = sVar8 + 4;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar35 = param_1 + 3;
                }
                else {
                  iVar35 = param_1 + 1;
                }
              }
              else if (-iVar36 < iVar21) {
                iVar35 = param_1 + -3;
              }
              else {
                iVar35 = param_1 + -1;
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(short *)(piVar38 + 3) = sVar8 + 4;
            }
          }
          piVar38 = piVar37;
          if (((uVar29 == 0) && ((psVar30[param_2] == 0 || (iVar24 + 4 < (int)psVar30[param_2]))))
             && ((psVar2[param_2] & 0xc000U) != 0xc000)) {
            psVar30[param_2] = sVar8 + 4;
            if (iVar21 < -iVar36) {
              iVar35 = param_1 + 1;
            }
            else {
              iVar35 = param_1 + 3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (iVar35 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + -1;
            STPiece<0,2>(param_3_after_write) = (undefined2)iVar35;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar42 = local_10 & 0x30;
        piVar37 = piVar38;
        if (uVar42 == 0) {
          psVar30 = (short *)((int)psVar2 - (param_2 * 2 + 2));
          sVar7 = *psVar30;
          if ((((sVar7 == 0) || (iVar24 + 4 < (int)sVar7)) &&
              ((psVar2[-param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
            *psVar30 = sVar8 + 4;
            if (iVar21 == 0) {
              GVar31 = GVar33 + 4;
            }
            else if (1 - iVar36 < iVar21) {
              GVar31 = GVar33 - CASE_2;
            }
            else {
              GVar31 = GVar33;
              if (iVar21 != 1 - iVar36) {
                GVar31 = GVar33 + CASE_2;
              }
            }
            param_9 = param_9 + -1;
            piVar37 = (int *)*piVar38;
            piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + -1;
            *(short *)(piVar38 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
            STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
            *(short *)(piVar38 + 3) = sVar8 + 4;
          }
        }
        uVar28 = local_10 & 0x21;
        piVar38 = piVar37;
        if (uVar28 == 0) {
          puVar34 = (ushort *)(psVar2 + -param_2);
          if (((puVar34[1] == 0) || (iVar24 + 4 < (int)(short)puVar34[1])) &&
             (((*puVar34 & 0xc000) != 0xc000 && ((psVar2[1] & 0xc000U) != 0xc000)))) {
            puVar34[1] = sVar8 + 4;
            if (iVar21 == 0) {
              if (iVar36 == 0) {
                GVar31 = GVar33 + 4;
              }
              else {
                GVar31 = GVar33;
                if (iVar36 != -1) {
                  GVar31 = GVar33 - CASE_2;
                }
              }
            }
            else {
              GVar31 = GVar33 + ~CASE_3;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + 0x10 + (GVar31 + iVar24) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + -1;
            *(short *)(piVar37 + 2) = sVar6;
            STPiece<0,2>(param_3_after_write) = (undefined2)GVar31;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(short *)(piVar37 + 3) = sVar8 + 4;
          }
        }
        uVar29 = local_10 & 0x12;
        piVar37 = piVar38;
        if ((((uVar29 == 0) &&
             ((psVar2[param_2 + -1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + -1])))) &&
            ((psVar2[param_2] & 0xc000U) != 0xc000)) && ((psVar2[-1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + -1] = sVar8 + 4;
          param_9 = param_9 + -1;
          piVar37 = (int *)*piVar38;
          piVar39 = (int *)(param_4 + 0x10 + (GVar33 + 4 + iVar24) * 4);
          *piVar38 = *piVar39;
          *piVar39 = (int)piVar38;
          *(short *)(piVar38 + 1) = sVar4 + -1;
          STField<short>(piVar38,6) = sVar5 + 1;
          *(short *)(piVar38 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)(GVar33 + 4);
          STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
          *(short *)(piVar38 + 3) = sVar8 + 4;
        }
        local_10 = local_10 & 3;
        piVar38 = piVar37;
        if (((local_10 == 0) &&
            (((psVar2[param_2 + 1] == 0 || (iVar24 + 4 < (int)psVar2[param_2 + 1])) &&
             ((psVar2[param_2] & 0xc000U) != 0xc000)))) && ((psVar2[1] & 0xc000U) != 0xc000)) {
          psVar2[param_2 + 1] = sVar8 + 4;
          bVar43 = -(iVar21 + 1) == iVar36;
          if (bVar43 || -iVar36 < iVar21 + 1) {
            if (!bVar43) {
              GVar33 = GVar33 + CASE_2;
            }
          }
          else {
            GVar33 = GVar33 - CASE_2;
          }
          param_9 = param_9 + -1;
          piVar38 = (int *)*piVar37;
          piVar39 = (int *)(param_4 + 0x10 + (GVar33 + iVar24) * 4);
          *piVar37 = *piVar39;
          *piVar39 = (int)piVar37;
          *(short *)(piVar37 + 1) = sVar4 + 1;
          STField<short>(piVar37,6) = sVar5 + 1;
          *(short *)(piVar37 + 2) = sVar6;
          STPiece<0,2>(param_3_after_write) = (undefined2)GVar33;
          STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
          *(short *)(piVar37 + 3) = sVar8 + 4;
        }
        iVar35 = iVar24 + 5;
        uVar40 = (ushort)iVar35;
        if ((bVar44) && (puVar34 = (ushort *)(psVar2 + iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar40;
              if (iVar21 == 0) {
                iVar27 = param_5 + 4;
              }
              else if (1 - iVar36 < iVar21) {
                iVar27 = param_5 + -2;
              }
              else {
                iVar27 = param_5;
                if (iVar21 != 1 - iVar36) {
                  iVar27 = param_5 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar38 + 3) = uVar40;
            }
          }
          piVar38 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar27 = param_5 + 4;
                }
                else {
                  iVar27 = param_5;
                  if (iVar36 != -1) {
                    iVar27 = param_5 + -2;
                  }
                }
              }
              else {
                iVar27 = param_5 + -4;
              }
              param_9 = param_9 + -1;
              piVar38 = (int *)*piVar37;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar37 = *piVar39;
              *piVar39 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + 1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar40;
            }
          }
          piVar37 = piVar38;
          if (((uVar29 == 0) &&
              (((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)))) &&
               ((psVar2[-1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar40;
            piVar37 = (int *)*piVar38;
            param_9 = param_9 + -1;
            piVar39 = (int *)(param_4 + (param_5 + 4 + iVar35) * 4);
            *piVar38 = *piVar39;
            *piVar39 = (int)piVar38;
            *(short *)(piVar38 + 1) = sVar4 + -1;
            STField<short>(piVar38,6) = sVar5 + 1;
            *(short *)(piVar38 + 2) = sVar6 + 1;
            STField<short>(piVar38,10) = (short)param_5 + 4;
            *(ushort *)(piVar38 + 3) = uVar40;
          }
          piVar38 = piVar37;
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             (((puVar34[param_2] & 0xc000) != 0xc000 &&
              (((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))))
             )) {
            puVar34[param_2 + 1] = uVar40;
            bVar44 = -(iVar21 + 1) == iVar36;
            if (bVar44 || -iVar36 < iVar21 + 1) {
              if (!bVar44) {
                param_5 = param_5 + 2;
              }
            }
            else {
              param_5 = param_5 + -2;
            }
            param_9 = param_9 + -1;
            piVar38 = (int *)*piVar37;
            piVar39 = (int *)(param_4 + (param_5 + iVar35) * 4);
            *piVar37 = *piVar39;
            *piVar39 = (int)piVar37;
            *(short *)(piVar37 + 1) = sVar4 + 1;
            STField<short>(piVar37,6) = sVar5 + 1;
            *(short *)(piVar37 + 2) = sVar6 + 1;
            STPiece<0,2>(param_3_after_write) = (undefined2)param_5;
            STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
            *(ushort *)(piVar37 + 3) = uVar40;
          }
        }
        if ((bVar12) && (puVar34 = (ushort *)(psVar2 + -iVar18), (*puVar34 & 0xc000) != 0xc000)) {
          piVar37 = piVar38;
          if (uVar42 == 0) {
            puVar32 = (ushort *)((int)puVar34 - (param_2 * 2 + 2));
            uVar10 = *puVar32;
            if ((((uVar10 == 0) || (iVar35 < (short)uVar10)) &&
                (((puVar34[-param_2] & 0xc000) != 0xc000 &&
                 ((((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000)) &&
                  ((psVar2[-1] & 0xc000U) != 0xc000)))))) &&
               ((*(ushort *)((int)psVar2 - (param_2 * 2 + 2)) & 0xc000) != 0xc000)) {
              *puVar32 = uVar40;
              if (iVar21 == 0) {
                iVar27 = param_1 + 4;
              }
              else if (1 - iVar36 < iVar21) {
                iVar27 = param_1 + -2;
              }
              else {
                iVar27 = param_1;
                if (iVar21 != 1 - iVar36) {
                  iVar27 = param_1 + 2;
                }
              }
              param_9 = param_9 + -1;
              piVar37 = (int *)*piVar38;
              piVar39 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar38 = *piVar39;
              *piVar39 = (int)piVar38;
              *(short *)(piVar38 + 1) = sVar4 + -1;
              STField<short>(piVar38,6) = sVar5 + -1;
              *(short *)(piVar38 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar38,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar38 + 3) = uVar40;
            }
          }
          piVar39 = piVar37;
          if (uVar28 == 0) {
            puVar32 = puVar34 + -param_2;
            if ((((puVar32[1] == 0) || (iVar35 < (short)puVar32[1])) &&
                (((*puVar32 & 0xc000) != 0xc000 &&
                 (((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[-param_2] & 0xc000U) != 0xc000))))))
               && (((psVar2[1] & 0xc000U) != 0xc000 &&
                   (((psVar2 + -param_2)[1] & 0xc000U) != 0xc000)))) {
              puVar32[1] = uVar40;
              if (iVar21 == 0) {
                if (iVar36 == 0) {
                  iVar27 = param_1 + 4;
                }
                else {
                  iVar27 = param_1;
                  if (iVar36 != -1) {
                    iVar27 = param_1 + -2;
                  }
                }
              }
              else {
                iVar27 = param_1 + -4;
              }
              param_9 = param_9 + -1;
              piVar39 = (int *)*piVar37;
              piVar38 = (int *)(param_4 + (iVar27 + iVar35) * 4);
              *piVar37 = *piVar38;
              *piVar38 = (int)piVar37;
              *(short *)(piVar37 + 1) = sVar4 + 1;
              STField<short>(piVar37,6) = sVar5 + -1;
              *(short *)(piVar37 + 2) = sVar6 + -1;
              STPiece<0,2>(param_3_after_write) = (undefined2)iVar27;
              STField<undefined2>(piVar37,10) = (undefined2)param_3_after_write;
              *(ushort *)(piVar37 + 3) = uVar40;
            }
          }
          piVar38 = piVar39;
          if ((((uVar29 == 0) &&
               ((((puVar34[param_2 + -1] == 0 || (iVar35 < (short)puVar34[param_2 + -1])) &&
                 ((puVar34[param_2] & 0xc000) != 0xc000)) &&
                (((puVar34[-1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000))))))
              && ((psVar2[-1] & 0xc000U) != 0xc000)) && ((psVar2[param_2 + -1] & 0xc000U) != 0xc000)
             ) {
            puVar34[param_2 + -1] = uVar40;
            piVar38 = (int *)*piVar39;
            param_9 = param_9 + -1;
            piVar37 = (int *)(param_4 + (param_1 + 4 + iVar35) * 4);
            *piVar39 = *piVar37;
            *piVar37 = (int)piVar39;
            *(short *)(piVar39 + 1) = sVar4 + -1;
            STField<short>(piVar39,6) = sVar5 + 1;
            *(short *)(piVar39 + 2) = sVar6 + -1;
            STField<short>(piVar39,10) = (short)param_1 + 4;
            *(ushort *)(piVar39 + 3) = uVar40;
          }
          if (((local_10 == 0) &&
              ((puVar34[param_2 + 1] == 0 || (iVar35 < (short)puVar34[param_2 + 1])))) &&
             ((((puVar34[param_2] & 0xc000) != 0xc000 &&
               ((((puVar34[1] & 0xc000) != 0xc000 && ((psVar2[param_2] & 0xc000U) != 0xc000)) &&
                ((psVar2[1] & 0xc000U) != 0xc000)))) && ((psVar2[param_2 + 1] & 0xc000U) != 0xc000))
             )) {
            puVar34[param_2 + 1] = uVar40;
            iVar27 = iVar36;
            iVar35 = iVar21;
            goto LAB_006ce561;
          }
        }
      }
      if (0 < *psVar1) goto cf_break_loop_006CE641;
      if ((((bVar13) && (-2 < iVar36)) && ((iVar36 < 2 && ((-2 < iVar21 && (iVar21 < 2)))))) &&
         ((-2 < iVar23 && (iVar23 < 2)))) {
        bVar14 = true;
      }
    }
    local_54 = local_54 + 1;
    piVar37 = (int *)*piVar22;
  } while ((int *)*piVar22 != nullptr);
  *piVar22 = (int)piVar38;
  param_9 = param_9 + local_54;
  piVar38 = piVar11;
  if (bVar14) goto cf_break_loop_006CE641;
  goto cf_continue_loop_006C9187;
cf_break_loop_006CE63A:
  local_4c_mg0 = piVar37;
  local_38 = 0xfffffffe;
cf_break_loop_006CE641:
  if (sVar3 < 0) {
    *psVar1 = sVar3;
  }
  st::fn_006A5E90((short *)param_4);
  while (local_4c_mg0 != nullptr) {
    piVar37 = (int *)*local_4c_mg0;
    st::fn_006A5E90((short *)local_4c_mg0);
    local_4c_mg0 = piVar37;
  }
  return local_38;
}

// 006CE6C0 FUN_006ce6c0
#line 4 "decomp/ST.exe/functions/006CE6C0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006C5A10 -> 006CE6C0 @ 006C5A60

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 006C5A10 -> 006CE6C0 @ 006C5A60; FUN_006c5a10 parameter param_6 | 006DDBE0 -> 006CE6C0
   @ 006DDCFC; literal 30000 at 006DDCF2 | 006E1050 -> 006CE6C0 @ 006E11E2; literal 30000 at
   006E11DB | 006E1460 -> 006CE6C0 @ 006E1B25; literal 30000 at 006E1B1E */

undefined4 * st::fn_006CE6C0(ushort *param_1,uint param_2,ushort param_3)

{
  uint uVar1;
  ushort *puVar2;

  if (param_2 != 0) {
    puVar2 = param_1;
    for (uVar1 = param_2 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(uint *)puVar2 = CONCAT22(param_3,param_3);
      puVar2 = puVar2 + 2;
    }
    for (uVar1 = (uint)((param_2 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = param_3;
      puVar2 = puVar2 + 1;
    }
    return (undefined4 *)param_1;
  }
  return (undefined4 *)param_1;
}

// 006CE700 FUN_006ce700
#line 4 "decomp/ST.exe/functions/006CE700/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: complete mutable byte-buffer machine proof: direct_calls=4, byte_reads=3,
   byte_writes=3, rep_movs_transports=0, wide_dereferences=2, escapes=0; byte_read_sites=006CE72D
   MOV AL,byte ptr [ESI] | 006CE73E MOV AL,byte ptr [ESI] | 006CE74F MOV AL,byte ptr [ESI];
   byte_write_sites=006CE733 MOV byte ptr [ESI + -0x1],DL | 006CE744 MOV byte ptr [ESI + -0x1],DL |
   006CE755 MOV byte ptr [ESI + -0x1],DL; wide_sites=006CE713 MOV EAX,dword ptr [ESI] operand=DWORD
   PTR [ESI] width=4 | 006CE71D MOV dword ptr [ESI + -0x4],EDX operand=DWORD PTR [ESI + -0X4]
   width=4

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: complete mutable byte-buffer machine proof: direct_calls=4, byte_reads=3,
   byte_writes=3, rep_movs_transports=0, wide_dereferences=2, escapes=0; byte_read_sites=006CE730
   MOV DL,byte ptr [EDI] | 006CE741 MOV DL,byte ptr [EDI] | 006CE752 MOV DL,byte ptr [EDI];
   byte_write_sites=006CE739 MOV byte ptr [EDI + -0x1],AL | 006CE74A MOV byte ptr [EDI + -0x1],AL |
   006CE758 MOV byte ptr [EDI + -0x1],AL; wide_sites=006CE718 MOV EDX,dword ptr [EDI] operand=DWORD
   PTR [EDI] width=4 | 006CE723 MOV dword ptr [EDI + -0x4],EAX operand=DWORD PTR [EDI + -0X4]
   width=4 */

void st::fn_006CE700(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;

  while (bVar3 = 3 < param_3, param_3 = param_3 + -4, bVar3) {
    uVar2 = *(undefined4 *)param_1;
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)param_2 = uVar2;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  cVar4 = (char)param_3;
  if (-4 < cVar4) {
    bVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = bVar1;
    if (-3 < cVar4) {
      bVar1 = param_1[1];
      param_1[1] = param_2[1];
      param_2[1] = bVar1;
      if (-2 < cVar4) {
        bVar1 = param_1[2];
        param_1[2] = param_2[2];
        param_2[2] = bVar1;
      }
    }
  }
  return;
}

// 006CEA60 CopyRows
#line 4 "decomp/ST.exe/functions/006CEA60/decomp.c"
/* [STUtilityFunctionApplier] copy_rows: copies rowCount rows of rowBytes bytes between
   independently pitched byte buffers
   Evidence: body pattern verified */

void st::fn_006CEA60(byte *destination,int destinationPitch,byte *source,int sourcePitch,uint rowBytes,
             int rowCount)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar9;
  uint uVar10;
  uint uVar8;
  uint uVar4;
  uint temp_3f510afb7e;
  uint temp_79f46df8256;

  if ((0 < (int)rowBytes) && (0 < rowCount)) {
    uVar10 = sourcePitch - rowBytes;
    uVar6 = destinationPitch - rowBytes;
    uVar8 = rowBytes;
    if (0xe < (int)rowBytes) {
      temp_3f510afb7e = rowBytes;
      if (((byte)DAT_00858de0 & 1) == 0) {
        do {
          for (; ((uint)destination & 3) != 0; destination = destination + 1) {
            bVar2 = *source;
            source = source + 1;
            *destination = bVar2;
            temp_3f510afb7e = temp_3f510afb7e - 1;
          }
          for (uVar5 = temp_3f510afb7e >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)destination = *(undefined4 *)source;
            source = source + 4;
            destination = destination + 4;
          }
          uVar5 = temp_3f510afb7e & 3;
          if ((temp_3f510afb7e & 3) != 0) {
            do {
              bVar2 = *source;
              source = source + 1;
              *destination = bVar2;
              destination = destination + 1;
              uVar9 = uVar5 - 1;
              bVar3 = 0 < (int)uVar5;
              uVar5 = uVar9;
            } while (uVar9 != 0 && bVar3);
          }
          source = source + uVar10;
          destination = destination + uVar6;
          iVar7 = rowCount + -1;
          bVar3 = 0 < rowCount;
          temp_3f510afb7e = rowBytes;
          rowCount = iVar7;
        } while (iVar7 != 0 && bVar3);
        return;
      }
      uVar4 = rowBytes;
      if ((((699 < (int)rowBytes) && (5 < DAT_00858e24)) &&
          ((((uint)destination ^ (uint)source) & 7) == 0)) &&
         (temp_79f46df8256 = rowBytes, ((uVar6 ^ uVar10) & 7) == 0)) {
        do {
          for (; ((uint)destination & 7) != 0; destination = destination + 1) {
            bVar2 = *source;
            source = source + 1;
            *destination = bVar2;
            temp_79f46df8256 = temp_79f46df8256 - 1;
          }
          for (uVar5 = temp_79f46df8256 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *(undefined4 *)destination = *(undefined4 *)source;
            source = source + 4;
            destination = destination + 4;
          }
          uVar5 = temp_79f46df8256 & 3;
          if ((temp_79f46df8256 & 3) != 0) {
            do {
              bVar2 = *source;
              source = source + 1;
              *destination = bVar2;
              destination = destination + 1;
              uVar9 = uVar5 - 1;
              bVar3 = 0 < (int)uVar5;
              uVar5 = uVar9;
            } while (uVar9 != 0 && bVar3);
          }
          source = source + uVar10;
          destination = destination + uVar6;
          iVar7 = rowCount + -1;
          bVar3 = 0 < rowCount;
          temp_79f46df8256 = rowBytes;
          rowCount = iVar7;
        } while (iVar7 != 0 && bVar3);
        return;
      }
      do {
        for (; ((uint)destination & 7) != 0; destination = destination + 1) {
          bVar2 = *source;
          source = source + 1;
          *destination = bVar2;
          uVar4 = uVar4 - 1;
        }
        uVar5 = uVar4 >> 3;
        do {
          uVar1 = *(undefined8 *)source;
          source = source + 8;
          *(undefined8 *)destination = uVar1;
          destination = destination + 8;
          uVar9 = uVar5 - 1;
          bVar3 = 0 < (int)uVar5;
          uVar5 = uVar9;
        } while (uVar9 != 0 && bVar3);
        uVar5 = uVar4 & 7;
        if ((uVar4 & 7) != 0) {
          do {
            bVar2 = *source;
            source = source + 1;
            *destination = bVar2;
            destination = destination + 1;
            uVar9 = uVar5 - 1;
            bVar3 = 0 < (int)uVar5;
            uVar5 = uVar9;
          } while (uVar9 != 0 && bVar3);
        }
        source = source + uVar10;
        destination = destination + uVar6;
        iVar7 = rowCount + -1;
        bVar3 = 0 < rowCount;
        uVar4 = rowBytes;
        rowCount = iVar7;
      } while (iVar7 != 0 && bVar3);
      return;
    }
    do {
      do {
        bVar2 = *source;
        source = source + 1;
        *destination = bVar2;
        destination = destination + 1;
        uVar5 = uVar8 - 1;
        bVar3 = 0 < (int)uVar8;
        uVar8 = uVar5;
      } while (uVar5 != 0 && bVar3);
      source = source + uVar10;
      destination = destination + uVar6;
      iVar7 = rowCount + -1;
      bVar3 = 0 < rowCount;
      uVar8 = rowBytes;
      rowCount = iVar7;
    } while (iVar7 != 0 && bVar3);
  }
  return;
}

// 006CEBE0 FUN_006cebe0
#line 1 "decomp/ST.exe/functions/006CEBE0/decomp.c"

void st::fn_006CEBE0(char *param_1,int param_2,char *param_3,int param_4,int param_5,int param_6,
                 char param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar2 = param_5;
  iVar4 = param_2 - param_5;
  iVar3 = param_4 - param_5;
  if ((0 < param_5) && (0 < param_6)) {
    auto param_5_after_write = param_6; /* compiler stack-slot lifetime split */
    do {
      iVar5 = iVar2;
      if (0 < iVar2) {
        do {
          cVar1 = *param_3;
          param_3 = param_3 + 1;
          if (cVar1 != param_7) {
            *param_1 = cVar1;
          }
          param_1 = param_1 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      param_1 = param_1 + iVar4;
      param_3 = param_3 + iVar3;
      param_5_after_write = param_5_after_write + -1;
    } while (param_5_after_write != 0);
  }
  return;
}

// 006CEC40 FUN_006cec40
#line 4 "decomp/ST.exe/functions/006CEC40/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return

   [STReturnSemanticsApplier] repair_unsafe_eax_rollback.
   Evidence: restore the earlier evidence-backed void type after an unsafe automated rollback;
   post-CALL EAX reads alone do not prove a source-level return value; machine CFG audit: used=13,
   ignored=33, unknown=0 */

void st::fn_006CEC40(AnonShape_006CEC40_BB23E716 *param_1)

{
  int *piVar1;
  int iVar2;

  if (param_1 != nullptr) {
    piVar1 = param_1->field_0034;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006CEC55]: CALL dword ptr [ECX + 0x6c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 0x6c))(piVar1);
    }
    piVar1 = param_1->field_0040;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006CEC62]: CALL dword ptr [EDX + 0x6c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1);
      if (iVar2 == -0x7789fdb5) {
        st::fn_006CECB0((AnonShape_006CECB0_97249119 *)param_1,1);
      }
    }
    piVar1 = param_1->field_0044;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006CEC7E]: CALL dword ptr [ECX + 0x6c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar2 = (**(code **)(*piVar1 + 0x6c))(piVar1);
      if (iVar2 == -0x7789fdb5) {
        st::fn_006CECB0((AnonShape_006CECB0_97249119 *)param_1,0);
      }
    }
    piVar1 = param_1->field_0048;
    if (piVar1 != nullptr) {
      /* ST_CALLSITE[006CEC9A]: CALL dword ptr [EDX + 0x6c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*piVar1 + 0x6c))(piVar1);
    }
  }
  return;
}

// 006CECB0 FUN_006cecb0
#line 4 "decomp/ST.exe/functions/006CECB0/decomp.c"
int st::fn_006CECB0(AnonShape_006CECB0_97249119 *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_38c [95];
  undefined4 local_210;
  byte local_20c;
  byte local_164;
  undefined4 local_94 [18];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_2c;
  uint local_18 [4];
  int *local_8;

  memset(local_94, 0, 0x7c); /* compiler bulk-zero initialization */
  local_94[3] = param_1->field_0018;
  local_94[2] = param_1->field_001C;
  local_8 = nullptr;
  local_94[0] = 0x7c;
  local_94[1] = 7;
  local_2c = 0x40;
  if (((param_1->field_000C & 0x200) != 0) ||
     ((param_2 != 0 && ((param_1->field_0008 & 0x10000000) != 0)))) {
    local_2c = 0x840;
  }
  if (param_1->field_0020 == 8) {
    local_94[1] = 0x1007;
    local_4c = 0x20;
    local_48 = 0x60;
    local_40 = 8;
  }
  /* ST_CALLSITE[006CED5A]: CALL dword ptr [EDX + 0x18] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar3 = (**(code **)(*param_1->field_0030 + 0x18))(param_1->field_0030,local_94,&local_8,0);
  if (iVar3 == 0) {
    if (param_2 == 0) {
      piVar1 = (int *)param_1->field_0044;
      if (piVar1 != nullptr) {
        /* ST_CALLSITE[006CEDF6]: CALL dword ptr [ECX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0044 = 0;
      }
      param_1->field_0044 = st::machine_word_boundary_cast<undefined4>(local_8);
    }
    else {
      piVar1 = (int *)param_1->field_0040;
      if (piVar1 != nullptr) {
        /* ST_CALLSITE[006CED78]: CALL dword ptr [EDX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*piVar1 + 8))(piVar1);
        param_1->field_0040 = 0;
      }
      param_1->field_0040 = st::machine_word_boundary_cast<undefined4>(local_8);
      /* ST_CALLSITE[006CED8B]: CALL dword ptr [ECX + 0x38] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*local_8 + 0x38))(local_8,local_18);
      local_210 = 0x17c;
      local_38c[0] = 0x17c;
      /* ST_CALLSITE[006CEDB3]: CALL dword ptr [ECX + 0x2c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*param_1->field_0030 + 0x2c))(param_1->field_0030,&local_210,local_38c);
      uVar2 = st::machine_word_boundary_cast<uint>(param_1->field_000C & 0xfffffffd);
      param_1->field_000C = uVar2;
      if ((((local_18[0] & 0x4000) != 0) && ((local_20c & 0x40) != 0)) ||
         (((local_18[0] & 0x800) != 0 && ((local_164 & 0x40) != 0)))) {
        param_1->field_000C = uVar2 | 2;
        return 0;
      }
    }
  }
  return iVar3;
}

// 006CEE10 FUN_006cee10
#line 1 "decomp/ST.exe/functions/006CEE10/decomp.c"

int st::fn_006CEE10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_2 + 0x4c);
  if (iVar2 < 0) {
    if ((iVar2 != -2) && (iVar2 != -1)) {
      return 10;
    }
    iVar3 = 0;
    piVar4 = (int *)(param_1 + 0xc4);
    do {
      iVar1 = iVar3;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*piVar4 == *(int *)(param_2 + 0x44)) break;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
      iVar1 = iVar2;
    } while (iVar3 < 10);
    iVar2 = iVar1;
    if (iVar2 == -2) {
      iVar2 = 1;
    }
  }
  return iVar2;
}

// 006CEE60 FUN_006cee60
#line 4 "decomp/ST.exe/functions/006CEE60/decomp.c"
void st::fn_006CEE60(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;

  piVar1 = (int *)(param_1 + 0x1a0);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  puVar4 = (uint *)**(undefined4 **)(param_1 + 0x1ac);
  auto param_1_after_write = *piVar1; /* compiler stack-slot lifetime split */
  if (0 < *piVar1) {
    do {
      uVar2 = *puVar4;
      if (((uVar2 & 0x8000) != 0) && ((uVar2 & 0xa0000000) != 0)) {
        if ((uVar2 & 0x20000000) == 0) {
          uVar2 = puVar4[0x32];
          iVar3 = 0;
          if (0 < (int)uVar2) {
            do {
              piVar1 = *(int **)(puVar4[0x33] + iVar3 * 4);
              /* ST_CALLSITE[006CEEB9]: CALL dword ptr [ECX + 0x6c] */
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
              (**(code **)(*piVar1 + 0x6c))(piVar1);
              iVar3 = iVar3 + 1;
            } while (iVar3 < (int)uVar2);
          }
        }
        else {
          /* ST_CALLSITE[006CEE9C]: CALL dword ptr [EDX + 0x6c] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)(*(int *)puVar4[0x33] + 0x6c))((int *)puVar4[0x33]);
        }
      }
      puVar4 = puVar4 + 0x35;
      param_1_after_write = param_1_after_write + -1;
    } while (param_1_after_write != 0);
  }
  return;
}

// 006CEEE0 FUN_006ceee0
#line 4 "decomp/ST.exe/functions/006CEEE0/decomp.c"
int st::fn_006CEEE0(AnonShape_006CEEE0_CDA60BFB *param_1,int *param_2,int param_3)

{
  int iVar2;
  int iVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;

  iVar2 = param_3 * 0x10;
  local_14 = *(int *)(&param_1->field_0x14 + iVar2);
  local_10 = *(undefined4 *)(&param_1->field_0x18 + iVar2);
  local_c = *(undefined4 *)(&param_1->field_0x1c + iVar2);
  local_8 = *(undefined4 *)(&param_1->field_0x20 + iVar2);
  iVar2 = st::fn_006CFEB0(&local_24,param_2,&local_14);
  if (iVar2 != 0) {
    iVar1 = st::fn_006D1AD0(param_1->field_01C0,100,local_24,local_20,local_1c,local_18,
                         param_1->field_000C,param_1->field_0010,1);
    return iVar1;
  }
  return 0;
}

// 006CEF60 FUN_006cef60
#line 4 "decomp/ST.exe/functions/006CEF60/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 2.
   Evidence: 006CEF60 -> 006D3300 @ 006CF376 | 006CEF60 -> 006D86E0 @ 006CF53E | 006CEF60 ->
   006D8A60 @ 006CF5EF | 006CEF60 -> 006DA080 @ 006CF4D7

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 006B3120 -> 006CEF60 @ 006B3384

   [STTypeFamilyApplier] SOURCE_FUNCTION_FAMILY.
   Evidence: one script-owned pointer shape is anchored by one library source basename, multiple
   semantic function names, and exact first-argument call flow */

int st::fn_006CEF60(int *param_1,AnonShape_006D86E0_D6D32C07 *param_2,
                RecoveredSourceFamily_dibcopy *param_3,int param_4,
                AnonShape_006D86E0_768BB816 *param_5,char *param_6,int param_7,int param_8,
                int *param_9,int param_10,int param_11,uint param_12,undefined1 *param_13)

{
  alignas(4) byte st_stack_frame[272];

  int *piVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  AnonShape_006D86E0_768BB816 *pAVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  AnonShape_006D86E0_D6D32C07 *pAVar13;
  uint uVar14;
  int local_a0;
  int local_90;
  int local_8c;
  int local_60;
  int local_5c;
  uint local_58;
  byte *local_54;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  byte *local_2c;
  int local_28;
  int local_24;
  uint local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  piVar3 = param_9;
  local_8 = 0xffffffff;
  puStack_c = (undefined *)&DAT_0079da38;
  puStack_10 = (undefined1 *)&st_image_0072D964;
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 44);
  iVar12 = 0;
  local_28 = 0;
  piVar1 = param_1 + param_11 * 4 + 5;
  local_48 = *piVar1;
  local_44 = piVar1[1];
  local_40 = piVar1[2];
  local_3c = piVar1[3];
  local_38 = param_7;
  local_34 = param_8;
  local_30 = param_9[2];
  local_2c = (byte *)param_9[3];
  ExceptionList = &local_14;
  iVar4 = st::fn_006CFEB0(&local_38,&local_38,&local_48);
  pbVar2 = local_2c;
  uVar8 = local_30;
  iVar7 = local_34;
  iVar5 = local_38;
  pAVar6 = param_5;
  iVar11 = param_4;
  if (iVar4 == 0) goto LAB_006cf911;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)(*param_1 + 0x20) == 0x10) && (local_24 = *(int *)(param_4 + 0xb4), local_24 == 0)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_24 = *(int *)(*param_1 + 0x4c0);
  }
  if ((param_12 & 0xa0000000) != 0) {
    local_30 = local_30 + local_38;
    local_2c = local_2c + local_34;
    local_60 = (*piVar3 - param_7) + local_38;
    local_5c = (piVar3[1] - param_8) + local_34;
    local_58 = (local_60 - local_38) + local_30;
    local_54 = local_2c + (local_5c - local_34);
    iVar11 = 0;
    /* ST_CALLSITE[006CF06F]: CALL dword ptr [ECX + 0x14] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    while (iVar5 = (**(code **)(**(int **)(*param_1 + 0x44) + 0x14))
                             /* ST_CALLSITE[006CF06F]: CALL dword ptr [ECX + 0x14] */
                             (*(int **)(*param_1 + 0x44),&local_38,param_5,&local_60,0x1008000,0),
          iVar5 != 0) {
      if (iVar5 == -0x7789fe3e) {
        st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)*param_1);
        st::fn_006CEE60((int)param_1);
      }
      else {
        if (((iVar5 != -0x7789ff60) && (iVar5 != -0x7789fe52)) || (iVar11 != 0)) break;
        st::external_00000050(2);
      }
      iVar11 = iVar11 + 1;
      if (1 < iVar11) break;
    }
    if ((iVar5 == -0x7789ff60) || (local_28 = iVar5, iVar5 == -0x7789fe52)) {
      local_28 = 0;
    }
    goto LAB_006cf911;
  }
  if ((param_12 & 0xc0000000) != 0) {
    if (param_6 == nullptr) {
      param_6 = (char *)st::fn_006B4FA0((int *)param_5);
    }
    uVar8 = (uint)*(ushort *)&pAVar6->field_0xe * *(int *)&pAVar6->field_0x4 + 0x1f >> 3 &
            0x1ffffffc;
    param_6 = param_6 + ((*(int *)&pAVar6->field_0x8 - ((param_9[1] - param_8) + local_34)) -
                        (int)local_2c) * uVar8 + (*param_9 - param_7) + local_38;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (AnonShape_006D86E0_D6D32C07 *)
              (&param_2->field_0x0 + (int)(local_2c + local_34 + -1) * (int)param_3 + local_38);
    local_8 = 0;
    st::fn_006CEBE0((char *)param_2,-(int)param_3,param_6,uVar8,local_30,(int)local_2c,
                 ((char *)iVar11)[0x54]);
    goto LAB_006cf911;
  }
  if ((param_12 & 0x5000000) != 0) {
    local_8c = 0;
    if ((char)param_12 == '\x02') {
      local_28 = st::fn_006D9F30(param_1,local_38,local_34,local_30,(int)local_2c);
      if (local_28 != 0) goto LAB_006cf911;
      local_4c = 0;
      local_28 = 0;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar12 = st::fn_006BBE40(*(int **)(*param_1 + 0x44),(uint *)&param_2,(int *)&param_3,0x20);
        local_28 = iVar12;
        if (iVar12 == 0) goto LAB_006cf209;
        if (iVar12 != -0x7789fe3e) break;
        st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)*param_1);
        local_4c = local_4c + 1;
      } while (local_4c < 2);
      if (iVar12 != 0) goto LAB_006cf911;
    }
LAB_006cf209:
    local_30 = local_30 + local_38;
    local_2c = local_2c + local_34;
    local_a0 = 0;
    for (pAVar6 = param_5; (local_a0 < param_10 && (iVar5 = *(int *)&pAVar6->field_0x6, iVar5 != 0))
        ; pAVar6 = (AnonShape_006D86E0_768BB816 *)&pAVar6->field_0xa) {
      if (-1 < *(short *)&pAVar6->field_0x4) {
        iVar7 = ((int)*(short *)pAVar6 - *(int *)(iVar11 + 0x28)) + *(int *)(iVar11 + 0x18);
        iVar12 = ((int)*(short *)&pAVar6->field_0002 - *(int *)(iVar11 + 0x2c)) +
                 *(int *)(iVar11 + 0x1c);
        iVar4 = ((int)*(short *)(iVar5 + 0xe) - *param_9) + iVar7 + param_7;
        iVar9 = ((int)*(short *)(iVar5 + 0x10) - param_9[1]) + iVar12 + param_8;
        local_58 = (uint)*(short *)(iVar5 + 0x12);
        local_54 = (byte *)(int)*(short *)(iVar5 + 0x14);
        local_60 = iVar4;
        local_5c = iVar9;
        iVar5 = st::fn_006CFEB0(&local_60,&local_60,&local_38);
        if (iVar5 != 0) {
          iVar4 = local_60 - iVar4;
          uVar8 = local_5c - iVar9;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(*param_1 + 0x20) == 0x10) {
            pAVar13 = (AnonShape_006D86E0_D6D32C07 *)
                      (&param_2->field_0x0 + local_60 * 2 + local_5c * (int)param_3);
          }
          else {
            pAVar13 = (AnonShape_006D86E0_D6D32C07 *)
                      (&param_2->field_0x0 + local_5c * (int)param_3 + local_60);
          }
          uVar10 = param_12 & 0xff;
          if (uVar10 == 0) {
            local_8 = 1;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            if (*(int *)(*param_1 + 0x20) == 0x10) {
              iVar5 = *(int *)(iVar11 + 0xbc) + 7;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              st::fn_006D3300((uint *)pAVar13,(int)param_3,*(byte **)&pAVar6->field_0x6,iVar4,uVar8,
                           local_58,local_54,local_24,*(byte **)(iVar11 + 0xb8),
                           (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3,
                           ((*param_9 - *(int *)(iVar11 + 0x18)) - param_7) +
                           *(int *)(iVar11 + 0x28) + local_60,
                           ((param_9[1] - param_8) - *(int *)(iVar11 + 0x1c)) + local_5c +
                           *(int *)(iVar11 + 0x2c));
            }
            else {
              iVar5 = *(int *)(iVar11 + 0xbc) + 7;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              st::fn_006D2820((byte *)pAVar13,param_3,*(byte **)&pAVar6->field_0x6,iVar4,uVar8,local_58
                           ,(uint)local_54,*(int *)(iVar11 + 0xb0),*(byte **)(iVar11 + 0xb8),
                           (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3,
                           ((*param_9 - *(int *)(iVar11 + 0x18)) - param_7) +
                           *(int *)(iVar11 + 0x28) + local_60,
                           (byte *)(((param_9[1] - param_8) - *(int *)(iVar11 + 0x1c)) + local_5c +
                                   *(int *)(iVar11 + 0x2c)));
            }
LAB_006cf37b:
            local_8 = 0xffffffff;
          }
          else if (uVar10 == 2) {
            pbVar2 = *(byte **)&pAVar6->field_0x6;
            local_90 = (int)*(short *)pAVar6 + iVar7 + (*(short *)(pbVar2 + 0xe) - local_38) +
                       param_7;
            if (local_90 < 0) {
              local_90 = 0;
            }
            iVar5 = (int)*(short *)&pAVar6->field_0002 +
                    iVar12 + (*(short *)(pbVar2 + 0x10) - local_34) + param_8;
            if (iVar5 < 0) {
              iVar5 = 0;
            }
            local_8c = st::fn_006DA080(param_1,(uint *)pAVar13,(int)param_3,local_90,iVar5,pbVar2,iVar4
                                    ,uVar8,local_58,local_54,param_13);
          }
          else if (uVar10 == 1) {
            if ((param_1[0x74] == 0) ||
               (((*(AnonShape_006D86E0_768BB816 **)&pAVar6->field_0x6)->field_000D & 3) != 1)) {
              local_20 = *(uint *)(iVar11 + 0x5c);
              if ((*(int *)(iVar11 + 100) == 1) && (local_20 == 0)) {
                local_20 = param_1[0x75];
              }
              local_8 = 2;
              iVar5 = *(int *)(iVar11 + 0xbc) + 7;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              st::fn_006D8A60((byte *)pAVar13,(int)param_3,
                           *(byte **)&pAVar6->field_0x6,iVar4,uVar8,local_58,(int)local_54,
                           (undefined *)(-(uint)((param_12 & 0x100) != 0) & local_20),
                           *(uint *)(iVar11 + 0x60),*(int *)(iVar11 + 100),
                           *(undefined **)(iVar11 + 0xb0),*(byte **)(iVar11 + 0xb8),
                           (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3,
                           ((*param_9 - *(int *)(iVar11 + 0x18)) - param_7) +
                           *(int *)(iVar11 + 0x28) + local_60,
                           ((param_9[1] - param_8) - *(int *)(iVar11 + 0x1c)) + local_5c +
                           *(int *)(iVar11 + 0x2c));
            }
            else {
              local_8 = 3;
              st::fn_006D86E0(pAVar13,(int)param_3,*(AnonShape_006D86E0_768BB816 **)&pAVar6->field_0x6,
                           iVar4,uVar8,local_58,(uint)local_54,(byte)*(undefined4 *)(iVar11 + 0x60),
                           (char)*(undefined4 *)(iVar11 + 100));
            }
            goto LAB_006cf37b;
          }
          if (local_28 == 0) {
            local_28 = local_8c;
          }
        }
      }
      local_a0 = local_a0 + 1;
      iVar12 = local_28;
    }
    if ((char)param_12 == '\x02') {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(**(int **)(*param_1 + 0x44) + 0x80))(*(int **)(*param_1 + 0x44),0);
      local_28 = iVar12;
    }
    goto LAB_006cf911;
  }
  uVar10 = param_12 & 0xff;
  if (uVar10 == 2) {
    local_28 = st::fn_006D9F30(param_1,local_38,local_34,local_30,(int)local_2c);
    if (local_28 != 0) goto LAB_006cf911;
    local_4c = 0;
    local_28 = 0;
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar12 = st::fn_006BBE40(*(int **)(*param_1 + 0x44),(uint *)&param_2,(int *)&param_3,0x20);
      local_28 = iVar12;
      if (iVar12 == 0) goto LAB_006cf695;
      if (iVar12 != -0x7789fe3e) break;
      st::fn_006CEC40((AnonShape_006CEC40_BB23E716 *)*param_1);
      local_4c = local_4c + 1;
    } while (local_4c < 2);
    if (iVar12 != 0) goto LAB_006cf911;
  }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_006cf695:
  if (*(int *)(*param_1 + 0x20) == 0x10) {
    param_2 = (AnonShape_006D86E0_D6D32C07 *)
              (&param_2->field_0x0 + iVar5 * 2 + iVar7 * (int)param_3);
  }
  else {
    param_2 = (AnonShape_006D86E0_D6D32C07 *)(&param_2->field_0x0 + iVar7 * (int)param_3 + iVar5);
  }
  iVar5 = (*param_9 - param_7) + iVar5;
  uVar14 = (param_9[1] - param_8) + iVar7;
  if (uVar10 == 0) {
    local_8 = 4;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(*param_1 + 0x20) == 0x10) {
      iVar7 = *(int *)(iVar11 + 0xbc) + 7;
      st::fn_006D3300((uint *)param_2,(int)param_3,(byte *)param_5,iVar5,uVar14,uVar8,pbVar2,local_24,
                   *(byte **)(iVar11 + 0xb8),(int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3,
                   (*(int *)(iVar11 + 0x28) - *(int *)(iVar11 + 0x18)) + iVar5,
                   (*(int *)(iVar11 + 0x2c) - *(int *)(iVar11 + 0x1c)) + uVar14);
    }
    else {
      iVar7 = *(int *)(iVar11 + 0xbc) + 7;
      st::fn_006D2820((byte *)param_2,param_3,(byte *)param_5,iVar5,uVar14,uVar8,(uint)pbVar2,
                   *(int *)(iVar11 + 0xb0),*(byte **)(iVar11 + 0xb8),
                   (int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3,
                   (*(int *)(iVar11 + 0x28) - *(int *)(iVar11 + 0x18)) + iVar5,
                   (byte *)((*(int *)(iVar11 + 0x2c) - *(int *)(iVar11 + 0x1c)) + uVar14));
    }
LAB_006cf8ee:
    local_8 = 0xffffffff;
  }
  else if (uVar10 == 2) {
    local_28 = st::fn_006DA080(param_1,(uint *)param_2,(int)param_3,0,0,(byte *)param_5,iVar5,uVar14,
                            uVar8,pbVar2,param_13);
  }
  else if (uVar10 == 1) {
    if ((param_1[0x74] == 0) || ((param_5->field_000D & 3) != 1)) {
      local_20 = *(uint *)(iVar11 + 0x5c);
      if ((*(int *)(iVar11 + 100) == 1) && (local_20 == 0)) {
        local_20 = param_1[0x75];
      }
      local_8 = 5;
      iVar7 = *(int *)(iVar11 + 0xbc) + 7;
      st::fn_006D8A60((byte *)param_2,(int)param_3,(byte *)param_5,iVar5,uVar14,
                   uVar8,(int)pbVar2,(undefined *)(-(uint)((param_12 & 0x100) != 0) & local_20),
                   *(uint *)(iVar11 + 0x60),*(int *)(iVar11 + 100),*(undefined **)(iVar11 + 0xb0),
                   *(byte **)(iVar11 + 0xb8),(int)(iVar7 + (iVar7 >> 0x1f & 7U)) >> 3,
                   (*(int *)(iVar11 + 0x28) - *(int *)(iVar11 + 0x18)) + iVar5,
                   (*(int *)(iVar11 + 0x2c) - *(int *)(iVar11 + 0x1c)) + uVar14);
    }
    else {
      local_8 = 6;
      st::fn_006D86E0(param_2,(int)param_3,param_5,iVar5,uVar14,uVar8,(uint)pbVar2,
                   (byte)*(undefined4 *)(iVar11 + 0x60),(char)*(undefined4 *)(iVar11 + 100));
    }
    goto LAB_006cf8ee;
  }
  if ((char)param_12 == '\x02') {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(**(int **)(*param_1 + 0x44) + 0x80))(*(int **)(*param_1 + 0x44),0);
  }
LAB_006cf911:
  if ((local_28 != -0x7789ff60) && (local_28 != -0x7789fe52)) {
    ExceptionList = local_14;
    return local_28;
  }
  ExceptionList = local_14;
  return 0;
}

// 006CF415 FUN_006cf415
#line 4 "decomp/ST.exe/functions/006CF415/decomp.c"
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:0079DA58>006CF5FF | P:0079DA64>006CF54E */

int st::fn_006CF415(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;
  int iVar5;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x24) = 0xfffffffb;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar5 = *(int *)(unaff_EBP + -0x24);
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (((char *)unaff_EBP)[0x34] == '\x02') {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    piVar2 = *(int **)(**(int **)(unaff_EBP + 8) + 0x44);
    iVar3 = *piVar2;
    *(undefined4 *)(iVar1 + -4) = 0;
    *(int **)(iVar1 + -8) = piVar2;
    pcVar4 = *(code **)(iVar3 + 0x80);
    *(undefined4 *)(iVar1 + -0xc) = 0x6cf446;
    /* ST_CALLSITE[006CF440]: CALL dword ptr [ECX + 0x80] */
    (*pcVar4)();
  }
  else {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    iVar5 = *(int *)(unaff_EBP + -0x24);
  }
  if ((iVar5 != -0x7789ff60) && (iVar5 != -0x7789fe52)) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return iVar5;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

// 006CF8E4 FUN_006cf8e4
#line 4 "decomp/ST.exe/functions/006CF8E4/decomp.c"
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:0079DA70>006CF7B8 | P:0079DA88>006CF84E */

int st::fn_006CF8E4(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EBP;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x24) = 0xfffffffb;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (((char *)unaff_EBP)[0x34] == '\x02') {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    piVar2 = *(int **)(**(int **)(unaff_EBP + 8) + 0x44);
    iVar3 = *piVar2;
    *(undefined4 *)(iVar1 + -4) = 0;
    *(int **)(iVar1 + -8) = piVar2;
    pcVar4 = *(code **)(iVar3 + 0x80);
    *(undefined4 *)(iVar1 + -0xc) = 0x6cf90e;
    /* ST_CALLSITE[006CF908]: CALL dword ptr [EDX + 0x80] */
    (*pcVar4)();
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  iVar1 = *(int *)(unaff_EBP + -0x24);
  if ((iVar1 != -0x7789ff60) && (iVar1 != -0x7789fe52)) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    ExceptionList = *(void **)(unaff_EBP + -0x10);
    return iVar1;
  }
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return 0;
}

// 006CF950 FUN_006cf950
#line 4 "decomp/ST.exe/functions/006CF950/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void st::fn_006CF950(uint *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  uint local_94;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  uint local_c;
  int local_8;

  if (param_1[8] == 0xffffffff) {
    uVar4 = *param_1;
    param_1[10] = param_1[6];
    param_1[0xb] = param_1[7];
    if ((uVar4 & 0x60004000) == 0) {
      if ((uVar4 & 0x8000000) == 0) {
        if ((uVar4 & 0x5000000) != 0) {
          local_1c = param_1[0x30];
          local_10 = 32000;
          local_8 = 32000;
          iVar3 = 0;
          iVar6 = 0;
          psVar7 = (short *)(param_1[0x33] + param_1[0x31] * local_1c * 10);
          local_18 = 0;
          local_20 = 0;
          local_c = 0;
          local_14 = 0;
          if (0 < (int)local_1c) {
            do {
              if ((-1 < psVar7[2]) && (iVar2 = *(int *)(psVar7 + 3), iVar2 != 0)) {
                iVar3 = (int)*psVar7;
                uVar4 = *(int *)(iVar2 + 4) + iVar3;
                if ((int)local_c < (int)uVar4) {
                  local_c = uVar4;
                }
                iVar6 = (int)psVar7[1];
                uVar4 = *(int *)(iVar2 + 8) + iVar6;
                if ((int)local_14 < (int)uVar4) {
                  local_14 = uVar4;
                }
                iVar5 = *(short *)(iVar2 + 0xe) + iVar3;
                if (iVar5 < local_10) {
                  local_10 = iVar5;
                }
                iVar5 = *(short *)(iVar2 + 0x10) + iVar6;
                if (iVar5 < local_8) {
                  local_8 = iVar5;
                }
                iVar3 = (int)*(short *)(iVar2 + 0x12) + (int)*(short *)(iVar2 + 0xe) + iVar3;
                if (local_18 < iVar3) {
                  local_18 = iVar3;
                }
                iVar2 = *(short *)(iVar2 + 0x14) + iVar6 + (int)*(short *)(iVar2 + 0x10);
                iVar3 = local_20;
                iVar6 = local_18;
                if (local_20 < iVar2) {
                  iVar3 = iVar2;
                  local_20 = iVar2;
                }
              }
              psVar7 = psVar7 + 5;
              local_1c = local_1c - 1;
            } while (local_1c != 0);
          }
          param_1[10] = st::machine_word_boundary_cast<uint>(param_1[6] + local_10);
          param_1[0xb] = st::machine_word_boundary_cast<uint>(param_1[7] + local_8);
          param_1[0xd] = iVar3 - local_8;
          param_1[0xc] = iVar6 - local_10;
          param_1[8] = local_c;
          param_1[9] = local_14;
          return;
        }
        if ((uVar4 & 0xc0000000) != 0) {
          iVar3 = *(int *)(param_1[0x33] + param_1[0x31] * 8);
          if (iVar3 != 0) {
            uVar4 = *(uint *)(iVar3 + 4);
            param_1[8] = uVar4;
            param_1[0xc] = uVar4;
            uVar4 = *(uint *)(*(int *)(param_1[0x33] + param_1[0x31] * 8) + 8);
            param_1[9] = uVar4;
            param_1[0xd] = uVar4;
            return;
          }
          param_1[8] = 0;
          param_1[0xc] = 0;
          param_1[9] = 0;
          param_1[0xd] = 0;
          return;
        }
        if ((uVar4 & 0xa0000000) == 0) {
          return;
        }
        piVar1 = *(int **)(param_1[0x33] + param_1[0x31] * 4);
        if (piVar1 != nullptr) {
          local_a0 = 0x7c;
          local_9c = 6;
          /* ST_CALLSITE[006CFB83]: CALL dword ptr [ECX + 0x58] */
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          iVar3 = (**(code **)(*piVar1 + 0x58))(piVar1,&local_a0);
          if (iVar3 != 0) {
            param_1[8] = 0;
            param_1[0xc] = 0;
            param_1[9] = 0;
            param_1[0xd] = 0;
            return;
          }
          param_1[8] = local_94;
          param_1[0xc] = local_94;
          param_1[9] = local_98;
          param_1[0xd] = local_98;
          return;
        }
      }
      else {
        iVar3 = *(int *)(param_1[0x33] + param_1[0x31] * 4);
        if (iVar3 != 0) {
          param_1[8] = *(uint *)(iVar3 + 4);
          param_1[9] = *(uint *)(iVar3 + 8);
          param_1[10] = (int)*(short *)(iVar3 + 0xe) + param_1[6];
          param_1[0xb] = (int)*(short *)(iVar3 + 0x10) + param_1[7];
          param_1[0xc] = (int)*(short *)(iVar3 + 0x12);
          param_1[0xd] = (int)*(short *)(iVar3 + 0x14);
          return;
        }
      }
      param_1[8] = 0;
      param_1[0xc] = 0;
      param_1[9] = 0;
      param_1[0xd] = 0;
    }
  }
  return;
}

// 006CFBE0 FUN_006cfbe0
#line 4 "decomp/ST.exe/functions/006CFBE0/decomp.c"
void st::fn_006CFBE0(uint *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_8c;
  undefined4 local_88;
  uint local_84;
  uint local_80;
  uint local_10;
  uint local_c;
  uint local_8;

  uVar4 = *param_1;
  if (((uVar4 & 0x60004000) == 0) && (piVar2 = (int *)param_1[0x33], piVar2 != nullptr)) {
    local_c = 0;
    local_8 = 0;
    if ((uVar4 & 0xc0000000) == 0) {
      if ((uVar4 & 0x8000000) == 0) {
        if ((uVar4 & 0xa0000000) == 0) {
          if ((uVar4 & 0x5000000) != 0) {
            local_10 = param_1[0x32];
            if (0 < (int)local_10) {
              do {
                uVar4 = param_1[0x30];
                if (0 < (int)param_1[0x30]) {
                  do {
                    if ((-1 < (short)piVar2[1]) && (iVar5 = STField<int>(piVar2,6), iVar5 != 0))
                    {
                      uVar3 = (int)(short)*piVar2 + *(int *)(iVar5 + 4);
                      if ((int)local_c < (int)uVar3) {
                        local_c = uVar3;
                      }
                      uVar3 = *(int *)(iVar5 + 8) + (int)STField<short>(piVar2,2);
                      if ((int)local_8 < (int)uVar3) {
                        local_8 = uVar3;
                      }
                    }
                    piVar2 = (int *)((int)piVar2 + 10);
                    uVar4 = uVar4 - 1;
                  } while (uVar4 != 0);
                }
                local_10 = local_10 - 1;
              } while (local_10 != 0);
            }
          }
        }
        else {
          iVar5 = 0;
          local_8c = 0x7c;
          if (0 < (int)param_1[0x32]) {
            do {
              if (*piVar2 != 0) {
                local_88 = 6;
                /* ST_CALLSITE[006CFCD9]: CALL dword ptr [ECX + 0x58] */
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                iVar1 = (**(code **)(*(int *)*piVar2 + 0x58))((int *)*piVar2,&local_8c);
                if (iVar1 != 0) {
                  local_c = 0;
                  local_8 = 0;
                  break;
                }
                if ((int)local_c < (int)local_80) {
                  local_c = local_80;
                }
                if ((int)local_8 < (int)local_84) {
                  local_8 = local_84;
                }
              }
              piVar2 = piVar2 + 1;
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)param_1[0x32]);
          }
        }
      }
      else {
        uVar4 = param_1[0x32];
        if (0 < (int)uVar4) {
          do {
            iVar5 = *piVar2;
            if (iVar5 != 0) {
              if ((int)local_c < (int)*(uint *)(iVar5 + 4)) {
                local_c = *(uint *)(iVar5 + 4);
              }
              if ((int)local_8 < (int)*(uint *)(iVar5 + 8)) {
                local_8 = *(uint *)(iVar5 + 8);
              }
            }
            piVar2 = piVar2 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
      }
    }
    else {
      uVar4 = param_1[0x32];
      if (0 < (int)uVar4) {
        do {
          iVar5 = *piVar2;
          if (iVar5 != 0) {
            if ((int)local_c < (int)*(uint *)(iVar5 + 4)) {
              local_c = *(uint *)(iVar5 + 4);
            }
            if ((int)local_8 < (int)*(uint *)(iVar5 + 8)) {
              local_8 = *(uint *)(iVar5 + 8);
            }
          }
          piVar2 = piVar2 + 2;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    param_1[0xe] = local_c;
    param_1[0xf] = local_8;
  }
  return;
}

// 006CFD90 FUN_006cfd90
#line 4 "decomp/ST.exe/functions/006CFD90/decomp.c"
undefined4 st::fn_006CFD90(byte *param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;

  if (param_3 < 1) {
    pbVar1 = param_1 + (param_1[0xd] >> 1 & 0xe) + 0x16;
  }
  else {
    pbVar1 = st::fn_006CFE10(param_1,param_3);
  }
  uVar3 = (uint)*pbVar1;
  pbVar2 = pbVar1 + 1;
  if (uVar3 != 0) {
    while( true ) {
      while ((uVar3 & 0x80) != 0) {
        uVar4 = uVar3 & 0x3f;
        param_2 = param_2 - uVar4;
        if (param_2 < 0) {
          return 1;
        }
        if ((uVar3 & 0x40) == 0) {
          uVar3 = (uint)pbVar2[uVar4];
          pbVar2 = pbVar2 + uVar4 + 1;
        }
        else {
          uVar3 = (uint)pbVar2[1];
          pbVar2 = pbVar2 + 2;
        }
      }
      param_2 = param_2 - (uVar3 & 0x7f);
      if (param_2 < 0) break;
      uVar3 = (uint)*pbVar2;
      pbVar2 = pbVar2 + 1;
    }
  }
  return 0;
}

// 006CFE10 FUN_006cfe10
#line 1 "decomp/ST.exe/functions/006CFE10/decomp.c"

byte * st::fn_006CFE10(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7_mg1;
  byte *pbVar7;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = (int)*(short *)(param_1 + 0x12);
  uVar4 = (param_1[0xd] & 0x1c) >> 2;
  uVar3 = (int)(param_2 + (param_2 >> 0x1f & 0xfU)) >> 4;
  pbVar7 = param_1 + uVar4 * 2 + 0x16;
  if ((0 < (int)uVar3) && (uVar4 != 0)) {
    if ((int)uVar4 < (int)uVar3) {
      uVar3 = uVar4;
    }
    param_2 = param_2 + uVar3 * -0x10;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    pbVar7 = param_1 + *(ushort *)(param_1 + uVar3 * 2 + 0x14) + 0x16;
  }
  auto param_1_after_write = pbVar7; /* compiler stack-slot lifetime split */
  uVar3 = 0;
  iVar6 = param_2 * iVar2;
  pbVar7 = param_1_after_write;
  do {
    while( true ) {
      pbVar7_mg1 = pbVar7;
      iVar5 = iVar6 - uVar3;
      if (iVar5 == 0 || iVar6 < (int)uVar3) {
        return pbVar7_mg1;
      }
      bVar1 = *pbVar7_mg1;
      uVar3 = (uint)bVar1;
      pbVar7 = pbVar7_mg1 + 1;
      if (uVar3 == 0) break;
      iVar6 = iVar5;
      if ((bVar1 & 0x80) != 0) {
        if ((bVar1 & 0x40) == 0) {
          uVar3 = bVar1 & 0xffffff3f;
          pbVar7 = pbVar7 + uVar3;
        }
        else {
          uVar3 = bVar1 & 0xffffff3f;
          pbVar7 = pbVar7_mg1 + 2;
        }
      }
    }
    iVar6 = iVar5 - iVar2;
  } while (iVar6 != 0 && iVar2 <= iVar5);
  return pbVar7;
}

// 006CFEB0 FUN_006cfeb0
#line 4 "decomp/ST.exe/functions/006CFEB0/decomp.c"
undefined4 __cdecl st::fn_006CFEB0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar1 = *param_2;
  iVar5 = iVar1;
  if (iVar1 <= *param_3) {
    iVar5 = *param_3;
  }
  iVar4 = st::machine_word_boundary_cast<int>(param_2[2] + iVar1);
  if (param_3[2] <= param_2[2] + iVar1) {
    iVar4 = param_3[2];
  }
  if (iVar4 - iVar5 != 0 && iVar5 <= iVar4) {
    iVar1 = param_2[1];
    iVar2 = iVar1;
    if (iVar1 <= param_3[1]) {
      iVar2 = param_3[1];
    }
    iVar3 = st::machine_word_boundary_cast<int>(param_2[3] + iVar1);
    if (param_3[3] <= param_2[3] + iVar1) {
      iVar3 = param_3[3];
    }
    if (iVar3 - iVar2 != 0 && iVar2 <= iVar3) {
      *param_1 = iVar5;
      param_1[2] = iVar4 - iVar5;
      param_1[1] = iVar2;
      param_1[3] = iVar3 - iVar2;
      return 1;
    }
  }
  return 0;
}

