#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_dock.cpp

// 004D01F0 FUN_004d01f0
#line 4 "decomp/ST.exe/functions/004D01F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 651 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004D01F0(void *param_1)

{
  STT3DSprC *pSVar1;
  int exceptionCode;
  int local_10;
  int local_c;
  int local_8;

  if (STField<int>(param_1,0x5ff) == 0) {
    pSVar1 = (STT3DSprC *)st::fn_0072E530(0x40);
    if (pSVar1 == nullptr) {
      pSVar1 = nullptr;
    }
    else {
      /* ST_CALLSITE[004D0217]: CALL 0x00401316; direct=00401316 STT3DSprC::STT3DSprC */
      pSVar1 = st::fn_00401316(pSVar1);
    }
    STField<STT3DSprC *>(param_1,0x5ff) = pSVar1;
    /* ST_CALLSITE[004D0241]: CALL 0x0040537b; direct=0040537B STT3DSprC::Init */
    exceptionCode =
         st::fn_0040537B(pSVar1,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (exceptionCode != 0) {
      st::fn_006A5E40
                (exceptionCode,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_dock.cpp")
                 ,0x28b);
    }
    st::fn_00405795(param_1,&local_10,&local_c,&local_8);
    /* ST_CALLSITE[004D02B9]: CALL 0x004045d9; direct=004045D9 STT3DSprC::sub_004AD3C0 */
    st::fn_004045D9
              (STField<STT3DSprC *>(param_1,0x5ff),(float)local_10 * _DAT_007904f8 * _DAT_007904f0
               ,(float)local_c * _DAT_007904f8 * _DAT_007904f0,
               (float)local_8 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_00402A90(STField<STT3DSprC *>(param_1,0x5ff));
  }
  return 0;
}

// 004D0310 FUN_004d0310
#line 4 "decomp/ST.exe/functions/004D0310/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 664 | 666 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004CEB00 -> 004D0310 @ 004CEE37; TLOBaseTy::sub_004CEB00 this; stable alias EBX */

undefined4 __fastcall st::fn_004D0310(TLOBaseTy *param_1)

{
  char cVar1;
  byte *pbVar2;
  int iVar4;
  uint uVar3;
  int local_EAX_323;
  int iVar5;
  uint uVar6;
  CHAR *pCVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  CHAR local_48 [64];
  uint local_8;

  pCVar7 = local_48;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    pCVar7[0] = '\0';
    pCVar7[1] = '\0';
    pCVar7[2] = '\0';
    pCVar7[3] = '\0';
    pCVar7 = pCVar7 + 4;
  }
  uVar6 = 0;
  local_8 = 0;
  /* ST_CALLSITE[004D034E]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar5 = st::fn_00404183
                    ((STT3DSprC *)param_1->field_05FF,0xe,PTR_0080677c,
                     st::pointer_boundary_cast<char *>(&DAT_007a9342 + *(int *)&param_1->field_0x369 * 6),CASE_1D);
  if (iVar5 != 0) {
    st::fn_006A5E40
              (iVar5,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_dock.cpp"),0x298);
  }
  pbVar2 = (byte *)param_1->field_0379;
  if (pbVar2 == (byte *)0xff) {
    pbVar2 = param_1->field_0024;
  }
  /* ST_CALLSITE[004D0399]: CALL dword ptr [0x0085bde8] */
  st::external_00000080(local_48,st::mutable_c_string("%s%1i"),&DAT_007a9342 + *(int *)&param_1->field_0x369 * 6,pbVar2);
  /* ST_CALLSITE[004D03B6]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
  iVar5 = st::fn_00404183
                    ((STT3DSprC *)param_1->field_05FF,0xc,PTR_0080677c,local_48,CASE_1D);
  if (iVar5 != 0) {
    st::fn_006A5E40
              (iVar5,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_dock.cpp"),0x29a);
  }
  iVar5 = -1;
  pcVar9 = (char *)((int)&DAT_007a9440 + *(int *)&param_1->field_0x369 * 6 + 2);
  pcVar8 = pcVar9;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (iVar5 == -2) {
    /* ST_CALLSITE[004D0423]: CALL 0x00404264; direct=00404264 STT3DSprC::StopShow */
    st::fn_00404264((STT3DSprC *)param_1->field_05FF,0xd);
  }
  else {
    /* ST_CALLSITE[004D0406]: CALL 0x00404183; direct=00404183 STT3DSprC::LoadSequence */
    iVar5 = st::fn_00404183
                      ((STT3DSprC *)param_1->field_05FF,0xd,PTR_0080677c,pcVar9,CASE_1D);
    if (iVar5 != 0) {
      return 0xffff;
    }
  }
  uVar10 = 10;
  iVar4 = st::fn_004052CC((STT3DSprC *)&param_1->field_01D5);
  uVar3 = st::fn_004052CC((STT3DSprC *)param_1->field_05FF);
  st::fn_006EA340((void *)param_1->field_0211,uVar3,iVar4,uVar10);
  local_EAX_323 = st::fn_0040581C();
  switch(local_EAX_323) {
  case 0:
    uVar6 = *(uint *)(&DAT_007a90b8 + *(int *)&param_1->field_0x369 * 0x10);
    local_8 = DAT_007a9438;
    break;
  case 1:
    local_8 = DAT_007a943c;
    uVar6 = *(uint *)(&DAT_007a90bc + *(int *)&param_1->field_0x369 * 0x10);
    break;
  case 2:
    local_8 = DAT_007a9440;
    uVar6 = *(uint *)(&DAT_007a90c0 + *(int *)&param_1->field_0x369 * 0x10);
    break;
  case 3:
    uVar6 = *(uint *)(&DAT_007a90c4 + *(int *)&param_1->field_0x369 * 0x10);
    local_8 = DAT_007a9444;
  }
  st::fn_00402982(param_1->field_05FF,0);
  st::fn_00401EBA(param_1->field_05FF,0xe,uVar6,uVar6,'\0');
  st::fn_00401EBA(param_1->field_05FF,0xc,uVar6,uVar6,'\0');
  /* ST_CALLSITE[004D04FE]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  st::fn_00401064((STT3DSprC *)param_1->field_05FF,'\x0e',uVar6);
  /* ST_CALLSITE[004D050C]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
  st::fn_00401064((STT3DSprC *)param_1->field_05FF,'\f',uVar6);
  /* ST_CALLSITE[004D0526]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  st::fn_00405240((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
  /* ST_CALLSITE[004D0540]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
  st::fn_00405240((STT3DSprC *)param_1->field_05FF,0xc,g_playSystem_00802A38->field_00E4);
  uVar6 = local_8;
  iVar5 = -1;
  pcVar9 = (char *)((int)&DAT_007a9440 + *(int *)&param_1->field_0x369 * 6 + 2);
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar1 != '\0');
  if (iVar5 != -2) {
    st::fn_00401EBA(param_1->field_05FF,0xd,local_8,local_8,'\0');
    /* ST_CALLSITE[004D057D]: CALL 0x00401064; direct=00401064 STT3DSprC::SetCurFase */
    st::fn_00401064((STT3DSprC *)param_1->field_05FF,'\r',uVar6);
    /* ST_CALLSITE[004D0597]: CALL 0x00405240; direct=00405240 STT3DSprC::StartShow */
    st::fn_00405240((STT3DSprC *)param_1->field_05FF,0xd,g_playSystem_00802A38->field_00E4);
  }
  return 0;
}

