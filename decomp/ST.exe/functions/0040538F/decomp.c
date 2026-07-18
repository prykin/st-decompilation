
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_004dd070(void *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if ((((*(int *)((int)param_1 + 0x4d0) == 1) && (1 < DAT_00798f84)) &&
      (*(int *)((int)param_1 + 0x4d4) < DAT_00798f84)) &&
     ((uint)(*(int *)((int)param_1 + 0x4dc) + *(int *)((int)param_1 + 0x4d8)) <=
      *(uint *)(DAT_00802a38 + 0xe4))) {
    *(uint *)((int)param_1 + 0x4d8) = *(uint *)(DAT_00802a38 + 0xe4);
    iVar1 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x0e');
    uVar2 = iVar1 - *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x208);
    uVar5 = (int)uVar2 >> 0x1f;
    iVar4 = (uVar2 ^ uVar5) - uVar5;
    *(int *)((int)param_1 + 0x4d4) = iVar4;
    iVar3 = ((*(int *)((int)param_1 + 0x2ad) - (int)*(short *)((int)param_1 + 0x45)) * iVar4) /
            DAT_00798f84;
    iVar1 = ((*(int *)((int)param_1 + 0x2a5) - (int)*(short *)((int)param_1 + 0x41)) * iVar4) /
            DAT_00798f84;
    iVar4 = (int)*(short *)((int)param_1 + 0x43) +
            ((*(int *)((int)param_1 + 0x2a9) - (int)*(short *)((int)param_1 + 0x43)) * iVar4) /
            DAT_00798f84;
    *(int *)((int)param_1 + 0x4e4) = iVar4;
    *(int *)((int)param_1 + 0x4e0) = iVar1 + *(short *)((int)param_1 + 0x41);
    iVar3 = *(short *)((int)param_1 + 0x45) + iVar3;
    *(int *)((int)param_1 + 0x4e8) = iVar3;
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x5ff),
                       (float)*(int *)((int)param_1 + 0x4e0) * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar4 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar3 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if ((*(int *)(&DAT_00798f80 + *(int *)((int)param_1 + 0x4d0) * 4) + -1 <=
         *(int *)((int)param_1 + 0x4d4)) && (*(int *)((int)param_1 + 0x4d0) == 1)) {
      thunk_FUN_004c4550(param_1,(int *)0x0);
    }
  }
  return 0;
}

