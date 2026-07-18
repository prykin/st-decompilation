
undefined * __cdecl FUN_0073c780(byte *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  int local_18;
  ushort local_14 [6];
  uint local_8;
  
  local_24 = 0;
  local_8 = FUN_007434d0(local_14,&local_18,param_1,0,0,0,0);
  if ((local_8 & 4) == 0) {
    iVar2 = FUN_007403e0(local_14,&local_20);
    if (((local_8 & 2) != 0) || (iVar2 == 1)) {
      local_24 = 0x80;
    }
    if (((local_8 & 1) != 0) || (iVar2 == 2)) {
      local_24 = local_24 | 0x100;
    }
  }
  else {
    local_24 = 0x200;
    local_20 = 0;
    local_1c = 0;
  }
  *(uint *)PTR_DAT_007f1f68 = local_24;
  *(int *)(PTR_DAT_007f1f68 + 4) = local_18 - (int)param_1;
  puVar1 = PTR_DAT_007f1f68;
  *(uint *)(PTR_DAT_007f1f68 + 0x10) = local_20;
  *(undefined4 *)(puVar1 + 0x14) = local_1c;
  return PTR_DAT_007f1f68;
}

