
void __fastcall FUN_00627700(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_10 = *(undefined2 *)(param_1 + 0x24);
    local_e = *(undefined2 *)(param_1 + 0x32);
    local_c = *(undefined2 *)(param_1 + 0x262);
    if (*(int *)(param_1 + 0x2a1) == 0) {
      local_a = 0xffff;
    }
    else {
      local_a = *(undefined2 *)(param_1 + 0x2a5);
    }
    local_14 = 0x5de3;
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

