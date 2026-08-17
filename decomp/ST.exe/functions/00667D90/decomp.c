#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004031B6|00667D90; family_names=AiFltClassTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:2,18:2,1c:8} */

int __thiscall AiFltClassTy::GetMessage(AiFltClassTy *this,STMessage *message)

{
  STMessageId SVar1;
  undefined4 *puVar2;
  AiFltClassTy *this_00;
  ushort uVar4;
  int iVar5;
  uint uVar5;
  STGroupBoatC *this_01;
  int iVar6;
  int iVar7;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  undefined4 extraout_EDX_00;
  InternalExceptionFrame local_54;
  AiFltClassTy *local_10;
  byte *local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage("E:\\__titans\\ai\\ai_flt.cpp",0xeca,0,iVar5,
                               "AiFltClassTy::GetMessage error mess->id == %lX Name=%d",message->id,
                               local_10->field_0018);
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar5,0,"E:\\__titans\\ai\\ai_flt.cpp",0xecb);
    return 0xffff;
  }
  local_10->field_0280 = g_playSystem_00802A38->field_00E4;
  SVar1 = message->id;
  if (SVar1 < MESS_STOCTOPUSC_0112) {
    if (SVar1 == MESS_ID_ALLCREATE) {
      /* ST_CALLSITE[00667FE0]: CALL 0x00404b3d; direct=00404B3D AiFltClassTy::sub_0065D6A0 */
      sub_0065D6A0(local_10);
    }
    else if (SVar1 < 4) {
      if (SVar1 == MESS_SHARED_0003) {
        /* ST_CALLSITE[00667F87]: CALL 0x00401cdf; direct=00401CDF AiFltClassTy::sub_0065D6E0 */
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        sub_0065D6E0((AnonShape_0065D6E0_0F9074F6 *)local_10,extraout_EDX);
        /* ST_CALLSITE[00667F8E]: CALL 0x00404c41; direct=00404C41 AiFltClassTy::sub_0065D720 */
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        sub_0065D720((AnonShape_0065D720_52DE2AAB *)this_00,extraout_EDX_00);
        thunk_FUN_0065d480(this_00);
      }
      else if (SVar1 == MESS_ID_NONE) {
        if (local_10->field_0093 == 0) {
          local_10->field_0093 = 1;
          /* ST_CALLSITE[00667F68]: CALL 0x004014f6; direct=004014F6 AiFltClassTy::sub_00664760 */
          sub_00664760(local_10);
        }
        else {
          /* ST_CALLSITE[00667F74]: CALL 0x00404778; direct=00404778 AiFltClassTy::sub_00664960 */
          sub_00664960(local_10);
          /* ST_CALLSITE[00667F7B]: CALL 0x00402c8e; direct=00402C8E AiFltClassTy::sub_00661580 */
          sub_00661580(this_00);
        }
      }
      else if (SVar1 == MESS_ID_CREATE) {
        puVar2 = (message->arg0).ptr;
        if (puVar2 == nullptr) {
          RaiseInternalException
                    (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_flt.cpp",0xe70);
        }
        /* ST_CALLSITE[00667E33]: CALL 0x0040215d; direct=0040215D AiFltClassTy::InitData */
        InitData(this_00,puVar2);
        if (puVar2[3] == 0) {
          this_00->field_001C = DAT_00808754;
        }
        else {
          this_00->field_001C = this_00->field_0086;
        }
        if (puVar2[3] == 0) {
          uVar4 = thunk_FUN_00435850(*(char *)&this_00->field_0024,1,nullptr);
          this_00->field_007D = uVar4;
          /* ST_CALLSITE[00667E76]: CALL 0x00404b3d; direct=00404B3D AiFltClassTy::sub_0065D6A0 */
          sub_0065D6A0(this_00);
          uVar5 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          this_00->field_008B = (uVar5 >> 0x10 & 7) + 8;
          uVar5 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          this_00->field_01FB = (uVar5 >> 0x10) % 0x1a + 0x19;
          uVar5 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          this_00->field_0203 = (uVar5 >> 0x10) % 0x1a + 0x19;
          thunk_FUN_00676c40(this_00->field_020B,thunk_FUN_00660d10);
          this_00->field_0170 = *(short *)&this_00->field_022F->field_0xc;
          this_00->field_0127 = *(undefined2 *)&this_00->field_0223->field_0xc;
        }
        if ((this_00->field_007D == 0xfffe) || (g_allPlayers_007FA174 == nullptr)) {
          this_01 = nullptr;
        }
        else {
          this_01 = thunk_FUN_0042b760(*(char *)&this_00->field_0024,this_00->field_007D);
        }
        if (this_01 != nullptr) {
          /* ST_CALLSITE[00667F48]: CALL 0x00404340; direct=00404340 STGroupC::SetAVPar */
          STGroupC::SetAVPar((STGroupC *)this_01,1);
        }
      }
    }
    else if (SVar1 == MESS_SHARED_010F) {
      local_8 = 0;
      /* ST_CALLSITE[00667FB0]: CALL 0x00402c39; direct=00402C39 AiFltClassTy::PrepareToSave */
      local_c = PrepareToSave(local_10,&local_8);
      /* ST_CALLSITE[00667FC7]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
      STPlaySystemC::SaveObjData(g_playSystem_00802A38,this_00->field_0018,local_c,local_8);
      if (local_c != nullptr) {
        FreeAndNull(&local_c);
      }
    }
  }
  else if (SVar1 == MESS_AIFLTCLASSTY_5D95) {
    local_10->field_00A7 = 1;
  }
  else {
    if (SVar1 != MESS_AIFLTCLASSTY_5D96) {
      if (SVar1 != MESS_AIFLTCLASSTY_5D99) goto LAB_00668010;
      (message->arg0).words.low = 1;
    }
    /* ST_CALLSITE[00667FFF]: CALL 0x00403a1c; direct=00403A1C AiFltClassTy::sub_00661CA0 */
    /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
    sub_00661CA0((AnonShape_00661CA0_93A030EF *)local_10,extraout_EDX,(int)message);
  }
LAB_00668010:
  FUN_006e5fd0(this_00,message);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

