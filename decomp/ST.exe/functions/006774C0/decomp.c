
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\ai\ai_mdef.cpp
   Diagnostic line evidence: 750 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

uint * __cdecl
FUN_006774c0(undefined4 param_1,byte *param_2,char param_3,short param_4,short param_5,short param_6
            ,short param_7,short param_8,short param_9,int param_10)

{
  int exceptionCode;
  DArrayTy *pDVar1;
  undefined *puVar2;
  InternalExceptionFrame local_4c;
  DArrayTy *local_8;

  local_8 = (DArrayTy *)0x0;
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  exceptionCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  if (exceptionCode == 0) {
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,2,10);
    puVar2 = &LAB_00401852;
    if (param_10 == 0) {
      puVar2 = &LAB_00403490;
    }
    local_8 = pDVar1;
    _EnumPlObj(param_1,0,0x3fffffff,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               puVar2,&pDVar1->flags,(undefined *)0x0);
    g_currentExceptionFrame = local_4c.previous;
    return &pDVar1->flags;
  }
  g_currentExceptionFrame = local_4c.previous;
  if (local_8 != (DArrayTy *)0x0) {
    DArrayDestroy(local_8);
  }
  local_8 = (DArrayTy *)0x0;
  RaiseInternalException(exceptionCode,0,"E:\\__titans\\ai\\ai_mdef.cpp",0x2ee);
  return (uint *)0x0;
}

