
undefined4 FUN_004b7750(uint param_1)

{
  dword dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  Global_sub_004B7350_param_2Enum GVar5;
  char cVar6;
  DArrayTy *pDVar7;
  uint index;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int *local_c [2];
  
  cVar6 = (char)param_1;
  iVar2 = (int)cVar6;
  if (*(int *)&g_playerRuntime[iVar2].field_0x992 != 0) {
    *(undefined4 *)(*(int *)&g_playerRuntime[iVar2].field_0x992 + 0xc) = 0;
    iVar3 = thunk_FUN_004b72b0(cVar6);
    iVar4 = thunk_FUN_004b71c0(cVar6);
    if (iVar4 < iVar3) {
      pDVar7 = g_playerRuntime[iVar2].objects;
      iVar3 = 0;
      if ((pDVar7 != (DArrayTy *)0x0) && (local_10 = 0, pDVar7->count != 0)) {
LAB_004b77c4:
        DArrayGetElement(pDVar7,local_10,local_c);
        if ((local_c[0] != (int *)0x0) &&
           ((iVar4 = (**(code **)(*local_c[0] + 0x2c))(), iVar4 != 0x78 ||
            (iVar4 = thunk_FUN_004b7520(param_1,*(Global_sub_004B7520_param_2Enum *)
                                                 ((int)local_c[0] + 0x259)), iVar4 != 0)))) {
          iVar4 = (**(code **)(*local_c[0] + 0x2c))();
          local_14 = thunk_FUN_004b72e0(cVar6,iVar4);
          if (0 < local_14) {
            local_1c = local_c[0][6];
            GVar5 = (**(code **)(*local_c[0] + 0x2c))();
            local_18 = thunk_FUN_004b7350(param_1,GVar5);
            pDVar7 = *(DArrayTy **)&g_playerRuntime[iVar2].field_0x992;
            index = 0;
            if (pDVar7->count != 0) {
              do {
                DArrayGetElement(pDVar7,index,local_28);
                if (*(int *)(iVar2 * 0xa62 + 0x7f579a + local_24 * 4) <
                    *(int *)(iVar2 * 0xa62 + 0x7f579a + local_18 * 4)) {
                  Library::DKW::TBL::FUN_006b11d0
                            (*(uint **)&g_playerRuntime[iVar2].field_0x992,index,&local_1c);
                  iVar3 = iVar3 + local_14;
                  iVar4 = thunk_FUN_004b71c0(cVar6);
                  if (iVar4 < iVar3) goto LAB_004b78f0;
                  goto cf_continue_loop_004B78A7;
                }
                pDVar7 = *(DArrayTy **)&g_playerRuntime[iVar2].field_0x992;
                index = index + 1;
              } while (index < pDVar7->count);
            }
            iVar4 = thunk_FUN_004b71c0(cVar6);
            if (local_14 + iVar3 <= iVar4) {
              Library::DKW::TBL::FUN_006ae1c0
                        (*(uint **)&g_playerRuntime[iVar2].field_0x992,&local_1c);
              iVar3 = iVar3 + local_14;
            }
          }
        }
        goto cf_continue_loop_004B78A7;
      }
    }
  }
  return 0;
  while( true ) {
    DArrayGetElement(*(DArrayTy **)&g_playerRuntime[iVar2].field_0x992,dVar1 - 1,local_28);
    iVar3 = iVar3 - local_20;
    FUN_006b0c70(*(AnonShape_006B0C70_7C4FE646 **)&g_playerRuntime[iVar2].field_0x992,
                 (*(AnonShape_006B0C70_7C4FE646 **)&g_playerRuntime[iVar2].field_0x992)->field_000C
                 - 1);
    iVar4 = thunk_FUN_004b71c0(cVar6);
    if (iVar3 <= iVar4) break;
LAB_004b78f0:
    dVar1 = (*(DArrayTy **)&g_playerRuntime[iVar2].field_0x992)->count;
    if (dVar1 == 0) break;
  }
cf_continue_loop_004B78A7:
  pDVar7 = g_playerRuntime[iVar2].objects;
  local_10 = local_10 + 1;
  if (pDVar7->count <= local_10) {
    return 0;
  }
  goto LAB_004b77c4;
}

