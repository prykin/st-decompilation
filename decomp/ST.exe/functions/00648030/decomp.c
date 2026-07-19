
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_boss.cpp
   AiBossClassTy::GetMessage */

undefined4 __thiscall AiBossClassTy::GetMessage(AiBossClassTy *this,int param_1)

{
  code *pcVar1;
  AiBossClassTy *this_00;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  char *pcVar8;
  char cVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  char *pcVar11;
  InternalExceptionFrame local_54;
  AiBossClassTy *local_10;
  byte *local_c;
  uint local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_10;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = ReportDebugMessage(s_E____titans_ai_ai_boss_cpp_007d2750,0xde,0,iVar2,
                               s_AiBossClassTy__GetMessage_error_m_007d27b0,
                               *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(local_10 + 0x18));
    if (iVar4 == 0) {
      RaiseInternalException(iVar2,0,s_E____titans_ai_ai_boss_cpp_007d2750,0xdf);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  uVar6 = *(uint *)(DAT_00802a38 + 0xe4);
  *(uint *)(local_10 + 0x658) = uVar6;
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 < 0x110) {
    if (uVar7 == 0x10f) {
      local_8 = 0;
      local_c = (byte *)PrepareToSave(local_10,&local_8);
      STPlaySystemC::SaveObjData(DAT_00802a38,PTR_s_AIBOSS_0079d614,local_c,local_8,0xc);
      if (local_c != (byte *)0x0) {
        FUN_006ab060(&local_c);
      }
    }
    else if (uVar7 == 0) {
      AiEventClassTy::GetMessage((AiEventClassTy *)(local_10 + 0x1c),(STMessage *)param_1);
    }
    else if (uVar7 == 2) {
      puVar3 = *(undefined4 **)(param_1 + 0x14);
      if (puVar3 == (undefined4 *)0x0) {
        RaiseInternalException(-6,DAT_007ed77c,s_E____titans_ai_ai_boss_cpp_007d2750,0x61);
      }
      InitData(this_00,puVar3);
      DAT_008117bc = this_00;
      thunk_FUN_0064a450();
    }
    else if (uVar7 == 3) {
      thunk_FUN_0064a580();
      thunk_FUN_00647ed0((int)this_00);
      DAT_008117bc = (AiBossClassTy *)0x0;
    }
  }
  else if (uVar7 < 0x5ded) {
    if ((0x5dcf < uVar7) || ((0x5dc4 < uVar7 && (uVar7 < 0x5dc7)))) {
      if (uVar7 == 0x5dd5) {
        if (uVar6 < *(int *)(local_10 + 0x629) + 5U) goto LAB_00648291;
        *(uint *)(local_10 + 0x629) = uVar6;
      }
      AiEventClassTy::GetMessage((AiEventClassTy *)(local_10 + 0x1c),(STMessage *)param_1);
      if (DAT_007fa174 != 0) {
        cVar9 = '\0';
        pcVar8 = &DAT_008087e9;
        do {
          if ((*pcVar8 != -1) &&
             (puVar3 = (undefined4 *)thunk_FUN_004357f0(cVar9), puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(param_1);
          }
          pcVar8 = pcVar8 + 0x51;
          cVar9 = cVar9 + '\x01';
        } while ((int)pcVar8 < 0x808a71);
      }
    }
  }
  else if (uVar7 == 0x7106) {
    thunk_FUN_00676930((uint)DAT_0080874d);
    if (DAT_00802a38 == (STPlaySystemC *)0x0) {
      DAT_0080c83a = 0;
    }
    else {
      DAT_0080c83a = *(uint *)(DAT_00802a38 + 0xe4) / 0x19;
    }
    puVar3 = &DAT_008087b6;
    puVar10 = &DAT_0080c967;
    for (iVar2 = 0x666; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined1 *)puVar10 = *(undefined1 *)puVar3;
    thunk_FUN_006765b0();
    uVar6 = 0xffffffff;
    pcVar8 = &DAT_0080ef1e;
    do {
      pcVar11 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar8 + 1;
      cVar9 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar9 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar11 + -uVar6;
    pcVar11 = (char *)&DAT_0080c52e;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar8 + 1;
      pcVar11 = pcVar11 + 1;
    }
    uVar6 = 0xffffffff;
    pcVar8 = (char *)&DAT_0080c3c3;
    do {
      pcVar11 = pcVar8;
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      pcVar11 = pcVar8 + 1;
      cVar9 = *pcVar8;
      pcVar8 = pcVar11;
    } while (cVar9 != '\0');
    uVar6 = ~uVar6;
    pcVar8 = pcVar11 + -uVar6;
    pcVar11 = (char *)&DAT_0080c736;
    for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar8;
      pcVar8 = pcVar8 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pcVar11 = *pcVar8;
      pcVar8 = pcVar8 + 1;
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

