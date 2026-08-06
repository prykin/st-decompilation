#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::SendPlList

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall SettMapMTy::SendPlList(SettMapMTy *this,int param_1)

{
  char cVar2;
  char cVar3;
  char cVar4;
  SettMapMTy *pSVar5;
  int iVar6;
  char *pcVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint newSize;
  SettMapMTy_field_1F84Element *pSVar10;
  InternalExceptionFrame local_50;
  uint local_c;
  SettMapMTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar6 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pSVar5 = local_8;
  if (iVar6 == 0) {
    uVar9 = local_8->field_1F84->count * 0x60;
    newSize = uVar9 + 9;
    local_c = newSize;
    if ((uint)local_8->field_222A < newSize) {
      pcVar6 = Library::DKW::LIB::MemRealloc(local_8->field_2226,newSize);
      pSVar5->field_2226 = pcVar6;
      pSVar5->field_222A = newSize;
    }
    pcVar6 = pSVar5->field_2226;
    *(undefined4 *)pcVar6 = pSVar5->field_2121;
    *(undefined4 *)(pcVar6 + 4) = DAT_00808aab;
    pcVar6[8] = pSVar5->field_1E26;
    pSVar10 = pSVar5->field_1F84->data;
    pcVar6 = pcVar6 + 9;
    for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      cVar2 = pSVar10->field_0001;
      cVar3 = pSVar10->state;
      cVar4 = pSVar10->field_0003;
      pcVar6[0] = pSVar10->field_0000;
      pcVar6[1] = cVar2;
      pcVar6[2] = cVar3;
      pcVar6[3] = cVar4;
      pSVar10 = (SettMapMTy_field_1F84Element *)&pSVar10->field_0004;
      pcVar6 = pcVar6 + 4;
    }
    for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
      *pcVar6 = pSVar10->field_0000;
      pSVar10 = (SettMapMTy_field_1F84Element *)&pSVar10->field_0001;
      pcVar6 = pcVar6 + 1;
    }
    FUN_00715360(g_int_00811764,param_1,'\"',pSVar5->field_2226,local_c,1,0xffffffff);
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Start\\settmobj.cpp",0x230,0,iVar6,"%s",
                             "SettMapMTy::SendPlList");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\settmobj.cpp",0x230);
  return;
}

