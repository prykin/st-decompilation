
int FUN_00757360(int param_1,int param_2)

{
  int iVar1;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  int local_8;
  
  local_8 = 0;
  if (*(char *)(param_2 + 0x36) == '\0') {
    FUN_00730c40((undefined1 *)(param_2 + 0x36),0x7f2ce8);
    *(undefined4 *)(param_2 + 0x14) = 1;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = __setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    if (*(int *)(param_2 + 0x14) != 0) {
      *(uint *)(*(int *)(param_1 + 8) + 8) = *(uint *)(*(int *)(param_1 + 8) + 8) | 0x10;
      FUN_006d4860(*(int *)(param_1 + 8),*(int *)(param_2 + 0x18),(undefined4 *)(param_2 + 0x20),
                   0x20);
    }
    FUN_006d4c50(*(int *)(param_1 + 8),*(int *)(param_2 + 0x24),
                 (int)*(short *)(*(int *)(param_1 + 8) + 0x16));
    *(undefined4 *)(param_2 + 0x14) = 0;
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_4c.previous;
  return iVar1;
}

