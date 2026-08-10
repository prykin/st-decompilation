#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STAppC.cpp

// 0056A5F0 STAppC::STAppC
#line 4 "decomp/ST.exe/functions/0056A5F0/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079B0A8 (store 0056A67D)
   Evidence: final_vptr=0079B0A8; returns_this=true; calls_before=2; field_writes_after=38;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; table_confidence=high */

STAppC * __thiscall st::fn_0056A5F0(STAppC *this,undefined4 param_1)

{
  DWORD DVar1;
  int iVar2;

  st::fn_006E34C0((AppClassTy *)this,0,param_1);
  st::fn_004057EF((AnonShape_00571CD0_C1ECCB3F *)&this->field_0038);
  this->field_1111 = 10;
  this->field_1115 = 10;
  this->field_0FC7 = 0;
  this->field_0FCB = 0;
  this->field_1119 = 1;
  this->field_111D = 0;
  this->field_1121 = 1;
  this->field_1125 = 0x14;
  this->field_0E27 = 0;
  this->field_0E2B = 0;
  this->field_0E2F = 0;
  this->field_0E33 = 1000;
  this->field_0E37 = 0;
  this->field_0E3F = 0xffffffff;
  this->field_0E3B = 0xffffffff;
  this->vtable = &st_global_0079B0A8;
  g_app_00806728 = (AppClassTy *)this;
  this->field_115A = nullptr;
  DAT_0080673c = 0;
  this->field_115E = 1;
  this->field_115F = 0;
  this->field_1163 = 2;
  this->field_1164 = 0;
  this->field_1168 = 0;
  this->field_116C = 0;
  this->field_1170 = 0;
  this->field_1174 = 0;
  this->field_1181 = 0;
  this->field_1185 = 0;
  this->field_1189 = (LPVOID)0x0;
  this->field_118D = 0;
  this->field_1191 = 4;
  this->field_1195 = 0;
  this->field_1178 = 0;
  this->field_117C = 0;
  this->field_112D = 1;
  this->field_112E = 1;
  this->field_4EDE = nullptr;
  this->field_4EE2 = nullptr;
  this->field_4EE6 = nullptr;
  this->field_4EEA = 0;
  this->field_4EF2 = 0;
  this->field_7D12 = nullptr;
  this->field_7D16 = 0;
  this->field_4EF6 = 1;
  this->field_4EFA = 0;
  this->field_1138 = 0;
  this->field_7D0E = 0;
  DVar1 = st::fn_006E51B0(this);
  this->field_1134 = DVar1;
  this->field_76F2 = nullptr;
  this->field_854E = 0;
  this->field_8552 = 0;
  this->field_8556 = 0;
  memset(&this->field_0x1196, 0, 0x1999); /* compiler bulk-zero initialization */
  iVar2 = 0;
  memset(&this->field_4DA3, 0, 0x104); /* compiler bulk-zero initialization */
  this->field_4EA7 = nullptr;
  this->field_4EAB = nullptr;
  this->field_4EFE = 0;
  return this;
}

// 0056E9E0 STAppC::sub_0056E9E0
#line 4 "decomp/ST.exe/functions/0056E9E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_0056E9E0(STAppC *this,int param_1)

