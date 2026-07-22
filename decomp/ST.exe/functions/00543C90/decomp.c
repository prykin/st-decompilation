#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\to_cursor.cpp
   CursorClassTy::DrawSprite */

void __thiscall CursorClassTy::DrawSprite(CursorClassTy *this,int param_1,int param_2)

{
  SpriteClassTy *pSVar1;
  code *pcVar2;
  DWORD DVar3;
  CursorClassTy *pCVar4;
  int iVar5;
  int iVar6;
  InternalExceptionFrame local_54;
  DWORD local_10;
  CursorClassTy *local_c;
  int local_8;

  local_c = this;
  local_10 = STAppC::sub_006E51B0((STAppC *)this->field_0010);
  local_8 = 0;
  if (this->field_001C == (cLoadingTy *)0xffffffff) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_006b33f0((AnonShape_006B1B10_121F236C *)this->field_0060,(uint)this->field_001C);
  }
  if (iVar5 != 0) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    pCVar4 = local_c;
    DVar3 = local_10;
    if (iVar5 == 0) {
      local_c->field_0020 = 0xfffffffe;
      if (param_1 != -1) {
        local_c->field_0034 = param_1;
        local_8 = 1;
      }
      if (param_2 != -1) {
        local_c->field_0038 = param_2;
        local_8 = 1;
      }
      if ((uint)(local_c->field_0058 + local_c->field_005C) <= local_10) {
        local_c->field_0020 = 0xffffffff;
        local_c->field_005C = local_10;
        local_8 = 1;
      }
      if (local_8 != 0) {
        if (local_c->field_00A9 == 0) {
          FUN_006b8bc0((int *)local_c->field_00AD,local_c->field_0034,local_c->field_0038,
                       local_c->field_0020);
        }
        else {
          Library::DKW::DDX::FUN_006b3640
                    ((int *)PTR_008075a8,(uint)local_c->field_001C,local_c->field_0020,
                     local_c->field_00B9 + local_c->field_0034,
                     local_c->field_00BD + local_c->field_0038);
        }
      }
      pSVar1 = pCVar4->field_04EB;
      if ((pSVar1 != (SpriteClassTy *)0x0) &&
         (PTR_00807598 != (AnonShape_GLOBAL_00807598_0C6808FB *)0x0)) {
        if (pSVar1->field_000C + -1 <= pSVar1->field_0008) {
          SpriteClassTy::CloseSprite(pSVar1);
          Library::MSVCRT::FUN_0072e2b0((HoloTy *)pCVar4->field_04EB);
          pCVar4->field_04EB = (SpriteClassTy *)0x0;
          g_currentExceptionFrame = local_54.previous;
          return;
        }
        if ((uint)(pSVar1->field_0040 + pSVar1->field_0044) <= DVar3) {
          pSVar1->field_0044 = DVar3;
          pSVar1->field_0008 = pSVar1->field_0008 + 1;
          FUN_006e2970(PTR_00807598,pCVar4->field_04EF,pCVar4->field_04F3,pCVar4->field_04F7,
                       &pCVar4->field_04EB->field_001C,&pCVar4->field_04EB->field_0020);
          pCVar4->field_04EB->field_001C =
               pCVar4->field_04EB->field_001C - *(int *)((int)pCVar4->field_04E7 + 9) / 2;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          pCVar4->field_04EB->field_0020 =
               pCVar4->field_04EB->field_0020 - *(int *)((int)pCVar4->field_04E7 + 0xd) / 2;
          pSVar1 = pCVar4->field_04EB;
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)PTR_008075a8,pSVar1->field_0004,pSVar1->field_0008,pSVar1->field_001C,
                     pSVar1->field_0020);
        }
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Andrey\\to_cursor.cpp",0xcc,0,iVar5,
                               "%s","CursorClassTy::DrawSprite");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\Andrey\\to_cursor.cpp",0xcd);
  }
  return;
}

