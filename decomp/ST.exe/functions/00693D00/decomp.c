
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00693D00 parameter used as this of cMf32::RecPut @ 00693D63 */

undefined4 __thiscall FUN_00693d00(void *this,cMf32 *param_1,undefined4 param_2)

{
  int iVar1;
  InternalExceptionFrame *pIVar2;
  int in_stack_ffffffb4;
  
  *(undefined4 *)this = 1;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xffffff05 | 5;
  *(undefined4 *)((int)this + 8) = param_2;
  pIVar2 = g_currentExceptionFrame;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb0;
  iVar1 = Library::MSVCRT::__setjmp3((undefined4 *)&stack0xffffffb4,0,pIVar2,in_stack_ffffffb4);
  if (iVar1 == 0) {
    cMf32::RecPut(param_1,0,PTR_s_DESCRIPTOR_0079d770,this,0x1999,(undefined4 *)0x0,'\0',(uint *)0x0
                 );
    g_currentExceptionFrame = pIVar2;
    return 1;
  }
  g_currentExceptionFrame = pIVar2;
  return 0;
}

