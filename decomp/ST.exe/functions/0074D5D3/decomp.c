
int FUN_0074d5d3(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar2 = *param_1;
  while( true ) {
    uVar1 = *param_2;
    if (uVar2 != uVar1) {
      return (uint)uVar2 - (uint)uVar1;
    }
    param_1 = param_1 + 1;
    if ((uVar2 == 0) || (param_2 = param_2 + 1, uVar1 == 0)) break;
    uVar2 = *param_1;
  }
  return 0;
}

