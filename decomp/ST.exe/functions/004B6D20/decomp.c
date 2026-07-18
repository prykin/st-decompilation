
undefined4 __fastcall FUN_004b6d20(int param_1)

{
  undefined4 in_EAX;
  
  thunk_FUN_004b7080(CONCAT31((int3)((uint)in_EAX >> 8),*(undefined1 *)(param_1 + 0x24)),0x28);
  if (*(uint *)(param_1 + 0x24) == (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x112d)) {
    thunk_FUN_004d8b70((char)*(uint *)(param_1 + 0x24));
  }
  return 0;
}

