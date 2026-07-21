#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GetMessage */

int __thiscall AiFltClassTy::GetMessage(AiFltClassTy *this,STMessage *message)

{
  undefined2 uVar1;
  STMessageId SVar2;
  undefined4 *puVar3;
  code *pcVar4;
  AiFltClassTy *this_00;
  int iVar5;
  uint uVar6;
  STGroupBoatC *this_01;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX_00;
  InternalExceptionFrame local_54;
  AiFltClassTy *local_10;
  byte *local_c;
  AnonShape_0060EA30_DCEB68AD *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0xeca,0,iVar5,
                               "AiFltClassTy::GetMessage error mess->id == %lX Name=%d",message->id,
                               local_10->field_0018);
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\ai\\ai_flt.cpp",0xecb);
    return 0xffff;
  }
  local_10->field_0280 = PTR_00802a38->field_00E4;
  SVar2 = message->id;
  if (SVar2 < MESS_STOCTOPUSC_0112) {
    if (SVar2 == MESS_ID_ALLCREATE) {
      thunk_FUN_0065d6a0((AnonShape_0065D6A0_A68E55B5 *)local_10);
    }
    else if (SVar2 < 4) {
      if (SVar2 == MESS_SHARED_0003) {
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        thunk_FUN_0065d6e0((AnonShape_0065D6E0_0F9074F6 *)local_10,extraout_EDX);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        thunk_FUN_0065d720((AnonShape_0065D720_52DE2AAB *)this_00,extraout_EDX_00);
        thunk_FUN_0065d480((int)this_00);
      }
      else if (SVar2 == MESS_ID_NONE) {
        if (local_10->field_0093 == 0) {
          local_10->field_0093 = 1;
          thunk_FUN_00664760(local_10);
        }
        else {
          thunk_FUN_00664960(local_10);
          thunk_FUN_00661580((AnonShape_00661580_92A3F5B0 *)this_00);
        }
      }
      else if (SVar2 == MESS_ID_CREATE) {
        puVar3 = (message->arg0).ptr;
        if (puVar3 == (undefined4 *)0x0) {
          RaiseInternalException
                    (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_flt.cpp",0xe70);
        }
        InitData(this_00,puVar3);
        if (puVar3[3] == 0) {
          this_00->field_001C = DAT_00808754;
        }
        else {
          this_00->field_001C = this_00->field_0086;
        }
        iVar5 = puVar3[3];
        if (iVar5 == 0) {
          uVar6 = thunk_FUN_00435850(*(char *)&this_00->field_0024,1,(int *)0x0);
          this_00->field_007D = (short)uVar6;
          thunk_FUN_0065d6a0((AnonShape_0065D6A0_A68E55B5 *)this_00);
          uVar6 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          this_00->field_008B = (uVar6 >> 0x10 & 7) + 8;
          uVar6 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          this_00->field_01FB = (uVar6 >> 0x10) % 0x1a + 0x19;
          uVar6 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar6;
          this_00->field_0203 = (uVar6 >> 0x10) % 0x1a + 0x19;
          thunk_FUN_00676c40((AnonShape_00413AF0_B6B4EE9A *)this_00->field_020B,&LAB_004013cf);
          this_00->field_0170 = *(short *)&this_00->field_022F->field_0xc;
          uVar1 = *(undefined2 *)&this_00->field_0223->field_0xc;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar5 = CONCAT22((short)((uint)this_00->field_022F >> 0x10),uVar1);
          this_00->field_0127 = uVar1;
        }
        if ((this_00->field_007D == -2) || (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0)) {
          this_01 = (STGroupBoatC *)0x0;
        }
        else {
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          this_01 = thunk_FUN_0042b760(*(char *)&this_00->field_0024,
                                       CONCAT22((short)((uint)iVar5 >> 0x10),this_00->field_007D));
        }
        if (this_01 != (STGroupBoatC *)0x0) {
          STGroupC::SetAVPar((STGroupC *)this_01,1);
        }
      }
    }
    else if (SVar2 == MESS_SHARED_010F) {
      local_8 = (AnonShape_0060EA30_DCEB68AD *)0x0;
      local_c = (byte *)PrepareToSave(local_10,(uint *)&local_8);
      STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_c,local_8);
      if (local_c != (byte *)0x0) {
        FreeAndNull(&local_c);
      }
    }
  }
  else if (SVar2 == MESS_AIFLTCLASSTY_5D95) {
    local_10->field_00A7 = 1;
  }
  else {
    if (SVar2 != MESS_AIFLTCLASSTY_5D96) {
      if (SVar2 != MESS_AIFLTCLASSTY_5D99) goto LAB_00668010;
      (message->arg0).words.low = 1;
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    thunk_FUN_00661ca0((AnonShape_00661CA0_93A030EF *)local_10,extraout_EDX,(int)message);
  }
LAB_00668010:
  FUN_006e5fd0(this_00,message);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

