
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_boss.cpp
   AiBossClassTy::GetMessage */

undefined4 __thiscall AiBossClassTy::GetMessage(AiBossClassTy *this,STMessage *param_1)

{
  STMessageId SVar1;
  code *pcVar2;
  AiBossClassTy *this_00;
  int iVar3;
  AiPlrClassTy *pAVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  undefined4 *puVar10;
  char cVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  char *pcVar13;
  InternalExceptionFrame local_54;
  AiBossClassTy *local_10;
  byte *local_c;
  uint local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage(s_E____titans_ai_ai_boss_cpp_007d2750,0xde,0,iVar3,
                               s_AiBossClassTy__GetMessage_error_m_007d27b0,param_1->id,
                               local_10->field_0018);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_ai_ai_boss_cpp_007d2750,0xdf);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    uVar6 = (*pcVar2)();
    return uVar6;
  }
  uVar7 = PTR_00802a38->field_00E4;
  local_10->field_0658 = uVar7;
  SVar1 = param_1->id;
  if (SVar1 < MESS_TORPHIT) {
    if (SVar1 == MESS_SHARED_010F) {
      local_8 = 0;
      local_c = (byte *)PrepareToSave(local_10,&local_8);
      STPlaySystemC::SaveObjData(PTR_00802a38,PTR_s_AIBOSS_0079d614,local_c,local_8,0xc);
      if (local_c != (byte *)0x0) {
        FUN_006ab060(&local_c);
      }
    }
    else if (SVar1 == MESS_ID_NONE) {
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->field_0x1c,param_1);
    }
    else if (SVar1 == MESS_ID_CREATE) {
      puVar10 = param_1->data;
      if (puVar10 == (undefined4 *)0x0) {
        RaiseInternalException
                  (-6,g_overwriteContext_007ED77C,s_E____titans_ai_ai_boss_cpp_007d2750,0x61);
      }
      InitData(this_00,puVar10);
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
        if (uVar7 < local_10->field_0629 + 5) goto LAB_00648291;
        local_10->field_0629 = uVar7;
      }
      AiEventClassTy::GetMessage((AiEventClassTy *)&local_10->field_0x1c,param_1);
      if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
        cVar11 = '\0';
        pcVar9 = &DAT_008087e9;
        do {
          if ((*pcVar9 != -1) &&
             (pAVar4 = thunk_FUN_004357f0(cVar11), pAVar4 != (AiPlrClassTy *)0x0)) {
            (*(code *)**(undefined4 **)pAVar4)(param_1);
          }
          pcVar9 = pcVar9 + 0x51;
          cVar11 = cVar11 + '\x01';
        } while ((int)pcVar9 < 0x808a71);
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
    puVar10 = &DAT_008087b6;
    puVar12 = &DAT_0080c967;
    for (iVar3 = 0x666; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    *(undefined1 *)puVar12 = *(undefined1 *)puVar10;
    thunk_FUN_006765b0();
    uVar7 = 0xffffffff;
    pcVar9 = &DAT_0080ef1e;
    do {
      pcVar13 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar9 + 1;
      cVar11 = *pcVar9;
      pcVar9 = pcVar13;
    } while (cVar11 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar13 + -uVar7;
    pcVar13 = (char *)&DAT_0080c52e;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar13 = pcVar13 + 1;
    }
    uVar7 = 0xffffffff;
    pcVar9 = (char *)&DAT_0080c3c3;
    do {
      pcVar13 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar13 = pcVar9 + 1;
      cVar11 = *pcVar9;
      pcVar9 = pcVar13;
    } while (cVar11 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar13 + -uVar7;
    pcVar13 = (char *)&DAT_0080c736;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar13 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar13 = pcVar13 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar13 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar13 = pcVar13 + 1;
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

