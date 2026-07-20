
undefined2 * FUN_0060cbe0(undefined2 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_2c = 0;
  iVar2 = (int)param_1 / 2;
  local_18 = 0;
  local_8 = 0;
  iVar1 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  local_28 = (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2;
  local_24 = iVar2 / 2;
  local_10 = iVar1 * -2 - iVar1 / 2;
  local_20 = (int)(iVar2 * 3 + (iVar2 * 3 >> 0x1f & 3U)) >> 2;
  local_1c = iVar2 + -1;
  local_14 = (int)(iVar1 * 3 + (iVar1 * 3 >> 0x1f & 3U)) >> 2;
  local_c = local_14;
  param_1 = (undefined2 *)Library::DKW::LIB::FUN_006aac70(iVar2 * 4);
  iVar1 = thunk_FUN_0060e210(&local_2c,&local_18,5,(int)param_1,iVar2);
  if (iVar1 == 0) {
    *param_2 = iVar2;
    return param_1;
  }
  FUN_006ab060(&param_1);
  return (undefined2 *)0x0;
}

