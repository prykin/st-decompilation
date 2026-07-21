
undefined4 * __thiscall
FUN_006e6460(void *this,undefined4 param_1,int param_2,undefined2 param_3,undefined2 param_4,
            undefined1 param_5,int param_6)

{
  undefined4 *puVar1;

  if (param_2 < 1) {
    return (undefined4 *)0x0;
  }
  puVar1 = Library::DKW::LIB::FUN_006aac10(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar1[6] = param_1;
  *(undefined1 *)(puVar1 + 3) = param_5;
  *(undefined2 *)((int)puVar1 + 0xe) = param_3;
  *(bool *)((int)puVar1 + 0xd) = param_6 != 0;
  *(char *)((int)puVar1 + 0x17) = (char)param_2;
  *(undefined2 *)(puVar1 + 4) = param_4;
  *(undefined2 *)((int)puVar1 + 0x12) = 0x7fff;
  *(undefined2 *)(puVar1 + 5) = 0x7fff;
  if (param_6 != 0) {
    FUN_006b9910((undefined4 *)((int)this + 0x446),(int)puVar1);
    return puVar1;
  }
  FUN_006b9910((undefined4 *)((int)this + 0x44a),(int)puVar1);
  return puVar1;
}

