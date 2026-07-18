
undefined4 thunk_FUN_004b7750(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  uint uStack_10;
  int *apiStack_c [2];
  
  cVar4 = (char)param_1;
  iVar6 = cVar4 * 0xa62;
  if (*(int *)(&DAT_007f57b2 + iVar6) != 0) {
    *(undefined4 *)(*(int *)(&DAT_007f57b2 + iVar6) + 0xc) = 0;
    iVar1 = thunk_FUN_004b72b0(cVar4);
    iVar2 = thunk_FUN_004b71c0(cVar4);
    if (iVar2 < iVar1) {
      iVar1 = *(int *)((int)&DAT_007f4e29 + iVar6);
      iVar2 = 0;
      if ((iVar1 != 0) && (uStack_10 = 0, *(int *)(iVar1 + 0xc) != 0)) {
LAB_004b77c4:
        FUN_006acc70(iVar1,uStack_10,apiStack_c);
        if ((apiStack_c[0] != (int *)0x0) &&
           ((iVar1 = (**(code **)(*apiStack_c[0] + 0x2c))(), iVar1 != 0x78 ||
            (iVar1 = thunk_FUN_004b7520(param_1,*(undefined4 *)((int)apiStack_c[0] + 0x259)),
            iVar1 != 0)))) {
          iVar1 = (**(code **)(*apiStack_c[0] + 0x2c))();
          iStack_14 = thunk_FUN_004b72e0(cVar4,iVar1);
          if (0 < iStack_14) {
            iStack_1c = apiStack_c[0][6];
            uVar3 = (**(code **)(*apiStack_c[0] + 0x2c))();
            iStack_18 = thunk_FUN_004b7350(param_1,uVar3);
            iVar1 = *(int *)(&DAT_007f57b2 + iVar6);
            uVar5 = 0;
            if (*(int *)(iVar1 + 0xc) != 0) {
              do {
                FUN_006acc70(iVar1,uVar5,&uStack_28);
                if (*(int *)((int)&DAT_007f579a + iStack_24 * 4 + iVar6) <
                    *(int *)((int)&DAT_007f579a + iStack_18 * 4 + iVar6)) {
                  FUN_006b11d0(*(uint **)(&DAT_007f57b2 + iVar6),uVar5,&iStack_1c);
                  iVar2 = iVar2 + iStack_14;
                  iVar1 = thunk_FUN_004b71c0(cVar4);
                  if (iVar1 < iVar2) goto LAB_004b78f0;
                  goto LAB_004b78a7;
                }
                iVar1 = *(int *)(&DAT_007f57b2 + iVar6);
                uVar5 = uVar5 + 1;
              } while (uVar5 < *(uint *)(iVar1 + 0xc));
            }
            iVar1 = thunk_FUN_004b71c0(cVar4);
            if (iStack_14 + iVar2 <= iVar1) {
              FUN_006ae1c0(*(uint **)(&DAT_007f57b2 + iVar6),&iStack_1c);
              iVar2 = iVar2 + iStack_14;
            }
          }
        }
        goto LAB_004b78a7;
      }
    }
  }
  return 0;
  while( true ) {
    FUN_006acc70(*(int *)(&DAT_007f57b2 + iVar6),iVar1 - 1,&uStack_28);
    iVar2 = iVar2 - iStack_20;
    FUN_006b0c70(*(int *)(&DAT_007f57b2 + iVar6),*(int *)(*(int *)(&DAT_007f57b2 + iVar6) + 0xc) - 1
                );
    iVar1 = thunk_FUN_004b71c0(cVar4);
    if (iVar2 <= iVar1) break;
LAB_004b78f0:
    iVar1 = *(int *)(*(int *)(&DAT_007f57b2 + iVar6) + 0xc);
    if (iVar1 == 0) break;
  }
LAB_004b78a7:
  iVar1 = *(int *)((int)&DAT_007f4e29 + iVar6);
  uStack_10 = uStack_10 + 1;
  if (*(uint *)(iVar1 + 0xc) <= uStack_10) {
    return 0;
  }
  goto LAB_004b77c4;
}

