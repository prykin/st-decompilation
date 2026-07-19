
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004ed210(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1[0x134];
  if ((iVar1 == 3) || (iVar1 == 5)) {
    iVar1 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x0e');
    if (iVar1 != *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x20c)) {
      return 0;
    }
  }
  else {
    if (iVar1 != 4) {
      return 0;
    }
    if (DAT_0079aab8 < 2) {
      return 0;
    }
    if (DAT_0079aab8 <= param_1[0x135]) {
      return 0;
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) < (uint)(param_1[0x137] + param_1[0x136])) {
      return 0;
    }
    iVar3 = param_1[0x135] + 1;
    param_1[0x136] = *(uint *)(DAT_00802a38 + 0xe4);
    param_1[0x135] = iVar3;
    iVar1 = ((_UNK_0079ab34 - _UNK_0079ab28) * iVar3) / DAT_0079aab8 + _UNK_0079ab28;
    iVar2 = ((_UNK_0079ab30 - _UNK_0079ab24) * iVar3) / DAT_0079aab8 + _UNK_0079ab24 +
            (int)*(short *)((int)param_1 + 0x43);
    param_1[0x138] =
         (int)*(short *)((int)param_1 + 0x41) +
         _UNK_0079ab20 + ((_UNK_0079ab2c - _UNK_0079ab20) * iVar3) / DAT_0079aab8;
    param_1[0x139] = iVar2;
    iVar1 = *(short *)((int)param_1 + 0x45) + iVar1;
    param_1[0x13a] = iVar1;
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x5ff),
                       (float)param_1[0x138] * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar2 * _DAT_007904f8 * _DAT_007904f0,
                       (float)iVar1 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (param_1[0x135] < *(int *)(&DAT_0079aaa8 + param_1[0x134] * 4)) {
      return 0;
    }
    thunk_FUN_004c4550(param_1,(int *)0x0);
  }
  thunk_FUN_004ecea0(param_1);
  TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
  return 0;
}

