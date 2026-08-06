#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::PrevBut */

void __thiscall HelpPanelTy::PrevBut(HelpPanelTy *this)

{
  uint uVar1;
  AnonPointee_HelpPanelTy_01B3 *pAVar2;
  void *pvVar3;
  HelpPanelTy *this_00;
  int iVar4;
  int *piVar5;
  int iVar5;
  int iVar6;
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
    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\helppan.cpp",0x2e9,0,iVar4,"%s"
                               ,"HelpPanelTy::PrevBut");
    if (iVar5 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\helppan.cpp",0x2e9);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar1 = local_8->field_01B7;
  pAVar2 = local_8->field_01B3;
  if (uVar1 == 0) {
    iVar6 = *(int *)&pAVar2->field_0xc;
    if (iVar6 == 0) {
      piVar5 = nullptr;
    }
    else {
      piVar5 = (int *)pAVar2->field_001C;
    }
    if ((char)piVar5[2] != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (STField<char>(piVar5,0x12) != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    uVar7 = 0xffffffff;
  }
  else {
    uVar7 = uVar1 - 1;
    if (uVar7 < *(uint *)&pAVar2->field_0xc) {
      piVar5 = (int *)(pAVar2->field_0008 * (uVar1 - 1) + pAVar2->field_001C);
    }
    else {
      piVar5 = nullptr;
    }
    if (piVar5 == nullptr) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    local_c = uVar7;
    if ((char)piVar5[2] != '\0') {
      local_8->field_01B7 = uVar7;
      local_8->field_01A1 = 0;
      local_8->field_01A7 = 0;
      local_8->field_01A3 = nullptr;
      uVar1 = STField<uint>(piVar5,0xd);
      pvVar3 = STField<void *>(piVar5,9);
      switch((char)piVar5[2]) {
      case '\x01':
        RCProc(local_8,(int)pvVar3,uVar1,'\0');
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x02':
        ObjProc(local_8,(int)pvVar3,uVar1,'\0');
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x03':
        SubProc(local_8,(int)pvVar3,'\0');
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x04':
        ArmProc(local_8,(int)pvVar3,uVar1,'\0');
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x05':
        TechProc(local_8,(uint)pvVar3,(byte)uVar1,'\0');
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x06':
        TTreeProc(local_8,(uint)pvVar3,'\0');
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\a':
        MObjProc(local_8);
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\b':
        TipProc(local_8,pvVar3,uVar1,'\0');
        break;
      case '\n':
        IndexBut(local_8);
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\v':
        SpecProc(local_8,(int)pvVar3,uVar1,'\0');
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\f':
        NatProc(local_8,(int)pvVar3,'\0');
        PutToSHlp(this_00);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      PutToSHlp(this_00);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    iVar6 = *(uint *)&pAVar2->field_0xc - uVar1;
    if (STField<char>(piVar5,0x12) != '\0') {
      local_8->field_01B7 = uVar7;
      goto LAB_00513e3e;
    }
  }
  ChangeTree(local_8,piVar5,uVar7);
  this_00->field_01B7 = *(int *)&this_00->field_01B3->field_0xc - iVar6;
LAB_00513e3e:
  PrevBut(this_00);
  g_currentExceptionFrame = local_50.previous;
  return;
}

