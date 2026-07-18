
void thunk_FUN_00580ff0(undefined2 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  undefined2 uStack_c;
  undefined2 uStack_a;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = auStack_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    uStack_a = param_2;
    uStack_c = param_1;
    uStack_14 = 0x5de1;
    (**(code **)*DAT_008117bc)(auStack_24);
  }
  return;
}

