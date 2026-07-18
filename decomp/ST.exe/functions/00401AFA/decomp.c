
void __fastcall thunk_FUN_005f0d90(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  undefined2 uStack_e;
  ushort uStack_c;
  undefined2 uStack_a;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = auStack_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    uStack_e = *(undefined2 *)(param_1 + 0x32);
    if ((*(char *)(param_1 + 0x30d) == '\0') || (*(byte *)(param_1 + 0x30e) == 0xff)) {
      uStack_c = 0xff;
    }
    else {
      uStack_a = *(undefined2 *)(param_1 + 0x30f);
      uStack_c = (ushort)*(byte *)(param_1 + 0x30e);
    }
    uStack_14 = 0x5dd7;
    (**(code **)*DAT_008117bc)(auStack_24);
  }
  return;
}

