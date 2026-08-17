#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel4.cpp
   CPanelTy::PaintPerResSI */

uint __thiscall CPanelTy::PaintPerResSI(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  BITMAPINFO *pBVar3;
  uint uVar4;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EAX;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  InternalExceptionFrame local_54;
  uint local_10;
  CPanelTy *local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  pCVar2 = local_c;
  if (iVar3 == 0) {
    /* ST_CALLSITE[005049F1]: CALL 0x00404f1b; direct=00404F1B CPanelTy::PaintDamageXY */
    PaintDamageXY(local_c,local_c->field_0194,0x5c,0x50,local_c->field_0C33,0x2714);
    pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B2,1);
    /* ST_CALLSITE[00504A12]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,0x33,0x7b,'\x01',(byte *)pBVar3);
    bVar5 = 0;
    local_8 = local_8 & 0xffffff00;
    local_10 = ((uint)(byte)pCVar2->field_0C33 * 0x21) / 100;
    uVar4 = (uint)(byte)pCVar2->field_0C33 * -0x70a3d701;
    if (local_10 != 0) {
      uVar7 = 0;
      do {
        pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,1);
        /* ST_CALLSITE[00504A68]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,uVar7 * 4 + 0x35,0x7d,'\x01',
               (byte *)pBVar3);
        bVar5 = bVar5 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar5));
        uVar7 = (uint)bVar5;
        uVar4 = local_10;
      } while (uVar7 < local_10);
    }
    if (bVar5 < 0x21) {
      iVar6 = 0x21 - (local_8 & 0xff);
      iVar8 = (local_8 & 0xff) * 4 + 0x35;
      do {
        pBVar3 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)pCVar2->field_02B6,0);
        /* ST_CALLSITE[00504ABB]: CALL 0x00403229; direct=00403229 DibPut */
        uVar4 = DibPut((RecoveredSourceFamily_dibcopy *)pCVar2->field_0194,iVar8,0x7d,'\x01',
                       (byte *)pBVar3);
        iVar8 = iVar8 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    g_currentExceptionFrame = local_54.previous;
    return uVar4;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel4.cpp",0x68,0,iVar3,"%s",
                             "CPanelTy::PaintPerResSI");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel4.cpp",0x68);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  return extraout_EAX;
}

