
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004d9fe0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[0x134];
  if ((iVar1 == 3) || (iVar1 == 5)) {
    iVar1 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\f');
    if (iVar1 != *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x1c4)) {
      return 0;
    }
    thunk_FUN_004d9c80(param_1);
  }
  else {
    if (iVar1 != 4) {
      return 0;
    }
    if (DAT_00798eb0 < 2) {
      return 0;
    }
    if (DAT_00798eb0 <= param_1[0x135]) {
      return 0;
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) < (uint)(param_1[0x137] + param_1[0x136])) {
      return 0;
    }
    iVar3 = param_1[0x135] + 1;
    param_1[0x136] = *(uint *)(DAT_00802a38 + 0xe4);
    param_1[0x135] = iVar3;
    iVar1 = ((_UNK_00798f2c - _UNK_00798f20) * iVar3) / DAT_00798eb0 + _UNK_00798f20;
    iVar2 = ((_UNK_00798f28 - _UNK_00798f1c) * iVar3) / DAT_00798eb0 + _UNK_00798f1c +
            (int)*(short *)((int)param_1 + 0x43);
    param_1[0x138] =
         (int)*(short *)((int)param_1 + 0x41) +
         _UNK_00798f18 + ((_UNK_00798f24 - _UNK_00798f18) * iVar3) / DAT_00798eb0;
    param_1[0x139] = iVar2;
    iVar1 = *(short *)((int)param_1 + 0x45) + iVar1;
    param_1[0x13a] = iVar1;
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x5ff),
                       (float)param_1[0x138] * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar2 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar1 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (param_1[0x135] < *(int *)(&DAT_00798ea0 + param_1[0x134] * 4)) {
      return 0;
    }
    if (param_1[0x134] == 4) {
      thunk_FUN_004c4550(param_1,(int *)0x0);
      TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
      return 0;
    }
  }
  TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
  return 0;
}

