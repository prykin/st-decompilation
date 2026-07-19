
void __thiscall thunk_FUN_0056a130(void *this,uint param_1,char param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint uVar2;
  InternalExceptionFrame *pIVar3;
  int in_stack_ffffffb8;
  
  pIVar3 = g_currentExceptionFrame;
  if (*(int *)((int)this + 0xf8b) == 0) {
    return;
  }
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  iVar1 = __setjmp3((undefined4 *)&stack0xffffffb8,0,pIVar3,in_stack_ffffffb8);
  if (iVar1 == 0) {
    if (param_4 == (uint *)0x0) {
      param_4 = (uint *)FUN_0071a990(*(int *)((int)this + 0xdf3),
                                     (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f),-1,
                                     (undefined1 *)0x0);
    }
    iVar1 = param_3;
    if (param_2 == '\x01') {
      if (param_4 == (uint *)0x0) {
        g_currentExceptionFrame = pIVar3;
        return;
      }
      if (param_3 < 0) {
        param_3 = 0;
        iVar1 = 0xf;
      }
      uVar2 = 2;
    }
    else if (param_2 == '\x02') {
      if (param_4 == (uint *)0x0) {
        g_currentExceptionFrame = pIVar3;
        return;
      }
      if (param_3 < 0) {
        param_3 = 0;
        uVar2 = 9;
        iVar1 = 0xf;
      }
      else {
        uVar2 = 9;
      }
    }
    else {
      if (param_4 == (uint *)0x0) {
        g_currentExceptionFrame = pIVar3;
        return;
      }
      if (param_3 < 0) {
        param_3 = 0x10;
        uVar2 = 0;
        iVar1 = 0x1f;
      }
      else {
        uVar2 = 0;
      }
    }
    FUN_006c1390(param_4,0,uVar2,DAT_0080730e,0,param_3,iVar1);
    g_currentExceptionFrame = pIVar3;
    return;
  }
  g_currentExceptionFrame = pIVar3;
  return;
}

