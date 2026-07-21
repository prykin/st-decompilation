#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_GnBom.cpp
   STGenBombC::LoadImagSpr */

undefined4 __thiscall STGenBombC::LoadImagSpr(STGenBombC *this,int param_1,int param_2)

{
  code *pcVar1;
  short sVar2;
  VisibleClassTy *pVVar3;
  STGenBombC *pSVar4;
  int iVar5;
  AnonShape_004AB810_8E5693D5 *pAVar6;
  STT3DSprC *this_00;
  uint uVar7;
  int iVar8;
  bool bVar9;
  char *text;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  InternalExceptionFrame local_5c;
  int local_18;
  int local_14;
  STGenBombC *local_10;
  int local_c;
  undefined4 local_8;

  local_8 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pSVar4 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\nick\\to_GnBom.cpp",0x54b,0,iVar5,"%s",
                               "STGenBombC::LoadImagSpr()");
    if (iVar8 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\nick\\to_GnBom.cpp",0x54d);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_10->field_0252 == (STT3DSprC *)0x0) {
    pAVar6 = (AnonShape_004AB810_8E5693D5 *)Library::MSVCRT::FUN_0072e530(0x40);
    if (pAVar6 == (AnonShape_004AB810_8E5693D5 *)0x0) {
      this_00 = (STT3DSprC *)0x0;
    }
    else {
      this_00 = (STT3DSprC *)thunk_FUN_004ab810(pAVar6);
    }
    pSVar4->field_0252 = this_00;
    if (this_00 == (STT3DSprC *)0x0) {
      return 0xffffffff;
    }
    iVar5 = STT3DSprC::Init(this_00,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar5 != 0) {
      RaiseInternalException
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\nick\\to_GnBom.cpp",0x509);
      return 0xffff;
    }
  }
  if (param_1 == 0) {
    if (param_2 != 0) goto LAB_0061364b;
    iVar5 = STT3DSprC::LoadSequence(pSVar4->field_0252,0xd,DAT_00806774,"exptem",0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    iVar5 = STT3DSprC::LoadSequence(pSVar4->field_0252,0xf,DAT_00806764,"bulb_n5",0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    iVar5 = STT3DSprC::LoadSequence(pSVar4->field_0252,0xe,DAT_00806774,"expmask2",0x1d);
    if (iVar5 != 0) {
      return 0xffff;
    }
    STT3DSprC::StartShow(pSVar4->field_0252,0xe,PTR_00802a38->field_00E4);
    uVar12 = 0x53;
    uVar10 = 0x5a;
    iVar5 = 1;
    pSVar4->field_0251 = 1;
    uVar7 = thunk_FUN_004ad650((int)pSVar4->field_0252);
    FUN_006ea4e0(PTR_00807598,uVar7,iVar5,uVar10,uVar12);
    thunk_FUN_004ac700(pSVar4->field_0252,'\x0f');
    STT3DSprC::StartShow(pSVar4->field_0252,0xd,PTR_00802a38->field_00E4);
    iVar5 = (int)*(short *)(DAT_00806724 + 0x2c);
    uVar11 = 0;
    uVar7 = thunk_FUN_004ad650((int)pSVar4->field_0252);
    FUN_006e9350(PTR_00807598,uVar7,uVar11,iVar5);
    pSVar4->field_0250 = 1;
    thunk_FUN_004acf20(pSVar4->field_0252,DAT_008032b8,0x10);
    pSVar4->field_0237 = 0;
    STT3DSprC::SetCurFase(pSVar4->field_0252,'\r',0);
    STT3DSprC::ShowCurFase(pSVar4->field_0252,'\r');
    thunk_FUN_004acfe0(pSVar4->field_0252,'\x0e');
    thunk_FUN_004ad3c0(pSVar4->field_0252,(float)pSVar4->field_022B * _DAT_007904f8 * _DAT_007904f0,
                       (float)pSVar4->field_022F * _DAT_007904f8 * _DAT_007904f0,
                       (float)pSVar4->field_0233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  }
  else {
    iVar5 = pSVar4->field_01F7;
    if (iVar5 == 0) {
      iVar5 = STT3DSprC::LoadSequence(pSVar4->field_0252,0xd,DAT_00806774,"den_bmb",0x1d);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
    else {
      if (iVar5 == 1) {
        text = "ionbomb";
      }
      else {
        if (iVar5 != 2) goto LAB_00613424;
        text = "den_bmb";
      }
      iVar5 = STT3DSprC::LoadSequence(pSVar4->field_0252,0xd,DAT_00806774,text,0x1d);
      if (iVar5 != 0) {
        return 0xffff;
      }
    }
LAB_00613424:
    STT3DSprC::SetCurFase(pSVar4->field_0252,'\r',pSVar4->field_0237);
    thunk_FUN_004ad3c0(pSVar4->field_0252,(float)pSVar4->field_022B * _DAT_007904f8 * _DAT_007904f0,
                       (float)pSVar4->field_022F * _DAT_007904f8 * _DAT_007904f0,
                       (float)pSVar4->field_0233 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    STT3DSprC::StartShow(pSVar4->field_0252,0xd,PTR_00802a38->field_00E4);
    pSVar4->field_0250 = 1;
  }
  local_8 = 1;
LAB_0061364b:
  pVVar3 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == (VisibleClassTy *)0x0) {
    g_currentExceptionFrame = local_5c.previous;
    return local_8;
  }
  iVar5 = pSVar4->field_0233;
  sVar2 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    local_c = (short)(((short)(iVar5 / 200) + sVar2) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)
                     ) + -1;
  }
  else {
    local_c = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                          (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
  }
  iVar5 = pSVar4->field_022F;
  sVar2 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                        (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
  }
  iVar8 = pSVar4->field_022B;
  sVar2 = (short)(iVar8 >> 0x1f);
  if (iVar8 < 0) {
    iVar8 = (short)(((short)(iVar8 / 0xc9) + sVar2) - (short)((longlong)iVar8 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar8 = (int)(short)(((short)(iVar8 / 0xc9) + sVar2) -
                        (short)((longlong)iVar8 * 0x28c1979 >> 0x3f));
  }
  if ((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
      (thunk_FUN_00558c00(g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar8,iVar5,
                          &local_14,&local_18), local_c < 0)) || (4 < local_c)) {
    bVar9 = true;
  }
  else {
    if (((local_14 < 0) || (pVVar3->field_0030 <= local_14)) ||
       (((&DAT_0079aed0)[local_c] + local_18 < 0 ||
        (pVVar3->field_0034 <= (&DAT_0079aed0)[local_c] + local_18)))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((bVar9) && (pVVar3->field_004C != 0)) {
      bVar9 = *(char *)(((&DAT_0079aed0)[local_c] + local_18) * pVVar3->field_0030 +
                        pVVar3->field_004C + local_14) != '\0';
    }
    else {
      bVar9 = true;
    }
  }
  if (bVar9) {
    if (pSVar4->field_0250 == '\0') {
      thunk_FUN_004ad460(pSVar4->field_0252,0);
      pSVar4->field_0250 = 1;
      g_currentExceptionFrame = local_5c.previous;
      return local_8;
    }
  }
  else if (pSVar4->field_0250 != '\0') {
    thunk_FUN_004ad430((int)pSVar4->field_0252);
    pSVar4->field_0250 = 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_8;
}

