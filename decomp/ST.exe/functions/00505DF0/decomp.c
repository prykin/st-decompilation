#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintBioSonar

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall CPanelTy::PaintBioSonar(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  BITMAPINFO *pBVar3;
  char *pcVar4;
  int iVar7;
  byte bVar5;
  int iVar6;
  int iVar8;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_c->field_02B2,1);
    /* ST_CALLSITE[00505E44]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0x33,0x7b,'\x01',(byte *)pBVar3);
    if (pCVar2->field_0C2F != 0) {
      ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,0x24,0x4c,0xa4,0x2b);
      pcVar4 = LoadResourceString(0x38ae,g_hINSTANCE_00807618);
      /* ST_CALLSITE[00505E9A]: CALL dword ptr [0x0085bde8] */
      wsprintfA((LPSTR)&DAT_0080f33a,"%d\n%s",(uint)(ushort)pCVar2->field_0C2F,pcVar4);
      ccFntTy::WrTxt(pCVar2->field_01B8,(char *)&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    if (pCVar2->field_0C29 != 0xff) {
      if (0x21 < pCVar2->field_0C29) {
        pCVar2->field_0C29 = 0x21;
      }
      bVar5 = 0;
      local_8 = local_8 & 0xffffff00;
      if (pCVar2->field_0C29 != 0) {
        do {
          pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
          /* ST_CALLSITE[00505F0F]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,(local_8 & 0xff) * 4 + 0x35,
                 0x7d,'\x01',(byte *)pBVar3);
          bVar5 = bVar5 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
        } while (bVar5 < pCVar2->field_0C29);
      }
      if (bVar5 < 0x21) {
        iVar6 = 0x21 - (local_8 & 0xff);
        iVar8 = (local_8 & 0xff) * 4 + 0x35;
        do {
          pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
          /* ST_CALLSITE[00505F5C]: CALL 0x00403229; direct=00403229 DibPut */
          DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar8,0x7d,'\x01',
                 (byte *)pBVar3);
          iVar8 = iVar8 + 4;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x19a,0,iVar3,"%s",
                             "CPanelTy::PaintBioSonar");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x19a);
  return;
}

