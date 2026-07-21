#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintBioSonar */

void __thiscall CPanelTy::PaintBioSonar(CPanelTy *this)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  byte bVar6;
  int iVar7;
  InternalExceptionFrame local_50;
  CPanelTy *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)local_c->field_02B2,1);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_0194,0x33,0x7b,'\x01',pbVar4);
    if (pCVar2->field_0C2F != 0) {
      ccFntTy::SetSurf(pCVar2->field_01B8,pCVar2->field_0194,0,0x24,0x4c,0xa4,0x2b);
      pcVar5 = LoadResourceString(0x38ae,HINSTANCE_00807618);
      wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2840,(uint)(ushort)pCVar2->field_0C2F,pcVar5);
      ccFntTy::WrTxt(pCVar2->field_01B8,&DAT_0080f33a,-2,-1,5,-1,-1);
    }
    if (pCVar2->field_0C29 != 0xff) {
      if (0x21 < (byte)pCVar2->field_0C29) {
        pCVar2->field_0C29 = 0x21;
      }
      bVar6 = 0;
      local_8 = local_8 & 0xffffff00;
      if (pCVar2->field_0C29 != '\0') {
        do {
          pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_0194,(local_8 & 0xff) * 4 + 0x35,0x7d,
                 '\x01',pbVar4);
          bVar6 = bVar6 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_8 = CONCAT31(local_8._1_3_,bVar6);
        } while (bVar6 < (byte)pCVar2->field_0C29);
      }
      if (bVar6 < 0x21) {
        iVar7 = 0x21 - (local_8 & 0xff);
        iVar3 = (local_8 & 0xff) * 4 + 0x35;
        do {
          pbVar4 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
          DibPut((AnonShape_006B5B10_E0D06CF1 *)pCVar2->field_0194,iVar3,0x7d,'\x01',pbVar4);
          iVar3 = iVar3 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Andrey_cpanel4_cpp_007c2700,0x19a,0,iVar3,&DAT_007a4ccc,
                             s_CPanelTy__PaintBioSonar_007c2824);
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_cpanel4_cpp_007c2700,0x19a);
  return;
}

