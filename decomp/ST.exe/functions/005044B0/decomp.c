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
  RecoveredRecordView_006B84D0_87AF9D9B *pRVar4;
  char *pcVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  size_t _Count;
  char *_Dest;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  char *local_c;
  UINT local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;

  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pCVar2 = local_10;
  if (iVar3 == 0) {
    /* ST_CALLSITE[005044FE]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)local_10->field_0194,param_1,0x50,'\x01',
           (RecoveredRecordView_006B84D0_87AF9D9B *)local_10->field_09D9[5]);
    if (pCVar2->field_0BF5 == CASE_38) {
      local_c = (char *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(2));
    }
    else {
      local_c = (char *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(pCVar2->field_0BF5 == CASE_4F));
    }
    /* ST_CALLSITE[00504530]: CALL 0x0070b3a0; direct=0070B3A0 FUN_0070b3a0; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__cdecl;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredGlobalRecordView_0081175C;/int */
    pRVar4 = FUN_0070b3a0((RecoveredGlobalRecordView_0081175C *)pCVar2->field_02D2,
                          (uint)local_c & 0xff);
    /* ST_CALLSITE[00504545]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,param_1 + 3,0x53,'\x01',pRVar4);
    if (pCVar2->field_0BF5 == CASE_38) {
      local_c = &CHAR_3_007aa024;
      local_8 = 0x271c;
    }
    else if (pCVar2->field_0BF5 == CASE_4F) {
      local_c = &CHAR_4_007aa020;
      local_8 = 0x271e;
    }
    else {
      local_c = &CHAR_2_007aa028;
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
    /* ST_CALLSITE[005045F3]: CALL dword ptr [0x0085bde8] */
    wsprintfA((LPSTR)&DAT_0080f33a,"&%s%s\n&1%s",local_c,pcVar5,_Dest);
    iVar3 = param_1 + 0x40;

    ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,iVar3,0x57,0x75,0x16);

    ccFntTy::WrTxt(pCVar2->field_01B8,(char *)&DAT_0080f33a,-2,-1,0,-1,-1);
    /* ST_CALLSITE[0050464C]: CALL 0x00710ba0; direct=00710BA0 ccFntTy::CreateSurf; [STCallResultViewApplier] readability_validated; exact direct-call result=pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B; signature=__thiscall;pointer:/SubmarineTitans/Recovered/PointerShapes/RecoveredRecordView_006B84D0_87AF9D9B;pointer:/ccFntTy;/int;/uint;/int;/int;/int;/int;/int */
    pRVar4 = ccFntTy::CreateSurf(pCVar2->field_01C4,pCVar2->field_0194,0,iVar3,0x6d,0x75,0xe,0);
    if (pRVar4 != nullptr) {
      /* ST_CALLSITE[0050466B]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"%06d",(uint)(ushort)pCVar2->field_0C34);
      if (pCVar2->field_0BF5 == CASE_38) {
        uVar7 = 1;
      }
      else {
        uVar7 = (-(uint)(pCVar2->field_0BF5 != CASE_4F) & 0xfffffffe) + 2;
      }

      ccFntTy::WrStr(pCVar2->field_01C4,(char *)&DAT_0080f33a,-1,-1,uVar7);
      /* ST_CALLSITE[005046B4]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar3,0x6f,'\x01',pRVar4);

      ccFntTy::EraseSufr(pCVar2->field_01C4);
    }
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;

  iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x47,0,iVar3,"%s",
                             "CPanelTy::PaintMineInf");
  if (iVar8 == 0) {
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x47);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

