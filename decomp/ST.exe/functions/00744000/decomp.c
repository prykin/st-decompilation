
uint __cdecl FUN_00744000(undefined4 *param_1,undefined4 *param_2,byte *param_3,int param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  uint local_18;
  ushort local_10 [6];
  
  local_18 = FUN_007434d0(local_10,param_2,param_3,param_4,0,0,0);
  bVar1 = FUN_00740420(local_10,param_1);
  if (CONCAT31(extraout_var,bVar1) == 1) {
    local_18 = local_18 | 2;
  }
  return local_18;
}

