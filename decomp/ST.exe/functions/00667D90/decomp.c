
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::GetMessage */

int __thiscall AiFltClassTy::GetMessage(AiFltClassTy *this,STMessage *message)

{
  STMessageId SVar1;
  undefined4 *puVar2;
  code *pcVar3;
  AiFltClassTy *this_00;
  int iVar4;
  uint uVar5;
  STGroupBoatC *this_01;
  int iVar6;
  undefined4 extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  AiFltClassTy *local_10;
  byte *local_c;
  AnonShape_0060EA30_DCEB68AD *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0xeca,0,iVar4,
                               s_AiFltClassTy__GetMessage_error_m_007d2c7c,message->id,
                               local_10->field_0018);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      iVar4 = (*pcVar3)();
      return iVar4;
    }
    RaiseInternalException(iVar4,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0xecb);
    return 0xffff;
  }
  local_10->field_0280 = PTR_00802a38->field_00E4;
  SVar1 = message->id;
  if (SVar1 < MESS_STOCTOPUSC_0112) {
    if (SVar1 == MESS_ID_ALLCREATE) {
      thunk_FUN_0065d6a0((AnonShape_0065D6A0_A68E55B5 *)local_10);
    }
    else if (SVar1 < 4) {
      if (SVar1 == MESS_SHARED_0003) {
        thunk_FUN_0065d6e0((AnonShape_0065D6E0_0F9074F6 *)local_10,extraout_EDX);
        thunk_FUN_0065d720((AnonShape_0065D720_52DE2AAB *)this_00,extraout_EDX_01);
        thunk_FUN_0065d480((int)this_00);
      }
      else if (SVar1 == MESS_ID_NONE) {
        if (local_10->field_0093 == 0) {
          local_10->field_0093 = 1;
          thunk_FUN_00664760(local_10);
        }
        else {
          thunk_FUN_00664960(local_10);
          thunk_FUN_00661580((AnonShape_00661580_92A3F5B0 *)this_00);
        }
      }
      else if (SVar1 == MESS_ID_CREATE) {
        puVar2 = message->data;
        if (puVar2 == (undefined4 *)0x0) {
          RaiseInternalException
                    (-6,g_overwriteContext_007ED77C,s_E____titans_ai_ai_flt_cpp_007d2b80,0xe70);
        }
        InitData(this_00,puVar2);
        if (puVar2[3] == 0) {
          this_00->field_001C = DAT_00808754;
        }
        else {
          this_00->field_001C = this_00->field_0086;
        }
        iVar4 = puVar2[3];
        iVar6 = extraout_EDX_00;
        if (iVar4 == 0) {
          uVar5 = thunk_FUN_00435850(CONCAT31((int3)((uint)extraout_EDX_00 >> 8),this_00->field_0x24
                                             ),1,(int *)0x0);
          this_00->field_007D = (short)uVar5;
          thunk_FUN_0065d6a0((AnonShape_0065D6A0_A68E55B5 *)this_00);
          uVar5 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          this_00->field_008B = (uVar5 >> 0x10 & 7) + 8;
          uVar5 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          this_00->field_01FB = (uVar5 >> 0x10) % 0x1a + 0x19;
          uVar5 = this_00->field_001C * 0x41c64e6d + 0x3039;
          this_00->field_001C = uVar5;
          this_00->field_0203 = (uVar5 >> 0x10) % 0x1a + 0x19;
          thunk_FUN_00676c40((AnonShape_00413AF0_B6B4EE9A *)this_00->field_020B,&LAB_004013cf);
          iVar6 = this_00->field_0223;
          this_00->field_0170 = *(short *)&this_00->field_022F->field_0xc;
          iVar4 = CONCAT22((short)((uint)this_00->field_022F >> 0x10),*(undefined2 *)(iVar6 + 0xc));
          this_00->field_0127 = *(undefined2 *)(iVar6 + 0xc);
        }
        if ((this_00->field_007D == -2) || (g_sTAllPlayers_007FA174 == (STAllPlayersC *)0x0)) {
          this_01 = (STGroupBoatC *)0x0;
        }
        else {
          this_01 = thunk_FUN_0042b760(CONCAT31((int3)((uint)iVar6 >> 8),this_00->field_0x24),
                                       CONCAT22((short)((uint)iVar4 >> 0x10),this_00->field_007D));
        }
        if (this_01 != (STGroupBoatC *)0x0) {
          STGroupC::SetAVPar((STGroupC *)this_01,1);
        }
      }
    }
    else if (SVar1 == MESS_SHARED_010F) {
      local_8 = (AnonShape_0060EA30_DCEB68AD *)0x0;
      local_c = (byte *)PrepareToSave(local_10,(uint *)&local_8);
      STPlaySystemC::SaveObjData(PTR_00802a38,this_00->field_0018,local_c,local_8);
      if (local_c != (byte *)0x0) {
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
      *(undefined2 *)&message->data = 1;
    }
    thunk_FUN_00661ca0((AnonShape_00661CA0_93A030EF *)local_10,extraout_EDX,(int)message);
  }
LAB_00668010:
  FUN_006e5fd0();
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

