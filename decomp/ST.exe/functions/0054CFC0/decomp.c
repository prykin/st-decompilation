#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::InitSystem */

undefined4 __thiscall STPlaySystemC::InitSystem(STPlaySystemC *this,int param_1)

{
  uint *puVar1;
  code *pcVar2;
  STPlaySystemC *pSVar3;
  int iVar4;
  AnonPointee_STPlaySystemC_003D *pAVar5;
  int iVar6;
  undefined4 uVar7;
  InternalExceptionFrame local_54;
  uint local_10;
  uint *local_c;
  STPlaySystemC *local_8;

  this->field_0030 = 0;
  local_10 = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pSVar3 = local_8;
  if (iVar4 == 0) {
    SystemClassTy::InitSystem((SystemClassTy *)local_8);
    pSVar3->field_0039 = (AnonPointee_STPlaySystemC_0039 *)0x0;
    pSVar3->field_0045 = 7;
    pAVar5 = (AnonPointee_STPlaySystemC_003D *)Library::DKW::LIB::FUN_006aac70(7);
    pSVar3->field_003D = pAVar5;
    pSVar3->field_0053 = 0x1400;
    iVar4 = Library::DKW::LIB::FUN_006aac70(0x1400);
    pSVar3->field_004F = iVar4;
    pSVar3->field_0041 = 0;
    pSVar3->field_0049 = 0;
    puVar1 = &pSVar3->field_00E4;
    pSVar3->field_004D = 0;
    pSVar3->field_004E = 0;
    pSVar3->field_0059 = 0;
    pSVar3->field_00E8 = 0;
    pSVar3->field_00EC = 0;
    pSVar3->field_0057 = 0;
    pSVar3->field_0028 = 0;
    pSVar3->field_002C = 0;
    *puVar1 = 0;
    if (g_cMf32_00806754 != (cMf32 *)0x0) {
      local_c = puVar1;
      cMf32::RecGet(g_cMf32_00806754,0xc,PTR_DAT_0079ae30,(int *)&local_c,0);
    }
    pSVar3->field_0034 = *puVar1;
    pSVar3->field_0020 = local_10;
    pSVar3->field_0038 = 0;
    pSVar3->field_0065 = 0;
    pSVar3->field_0069 = 0;
    pSVar3->field_006D = 0;
    pSVar3->field_0071 = 0;
    pSVar3->field_0075 = 0;
    pSVar3->field_0079 = 0;
    pSVar3->field_00BB = 0;
    pSVar3->field_00A7 = 0;
    pSVar3->field_00AB = 0;
    pSVar3->field_00AF = 0;
    pSVar3->field_00B3 = 0;
    pSVar3->field_00B7 = 0;
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\tplaysys.cpp",0x18c,0,iVar4,"%s",
                             "STPlaySystemC::InitSystem");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\tplaysys.cpp",0x18e);
  return 0xfffffffc;
}

