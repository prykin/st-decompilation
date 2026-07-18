
undefined2 * thunk_FUN_0060cbe0(undefined2 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  uStack_2c = 0;
  iVar2 = (int)param_1 / 2;
  uStack_18 = 0;
  uStack_8 = 0;
  iVar1 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  iStack_28 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  iStack_24 = iVar2 / 2;
  iStack_10 = iVar1 * -2 - iVar1 / 2;
  iStack_20 = (int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 3U)) >> 2;
  iStack_1c = iVar2 + -1;
  iStack_14 = (int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 3U)) >> 2;
  iStack_c = iStack_14;
  param_1 = (undefined2 *)FUN_006aac70(iVar2 * 4);
  iVar1 = thunk_FUN_0060e210(&uStack_2c,&uStack_18,5,param_1,iVar2);
  if (iVar1 == 0) {
    *param_2 = iVar2;
    return param_1;
  }
  FUN_006ab060(&param_1);
  return (undefined2 *)0x0;
}

