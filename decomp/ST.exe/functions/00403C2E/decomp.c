
uint * __cdecl
thunk_FUN_006774c0(undefined4 param_1,byte *param_2,char param_3,short param_4,short param_5,
                  short param_6,short param_7,short param_8,short param_9,int param_10)

{
  int exceptionCode;
  uint *puVar1;
  undefined *puVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 auStack_48 [16];
  uint *puStack_8;
  
  pIVar3 = g_currentExceptionFrame;
  puStack_8 = (uint *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = Library::MSVCRT::__setjmp3(auStack_48,0,unaff_ESI,pIVar3);
  if (exceptionCode == 0) {
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,2,10);
    puVar2 = &LAB_00401852;
    if (param_10 == 0) {
      puVar2 = &LAB_00403490;
    }
    puStack_8 = puVar1;
    thunk_FUN_00676d80(param_1,0,0x3fffffff,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9,puVar2,puVar1,(undefined *)0x0);
    g_currentExceptionFrame = pIVar3;
    return puVar1;
  }
  g_currentExceptionFrame = pIVar3;
  if (puStack_8 != (uint *)0x0) {
    FUN_006ae110((byte *)puStack_8);
  }
  puStack_8 = (uint *)0x0;
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x2ee);
  return (uint *)0x0;
}

