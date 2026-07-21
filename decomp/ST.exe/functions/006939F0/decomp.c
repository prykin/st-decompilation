#include "../../pseudocode_runtime.h"


undefined4 FUN_006939f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  cMf32 *in_stack_00000004;
  InternalExceptionFrame local_54;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 *local_8;

  local_8 = (undefined4 *)0x0;
  local_c = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar1 == 0) {
    memset(local_10, 0, 0x1999); /* compiler bulk-zero initialization */
    iVar1 = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    cMf32::RecGet(in_stack_00000004,0,PTR_s_DESCRIPTOR_0079d770,(int *)&local_8,1);
    g_currentExceptionFrame = local_54.previous;
  }
  else {
    g_currentExceptionFrame = local_54.previous;
    local_c = 0;
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
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
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    cMf32::RecMemFree(in_stack_00000004,(uint *)&local_8);
  }
  return local_c;
}

