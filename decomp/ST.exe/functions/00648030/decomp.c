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
  AiPlrClassTy *pAVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  char cVar10;
  undefined4 *puVar11;
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
      local_c = (byte *)PrepareToSave(local_10,&local_8);
      STPlaySystemC::SaveObjData(g_playSystem_00802A38,PTR_s_AIBOSS_0079d614,local_c,local_8,0xc);
      if (local_c != (byte *)0x0) {
        FreeAndNull(&local_c);
      }
    }
    else if (SVar1 == MESS_ID_NONE) {
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->vtable_at_1c,message);
    }
    else if (SVar1 == MESS_ID_CREATE) {
      puVar9 = (message->arg0).ptr;
      if (puVar9 == (undefined4 *)0x0) {
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
      DAT_008117bc = (AiBossClassTy *)0x0;
    }
  }
  else if (SVar1 < 0x5ded) {
    if ((0x5dcf < SVar1) || ((0x5dc4 < SVar1 && (SVar1 < 0x5dc7)))) {
      if (SVar1 == MESS_SHARED_5DD5) {
        if (uVar6 < local_10->field_0629 + 5) goto LAB_00648291;
        local_10->field_0629 = uVar6;
      }
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->vtable_at_1c,message);
      if (g_allPlayers_007FA174 != (STAllPlayersC *)0x0) {
        cVar10 = '\0';
        pcVar8 = &DAT_008087e9;
        do {
          if ((*pcVar8 != -1) &&
             (pAVar4 = thunk_FUN_004357f0(cVar10), pAVar4 != (AiPlrClassTy *)0x0)) {
            (*pAVar4->vtable->vfunc_00)(message);
          }
          pcVar8 = pcVar8 + 0x51;
          cVar10 = cVar10 + '\x01';
        } while ((int)pcVar8 < 0x808a71);
      }
    }
  }
  else if (SVar1 == MESS_AIBOSSCLASSTY_7106) {
    thunk_FUN_00676930((uint)DAT_0080874d);
    if (g_playSystem_00802A38 == (STPlaySystemC *)0x0) {
      DAT_0080c83a = 0;
    }
    else {
      DAT_0080c83a = g_playSystem_00802A38->field_00E4 / 0x19;
    }
    puVar9 = &DAT_008087b6;
    puVar11 = &DAT_0080c967;
    for (iVar3 = 0x666; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    *(undefined1 *)puVar11 = *(undefined1 *)puVar9;
    thunk_FUN_006765b0();
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_0080ef1e;
    do {
      pcVar12 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar8 + 1;
      cVar10 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar10 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar12 + -uVar6;
    pcVar12 = (char *)&DAT_0080c52e;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar12 = pcVar12 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar8 = (char *)&DAT_0080c3c3;
    do {
      pcVar12 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar12 = pcVar8 + 1;
      cVar10 = *pcVar8;
      pcVar8 = pcVar12;
    } while (cVar10 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar12 + -uVar6;
    pcVar12 = (char *)&DAT_0080c736;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar12 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar12 = pcVar12 + 1;
    }
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

