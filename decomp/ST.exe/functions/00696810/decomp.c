
void __fastcall FUN_00696810(void *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_38 [9];
  int local_14;
  uint local_10;
  int local_c;
  int local_8;
  
  uVar3 = 0xffffffff;
  thunk_FUN_006948e0(param_1,*(int *)((int)param_1 + 0x5833));
  local_c = 0;
  if (0 < *(int *)((int)param_1 + 0x582f)) {
    do {
      iVar2 = local_c;
      local_14 = thunk_FUN_00696400(param_1,local_c,(int)local_38);
      local_10 = (uint)*(byte *)(*(int *)((int)param_1 + 0x584b) + iVar2);
      local_8 = 0;
      if (0 < local_14) {
        piVar1 = local_38;
        do {
          uVar3 = (uint)*(short *)(*(int *)((int)param_1 + 0x584f) + *piVar1 * 2);
          if (-1 < (int)uVar3) {
            iVar2 = local_c;
            if (*(byte *)(*piVar1 + *(int *)((int)param_1 + 0x584b)) == local_10) break;
            uVar3 = 0xffffffff;
          }
          piVar1 = piVar1 + 1;
          local_8 = local_8 + 1;
        } while (local_8 < local_14);
      }
      if ((int)uVar3 < 0) {
        uVar6 = 0;
        uVar5 = 0;
        iVar4 = 0;
        uVar3 = FUN_0072e6c0();
        uVar3 = thunk_FUN_00695c10(param_1,local_10,(int)uVar3 % *(int *)((int)param_1 + 0x5847) + 1
                                   ,iVar4,uVar5,uVar6);
        if (-1 < (int)uVar3) goto LAB_006968cf;
      }
      else {
LAB_006968cf:
        thunk_FUN_00695f70(param_1,uVar3,iVar2,0);
      }
      local_c = iVar2 + 1;
    } while (local_c < *(int *)((int)param_1 + 0x582f));
  }
  return;
}

