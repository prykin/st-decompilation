#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintName */

void __thiscall CPanelTy::PaintName(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  char cVar3;
  int iVar4;
  Global_sub_00523410_param_1Enum GVar5;
  UINT resourceId;
  uint *puVar6;
  int iVar7;
  HINSTANCE module;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar4 == 0) {
    if (param_1 == 0) {
      iVar4 = local_8->field_019C;
    }
    else {
      iVar4 = local_8->field_0184;
    }
    ccFntTy::SetSurf(local_8->field_01B8,iVar4,0,1,0,0x4e,0x24);
    if (param_1 == 0) {
      cVar3 = pCVar2->field_0C5D;
    }
    else {
      cVar3 = pCVar2->field_0B6F;
    }
    if (cVar3 == '\0') {
      if (param_1 == 0) {
        cVar3 = pCVar2->field_0C58;
        GVar5 = pCVar2->field_0C54;
      }
      else {
        cVar3 = pCVar2->field_0B6A;
        GVar5 = pCVar2->field_0B66;
      }
      module = HINSTANCE_00807618;
      resourceId = thunk_FUN_00523410(GVar5,cVar3,0);
      puVar6 = (uint *)LoadResourceString(resourceId,module);
    }
    else if (param_1 == 0) {
      puVar6 = (uint *)&pCVar2->field_0C5D;
    }
    else {
      puVar6 = (uint *)&pCVar2->field_0B6F;
    }
    ccFntTy::WrTxt(pCVar2->field_01B8,puVar6,-2,-1,0,-1,-1);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0x1e,0,iVar4,"%s",
                             "CPanelTy::PaintName");
  if (iVar7 == 0) {
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0x1e);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

