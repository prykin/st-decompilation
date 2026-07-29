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
  ushort *puVar5;
  int iVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  uint extraout_EAX;
  uint uVar7;
  undefined *puVar8;
  char cVar9;
  char *pcVar10;
  char *pcVar11;
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
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x2fc,0,errorCode,
                               "%s","CPanelTy::PaintSMap");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x2fc);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    return extraout_EAX;
  }
  if ((uint)(local_8->field_0038 - local_8->field_0998) < 100) {
    if ((g_sT3DSMAPContext_00807598->field_0442 == 0) &&
       (g_sT3DSMAPContext_00807598->field_0446 == 0)) {
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
  ST3DSMAPContext::sub_006E6FB0
            (g_sT3DSMAPContext_00807598,(AnonShape_006B5B10_E0D06CF1 *)pCVar3->field_0190,5,7,
             (uint)(pCVar3->field_023F != CASE_2));
  puVar5 = (ushort *)(g_playSystem_00802A38->field_00E4 * 0x51eb851f);
  uVar4 = g_playSystem_00802A38->field_00E4 / 0x19;
  if (300 < uVar4 - DAT_0080c4cf) {
    puVar5 = (ushort *)thunk_FUN_0056f930((AnonShape_0056F930_C6277D80 *)&DAT_00807620);
    DAT_00808794 = puVar5;
    DAT_0080c4cf = uVar4;
  }
  if (uVar4 != pCVar3->field_09A0) {
    pCVar3->field_09A0 = uVar4;
    ccFntTy::SetSurf(pCVar3->field_01BC,pCVar3->field_0190,0,(DAT_0080874e == '\x03') + 7,0x10,0x28,
                     0xb);
    uVar4 = (uint)DAT_0080874d;
    if ((&DAT_008087f7)[uVar4 * 0x51] == '\0') {
      uVar7 = *(int *)(&DAT_008087f8 + uVar4 * 0x51) + pCVar3->field_09A0;
      uVar4 = uVar7 / 0xe10;
      cVar9 = (char)uVar4;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,cVar9);
      resourceString = &pCVar3->field_01E1;
      if (cVar9 == '\0') {
        puVar8 = &DAT_007c2198;
        pcVar11 = "%s;";
      }
      else {
        puVar8 = (undefined *)(uVar4 & 0xff);
        pcVar11 = "%2d:";
      }
      wsprintfA(resourceString,pcVar11,puVar8);
      uVar1 = (ulonglong)uVar7 % 0xe10;
      wsprintfA(resourceString,"%s%02d:%02d",resourceString,(int)(uVar1 / 0x3c),
                (int)(uVar1 % 0x3c));
      puVar5 = (ushort *)
               ccFntTy::WrTxt(pCVar3->field_01BC,(uint *)resourceString,0,0,
                              (uint)(DAT_0080874e == '\x03'),-1,-1);
    }
    else {
      uVar7 = pCVar3->field_09A0 - *(int *)(&DAT_008087fc + uVar4 * 0x51);
      if (uVar7 < *(uint *)(&DAT_008087f8 + uVar4 * 0x51)) {
        uVar7 = *(uint *)(&DAT_008087f8 + uVar4 * 0x51) - uVar7;
        uVar4 = uVar7 / 0xe10;
        cVar9 = (char)uVar4;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        _local_c = CONCAT31(uStack_b,cVar9);
        if (cVar9 == '\0') {
          puVar8 = &DAT_007c2198;
          pcVar11 = "%s;";
        }
        else {
          puVar8 = (undefined *)(uVar4 & 0xff);
          pcVar11 = "%2d:";
        }
        wsprintfA(&pCVar3->field_01E1,pcVar11,puVar8);
        uVar1 = (ulonglong)uVar7 % 0xe10;
        wsprintfA(&pCVar3->field_01E1,"%s%02d:%02d",&pCVar3->field_01E1,(int)(uVar1 / 0x3c)
                  ,(int)(uVar1 % 0x3c));
      }
      else {
        uVar4 = 0xffffffff;
        pcVar11 = &DAT_007c21a4;
        do {
          pcVar10 = pcVar11;
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          pcVar10 = pcVar11 + 1;
          cVar9 = *pcVar11;
          pcVar11 = pcVar10;
        } while (cVar9 != '\0');
        uVar4 = ~uVar4;
        pcVar11 = pcVar10 + -uVar4;
        pcVar10 = &pCVar3->field_01E1;
        memmove(pcVar10, pcVar11, uVar4); /* compiler REP MOVS byte copy */
      }
      puVar5 = (ushort *)
               ccFntTy::WrTxt(pCVar3->field_01BC,(uint *)&pCVar3->field_01E1,0,0,
                              (DAT_0080874e == '\x03') + 2,-1,-1);
      if (DAT_0080c4d3 != 2) {
        ccFntTy::WrTxt(pCVar3->field_01CC,(uint *)&pCVar3->field_01E1,0xd,10,0,-1,-1);
        puVar5 = (ushort *)
                 Library::DKW::DDX::FUN_006b3640
                           ((int *)g_ddxContext_008075A8,pCVar3->field_0174,0xffffffff,
                            pCVar3->field_00EC,pCVar3->field_00F0);
      }
    }
  }
  if ((pCVar3->field_023F != CASE_2) && (puVar5 = pCVar3->field_0148[4], -1 < (int)puVar5)) {
    puVar5 = (ushort *)
             Library::DKW::DDX::FUN_006b3640
                       ((int *)g_ddxContext_008075A8,(uint)puVar5,0xffffffff,pCVar3->field_004C,
                        pCVar3->field_00A4);
  }
  g_currentExceptionFrame = local_50.previous;
  return (uint)puVar5;
}

