
undefined4 __thiscall
FUN_006e65c0(void *this,undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined2 param_5,undefined2 param_6,undefined2 param_7)

{
  undefined4 *puVar1;
  
  puVar1 = Library::DKW::LIB::FUN_006aac10(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    return 0xfffffffe;
  }
  puVar1[6] = param_1;
  *(undefined1 *)((int)puVar1 + 0x17) = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  *(undefined2 *)((int)puVar1 + 0xe) = param_5;
  *(undefined2 *)(puVar1 + 4) = param_6;
  *(undefined2 *)((int)puVar1 + 0x12) = param_7;
  FUN_006b9910((undefined4 *)((int)this + 0x442),puVar1);
  return 0;
}

