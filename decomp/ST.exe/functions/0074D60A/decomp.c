
int FUN_0074d60a(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;

  while( true ) {
    uVar1 = *param_1;
    uVar2 = *param_2;
    uVar3 = uVar1;
    if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
      uVar3 = uVar1 + 0x20;
    }
    uVar4 = uVar2;
    if ((0x40 < uVar2) && (uVar2 < 0x5b)) {
      uVar4 = uVar2 + 0x20;
    }
    if (uVar3 != uVar4) break;
    param_1 = param_1 + 1;
    if ((uVar1 == 0) || (param_2 = param_2 + 1, uVar2 == 0)) {
      return 0;
    }
  }
  return (uint)uVar3 - (uint)uVar4;
}

