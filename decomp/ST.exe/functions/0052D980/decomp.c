#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::ChangeState */

void __thiscall PopUpTy::ChangeState(PopUpTy *this)

{
  uint uVar1;
  code *pcVar2;
  PopUpTy *pPVar3;
  int iVar4;
  char *resourceString;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  int local_10;
  uint local_c;
  byte local_5;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pPVar3 = local_18;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\mpopup.cpp",0x95,0,iVar4,"%s",
                               "PopUpTy::ChangeState");
    if (iVar6 == 0) {
      RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\mpopup.cpp",0x95);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_10 = -0x18 - (int)local_18;
  local_5 = 0;
  local_14 = 0;
  local_c = 0x1e;
  puVar8 = &local_18->field_0018;
  do {
    iVar4 = local_14;
    if ((DAT_00807342 == 0) || ((byte)pPVar3->field_009C <= local_5)) {
LAB_0052da81:
      puVar8[0xf] = 0;
      FUN_006b2800((int)DAT_008075a8,*puVar8,0,0x13);
      FUN_006b3af0(DAT_008075a8,*puVar8);
    }
    else {
      iVar6 = pPVar3->field_0098;
      if (local_14 < *(int *)(iVar6 + 8)) {
        iVar7 = *(int *)(*(int *)(iVar6 + 0x14) + local_10 + (int)puVar8);
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == 0) goto LAB_0052da81;
      if (local_14 < *(int *)(iVar6 + 8)) {
        resourceString = *(char **)(*(int *)(iVar6 + 0x14) + local_10 + (int)puVar8);
      }
      else {
        resourceString = (char *)0x0;
      }
      uVar5 = FUN_00711110(pPVar3->field_0094,resourceString);
      uVar1 = pPVar3->field_0090->field_0004;
      if ((int)uVar1 <= (int)uVar5) {
        uVar5 = uVar1;
      }
      puVar8[0xf] = uVar5;
      FUN_006b2800((int)DAT_008075a8,*puVar8,uVar5,0x13);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,*puVar8,0xffffffff,0xd,local_c);
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar8);
    }
    local_5 = local_5 + 1;
    local_14 = iVar4 + 1;
    puVar8 = puVar8 + 1;
    local_c = local_c + 0x13;
    if (0xe < local_5) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

