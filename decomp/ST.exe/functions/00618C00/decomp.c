#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\nick\to_jump_mine.cpp
   STJumpMineC::GetMessage */

undefined4 __thiscall
STJumpMineC::GetMessage(STJumpMineC *this,AnonShape_00618C00_CCBA84F5 *param_1)

{
  void *pvVar1;
  code *pcVar2;
  STJellyGunC *this_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  AnonNested_00618C00_0014_AEDCAA43 *pAVar7;
  undefined4 *puVar8;
  InternalExceptionFrame local_58;
  void *local_14;
  byte *local_10;
  AnonShape_0060EA30_DCEB68AD *local_c;
  STJellyGunC *local_8;

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_8 = (STJellyGunC *)this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage(s_E____titans_nick_to_jump_mine_cp_007d0100,0xad,0,iVar3,
                               &DAT_007a4ccc,s_STJumpMineC__GetMessage_007d0128);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_nick_to_jump_mine_cp_007d0100,0xaf);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar4 = param_1->field_0010;
  if (uVar4 < 0x110) {
    if (uVar4 == 0x10f) {
      local_10 = (byte *)thunk_FUN_00619350(local_8,&local_c);
      STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_10,local_c);
      FreeAndNull(&local_10);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
    if (uVar4 == 0) {
      iVar3 = thunk_FUN_00619c70((STJumpMineC *)local_8);
      if (iVar3 != 0) {
        if (this_00->field_0x150 == '\0') {
          uVar4 = thunk_FUN_006191a0(this_00,(int)*(short *)&this_00->field_0xc9,
                                     (int)*(short *)&this_00->field_0xcb);
          this_00->field_0x150 = (char)uVar4;
          if ((char)uVar4 != '\0') {
            LoadImagJMine((STJumpMineC *)this_00,1);
          }
          if (this_00->field_0x150 == '\0') {
            g_currentExceptionFrame = local_58.previous;
            return 0;
          }
        }
        thunk_FUN_00619a20((STJumpMineC *)this_00);
        g_currentExceptionFrame = local_58.previous;
        return 0;
      }
    }
    else if (uVar4 == 2) {
      pAVar7 = param_1->field_0014;
      if (pAVar7->field_000C == 2) {
        thunk_FUN_006193a0(local_8,&pAVar7->field_0000);
        puVar8 = (undefined4 *)&this_00->field_0x20;
        for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        *(undefined1 *)puVar8 = 0;
        *(undefined4 *)&this_00->field_0x1c = *(undefined4 *)&this_00->field_0x14c;
        if ((this_00->field_0x150 != '\0') && (*(int *)&this_00->field_0x93 != 5)) {
          LoadImagJMine((STJumpMineC *)this_00,1);
        }
        if ((*(int *)&this_00->field_0x93 == 5) || (*(int *)&this_00->field_0x93 == 0)) {
          thunk_FUN_006192e0(this_00);
          *(undefined4 *)&this_00->field_0x93 = 6;
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
      else {
        puVar8 = (undefined4 *)&local_8->field_004D;
        for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = pAVar7->field_0000;
          pAVar7 = (AnonNested_00618C00_0014_AEDCAA43 *)&pAVar7->field_0x4;
          puVar8 = puVar8 + 1;
        }
        *(undefined2 *)puVar8 = *(undefined2 *)&pAVar7->field_0000;
        *(undefined4 *)&local_8->field_0x1c = DAT_00808754;
        iVar3 = thunk_FUN_006193e0((AnonShape_006193E0_B2745ECE *)local_8);
        if (iVar3 == 0) {
LAB_00618ce0:
          thunk_FUN_006192e0(this_00);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
        iVar3 = thunk_FUN_0061bdb0(this_00,CASE_0,*(int *)&this_00->field_0xe7,
                                   *(int *)&this_00->field_0xeb,*(uint *)&this_00->field_0xef);
        if (iVar3 == 0) {
          iVar3 = thunk_FUN_0061bdb0(this_00,CASE_1,*(int *)&this_00->field_0xe7,
                                     *(int *)&this_00->field_0xeb,*(uint *)&this_00->field_0xef);
          if (iVar3 == 0) goto LAB_00618ce0;
          *(undefined4 *)&this_00->field_0x93 = 1;
        }
        else {
          *(undefined4 *)&this_00->field_0x93 = 4;
        }
        uVar4 = thunk_FUN_006191a0(this_00,(int)*(short *)&this_00->field_0xc9,
                                   (int)*(short *)&this_00->field_0xcb);
        pvVar1 = *(void **)((int)&this_00->field_007A + 3);
        this_00->field_0x150 = (char)uVar4;
        if (pvVar1 != (void *)0x0) {
          thunk_FUN_00617a20(pvVar1,*(int *)&this_00->field_0x8b,this_00->field_0018,this_00);
        }
        if (this_00->field_0x150 != '\0') {
          LoadImagJMine((STJumpMineC *)this_00,1);
          g_currentExceptionFrame = local_58.previous;
          return 0;
        }
      }
    }
    else if (uVar4 == 3) {
      pvVar1 = *(void **)((int)&local_8->field_007A + 3);
      if (pvVar1 != (void *)0x0) {
        if (local_8->field_0x14b != '\0') {
          thunk_FUN_00618900(pvVar1,*(int *)&local_8->field_0x145,0);
        }
        this_00->field_0x14b = 0;
        thunk_FUN_00617aa0(*(void **)((int)&this_00->field_007A + 3),this_00->field_0018);
      }
      thunk_FUN_00619320((int)this_00);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else if (uVar4 == 0x111) {
    if (((*(int *)((int)&local_8->field_007A + 3) != 0) &&
        (iVar3 = FUN_006e62d0(PTR_00802a38,*(int *)&local_8->field_0x79,(int *)&local_14),
        iVar3 != -4)) &&
       (*(void **)((int)&this_00->field_007A + 3) = local_14, local_14 != (void *)0x0)) {
      thunk_FUN_00617a20(local_14,*(int *)&this_00->field_0x8b,this_00->field_0018,this_00);
    }
  }
  else if (uVar4 == 0x112) {
    if ((-1 < (int)*(uint *)&local_8->field_0x97) && (*(int *)&local_8->field_0x93 != 5)) {
      SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
                ((AnonReceiver_004248D0 *)PTR_00807598,*(uint *)&local_8->field_0x97,0,0,
                 (uint)local_8);
      g_currentExceptionFrame = local_58.previous;
      return 0;
    }
  }
  else if (((uVar4 == 0x113) && (-1 < (int)*(uint *)&local_8->field_0x97)) &&
          (*(int *)&local_8->field_0x93 != 5)) {
    SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::FUN_006e9520
              ((AnonReceiver_004248D0 *)PTR_00807598,*(uint *)&local_8->field_0x97,0,0x401109,
               (uint)&local_8->field_004D);
    g_currentExceptionFrame = local_58.previous;
    return 0;
  }
  g_currentExceptionFrame = local_58.previous;
  return 0;
}

