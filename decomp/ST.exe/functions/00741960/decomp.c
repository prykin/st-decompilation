
int __cdecl FUN_00741960(byte *param_1,uint param_2,byte *param_3,int *param_4,undefined *param_5)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  undefined *local_10;
  uint local_c;
  undefined *local_8;
  
  if (param_5 == (undefined *)0x0) {
    local_10 = PTR_PTR_007f2640;
  }
  else {
    local_10 = param_5;
  }
  local_8 = local_10;
  local_c = param_2;
  for (; (local_c != 0 && (*param_3 != 0)); param_3 = param_3 + 1) {
    if (*param_3 == 0x25) {
      bVar3 = param_3[1] == 0x23;
      pbVar1 = param_3 + 1;
      if (bVar3) {
        pbVar1 = param_3 + 2;
      }
      param_3 = pbVar1;
      DAT_00858e2c = (uint)bVar3;
      FUN_00741aa0(*param_3,param_4,(int *)&param_1,&local_c,(int)local_8);
    }
    else {
      if (((*(ushort *)(PTR_DAT_007f1280 + (uint)*param_3 * 2) & 0x8000) != 0) && (1 < local_c)) {
        *param_1 = *param_3;
        param_1 = param_1 + 1;
        param_3 = param_3 + 1;
        local_c = local_c - 1;
      }
      *param_1 = *param_3;
      param_1 = param_1 + 1;
      local_c = local_c - 1;
    }
  }
  if (local_c == 0) {
    iVar2 = 0;
  }
  else {
    *param_1 = 0;
    iVar2 = param_2 - local_c;
  }
  return iVar2;
}