// 004D0970 TLOFakeTy::sub_004D0970
#line 4 "decomp/ST.exe/functions/004D0970/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 761 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00479600 -> 004D0970 @ 0047A479; MOVSX at 0047A469 establishes signed source width 2 |
   00479600 -> 004D0970 @ 0047B4D3; MOVSX at 0047B4C7 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00479600 -> 004D0970 @ 0047A479; MOVSX at 0047A466 establishes signed source width 2 |
   00479600 -> 004D0970 @ 0047B4D3; MOVSX at 0047B4C0 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00479600 -> 004D0970 @ 0047A479; MOVSX at 0047A463 establishes signed source width 2 |
   00479600 -> 004D0970 @ 0047B4D3; MOVSX at 0047B4BD establishes signed source width 2

   [STMethodOwnerApplier] Structural method owner recovered as TLOFakeTy.
   Evidence: this_call_owners=[TLOFakeTy]; agreed_this_calls=6; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=5; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004D0970(TLOFakeTy *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;

  if (this->field_0249 <= this->field_0245 + 1) {
    iVar1 = st::machine_word_boundary_cast<int>(this->field_0249 + 10);
    this->field_0249 = iVar1;
    puVar2 = st::pointer_boundary_cast<ushort *>(st::fn_006ACF50(this->field_024D,iVar1 * 0xc));
    this->field_024D = puVar2;
  }
  *(int *)(this->field_024D + this->field_0245 * 6) = param_1;
  *(int *)(this->field_024D + this->field_0245 * 6 + 2) = param_2;
  *(int *)(this->field_024D + this->field_0245 * 6 + 4) = param_3;
  /* ST_CALLSITE[004D09FC]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
  iVar1 = st::fn_00401325
                    ((short)param_1,(short)param_2,(short)param_3,0,
                     (RecoveredRecord_DumpClassC_00495EC0 *)this);
  if (iVar1 != 0) {
    st::fn_006A5E40
              (iVar1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_dock.cpp"),0x2f9);
  }
  this->field_0245 = st::machine_word_boundary_cast<int>(this->field_0245 + 1);
  return 0;
}

// 004D0A80 TLOFakeTy::sub_004D0A80
#line 4 "decomp/ST.exe/functions/004D0A80/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 773 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STMethodOwnerApplier] Structural method owner recovered as TLOFakeTy.
   Evidence: this_call_owners=[TLOFakeTy]; agreed_this_calls=12; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=11; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004D0A80(TLOFakeTy *this,int param_1,int param_2,int param_3)

{
  ushort *puVar1;
  int exceptionCode;
  uint uVar2;
  int iVar3;
  ushort *puVar4;

  iVar3 = 0;
  if (0 < this->field_0245) {
    puVar4 = this->field_024D;
    puVar1 = puVar4;
    while (((*(int *)puVar1 != param_1 || (*(int *)(puVar1 + 2) != param_2)) ||
           (*(int *)(puVar1 + 4) != param_3))) {
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 6;
      if (this->field_0245 <= iVar3) {
        return 0;
      }
    }
    exceptionCode =
         st::fn_00404EC1(puVar4[iVar3 * 6],puVar4[iVar3 * 6 + 2],puVar4[iVar3 * 6 + 4],0,
                            (AnonShape_00495FF0_59081BDD *)this);
    if (exceptionCode != 0) {
      st::fn_006A5E40
                (exceptionCode,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Artem\\TLO_dock.cpp")
                 ,0x305);
    }
    if (iVar3 < this->field_0245 + -1) {
      puVar4 = this->field_024D + (iVar3 * 3 + 3) * 2;
      puVar1 = this->field_024D + iVar3 * 6;
      for (uVar2 = ((this->field_0245 - iVar3) + -1) * 3 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1
          ) {
        *(undefined4 *)puVar1 = *(undefined4 *)puVar4;
        puVar4 = puVar4 + 2;
        puVar1 = puVar1 + 2;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(char *)puVar1 = (char)*puVar4;
        puVar4 = (ushort *)((int)puVar4 + 1);
        puVar1 = (ushort *)((int)puVar1 + 1);
      }
    }
    this->field_0245 = st::machine_word_boundary_cast<int>(this->field_0245 + -1);
  }
  return 0;
}

// 004D0B90 TLOFakeTy::GetMessage
#line 4 "decomp/ST.exe/functions/004D0B90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_dock.cpp
   TLOFakeTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401C62|004D0B90; family_names=TLOFakeTy::GetMessage; ret4=4;
   direct_offsets={10:1,14:1,18:2,1c:4} */

int __thiscall st::fn_004D0B90(TLOFakeTy *this,STMessage *message)

{
  short *psVar1;
  STMessageId SVar2;
  TLOFakeTy *pTVar4;
  int iVar5;
  ushort *puVar5;
  int exceptionCode;
  int iVar9;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar10;
  byte *puVar11;
  InternalExceptionFrame local_50;
  TLOFakeTy *local_c;
  byte *local_8;

  puVar11 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar5 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pTVar4 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Artem\\TLO_dock.cpp"),0x341,0,iVar5,st::mutable_c_string("%s")
                               ,"TLOFakeTy::GetMessage error");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Artem\\TLO_dock.cpp"),0x342);
    return iVar5;
  }
  /* ST_CALLSITE[004D0BCF]: CALL 0x00404f07; direct=00404F07 STSprGameObjC::GetMessage */
  st::fn_00404F07((STSprGameObjC *)local_c,message);
  SVar2 = message->id;
  if (SVar2 == MESS_ID_CREATE) {
    g_tLOFake_00800BCC = pTVar4;
    pTVar4->field_0020 = 0x3ea;
    pTVar4->field_0028 = 2;
    local_8 = st::pointer_boundary_cast<byte *>((message->arg0).ptr);
    if (pTVar4 != nullptr) {
      puVar11 = (byte *)&pTVar4->field_0x231;
    }
    pbVar8 = local_8;
    memmove(puVar11, pbVar8, 0x1c); /* compiler REP MOVS byte copy */
    iVar6 = 0;
    if (pTVar4->field_023D == 2) {
      if (pTVar4->field_0249 != 0) {
        puVar5 = st::pointer_boundary_cast<ushort *>(st::fn_006AAC70(st::machine_word_boundary_cast<uint>(pTVar4->field_0249 * 0xc)));
        pTVar4->field_024D = puVar5;
      }
      if (pTVar4->field_0245 != 0) {
        pbVar8 = local_8 + 0x1c;
        puVar5 = pTVar4->field_024D;
        for (uVar7 = st::machine_word_boundary_cast<uint>(pTVar4->field_0245 * 3 & 0x3fffffff); uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined4 *)puVar5 = *(undefined4 *)pbVar8;
          pbVar8 = pbVar8 + 4;
          puVar5 = puVar5 + 2;
        }
        for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(byte *)puVar5 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          puVar5 = (ushort *)((int)puVar5 + 1);
        }
        iVar6 = 0;
        if (0 < pTVar4->field_0245) {
          iVar10 = 0;
          do {
            psVar1 = (short *)((int)pTVar4->field_024D + iVar10);
            /* ST_CALLSITE[004D0D89]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
            exceptionCode =
                 st::fn_00401325
                           (*psVar1,*(short *)((int)pTVar4->field_024D + iVar10 + 4),psVar1[4],0,
                            (RecoveredRecord_DumpClassC_00495EC0 *)pTVar4);
            if (exceptionCode != 0) {
              st::fn_006A5E40
                        (exceptionCode,g_overwriteContext_007ED77C,
                         st::mutable_c_string("E:\\__titans\\Artem\\TLO_dock.cpp"),0x326);
            }
            iVar6 = iVar6 + 1;
            iVar10 = iVar10 + 0xc;
          } while (iVar6 < pTVar4->field_0245);
        }
      }
    }
  }
  else if (SVar2 == MESS_SHARED_0003) {
    g_tLOFake_00800BCC = nullptr;
    st::fn_004021D5((STT3DSprC *)&pTVar4->field_01D5);
    if (pTVar4->field_024D != nullptr) {
      st::fn_006AB060(&pTVar4->field_024D);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (SVar2 == MESS_SHARED_010F) {
    local_8 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(st::machine_word_boundary_cast<uint>(pTVar4->field_0245 * 0xc + 0x1c)));
    if (pTVar4 == nullptr) {
      puVar11 = nullptr;
    }
    else {
      puVar11 = (byte *)&pTVar4->field_0x231;
    }
    pbVar8 = local_8;
    memmove(pbVar8, puVar11, 0x1c); /* compiler REP MOVS byte copy */
    iVar6 = 0;
    local_8[0xc] = 2;
    local_8[0xd] = 0;
    local_8[0xe] = 0;
    local_8[0xf] = 0;
    if (pTVar4->field_0245 != 0) {
      puVar5 = pTVar4->field_024D;
      pbVar8 = local_8 + 0x1c;
      for (uVar7 = st::machine_word_boundary_cast<uint>(pTVar4->field_0245 * 3 & 0x3fffffff); uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined4 *)pbVar8 = *(undefined4 *)puVar5;
        puVar5 = puVar5 + 2;
        pbVar8 = pbVar8 + 4;
      }
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pbVar8 = (byte)*puVar5;
        puVar5 = (ushort *)((int)puVar5 + 1);
        pbVar8 = pbVar8 + 1;
      }
    }
    /* ST_CALLSITE[004D0C75]: CALL 0x004025f9; direct=004025F9 STPlaySystemC::SaveObjData */
    st::fn_004025F9
              (g_playSystem_00802A38,pTVar4->field_0018,local_8,st::machine_word_boundary_cast<uint>(pTVar4->field_0245 * 0xc + 0x1c));
    st::fn_006AB060(&local_8);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

