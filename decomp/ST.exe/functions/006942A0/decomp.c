#include "../../pseudocode_runtime.h"


int FUN_006942a0(void)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  cMf32 *in_stack_00000004;
  InternalExceptionFrame local_54;
  int local_10;
  uint local_c;
  int local_8;

  local_c = 0;
  local_8 = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  iVar1 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  if (iVar1 == 0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    cMf32::RecGet(in_stack_00000004,0,PTR_s_DESCRIPTOR_0079d770,(int *)&local_c,0x1999);
  }
  else {
    local_8 = 0;
  }
  iVar1 = local_8;
  g_currentExceptionFrame = local_54.previous;
  if (local_8 != 0) {
    memset((void *)(local_10 + 0x11), 0, 0x288); /* compiler bulk-zero initialization */
    iVar2 = 0;
    puVar3 = (byte *)(local_c + 0x11);
    puVar4 = (byte *)(local_10 + 0x11);
    memmove(puVar4, puVar3, 0x288); /* compiler REP MOVS byte copy */
    *(undefined1 *)(local_10 + 0x10) = *(undefined1 *)(local_c + 0x10);
  }
  if (local_c != 0) {
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    cMf32::RecMemFree(in_stack_00000004,&local_c);
  }
  return iVar1;
}

