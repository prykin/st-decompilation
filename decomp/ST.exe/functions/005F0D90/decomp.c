
void __fastcall FUN_005f0d90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  ushort local_c;
  undefined2 local_a;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_e = *(undefined2 *)(param_1 + 0x32);
    if ((*(char *)(param_1 + 0x30d) == '\0') || (*(byte *)(param_1 + 0x30e) == 0xff)) {
      local_c = 0xff;
    }
    else {
      local_a = *(undefined2 *)(param_1 + 0x30f);
      local_c = (ushort)*(byte *)(param_1 + 0x30e);
    }
    local_14 = 0x5dd7;
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

