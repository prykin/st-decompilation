
undefined4 FUN_004b7750(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Global_sub_004B7350_param_2Enum GVar4;
  char cVar5;
  DArrayTy *pDVar6;
  AnonShape_006ACC70_C8641025 *pAVar7;
  uint uVar8;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int *local_c [2];
  
  cVar5 = (char)param_1;
  iVar1 = (int)cVar5;
  if (*(int *)&g_playerRuntime[iVar1].field_0x992 != 0) {
    *(undefined4 *)(*(int *)&g_playerRuntime[iVar1].field_0x992 + 0xc) = 0;
    iVar2 = thunk_FUN_004b72b0(cVar5);
    iVar3 = thunk_FUN_004b71c0(cVar5);
    if (iVar3 < iVar2) {
      pDVar6 = g_playerRuntime[iVar1].objects;
      iVar2 = 0;
      if ((pDVar6 != (DArrayTy *)0x0) && (local_10 = 0, pDVar6->count != 0)) {
LAB_004b77c4:
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar6,local_10,local_c);
        if ((local_c[0] != (int *)0x0) &&
           ((iVar3 = (**(code **)(*local_c[0] + 0x2c))(), iVar3 != 0x78 ||
            (iVar3 = thunk_FUN_004b7520(param_1,*(Global_sub_004B7520_param_2Enum *)
                                                 ((int)local_c[0] + 0x259)), iVar3 != 0)))) {
          iVar3 = (**(code **)(*local_c[0] + 0x2c))();
          local_14 = thunk_FUN_004b72e0(cVar5,iVar3);
          if (0 < local_14) {
            local_1c = local_c[0][6];
            GVar4 = (**(code **)(*local_c[0] + 0x2c))();
            local_18 = thunk_FUN_004b7350(param_1,GVar4);
            pAVar7 = *(AnonShape_006ACC70_C8641025 **)&g_playerRuntime[iVar1].field_0x992;
            uVar8 = 0;
            if (pAVar7->field_000C != 0) {
              do {
                FUN_006acc70(pAVar7,uVar8,&local_28);
                if (*(int *)(iVar1 * 0xa62 + 0x7f579a + local_24 * 4) <
                    *(int *)(iVar1 * 0xa62 + 0x7f579a + local_18 * 4)) {
                  Library::DKW::TBL::FUN_006b11d0
                            (*(uint **)&g_playerRuntime[iVar1].field_0x992,uVar8,&local_1c);
                  iVar2 = iVar2 + local_14;
                  iVar3 = thunk_FUN_004b71c0(cVar5);
                  if (iVar3 < iVar2) goto LAB_004b78f0;
                  goto cf_continue_loop_004B78A7;
                }
                pAVar7 = *(AnonShape_006ACC70_C8641025 **)&g_playerRuntime[iVar1].field_0x992;
                uVar8 = uVar8 + 1;
              } while (uVar8 < pAVar7->field_000C);
            }
            iVar3 = thunk_FUN_004b71c0(cVar5);
            if (local_14 + iVar2 <= iVar3) {
              Library::DKW::TBL::FUN_006ae1c0
                        (*(uint **)&g_playerRuntime[iVar1].field_0x992,&local_1c);
              iVar2 = iVar2 + local_14;
            }
          }
        }
        goto cf_continue_loop_004B78A7;
      }
    }
  }
  return 0;
  while( true ) {
    FUN_006acc70(*(AnonShape_006ACC70_C8641025 **)&g_playerRuntime[iVar1].field_0x992,uVar8 - 1,
                 &local_28);
    iVar2 = iVar2 - local_20;
    FUN_006b0c70(*(AnonShape_006B0C70_7C4FE646 **)&g_playerRuntime[iVar1].field_0x992,
                 (*(AnonShape_006B0C70_7C4FE646 **)&g_playerRuntime[iVar1].field_0x992)->field_000C
                 - 1);
    iVar3 = thunk_FUN_004b71c0(cVar5);
    if (iVar2 <= iVar3) break;
LAB_004b78f0:
    uVar8 = (*(AnonShape_006ACC70_C8641025 **)&g_playerRuntime[iVar1].field_0x992)->field_000C;
    if (uVar8 == 0) break;
  }
cf_continue_loop_004B78A7:
  pDVar6 = g_playerRuntime[iVar1].objects;
  local_10 = local_10 + 1;
  if (pDVar6->count <= local_10) {
    return 0;
  }
  goto LAB_004b77c4;
}

