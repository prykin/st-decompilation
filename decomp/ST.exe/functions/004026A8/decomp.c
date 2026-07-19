
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00573260(void)

{
  int iVar1;
  uint uVar2;
  InternalExceptionFrame *in_stack_fffffec8;
  InternalExceptionFrame *pIVar3;
  int in_stack_fffffecc;
  InternalExceptionFrame IStack_f4;
  InternalExceptionFrame IStack_b0;
  InternalExceptionFrame IStack_6c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int *piStack_8;
  
  IStack_f4.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_f4;
  iVar1 = __setjmp3(IStack_f4.jumpBuffer,0,in_stack_fffffec8,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*piStack_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(piStack_8[1] + 0x80) & 1;
    }
    if (uVar2 != 0) {
      FUN_006b7e00(piStack_8[1],3,&iStack_14,&iStack_24);
    }
    register0x00000000 = (uint)(iStack_14 + iStack_24) >> 1;
  }
  else {
    register0x00000000 = 0;
  }
  g_currentExceptionFrame = &IStack_b0;
  IStack_b0.previous = IStack_f4.previous;
  iVar1 = __setjmp3(IStack_b0.jumpBuffer,0,in_stack_fffffec8,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*piStack_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(piStack_8[1] + 0x50) & 1;
    }
    if (uVar2 != 0) {
      FUN_006b7e00(piStack_8[1],1,&iStack_1c,&iStack_20);
    }
    _DAT_00807312 = (uint)(iStack_1c + iStack_20) >> 1;
  }
  else {
    _DAT_00807312 = 0;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xfffffec8;
  pIVar3 = IStack_b0.previous;
  iVar1 = __setjmp3((undefined4 *)&stack0xfffffecc,0,IStack_b0.previous,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*piStack_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(piStack_8[1] + 0x68) & 1;
    }
    if (uVar2 != 0) {
      FUN_006b7e00(piStack_8[1],2,&iStack_c,&iStack_28);
    }
    _DAT_00807306 = (uint)(iStack_c + iStack_28) >> 1;
  }
  else {
    _DAT_00807306 = 0;
  }
  g_currentExceptionFrame = &IStack_6c;
  IStack_6c.previous = pIVar3;
  iVar1 = __setjmp3(IStack_6c.jumpBuffer,0,pIVar3,in_stack_fffffecc);
  if (iVar1 == 0) {
    if (*piStack_8 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint *)(piStack_8[1] + 0x38) & 1;
    }
    if (uVar2 != 0) {
      FUN_006b7e00(piStack_8[1],0,&iStack_18,&iStack_10);
    }
    g_currentExceptionFrame = IStack_6c.previous;
    _DAT_00807316 = (uint)(iStack_18 + iStack_10) >> 1;
    return;
  }
  g_currentExceptionFrame = IStack_6c.previous;
  _DAT_00807316 = 0;
  return;
}

