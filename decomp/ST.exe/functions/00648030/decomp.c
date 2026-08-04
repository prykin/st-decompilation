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
  AiPlrClassTy *pAVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *puVar9;
  char *pcVar10;
  char cVar11;
  byte *puVar12;
  char *pcVar13;
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
    iVar5 = ReportDebugMessage("E:\\__titans\\ai\\ai_boss.cpp",0xde,0,iVar3,
                               "AiBossClassTy::GetMessage error mess->id == %lX Name=%d",message->id,
                               local_10->field_0018);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\ai\\ai_boss.cpp",0xdf);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar6 = g_playSystem_00802A38->field_00E4;
  local_10->field_0658 = uVar6;
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
      puVar9 = (byte *)((message->arg0).ptr);
      if (puVar9 == nullptr) {
        RaiseInternalException
                  (-6,g_overwriteContext_007ED77C,"E:\\__titans\\ai\\ai_boss.cpp",0x61);
      }
      InitData(this_00,puVar9);
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
        if (uVar6 < local_10->field_0629 + 5) goto LAB_00648291;
        local_10->field_0629 = uVar6;
      }
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->vtable_at_1c,message);
      if (g_allPlayers_007FA174 != nullptr) {
        cVar11 = '\0';
        pbVar8 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        do {
          if ((*pbVar8 != 0xff) &&
             (pAVar4 = thunk_FUN_004357f0(cVar11), pAVar4 != nullptr)) {
            (*pAVar4->vtable->vfunc_00)((short)message);
          }
          pbVar8 = pbVar8 + 0x51;
          cVar11 = cVar11 + '\x01';
        } while ((int)pbVar8 < 0x808a71);
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
    puVar9 = (byte *)(&DAT_008087b6);
    puVar12 = (byte *)(&DAT_0080c967);
    memmove(puVar12, puVar9, 0x1999); /* compiler REP MOVS byte copy */
    thunk_FUN_006765b0();
    uVar6 = 0xffffffff;
    pcVar10 = &DAT_0080ef1e;
    do {
      pcVar13 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar10 + 1;
      cVar11 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar11 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar13 + -uVar6;
    pcVar13 = (char *)&DAT_0080c52e;
    memmove(pcVar13, pcVar10, uVar6); /* compiler REP MOVS byte copy */
    uVar7 = 0;
    uVar6 = 0xffffffff;
    pcVar10 = (char *)&DAT_0080c3c3;
    do {
      pcVar13 = pcVar10;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar13 = pcVar10 + 1;
      cVar11 = *pcVar10;
      pcVar10 = pcVar13;
    } while (cVar11 != '\0');
    uVar6 = ~uVar6;
    pcVar10 = pcVar13 + -uVar6;
    pcVar13 = (char *)&DAT_0080c736;
    memmove(pcVar13, pcVar10, uVar6); /* compiler REP MOVS byte copy */
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

