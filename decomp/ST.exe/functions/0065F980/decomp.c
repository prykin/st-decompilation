
void __fastcall FUN_0065f980(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined2 local_8;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_10 = *(undefined2 *)(param_1 + 0x24);
    local_e = *(undefined2 *)(param_1 + 0x7d);
    local_8 = *(undefined2 *)(param_1 + 0xb3);
    local_14 = 0x5de5;
    local_c = param_1;
    (**(code **)*DAT_008117bc)(local_24);
    *(undefined4 *)(param_1 + 0xb3) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xb3) = 0;
  return;
}