{
  byte bVar1;
  STAppC *pSVar2;
  int iVar3;
  cMf32 *pcVar3;
  uint *puVar4;
  DArrayTy *pDVar5;
  ushort *puVar6;
  uint uVar8;
  byte *pbVar10;
  byte *pbVar12;
  byte *pbVar13;
  byte local_160 [260];
  InternalExceptionFrame local_5c;
  STAppC *local_18;
  char *local_14;
  undefined4 local_10;
  char *local_c;
  cMf32 *local_8;

  local_10 = 1;
  if (param_1 != 0) {
    this->field_1163 = 1;
    this->field_7D0E = 1;
  }
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar3 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pSVar2 = local_18;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    return 0;
  }
  local_c = &local_18->field_76F6;
  pcVar3 = (cMf32 *)st::fn_006F0EC0(0x345,(byte *)local_c,0,0,0);
  local_8 = pcVar3;
  if ((DArrayTy *)pSVar2->field_4EA7 != nullptr) {
    st::fn_006B5570((DArrayTy *)pSVar2->field_4EA7);
  }
  puVar4 = st::fn_0071AA10(pcVar3,PTR_s_DESCRIPTION_0079b074,0);
  pSVar2->field_4EA7 = puVar4;
  if (puVar4 == nullptr) {
    pDVar5 = st::fn_006B54F0(nullptr,10,10);
    pSVar2->field_4EA7 = st::pointer_boundary_cast<uint *>(&pDVar5->flags);
  }
  if ((DArrayTy *)pSVar2->field_4EAB != nullptr) {
    st::fn_006B5570((DArrayTy *)pSVar2->field_4EAB);
  }
  puVar4 = st::fn_0071AA10(pcVar3,PTR_s_OBJECTIVES_0079b078,0);
  pSVar2->field_4EAB = puVar4;
  if (puVar4 == nullptr) {
    pDVar5 = st::fn_006B54F0(nullptr,10,10);
    pSVar2->field_4EAB = st::pointer_boundary_cast<uint *>(&pDVar5->flags);
  }
  pbVar13 = st::pointer_boundary_cast<byte *>(&pSVar2->field_4DA3);
  memset((void *)pbVar13, 0, 0x104); /* compiler bulk-zero initialization */
  local_14 = (char *)pbVar13;
  puVar6 = st::fn_006F1CE0(local_8,0xc,PTR_s_TITLE_MISSION_0079b070,(int *)&local_14,0);
  if ((puVar6 == nullptr) || (*pbVar13 == '\0')) {
    st::fn_0072E730((byte *)local_c,nullptr,nullptr,local_160,nullptr);
    uVar8 = 0xffffffff;
    pbVar10 = local_160;
    do {
      pbVar12 = pbVar10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pbVar12 = pbVar10 + 1;
      bVar1 = *pbVar10;
      pbVar10 = pbVar12;
    } while (bVar1 != 0);
    uVar8 = ~uVar8;
    pbVar10 = pbVar12 + -uVar8;
    memmove(pbVar13, pbVar10, uVar8); /* compiler REP MOVS byte copy */
  }
  st::fn_006F1170(local_8);
  g_currentExceptionFrame = local_5c.previous;
  return local_10;
}

// 0056EBE0 STAppC::sub_0056EBE0
#line 4 "decomp/ST.exe/functions/0056EBE0/decomp.c"
/* WARNING: Removing unreachable block (ram,0x0056ed8b) */
/* [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0056EBE0(STAppC *this)

{
  char cVar1;
  uint *puVar2;
  DArrayTy *pDVar3;
  DArrayTy *array;
  DArrayTy *array_00;
  DArrayTy *pDVar4;
  uint uVar5;
  uint uVar8;
  char *pcVar9;
  char *pcVar11;
  char *pcVar12;
  int local_8;

  if ((DArrayTy *)this->field_4EAB != nullptr) {
    st::fn_006B5570((DArrayTy *)this->field_4EAB);
  }
  if ((DArrayTy *)this->field_4EA7 != nullptr) {
    st::fn_006B5570((DArrayTy *)this->field_4EA7);
  }
  if ((this->field_4EE6[3] == 0) || (uVar8 = this->field_4EE6[7], uVar8 == 0)) {
    this->field_233C = 1;
    memset(&this->field_0x2340, 0, 0x20); /* compiler bulk-zero initialization */
  }
  else {
    this->field_233C = *(uint *)(uVar8 + 0x90);
    uVar5 = 0xffffffff;
    pcVar9 = (char *)(uVar8 + 0x4c);
    do {
      pcVar11 = pcVar9;
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      pcVar11 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar11;
    } while (cVar1 != '\0');
    uVar5 = ~uVar5;
    pcVar9 = pcVar11 + -uVar5;
    pcVar11 = st::pointer_boundary_cast<char *>(&this->field_0x2340);
    memmove(pcVar11, pcVar9, uVar5); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    puVar2 = st::fn_0071AA10(g_cMf32_0080675C,(char *)(uVar8 + 0x70),0);
    this->field_4EAB = puVar2;
  }
  puVar2 = st::fn_0071AA10(g_cMf32_0080675C,PTR_s_DESCRIPTION_0079b074,0);
  this->field_4EA7 = puVar2;
  if (puVar2 == nullptr) {
    pDVar3 = st::fn_006B54F0(nullptr,10,10);
    this->field_4EA7 = st::pointer_boundary_cast<uint *>(&pDVar3->flags);
  }
  if (this->field_4EAB == nullptr) {
    pDVar3 = st::fn_006B54F0(nullptr,10,10);
    this->field_4EAB = st::pointer_boundary_cast<uint *>(&pDVar3->flags);
  }
  pDVar3 = (DArrayTy *)st::fn_00403F44(g_cMf32_0080675C,1,this->field_233C);
  array = (DArrayTy *)st::fn_00403F44(g_cMf32_0080675C,2,this->field_233C);
  array_00 = (DArrayTy *)st::fn_00403F44(g_cMf32_0080675C,3,this->field_233C);
  pcVar9 = st::pointer_boundary_cast<char *>(&this->field_11A7);
  local_8 = 8;
  do {
    uVar8 = 0xffffffff;
    pcVar11 = &CHAR_00h_008016a0;
    do {
      pcVar12 = pcVar11;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar11 = pcVar12 + -uVar8;
    pcVar12 = pcVar9 + 1;
    memmove(pcVar12, pcVar11, uVar8); /* compiler REP MOVS byte copy */
    uVar5 = 0;
    if ((pcVar9[0x22] != -1) && (*pcVar9 == '\x01')) {
      pDVar4 = pDVar3;
      if ((pcVar9[0x21] != '\x01') && (pDVar4 = array, pcVar9[0x21] != '\x02')) {
        pDVar4 = array_00;
      }
      if ((pDVar4 == nullptr) || (pDVar4->count == 0)) {
        pcVar11 = &CHAR_00h_008016a0;
      }
      else {
        pcVar11 = (char *)((int)pDVar4->data + 0x4c);
      }
      uVar8 = 0xffffffff;
      do {
        pcVar12 = pcVar11;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar12 = pcVar11 + 1;
        cVar1 = *pcVar11;
        pcVar11 = pcVar12;
      } while (cVar1 != '\0');
      uVar8 = ~uVar8;
      pcVar11 = pcVar12 + -uVar8;
      pcVar12 = pcVar9 + 1;
      memmove(pcVar12, pcVar11, uVar8); /* compiler REP MOVS byte copy */
    }
    pcVar9 = pcVar9 + 0x51;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      if (pDVar3 != nullptr) {
        st::fn_006AE110(pDVar3);
      }
      if (array != nullptr) {
        st::fn_006AE110(array);
      }
      if (array_00 != nullptr) {
        st::fn_006AE110(array_00);
      }
      return;
    }
  } while( true );
}

