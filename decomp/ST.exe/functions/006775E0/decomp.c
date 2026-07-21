
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 776 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl
FUN_006775e0(undefined4 param_1,uint param_2,uint param_3,byte *param_4,char param_5,short param_6,
            short param_7,short param_8,short param_9,short param_10,short param_11,int param_12)

{
  int exceptionCode;
  uint *puVar1;
  undefined *puVar2;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = (DArrayTy *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,2,10);
    puVar2 = &LAB_00401852;
    if (param_12 == 0) {
      puVar2 = &LAB_00403490;
    }
    local_8 = (DArrayTy *)puVar1;
    _EnumPlObj(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,puVar2,puVar1,(undefined *)0x0);
    g_currentExceptionFrame = local_4c.previous;
    return puVar1;
  }
  g_currentExceptionFrame = local_4c.previous;
  if (local_8 != (DArrayTy *)0x0) {
    DArrayDestroy(local_8);
  }
  local_8 = (DArrayTy *)0x0;
  RaiseInternalException(exceptionCode,0,s_E____titans_ai_ai_mdef_cpp_007d2d58,0x308);
  return (uint *)0x0;
}

