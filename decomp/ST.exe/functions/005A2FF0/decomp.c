#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetChannelList */

void __thiscall FSGSTy::SetChannelList(FSGSTy *this,int param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar4;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int local_EAX_63;
  DArrayTy *pDVar6;
  int iVar3;
  undefined4 uVar7;
  int iVar6;
  dword dVar8;
  char *_Str2;
  char *_Str1;
  uint uVar9;
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  int local_8;

  if ((this->array_00BC[0xc].field_01DF == '\x06') && (this->array_00BC[0xc].field_01E0 != '\0')) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    local_EAX_63 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    this_00 = g_cursorClass_00802A30;
    if (local_EAX_63 == 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar2 = g_cursorClass_00802A30->field_00C9;
        iVar4 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_00->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_00,CASE_0,iVar4,iVar2);
        CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_00D2 = 0;
        this_00->field_04DF = -1;
      }
      this_01 = local_c;
      local_c->field_1EAA->count = 0;
      for (; param_1 != 0; param_1 = param_1 + -1) {
        Library::DKW::TBL::DArrayAppend(this_01->field_1EAA,param_2);
        param_2 = param_2 + 0x1a;
      }
      do {
        pDVar6 = this_01->field_1EAA;
        local_8 = 0;
        dVar8 = pDVar6->count;
        uVar9 = 0;
        if (dVar8 != 1) {
          do {
            if (uVar9 < dVar8) {
              _Str1 = DArrayAt<char>(pDVar6, uVar9);
            }
            else {
              _Str1 = nullptr;
            }
            uVar1 = uVar9 + 1;
            if (uVar1 < dVar8) {
              _Str2 = DArrayAt<char>(pDVar6, uVar1);
            }
            else {
              _Str2 = nullptr;
            }
            iVar3 = Library::MSVCRT::__strcmpi(_Str1,_Str2);
            if (0 < iVar3) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)this_01->field_1EAA,uVar9,uVar1);
              local_8 = 1;
            }
            pDVar6 = this_01->field_1EAA;
            dVar8 = pDVar6->count;
            uVar9 = uVar1;
          } while (uVar1 < dVar8 - 1);
        }
      } while (local_8 != 0);
      FUN_006b5f80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      PutDDXClip(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',this_01->field_1E9A);
      this_01->field_002D = 0x28;
      *(dword *)&this_01->field_0x31 = this_01->field_1EAA->count;
      this_01->field_0035 = 1;
      FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
      this_01->field_002D = 0x20;
      if ((this_01->field_1EAA->count == 0) || (this_01->array_00BC[0xc].field_01EB == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      *(undefined4 *)&this_01->field_0x31 = uVar7;
      FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xa9d,0,local_EAX_63,
                               "%s","FSGSTy::SetChannelList");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_63,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa9d);
  }
  return;
}