// 0056EE90 STAppC::sub_0056EE90
#line 4 "decomp/ST.exe/functions/0056EE90/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0056EE90(STAppC *this)

{
  byte bVar1;
  uint local_8;

  if (this->field_112D == -1) {
    bVar1 = 0;
    this->field_112D = 0;
    this->field_112E = 1;
    local_8 = 0;
    while( true ) {
      if (((&this->field_11C9)[local_8 * 0x51] != -1) &&
         ((&this->field_11C8)[local_8 * 0x51] != '\0')) break;
      bVar1 = bVar1 + 1;
      local_8 = (uint)bVar1;
      if (7 < bVar1) {
        return;
      }
    }
    this->field_112D = (&this->field_11C9)[local_8 * 0x51];
    this->field_112E = (&this->field_11C8)[local_8 * 0x51];
    this->field_112F = 1;
  }
  return;
}

// 0056EF50 STAppC::sub_0056EF50
#line 4 "decomp/ST.exe/functions/0056EF50/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=2; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall st::fn_0056EF50(STAppC *this)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  uint local_8;

  if (this->field_1195 != '\0') {
    bVar2 = 0;
    local_8 = 0;
    do {
      if (((&this->field_11C9)[local_8 * 0x51] == this->field_112D) &&
         ((&this->field_11A7)[local_8 * 0x51] == '\0')) {
        this->field_112E = (&this->field_11C8)[local_8 * 0x51];
        return;
      }
      bVar2 = bVar2 + 1;
      local_8 = (uint)bVar2;
    } while (bVar2 < 8);
  }
  this->field_112D = 0xff;
  this->field_112E = 0;
  pcVar1 = st::pointer_boundary_cast<char *>(&this->field_11C9);
  iVar3 = 8;
  do {
    if (((*pcVar1 != -1) && (pcVar1[-1] != '\0')) && (pcVar1[-0x22] == '\0')) {
      this->field_112D = *pcVar1;
      this->field_112E = pcVar1[-1];
      this->field_112F = 0;
    }
    pcVar1 = pcVar1 + 0x51;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  st::fn_0040591B(this);
  return;
}

// 0056F040 STAppC::sub_0056F040
#line 4 "decomp/ST.exe/functions/0056F040/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=2; incoming_this_accesses=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_1180 uses
   /SubmarineTitans/Recovered/Enums/STAppC_field_1180State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_6=6;CASE_8=8

   [STSwitchEnumApplier] Switch target field_1180 uses
   /SubmarineTitans/Recovered/Enums/STAppC_field_1180State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_6=6;CASE_8=8;CASE_9=9;CASE_B=11 */

