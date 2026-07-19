
void FUN_00758490(int param_1)

{
  undefined1 *puVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x1a6) + 0x50) != 0) {
    RaiseInternalException(0x3c,DAT_007ed77c,s_E__DKW_JPG_C_jdmarker_c_007f2db0,0xb3);
  }
  puVar1 = (undefined1 *)(param_1 + 0xec);
  do {
    puVar1[-0x10] = 0;
    *puVar1 = 1;
    puVar1[0x10] = 5;
    puVar1 = puVar1 + 1;
  } while ((int)(puVar1 + (-0xec - param_1)) < 0x10);
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  *(undefined2 *)(param_1 + 0x115) = 1;
  *(undefined2 *)(param_1 + 0x117) = 1;
  *(undefined4 *)(param_1 + 0x119) = 0;
  *(undefined1 *)(param_1 + 0x11d) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1a6) + 0x50) = 1;
  return;
}

