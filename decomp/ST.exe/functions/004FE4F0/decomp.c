#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintLife

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall CPanelTy::PaintLife(CPanelTy *this,int param_1)

{
  CPanelTy *this_00;
  RecoveredSourceFamily_dibcopy *pRVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  UINT UVar8;
  InternalExceptionFrame local_5c;
  CPanelTy *local_18;
  RecoveredSourceFamily_dibcopy *local_14;
  uint local_10;
  uint local_c;
  char local_5;

  if (param_1 == 0) {
    local_14 = (RecoveredSourceFamily_dibcopy *)this->field_019C;
    bVar3 = this->field_0C6C;
  }
  else {
    local_14 = (RecoveredSourceFamily_dibcopy *)this->field_0184;
    bVar3 = this->field_0B7E;
  }
  local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar3));
  if (param_1 == 0) {
    local_5 = this->field_0C53;
  }
  else {
    local_5 = this->field_0B65;
  }
  if (bVar3 < 0x65) {
    local_5c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_5c;
    local_18 = this;

    iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
    pRVar2 = local_14;
    this_00 = local_18;
    if (iVar4 == 0) {
      bVar3 = (byte)local_c;
      cVar6 = (char)(((local_c & 0xff) * 7) / 10);
      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(cVar6));
      if (((byte)local_c != 0) && (cVar6 == '\0')) {
        local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(1));
      }
      if ((byte)local_c < 0x46) {
        iVar4 = (-(uint)((byte)local_c < 0x14) & 6) + 6;
      }
      else {
        iVar4 = 0;
      }

      Library::DKW::WGR::FUN_006b55f0
                (local_14,0,5,0x1f,(RecoveredRecordView_006B84D0_87AF9D9B *)local_18->field_0286,0,0
                 ,iVar4,local_10 & 0xff,6);
      if ((param_1 == 0) && (local_5 == '\x02')) {
        UVar8 = 0x36ba;
        uVar7 = local_c;
      }
      else {
        UVar8 = 0x36b1;
        uVar7 = (uint)(byte)(100 - bVar3);
      }
      /* ST_CALLSITE[004FE606]: CALL 0x00404c7d; direct=00404C7D CPanelTy::PaintDamageXY */
      PaintDamageXY(this_00,(int)pRVar2,5,0x27,(byte)uVar7,UVar8);
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
    g_currentExceptionFrame = local_5c.previous;

    iVar5 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel1.cpp",0x2f,0,iVar4,"%s",
                               "CPanelTy::PaintLife");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Andrey\\cpanel1.cpp",0x2f);
  }
  return;
}

