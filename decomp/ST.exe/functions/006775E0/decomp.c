
uint * __cdecl
FUN_006775e0(undefined4 param_1,uint param_2,uint param_3,byte *param_4,char param_5,short param_6,
            short param_7,short param_8,short param_9,short param_10,short param_11,int param_12)

{
  int exceptionCode;
  uint *puVar1;
  undefined *puVar2;
  void *unaff_ESI;
  InternalExceptionFrame *pIVar3;
  undefined4 local_48 [16];
  uint *local_8;
  
  pIVar3 = g_currentExceptionFrame;
  local_8 = (uint *)0x0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffb4;
  exceptionCode = Library::MSVCRT::__setjmp3(local_48,0,unaff_ESI,pIVar3);
  if (exceptionCode == 0) {
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,2,10);
    puVar2 = &LAB_00401852;
    if (param_12 == 0) {
      puVar2 = &LAB_00403490;
    }
    local_8 = puVar1;
    thunk_FUN_00676d80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11,puVar2,puVar1,(undefined *)0x0);
    g_currentExceptionFrame = pIVar3;
    return puVar1;
  }
  g_currentExceptionFrame = pIVar3;
  if (local_8 != (uint *)0x0) {
    FUN_006ae110((byte *)local_8);
  }
  local_8 = (uint *)0x0;
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x308);
  return (uint *)0x0;
}

