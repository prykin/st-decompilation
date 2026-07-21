
void __thiscall FUN_0067bf60(void *this,char param_1,uint param_2)

{
  ushort *puVar1;
  
  puVar1 = thunk_FUN_0067bd00(*(AnonShape_00413AF0_B6B4EE9A **)((int)this + 0x6ad),param_2);
  if (puVar1 != (ushort *)0x0) {
    if (param_1 != -1) {
      if (param_1 == '\0') {
        puVar1[0xd] = puVar1[0xd] + 1;
        return;
      }
      if (param_1 != '\x01') {
        return;
      }
    }
    if (0 < (short)puVar1[0xd]) {
      puVar1[0xd] = puVar1[0xd] - 1;
    }
  }
  return;
}

