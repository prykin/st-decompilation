
int __cdecl FUN_0070b770(AnonShape_0070B770_3BA0472D *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  InternalExceptionFrame *in_stack_ffffff2c;
  InternalExceptionFrame *pIVar4;
  int in_stack_ffffff30;
  InternalExceptionFrame local_90;
  InternalExceptionFrame local_4c;
  int local_8;
  
  pIVar4 = g_currentExceptionFrame;
  sVar1 = param_1->field_000E;
  local_8 = 0;
  if (sVar1 == 8) {
    if (param_2 != 8) {
      if (param_2 == 0x10) {
        g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffff2c;
        iVar2 = Library::MSVCRT::__setjmp3
                          ((undefined4 *)&stack0xffffff30,0,pIVar4,in_stack_ffffff30);
        if (iVar2 != 0) {
          g_currentExceptionFrame = pIVar4;
          return local_8;
        }
        iVar2 = FUN_006d1a10((undefined4 *)0x0,0,0,0,(int)param_1,0,0,0,param_1->field_0004,
                             param_1->field_0008);
        g_currentExceptionFrame = pIVar4;
        return iVar2;
      }
      if (param_2 != 0x18) {
        return 0;
      }
      local_90.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_90;
      iVar2 = Library::MSVCRT::__setjmp3(local_90.jumpBuffer,0,in_stack_ffffff2c,in_stack_ffffff30);
      if (iVar2 != 0) {
        g_currentExceptionFrame = local_90.previous;
        return local_8;
      }
      iVar2 = FUN_006d1a50((undefined4 *)0x0,0,0,0,(int)param_1,0,0,0,param_1->field_0004,
                           param_1->field_0008);
      g_currentExceptionFrame = local_90.previous;
      return iVar2;
    }
  }
  else {
    if (sVar1 == 0x10) {
      bVar3 = param_2 == 0x10;
    }
    else {
      if (sVar1 != 0x18) {
        return 0;
      }
      if (param_2 == 0x10) {
        local_4c.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_4c;
        iVar2 = Library::MSVCRT::__setjmp3
                          (local_4c.jumpBuffer,0,in_stack_ffffff2c,in_stack_ffffff30);
        if (iVar2 != 0) {
          g_currentExceptionFrame = local_4c.previous;
          return local_8;
        }
        iVar2 = FUN_006d1a90((undefined4 *)0x0,0,0,0,(int)param_1,0,0,0,param_1->field_0004,
                             param_1->field_0008);
        g_currentExceptionFrame = local_4c.previous;
        return iVar2;
      }
      bVar3 = param_2 == 0x18;
    }
    if (!bVar3) {
      return 0;
    }
  }
  return (int)param_1;
}

