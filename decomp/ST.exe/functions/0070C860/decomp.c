
int __cdecl FUN_0070c860(uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  InternalExceptionFrame local_4c;
  int local_8;

  local_8 = 0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  iVar1 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (iVar1 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  if (0 < param_4) {
    uVar2 = FUN_006b4fa0(param_1);
    FUN_007521b0(&local_8,(AnonShape_006B4B20_3D4F4412 *)param_1,uVar2,param_3,param_4,param_2);
    g_currentExceptionFrame = local_4c.previous;
    return local_8;
  }
  iVar1 = FUN_006b4fa0(param_1);
  FUN_006b4b20(&local_8,(AnonShape_006B4B20_3D4F4412 *)param_1,iVar1,(byte)param_2);
  g_currentExceptionFrame = local_4c.previous;
  return local_8;
}

