#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::NextBut */

void __thiscall HelpPanelTy::NextBut(HelpPanelTy *this)

{
  AnonPointee_HelpPanelTy_01B3 *pAVar1;
  uint uVar2;
  void *pvVar3;
  code *pcVar4;
  HelpPanelTy *this_00;
  int errorCode;
  int *piVar5;
  int iVar6;
  uint uVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
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
      piVar5 = (int *)0x0;
    }
    if (piVar5 == (int *)0x0) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    local_8->field_01B7 = uVar7;
    if ((char)piVar5[2] != '\0') {
      local_8->field_01A1 = 0;
      local_8->field_01A7 = 0;
      local_8->field_01A3 = 0;
      uVar7 = *(uint *)((int)piVar5 + 0xd);
      pvVar3 = *(void **)((int)piVar5 + 9);
      switch((char)piVar5[2]) {
      case '\x01':
        RCProc(local_8,(int)pvVar3,uVar7,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x02':
        ObjProc(local_8,(int)pvVar3,uVar7,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x03':
        SubProc(local_8,(int)pvVar3,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x04':
        ArmProc(local_8,(int)pvVar3,uVar7,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x05':
        TechProc(local_8,(uint)pvVar3,(byte)uVar7,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\x06':
        TTreeProc(local_8,(uint)pvVar3,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\a':
        MObjProc(local_8);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\b':
        TipProc(local_8,pvVar3,uVar7,'\0');
        break;
      case '\n':
        IndexBut(local_8);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\v':
        SpecProc(local_8,(int)pvVar3,uVar7,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_4c.previous;
        return;
      case '\f':
        NatProc(local_8,(int)pvVar3,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_4c.previous;
        return;
      }
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      PutToSHlp(this_00,unaff_EDI);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (*(char *)((int)piVar5 + 0x12) != '\0') goto LAB_005141e1;
  }
  else {
    if (uVar7 < uVar2) {
      piVar5 = (int *)(pAVar1->field_0008 * uVar7 + pAVar1->field_001C);
    }
    else {
      piVar5 = (int *)0x0;
    }
    if ((char)piVar5[2] != '\0') {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    if (*(char *)((int)piVar5 + 0x12) != '\0') {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
  }
  ChangeTree(local_8,piVar5,uVar7);
LAB_005141e1:
  NextBut(this_00);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

