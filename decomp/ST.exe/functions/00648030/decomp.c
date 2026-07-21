#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_boss.cpp
   AiBossClassTy::GetMessage */

int __thiscall AiBossClassTy::GetMessage(AiBossClassTy *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  AiBossClassTy *this_00;
  int iVar3;
  AiPlrClassTy *this_01;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char cVar9;
  undefined4 *puVar10;
  char *pcVar11;
  InternalExceptionFrame local_54;
  AiBossClassTy *local_10;
  byte *local_c;
  uint local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_boss_cpp_007d2750,0xde,0,iVar3,
                               s_AiBossClassTy__GetMessage_error_m_007d27b0,message->id,
                               local_10->field_0018);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_ai_ai_boss_cpp_007d2750,0xdf);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar5 = PTR_00802a38->field_00E4;
  local_10->field_0658 = uVar5;
  SVar1 = message->id;
  if (SVar1 < MESS_TORPHIT) {
    if (SVar1 == MESS_SHARED_010F) {
      local_8 = 0;
      local_c = (byte *)PrepareToSave(local_10,&local_8);
      STPlaySystemC::SaveObjData(PTR_00802a38,PTR_s_AIBOSS_0079d614,local_c,local_8,0xc);
      if (local_c != (byte *)0x0) {
        FreeAndNull(&local_c);
      }
    }
    else if (SVar1 == MESS_ID_NONE) {
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->vtable_at_1c,message);
    }
    else if (SVar1 == MESS_ID_CREATE) {
      puVar8 = message->data;
      if (puVar8 == (undefined4 *)0x0) {
        RaiseInternalException
                  (-6,g_overwriteContext_007ED77C,s_E____titans_ai_ai_boss_cpp_007d2750,0x61);
      }
      InitData(this_00,puVar8);
      DAT_008117bc = this_00;
      thunk_FUN_0064a450();
    }
    else if (SVar1 == MESS_SHARED_0003) {
      thunk_FUN_0064a580();
      thunk_FUN_00647ed0((int)this_00);
      DAT_008117bc = (AiBossClassTy *)0x0;
    }
  }
  else if (SVar1 < 0x5ded) {
    if ((0x5dcf < SVar1) || ((0x5dc4 < SVar1 && (SVar1 < 0x5dc7)))) {
      if (SVar1 == MESS_SHARED_5DD5) {
        if (uVar5 < local_10->field_0629 + 5) goto LAB_00648291;
        local_10->field_0629 = uVar5;
      }
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->vtable_at_1c,message);
      if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
        cVar9 = '\0';
        pcVar7 = &DAT_008087e9;
        do {
          if ((*pcVar7 != -1) &&
             (this_01 = thunk_FUN_004357f0(cVar9), this_01 != (AiPlrClassTy *)0x0)) {
            (*this_01->vtable->GetMessage)(this_01,message);
          }
          pcVar7 = pcVar7 + 0x51;
          cVar9 = cVar9 + '\x01';
        } while ((int)pcVar7 < 0x808a71);
      }
    }
  }
  else if (SVar1 == MESS_AIBOSSCLASSTY_7106) {
    thunk_FUN_00676930((uint)DAT_0080874d);
    if (PTR_00802a38 == (STPlaySystemC *)0x0) {
      DAT_0080c83a = 0;
    }
    else {
      DAT_0080c83a = (uint)PTR_00802a38->field_00E4 / 0x19;
    }
    puVar8 = &DAT_008087b6;
    puVar10 = &DAT_0080c967;
    for (iVar3 = 0x666; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
    thunk_FUN_006765b0();
    uVar5 = 0xffffffff;
    pcVar7 = &DAT_0080ef1e;
    do {
      pcVar11 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar7 + 1;
      cVar9 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar9 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar11 + -uVar5;
    pcVar11 = (char *)&DAT_0080c52e;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar5 = 0xffffffff;
    pcVar7 = (char *)&DAT_0080c3c3;
    do {
      pcVar11 = pcVar7;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar7 + 1;
      cVar9 = *pcVar7;
      pcVar7 = pcVar11;
    } while (cVar9 != '\0');
    uVar5 = ~uVar5;
    pcVar7 = pcVar11 + -uVar5;
    pcVar11 = (char *)&DAT_0080c736;
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar11 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar11 = pcVar11 + 1;
    }
    if (DAT_008087a0 == '\b') {
      thunk_FUN_006767d0();
    }
    DAT_0080c52a = DAT_0080c52a + 1;
  }
LAB_00648291:
  FUN_006e5fd0();
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

