#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::PrevBut */

void __thiscall HelpPanelTy::PrevBut(HelpPanelTy *this)

{
  AnonPointee_HelpPanelTy_01B3 *pAVar1;
  void *pvVar2;
  code *pcVar3;
  HelpPanelTy *this_00;
  int iVar4;
  int *piVar5;
  int iVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  uint uVar7;
  InternalExceptionFrame local_50;
  uint local_c;
  HelpPanelTy *local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x2e9,0,iVar4,&DAT_007a4ccc
                               ,s_HelpPanelTy__PrevBut_007c3ab8);
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x2e9);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar4 = local_8->field_01B7;
  pAVar1 = local_8->field_01B3;
  if (iVar4 == 0) {
    iVar4 = *(int *)&pAVar1->field_0xc;
    if (iVar4 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)pAVar1->field_001C;
    }
    if ((char)piVar5[2] != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (*(char *)((int)piVar5 + 0x12) != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = iVar4 - 1;
    if (uVar7 < *(uint *)&pAVar1->field_0xc) {
      piVar5 = (int *)(pAVar1->field_0008 * (iVar4 + -1) + pAVar1->field_001C);
    }
    else {
      piVar5 = (int *)0x0;
    }
    if (piVar5 == (int *)0x0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    local_c = uVar7;
    if ((char)piVar5[2] != '\0') {
      local_8->field_01B7 = uVar7;
      local_8->field_01A1 = 0;
      local_8->field_01A7 = 0;
      local_8->field_01A3 = 0;
      uVar7 = *(uint *)((int)piVar5 + 0xd);
      pvVar2 = *(void **)((int)piVar5 + 9);
      switch((char)piVar5[2]) {
      case '\x01':
        RCProc(local_8,(int)pvVar2,uVar7,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x02':
        ObjProc(local_8,(int)pvVar2,uVar7,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x03':
        SubProc(local_8,(int)pvVar2,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x04':
        ArmProc(local_8,(int)pvVar2,uVar7,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x05':
        TechProc(local_8,(uint)pvVar2,(byte)uVar7,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x06':
        TTreeProc(local_8,(uint)pvVar2,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\a':
        MObjProc(local_8);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\b':
        TipProc(local_8,pvVar2,uVar7,'\0');
        break;
      case '\n':
        IndexBut(local_8);
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\v':
        SpecProc(local_8,(int)pvVar2,uVar7,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\f':
        NatProc(local_8,(int)pvVar2,'\0');
        /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
        PutToSHlp(this_00,unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      PutToSHlp(this_00,unaff_EDI);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    iVar4 = *(uint *)&pAVar1->field_0xc - iVar4;
    if (*(char *)((int)piVar5 + 0x12) != '\0') {
      local_8->field_01B7 = uVar7;
      goto LAB_00513e3e;
    }
  }
  ChangeTree(local_8,piVar5,uVar7);
  this_00->field_01B7 = *(int *)&this_00->field_01B3->field_0xc - iVar4;
LAB_00513e3e:
  PrevBut(this_00);
  g_currentExceptionFrame = local_50.previous;
  return;
}

