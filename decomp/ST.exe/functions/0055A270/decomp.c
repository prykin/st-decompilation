#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\grig\visible.cpp
   VisibleClassTy::SetZoneMin1 */

void __thiscall
VisibleClassTy::SetZoneMin1
          (VisibleClassTy *this,int param_1,int param_2,undefined1 param_3,uint param_4,int param_5,
          undefined4 param_6,uint param_7)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  InternalExceptionFrame local_60;
  int local_18;
  VisibleClassTy *local_14;
  int local_10;
  int local_c;
  undefined *local_8;

  if ((((this->field_0114 != 0) && (-1 < param_5)) && (param_4 < 8)) &&
     ((PTR_00802a38 == (STPlaySystemC *)0x0 || ((byte)(&DAT_008087e9)[param_4 * 0x51] < 8)))) {
    local_14 = this;
    if (*(int *)(&this->field_0xb4 + param_4 * 4) == 0) {
      local_60.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_60;
      iVar4 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
      this = local_14;
      if (iVar4 != 0) {
        g_currentExceptionFrame = local_60.previous;
        iVar4 = ReportDebugMessage("E:\\__titans\\grig\\visible.cpp",0x35f,0,iVar4,
                                   "%s","VisibleClassTy::SetZoneMin1");
        if (iVar4 == 0) {
          return;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      puVar5 = Library::DKW::LIB::FUN_006aac10(local_14->field_0024 * local_14->field_0020);
      *(undefined4 **)(&this->field_0xb4 + param_4 * 4) = puVar5;
      g_currentExceptionFrame = local_60.previous;
    }
    if ((param_7 & 0x1000) != 0) {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00558C00::sub_0055BB00
                ((AnonReceiver_00558C00 *)this,5,(short)param_1,(short)param_2,param_3,param_4,
                 (char)param_5,param_6);
    }
    if ((param_7 & 0x20) != 0) {
      if (param_5 < 0) {
        param_5 = CASE_0;
      }
      local_c = param_5 * 2 + 1;
      local_18 = param_1 - param_5;
      iVar4 = param_2 - param_5;
      puVar6 = thunk_FUN_005532f0(param_5);
      if (0 < local_c) {
        local_10 = local_c;
        local_8 = puVar6;
        do {
          iVar7 = 0;
          iVar9 = local_18;
          do {
            if ((puVar6 == (undefined *)0x0) || (local_8[iVar7] != '\0')) {
              if ((iVar9 < 0) ||
                 ((((int)this->field_0020 <= iVar9 || (iVar4 < 0)) || (this->field_0024 <= iVar4))))
              {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (bVar3) {
                iVar8 = this->field_0020 * iVar4 + *(int *)(&this->field_0xb4 + param_4 * 4);
                cVar1 = *(char *)(iVar8 + iVar9);
                if (cVar1 != -1) {
                  *(char *)(iVar8 + iVar9) = cVar1 + '\x01';
                }
              }
            }
            iVar7 = iVar7 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar7 < local_c);
          local_8 = local_8 + local_c;
          iVar4 = iVar4 + 1;
          local_10 = local_10 + -1;
        } while (local_10 != 0);
      }
    }
  }
  return;
}