void __thiscall st::fn_0056F040(STAppC *this)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar5;
  char *pcVar6;
  char *pcVar8;
  int local_c;

  iVar5 = 8;
  pcVar2 = st::pointer_boundary_cast<char *>(&this->field_11A7);
  do {
    if (((pcVar2[0x22] != this->field_112D) || (pcVar2[0x21] != this->field_112E)) &&
       (*pcVar2 == '\0')) {
      *pcVar2 = '\x01';
    }
    pcVar2 = pcVar2 + 0x51;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  switch(this->field_1180) {
  case CASE_1:
  case CASE_2:
  case CASE_3:
  case CASE_6:
  case CASE_8:
    pcVar2 = st::pointer_boundary_cast<char *>(&this->field_11C9);
    this->field_148F = 0;
    local_c = 8;
    do {
      if (*pcVar2 != -1) {
        memset((void *)(&this->field_0x1490 + (uint)(byte)this->field_148F * 0x9c), 0, 0x9c); /* compiler bulk-zero initialization */
        if (*pcVar2 == this->field_112D) {
          uVar3 = 0xffffffff;
          pcVar6 = &this->field_07BD;
          do {
            pcVar8 = pcVar6;
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            pcVar8 = pcVar6 + 1;
            cVar1 = *pcVar6;
            pcVar6 = pcVar8;
          } while (cVar1 != '\0');
          uVar3 = ~uVar3;
          pcVar6 = pcVar8 + -uVar3;
          pcVar8 = st::pointer_boundary_cast<char *>(&this->field_0x1490 + (uint)(byte)this->field_148F * 0x9c);
          memmove(pcVar8, pcVar6, uVar3); /* compiler REP MOVS byte copy */
        }
        (&this->field_0x14d4)[(uint)(byte)this->field_148F * 0x9c] = *pcVar2;
        (&this->field_0x14d5)[(uint)(byte)this->field_148F * 0x9c] = 1;
        (&this->field_0x14d6)[(uint)(byte)this->field_148F * 0x9c] = pcVar2[-0x22] == '\0';
        (&this->field_0x14d7)[(uint)(byte)this->field_148F * 0x9c] = 1;
        this->field_148F = this->field_148F + '\x01';
      }
      pcVar2 = pcVar2 + 0x51;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  return;
}

// 006E5150 STAppC::sub_006E5150
#line 4 "decomp/ST.exe/functions/006E5150/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0056FA60 -> 006E5150 @ 0056FAAB

   [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=1;
   incoming_ecx_receiver_callers=1; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STDiscriminatedPayloadApplier] Case-local payload view: param_1->id == 4 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STAppC_sub_006E5150_006E5150_MessagePayload_Case_4.
   The carrier ABI remains pointer:/SubmarineTitans/Recovered/STMessage. */

undefined4 __thiscall st::fn_006E5150(STAppC *this,STMessage *param_1)

{
  if (param_1->id == 4) {
    DAT_00856d74 = (param_1->arg0).u32;
    if ((DAT_00856d74 != 0) && (this->field_0024 != 0)) {
      st::fn_006E4290(0xf,5,0xf,0);
      return 0;
    }
    st::fn_006E4340(this,(int *)0xf,5,0xf,0);
  }
  else if (param_1->id == 0xf) {
    this->field_001C = 1;
    return 0;
  }
  return 0;
}

// 006E51B0 STAppC::sub_006E51B0
#line 4 "decomp/ST.exe/functions/006E51B0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 006E51B0 returns stored into /CampaignTy+0x61 @ 00593058 | 006E51B0 returns stored into
   /ChooseMapTy+0x61 @ 005B0BBB | 006E51B0 returns stored into /FSGSTy+0x61 @ 005A436B | 006E51B0
   returns stored into /MainMenuTy+0x61 @ 005B4BC9 | 006E51B0 returns stored into /PrividerTy+0x61 @
   005BC5FB | 006E51B0 returns stored into /SIDTy+0x61 @ 005D9486 | 006E51B0 returns stored into
   /SettMapTy+0x61 @ 005C8A5B | 006E51B0 returns stored into /WaitTy+0x61 @ 005EA69B

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0056A5F0 -> 006E51B0 @ 0056A74B

   [STMethodOwnerApplier] Structural method owner recovered as STAppC.
   Evidence: this_call_owners=[STAppC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=39;
   incoming_ecx_receiver_callers=2; attributed_named_callers=2; owner_evidence_coverage=adequate */

DWORD __thiscall st::fn_006E51B0(STAppC *this)

{
  return this->field_0018;
}

