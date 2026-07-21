
undefined4 * __cdecl FUN_0070c900(int param_1,uint *param_2,char param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  InternalExceptionFrame local_4c;
  uint local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 == 0) {
    if (param_4 < 0) {
      puVar4 = &local_8;
      iVar3 = -1 - param_4;
      iVar1 = FUN_006b4fa0(param_1);
      puVar2 = (undefined4 *)
               FUN_00752cf0((AnonShape_006B5B10_E0D06CF1 *)param_1,iVar1,iVar3,param_3,puVar4);
    }
    else {
      puVar4 = &local_8;
      iVar1 = FUN_006b4fa0(param_1);
      puVar2 = FUN_007527a0((AnonShape_006B5B10_E0D06CF1 *)param_1,iVar1,param_4,param_3,puVar4);
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = local_8;
    }
    g_currentExceptionFrame = local_4c.previous;
    return puVar2;
  }
  g_currentExceptionFrame = local_4c.previous;
  return (undefined4 *)0x0;
}

