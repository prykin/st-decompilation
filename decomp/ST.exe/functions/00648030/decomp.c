#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_boss.cpp
   AiBossClassTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00403792|00648030; family_names=AiBossClassTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:1,18:1,1c:2} */

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
  byte *pbVar7;
  byte *puVar8;
  char *pcVar9;
  char cVar10;
  byte *puVar11;
  char *pcVar12;
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
    iVar4 = ReportDebugMessage("E:\\__titans\\ai\\ai_boss.cpp",0xde,0,iVar3,
                               "AiBossClassTy::GetMessage error mess->id == %lX Name=%d",message->id,
                               local_10->field_0018);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_boss.cpp",0xdf);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar5 = g_playSystem_00802A38->field_00E4;
  local_10->field_0658 = uVar5;
  SVar1 = message->id;
  if (SVar1 < MESS_TORPHIT) {
    if (SVar1 == MESS_SHARED_010F) {
      local_8 = 0;
      local_c = PrepareToSave(local_10,&local_8);
      STPlaySystemC::SaveObjData(g_playSystem_00802A38,PTR_s_AIBOSS_0079d614,local_c,local_8,0xc);
      if (local_c != nullptr) {
        FreeAndNull(&local_c);
      }
    }
    else if (SVar1 == MESS_ID_NONE) {
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->vtable_at_1c,message);
    }
    else if (SVar1 == MESS_ID_CREATE) {
      puVar8 = (byte *)((message->arg0).ptr);
      if (puVar8 == nullptr) {
        RaiseInternalException
                  (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_boss.cpp",0x61);
      }
      InitData(this_00,puVar8);
      DAT_008117bc = this_00;
      thunk_FUN_0064a450();
    }
    else if (SVar1 == MESS_SHARED_0003) {
      thunk_FUN_0064a580();
      thunk_FUN_00647ed0(this_00);
      DAT_008117bc = nullptr;
    }
  }
  else if (SVar1 < 0x5ded) {
    if ((0x5dcf < SVar1) || ((0x5dc4 < SVar1 && (SVar1 < 0x5dc7)))) {
      if (SVar1 == MESS_SHARED_5DD5) {
        if (uVar5 < local_10->field_0629 + 5) goto LAB_00648291;
        local_10->field_0629 = uVar5;
      }
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->vtable_at_1c,message);
      if (g_allPlayers_007FA174 != nullptr) {
        cVar10 = '\0';
        pbVar7 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        do {
          if ((*pbVar7 != 0xff) &&
             (this_01 = thunk_FUN_004357f0(cVar10), this_01 != nullptr)) {
            this_01->GetMessage(message);
          }
          pbVar7 = pbVar7 + 0x51;
          cVar10 = cVar10 + '\x01';
        } while ((int)pbVar7 < 0x808a71);
      }
    }
  }
  else if (SVar1 == MESS_AIBOSSCLASSTY_7106) {
    thunk_FUN_00676930((uint)DAT_0080874d);
    if (g_playSystem_00802A38 == nullptr) {
      DAT_0080c83a = 0;
    }
    else {
      DAT_0080c83a = g_playSystem_00802A38->field_00E4 / 0x19;
    }
    puVar8 = (byte *)(&DAT_008087b6);
    puVar11 = (byte *)(&DAT_0080c967);
    memmove(puVar11, puVar8, 0x1999); /* compiler REP MOVS byte copy */
    thunk_FUN_006765b0();
    uVar5 = 0xffffffff;
    pcVar9 = &DAT_0080ef1e;
    do {
      pcVar12 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar12 = pcVar9 + 1;
      cVar10 = *pcVar9;
      pcVar9 = pcVar12;
    } while (cVar10 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar12 + -uVar5;
    pcVar12 = (char *)&DAT_0080c52e;
    memmove(pcVar12, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar6 = 0;
    uVar5 = 0xffffffff;
    pcVar9 = (char *)&DAT_0080c3c3;
    do {
      pcVar12 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar12 = pcVar9 + 1;
      cVar10 = *pcVar9;
      pcVar9 = pcVar12;
    } while (cVar10 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar12 + -uVar5;
    pcVar12 = (char *)&DAT_0080c736;
    memmove(pcVar12, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    if (DAT_008087a0 == '\b') {
      thunk_FUN_006767d0();
    }
    DAT_0080c52a = DAT_0080c52a + 1;
  }
LAB_00648291:
  FUN_006e5fd0(this_00,message);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

