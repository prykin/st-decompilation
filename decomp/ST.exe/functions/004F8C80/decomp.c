#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PaintSMap */

uint __thiscall CPanelTy::PaintSMap(CPanelTy *this)

{
  undefined1 *resourceString;
  ulonglong uVar1;
  code *pcVar2;
  CPanelTy *pCVar3;
  int errorCode;
  uint uVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EAX;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  InternalExceptionFrame local_50;
  char local_c;
  undefined3 uStack_b;
  CPanelTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  pCVar3 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x2fc,0,errorCode,
                               "%s","CPanelTy::PaintSMap");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x2fc);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    return extraout_EAX;
  }
  if ((uint)(local_8->field_0038 - local_8->field_0998) < 100) {
    if ((PTR_00807598->field_0442 == 0) && (PTR_00807598->field_0446 == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    if (uVar4 == 0) {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    if (1 < DAT_0080673c) {
      g_currentExceptionFrame = local_50.previous;
      return uVar4;
    }
  }
  local_8->field_0998 = local_8->field_0038;
  sub_0052B330(local_8);
  FUN_006e6fb0(PTR_00807598,(AnonShape_006B5B10_E0D06CF1 *)pCVar3->field_0190,5,7,
               (uint)(pCVar3->field_023F != CASE_2));
  uVar4 = g_playSystem_00802A38->field_00E4 * 0x51eb851f;
  uVar8 = g_playSystem_00802A38->field_00E4 / 0x19;
  if (300 < uVar8 - DAT_0080c4cf) {
    uVar4 = thunk_FUN_0056f930((AnonShape_0056F930_C6277D80 *)&DAT_00807620);
    DAT_00808794 = uVar4;
    DAT_0080c4cf = uVar8;
  }
  if (uVar8 != pCVar3->field_09A0) {
    pCVar3->field_09A0 = uVar8;
    ccFntTy::SetSurf(pCVar3->field_01BC,pCVar3->field_0190,0,(DAT_0080874e == '\x03') + 7,0x10,0x28,
                     0xb);
    uVar4 = (uint)DAT_0080874d;
    if ((&DAT_008087f7)[uVar4 * 0x51] == '\0') {
      uVar8 = *(int *)(&DAT_008087f8 + uVar4 * 0x51) + pCVar3->field_09A0;
      uVar4 = uVar8 / 0xe10;
      cVar7 = (char)uVar4;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,cVar7);
      resourceString = &pCVar3->field_0x1e1;
      if (cVar7 == '\0') {
        puVar6 = &DAT_007c2198;
        pcVar10 = "%s;";
      }
      else {
        puVar6 = (undefined *)(uVar4 & 0xff);
        pcVar10 = "%2d:";
      }
      wsprintfA(resourceString,pcVar10,puVar6);
      uVar1 = (ulonglong)uVar8 % 0xe10;
      wsprintfA(resourceString,"%s%02d:%02d",resourceString,(int)(uVar1 / 0x3c),
                (int)(uVar1 % 0x3c));
      uVar4 = ccFntTy::WrTxt(pCVar3->field_01BC,(uint *)resourceString,0,0,
                             (uint)(DAT_0080874e == '\x03'),-1,-1);
    }
    else {
      uVar8 = pCVar3->field_09A0 - *(int *)(&DAT_008087fc + uVar4 * 0x51);
      if (uVar8 < *(uint *)(&DAT_008087f8 + uVar4 * 0x51)) {
        uVar8 = *(uint *)(&DAT_008087f8 + uVar4 * 0x51) - uVar8;
        uVar4 = uVar8 / 0xe10;
        cVar7 = (char)uVar4;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_c = CONCAT31(uStack_b,cVar7);
        if (cVar7 == '\0') {
          puVar6 = &DAT_007c2198;
          pcVar10 = "%s;";
        }
        else {
          puVar6 = (undefined *)(uVar4 & 0xff);
          pcVar10 = "%2d:";
        }
        wsprintfA(&pCVar3->field_0x1e1,pcVar10,puVar6);
        uVar1 = (ulonglong)uVar8 % 0xe10;
        wsprintfA(&pCVar3->field_0x1e1,"%s%02d:%02d",&pCVar3->field_0x1e1,
                  (int)(uVar1 / 0x3c),(int)(uVar1 % 0x3c));
      }
      else {
        uVar4 = 0xffffffff;
        pcVar10 = &DAT_007c21a4;
        do {
          pcVar9 = pcVar10;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar9 = pcVar10 + 1;
          cVar7 = *pcVar10;
          pcVar10 = pcVar9;
        } while (cVar7 != '\0');
        uVar4 = ~uVar4;
        pcVar10 = pcVar9 + -uVar4;
        pcVar9 = &pCVar3->field_0x1e1;
        for (uVar8 = uVar4 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar9 = pcVar9 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar9 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
        }
      }
      uVar4 = ccFntTy::WrTxt(pCVar3->field_01BC,(uint *)&pCVar3->field_0x1e1,0,0,
                             (DAT_0080874e == '\x03') + 2,-1,-1);
      if (DAT_0080c4d3 != 2) {
        ccFntTy::WrTxt(pCVar3->field_01CC,(uint *)&pCVar3->field_0x1e1,0xd,10,0,-1,-1);
        uVar4 = Library::DKW::DDX::FUN_006b3640
                          ((int *)PTR_008075a8,pCVar3->field_0174,0xffffffff,pCVar3->field_00EC,
                           pCVar3->field_00F0);
      }
    }
  }
  if ((pCVar3->field_023F != CASE_2) && (uVar4 = pCVar3->field_0158, -1 < (int)uVar4)) {
    uVar4 = Library::DKW::DDX::FUN_006b3640
                      ((int *)PTR_008075a8,uVar4,0xffffffff,pCVar3->field_004C,pCVar3->field_00A4);
  }
  g_currentExceptionFrame = local_50.previous;
  return uVar4;
}

