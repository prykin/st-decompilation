
void __thiscall thunk_FUN_005501d0(void *this,undefined1 *param_1)

{
  char cVar1;
  undefined1 auStack_24 [16];
  undefined4 uStack_14;
  undefined1 *puStack_10;
  
  *(undefined1 **)(param_1 + 0x17) = param_1 + 0x1b;
  cVar1 = param_1[0xe];
  if (cVar1 == '\x05') {
    uStack_14 = 0x43ff;
  }
  else {
    if (cVar1 != '2') {
      thunk_FUN_00436f20(DAT_007fa174,CONCAT31((int3)((uint)(param_1 + 0x1b) >> 8),cVar1),param_1);
      return;
    }
    uStack_14 = 0x4400;
  }
  puStack_10 = param_1;
  (**(code **)(**(int **)((int)this + 0x1c) + 0x20))(auStack_24);
  return;
}

