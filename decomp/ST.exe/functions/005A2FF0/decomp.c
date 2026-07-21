#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetChannelList */

void __thiscall FSGSTy::SetChannelList(FSGSTy *this,int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar4;
  DArrayTy *pDVar5;
  undefined4 uVar6;
  int iVar7;
  dword dVar8;
  char *_Str2;
  char *_Str1;
  uint uVar9;
  InternalExceptionFrame local_50;
  FSGSTy *local_c;
  int local_8;

  if ((this->field_1A5F == CASE_6) && (this->field_1A60 != '\0')) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
    this_00 = PTR_00802a30;
    if (iVar4 == 0) {
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        uVar6 = PTR_00802a30->field_00C9;
        uVar2 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 1;
        this_00->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_00,CASE_0,uVar2,uVar6);
        CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_0xd2 = 0;
        *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
      }
      this_01 = local_c;
      local_c->field_1EAA->count = 0;
      for (; param_1 != 0; param_1 = param_1 + -1) {
        Library::DKW::TBL::FUN_006ae1c0(&this_01->field_1EAA->flags,param_2);
        param_2 = param_2 + 0x1a;
      }
      do {
        pDVar5 = this_01->field_1EAA;
        local_8 = 0;
        dVar8 = pDVar5->count;
        uVar9 = 0;
        if (dVar8 != 1) {
          do {
            if (uVar9 < dVar8) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar9) (runtime stride) */
              _Str1 = (char *)(pDVar5->elementSize * uVar9 + (int)pDVar5->data);
            }
            else {
              _Str1 = (char *)0x0;
            }
            uVar1 = uVar9 + 1;
            if (uVar1 < dVar8) {
              /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar5, uVar1) (runtime stride) */
              _Str2 = (char *)(pDVar5->elementSize * uVar1 + (int)pDVar5->data);
            }
            else {
              _Str2 = (char *)0x0;
            }
            iVar4 = Library::MSVCRT::__strcmpi(_Str1,_Str2);
            if (0 < iVar4) {
              FUN_006b0cd0((AnonShape_00413AF0_B6B4EE9A *)this_01->field_1EAA,uVar9,uVar1);
              local_8 = 1;
            }
            pDVar5 = this_01->field_1EAA;
            dVar8 = pDVar5->count;
            uVar9 = uVar1;
          } while (uVar1 < dVar8 - 1);
        }
      } while (local_8 != 0);
      FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0xf3);
      PutDDXClip(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',(BITMAPINFO *)this_01->field_1E9A);
      this_01->field_002D = 0x28;
      *(dword *)&this_01->field_0x31 = this_01->field_1EAA->count;
      *(undefined2 *)&this_01->field_0x35 = 1;
      FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
      this_01->field_002D = 0x20;
      if ((this_01->field_1EAA->count == 0) || (this_01->field_1A6B == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = 1;
      }
      *(undefined4 *)&this_01->field_0x31 = uVar6;
      FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa9d,0,iVar4,&DAT_007a4ccc
                               ,s_FSGSTy__SetChannelList_007cc538);
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xa9d);
  }
  return;
}

