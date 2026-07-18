
void __cdecl
FUN_0062b680(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,
            undefined4 param_7,int param_8)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_44 [6];
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar2 = local_44;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_28 = param_1 << 0x10 | param_4 & 0xffff;
  local_24 = param_2 << 0x10 | param_5 & 0xffff;
  local_20 = param_3 << 0x10 | param_6 & 0xffff;
  local_1c = param_7;
  local_18 = *(undefined4 *)(param_8 + 0x18);
  local_14 = *(undefined4 *)(param_8 + 0x24);
  local_44[0] = 0xd2;
  local_44[1] = 0xff;
  local_44[2] = 0;
  local_44[3] = 0;
  local_2c = 3;
  local_10 = 0;
  (**(code **)(*DAT_00802a38 + 8))(0x124,0,0,local_44,0);
  return;
}

