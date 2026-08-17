#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::NextBut */

void __thiscall HelpPanelTy::NextBut(HelpPanelTy *this)

{
  AnonPointee_HelpPanelTy_01B3 *pAVar1;
  uint uVar2;
  void *pvVar3;
  HelpPanelTy *this_00;
  int errorCode;
  int *piVar5;
  int iVar6;
  uint uVar7;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  this_00 = local_8;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x307,0,errorCode,
                               "%s","HelpPanelTy::NextBut");
    if (iVar6 == 0) {
      RaiseInternalException(errorCode,0,"E:\\__titans\\Andrey\\helppan.cpp",0x307);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  pAVar1 = local_8->field_01B3;
  uVar7 = local_8->field_01B7;
  uVar2 = *(uint *)&pAVar1->field_0xc;
  if (uVar7 < uVar2 - 1) {
    uVar7 = uVar7 + 1;
    if (uVar7 < uVar2) {
      piVar5 = (int *)(pAVar1->field_0008 * uVar7 + pAVar1->field_001C);
    }
    else {
      piVar5 = nullptr;
    }
    if (piVar5 == nullptr) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    local_8->field_01B7 = uVar7;
    if ((char)piVar5[2] != '\0') {
      local_8->field_01A1 = 0;
      local_8->field_01A7 = 0;
      local_8->field_01A3 = nullptr;
      uVar7 = STField<uint>(piVar5,0xd);
      pvVar3 = STField<void *>(piVar5,9);
      switch((char)piVar5[2]) {
      case '\x01':
        /* ST_CALLSITE[005140A0]: CALL 0x00404e85; direct=00404E85 HelpPanelTy::RCProc */
        RCProc(local_8,(int)pvVar3,uVar7,'\0');
        /* ST_CALLSITE[005140A7]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x02':
        /* ST_CALLSITE[0051411E]: CALL 0x00403747; direct=00403747 HelpPanelTy::ObjProc */
        ObjProc(local_8,(int)pvVar3,uVar7,'\0');
        /* ST_CALLSITE[00514125]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x03':
        /* ST_CALLSITE[005140FE]: CALL 0x00403878; direct=00403878 HelpPanelTy::SubProc */
        SubProc(local_8,(int)pvVar3,'\0');
        /* ST_CALLSITE[00514105]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x04':
        /* ST_CALLSITE[0051413E]: CALL 0x004057e0; direct=004057E0 HelpPanelTy::ArmProc */
        ArmProc(local_8,(int)pvVar3,uVar7,'\0');
        /* ST_CALLSITE[00514145]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x05':
        /* ST_CALLSITE[005140DF]: CALL 0x00402833; direct=00402833 HelpPanelTy::TechProc */
        TechProc(local_8,(uint)pvVar3,(byte)uVar7,'\0');
        /* ST_CALLSITE[005140E6]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x06':
        /* ST_CALLSITE[005140BF]: CALL 0x00405e61; direct=00405E61 HelpPanelTy::TTreeProc */
        TTreeProc(local_8,(uint)pvVar3,'\0');
        /* ST_CALLSITE[005140C6]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\a':
        /* ST_CALLSITE[00514080]: CALL 0x004011fe; direct=004011FE HelpPanelTy::MObjProc */
        MObjProc(local_8);
        /* ST_CALLSITE[00514087]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\b':
        /* ST_CALLSITE[0051419D]: CALL 0x004020b8; direct=004020B8 HelpPanelTy::TipProc */
        TipProc(local_8,pvVar3,uVar7,'\0');
        break;
      case '\n':
        /* ST_CALLSITE[00514064]: CALL 0x00405803; direct=00405803 HelpPanelTy::IndexBut */
        IndexBut(local_8);
        /* ST_CALLSITE[0051406B]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\v':
        /* ST_CALLSITE[0051415E]: CALL 0x00402cac; direct=00402CAC HelpPanelTy::SpecProc */
        SpecProc(local_8,(int)pvVar3,uVar7,'\0');
        /* ST_CALLSITE[00514165]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\f':
        /* ST_CALLSITE[0051417D]: CALL 0x00403bc0; direct=00403BC0 HelpPanelTy::NatProc */
        NatProc(local_8,(int)pvVar3,'\0');
        /* ST_CALLSITE[00514184]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      /* ST_CALLSITE[005141A4]: CALL 0x00405100; direct=00405100 HelpPanelTy::PutToSHlp */
      PutToSHlp(this_00);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (STField<char>(piVar5,0x12) != '\0') goto LAB_005141e1;
  }
  else {
    if (uVar7 < uVar2) {
      piVar5 = (int *)(pAVar1->field_0008 * uVar7 + pAVar1->field_001C);
    }
    else {
      piVar5 = nullptr;
    }
    if ((char)piVar5[2] != '\0') {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (STField<char>(piVar5,0x12) != '\0') {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  /* ST_CALLSITE[005141DC]: CALL 0x00405362; direct=00405362 HelpPanelTy::ChangeTree */
  ChangeTree(local_8,piVar5,uVar7);
LAB_005141e1:
  /* ST_CALLSITE[005141E3]: CALL 0x00401a1e; direct=00401A1E HelpPanelTy::NextBut */
  NextBut(this_00);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

