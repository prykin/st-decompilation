
undefined4 FUN_006939f0(void)

{
  int iVar1;
  undefined4 unaff_ESI;
  undefined4 *puVar2;
  void *unaff_EDI;
  cMf32 *in_stack_00000004;
  InternalExceptionFrame local_54;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)0x0;
  local_c = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = __setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar1 == 0) {
    puVar2 = local_10;
    for (iVar1 = 0x666; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined1 *)puVar2 = 0;
    FUN_006f1ce0(0,PTR_s_DESCRIPTOR_0079d770,(int *)&local_8,1);
    g_currentExceptionFrame = local_54.previous;
  }
  else {
    g_currentExceptionFrame = local_54.previous;
    local_c = 0;
    cMf32::RecMemFree(in_stack_00000004,(uint *)&local_8);
  }
  if (local_8 != (undefined4 *)0x0) {
    puVar2 = local_8;
    for (iVar1 = 0x666; iVar1 != 0; iVar1 = iVar1 + -1) {
      *local_10 = *puVar2;
      puVar2 = puVar2 + 1;
      local_10 = local_10 + 1;
    }
    *(undefined1 *)local_10 = *(undefined1 *)puVar2;
    cMf32::RecMemFree(in_stack_00000004,(uint *)&local_8);
  }
  return local_c;
}

