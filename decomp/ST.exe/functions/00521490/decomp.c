#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\infocen.cpp
   InfocPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00521490; family_names=InfocPanelTy::GetMessage; ret4=6;
   direct_offsets={10:2,14:2,18:2,1c:0} */

int __thiscall InfocPanelTy::GetMessage(InfocPanelTy *this,STMessage *message)

{
  STMessageId SVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar6;
  int iVar7;
  InfocPanelTy *this_00;
  byte bVar8;
  int iVar8;
  uint uVar9;
  BITMAPINFO *pBVar10;
  int iVar11;
  uint uVar11;
  int iVar12;
  InternalExceptionFrame local_58;
  uint local_14;
  InfocPanelTy *local_10;
  undefined4 local_c;
  uint local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar8 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_10;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar11 = ReportDebugMessage("E:\\__titans\\Andrey\\infocen.cpp",0x11e,0,iVar8,
                                "%s","InfocPanelTy::GetMessage");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar8,0,"E:\\__titans\\Andrey\\infocen.cpp",0x11e);
    return 0xffff;
  }
  /* ST_CALLSITE[005214CE]: CALL 0x00401401; direct=00401401 SpecPanelTy::GetMessage */
  SpecPanelTy::GetMessage((SpecPanelTy *)local_10,message);
  SVar1 = message->id;
  if (SVar1 < MESS_SHARED_0061) {
    if (SVar1 == MESS_SHARED_0060) {
      iVar12 = 0;
      local_14 = (uint)(message->arg1).words.high;
      uVar11 = (uint)(message->arg1).words.low;
      local_c = 0;
      if (this_00->field_0172 == 1) {
        local_8 = local_8 & 0xffffff00;
        do {
          uVar9 = local_8 & 0xff;
          if (((((int)uVar11 < (int)(&this_00->field_02D4)[uVar9 * 5]) ||
               ((int)((&this_00->field_02DC)[uVar9 * 5] + (&this_00->field_02D4)[uVar9 * 5]) <=
                (int)uVar11)) || ((int)local_14 < (int)(&this_00->field_02D8)[uVar9 * 5])) ||
             ((int)((&this_00->field_02E0)[uVar9 * 5] + (&this_00->field_02D8)[uVar9 * 5]) <=
              (int)local_14)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          iVar12 = 0;
          if (bVar6) {
            iVar12 = (&this_00->field_02E4)[(local_8 & 0xff) * 5];
            break;
          }
          bVar8 = (char)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar8));
        } while (bVar8 < 0xc);
      }
      iVar2 = this_00->field_0178;
      if (iVar2 != iVar12) {
        if (iVar2 != 0) {
          this_00->field_0028 = 0x4202;
          this_00->field_002C = 0;
          this_00->field_002E = 2;
          this_00->field_0030 = iVar2;
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_CALLSITE[005215EA]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
            g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x18);
          }
        }
        this_00->field_0178 = iVar12;
        if (iVar12 != 0) {
          this_00->field_0028 = 0x4201;
          this_00->field_002C = 0;
          this_00->field_002E = 2;
          this_00->field_0030 = iVar12;
          /* ST_CALLSITE[0052161A]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/CursorClassTy;pointer:/SubmarineTitans/Recovered/STMessage */
          g_cursorClass_00802A30->GetMessage((STMessage *)&this_00->field_0x18);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
    }
    else {
      if (SVar1 == MESS_ID_CREATE) {
        /* ST_CALLSITE[0052150A]: CALL 0x004040b1; direct=004040B1 InfocPanelTy::InitInfocPanel */
        InitInfocPanel(this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
      if (SVar1 == MESS_SHARED_0003) {
        /* ST_CALLSITE[005214EF]: CALL 0x004015c3; direct=004015C3 InfocPanelTy::DoneInfocPanel */
        DoneInfocPanel(this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
  }
  else if (SVar1 == MESS_MREPORTTY_B208) {
    this_00->field_03D4 = *(char *)(message->arg0).ptr + -1;
    /* ST_CALLSITE[0052170C]: CALL 0x00404c69; direct=00404C69 InfocPanelTy::PaintInfoc */
    PaintInfoc(this_00);
  }
  else if (SVar1 == MESS_PLAYPANELTY_B209) {
    piVar3 = (message->arg0).ptr;
    iVar12 = piVar3[3];
    iVar2 = this_00->field_003C;
    bVar8 = (&this_00->field_01AB)[*piVar3];
    uVar11 = (DAT_0080874e != '\x03') - 1 & 0x11;
    local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar8));
    iVar4 = piVar3[4];
    iVar7 = DAT_00806734;
    if (this_00->field_005C != 0) {
      iVar7 = this_00->field_0044;
    }
    if (piVar3[1] == 0) {
      if (bVar8 != 0xff) {
        uVar11 = bVar8 + 1;
      }
    }
    else if ((piVar3[1] == 1) && (bVar8 != 0xff)) {
      uVar11 = bVar8 + 9;
    }
    pBVar10 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_03C4,uVar11);
    /* ST_CALLSITE[005216C7]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,iVar12 - iVar2,iVar4 - iVar7,'\x01',
           (byte *)pBVar10);
    Library::DKW::DDX::FUN_006b3640
              ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
               this_00->field_0044);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

