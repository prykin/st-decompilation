
void __thiscall MTaskTy::TTaskItemClose(MTaskTy *this,uint *param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar4;
  InternalExceptionFrame IStack_48;
  
  IStack_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_48;
  iVar2 = __setjmp3(IStack_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (param_1 != (uint *)0x0) {
      if (-1 < (int)*param_1) {
        FUN_006b3bb0(DAT_008075a8,*param_1);
      }
      *param_1 = 0xffffffff;
      iVar2 = 3;
      puVar4 = param_1;
      do {
        puVar4 = puVar4 + 1;
        if (*puVar4 != 0) {
          FUN_006ab060(puVar4);
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if (*(int **)((int)param_1 + 0x31) != (int *)0x0) {
        FUN_00714060(*(int **)((int)param_1 + 0x31));
        FUN_0072e2b0(*(undefined4 **)((int)param_1 + 0x31));
        *(undefined4 *)((int)param_1 + 0x31) = 0;
      }
      if (*(int *)((int)param_1 + 0x3a) != 0) {
        FUN_006ab060((undefined4 *)((int)param_1 + 0x3a));
      }
    }
    g_currentExceptionFrame = IStack_48.previous;
    return;
  }
  g_currentExceptionFrame = IStack_48.previous;
  iVar3 = ReportDebugMessage(s_E____titans_Start_task_obj_cpp_007cd994,0x1ab,0,iVar2,&DAT_007a4ccc,
                             s_MTaskTy__TTaskItemClose_007cdab8);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Start_task_obj_cpp_007cd994,0x1ab);
  return;
}

