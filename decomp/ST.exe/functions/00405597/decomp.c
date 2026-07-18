
void __fastcall thunk_FUN_00696810(void *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int aiStack_38 [9];
  int iStack_14;
  uint uStack_10;
  int iStack_c;
  int iStack_8;
  
  uVar3 = 0xffffffff;
  thunk_FUN_006948e0(param_1,*(int *)((int)param_1 + 0x5833));
  iStack_c = 0;
  if (0 < *(int *)((int)param_1 + 0x582f)) {
    do {
      iVar2 = iStack_c;
      iStack_14 = thunk_FUN_00696400(param_1,iStack_c,(int)aiStack_38);
      uStack_10 = (uint)*(byte *)(*(int *)((int)param_1 + 0x584b) + iVar2);
      iStack_8 = 0;
      if (0 < iStack_14) {
        piVar1 = aiStack_38;
        do {
          uVar3 = (uint)*(short *)(*(int *)((int)param_1 + 0x584f) + *piVar1 * 2);
          if (-1 < (int)uVar3) {
            iVar2 = iStack_c;
            if (*(byte *)(*piVar1 + *(int *)((int)param_1 + 0x584b)) == uStack_10) break;
            uVar3 = 0xffffffff;
          }
          piVar1 = piVar1 + 1;
          iStack_8 = iStack_8 + 1;
        } while (iStack_8 < iStack_14);
      }
      if ((int)uVar3 < 0) {
        uVar6 = 0;
        uVar5 = 0;
        iVar4 = 0;
        uVar3 = FUN_0072e6c0();
        uVar3 = thunk_FUN_00695c10(param_1,uStack_10,
                                   (int)uVar3 % *(int *)((int)param_1 + 0x5847) + 1,iVar4,uVar5,
                                   uVar6);
        if (-1 < (int)uVar3) goto LAB_006968cf;
      }
      else {
LAB_006968cf:
        thunk_FUN_00695f70(param_1,uVar3,iVar2,0);
      }
      iStack_c = iVar2 + 1;
    } while (iStack_c < *(int *)((int)param_1 + 0x582f));
  }
  return;
}

