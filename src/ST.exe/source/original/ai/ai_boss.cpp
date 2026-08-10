#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_boss.cpp

// 00647DC0 AiBossClassTy::InitData
#line 4 "decomp/ST.exe/functions/00647DC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_boss.cpp
   AiBossClassTy::InitData */

int __thiscall st::fn_00647DC0(AiBossClassTy *this,undefined4 *param_1)

{
  int iVar2;
  int iVar3;
  int iVar4;
  byte *puVar5;
  byte *puVar6;
  InternalExceptionFrame local_4c;
  AiBossClassTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    if (local_8 == nullptr) {
      puVar6 = nullptr;
    }
    else {
      puVar6 = (byte *)&local_8->field_0x5d3;
    }
    puVar5 = (byte *)(param_1);
    memmove(puVar6, puVar5, 0x85); /* compiler REP MOVS byte copy */
    local_8->field_05D8 = 1;
    st::fn_004054B1
              ((AiEventClassTy *)&local_8->vtable_at_1c,
               (int *)(local_8->field_0619 + 0x84 + (int)param_1));
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  st::fn_00401528(local_8);
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_boss.cpp"),0x29,0,iVar2,st::mutable_c_string("%s"),
                             "AiBossClassTy::InitData");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\ai\\ai_boss.cpp"),0x2a);
  return iVar2;
}

// 00647EF0 AiBossClassTy::PrepareToSave
#line 4 "decomp/ST.exe/functions/00647EF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_boss.cpp
   AiBossClassTy::PrepareToSave

   [STPrototypeApplier] Propagated return.
   Evidence: 00647EF0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 0064811E */

byte * __thiscall st::fn_00647EF0(AiBossClassTy *this,uint *param_1)

{
  AiBossClassTy *pAVar2;
  int errorCode;
  int iVar3;
  byte *pbVar4;
  AllocationRecord_00648620 *pAVar5;
  InternalExceptionFrame local_58;
  AiBossClassTy *local_14;
  uint local_10;
  AllocationRecord_00648620 *local_c;
  undefined4 *local_8;

  local_c = nullptr;
  local_8 = nullptr;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pAVar2 = local_14;
  if (errorCode == 0) {
    local_8 = st::fn_00401D11((AiEventClassTy *)&local_14->vtable_at_1c,&local_10);
    if (pAVar2 == nullptr) {
      pAVar5 = nullptr;
    }
    else {
      pAVar5 = (AllocationRecord_00648620 *)&pAVar2->field_0x5d3;
    }
    local_c = st::fn_00405A24(pAVar5,local_8,local_10,param_1);
    *(undefined1 *)local_c = 1;
    if (local_8 != nullptr) {
      st::fn_006AB060(&local_8);
    }
    g_currentExceptionFrame = local_58.previous;
    return (byte *)local_c;
  }
  g_currentExceptionFrame = local_58.previous;
  if (local_8 != nullptr) {
    st::fn_006AB060(&local_8);
  }
  if (local_c != nullptr) {
    st::fn_006AB060(&local_c);
  }
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_boss.cpp"),0x4c,0,errorCode,st::mutable_c_string("%s"),
                             "AiBossClassTy::PrepareToSave");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_boss.cpp"),0x4d);
  return nullptr;
}

// 00648030 AiBossClassTy::GetMessage
#line 4 "decomp/ST.exe/functions/00648030/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_boss.cpp
   AiBossClassTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00403792|00648030; family_names=AiBossClassTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:1,18:1,1c:2} */

int __thiscall st::fn_00648030(AiBossClassTy *this,STMessage *message)

{
  STMessageId SVar1;
  AiBossClassTy *this_00;
  int iVar3;
  AiPlrClassTy *this_01;
  int iVar4;
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
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  this_00 = local_10;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_boss.cpp"),0xde,0,iVar3,
                               st::mutable_c_string("AiBossClassTy::GetMessage error mess->id == %lX Name=%d"),message->id,
                               local_10->field_0018);
    if (iVar4 == 0) {
      st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_boss.cpp"),0xdf);
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
      local_c = st::fn_00403341(local_10,&local_8);
      st::fn_00401078(g_playSystem_00802A38,PTR_s_AIBOSS_0079d614,local_c,local_8,0xc);
      if (local_c != nullptr) {
        st::fn_006AB060(&local_c);
      }
    }
    else if (SVar1 == MESS_ID_NONE) {
      st::fn_00401BE0((AiEventClassTy *)&local_10->vtable_at_1c,message);
    }
    else if (SVar1 == MESS_ID_CREATE) {
      puVar9 = (byte *)((message->arg0).ptr);
      if (puVar9 == nullptr) {
        st::fn_006A5E40
                  (-6,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_boss.cpp"),0x61);
      }
      st::fn_00403774(this_00,st::pointer_boundary_cast<undefined4 *>(puVar9));
      DAT_008117bc = st::machine_word_boundary_cast<undefined4>(this_00);
      st::fn_00401F69();
    }
    else if (SVar1 == MESS_SHARED_0003) {
      st::fn_0040281F();
      st::fn_00401528(this_00);
      DAT_008117bc = static_cast<undefined4>(0);
    }
  }
  else if (SVar1 < 0x5ded) {
    if ((0x5dcf < SVar1) || ((0x5dc4 < SVar1 && (SVar1 < 0x5dc7)))) {
      if (SVar1 == MESS_SHARED_5DD5) {
        if (uVar6 < local_10->field_0629 + 5) goto LAB_00648291;
        local_10->field_0629 = uVar6;
      }
      st::fn_00401BE0((AiEventClassTy *)&local_10->vtable_at_1c,message);
      if (g_allPlayers_007FA174 != nullptr) {
        cVar11 = '\0';
        pbVar8 = &g_bulkInitializedRecords_008087C7[0].field_0022;
        do {
          if ((*pbVar8 != 0xff) &&
             (this_01 = st::fn_00401DC5(cVar11), this_01 != nullptr)) {
            this_01->st::fn_00401BE0(message);
          }
          pbVar8 = pbVar8 + 0x51;
          cVar11 = cVar11 + '\x01';
        } while ((int)pbVar8 < 0x808a71);
      }
    }
  }
  else if (SVar1 == MESS_AIBOSSCLASSTY_7106) {
    st::fn_00401B8B((uint)DAT_0080874d);
    if (g_playSystem_00802A38 == nullptr) {
      DAT_0080c83a = 0;
    }
    else {
      DAT_0080c83a = st::machine_word_boundary_cast<undefined4>(g_playSystem_00802A38->field_00E4 / 0x19);
    }
    puVar9 = (byte *)(&DAT_008087b6);
    puVar12 = (byte *)(&DAT_0080c967);
    memmove(puVar12, puVar9, 0x1999); /* compiler REP MOVS byte copy */
    st::fn_00404197();
    uVar6 = 0xffffffff;
    pcVar10 = &CHAR_00h_0080ef1e;
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
    pcVar13 = &CHAR_00h_0080c52e;
    memmove(pcVar13, pcVar10, uVar6); /* compiler REP MOVS byte copy */
    uVar7 = 0;
    uVar6 = 0xffffffff;
    pcVar10 = &CHAR_00h_0080c3c3;
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
    if ((char)DAT_008087a0 == '\b') {
      st::fn_00405CF4();
    }
    DAT_0080c52a = DAT_0080c52a + 1;
  }
LAB_00648291:
  st::fn_006E5FD0(this_00,message);
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

