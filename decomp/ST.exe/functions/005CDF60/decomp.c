#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::SendPlList

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall SettMapMTy::SendPlList(SettMapMTy *this,int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  SettMapMTy *pSVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  SettMapMTy_field_1F84Element *pSVar11;
  char *pcVar12;
  InternalExceptionFrame local_50;
  uint local_c;
  SettMapMTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar7 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar6 = local_8;
  if (iVar7 == 0) {
    uVar9 = local_8->field_1F84->count * 0x60;
    uVar10 = uVar9 + 9;
    local_c = uVar10;
    if ((uint)local_8->field_222A < uVar10) {
      iVar7 = Library::DKW::LIB::FUN_006acf50(local_8->field_2226,uVar10);
      pSVar6->field_2226 = iVar7;
      pSVar6->field_222A = uVar10;
    }
    puVar1 = (undefined4 *)pSVar6->field_2226;
    *puVar1 = pSVar6->field_2121;
    puVar1[1] = DAT_00808aab;
    *(SettMapMTy_field_1E26State *)(puVar1 + 2) = pSVar6->field_1E26;
    pSVar11 = pSVar6->field_1F84->data;
    pcVar12 = (char *)((int)puVar1 + 9);
    for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      cVar3 = pSVar11->field_0001;
      cVar4 = pSVar11->state;
      cVar5 = pSVar11->field_0003;
      pcVar12[0] = pSVar11->field_0000;
      pcVar12[1] = cVar3;
      pcVar12[2] = cVar4;
      pcVar12[3] = cVar5;
      pSVar11 = (SettMapMTy_field_1F84Element *)&pSVar11->field_0004;
      pcVar12 = pcVar12 + 4;
    }
    for (iVar7 = 0; iVar7 != 0; iVar7 = iVar7 + -1) {
      *pcVar12 = pSVar11->field_0000;
      pSVar11 = (SettMapMTy_field_1F84Element *)&pSVar11->field_0001;
      pcVar12 = pcVar12 + 1;
    }
    FUN_00715360(g_int_00811764,param_1,'\"',(char *)pSVar6->field_2226,local_c,1,0xffffffff);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar8 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x230,0,iVar7,"%s",
                             "SettMapMTy::SendPlList");
  if (iVar8 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar7,0,"E:\\__titans\\Start\\settmobj.cpp",0x230);
  return;
}

