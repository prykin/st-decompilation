#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jump_mine.cpp
   STJumpMineC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402D6A|00618C00; family_names=STJumpMineC::GetMessage; ret4=10;
   direct_offsets={10:1,14:1,18:4,1c:2} */

int __thiscall STJumpMineC::GetMessage(STJumpMineC *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  STJumpMineC *this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  InternalExceptionFrame local_58;
  void *local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  STJumpMineC *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\nick\\to_jump_mine.cpp",0xad,0,iVar3,
                               "%s","STJumpMineC::GetMessage");
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\nick\\to_jump_mine.cpp",0xaf);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (SVar1 < MESS_TORPHIT) {
    if (SVar1 == MESS_SHARED_010F) {
      local_10 = (byte *)thunk_FUN_00619350(local_8,&local_c);
      STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_10,local_c);
      FreeAndNull(&local_10);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (SVar1 == MESS_ID_NONE) {
      iVar3 = thunk_FUN_00619c70(local_8);
      if (iVar3 != 0) {
        if (this_00->field_0150 == '\0') {
          uVar4 = thunk_FUN_006191a0(this_00,(int)this_00->field_00C9,(int)this_00->field_00CB);
          this_00->field_0150 = (char)uVar4;
          if ((char)uVar4 != '\0') {
            LoadImagJMine(this_00,1);
          }
          if (this_00->field_0150 == '\0') {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
        }
        thunk_FUN_00619a20(this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
    else if (SVar1 == MESS_ID_CREATE) {
      puVar6 = (message->arg0).ptr;
      if (puVar6[3] == 2) {
        thunk_FUN_006193a0(local_8,puVar6);
        puVar6 = (undefined4 *)&this_00->field_0x20;
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
        *(undefined1 *)puVar6 = 0;
        this_00->field_001C = this_00->field_014C;
        if ((this_00->field_0150 != '\0') && (this_00->field_0093 != CASE_5)) {
          LoadImagJMine(this_00,1);
        }
        if ((this_00->field_0093 == CASE_5) || (this_00->field_0093 == CASE_0)) {
          thunk_FUN_006192e0(this_00);
          this_00->field_0093 = CASE_6;
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
      else {
        puVar7 = (undefined4 *)&local_8->field_0x4d;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
        local_8->field_001C = DAT_00808754;
        iVar3 = thunk_FUN_006193e0((AnonShape_006193E0_B2745ECE *)local_8);
        if (iVar3 == 0) {
LAB_00618ce0:
          thunk_FUN_006192e0(this_00);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
        iVar3 = thunk_FUN_0061bdb0(this_00,CASE_0,this_00->field_00E7,this_00->field_00EB,
                                   this_00->field_00EF);
        if (iVar3 == 0) {
          iVar3 = thunk_FUN_0061bdb0(this_00,CASE_1,this_00->field_00E7,this_00->field_00EB,
                                     this_00->field_00EF);
          if (iVar3 == 0) goto LAB_00618ce0;
          this_00->field_0093 = CASE_1;
        }
        else {
          this_00->field_0093 = CASE_4;
        }
        uVar4 = thunk_FUN_006191a0(this_00,(int)this_00->field_00C9,(int)this_00->field_00CB);
        this_00->field_0150 = (char)uVar4;
        if ((void *)this_00->field_007D != (void *)0x0) {
          thunk_FUN_00617a20((void *)this_00->field_007D,this_00->field_008B,this_00->field_0018,
                             this_00);
        }
        if (this_00->field_0150 != '\0') {
          LoadImagJMine(this_00,1);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
    }
    else if (SVar1 == MESS_SHARED_0003) {
      if ((void *)local_8->field_007D != (void *)0x0) {
        if (local_8->field_014B != '\0') {
          thunk_FUN_00618900((void *)local_8->field_007D,local_8->field_0145,0);
        }
        this_00->field_014B = 0;
        thunk_FUN_00617aa0((void *)this_00->field_007D,this_00->field_0018);
      }
      thunk_FUN_00619320((int)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else if (SVar1 == MESS_ID_ALLCREATE) {
    if (((local_8->field_007D != 0) &&
        (iVar3 = FUN_006e62d0(PTR_00802a38,local_8->field_0079,(int *)&local_14), iVar3 != -4)) &&
       (this_00->field_007D = local_14, local_14 != (void *)0x0)) {
      thunk_FUN_00617a20(local_14,this_00->field_008B,this_00->field_0018,this_00);
    }
  }
  else if (SVar1 == MESS_STOCTOPUSC_0112) {
    if ((-1 < (int)local_8->field_0097) && (local_8->field_0093 != CASE_5)) {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
                ((AnonReceiver_004248D0 *)PTR_00807598,local_8->field_0097,0,0,(uint)local_8);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else if (((SVar1 == MESS_STSPRGAMEOBJC_0113) && (-1 < (int)local_8->field_0097)) &&
          (local_8->field_0093 != CASE_5)) {
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
              ((AnonReceiver_004248D0 *)PTR_00807598,local_8->field_0097,0,0x401109,
               (uint)&local_8->field_0x4d);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

