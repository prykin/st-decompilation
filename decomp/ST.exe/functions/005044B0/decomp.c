#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintMineInf

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CPanelTy::PaintMineInf(CPanelTy *this,int param_1)

{
  CPanelTy *pCVar2;
  int iVar3;
  BITMAPINFO *pBVar4;
  char *pcVar5;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  size_t _Count;
  char *_Dest;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  undefined1 *local_c;
  UINT local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pCVar2 = local_10;
  if (iVar3 == 0) {
    DibPut((RecoveredSourceFamily_dibcopy *)local_10->field_0194,param_1,0x50,'\x01',
           (byte *)local_10->field_09D9[5]);
    if (pCVar2->field_0BF5 == CASE_38) {
      local_c = (undefined1 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(2));
    }
    else {
      local_c = (undefined1 *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(pCVar2->field_0BF5 == CASE_4F));
    }
    pBVar4 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02D2,
                          (uint)local_c & 0xff);
    DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,param_1 + 3,0x53,'\x01',
           (byte *)pBVar4);
    if (pCVar2->field_0BF5 == CASE_38) {
      local_c = &DAT_007aa024;
      local_8 = 0x271c;
    }
    else if (pCVar2->field_0BF5 == CASE_4F) {
      local_c = &DAT_007aa020;
      local_8 = 0x271e;
    }
    else {
      local_c = &DAT_007aa028;
      local_8 = 0x271d;
    }
    _Count = 0x32;
    _Dest = &pCVar2->field_01E1;
    pcVar5 = LoadResourceString(0x2721,g_hINSTANCE_00807618);
    Library::MSVCRT::_strncpy(_Dest,pcVar5,_Count);
    pCVar2->field_0x212 = 0;
    for (puVar6 = Library::MSVCRT::FUN_0072e560((uint *)_Dest,'\n'); puVar6 != nullptr;
        puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
      *(undefined1 *)puVar6 = 0x20;
    }
    pcVar5 = LoadResourceString(local_8,g_hINSTANCE_00807618);
    wsprintfA((LPSTR)&DAT_0080f33a,"&%s%s\n&1%s",local_c,pcVar5,_Dest);
    iVar3 = param_1 + 0x40;
    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,iVar3,0x57,0x75,0x16);
    ccFntTy::WrTxt(pCVar2->field_01B8,(char *)&DAT_0080f33a,-2,-1,0,-1,-1);
    pbVar7 = (byte *)ccFntTy::CreateSurf(pCVar2->field_01C4,pCVar2->field_0194,0,iVar3,0x6d,0x75,0xe
                                         ,0);
    if (pbVar7 != nullptr) {
      wsprintfA((LPSTR)&DAT_0080f33a,"%06d",(uint)(ushort)pCVar2->field_0C34);
      if (pCVar2->field_0BF5 == CASE_38) {
        uVar8 = 1;
      }
      else {
        uVar8 = (-(uint)(pCVar2->field_0BF5 != CASE_4F) & 0xfffffffe) + 2;
      }
      ccFntTy::WrStr(pCVar2->field_01C4,(char *)&DAT_0080f33a,-1,-1,uVar8);
      DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar3,0x6f,'\x01',pbVar7);
      ccFntTy::EraseSufr(pCVar2->field_01C4);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar9 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x47,0,iVar3,"%s",
                             "CPanelTy::PaintMineInf");
  if (iVar9 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x47);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

