
undefined4 FUN_004b7750(uint param_1)

{
  int iVar1;
  int iVar2;
  Global_sub_004B7350_param_2Enum GVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  int *local_c [2];
  
  cVar4 = (char)param_1;
  iVar6 = cVar4 * 0xa62;
  if (*(int *)(&DAT_007f57b2 + iVar6) != 0) {
    *(undefined4 *)(*(int *)(&DAT_007f57b2 + iVar6) + 0xc) = 0;
    iVar1 = thunk_FUN_004b72b0(cVar4);
    iVar2 = thunk_FUN_004b71c0(cVar4);
    if (iVar2 < iVar1) {
      iVar1 = *(int *)((int)&DAT_007f4e29 + iVar6);
      iVar2 = 0;
      if ((iVar1 != 0) && (local_10 = 0, *(int *)(iVar1 + 0xc) != 0)) {
LAB_004b77c4:
        FUN_006acc70(iVar1,local_10,local_c);
        if ((local_c[0] != (int *)0x0) &&
           ((iVar1 = (**(code **)(*local_c[0] + 0x2c))(), iVar1 != 0x78 ||
            (iVar1 = thunk_FUN_004b7520(param_1,*(Global_sub_004B7520_param_2Enum *)
                                                 ((int)local_c[0] + 0x259)), iVar1 != 0)))) {
          iVar1 = (**(code **)(*local_c[0] + 0x2c))();
          local_14 = thunk_FUN_004b72e0(cVar4,iVar1);
          if (0 < local_14) {
            local_1c = local_c[0][6];
            GVar3 = (**(code **)(*local_c[0] + 0x2c))();
            local_18 = thunk_FUN_004b7350(param_1,GVar3);
            iVar1 = *(int *)(&DAT_007f57b2 + iVar6);
            uVar5 = 0;
            if (*(int *)(iVar1 + 0xc) != 0) {
              do {
                FUN_006acc70(iVar1,uVar5,&local_28);
                if (*(int *)((int)&DAT_007f579a + local_24 * 4 + iVar6) <
                    *(int *)((int)&DAT_007f579a + local_18 * 4 + iVar6)) {
                  Library::DKW::TBL::FUN_006b11d0(*(uint **)(&DAT_007f57b2 + iVar6),uVar5,&local_1c)
                  ;
                  iVar2 = iVar2 + local_14;
                  iVar1 = thunk_FUN_004b71c0(cVar4);
                  if (iVar1 < iVar2) goto LAB_004b78f0;
                  goto cf_continue_loop_004B78A7;
                }
                iVar1 = *(int *)(&DAT_007f57b2 + iVar6);
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(uint *)(iVar1 + 0xc));
            }
            iVar1 = thunk_FUN_004b71c0(cVar4);
            if (local_14 + iVar2 <= iVar1) {
              Library::DKW::TBL::FUN_006ae1c0(*(uint **)(&DAT_007f57b2 + iVar6),&local_1c);
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
    FUN_006acc70(*(int *)(&DAT_007f57b2 + iVar6),iVar1 - 1,&local_28);
    iVar2 = iVar2 - local_20;
    FUN_006b0c70(*(int *)(&DAT_007f57b2 + iVar6),*(int *)(*(int *)(&DAT_007f57b2 + iVar6) + 0xc) - 1
                );
    iVar1 = thunk_FUN_004b71c0(cVar4);
    if (iVar2 <= iVar1) break;
LAB_004b78f0:
    iVar1 = *(int *)(*(int *)(&DAT_007f57b2 + iVar6) + 0xc);
    if (iVar1 == 0) break;
  }
cf_continue_loop_004B78A7:
  iVar1 = *(int *)((int)&DAT_007f4e29 + iVar6);
  local_10 = local_10 + 1;
  if (*(uint *)(iVar1 + 0xc) <= local_10) {
    return 0;
  }
  goto LAB_004b77c4;
}

