#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/CGenerate.cpp

// 006948E0 CGenerate::sub_006948E0
#line 4 "decomp/ST.exe/functions/006948E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=3; incoming_this_accesses=72;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_006948E0(CGenerate *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  this->field_570F = 1;
  this->field_5713 = param_1 + 1;
  this->field_5717 = param_1;
  this->field_571B = 0;
  this->field_571F = 0;
  this->field_5723 = 0;
  this->field_5727 = 0;
  this->field_572B = 0;
  this->field_572F = 0xffffffff;
  iVar1 = param_1 + -1;
  this->field_5733 = param_1;
  this->field_5737 = iVar1;
  this->field_573B = 0;
  this->field_573F = 0;
  this->field_5743 = 0;
  this->field_5747 = 0;
  this->field_574B = 0;
  this->field_574F = 0xffffffff;
  iVar4 = -1 - param_1;
  iVar3 = -param_1;
  this->field_5753 = iVar4;
  this->field_5757 = iVar3;
  this->field_575B = 0;
  this->field_575F = 0;
  this->field_5763 = 0;
  this->field_5767 = 0;
  this->field_576B = 0;
  iVar2 = 1 - param_1;
  this->field_576F = iVar3;
  this->field_5773 = iVar2;
  this->field_57B3 = iVar4;
  this->field_5777 = 1;
  this->field_577B = 0;
  this->field_577F = 0;
  this->field_5783 = 0;
  this->field_5787 = 0;
  this->field_578B = 0;
  this->field_578F = 0xffffffff;
  this->field_5793 = 1;
  this->field_57B7 = iVar3;
  this->field_5797 = param_1 + 1;
  this->field_579B = param_1;
  this->field_579F = iVar1;
  this->field_57BF = iVar1;
  this->field_57A3 = 0;
  this->field_57DB = iVar2;
  this->field_57F3 = iVar2;
  this->field_57A7 = 0;
  this->field_57AB = 0;
  this->field_57AF = 0xffffffff;
  this->field_57BB = param_1;
  this->field_57C3 = 0;
  this->field_57C7 = 0;
  this->field_57CB = 0;
  this->field_57CF = 0xffffffff;
  this->field_57D3 = iVar4;
  this->field_57D7 = iVar3;
  this->field_57DF = 1;
  this->field_57E3 = 0;
  this->field_57E7 = 0;
  this->field_57EB = 0;
  this->field_57EF = iVar3;
  this->field_57F7 = 1;
  this->field_57FB = param_1 + 1;
  this->field_57FF = param_1;
  this->field_5803 = 0;
  this->field_5807 = 0;
  this->field_580B = 0;
  this->field_5813 = iVar4;
  this->field_5827 = param_1;
  this->field_5817 = iVar3;
  this->field_5823 = param_1 + 1;
  this->field_580F = 0xffffffff;
  this->field_581B = iVar2;
  this->field_581F = 1;
  this->field_582B = iVar1;
  return;
}

// 00694B90 CGenerate::sub_00694B90
#line 4 "decomp/ST.exe/functions/00694B90/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00694B90(CGenerate *this)

{
  if (this->field_0008 != nullptr) {
    st::fn_006F07E0((int *)&this->field_0008);
  }
  if (this->field_000C != nullptr) {
    st::fn_006EFB70((int *)&this->field_000C);
  }
  this->field_0008 = nullptr;
  this->field_000C = nullptr;
  return;
}

// 00694BE0 CGenerate::sub_00694BE0
#line 4 "decomp/ST.exe/functions/00694BE0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00694BE0(CGenerate *this)

{
  if (this->field_0010 != 0) {
    st::fn_006F07E0(st::pointer_boundary_cast<int *>(&this->field_0010));
  }
  if (this->field_0014 != 0) {
    st::fn_006EFB70(st::pointer_boundary_cast<int *>(&this->field_0014));
  }
  this->field_0010 = 0;
  this->field_0014 = 0;
  return;
}

// 00694C30 CGenerate::sub_00694C30
#line 4 "decomp/ST.exe/functions/00694C30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00694C30(CGenerate *this)

{
  if ((this->field_0010 != 0) || (this->field_0014 != 0)) {
    st::fn_00403C88(this);
  }
  this->field_0014 = this->field_000C;
  this->field_0010 = this->field_0008;
  this->field_0008 = nullptr;
  this->field_000C = nullptr;
  st::fn_004012A8(this);
  return;
}

// 00694C80 CGenerate::sub_00694C80
#line 4 "decomp/ST.exe/functions/00694C80/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00694C80(CGenerate *this)

{
  if ((this->field_0010 != 0) && (this->field_0014 != 0)) {
    st::fn_00402004(this);
    this->field_0008 = (int *)this->field_0010;
    this->field_000C = (byte *)this->field_0014;
    this->field_0010 = 0;
    this->field_0014 = 0;
  }
  return;
}

// 00694CD0 CGenerate::sub_00694CD0
#line 4 "decomp/ST.exe/functions/00694CD0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=2; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00694CD0(CGenerate *this,AnonShape_00694CD0_AC50FDB9 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  short *psVar8;
  uint local_10;
  uint local_c;
  uint local_8;

  local_8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1->field_0018 + 0xc);
  if (0 < iVar2) {
    do {
      iVar3 = param_1->field_0018;
      if (local_8 < *(uint *)(iVar3 + 0xc)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        puVar7 = (uint *)(*(int *)(iVar3 + 8) * local_8 + *(int *)(iVar3 + 0x1c));
      }
      else {
        puVar7 = nullptr;
      }
      local_c = *puVar7 >> 0x10;
      st::fn_00402CB1((short)*puVar7,local_c,(int)(puVar7[0xe] - puVar7[0xc]) / 2 + puVar7[0xc],
                         (int)(puVar7[0xf] - puVar7[0xd]) / 2 + puVar7[0xd],4,local_8 != 0,0);
      local_8 = local_8 + 1;
    } while ((int)local_8 < iVar2);
  }
  local_8 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1->field_001C + 0xc);
  iVar3 = st::machine_word_boundary_cast<int>(this->field_0008[1]);
  iVar4 = *this->field_0008;
  if (0 < iVar2) {
    do {
      iVar5 = param_1->field_001C;
      if (local_8 < *(uint *)(iVar5 + 0xc)) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        psVar8 = (short *)(*(int *)(iVar5 + 8) * local_8 + *(int *)(iVar5 + 0x1c));
      }
      else {
        psVar8 = nullptr;
      }
      if (*(short *)(DAT_00853dd4 +
                    ((int)psVar8[2] * iVar3 * iVar4 * 4 + (int)psVar8[1] * *this->field_0008 * 2 +
                    (int)*psVar8) * 2) == 0) {
        local_10 = 0;
        puVar7 = st::fn_00405A56(CASE_5A,*(int *)(psVar8 + 5),st::pointer_boundary_cast<undefined4 *>(&local_10),(int)psVar8[2],0);
        puVar7[5] = (int)*psVar8;
        puVar7[6] = (int)psVar8[1];
        cVar1 = (char)psVar8[7];
        if (cVar1 == '\0') {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          puVar7[8] = *(uint *)(&DAT_007d59e0 +
                               ((uint)(byte)(this->aggregate_001C).field_0x22d +
                               (*(int *)(psVar8 + 5) + -0xdd) * 3) * 4);
        }
        else if (cVar1 == '\x01') {
          uVar6 = st::fn_0072E6C0();
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          puVar7[8] = (((int)uVar6 % 0x1a + 0x32) *
                      *(int *)(&DAT_007d59e0 +
                              ((uint)(byte)(this->aggregate_001C).field_0x22d +
                              (*(int *)(psVar8 + 5) + -0xdd) * 3) * 4)) / 100;
        }
        else if (cVar1 == '\x02') {
          uVar6 = st::fn_0072E6C0();
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          puVar7[8] = (((int)uVar6 % 0x15 + 0x1e) *
                      *(int *)(&DAT_007d59e0 +
                              ((uint)(byte)(this->aggregate_001C).field_0x22d +
                              (*(int *)(psVar8 + 5) + -0xdd) * 3) * 4)) / 100;
        }
        else {
          uVar6 = st::fn_0072E6C0();
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          puVar7[8] = (((int)uVar6 % 0x18 + 0xf) *
                      *(int *)(&DAT_007d59e0 +
                              ((uint)(byte)(this->aggregate_001C).field_0x22d +
                              (*(int *)(psVar8 + 5) + -0xdd) * 3) * 4)) / 0x5a;
        }
        st::fn_00404822(this,(byte *)puVar7,local_10);
      }
      local_8 = local_8 + 1;
    } while ((int)local_8 < iVar2);
  }
  return;
}

// 006952B0 CGenerate::FUN_006952b0
#line 4 "decomp/ST.exe/functions/006952B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 006952B0 -> 006F13F0 @ 0069582E */

int __thiscall
st::fn_006952B0(CGenerate *this,AnonShape_006952B0_7A982E30 *param_1,byte *param_2)

{
  byte stack_bytes_neg_90[0x20]; /* exact EBP-relative stack object */
  int iVar1;
  CGenerate *this_00;
  int local_EAX_536;
  int local_EAX_1032;
  int iVar2;
  int iVar3;
  AnonShape_006952B0_7A982E30 *pAVar4;
  AnonShape_006952B0_7A982E30 *pAVar5;
  InternalExceptionFrame local_d4;
  DArrayTy *local_78;
  DArrayTy *local_74;
  DWORD local_70;
  int local_6c;
  int iStack_64;
  int iStack_60;
  DArrayTy *local_54;
  DArrayTy *local_50;
  CGenerate *local_4c;
  DWORD local_48;
  int local_44;
  int local_40;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;

  local_c = 0;
  local_4c = this;
  st::fn_0072E6B0(*(DWORD *)param_1);
  pAVar4 = param_1;
  pAVar5 = st::pointer_boundary_cast<AnonShape_006952B0_7A982E30 *>(&this->aggregate_001C);
  memmove(pAVar5, pAVar4, 0x232); /* compiler REP MOVS byte copy */
  iVar3 = st::fn_004045CA(this);
  st::fn_00404A43(this);
  if (iVar3 != 0) {
    local_10 = 1;
    local_48 = st::external_000000DA();
    local_3c = 0;
    local_70 = st::external_000000DA();
    local_28 = param_1->field_0214;
    iVar3 = st::fn_004038F0(param_1->field_020C,param_1->field_0210,local_28,
                               (uint)(byte)param_1->field_0x22d,(int *)&local_1c,&local_18);
    if (iVar3 == 0) {
      local_1c = local_28 * 3;
      local_18 = 1;
    }
    local_30 = param_1->field_0225;
    local_34 = param_1->field_0221;
    local_44 = param_1->field_0210 * param_1->field_020C;
    local_38 = param_1->field_0229;
    local_24 = local_44 / 500;
    local_2c = 5;
    local_20 = local_44 / 0x640;
    local_44 = local_44 / 3;
    local_8 = st::fn_006AAC70(local_28 * 4);
    memset(stack_bytes_neg_90, 0, 0x20); /* compiler bulk-zero initialization */
    iVar3 = 0;
    local_54 = st::fn_006AE290(nullptr,10,0x40,10);
    local_78 = st::fn_006AE290(nullptr,10,0x40,10);
    local_50 = st::fn_006AE290(nullptr,local_1c,0xf,10);
    local_74 = st::fn_006AE290(nullptr,local_1c,0xf,10);
    local_14 = 0x32;
    while ((0 < local_10 || (local_3c < local_14 + local_48))) {
      local_54->count = 0;
      local_50->count = 0;
      memset(&local_6c, 0, 0x18); /* compiler bulk-zero initialization */
      if ((this->field_0008 == nullptr) && (this->field_000C == nullptr)) {
        st::fn_004012A8(this);
      }
      st::fn_00402446(this,*this->field_0008 + -2,st::machine_word_boundary_cast<int>(this->field_0008[1] + -2),local_34,local_30,local_38,0);
      st::fn_00404A43(this);
      st::fn_00401FA0(this);
      st::fn_00404A43(this);
      st::fn_00405597(this);
      st::fn_00404A43(this);
      st::fn_00403D5F(this,0);
      st::fn_00404A43(this);
      local_EAX_536 = st::fn_004055D8(this);
      this->field_583F = local_EAX_536;
      st::fn_00404A43(this);
      st::fn_00405BC8(this,this->field_583F,local_2c);
      st::fn_00404A43(this);
      st::fn_0040547A(this,this->field_583F);
      st::fn_00404A43(this);
      st::fn_00401A14(this);
      st::fn_00404A43(this);
      st::fn_00402446(this,*this->field_0008,st::machine_word_boundary_cast<int>(this->field_0008[1]),local_34,local_30,local_38,1);
      st::fn_00404A43(this);
      st::fn_00404002(this);
      st::fn_00404A43(this);
      st::fn_0040496C(this);
      st::fn_00404A43(this);
      st::fn_004041A1(this);
      st::fn_00404A43(this);
      st::fn_00404002(this);
      st::fn_00404A43(this);
      st::fn_00403D5F(this,1);
      st::fn_00404A43(this);
      st::fn_00404DF4(this);
      st::fn_00404A43(this);
      st::fn_004041A1(this);
      st::fn_00404A43(this);
      st::fn_00404002(this);
      st::fn_00404A43(this);
      st::fn_00403D5F(this,1);
      st::fn_00404A43(this);
      st::fn_00405975(this);
      st::fn_00404A43(this);
      st::fn_004010FA(this,local_24,local_20);
      st::fn_00404A43(this);
      st::fn_006F0C00((short *)this->field_000C,st::pointer_boundary_cast<int *>(this->field_0008));
      st::fn_00404A43(this);
      st::fn_00402BD5(this,*this->field_0008 << 1,st::machine_word_boundary_cast<int>(this->field_0008[1] << 1),local_34 + -1);
      st::fn_00404A43(this);
      _DAT_00853dd0 = st::fn_0072E6C0();
      iStack_60 = st::fn_00405335(this,local_28,10,10,4,0x23,(int)local_8,
                               (RecoveredRecord_CGenerate_0069BDC0 *)&local_6c);
      st::fn_00404A43(this);
      _DAT_00853dd0 = st::fn_0072E6C0();
      iStack_64 = st::fn_00403FF3(this,*this->field_0008 << 1,st::machine_word_boundary_cast<int>(this->field_0008[1] << 1),local_1c,
                               local_18,local_28,(int)local_8,local_34 + -1,
                               (AnonShape_006991C0_D95B9E4A *)&local_6c);
      st::fn_00404A43(this);
      _DAT_00853dd0 = st::fn_0072E6C0();
      st::fn_00401A14(this);
      st::fn_00404A43(this);
      local_EAX_1032 =
           st::fn_0040541B((AnonShape_0052EFB0_8161B92D *)&local_6c,
                              (RecoveredRecord_CGenerate_00695180 *)stack_bytes_neg_90,(int)&local_38,
                              local_c);
      if (local_EAX_1032 == 0) {
        st::fn_00402004(this);
      }
      else {
        local_c = 1;
        st::fn_0040430E(st::pointer_boundary_cast<undefined4 *>(&local_6c),(undefined4 *)stack_bytes_neg_90);
        st::fn_0040191F(this);
      }
      local_3c = st::external_000000DA();
      local_10 = local_10 + -1;
    }
    if (local_c == 1) {
      st::fn_00403521(this);
      DAT_00853dd4 = st::machine_word_boundary_cast<undefined4>(st::fn_006AAC70(st::machine_word_boundary_cast<uint>(this->field_0008[1] * *this->field_0008 * 0x28)));
      st::fn_00401C8A((short *)this->field_000C,st::pointer_boundary_cast<undefined4 *>(DAT_00853dd4),(short *)0x1);
      _DAT_00853dd0 = st::fn_0072E6C0();
      st::fn_00402D88(this,(AnonShape_00694CD0_AC50FDB9 *)stack_bytes_neg_90);
      _DAT_00853dd0 = st::fn_0072E6C0();
      st::fn_004050F6(this);
      st::fn_00404A43(this);
      _DAT_00853dd0 = st::fn_0072E6C0();
      st::fn_004030DA((int *)this);
      _DAT_00853dd0 = st::fn_0072E6C0();
      iVar3 = *this->field_0008;
      iVar1 = st::machine_word_boundary_cast<int>(this->field_0008[1]);
      st::fn_00403D91(this,iVar3 * 2,iVar1 * 2,local_34,(iVar3 * iVar1 * 4) / 100);
      local_40 = st::fn_00404417(this);
      st::fn_00404A43(this);
      if (DAT_00853dd4 != nullptr) {
        st::fn_006AB060(&DAT_00853dd4);
      }
      local_d4.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_d4;
      iVar2 = st::fn_0072D7F0(local_d4.jumpBuffer,0);
      this_00 = local_4c;
      if (iVar2 == 0) {
        if (param_2 != nullptr) {
          st::fn_006F13F0(st::pointer_boundary_cast<cMf32 *>(local_4c->field_0018),0xc,PTR_s_GENERATE_RND_0079d774,(byte *)param_1,0x232,
                        nullptr,'\0',nullptr);
          st::fn_006F13F0(st::pointer_boundary_cast<cMf32 *>(this_00->field_0018),0xc,PTR_s_INTERFACE_RND_0079d778,param_2,0xd,
                        nullptr,'\0',nullptr);
          st::fn_00404A43(this_00);
        }
        g_currentExceptionFrame = local_d4.previous;
      }
      else {
        g_currentExceptionFrame = local_d4.previous;
      }
    }
    else {
      local_40 = 0;
    }
    if (local_8 != nullptr) {
      st::fn_006AB060(&local_8);
    }
    st::fn_006AE110(local_54);
    st::fn_006AE110(local_78);
    st::fn_006AE110(local_50);
    st::fn_006AE110(local_74);
    st::external_000000DA();
    return local_40;
  }
  return 0;
}

// 00695C10 CGenerate::sub_00695C10
#line 4 "decomp/ST.exe/functions/00695C10/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00696810 -> 00695C10 @ 006968C4; zero-filled partial register load at 00696853 */

uint __thiscall
st::fn_00695C10
          (CGenerate *this,uint param_1,undefined4 param_2,int param_3,undefined4 param_4,
          undefined4 param_5)

{
  CGenerate_field_5853DArray *pCVar1;
  uint uVar2;
  uint local_24;
  undefined1 local_20;
  undefined4 local_1f;
  undefined4 local_1b;
  undefined4 local_17;

  memset(&local_24, 0, 0x1d); /* compiler bulk-zero initialization */
  local_1f = param_2;
  local_24 = param_1;
  if (param_3 < 0) {
    param_3 = 0;
  }
  local_20 = (undefined1)param_3;
  local_1b = param_4;
  local_17 = param_5;
  if (this->field_5853 == nullptr) {
    pCVar1 = (CGenerate_field_5853DArray *)
             st::fn_006AE290(nullptr,10,0x1d,10);
    this->field_5853 = pCVar1;
  }
  if (this->field_5853 != nullptr) {
    uVar2 = st::fn_006AE1C0((DArrayTy *)this->field_5853,&local_24);
    return uVar2;
  }
  return 0xffffffff;
}

// 00695EB0 CGenerate::sub_00695EB0
#line 4 "decomp/ST.exe/functions/00695EB0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=2; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00695EB0(CGenerate *this)

{
  if (this->field_584B != nullptr) {
    st::fn_006AB060(&this->field_584B);
  }
  this->field_584B = nullptr;
  if (this->field_584F != nullptr) {
    st::fn_006AB060(&this->field_584F);
  }
  this->field_584F = nullptr;
  st::fn_004041A1(this);
  return;
}

// 00695F20 CGenerate::sub_00695F20
#line 4 "decomp/ST.exe/functions/00695F20/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_00695F20(CGenerate *this)

{
  dword dVar1;
  uint uVar2;

  if (this->field_5853 != nullptr) {
    dVar1 = this->field_5853->count;
    uVar2 = 0;
    if (0 < (int)dVar1) {
      do {
        st::fn_00405286(this,uVar2);
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)dVar1);
    }
    st::fn_006AE110((DArrayTy *)this->field_5853);
    this->field_5853 = nullptr;
  }
  return;
}

// 00695F70 CGenerate::sub_00695F70
#line 4 "decomp/ST.exe/functions/00695F70/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=3; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

uint __thiscall st::fn_00695F70(CGenerate *this,uint param_1,int param_2,int param_3)

{
  CGenerate_field_5853DArray *pCVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  int *piVar4;
  undefined2 local_c;
  int iStack_a;

  pCVar1 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(this->field_5853);
  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
  if (((pCVar1 == nullptr) || (pCVar1->count <= param_1)) ||
     (piVar4 = (int *)((int)&pCVar1->data->field_0000 + pCVar1->elementSize * param_1),
     piVar4 == nullptr)) {
LAB_00696007:
    uVar3 = 0xffffffff;
  }
  else {
    if (STField<int>(piVar4,0x15) == 0) {
      pDVar2 = st::fn_006AE290(nullptr,10,6,10);
      STField<DArrayTy *>(piVar4,0x15) = pDVar2;
      if (pDVar2 == nullptr) goto LAB_00696007;
    }
    local_c = 0;
    iStack_a = param_2;
    uVar3 = st::fn_006AE1C0(STField<DArrayTy *>(piVar4,0x15),&local_c);
    if (-1 < (int)uVar3) {
      STField<uint>(piVar4,0x11) = uVar3 + 1;
      if (this->field_584F != nullptr) {
        this->field_584F[this->field_582F * param_3 + param_2] = (ushort)param_1;
        return uVar3;
      }
    }
  }
  return uVar3;
}

// 00696400 CGenerate::sub_00696400
#line 4 "decomp/ST.exe/functions/00696400/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=3; incoming_this_accesses=5;
   incoming_edx_uses=1; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=3; owner_evidence_coverage=adequate */

int __thiscall st::fn_00696400(CGenerate *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int local_8;

  iVar1 = this->field_5833;
  local_8 = 0;
  if (iVar1 != 0) {
    for (iVar3 = param_1 / iVar1 + -1; iVar3 < param_1 / iVar1 + 2; iVar3 = iVar3 + 1) {
      if ((-1 < iVar3) && (iVar3 < this->field_5837)) {
        iVar2 = param_1 % iVar1 + -1;
        iVar4 = param_1 % iVar1 + 2;
        if (iVar2 < iVar4) {
          iVar5 = iVar3 * this->field_5833 + iVar2;
          piVar6 = (int *)(param_2 + local_8 * 4);
          do {
            if ((((-1 < iVar2) && (iVar2 < this->field_5833)) && (iVar5 != param_1)) &&
               (iVar5 < (int)this->field_582F)) {
              *piVar6 = iVar5;
              local_8 = local_8 + 1;
              piVar6 = piVar6 + 1;
            }
            iVar2 = iVar2 + 1;
            iVar5 = iVar5 + 1;
          } while (iVar2 < iVar4);
        }
      }
    }
    return local_8;
  }
  return 0;
}

// 006964F0 CGenerate::sub_006964F0
#line 4 "decomp/ST.exe/functions/006964F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006964F0(CGenerate *this,uint param_1,int param_2)

{
  CGenerate_field_5853DArray *pCVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  int *piVar5;
  int local_54 [9];
  undefined1 local_30 [4];
  uint local_2c;
  int local_28;
  ushort *local_24;
  int local_20;
  int *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;

  local_8 = 0;
  pCVar1 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(this->field_5853);
  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
  if (((pCVar1 != nullptr) && (param_1 < pCVar1->count)) &&
     (piVar5 = (int *)((int)&pCVar1->data->field_0000 + pCVar1->elementSize * param_1),
     piVar5 != nullptr)) {
    if (param_2 != 0) {
      local_8 = *piVar5;
    }
    local_24 = this->field_584F + this->field_582F * local_8;
    iVar2 = *(int *)(STField<int>(piVar5,0x15) + 0xc);
    STField<int>(piVar5,0x11) = iVar2;
    local_1c = piVar5;
    if (iVar2 == 0) {
      st::fn_004023D3(this,param_1,param_2,-1);
    }
    else {
      st::fn_0040564B(this,this->field_5833);
      iVar2 = STField<int>(piVar5,0x15);
      local_18 = 0;
      uVar3 = *(uint *)(iVar2 + 0xc);
      if (0 < (int)uVar3) {
        do {
          if (local_18 < uVar3) {
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            puVar4 = (undefined1 *)(*(int *)(iVar2 + 8) * local_18 + *(int *)(iVar2 + 0x1c));
          }
          else {
            puVar4 = nullptr;
          }
          local_28 = st::fn_0040208B(this,*(int *)(puVar4 + 2),(int)local_54);
          local_14 = 0;
          local_10 = 0;
          if (0 < local_28) {
            local_c = local_54;
            local_20 = local_28;
            do {
              iVar2 = *local_c;
              if ((int)(short)local_24[iVar2] == param_1) {
                local_14 = local_14 + 1;
                if (param_2 != 0) {
                  st::fn_0040414C(st::pointer_boundary_cast<int *>(this->field_0008),iVar2 % this->field_5833,
                                     iVar2 / this->field_5833,local_8,(int)local_30);
                  uVar3 = local_2c & 0xf;
                  piVar5 = local_1c;
                  if (((local_2c & 0x2000) == 0x2000) &&
                     (((8 < uVar3 && (uVar3 < 0xf)) || (uVar3 == 0)))) {
                    local_10 = local_10 + 1;
                  }
                }
              }
              else {
                st::fn_0040138E(this,param_1,(int)(short)local_24[iVar2]);
              }
              local_c = local_c + 1;
              local_20 = local_20 + -1;
            } while (local_20 != 0);
            local_20 = 0;
          }
          *puVar4 = 0;
          if (((local_14 == local_28) && (local_28 == 8)) &&
             ((*puVar4 = 1, 3 < local_10 && (*puVar4 = 3, local_10 == 8)))) {
            *puVar4 = 7;
          }
          iVar2 = STField<int>(piVar5,0x15);
          local_18 = local_18 + 1;
          uVar3 = *(uint *)(iVar2 + 0xc);
        } while ((int)local_18 < (int)uVar3);
        return;
      }
    }
  }
  return;
}

// 00696740 CGenerate::sub_00696740
#line 4 "decomp/ST.exe/functions/00696740/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=3; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00696740(CGenerate *this,int param_1)

{
  dword dVar1;
  uint uVar2;

  if (this->field_5853 != nullptr) {
    dVar1 = this->field_5853->count;
    uVar2 = 0;
    if (0 < (int)dVar1) {
      do {
        st::fn_00404007(this,uVar2,param_1);
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < (int)dVar1);
    }
  }
  return;
}

// 00696790 CGenerate::sub_00696790
#line 4 "decomp/ST.exe/functions/00696790/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00696790(CGenerate *this)

{
  uint uVar2;
  uint uVar1;
  uint uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;

  iVar4 = 0;
  if (0 < (int)this->field_582F) {
    do {
      uVar1 = st::fn_0072E6C0();
      iVar5 = iVar4 + 1;
      this->field_584B[iVar4] = (byte)((int)uVar1 % this->field_583B);
      iVar4 = iVar5;
    } while (iVar5 < (int)this->field_582F);
  }
  uVar2 = this->field_582F;
  puVar6 = st::pointer_boundary_cast<ushort *>(this->field_584F);
  for (uVar3 = (uVar2 & 0x7fffffff) >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
    puVar6[0] = 0xffff;
    puVar6[1] = 0xffff;
    puVar6 = puVar6 + 2;
  }
  for (iVar4 = (uVar2 & 1) << 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (ushort *)((int)puVar6 + 1);
  }
  return;
}

// 00696810 CGenerate::sub_00696810
#line 4 "decomp/ST.exe/functions/00696810/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00696810(CGenerate *this)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_38 [9];
  int local_14;
  uint local_10;
  int local_c;
  int local_8;

  uVar4 = 0xffffffff;
  st::fn_0040564B(this,this->field_5833);
  local_c = 0;
  if (0 < (int)this->field_582F) {
    do {
      iVar3 = local_c;
      local_14 = st::fn_0040208B(this,local_c,(int)local_38);
      pbVar1 = st::pointer_boundary_cast<byte *>(this->field_584B + iVar3);
      local_10 = (uint)*pbVar1;
      local_8 = 0;
      if (0 < local_14) {
        piVar2 = local_38;
        do {
          uVar4 = (uint)(short)this->field_584F[*piVar2];
          if (-1 < (int)uVar4) {
            iVar3 = local_c;
            if ((uint)this->field_584B[*piVar2] == (uint)*pbVar1) break;
            uVar4 = 0xffffffff;
          }
          piVar2 = piVar2 + 1;
          local_8 = local_8 + 1;
        } while (local_8 < local_14);
      }
      if ((int)uVar4 < 0) {
        uVar7 = 0;
        uVar6 = 0;
        iVar5 = 0;
        uVar4 = st::fn_0072E6C0();
        uVar4 = st::fn_00401A7D(this,local_10,(int)uVar4 % this->field_5847 + 1,iVar5,uVar6,uVar7);
        if (-1 < (int)uVar4) goto LAB_006968cf;
      }
      else {
LAB_006968cf:
        st::fn_00404156(this,uVar4,iVar3,0);
      }
      local_c = iVar3 + 1;
    } while (local_c < (int)this->field_582F);
  }
  return;
}

// 00696940 CGenerate::sub_00696940
#line 4 "decomp/ST.exe/functions/00696940/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00696940(CGenerate *this,int param_1)

{
  dword dVar1;
  CGenerate_field_5853DArray *pCVar2;
  uint local_EAX_111;
  int iVar3;
  int iVar4;
  uint uVar3;
  uint uVar5;
  uint local_EAX_455;
  uint local_EAX_565;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint local_14;
  uint local_c;
  uint local_8;

  local_14 = 1;
  if (this->field_5853 != nullptr) {
    dVar1 = this->field_5853->count;
    local_c = 0;
    if (0 < (int)dVar1) {
      do {
        pCVar2 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(this->field_5853);
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if (((local_c < pCVar2->count) &&
            (piVar7 = (int *)((int)&pCVar2->data->field_0000 + pCVar2->elementSize * local_c),
            piVar7 != nullptr)) && (*piVar7 != param_1)) {
          if (STField<int>(piVar7,0x15) != 0) {
            local_EAX_111 = st::fn_0072E6C0();
            local_14 = (int)local_EAX_111 % 6 + 1;
          }
          iVar3 = STField<int>(piVar7,0x15);
          local_8 = 0;
          uVar5 = *(uint *)(iVar3 + 0xc);
          if (0 < (int)uVar5) {
            do {
              if (local_8 < uVar5) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar3 = *(int *)(iVar3 + 8) * local_8 + *(int *)(iVar3 + 0x1c);
              }
              else {
                iVar3 = 0;
              }
              iVar4 = *(int *)(iVar3 + 2) / this->field_5833;
              uVar6 = *(int *)(iVar3 + 2) % this->field_5833;
              uVar3 = st::fn_0072E6C0();
              uVar5 = uVar3 & 0x80000003;
              if ((int)uVar5 < 0) {
                uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
              }
              if (((uVar5 == 1) && (uVar6 != 0)) &&
                 ((iVar4 != 0 && ((uVar6 != this->field_5833 && (iVar4 != this->field_5837)))))) {
                st::fn_0040204F(uVar6,iVar4,0,1,0,1,local_14);
              }
              local_8 = local_8 + 1;
              iVar3 = STField<int>(piVar7,0x15);
              uVar5 = *(uint *)(iVar3 + 0xc);
            } while ((int)local_8 < (int)uVar5);
          }
        }
        local_c = local_c + 1;
      } while ((int)local_c < (int)dVar1);
    }
    local_c = 0;
    if (0 < (int)dVar1) {
      do {
        pCVar2 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(this->field_5853);
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if ((((local_c < pCVar2->count) &&
             (piVar7 = (int *)((int)&pCVar2->data->field_0000 + pCVar2->elementSize * local_c),
             piVar7 != nullptr)) && (*piVar7 == param_1)) &&
           (iVar3 = STField<int>(piVar7,0x15), iVar3 != 0)) {
          uVar5 = *(uint *)(iVar3 + 0xc);
          local_8 = 0;
          if (0 < (int)uVar5) {
            do {
              if (local_8 < uVar5) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                iVar3 = *(int *)(iVar3 + 8) * local_8 + *(int *)(iVar3 + 0x1c);
              }
              else {
                iVar3 = 0;
              }
              iVar3 = *(int *)(iVar3 + 2);
              iVar4 = this->field_5833;
              local_14 = 0;
              if ((((int)STField<uint>(piVar7,5) < 1) || (2 < (int)STField<uint>(piVar7,5)))
                 || (local_EAX_455 = st::fn_0072E6C0(), (int)local_EAX_455 % 3 != 0))
              {
                if (STField<uint>(piVar7,5) != 1) goto LAB_00696b1f;
                local_EAX_565 = st::fn_0072E6C0();
                uVar5 = local_EAX_565 & 0x80000007;
                if ((int)uVar5 < 0) {
                  uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
                }
                uVar6 = STField<uint>(piVar7,5);
                uVar5 = uVar5 + 1;
                iVar8 = 1;
                local_14 = 0;
              }
              else {
                local_14 = 1;
LAB_00696b1f:
                uVar6 = STField<uint>(piVar7,5);
                uVar5 = 1;
                iVar8 = 0xff;
              }
              st::fn_0040204F(iVar3 % iVar4 + 1,iVar3 / iVar4 + 1,local_14,uVar6,iVar8,1,uVar5);
              iVar3 = STField<int>(piVar7,0x15);
              local_8 = local_8 + 1;
              uVar5 = *(uint *)(iVar3 + 0xc);
            } while ((int)local_8 < (int)uVar5);
          }
        }
        local_c = local_c + 1;
      } while ((int)local_c < (int)dVar1);
    }
  }
  return;
}

// 00696DC0 CGenerate::sub_00696DC0
#line 4 "decomp/ST.exe/functions/00696DC0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00696DC0(CGenerate *this,int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  CGenerate_field_5853DArray *pCVar3;
  int iVar4;
  uint uVar5;
  AnonShape_00696D00_CB3CB395 *pAVar6;
  int iVar7;
  bool bVar8;

  pCVar3 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(this->field_5853);
  if (pCVar3 == nullptr) {
    return;
  }
  uVar2 = pCVar3->count;
  iVar7 = 0;
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar8 = uVar2 != 0;
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if ((((bVar8) &&
           (piVar1 = (int *)((int)&pCVar3->data->field_0000 + pCVar3->elementSize * uVar5),
           piVar1 != nullptr)) && (STField<int>(piVar1,0x11) <= param_2)) &&
         (*piVar1 == param_1)) {
        iVar7 = iVar7 + 1;
      }
      uVar5 = uVar5 + 1;
      bVar8 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
    iVar4 = 4;
    if (3 < iVar7) goto LAB_00696e1a;
  }
  iVar4 = 1;
LAB_00696e1a:
  uVar5 = 0;
  if (0 < (int)uVar2) {
    bVar8 = uVar2 != 0;
    do {
      /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
      if (((bVar8) &&
          (pAVar6 = (AnonShape_00696D00_CB3CB395 *)
                    ((int)&pCVar3->data->field_0000 + pCVar3->elementSize * uVar5),
          pAVar6 != nullptr)) &&
         ((*(int *)&pAVar6->field_0x11 <= param_2 &&
          ((*(int *)pAVar6 == param_1 &&
           (uVar2 = st::fn_0072E6C0(), (int)uVar2 % (iVar4 + 1) != 0)))))) {
        st::fn_00401406(this,pAVar6,uVar5);
      }
      uVar5 = uVar5 + 1;
      pCVar3 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(this->field_5853);
      bVar8 = uVar5 < pCVar3->count;
    } while ((int)uVar5 < (int)pCVar3->count);
  }
  return;
}

// 006971B0 CGenerate::sub_006971B0
#line 4 "decomp/ST.exe/functions/006971B0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_006971B0(CGenerate *this)

{
  alignas(4) byte st_stack_frame[88];

  dword dVar1;
  CGenerate_field_5853DArray *pCVar2;
  int iVar3;
  CGenerate_field_5853Element *element_5853;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int local_38;
  int local_20;

  local_20 = 0;
  uVar5 = this->field_583B;
  iVar3 = uVar5 * -4;
  if ((this->field_5853 != nullptr) &&
     ((st_stack_frame + 4) != (undefined1 *)(uVar5 * 4))) {
    puVar10 = (undefined4 *)((st_stack_frame + 4) + iVar3);
    for (uVar5 = uVar5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    dVar1 = this->field_5853->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      do {
        pCVar2 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(this->field_5853);
        if (uVar5 < pCVar2->count) {
          element_5853 = DArrayAt<CGenerate_field_5853Element>(pCVar2, uVar5);
        }
        else {
          element_5853 = nullptr;
        }
        if (element_5853 != nullptr) {
          *(int *)((st_stack_frame + 4) + element_5853->field_0000 * 4 + iVar3) =
               *(int *)((st_stack_frame + 4) + element_5853->field_0000 * 4 + iVar3) + element_5853->field_0011;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar1);
    }
    local_38 = -1;
    iVar7 = 0;
    iVar9 = 0;
    iVar6 = -1;
    if (0 < this->field_583B) {
      do {
        iVar6 = (*(int *)((st_stack_frame + 4) + iVar9 * 4 + iVar3) * 100) / (int)this->field_582F;
        if (iVar9 == 0) {
          uVar5 = iVar6 - this->field_5843;
          uVar8 = (int)uVar5 >> 0x1f;
          iVar7 = (uVar5 ^ uVar8) - uVar8;
          local_38 = iVar9;
        }
        else {
          uVar5 = iVar6 - this->field_5843;
          uVar8 = (int)uVar5 >> 0x1f;
          iVar6 = (uVar5 ^ uVar8) - uVar8;
          if (iVar6 < iVar7) {
            iVar7 = iVar6;
            local_38 = iVar9;
          }
        }
        iVar9 = iVar9 + 1;
        iVar6 = local_38;
      } while (iVar9 < this->field_583B);
    }
    if (-1 < iVar6) {
      local_20 = iVar6;
    }
  }
  return local_20;
}

// 00697390 CGenerate::sub_00697390
#line 4 "decomp/ST.exe/functions/00697390/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=3; incoming_this_accesses=12;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_00697390(CGenerate *this)

{
  int iVar2;
  int iVar1;
  uint uVar3;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort *puVar6;
  byte *pbVar7;
  bool bVar8;
  uint uVar9;
  int local_60 [9];
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int *local_c;
  int local_8;

  puVar6 = st::pointer_boundary_cast<ushort *>(this->field_584F);
  for (iVar3 = (this->field_582F & 0xfffffff) << 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    puVar6[0] = 0xffff;
    puVar6[1] = 0xffff;
    puVar6 = puVar6 + 2;
  }
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined1 *)puVar6 = 0xff;
    puVar6 = (ushort *)((int)puVar6 + 1);
  }
  uVar5 = this->field_582F;
  pbVar7 = st::pointer_boundary_cast<byte *>(this->field_584B);
  memset(pbVar7, 0, uVar5); /* compiler bulk-zero initialization */
  st::fn_0040564B(this,this->field_5833);
  uVar5 = 0;
  do {
    local_10 = 0;
    if (0 < (int)this->field_582F) {
      do {
        iVar3 = local_10;
        local_18 = st::fn_0040208B(this,local_10,(int)local_60);
        local_20 = iVar3 % this->field_5833;
        local_1c = iVar3 / this->field_5833;
        local_8 = 0;
        local_14 = 0;
        if (local_18 < 1) {
LAB_00697505:
          iVar1 = st::fn_004046E7(this,local_20,local_1c,uVar5,(int *)(local_3c + 3),
                               (int *)(local_3c + 2),&local_2c);
          uVar3 = st::fn_00401A7D(this,uVar5,local_3c[2],local_3c[3],iVar1,local_2c);
          st::fn_00404156(this,uVar3,iVar3,uVar5);
        }
        else {
          local_c = local_60;
          do {
            iVar3 = *local_c;
            local_28 = (uint)(short)this->field_584F[uVar5 * this->field_582F + iVar3];
            if (-1 < (int)local_28) {
              local_24 = iVar3 % this->field_5833;
              iVar2 = st::fn_0040526D(st::pointer_boundary_cast<int *>(this->field_0008),local_20,local_1c,local_24,
                                         iVar3 / this->field_5833,uVar5,0);
              iVar3 = local_8;
              if (iVar2 != 0) {
                bVar8 = local_8 == 1;
                local_3c[local_8] = local_28;
                if (bVar8) {
                  if (local_3c[0] != local_3c[1]) {
                    local_8 = 2;
                    goto LAB_006974d2;
                  }
                }
                else {
                  local_8 = iVar3 + 1;
                  if (local_8 == 2) break;
                }
              }
            }
            local_14 = local_14 + 1;
            local_c = local_c + 1;
          } while (local_14 < local_18);
          iVar3 = local_10;
          if (local_8 == 0) goto LAB_00697505;
LAB_006974d2:
          iVar3 = local_10;
          st::fn_00404156(this,local_3c[0],local_10,uVar5);
          if ((local_8 == 2) && (local_3c[0] != local_3c[1])) {
            uVar4 = local_3c[1];
            uVar9 = local_3c[0];
            if ((int)local_3c[0] < (int)local_3c[1]) {
              uVar4 = local_3c[0];
              uVar9 = local_3c[1];
            }
            st::fn_004026A3(this,uVar4,uVar9,uVar5,1);
          }
        }
        local_10 = iVar3 + 1;
      } while (local_10 < (int)this->field_582F);
    }
    uVar5 = uVar5 + 1;
    if (5 < (int)uVar5) {
      return;
    }
  } while( true );
}

// 006975F0 CGenerate::sub_006975F0
#line 4 "decomp/ST.exe/functions/006975F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006975F0(CGenerate *this)

{
  CGenerate_field_5853DArray *pCVar1;
  uint uVar2;
  int iVar3;
  CGenerate_field_5853Element *element_5853;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  int local_20;
  uint local_18;
  CGenerate_field_5853Element *element_5853_2;
  int local_8;

  pCVar1 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(this->field_5853);
  if (pCVar1 != nullptr) {
    uVar2 = pCVar1->count;
    iVar8 = 0;
    uVar9 = 0;
    local_8 = 0;
    if (0 < (int)uVar2) {
      do {
        if (uVar9 < uVar2) {
          element_5853 = DArrayAt<CGenerate_field_5853Element>(pCVar1, uVar9);
        }
        else {
          element_5853 = nullptr;
        }
        iVar5 = element_5853->field_0000;
        if ((((iVar5 < 2) && ((char)element_5853[1] == '\0')) && (0 < (int)element_5853->field_0005)) &&
           (((element_5853->field_000D == 1 && (iVar5 == 0)) ||
            ((element_5853->field_000D == 2 && (iVar5 == 1)))))) {
          if ((element_5853 != nullptr) && (element_5853->field_0011 < 10)) {
            iVar8 = iVar8 + 1;
          }
          local_8 = local_8 + element_5853->field_0011;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar2);
    }
    iVar5 = (local_8 * 100) / (int)this->field_582F;
    if (this->field_5843 < iVar5) {
      local_20 = 9;
      do {
        uVar9 = uVar2;
        if (0x117 < local_20) {
          return;
        }
        while ((uVar9 = uVar9 - 1, -1 < (int)uVar9 &&
               (iVar5 = (local_8 * 100) / (int)this->field_582F, this->field_5843 < iVar5))) {
          pCVar1 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(this->field_5853);
          if (uVar9 < pCVar1->count) {
            element_5853_2 = DArrayAt<CGenerate_field_5853Element>(pCVar1, uVar9);
          }
          else {
            element_5853_2 = nullptr;
          }
          if (((((char)element_5853_2[1] == '\0') && (0 < (int)element_5853_2->field_0005)) &&
              (((element_5853_2->field_000D == 1 && (element_5853_2->field_0000 == 0)) ||
               ((element_5853_2->field_000D == 2 && (element_5853_2->field_0000 == 1)))))) &&
             ((element_5853_2 != nullptr &&
              (((element_5853_2->field_0011 <= local_20 &&
                (uVar6 = st::fn_0072E6C0(),
                (int)uVar6 % (int)(((iVar8 < 4) - 1 & 3) + 2) != 0)) &&
               (iVar7 = element_5853_2->field_0015, iVar7 != 0)))))) {
            local_18 = 0;
            if (0 < *(int *)(iVar7 + 0xc)) {
              bVar10 = *(int *)(iVar7 + 0xc) != 0;
              do {
                if (bVar10) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  iVar7 = *(int *)(iVar7 + 8) * local_18 + *(int *)(iVar7 + 0x1c);
                }
                else {
                  iVar7 = 0;
                }
                if (*(char *)(iVar7 + 1) == '\0') {
                  iVar3 = this->field_5833;
                  *(undefined1 *)(iVar7 + 1) = 1;
                  st::fn_00405731(this,*(int *)(iVar7 + 2) % iVar3,*(int *)(iVar7 + 2) / iVar3,
                               (uint)(element_5853_2->field_000D != 1),-1);
                  local_8 = local_8 + -1;
                }
                iVar7 = element_5853_2->field_0015;
                local_18 = local_18 + 1;
                bVar10 = local_18 < *(uint *)(iVar7 + 0xc);
              } while ((int)local_18 < (int)*(uint *)(iVar7 + 0xc));
            }
          }
        }
        local_20 = local_20 + 9;
      } while (this->field_5843 < iVar5);
    }
  }
  return;
}

// 006978C0 CGenerate::sub_006978C0
#line 4 "decomp/ST.exe/functions/006978C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __thiscall st::fn_006978C0(CGenerate *this)

{
  dword dVar1;
  CGenerate_field_5853DArray *pCVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  CGenerate_field_5853DArray *pCVar7;
  CGenerate_field_5853DArray *pCVar8;
  CGenerate_field_5853Element *element_5853;
  uint uVar10;
  int iVar11;
  bool bVar12;
  uint local_18;
  uint local_10;
  CGenerate_field_5853Element *element_5853_2;

  pCVar7 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(this->field_5853);
  if (pCVar7 != nullptr) {
    dVar1 = pCVar7->count;
    local_18 = 0;
    if (0 < (int)dVar1) {
      do {
        pCVar7 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(this->field_5853);
        if (local_18 < pCVar7->count) {
          element_5853_2 = DArrayAt<CGenerate_field_5853Element>(pCVar7, local_18);
        }
        else {
          element_5853_2 = nullptr;
        }
        pCVar2 = (CGenerate_field_5853DArray *)element_5853_2->field_0000;
        pCVar7 = pCVar2;
        if ((((0 < (int)pCVar2) && ((int)pCVar2 <= this->field_5847 + -1)) &&
            (element_5853_2->field_0009 == 4)) && (0xb < element_5853_2->field_0011)) {
          iVar3 = element_5853_2->field_0015;
          iVar11 = 0;
          if (iVar3 != 0) {
            uVar6 = *(uint *)(iVar3 + 0xc);
            uVar10 = 0;
            if (0 < (int)uVar6) {
              bVar12 = uVar6 != 0;
              do {
                if (bVar12) {
                  pbVar5 = (byte *)(*(int *)(iVar3 + 8) * uVar10 + *(int *)(iVar3 + 0x1c));
                }
                else {
                  pbVar5 = nullptr;
                }
                if ((pbVar5[1] == 0) && ((*pbVar5 & 1) != 0)) {
                  iVar11 = iVar11 + 1;
                }
                uVar10 = uVar10 + 1;
                bVar12 = uVar10 < uVar6;
              } while ((int)uVar10 < (int)uVar6);
            }
          }
          uVar6 = st::fn_0072E6C0();
          pCVar7 = (CGenerate_field_5853DArray *)(uVar6 & 0x80000001);
          if ((int)pCVar7 < 0) {
            pCVar7 = (CGenerate_field_5853DArray *)
                     (((uint)((int)&pCVar7[-1].data + 3U) | 0xfffffffe) + 1);
          }
          pCVar8 = (CGenerate_field_5853DArray *)((int)&pCVar7->flags + 1);
          if (this->field_5847 < (int)&pCVar8->flags + element_5853_2->field_0000) {
            pCVar8 = pCVar7;
          }
          pCVar7 = pCVar8;
          if ((pCVar8 != nullptr) && (0 < iVar11)) {
            uVar6 = st::fn_0072E6C0();
            pCVar7 = (CGenerate_field_5853DArray *)((int)uVar6 / (iVar11 + 1));
            if (-1 < (int)uVar6 % (iVar11 + 1)) {
              pCVar7 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(element_5853_2->field_0015);
              local_10 = 0;
              if (0 < (int)pCVar7->count) {
                bVar12 = pCVar7->count != 0;
                do {
                  if (bVar12) {
                    element_5853 = DArrayAt<CGenerate_field_5853Element>(pCVar7, local_10);
                  }
                  else {
                    element_5853 = nullptr;
                  }
                  if (STField<byte>(element_5853,1) == 0) {
                    iVar3 = STField<int>(element_5853,2);
                    iVar4 = this->field_5833;
                    if (((element_5853->field_0000 & 2) != 0) &&
                       (uVar6 = st::fn_0072E6C0(),
                       (int)uVar6 % (int)(((iVar11 < 3) - 1 & 2) + 2) == 1)) {
                      st::fn_0040204F(iVar3 % iVar4,iVar3 / iVar4,(int)((int)&pCVar2->flags + 1),
                                         (uint)pCVar8,0xff,1,1);
                    }
                  }
                  pCVar7 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(element_5853_2->field_0015);
                  local_10 = local_10 + 1;
                  bVar12 = local_10 < pCVar7->count;
                } while ((int)local_10 < (int)pCVar7->count);
              }
            }
          }
        }
        local_18 = local_18 + 1;
      } while ((int)local_18 < (int)dVar1);
    }
  }
  return (uint)pCVar7;
}

// 00697C50 CGenerate::sub_00697C50
#line 4 "decomp/ST.exe/functions/00697C50/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=4; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_00697C50(CGenerate *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_10 [8];
  undefined4 local_8;

  local_8 = 0;
  if ((((param_1 < 1) || (param_2 < 0)) || (param_3 < 0)) ||
     ((this->field_5833 <= param_2 || (this->field_5837 <= param_3)))) {
    uVar2 = 0;
  }
  else {
    st::fn_0040414C(st::pointer_boundary_cast<int *>(this->field_0008),param_2,param_3,param_1,(int)local_10);
    iVar1 = st::fn_004019B0(st::pointer_boundary_cast<int *>(this->field_0008),param_2,param_3,param_1,0xff);
    uVar2 = 1;
    if (iVar1 != 0) {
      return local_8;
    }
  }
  return uVar2;
}

// 006988C0 CGenerate::sub_006988C0
#line 4 "decomp/ST.exe/functions/006988C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006988C0(CGenerate *this)

{
  CGenerate_field_5853DArray *pCVar1;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar3;
  DArrayTy *pDVar6;
  uint local_EAX_596;
  uint local_EAX_615;
  uint uVar7;
  int iVar2;
  dword dVar8;
  AnonShape_00697AF0_A94F4D28 *pAVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_3c [8];
  dword local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  AnonShape_00697AF0_A94F4D28 *pAStack_8;

  if (this->field_5853 != nullptr) {
    dVar8 = this->field_5853->count;
    local_30 = 0;
    local_34 = dVar8;
    if (0 < (int)dVar8) {
      do {
        pCVar1 = st::pointer_boundary_cast<CGenerate_field_5853DArray *>(this->field_5853);
        if (local_30 < pCVar1->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pAStack_8 = (AnonShape_00697AF0_A94F4D28 *)
                      ((int)&pCVar1->data->field_0000 + pCVar1->elementSize * local_30);
        }
        else {
          pAStack_8 = nullptr;
        }
        pAVar9 = pAStack_8;
        if (((0 < *(int *)&pAStack_8->field_0x0) && (*(int *)&pAStack_8->field_0x9 == 4)) &&
           (*(int *)&pAStack_8->field_0xd == 2)) {
          iVar3 = st::fn_00403F21(this,pAStack_8,(int *)&local_14,&local_18,(int *)&local_1c,
                                     &local_10);
          if (iVar3 != 0) {
            local_c = 0;
            iVar10 = (byte)pAVar9->field_0x4 - 1;
            local_24 = local_1c + 1;
            local_20 = local_10 + 1;
            iVar3 = st::fn_00405D85(this,iVar10,local_14 - 1,local_18 + -1);
            if (iVar3 != 0) {
              local_c = 1;
            }
            iVar3 = st::fn_00405D85(this,iVar10,local_24,local_20);
            if (iVar3 != 0) {
              local_c = local_c + 1;
            }
            local_28 = 0;
            local_24 = local_1c + 1;
            local_20 = local_18 - 1;
            iVar3 = st::fn_00405D85(this,iVar10,local_14 - 1,local_10 + 1);
            if (iVar3 != 0) {
              local_28 = 1;
            }
            iVar3 = st::fn_00405D85(this,iVar10,local_24,local_20);
            uVar4 = local_28;
            if (iVar3 != 0) {
              uVar4 = local_28 + 1;
            }
            if ((int)uVar4 < local_c) {
              if (0 < local_c) {
                st::fn_00405731(this,local_14,local_18,*(int *)&pAVar9->field_0x0,-1);
                iVar3 = *(int *)&pAVar9->field_0x0;
                iVar10 = local_10;
LAB_00698a36:
                st::fn_00405731(this,local_1c,iVar10,iVar3,-1);
              }
            }
            else if (0 < (int)uVar4) {
              st::fn_00405731(this,local_14,local_10,*(int *)&pAVar9->field_0x0,-1);
              iVar3 = *(int *)&pAVar9->field_0x0;
              iVar10 = local_18;
              goto LAB_00698a36;
            }
          }
          dVar8 = local_34;
          if (*(int *)&pAVar9->field_0x0 <= this->field_5847 + -1) {
            pDVar6 = pAVar9->field_0015;
            uVar4 = 0;
            local_c = 0;
            if ((pDVar6 != nullptr) && (uVar7 = pDVar6->count, 0 < (int)uVar7)) {
              bVar11 = uVar7 != 0;
              do {
                if (bVar11) {
                  pbVar5 = DArrayAt<byte>(pDVar6, uVar4);
                }
                else {
                  pbVar5 = nullptr;
                }
                if ((pbVar5[1] == 0) && ((*pbVar5 & 2) != 0)) {
                  local_c = local_c + 1;
                }
                uVar4 = uVar4 + 1;
                bVar11 = uVar4 < uVar7;
              } while ((int)uVar4 < (int)uVar7);
            }
            uVar3 = st::fn_0072E6C0();
            uVar4 = uVar3 & 0x80000001;
            if ((int)uVar4 < 0) {
              uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
            }
            local_28 = uVar4 + 1;
            if (this->field_5847 < (int)(*(int *)&pAVar9->field_0x0 + uVar4 + 1)) {
              local_28 = uVar4;
            }
            dVar8 = local_34;
            if ((local_28 != 0) && (0 < local_c)) {
              pDVar6 = pAVar9->field_0015;
              local_2c = 0;
              if (0 < (int)pDVar6->count) {
                bVar11 = pDVar6->count != 0;
                do {
                  if (bVar11) {
                    pbVar5 = DArrayAt<byte>(pDVar6, local_2c);
                  }
                  else {
                    pbVar5 = nullptr;
                  }
                  if (pbVar5[1] == 0) {
                    local_24 = *(int *)(pbVar5 + 2) / this->field_5833;
                    local_20 = *(int *)(pbVar5 + 2) % this->field_5833;
                    pAVar9 = pAStack_8;
                    if (((*pbVar5 & 2) != 0) &&
                       (local_EAX_596 = st::fn_0072E6C0(), pAVar9 = pAStack_8,
                       (int)local_EAX_596 % (local_c + 1) == 1)) {
                      local_EAX_615 = st::fn_0072E6C0();
                      uVar4 = local_EAX_615 & 0x80000001;
                      if ((int)uVar4 < 0) {
                        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                      }
                      uVar7 = st::fn_0072E6C0();
                      iVar2 = st::fn_0040414C(st::pointer_boundary_cast<int *>(this->field_0008),local_20,local_24,local_28,
                                                 (int)local_3c);
                      pAVar9 = pAStack_8;
                      if ((int)((int)(short)iVar2 + uVar4 + 1) < this->field_5847) {
                        st::fn_0040204F(local_20,local_24,*(int *)&pAStack_8->field_0x0 + 1,
                                           uVar4 + 1,0xff,0,(int)uVar7 % 6 + 1);
                        pAVar9 = pAStack_8;
                      }
                    }
                  }
                  pDVar6 = pAVar9->field_0015;
                  local_2c = local_2c + 1;
                  bVar11 = local_2c < pDVar6->count;
                  dVar8 = local_34;
                } while ((int)local_2c < (int)pDVar6->count);
              }
            }
          }
        }
        local_30 = local_30 + 1;
      } while ((int)local_30 < (int)dVar8);
    }
  }
  return;
}

// 00698CA0 CGenerate::sub_00698CA0
#line 4 "decomp/ST.exe/functions/00698CA0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=00697390 @ 0069751C
   -> PUSH PUSH EAX

   [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=13; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
st::fn_00698CA0
          (CGenerate *this,int param_1,int param_2,int param_3,int *param_4,int *param_5,
          undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_c [4];
  uint local_8;

  iVar1 = st::fn_0040414C(st::pointer_boundary_cast<int *>(this->field_0008),param_1,param_2,param_3,(int)local_c);
  *param_4 = -1;
  *param_5 = -1;
  *param_6 = 0;
  iVar2 = st::fn_004019B0(st::pointer_boundary_cast<int *>(this->field_0008),param_1,param_2,param_3,0xff);
  if (iVar2 != 0) {
    uVar3 = local_8 >> 8 & 0xf;
    if (uVar3 != 0) {
      if ((local_8 & 0x1000) == 0) {
        *param_6 = 2;
      }
      else {
        uVar3 = uVar3 - 1;
        *param_6 = 1;
      }
      *param_5 = (int)(short)iVar1;
      iVar2 = (int)(short)iVar1 - uVar3;
      *param_4 = iVar2;
      if (param_3 == *param_5) {
        return 4;
      }
      return (param_3 != iVar2) + 1;
    }
  }
  return 0;
}

// 006991C0 CGenerate::sub_006991C0
#line 4 "decomp/ST.exe/functions/006991C0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=360; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
st::fn_006991C0
          (CGenerate *this,int param_1,int param_2,int param_3,int param_4,uint param_5,int param_6,
          int param_7,AnonShape_006991C0_D95B9E4A *param_8)

{
  alignas(4) byte st_stack_frame[400];

  short *psVar1;
  short *psVar2;
  int *piVar3;
  uint *puVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  byte *pbVar8;
  int local_EAX_350;
  int uVar12;
  uint uVar14;
  uint local_EAX_960;
  int iVar9;
  int local_EAX_1831;
  int iVar16;
  int local_EAX_2631;
  uint local_EAX_2793;
  uint uVar13;
  int local_EAX_2861;
  int iVar15;
  int local_EAX_3197;
  int iVar18;
  int iVar12;
  int iVar17;
  int local_EAX_3386;
  int local_EAX_4104;
  uint local_EAX_4222;
  int local_EAX_4400;
  int local_EAX_4717;
  uint local_EAX_4853;
  uint local_EAX_4951;
  int iVar10;
  uint uVar11;
  uint uVar15;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  undefined1 *puVar23;
  int iVar24;
  int iVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  bool bVar29;
  int aiStackY_1150 [17];
  undefined1 auStackY_110c [496];
  undefined4 uStackY_f1c;
  undefined4 uStackY_f18;
  uint uStackY_f14;
  short asStackY_f10 [612];
  int aiStackY_a48 [5];
  undefined4 auStackY_a34 [561];
  undefined4 uStackY_170;
  int local_144;
  int local_140;
  int local_13c;
  uint local_134;
  uint local_130;
  undefined2 local_12c;
  undefined2 uStack_12a;
  undefined2 local_128;
  undefined1 local_126;
  int local_124;
  undefined4 *local_120;
  int local_11c;
  int local_118;
  int local_114;
  undefined1 *local_110;
  undefined4 *local_10c;
  undefined1 *local_108;
  int local_104;
  int local_100;
  uint local_fc;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined1 *local_e8;
  undefined4 *local_e4;
  int local_e0;
  int local_dc;
  uint local_d4;
  int local_c0;
  int local_bc;
  int local_b8;
  undefined1 *local_b4;
  int local_b0;
  undefined4 *local_ac;
  undefined1 *local_a8;
  int local_a4;
  undefined4 *local_a0;
  undefined1 *local_9c;
  undefined1 *local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 *local_84;
  int local_80 [9];
  int local_5c;
  int local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined1 *local_3c;
  int local_38;
  int local_30;
  int local_28;
  undefined1 *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079d7b8);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 36);
  local_f0 = 0;
  local_118 = 0;
  local_8c = 0;
  uStackY_170 = 0x699224;
  ExceptionList = &local_14;
  local_d4 = param_1 * param_2;
  st::fn_006AB060(&this->field_584B);
  uStackY_170 = 0x69922a;
  pbVar8 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(param_1 * param_2));
  this->field_584B = pbVar8;
  uVar15 = this->field_582F;
  memset(pbVar8, 0, uVar15); /* compiler bulk-zero initialization */
  uStackY_170 = 0x699252;
  st::fn_0040564B(this,this->field_5833);
  uVar15 = local_d4;
  local_b4 = (undefined1 *)auStackY_a34;
  iVar24 = local_d4 * 10;
  aiStackY_a48[4] = 0x699285;
  iVar7 = -(iVar24 + 3U & 0xfffffffc);
  local_9c = (undefined1 *)((int)auStackY_a34 + iVar7);
  *(undefined4 *)((int)auStackY_a34 + iVar7 + -4) = 0x6992a4;
  iVar20 = param_5 * -4;
  local_94 = (undefined1 *)((int)auStackY_a34 + iVar20 + iVar7);
  *(undefined4 *)((int)auStackY_a34 + iVar20 + iVar7 + -4) = 0x6992bb;
  iVar24 = -(iVar24 + 3U & 0xfffffffc);
  local_1c = (undefined1 *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7);
  local_3c = (undefined1 *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7);
  local_8 = 0xffffffff;
  local_dc = 0;
  if (0 < (int)uVar15) {
    do {
      iVar21 = local_dc;
      if ((((0 < local_dc % param_1) && (0 < local_dc / param_1)) &&
          (local_dc % param_1 < this->field_5833 + -1)) &&
         (local_dc / param_1 < this->field_5837 + -1)) {
        *(int **)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = local_80;
        *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc) = iVar21;
        *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8) = 0x699323;
        local_EAX_350 =
             st::fn_0040208B(this,*(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc),
                          *(int *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4));
        local_140 = -1;
        bVar29 = false;
        iVar25 = 0;
        iVar21 = local_140;
        if (0 < param_7) {
          do {
            bVar29 = true;
            iVar21 = 0;
            if (0 < local_EAX_350) {
              do {
                if ((short)this->field_584F[local_80[iVar21] + this->field_582F * iVar25] < 1) {
                  bVar29 = false;
                  break;
                }
                iVar21 = iVar21 + 1;
              } while (iVar21 < local_EAX_350);
            }
            iVar21 = iVar25;
          } while ((!bVar29) && (iVar25 = iVar25 + 1, iVar21 = local_140, iVar25 < param_7));
        }
        local_140 = iVar21;
        if ((bVar29) && (-1 < local_140)) {
          if (local_140 == 0) {
            this->field_584B[local_dc] = 1;
          }
          psVar1 = (short *)(local_9c + local_f0 * 10);
          *psVar1 = (short)(local_dc % param_1);
          psVar1[1] = (short)(local_dc / param_2);
          psVar1[2] = (short)local_140;
          iVar21 = 0;
          uVar15 = local_d4;
          if (0 < (int)param_5) {
            do {
              *(int *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) =
                   (int)*(short *)(param_6 + 2 + iVar21 * 4);
              *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc) =
                   (int)*(short *)(param_6 + iVar21 * 4);
              *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8) = (int)psVar1[1];
              *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 4) = (int)*psVar1;
              *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7) = 0x699421;
              uVar12 = st::fn_006ACF90(*(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 4),
                                    *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8),
                                    *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc),
                                    *(int *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4));
              if (uVar12 < (int)uVar15) {
                uVar15 = uVar12;
              }
              *(int *)(local_94 + iVar21 * 4) = uVar12;
              iVar21 = iVar21 + 1;
            } while (iVar21 < (int)param_5);
          }
          iVar25 = 0;
          iVar21 = 0;
          if (0 < (int)param_5) {
            do {
              iVar25 = iVar25 + (*(int *)(local_94 + iVar21 * 4) - uVar15);
              iVar21 = iVar21 + 1;
            } while (iVar21 < (int)param_5);
          }
          *(int *)(local_9c + local_f0 * 10 + 6) = iVar25;
          local_f0 = local_f0 + 1;
        }
      }
      local_dc = local_dc + 1;
    } while (local_dc < (int)local_d4);
  }
  if (local_f0 != 0) {
    local_dc = 0;
    if (0 < (int)param_5) {
      do {
        iVar25 = (int)*(short *)(param_6 + local_dc * 4);
        local_30 = iVar25 + -7;
        iVar21 = 0;
        if (local_30 < 0) {
          local_30 = 0;
        }
        iVar19 = (int)*(short *)(param_6 + 2 + local_dc * 4);
        iVar22 = iVar19 + -7;
        if (iVar22 < 0) {
          iVar22 = 0;
        }
        iVar25 = iVar25 + 8;
        if (this->field_5833 < iVar25) {
          iVar25 = this->field_5833;
        }
        iVar19 = iVar19 + 8;
        if (this->field_5837 < iVar19) {
          iVar19 = this->field_5837;
        }
        for (; iVar10 = local_30, iVar22 < iVar19; iVar22 = iVar22 + 1) {
          for (; iVar10 < iVar25; iVar10 = iVar10 + 1) {
            if (this->field_584B[iVar10 + this->field_5833 * iVar22] != 0) {
              *(short *)(local_b4 + iVar21 * 10) = (short)iVar10;
              *(short *)((int)(local_b4 + iVar21 * 10) + 2) = (short)iVar22;
              iVar21 = iVar21 + 1;
            }
          }
        }
        if (iVar21 < 2) {
          ExceptionList = local_14;
          return local_118;
        }
        local_100 = 100;
        local_c0 = 0;
        local_48 = 0;
        local_58 = 0;
        local_11c = iVar25;
        local_50 = iVar19;
        do {
          *(undefined4 *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = 0x69957b;
          uVar14 = st::fn_0072E6C0();
          iVar25 = (int)uVar14 % iVar21;
          *(undefined4 *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = 0x699585;
          local_EAX_960 = st::fn_0072E6C0();
          iVar22 = (int)local_EAX_960 % iVar21;
          psVar1 = (short *)(local_b4 + iVar22 * 10);
          psVar2 = (short *)(local_b4 + iVar25 * 10);
          *(int *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = (int)psVar1[1];
          *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc) = (int)*psVar1;
          *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8) = (int)psVar2[1];
          *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 4) = (int)*psVar2;
          *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7) = 0x6995b3;
          iVar9 = st::fn_006ACF90(*(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 4),
                               *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8),
                               *(int *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc),
                               *(int *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4));
          puVar23 = local_b4;
          if ((iVar25 != iVar22) && (2 < iVar9)) {
            if (0 < iVar9) {
              local_48 = iVar25;
              local_58 = iVar22;
            }
            local_c0 = 1;
          }
          local_100 = local_100 + -1;
        } while (0 < local_100);
        local_12c = 0;
        if (local_c0 == 0) {
          ExceptionList = local_14;
          return local_118;
        }
        local_134 = *(uint *)(local_b4 + local_48 * 10);
        local_130 = 0;
        uStack_12a = 0xde;
        local_128 = 0;
        local_126 = 0;
        *(uint **)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = &local_134;
        *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc) = param_8->field_001C;
        *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8) = 0x699662;
        st::fn_006AE1C0
                  (*(DArrayTy **)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc),
                   *(void **)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4));
        local_8c = local_8c + 1;
        local_134 = *(uint *)(puVar23 + local_58 * 10);
        local_130 = local_130 & 0xffff0000;
        uStack_12a = 0xdd;
        local_128 = 0;
        local_126 = 0;
        *(uint **)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = &local_134;
        *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc) = param_8->field_001C;
        *(undefined4 *)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 8) = 0x6996ad;
        st::fn_006AE1C0
                  (*(DArrayTy **)((int)aiStackY_a48 + iVar24 + iVar20 + iVar7 + 0xc),
                   *(void **)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4));
        local_118 = local_118 + 2;
        local_f4 = 0;
        iVar21 = 0;
        do {
          iVar25 = local_48;
          if ((local_f4 != 0) && (iVar25 = iVar21, local_f4 == 1)) {
            iVar25 = local_58;
          }
          local_11c = (int)*(short *)(local_b4 + iVar25 * 10);
          local_30 = local_11c + -7;
          if (local_30 < 0) {
            local_30 = 0;
          }
          local_50 = (int)*(short *)((int)(local_b4 + iVar25 * 10) + 2);
          iVar21 = local_50 + -7;
          if (iVar21 < 0) {
            iVar21 = 0;
          }
          local_11c = local_11c + 8;
          iVar22 = this->field_5833;
          if (iVar22 < local_11c) {
            local_11c = iVar22;
          }
          local_50 = local_50 + 8;
          iVar22 = this->field_5837;
          if (iVar22 < local_50) {
            local_50 = iVar22;
          }
          for (; iVar22 = local_30, iVar21 < local_50; iVar21 = iVar21 + 1) {
            for (; iVar22 < local_11c; iVar22 = iVar22 + 1) {
              this->field_584B[iVar22 + this->field_5833 * iVar21] = 0;
              uVar15 = iVar22 - *(short *)(local_b4 + iVar25 * 10);
              uVar11 = (int)uVar15 >> 0x1f;
              if (((int)((uVar15 ^ uVar11) - uVar11) < 3) ||
                 (uVar15 = iVar21 - *(short *)((int)(local_b4 + iVar25 * 10) + 2),
                 uVar11 = (int)uVar15 >> 0x1f, (int)((uVar15 ^ uVar11) - uVar11) < 3)) {
                this->field_584B[iVar22 + this->field_5833 * iVar21] = 0;
              }
            }
          }
          local_f4 = local_f4 + 1;
          iVar21 = iVar25;
        } while (local_f4 < 2);
        local_dc = local_dc + 1;
      } while (local_dc < (int)param_5);
    }
    param_8->field_0008 = local_118;
    puVar23 = (undefined1 *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7);
    if (0 < param_4) {
      iVar21 = param_5 * param_5;
      *(undefined4 *)((int)auStackY_a34 + iVar24 + iVar20 + iVar7 + -4) = 0x699821;
      local_a8 = (undefined1 *)((int)auStackY_a34 + iVar21 * -4 + iVar24 + iVar20 + iVar7);
      *(undefined4 *)((int)auStackY_a34 + iVar21 * -4 + iVar24 + iVar20 + iVar7 + -4) = 0x699838;
      local_24 = (undefined1 *)((int)auStackY_a34 + iVar21 * -8 + iVar24 + iVar20 + iVar7);
      *(undefined4 *)((int)auStackY_a34 + iVar21 * -8 + iVar24 + iVar20 + iVar7 + -4) = 0x699853;
      local_10c = (undefined4 *)((int)auStackY_a34 + iVar21 * -8 + iVar24 + param_5 * -0xc + iVar7);
      *(undefined4 *)((int)auStackY_a34 + iVar21 * -8 + iVar24 + param_5 * -0xc + iVar7 + -4) =
           0x69986a;
      local_e4 = (undefined4 *)((int)auStackY_a34 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
      *(undefined4 *)((int)auStackY_a34 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + -4) =
           0x69987f;
      local_110 = (undefined1 *)((int)&uStackY_f18 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
      *(undefined4 *)((int)&uStackY_f1c + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7) = 0x699894
      ;
      local_1c = auStackY_110c + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7;
      local_108 = auStackY_110c + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7;
      local_8 = 0xffffffff;
      local_dc = 0;
      if (0 < (int)param_5) {
        do {
          local_f4 = 0;
          if (0 < (int)param_5) {
            do {
              iVar20 = local_f4;
              *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                   (int)*(short *)(param_6 + 2 + local_f4 * 4);
              *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                   (int)*(short *)(param_6 + local_f4 * 4);
              *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                   (int)*(short *)(param_6 + 2 + local_dc * 4);
              *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) =
                   (int)*(short *)(param_6 + local_dc * 4);
              *(undefined4 *)
               ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) =
                   0x6998ec;
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              local_EAX_1831 =
                   st::fn_006ACED8(*(int *)((int)aiStackY_1150 +
                                        iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34),
                                *(int *)((int)aiStackY_1150 +
                                        iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38),
                                *(int *)((int)aiStackY_1150 +
                                        iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c),
                                *(int *)((int)aiStackY_1150 +
                                        iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40));
              local_38 = local_EAX_1831;
              iVar25 = local_dc * param_5;
              *(int *)(local_a8 + (iVar25 + iVar20) * 4) = local_EAX_1831;
              local_a4 = 0;
              local_104 = 0;
              if (0 < iVar20) {
                do {
                  iVar22 = iVar20;
                  if (local_EAX_1831 <
                      *(int *)(local_a8 +
                              (*(int *)(local_24 + (iVar25 + local_104) * 4) + iVar25) * 4)) {
                    while (iVar22 = iVar22 + -1, local_104 <= iVar22) {
                      *(undefined4 *)(local_24 + (iVar25 + iVar22) * 4 + 4) =
                           *(undefined4 *)(local_24 + (iVar25 + iVar22) * 4);
                      iVar20 = local_f4;
                    }
                    *(int *)(local_24 + (iVar25 + local_104) * 4) = iVar20;
                    local_a4 = 1;
                  }
                  if (local_a4 != 0) goto LAB_0069999c;
                  local_104 = local_104 + 1;
                } while (local_104 < iVar20);
              }
              if (local_a4 == 0) {
                *(int *)(local_24 + (iVar25 + iVar20) * 4) = iVar20;
              }
LAB_0069999c:
              local_f4 = iVar20 + 1;
            } while (iVar20 + 1 < (int)param_5);
          }
          local_dc = local_dc + 1;
        } while (local_dc < (int)param_5);
      }
      puVar26 = local_10c;
      for (iVar20 = (param_5 & 0x1fffffff) << 1; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar26 = 0xffffffff;
        puVar26 = puVar26 + 1;
      }
      for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
        *(undefined1 *)puVar26 = 0xff;
        puVar26 = (undefined4 *)((int)puVar26 + 1);
      }
      puVar26 = local_e4;
      for (iVar20 = (param_5 & 0x1fffffff) << 1; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar26 = 0xffffffff;
        puVar26 = puVar26 + 1;
      }
      for (iVar20 = 0; iVar20 != 0; iVar20 = iVar20 + -1) {
        *(undefined1 *)puVar26 = 0xff;
        puVar26 = (undefined4 *)((int)puVar26 + 1);
      }
      local_114 = 0;
      local_dc = 0;
      puVar23 = auStackY_110c + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7;
      if (0 < (int)param_5) {
        do {
          local_88 = 0;
          local_f4 = 0;
          if (0 < (int)param_5) {
            do {
              iVar20 = *(int *)(local_24 + (local_dc * param_5 + local_f4) * 4);
              local_88 = iVar20;
              if (((iVar20 != local_dc) && ((int)local_10c[iVar20] < 0)) &&
                 (local_10c[iVar20 + param_5] != local_dc)) {
                local_10c[iVar20] = 1;
                local_10c[local_dc + param_5] = iVar20;
                break;
              }
              local_f4 = local_f4 + 1;
            } while (local_f4 < (int)param_5);
          }
          piVar3 = (int *)(local_a8 + (local_dc * param_5 + local_88) * 4);
          if (((*piVar3 != 0) && (-1 < local_88)) && (local_88 < (int)param_5)) {
            iVar25 = (int)*(short *)(param_6 + local_dc * 4);
            local_e0 = ((*(short *)(param_6 + local_88 * 4) - iVar25) * 4) / 9 + iVar25;
            psVar1 = (short *)(param_6 + 2 + local_88 * 4);
            psVar2 = (short *)(param_6 + 2 + local_dc * 4);
            iVar20 = (((int)*psVar1 - (int)*psVar2) * 4) / 9 + (int)*psVar2;
            local_124 = iVar20;
            *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                 (int)*psVar2;
            *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                 iVar25;
            *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                 iVar20;
            *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) =
                 local_e0;
            *(undefined4 *)
             ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) = 0x699b46
            ;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar16 = st::fn_006ACED8(*(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34),
                                  *(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38),
                                  *(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c),
                                  *(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40));
            if (0x1e < iVar16) {
              iVar25 = (int)*(short *)(param_6 + local_dc * 4);
              iVar20 = *piVar3;
              local_e0 = ((*(short *)(param_6 + local_88 * 4) - iVar25) * 0x1e) / iVar20 + iVar25;
              local_124 = (((int)*psVar1 - (int)*psVar2) * 0x1e) / iVar20 + (int)*psVar2;
            }
            iVar20 = 0;
            local_144 = 0;
            local_100 = 3;
            local_44 = 5;
            do {
              local_f4 = 0;
              if (0 < local_f0) {
                do {
                  psVar1 = (short *)(local_9c + local_f4 * 10);
                  if (*(int *)(psVar1 + 3) != 0) {
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) = local_124;
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) = local_e0;
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) = (int)psVar1[1];
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) = (int)*psVar1;
                    *(undefined4 *)
                     ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) =
                         0x699c0c;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    local_EAX_2631 =
                         st::fn_006ACED8(*(int *)((int)aiStackY_1150 +
                                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34)
                                      ,*(int *)((int)aiStackY_1150 +
                                               iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38
                                               ),
                                      *(int *)((int)aiStackY_1150 +
                                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c)
                                      ,*(int *)((int)aiStackY_1150 +
                                               iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40
                                               ));
                    if (local_EAX_2631 <= local_44) {
                      puVar26 = (undefined4 *)
                                ((int)&uStackY_f18 +
                                iVar20 * 10 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                      *puVar26 = *(undefined4 *)psVar1;
                      puVar26[1] = *(undefined4 *)(psVar1 + 2);
                      *(short *)(puVar26 + 2) = psVar1[4];
                      *(int *)(local_108 + iVar20 * 4) = local_f4;
                      iVar20 = iVar20 + 1;
                      local_144 = iVar20;
                      if (iVar20 == 0x7b) break;
                    }
                  }
                  local_f4 = local_f4 + 1;
                } while (local_f4 < local_f0);
              }
              if (iVar20 < 0xb) {
                local_100 = local_100 + -1;
                local_44 = local_44 + 2;
              }
              else {
                local_100 = 0;
              }
            } while (0 < local_100);
            if (0 < iVar20) {
              local_100 = 0x46;
              local_b0 = 0;
              local_48 = 0;
              local_58 = 0;
              do {
                *(undefined4 *)
                 ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                     0x699cae;
                local_EAX_2793 = st::fn_0072E6C0();
                *(undefined4 *)
                 ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                     0x699cc1;
                local_4c = (int)local_EAX_2793 % local_144;
                uVar13 = st::fn_0072E6C0();
                local_5c = (int)uVar13 % local_144;
                iVar25 = ((int)uVar13 % local_144) * 10;
                iVar20 = ((int)local_EAX_2793 % local_144) * 10;
                *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40)
                     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                     = (int)*(short *)((int)&uStackY_f18 +
                                      iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c)
                     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                     = (int)*(short *)((int)&uStackY_f18 +
                                      iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38)
                     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                     = (int)*(short *)((int)&uStackY_f18 +
                                      iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34)
                     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                     = (int)*(short *)((int)&uStackY_f18 +
                                      iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                *(undefined4 *)
                 ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) =
                     0x699cf2;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                local_EAX_2861 =
                     st::fn_006ACED8(*(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34),
                                  *(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38),
                                  *(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c),
                                  *(int *)((int)aiStackY_1150 +
                                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40));
                if ((local_4c != local_5c) && (iVar15 = 2, 1 < local_EAX_2861)) {
                  local_ec = 2;
                  local_f4 = 0;
                  if (0 < local_114) {
                    do {
                      iVar22 = local_e4[local_f4];
                      *(int *)((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                           (int)*(short *)(local_9c + iVar20 + 2);
                      *(int *)((int)aiStackY_1150 +
                              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                           (int)*(short *)((int)&uStackY_f18 +
                                          iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                      *(int *)((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                           (int)*(short *)((int)(local_9c + iVar22 * 10) + 2);
                      *(int *)((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) =
                           (int)*(short *)(local_9c + iVar22 * 10);
                      *(undefined4 *)
                       ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30)
                           = 0x699d60;
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      local_ec = st::fn_006ACF90(*(int *)((int)aiStackY_1150 +
                                                      iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7
                                                      + 0x34),
                                              *(int *)((int)aiStackY_1150 +
                                                      iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7
                                                      + 0x38),
                                              *(int *)((int)aiStackY_1150 +
                                                      iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7
                                                      + 0x3c),
                                              *(int *)((int)aiStackY_1150 +
                                                      iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7
                                                      + 0x40));
                      iVar22 = local_e4[local_f4];
                      *(int *)((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                           (int)*(short *)(local_9c + iVar25 + 2);
                      *(int *)((int)aiStackY_1150 +
                              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                           (int)*(short *)((int)&uStackY_f18 +
                                          iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                      *(int *)((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                           (int)*(short *)((int)(local_9c + iVar22 * 10) + 2);
                      *(int *)((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) =
                           (int)*(short *)(local_9c + iVar22 * 10);
                      *(undefined4 *)
                       ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30)
                           = 0x699d9a;
                      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                      iVar15 = st::fn_006ACF90(*(int *)((int)aiStackY_1150 +
                                                    iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                    0x34),
                                            *(int *)((int)aiStackY_1150 +
                                                    iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                    0x38),
                                            *(int *)((int)aiStackY_1150 +
                                                    iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                    0x3c),
                                            *(int *)((int)aiStackY_1150 +
                                                    iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                    0x40));
                      if (local_ec < 2) goto LAB_00699f26;
                    } while ((1 < iVar15) && (local_f4 = local_f4 + 1, local_f4 < local_114));
                  }
                  if ((1 < local_ec) && (1 < iVar15)) {
                    local_ec = (*(int *)(local_a8 + (local_dc * param_5 + local_88) * 4) * iVar15) /
                               2;
                    psVar1 = (short *)(param_6 + 2 + local_88 * 4);
                    psVar2 = (short *)(param_6 + 2 + local_dc * 4);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                    *(undefined4 *)
                     ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) =
                         0x699e42;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    local_EAX_3197 =
                         st::fn_006ACED8(*(int *)((int)aiStackY_1150 +
                                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34)
                                      ,*(int *)((int)aiStackY_1150 +
                                               iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38
                                               ),
                                      *(int *)((int)aiStackY_1150 +
                                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c)
                                      ,*(int *)((int)aiStackY_1150 +
                                               iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40
                                               ));
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x2c) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x28) = (int)*psVar1;
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x24) =
                         (int)*(short *)(param_6 + local_88 * 4);
                    *(undefined4 *)
                     ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x20) =
                         0x699e6c;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar18 = st::fn_006ACED8(*(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x24),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x28),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x2c),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x30));
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x20) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x1c) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x18) = (int)*psVar1;
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x14) =
                         (int)*(short *)(param_6 + local_88 * 4);
                    *(undefined4 *)
                     ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x10) =
                         0x699e9c;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar12 = st::fn_006ACED8(*(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x14),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x18),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x1c),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x20));
                    iVar22 = local_dc;
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x10) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0xc) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar25 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                    *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 8
                            ) = (int)*psVar2;
                    *(int *)((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 4
                            ) = (int)*(short *)(param_6 + local_dc * 4);
                    *(undefined4 *)
                     ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7) =
                         0x699ec6;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    iVar17 = st::fn_006ACED8(*(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 4
                                                  ),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 8
                                                  ),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0xc),
                                          *(int *)((int)aiStackY_1150 +
                                                  iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 +
                                                  0x10));
                    iVar25 = iVar17 + local_ec;
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 2);
                    *(int *)((int)aiStackY_1150 +
                            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                         (int)*(short *)((int)&uStackY_f18 +
                                        iVar20 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) = (int)*psVar2;
                    *(int *)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34) =
                         (int)*(short *)(param_6 + iVar22 * 4);
                    *(undefined4 *)
                     ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x30) =
                         0x699eff;
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    local_EAX_3386 =
                         st::fn_006ACED8(*(int *)((int)aiStackY_1150 +
                                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x34)
                                      ,*(int *)((int)aiStackY_1150 +
                                               iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38
                                               ),
                                      *(int *)((int)aiStackY_1150 +
                                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c)
                                      ,*(int *)((int)aiStackY_1150 +
                                               iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40
                                               ));
                    iVar20 = local_EAX_3386 + iVar25 + local_EAX_3197 + iVar18 + iVar12;
                    if (local_b0 < iVar20) {
                      local_48 = local_4c;
                      local_58 = local_5c;
                      local_b0 = iVar20;
                    }
                  }
                }
LAB_00699f26:
                iVar20 = local_48;
                local_100 = local_100 + -1;
              } while (0 < local_100);
              if (local_48 != local_58) {
                local_134 = 0;
                local_130 = 0;
                local_12c = 0;
                uStack_12a = 0;
                local_128 = 0;
                local_126 = 0;
                puVar4 = (uint *)((int)&uStackY_f18 +
                                 local_48 * 10 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                local_134 = (uint)(ushort)*puVar4;
                local_134 = *puVar4;
                local_130 = (uint)(ushort)puVar4[1];
                this->field_584B
                [(int)(short)STField<ushort>(puVar4,2) * this->field_5833 +
                 (int)(short)(ushort)*puVar4] = 0;
                uStack_12a = 0xdd;
                local_128 = 0;
                local_126 = 1;
                *(uint **)((int)aiStackY_1150 +
                          iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) = &local_134;
                *(undefined4 *)
                 ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                     param_8->field_001C;
                *(undefined4 *)
                 ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                     0x699fd4;
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                st::fn_006AE1C0
                          (*(DArrayTy **)
                            ((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c),
                           *(void **)((int)aiStackY_1150 +
                                     iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40));
                iVar25 = local_58;
                local_118 = local_118 + 1;
                iVar20 = *(int *)(local_108 + iVar20 * 4);
                local_e4[local_114] = iVar20;
                *(undefined4 *)(local_9c + iVar20 * 10 + 6) = 0;
                local_114 = local_114 + 1;
                if (1 < param_4) {
                  local_134 = 0;
                  local_130 = 0;
                  local_12c = 0;
                  uStack_12a = 0;
                  local_128 = 0;
                  local_126 = 0;
                  puVar4 = (uint *)((int)&uStackY_f18 +
                                   local_58 * 10 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7);
                  local_134 = (uint)(ushort)*puVar4;
                  local_134 = *puVar4;
                  this->field_584B
                  [(int)(short)STField<ushort>(puVar4,2) * this->field_5833 +
                   (int)(short)(ushort)*puVar4] = 0;
                  local_130 = (uint)(ushort)puVar4[1];
                  uStack_12a = 0xde;
                  local_128 = 0;
                  local_126 = 1;
                  *(uint **)((int)aiStackY_1150 +
                            iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40) = &local_134;
                  *(undefined4 *)
                   ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c) =
                       param_8->field_001C;
                  *(undefined4 *)
                   ((int)aiStackY_1150 + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x38) =
                       0x69a0a7;
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  st::fn_006AE1C0
                            (*(DArrayTy **)
                              ((int)aiStackY_1150 +
                              iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x3c),
                             *(void **)((int)aiStackY_1150 +
                                       iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7 + 0x40));
                  local_118 = local_118 + 1;
                  local_8c = local_8c + 1;
                  iVar20 = *(int *)(local_108 + iVar25 * 4);
                  local_e4[local_114] = iVar20;
                  *(undefined4 *)(local_9c + iVar20 * 10 + 6) = 0;
                  local_114 = local_114 + 1;
                }
              }
            }
          }
          local_dc = local_dc + 1;
          puVar23 = auStackY_110c + iVar21 * -8 + iVar24 + param_5 * -0x14 + iVar7;
        } while (local_dc < (int)param_5);
      }
    }
    iVar7 = local_f0;
    local_bc = param_3 - local_118;
    if (0 < param_3 - local_118) {
      *(undefined4 *)(puVar23 + -4) = 0x69a130;
      iVar20 = iVar7 * -4;
      local_120 = (undefined4 *)(puVar23 + iVar20);
      *(undefined4 *)(puVar23 + iVar20 + -4) = 0x69a149;
      iVar21 = local_bc;
      local_a0 = (undefined4 *)(puVar23 + iVar7 * -8);
      *(undefined4 *)(puVar23 + iVar7 * -8 + -4) = 0x69a16d;
      iVar24 = iVar21 * -8;
      local_84 = (undefined4 *)(puVar23 + iVar21 * -4 + iVar7 * -8);
      *(undefined4 *)(puVar23 + iVar21 * -4 + iVar7 * -8 + -4) = 0x69a181;
      local_1c = puVar23 + iVar21 * -8 + iVar7 * -8;
      local_20 = (undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8);
      local_8 = 0xffffffff;
      iVar25 = 0;
      local_b8 = 0;
      uVar15 = 0;
      if (0 < local_f0) {
        do {
          psVar1 = (short *)(local_9c + uVar15 * 10);
          *(undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -4) = param_8->field_001C;
          *(undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -8) = 0xf;
          *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0xc) = (int)psVar1[1];
          *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0x10) = (int)*psVar1;
          *(undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0x14) = 0x69a1cd;
          local_EAX_4104 =
               st::fn_00404025(*(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0x10),
                                  *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0xc),
                                  *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -8),
                                  *(DArrayTy **)(puVar23 + iVar21 * -8 + iVar7 * -8 + -4));
          if (0xf < local_EAX_4104) {
            *(uint *)(puVar23 + iVar25 * 4 + iVar20) = local_EAX_4104 << 0x10 | uVar15 & 0xffff;
            iVar25 = iVar25 + 1;
            local_b8 = iVar25;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < local_f0);
      }
      if (0 < iVar25) {
        local_100 = 0x82;
        uVar15 = 0;
        local_b0 = 0;
        iVar20 = local_b8;
        puVar26 = local_120;
        puVar27 = local_a0;
        do {
          for (; iVar20 != 0; iVar20 = iVar20 + -1) {
            *puVar27 = *puVar26;
            puVar26 = puVar26 + 1;
            puVar27 = puVar27 + 1;
          }
          local_fc = 0;
          local_28 = 0;
          puVar26 = local_84;
          for (iVar20 = local_bc; iVar20 != 0; iVar20 = iVar20 + -1) {
            *puVar26 = 0;
            puVar26 = puVar26 + 1;
          }
          local_dc = 0;
          do {
            *(undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -4) = 0x69a243;
            local_EAX_4222 = st::fn_0072E6C0();
            iVar20 = (int)local_EAX_4222 % local_b8;
            uVar11 = local_a0[iVar20];
            if (uVar11 >> 0x10 != 0) {
              local_84[local_fc] = iVar20;
              local_28 = local_28 + (uVar11 >> 0x10);
              local_fc = local_fc + 1;
              if (local_bc <= (int)local_fc) break;
              uVar5 = *(ushort *)(local_a0 + iVar20);
              if (((int)(uint)uVar5 < local_f0) && (local_f4 = 0, 0 < local_b8)) {
                do {
                  uVar6 = *(ushort *)(local_a0 + local_f4);
                  if ((int)(uint)uVar6 < local_f0) {
                    psVar1 = (short *)(local_9c + (uint)uVar5 * 10);
                    psVar2 = (short *)(local_9c + (uint)uVar6 * 10);
                    *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -4) = (int)psVar1[1];
                    *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -8) = (int)*psVar1;
                    *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0xc) = (int)psVar2[1];
                    *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0x10) = (int)*psVar2;
                    *(undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0x14) = 0x69a2f5;
                    local_EAX_4400 =
                         st::fn_006ACF90(*(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0x10),
                                      *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -0xc),
                                      *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -8),
                                      *(int *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -4));
                    if (local_EAX_4400 < 0xf) {
                      local_a0[local_f4] = (uint)uVar6;
                    }
                  }
                  local_f4 = local_f4 + 1;
                } while (local_f4 < local_b8);
              }
            }
            local_dc = local_dc + 1;
          } while (local_dc < 0x82);
          uVar11 = local_fc;
          puVar26 = local_84;
          puVar27 = local_20;
          if (local_b0 < local_28) {
            for (; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar27 = *puVar26;
              puVar26 = puVar26 + 1;
              puVar27 = puVar27 + 1;
            }
            local_b0 = local_28;
            uVar15 = local_fc;
          }
          local_100 = local_100 + -1;
          iVar20 = local_b8;
          puVar26 = local_120;
          puVar27 = local_a0;
        } while (0 < local_100);
        if (uVar15 != 0) {
          *(undefined4 *)(puVar23 + iVar21 * -8 + iVar7 * -8 + -4) = 0x69a396;
          local_ac = (undefined4 *)(puVar23 + uVar15 * -4 + iVar21 * -8 + iVar7 * -8);
          *(undefined4 *)(puVar23 + uVar15 * -4 + iVar21 * -8 + iVar7 * -8 + -4) = 0x69a3ad;
          *(undefined4 *)(puVar23 + uVar15 * -8 + iVar21 * -8 + iVar7 * -8 + -4) = 0x69a3ca;
          iVar20 = uVar15 * uVar15 * -4;
          local_1c = puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8;
          local_e8 = puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8;
          local_8 = 0xffffffff;
          local_dc = 0;
          iVar25 = local_dc;
          if (0 < (int)uVar15) {
            do {
              for (; iVar25 < (int)uVar15; iVar25 = iVar25 + 1) {
                psVar1 = (short *)(local_9c + (uint)*(ushort *)(local_120 + local_20[iVar25]) * 10);
                psVar2 = (short *)(local_9c + (uint)*(ushort *)(local_120 + local_20[local_dc]) * 10
                                  );
                *(int *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -4) = (int)psVar1[1]
                ;
                *(int *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -8) = (int)*psVar1;
                *(int *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -0xc) =
                     (int)psVar2[1];
                *(int *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -0x10) =
                     (int)*psVar2;
                *(undefined4 *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -0x14) =
                     0x69a432;
                local_EAX_4717 =
                     st::fn_006ACED8(*(int *)(puVar23 +
                                          iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -0x10),
                                  *(int *)(puVar23 +
                                          iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -0xc),
                                  *(int *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -8
                                          ),
                                  *(int *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -4
                                          ));
                *(int *)(local_e8 + (uVar15 * local_dc + iVar25) * 4) = local_EAX_4717;
              }
              local_dc = local_dc + 1;
              iVar25 = local_dc;
            } while (local_dc < (int)uVar15);
          }
          local_13c = (int)uVar15 / 2;
          local_90 = local_13c;
          uVar11 = uVar15 & 0x80000001;
          bVar29 = uVar11 == 0;
          if ((int)uVar11 < 0) {
            bVar29 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
          }
          if (!bVar29) {
            local_13c = local_13c + 1;
          }
          local_100 = 100;
          local_b0 = 0;
          uVar11 = uVar15;
          puVar27 = local_ac;
          puVar26 = local_ac;
          do {
            for (; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar27 = 0;
              puVar27 = puVar27 + 1;
            }
            iVar25 = 0;
            local_38 = 0;
            if (0 < local_13c) {
              do {
                *(undefined4 *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -4) =
                     0x69a4ba;
                local_EAX_4853 = st::fn_0072E6C0();
                iVar22 = (int)local_EAX_4853 % (int)uVar15;
                if (puVar26[iVar22] == 0) {
                  puVar26[iVar22] = 0xdd;
                }
                else {
                  iVar19 = 0;
                  if (0 < (int)uVar15) {
                    do {
                      iVar10 = iVar22 + iVar19;
                      if ((int)uVar15 <= iVar10) {
                        iVar10 = iVar10 - uVar15;
                      }
                      if (puVar26[iVar10] == 0) {
                        puVar26[iVar10] = 0xdd;
                        break;
                      }
                      iVar19 = iVar19 + 1;
                    } while (iVar19 < (int)uVar15);
                  }
                }
                iVar25 = iVar25 + 1;
              } while (iVar25 < local_13c);
            }
            iVar25 = 0;
            if (0 < local_90) {
              do {
                *(undefined4 *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -4) =
                     0x69a51c;
                local_EAX_4951 = st::fn_0072E6C0();
                iVar22 = (int)local_EAX_4951 % (int)uVar15;
                if (puVar26[iVar22] == 0) {
                  puVar26[iVar22] = 0xde;
                }
                else {
                  iVar19 = 0;
                  if (0 < (int)uVar15) {
                    do {
                      iVar10 = iVar22 + iVar19;
                      if ((int)uVar15 <= iVar10) {
                        iVar10 = iVar10 - uVar15;
                      }
                      if (puVar26[iVar10] == 0) {
                        puVar26[iVar10] = 0xde;
                        break;
                      }
                      iVar19 = iVar19 + 1;
                    } while (iVar19 < (int)uVar15);
                  }
                }
                iVar25 = iVar25 + 1;
              } while (iVar25 < local_90);
            }
            iVar25 = 0;
            iVar22 = iVar25;
            if (0 < (int)uVar15) {
              do {
                for (; iVar25 < (int)uVar15; iVar25 = iVar25 + 1) {
                  if (puVar26[iVar25] == puVar26[iVar22]) {
                    local_38 = local_38 + *(int *)(local_e8 + (uVar15 * iVar22 + iVar25) * 4);
                    puVar26 = local_ac;
                  }
                }
                iVar25 = iVar22 + 1;
                iVar22 = iVar25;
              } while (iVar25 < (int)uVar15);
            }
            puVar27 = puVar26;
            if (local_b0 <= local_38) {
              local_b0 = local_38;
              puVar26 = local_ac;
              puVar28 = (undefined4 *)(puVar23 + uVar15 * -8 + iVar21 * -8 + iVar7 * -8);
              for (uVar11 = uVar15; puVar27 = local_ac, uVar11 != 0; uVar11 = uVar11 - 1) {
                *puVar28 = *puVar26;
                puVar26 = puVar26 + 1;
                puVar28 = puVar28 + 1;
              }
            }
            local_100 = local_100 + -1;
            uVar11 = uVar15;
            puVar26 = puVar27;
          } while (-1 < local_100);
          iVar25 = 0;
          if (0 < (int)uVar15) {
            do {
              uStack_12a = (undefined2)
                           *(undefined4 *)
                            (puVar23 + iVar25 * 4 + uVar15 * -8 + iVar21 * -8 + iVar7 * -8);
              local_128 = (undefined2)
                          ((uint)*(undefined4 *)
                                  (puVar23 + iVar25 * 4 + uVar15 * -8 + iVar21 * -8 + iVar7 * -8) >>
                          0x10);
              local_134 = *(uint *)(local_9c + (uint)*(ushort *)(local_120 + local_20[iVar25]) * 10);
              local_130 = STReplaceLowWord((uint32_t)(local_130), (uint16_t)((short)*(uint *)((int)(local_9c + (uint)*(ushort *) (local_120 + local_20[iVar25]) * 10) + 4)));
              local_126 = 2;
              *(uint **)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -4) = &local_134;
              *(undefined4 *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -8) =
                   param_8->field_001C;
              *(undefined4 *)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -0xc) =
                   0x69a631;
              st::fn_006AE1C0
                        (*(DArrayTy **)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -8),
                         *(void **)(puVar23 + iVar20 + uVar15 * -8 + iVar24 + iVar7 * -8 + -4));
              local_118 = local_118 + 1;
              iVar25 = iVar25 + 1;
            } while (iVar25 < (int)uVar15);
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return local_118;
}

// 0069ADA0 CGenerate::sub_0069ADA0
#line 4 "decomp/ST.exe/functions/0069ADA0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=12;
   incoming_edx_uses=2; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0069ADA0(CGenerate *this,int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  short *psVar6;
  byte bVar7;
  int iVar8;
  int uVar10;
  short *psVar9;
  int uVar12;
  uint uVar13;
  int uVar11;
  int local_18;
  int local_14;
  int local_10;

  iVar1 = param_2;
  pbVar5 = st::pointer_boundary_cast<byte *>(this->field_000C);
  iVar3 = (int)*(short *)(pbVar5 + 2) * (int)*(short *)pbVar5;
  local_18 = 0;
  if (0 < *(int *)(pbVar5 + 0x455)) {
    do {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar8 = *(int *)(pbVar5 + local_18 * 4 + 0x459);
      if (iVar8 != 0) {
        iVar4 = (int)*(short *)(iVar8 + 8);
        psVar6 = (short *)(param_1 +
                          ((int)*(short *)(iVar8 + 6) * (int)*(short *)pbVar5 + iVar4 * iVar3 +
                          (int)*(short *)(iVar8 + 4)) * 2);
        if (*(short *)(iVar8 + 8) == 0) {
          *psVar6 = -1;
          psVar6[1] = -1;
          psVar6[*(short *)this->field_000C] = -1;
          psVar6[*(short *)this->field_000C + 1] = -1;
        }
        else {
          uVar10 = 0x8000;
          local_14 = 0;
          uVar11 = 8;
          uVar12 = 0x80;
          if (param_2 <= iVar4) {
            local_14 = (iVar4 - param_2) + 1;
            bVar7 = (byte)local_14;
            uVar11 = 8 >> (bVar7 & 0x1f);
            psVar6 = psVar6 + -(local_14 * iVar3);
            uVar12 = 0x80 >> (bVar7 & 0x1f);
            uVar10 = 0x8000 >> (bVar7 & 0x1f);
          }
          if (local_14 < (int)(uint)*(byte *)(iVar8 + 0x48)) {
            local_14 = (uint)*(byte *)(iVar8 + 0x48) - local_14;
            do {
              uVar13 = *(uint *)(iVar8 + 0x2c);
              if ((uVar11 & uVar13) != 0) {
                if ((uVar12 & uVar13) == 0) {
                  sVar2 = (-(ushort)((uVar13 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar2 = -1;
                }
                *psVar6 = sVar2;
              }
              uVar13 = *(uint *)(iVar8 + 0x30);
              if ((uVar11 & uVar13) != 0) {
                if ((uVar12 & uVar13) == 0) {
                  sVar2 = (-(ushort)((uVar13 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar2 = -1;
                }
                psVar6[1] = sVar2;
              }
              uVar13 = *(uint *)(iVar8 + 0x34);
              if ((uVar11 & uVar13) != 0) {
                if ((uVar12 & uVar13) == 0) {
                  sVar2 = (-(ushort)((uVar13 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar2 = -1;
                }
                psVar6[*(short *)this->field_000C] = sVar2;
              }
              uVar13 = *(uint *)(iVar8 + 0x38);
              if ((uVar11 & uVar13) != 0) {
                if ((uVar12 & uVar13) == 0) {
                  sVar2 = (-(ushort)((uVar13 & uVar10) != 0) & 0x3fff) + 0xbfff;
                }
                else {
                  sVar2 = -1;
                }
                psVar6[*(short *)this->field_000C + 1] = sVar2;
              }
              psVar6 = psVar6 + -iVar3;
              uVar11 = uVar11 >> 1;
              uVar12 = uVar12 >> 1;
              uVar10 = uVar10 >> 1;
              local_14 = local_14 + -1;
            } while (local_14 != 0);
          }
          if ((*(byte *)(iVar8 + 0x4f) & 0x10) != 0) {
            if (uVar12 == 0) {
              uVar13 = 1;
            }
            else {
              uVar13 = uVar12 << 1;
            }
            if ((uVar13 & *(uint *)(iVar8 + 0x2c)) == 0) {
              sVar2 = (-(ushort)((*(uint *)(iVar8 + 0x2c) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              sVar2 = -1;
            }
            *psVar6 = sVar2;
            if ((uVar13 & *(uint *)(iVar8 + 0x30)) == 0) {
              sVar2 = (-(ushort)((*(uint *)(iVar8 + 0x30) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              sVar2 = -1;
            }
            psVar6[1] = sVar2;
            if ((uVar13 & *(uint *)(iVar8 + 0x34)) == 0) {
              sVar2 = (-(ushort)((*(uint *)(iVar8 + 0x34) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              sVar2 = -1;
            }
            psVar6[*(short *)this->field_000C] = sVar2;
            if ((uVar13 & *(uint *)(iVar8 + 0x38)) == 0) {
              psVar6[*(short *)this->field_000C + 1] =
                   (-(ushort)((*(uint *)(iVar8 + 0x38) & 1) != 0) & 0x3fff) + 0xbfff;
            }
            else {
              psVar6[*(short *)this->field_000C + 1] = -1;
            }
          }
        }
      }
      pbVar5 = st::pointer_boundary_cast<byte *>(this->field_000C);
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(pbVar5 + 0x455));
  }
  local_10 = 0;
  if (0 < param_2) {
    do {
      pbVar5 = st::pointer_boundary_cast<byte *>(this->field_000C);
      param_2 = 0;
      if (0 < *(short *)(pbVar5 + 2)) {
        do {
          psVar6 = (short *)(param_1 + (*(short *)pbVar5 * param_2 + local_10 * iVar3) * 2);
          iVar8 = 0;
          if (0 < *(short *)pbVar5) {
            psVar9 = psVar6 + iVar3;
            do {
              if ((*psVar6 == -1) && ((3 < local_10 || ((local_10 + 1 < iVar1 && (*psVar9 != 0))))))
              {
                *psVar6 = -2;
              }
              iVar8 = iVar8 + 1;
              psVar9 = psVar9 + 1;
              psVar6 = psVar6 + 1;
            } while (iVar8 < *(short *)this->field_000C);
          }
          pbVar5 = st::pointer_boundary_cast<byte *>(this->field_000C);
          param_2 = param_2 + 1;
        } while (param_2 < *(short *)(pbVar5 + 2));
      }
      local_10 = local_10 + 1;
    } while (local_10 < iVar1);
  }
  return;
}

// 0069B190 CGenerate::sub_0069B190
#line 4 "decomp/ST.exe/functions/0069B190/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=12; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_0069B190(CGenerate *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_18;
  int local_14;
  int local_c;
  int local_8;

  local_c = 0;
  local_18 = 0;
  this->field_582F = param_1 * param_2;
  uVar9 = (param_3 + 1) * param_1 * param_2;
  this->field_5833 = param_1;
  this->field_5837 = param_2;
  st::fn_006AB060(&this->field_584F);
  uVar4 = uVar9 * 2;
  puVar2 = st::pointer_boundary_cast<ushort *>(st::fn_006AAC70(uVar4));
  this->field_584F = puVar2;
  for (uVar9 = (uVar9 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
    puVar2[0] = 0;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (ushort *)((int)puVar2 + 1);
  }
  st::fn_00405D0D(this,(int)this->field_584F,param_3 + 1);
  if (0 < param_3) {
    do {
      iVar1 = this->field_582F;
      local_14 = 0;
      if (-1 < this->field_5837) {
        do {
          iVar6 = this->field_5833;
          iVar5 = 0;
          if (-1 < iVar6) {
            iVar7 = iVar6 * local_14 + local_18 * iVar1;
            param_2 = iVar7 * 2;
            do {
              iVar8 = iVar7 + 1;
              iVar5 = iVar5 + 1;
              iVar10 = iVar8;
              if (iVar6 <= iVar5) {
                iVar10 = -1;
              }
              if (this->field_5837 < local_14 + 1) {
                iVar6 = -1;
                local_8 = -1;
              }
              else {
                iVar6 = param_1 + -1 + iVar8;
                if (iVar10 < 0) {
                  local_8 = -1;
                }
                else {
                  local_8 = iVar8 + param_1;
                }
              }
              if (-1 < iVar7) {
                psVar3 = (short *)((int)this->field_584F + param_2);
                if (*psVar3 == -1) {
                  *psVar3 = 1;
                  local_c = local_c + 1;
                }
                if ((((iVar8 != 1 && -1 < iVar7) && (0 < iVar10)) && (0 < iVar6)) && (0 < local_8))
                {
                  puVar2 = st::pointer_boundary_cast<ushort *>(this->field_584F);
                  if (((((*(short *)(param_2 + (int)puVar2) == -1) ||
                        (0 < *(short *)(param_2 + (int)puVar2))) &&
                       ((puVar2[iVar10] == 0xffff || (0 < (short)puVar2[iVar10])))) &&
                      ((puVar2[iVar6] == 0xffff || (0 < (short)puVar2[iVar6])))) &&
                     ((puVar2[local_8] == 0xffff || (0 < (short)puVar2[local_8])))) {
                    *(undefined2 *)(param_2 + (int)puVar2) = 4;
                  }
                }
              }
              param_2 = param_2 + 2;
              iVar6 = this->field_5833;
              iVar7 = iVar8;
            } while (iVar5 <= iVar6);
          }
          local_14 = local_14 + 1;
        } while (local_14 <= this->field_5837);
      }
      local_18 = local_18 + 1;
    } while (local_18 < param_3);
  }
  return local_c;
}

// 0069B400 CGenerate::sub_0069B400
#line 4 "decomp/ST.exe/functions/0069B400/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=16; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
st::fn_0069B400(CGenerate *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short *psVar7;
  int *local_10;
  int local_c;

  iVar2 = 0;
  iVar3 = (param_3 - param_1) + 1;
  iVar6 = (param_4 - param_2) + 1;
  local_c = 0;
  if (this->field_5847 != 1 && -1 < this->field_5847 + -1) {
    local_10 = (int *)(param_5 + 0x18);
    do {
      param_3 = 0;
      param_4 = 0;
      if (0 < iVar6) {
        iVar4 = (this->field_5833 * param_2 + this->field_582F * local_c + param_1) * 2;
        param_5 = iVar6;
        do {
          if (0 < iVar3) {
            psVar7 = (short *)((int)this->field_584F + iVar4);
            iVar5 = iVar3;
            do {
              sVar1 = *psVar7;
              if (0 < sVar1) {
                iVar2 = iVar2 + sVar1;
                if (sVar1 == 4) {
                  param_4 = param_4 + 1;
                }
                else {
                  param_3 = param_3 + 1;
                }
              }
              psVar7 = psVar7 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          iVar4 = iVar4 + this->field_5833 * 2;
          param_5 = param_5 + -1;
        } while (param_5 != 0);
      }
      local_c = local_c + 1;
      local_10[-5] = param_3;
      *local_10 = param_4;
      local_10 = local_10 + 1;
    } while (local_c < this->field_5847 + -1);
  }
  return iVar2;
}

// 0069BDC0 CGenerate::sub_0069BDC0
#line 4 "decomp/ST.exe/functions/0069BDC0/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=3; incoming_stack_parameter_uses=19; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall
st::fn_0069BDC0
          (CGenerate *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          RecoveredRecord_CGenerate_0069BDC0 *param_7)

{
  alignas(4) byte st_stack_frame[184];

  undefined1 *puVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  uint uVar5;
  uint local_EAX_838;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int local_7c;
  undefined4 *local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  uint local_60;
  int *local_5c;
  int *local_58;
  int local_50;
  int local_48;
  int local_40;
  uint local_3c;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079d808);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 32);
  local_40 = 0;
  local_68 = 0;
  local_7c = 0;
  if ((param_2 < 5) || (param_3 < 5)) {
    local_40 = 0;
  }
  else {
    local_48 = param_2 / 2 + param_3 / 2;
    local_48 = local_48 + local_48 / 2;
    uVar6 = ((this->field_5833 - param_2) / param_4 + 2) *
            ((this->field_5837 - param_3) / param_4 + 2);
    ExceptionList = &local_14;
    local_78 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70(uVar6 * 0x40));
    puVar10 = local_78;
    for (iVar5 = (uVar6 & 0x3ffffff) << 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    local_64 = 0;
    local_2c = 1;
    local_3c = 0;
    local_50 = 0;
    while (iVar5 = 0, (int)local_3c < (int)uVar6) {
      if (this->field_5837 < local_64 + param_3) {
        local_64 = st::machine_word_boundary_cast<int>(this->field_5837 - param_3);
        local_2c = 0;
      }
      local_24 = 1;
      iVar9 = local_64 + -1;
      iVar7 = local_3c << 6;
      do {
        *(int *)(iVar7 + 0x30 + (int)local_78) = iVar5;
        *(int *)(iVar7 + 0x34 + (int)local_78) = local_64;
        *(int *)(iVar7 + 0x38 + (int)local_78) = param_2 + -1 + iVar5;
        *(int *)(iVar7 + 0x3c + (int)local_78) = iVar9 + param_3;
        puVar1 = (undefined1 *)(iVar7 + (int)local_78);
        if (this->field_5833 + -1 <= *(int *)(puVar1 + 0x38)) {
          local_24 = 0;
        }
        iVar2 = st::fn_00401163(this,iVar5,local_64,*(int *)(puVar1 + 0x38),*(int *)(puVar1 + 0x3c),
                             (int)puVar1);
        *(int *)(iVar7 + 0x2c + (int)local_78) = iVar2;
        iVar2 = *(int *)(iVar7 + 0x2c + (int)local_78);
        if (local_50 < iVar2) {
          local_50 = iVar2;
        }
        local_3c = local_3c + 1;
        iVar7 = iVar7 + 0x40;
        iVar5 = iVar5 + param_4;
        iVar2 = this->field_5833;
        if (iVar2 <= iVar5 + param_2) {
          iVar5 = iVar2 - param_2;
        }
      } while ((iVar5 < iVar2) && (local_24 != 0));
      local_64 = local_64 + param_4;
      if ((this->field_5837 <= local_64) ||
         (((-1 < (int)local_3c && (this->field_5837 + -1 <= (int)local_78[local_3c * 0x10 + -1])) ||
          (local_2c == 0)))) break;
    }
    iVar5 = local_40;
    if (-1 < (int)local_3c) {
      iVar5 = param_1 * -4;
      local_5c = (int *)((st_stack_frame + 32) + iVar5);
      piVar8 = (int *)((st_stack_frame + 32) + iVar5);
      *(undefined4 *)((st_stack_frame + 28) + iVar5) = 0x69bfdd;
      local_1c = (st_stack_frame + 32);
      local_58 = (int *)(st_stack_frame + 32);
      local_8 = 0xffffffff;
      st::fn_00730810((undefined1 *)local_78,local_3c,0x40,st::pointer_boundary_cast<undefined *>(st::fn_00402ADB));
      local_28 = (local_50 * param_5) / 100;
      local_60 = 0;
      if (0 < (int)local_3c) {
        do {
          if ((int)local_78[local_60 * 0x10 + 0xb] < local_28) {
            local_3c = local_60;
            break;
          }
          local_60 = local_60 + 1;
        } while ((int)local_60 < (int)local_3c);
      }
      local_50 = 0;
      for (local_74 = local_3c * param_1 * 0x32; -1 < local_74; local_74 = local_74 + -1) {
        iVar4 = st::fn_00404ED0((int)local_78,local_3c,piVar8,param_1,local_48,local_28);
        if (iVar4 == param_1) {
          local_40 = 1;
          iVar3 = st::fn_00405169(this,(int)local_78,piVar8,param_1,0x122,&local_6c,&local_20);
          iVar5 = param_1;
          piVar11 = local_58;
          if (local_50 < iVar3) {
            for (; iVar5 != 0; iVar5 = iVar5 + -1) {
              *piVar11 = *piVar8;
              piVar8 = piVar8 + 1;
              piVar11 = piVar11 + 1;
            }
            local_68 = local_6c;
            local_7c = local_20;
            piVar8 = local_5c;
            local_50 = iVar3;
          }
        }
      }
      iVar5 = local_40;
      if (local_40 != 0) {
        param_7->field_0010 = local_68;
        param_7->field_0014 = local_7c;
        iVar9 = 0;
        iVar5 = param_1;
        if (0 < param_1) {
LAB_0069c0f3:
          uVar5 = st::fn_0072E6C0();
          iVar5 = (int)uVar5 % 3 + 1;
          local_30 = iVar5;
          local_EAX_838 = st::fn_0072E6C0();
          piVar8 = local_58;
          uVar6 = local_EAX_838 & 0x80000007;
          if ((int)uVar6 < 0) {
            uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
          }
          do {
            local_70 = 0;
            while( true ) {
              if (iVar9 <= local_70) {
                local_78[local_58[iVar9] * 0x10] = iVar5 << 0x10 | uVar6 & 0xffff;
                st::fn_006AE1C0
                          ((DArrayTy *)param_7->field_0018,local_78 + local_58[iVar9] * 0x10);
                iVar5 = piVar8[iVar9];
                *(short *)(param_6 + iVar9 * 4) =
                     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                     (short)((int)(local_78[iVar5 * 0x10 + 0xe] - local_78[iVar5 * 0x10 + 0xc]) / 2)
                     + *(short *)(local_78 + iVar5 * 0x10 + 0xc);
                iVar5 = piVar8[iVar9];
                *(short *)(param_6 + 2 + iVar9 * 4) =
                     /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                     (short)((int)(local_78[iVar5 * 0x10 + 0xf] - local_78[iVar5 * 0x10 + 0xd]) / 2)
                     + *(short *)(local_78 + iVar5 * 0x10 + 0xd);
                iVar9 = iVar9 + 1;
                iVar5 = param_1;
                if (iVar9 < param_1) goto LAB_0069c0f3;
                goto LAB_0069c1df;
              }
              if (*(ushort *)(local_78 + local_58[local_70] * 0x10) == uVar6) break;
              local_70 = local_70 + 1;
            }
            if ((int)uVar6 < 7) {
              uVar6 = uVar6 + 1;
              iVar5 = local_30;
            }
            else {
              uVar6 = 0;
              iVar5 = local_30 + 1;
              local_30 = iVar5;
              if (3 < iVar5) {
                iVar5 = 1;
                local_30 = 1;
              }
            }
          } while( true );
        }
      }
    }
LAB_0069c1df:
    local_40 = iVar5;
    st::fn_006AB060(&local_78);
  }
  ExceptionList = local_14;
  return local_40;
}

// 0069CB50 CGenerate::sub_0069CB50
#line 4 "decomp/ST.exe/functions/0069CB50/decomp.c"
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=234; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint __fastcall st::fn_0069CB50(int *param_1)

{
  alignas(4) byte st_stack_frame[416];

  int iVar1;
  undefined4 uVar2;
  dword dVar3;
  undefined1 *puVar4;
  uint *puVar5_mg0;
  int *piVar5;
  uint local_EAX_492;
  int iVar6;
  uint local_EAX_596;
  int iVar10;
  int local_EAX_783;
  uint local_EAX_878;
  uint local_EAX_1239;
  byte *puVar7;
  uint uVar8;
  uint local_EAX_2979;
  uint local_EAX_3093;
  uint local_EAX_3129;
  uint local_EAX_3355;
  uint local_EAX_3372;
  uint local_EAX_3391;
  uint local_EAX_3425;
  uint local_EAX_3468;
  uint local_EAX_3483;
  uint local_EAX_3501;
  uint local_EAX_3523;
  uint local_EAX_3595;
  uint local_EAX_3612;
  uint local_EAX_3633;
  uint local_EAX_3651;
  uint local_EAX_3699;
  uint local_EAX_3716;
  uint uVar9;
  uint local_EAX_3755;
  uint local_EAX_4140;
  uint local_EAX_4255;
  int local_EAX_4407;
  int local_EAX_4442;
  uint local_EAX_4534;
  uint local_EAX_4557;
  uint local_EAX_4580;
  uint local_EAX_4639;
  uint local_EAX_4663;
  uint local_EAX_4755;
  uint local_EAX_4843;
  uint uVar14;
  int iVar9;
  uint uVar10;
  int iVar11;
  DArrayTy *pDVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  AnonShape_0069CB50_B339E56A *pAVar20;
  uint uVar21;
  bool bVar22;
  int aiStackY_1b0 [4];
  undefined4 uStackY_1a0;
  int local_17c;
  uint local_178;
  int local_174;
  int local_170;
  undefined1 *local_16c;
  int local_164;
  int local_15c;
  int local_158;
  uint local_154;
  int local_150;
  int local_148;
  int local_144;
  int local_140;
  uint local_13c;
  uint *local_138;
  int local_134;
  int aiStack_130 [9];
  int local_10c [9];
  uint local_e8;
  uint local_e4;
  int local_dc;
  uint local_d8;
  int local_d4;
  int local_cc;
  int local_c8;
  int local_c4;
  undefined4 *local_c0;
  int local_bc;
  int local_b8;
  void *local_b4;
  int local_b0;
  int local_ac;
  int aiStack_a8 [9];
  int local_84;
  int local_7c;
  void *local_78;
  undefined1 *local_74;
  undefined1 *local_70;
  int local_6c;
  int local_68 [9];
  uint local_44;
  int local_40;
  int local_38;
  int local_34;
  AnonShape_0069CB50_B339E56A *local_30;
  undefined4 *local_28;
  int local_24;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = st::pointer_boundary_cast<undefined *>(&DAT_0079d818);
  puStack_10 = st::pointer_boundary_cast<undefined1 *>(&st_image_0072D964);
  local_14 = ExceptionList;
  local_1c = (st_stack_frame + 4);
  iVar17 = 0;
  local_13c = 0;
  local_40 = 0;
  ExceptionList = &local_14;
  st::fn_004026E4(param_1);
  iVar9 = *(int *)param_1[2] << 1;
  STField<int>(param_1,0x5833) = iVar9;
  STField<int>(param_1,0x5837) = ((int *)param_1[2])[1] << 1;
  uStackY_1a0 = 0x69cbb3;
  st::fn_0040564B((CGenerate *)param_1,iVar9);
  iVar19 = ((int *)param_1[2])[1] * *(int *)param_1[2];
  uStackY_1a0 = 0x69cbd6;
  local_d8 = iVar19 * 4;
  local_78 = st::fn_006AAC70(iVar19 * 0x38);
  uStackY_1a0 = 0x69cbdf;
  local_c0 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70(iVar19 * 4));
  iVar9 = iVar19 * -0x10;
  local_16c = (st_stack_frame + 4) + iVar9;
  *(undefined4 *)((st_stack_frame + 0) + iVar9) = 0x69cc0e;
  local_74 = (st_stack_frame + 4) + iVar19 * -0x20;
  *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x20) = 0x69cc22;
  local_1c = (st_stack_frame + 4) + iVar19 * -0x30;
  local_70 = (st_stack_frame + 4) + iVar19 * -0x30;
  local_8 = 0xffffffff;
  piVar5 = (int *)param_1[2];
  *(int *)((st_stack_frame + 0) + iVar19 * -0x30) = st::machine_word_boundary_cast<int>(piVar5[1] << 1);
  aiStackY_1b0[iVar19 * -0xc + 4] = *piVar5 << 1;
  aiStackY_1b0[iVar19 * -0xc + 3] = (int)local_78;
  aiStackY_1b0[iVar19 * -0xc + 2] = 0x69cc4a;
  st::fn_0040356C(param_1,aiStackY_1b0[iVar19 * -0xc + 3],(int *)aiStackY_1b0[iVar19 * -0xc + 4],
                     *(int *)((st_stack_frame + 0) + iVar19 * -0x30));
  piVar5 = (int *)param_1[2];
  *(int *)((st_stack_frame + 0) + iVar19 * -0x30) = st::machine_word_boundary_cast<int>(piVar5[1] << 1);
  aiStackY_1b0[iVar19 * -0xc + 4] = *piVar5 << 1;
  aiStackY_1b0[iVar19 * -0xc + 3] = (int)local_78;
  aiStackY_1b0[iVar19 * -0xc + 2] = 0x69cc63;
  puVar5_mg0 = st::fn_00404C82(aiStackY_1b0[iVar19 * -0xc + 3],aiStackY_1b0[iVar19 * -0xc + 4],
                                  *(int *)((st_stack_frame + 0) + iVar19 * -0x30));
  local_138 = puVar5_mg0;
  if (puVar5_mg0 == nullptr) {
    *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69ded7;
    uVar14 = st::fn_0072E6C0();
    *(uint *)((st_stack_frame + 0) + iVar19 * -0x30) = uVar14 % DAT_007d88d4;
    aiStackY_1b0[iVar19 * -0xc + 4] = 0x3e9;
    aiStackY_1b0[iVar19 * -0xc + 3] = 0;
    aiStackY_1b0[iVar19 * -0xc + 2] = 100;
    aiStackY_1b0[iVar19 * -0xc + 1] = 100;
    aiStackY_1b0[iVar19 * -0xc] = 0x69def1;
    st::fn_00402856(param_1,aiStackY_1b0[iVar19 * -0xc + 1],aiStackY_1b0[iVar19 * -0xc + 2],
                       aiStackY_1b0[iVar19 * -0xc + 3],aiStackY_1b0[iVar19 * -0xc + 4],
                       *(uint *)((st_stack_frame + 0) + iVar19 * -0x30));
  }
  else {
    uVar16 = puVar5_mg0[3];
    local_13c = uVar16;
    if (0 < (int)uVar16) {
      local_144 = 0;
      iVar14 = 0;
      local_ac = 0;
      uVar10 = 0;
      if (0 < (int)uVar16) {
        do {
          if (uVar10 < puVar5_mg0[3]) {
            piVar5 = (int *)(puVar5_mg0[2] * uVar10 + puVar5_mg0[7]);
          }
          else {
            piVar5 = nullptr;
          }
          if (((piVar5 != nullptr) && (*piVar5 == 0)) && (0 < piVar5[1])) {
            *(uint *)(local_74 + iVar17 * 4) = uVar10;
            *(int *)(local_70 + iVar17 * 4) = piVar5[1];
            iVar17 = iVar17 + 1;
            iVar14 = local_ac + piVar5[1];
            local_144 = iVar17;
            local_ac = iVar14;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar16);
      }
      if ((0 < iVar17) && (0 < iVar14)) {
        iVar14 = STField<int>(param_1,0x5833);
        local_140 = iVar14 * 8;
        local_6c = 0;
        local_7c = (int)(iVar14 + (iVar14 >> 0x1f & 3U)) >> 2;
        while ((0 < local_140 && (local_6c < local_7c))) {
          *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69cd41;
          local_EAX_492 = st::fn_0072E6C0();
          iVar15 = (int)local_EAX_492 % local_ac;
          iVar6 = 0;
          iVar11 = 0;
          iVar14 = iVar15;
          if (0 < iVar17) {
            do {
              iVar6 = iVar6 + *(int *)(local_70 + iVar11 * 4);
              iVar14 = iVar11;
              if (iVar15 < iVar6) break;
              iVar11 = iVar11 + 1;
              iVar14 = iVar15;
            } while (iVar11 < iVar17);
          }
          if (iVar17 <= iVar11) {
            iVar14 = iVar17 + -1;
          }
          if (*(uint *)(local_74 + iVar14 * 4) < puVar5_mg0[3]) {
            pAVar20 = (AnonShape_0069CB50_B339E56A *)
                      (puVar5_mg0[2] * *(uint *)(local_74 + iVar14 * 4) + puVar5_mg0[7]);
          }
          else {
            pAVar20 = nullptr;
          }
          local_30 = pAVar20;
          if (pAVar20 == nullptr) {
            local_140 = local_140 + 1;
          }
          else {
            local_e4 = 0;
            do {
              dVar3 = pAVar20->field_000C->count;
              *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69cda9;
              local_EAX_596 = st::fn_0072E6C0();
              uVar16 = (int)local_EAX_596 % (int)dVar3;
              pDVar12 = pAVar20->field_000C;
              if (uVar16 < pDVar12->count) {
                piVar5 = DArrayAt<int>(pDVar12, uVar16);
              }
              else {
                piVar5 = nullptr;
              }
              local_dc = *piVar5;
              if (((-1 < local_dc) && (*(int *)((int)local_78 + local_dc * 0xe + 6) < 0)) &&
                 ((*(byte *)((int)local_78 + local_dc * 0xe + 1) & 4) != 0)) {
                iVar14 = local_dc / (*(int *)param_1[2] << 1);
                iVar6 = local_dc % (*(int *)param_1[2] << 1);
                local_c4 = 1;
                iVar17 = 0;
                if (0 < local_40) {
                  do {
                    *(int *)((st_stack_frame + 0) + iVar19 * -0x30) = iVar14;
                    aiStackY_1b0[iVar19 * -0xc + 4] = iVar6;
                    puVar4 = local_16c;
                    aiStackY_1b0[iVar19 * -0xc + 3] = (int)*(short *)(local_16c + iVar17 * 4 + 2);
                    aiStackY_1b0[iVar19 * -0xc + 2] = (int)*(short *)(puVar4 + iVar17 * 4);
                    aiStackY_1b0[iVar19 * -0xc + 1] = 0x69ce41;
                    iVar10 = st::fn_006ACF90(aiStackY_1b0[iVar19 * -0xc + 2],
                                          aiStackY_1b0[iVar19 * -0xc + 3],
                                          aiStackY_1b0[iVar19 * -0xc + 4],
                                          *(int *)((st_stack_frame + 0) + iVar19 * -0x30));
                    if (iVar10 < 2) {
LAB_0069ce71:
                      local_c4 = 0;
                      break;
                    }
                    *(int *)((st_stack_frame + 0) + iVar19 * -0x30) = iVar14 + 1;
                    aiStackY_1b0[iVar19 * -0xc + 4] = iVar6 + 1;
                    puVar4 = local_16c;
                    aiStackY_1b0[iVar19 * -0xc + 3] = (int)*(short *)(local_16c + iVar17 * 4 + 2);
                    aiStackY_1b0[iVar19 * -0xc + 2] = (int)*(short *)(puVar4 + iVar17 * 4);
                    aiStackY_1b0[iVar19 * -0xc + 1] = 0x69ce64;
                    local_EAX_783 =
                         st::fn_006ACF90(aiStackY_1b0[iVar19 * -0xc + 2],
                                      aiStackY_1b0[iVar19 * -0xc + 3],
                                      aiStackY_1b0[iVar19 * -0xc + 4],
                                      *(int *)((st_stack_frame + 0) + iVar19 * -0x30));
                    if (local_EAX_783 < 2) goto LAB_0069ce71;
                    iVar17 = iVar17 + 1;
                  } while (iVar17 < local_40);
                }
                iVar11 = local_40;
                iVar17 = local_144;
                pAVar20 = local_30;
                if (local_c4 != 0) {
                  *(short *)(local_16c + local_40 * 4) = (short)iVar6;
                  *(short *)(local_16c + local_40 * 4 + 2) = (short)iVar14;
                  local_6c = local_6c + 1;
                  *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69cec3;
                  local_EAX_878 = st::fn_0072E6C0();
                  *(uint *)((st_stack_frame + 0) + iVar19 * -0x30) = local_EAX_878 % DAT_007d9134;
                  aiStackY_1b0[iVar19 * -0xc + 4] = 0x3ee;
                  aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                  aiStackY_1b0[iVar19 * -0xc + 2] = iVar14 * 100;
                  aiStackY_1b0[iVar19 * -0xc + 1] = iVar6 * 100;
                  aiStackY_1b0[iVar19 * -0xc] = 0x69cefa;
                  st::fn_00402856(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                     aiStackY_1b0[iVar19 * -0xc + 2],aiStackY_1b0[iVar19 * -0xc + 3]
                                     ,aiStackY_1b0[iVar19 * -0xc + 4],
                                     *(uint *)((st_stack_frame + 0) + iVar19 * -0x30));
                  *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3ee;
                  piVar5 = (int *)param_1[2];
                  *(int *)((st_stack_frame + 0) + iVar19 * -0x30) = st::machine_word_boundary_cast<int>(piVar5[1] << 1);
                  aiStackY_1b0[iVar19 * -0xc + 4] = *piVar5 << 1;
                  aiStackY_1b0[iVar19 * -0xc + 3] = iVar14 * 100;
                  aiStackY_1b0[iVar19 * -0xc + 2] = iVar6 * 100;
                  aiStackY_1b0[iVar19 * -0xc + 1] = (int)local_78;
                  aiStackY_1b0[iVar19 * -0xc] = 0x69cf35;
                  st::fn_00405D99(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                     aiStackY_1b0[iVar19 * -0xc + 2],aiStackY_1b0[iVar19 * -0xc + 3]
                                     ,aiStackY_1b0[iVar19 * -0xc + 4],
                                     *(int *)((st_stack_frame + 0) + iVar19 * -0x30));
                  local_40 = iVar11 + 1;
                  iVar17 = local_144;
                  break;
                }
              }
              local_e4 = local_e4 + 1;
            } while ((int)local_e4 < 10);
            local_140 = local_140 + -1;
            puVar5_mg0 = local_138;
          }
        }
      }
      iVar17 = 0;
      local_144 = 0;
      iVar14 = 0;
      local_ac = 0;
      uVar16 = 0;
      if (0 < (int)local_13c) {
        do {
          if (uVar16 < puVar5_mg0[3]) {
            piVar5 = (int *)(puVar5_mg0[2] * uVar16 + puVar5_mg0[7]);
          }
          else {
            piVar5 = nullptr;
          }
          if ((piVar5 != nullptr) && (*piVar5 == 0xff)) {
            *(uint *)(local_74 + iVar17 * 4) = uVar16;
            *(undefined4 *)(local_70 + iVar17 * 4) = *(undefined4 *)(piVar5[3] + 0xc);
            iVar14 = iVar14 + *(int *)(piVar5[3] + 0xc);
            iVar17 = iVar17 + 1;
            puVar5_mg0 = local_138;
            local_144 = iVar17;
            local_ac = iVar14;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_13c);
      }
      if ((0 < iVar17) && (0 < iVar14)) {
        local_140 = iVar17 / 2 + 1;
        local_134 = (iVar17 * 3) / 2 + 1;
        local_17c = 0;
        while ((0 < local_140 && (local_17c < local_134))) {
          iVar6 = 0;
          local_b4 = nullptr;
          local_28 = nullptr;
          *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d02c;
          local_EAX_1239 = st::fn_0072E6C0();
          local_148 = (int)local_EAX_1239 % local_ac;
          iVar17 = 0;
          iVar14 = 0;
          if (0 < local_144) {
            do {
              iVar17 = iVar17 + *(int *)(local_70 + iVar14 * 4);
              if ((int)local_EAX_1239 % local_ac < iVar17) {
                local_148 = iVar14;
                break;
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 < local_144);
          }
          if (local_144 <= iVar14) {
            local_148 = local_144 + -1;
          }
          local_15c = local_148;
          if (*(uint *)(local_74 + local_148 * 4) < local_138[3]) {
            local_30 = (AnonShape_0069CB50_B339E56A *)
                       (local_138[2] * *(uint *)(local_74 + local_148 * 4) + local_138[7]);
          }
          else {
            local_30 = nullptr;
          }
          if (local_30 == nullptr) {
            local_140 = local_140 + 1;
          }
          else {
            local_164 = 0;
            puVar7 = (byte *)(local_c0);
            memset(puVar7, 0, local_d8); /* compiler bulk-zero initialization */
            local_e4 = 0;
            pDVar12 = local_30->field_000C;
            if (0 < (int)pDVar12->count) {
              bVar22 = pDVar12->count != 0;
              do {
                uVar16 = local_e4;
                if (bVar22) {
                  puVar7 = DArrayAt<byte>(pDVar12, local_e4);
                }
                else {
                  puVar7 = nullptr;
                }
                uVar2 = *puVar7;
                *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0;
                aiStackY_1b0[iVar19 * -0xc + 4] = (int)local_68;
                aiStackY_1b0[iVar19 * -0xc + 3] = *(int *)param_1[2] << 1;
                aiStackY_1b0[iVar19 * -0xc + 2] = uVar2;
                aiStackY_1b0[iVar19 * -0xc + 1] = 0x69d10d;
                iVar17 = st::fn_00405C81(param_1,aiStackY_1b0[iVar19 * -0xc + 2],
                                            aiStackY_1b0[iVar19 * -0xc + 3],
                                            (int *)aiStackY_1b0[iVar19 * -0xc + 4],
                                            *(int **)((st_stack_frame + 0) + iVar19 * -0x30));
                iVar14 = 0;
                if (0 < iVar17) {
                  do {
                    if ((*(int *)((int)local_78 + local_68[iVar14] * 0xe + 2) == 0) &&
                       (*(char *)(iVar6 + (int)local_c0) == '\0')) {
                      *(short *)(local_16c + iVar6 * 4 + 2) =
                           (short)(local_68[iVar14] / (*(int *)param_1[2] << 1));
                      *(short *)(local_16c + iVar6 * 4) =
                           (short)(local_68[iVar14] % (*(int *)param_1[2] << 1));
                      *(undefined1 *)(local_68[iVar14] + (int)local_c0) = 1;
                      iVar6 = iVar6 + 1;
                      local_164 = iVar6;
                    }
                    iVar14 = iVar14 + 1;
                    uVar16 = local_e4;
                  } while (iVar14 < iVar17);
                }
                local_e4 = uVar16 + 1;
                pDVar12 = local_30->field_000C;
                bVar22 = local_e4 < pDVar12->count;
              } while ((int)local_e4 < (int)pDVar12->count);
            }
            *(int *)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) = iVar6 * 8;
            aiStackY_1b0[iVar19 * -0xc + 4] = 0x69d1b2;
            local_b4 = st::fn_006AAC70
                                 (*(uint *)((st_stack_frame + 0) +
                                           iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
            *(int *)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) = iVar6 * 4;
            aiStackY_1b0[iVar19 * -0xc + 4] = 0x69d1c5;
            local_28 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70
                                 (*(uint *)((st_stack_frame + 0) +
                                           iVar19 * -0x20 + iVar9 + -0x198 + 0x198)));
            local_44 = 0;
            local_b8 = -1;
            local_24 = -1;
            local_d4 = 0;
            local_178 = 0;
            local_158 = 0;
            local_e4 = 0;
            if (0 < iVar6) {
LAB_0069d203:
              if (local_24 < 0) {
                local_dc = (int)*(short *)(local_16c + local_178 * 4) +
                           (int)*(short *)(local_16c + local_178 * 4 + 2) * *(int *)param_1[2] * 2;
              }
              else {
                local_dc = local_24;
              }
              if ((1 < *(byte *)(local_dc + (int)local_c0)) &&
                 (local_154 = 0, uVar16 = local_178, 0 < local_164)) {
                do {
                  uVar16 = uVar16 + 1;
                  if (local_164 <= (int)uVar16) {
                    uVar16 = 0;
                  }
                  local_dc = (int)*(short *)(local_16c + uVar16 * 4) +
                             (int)*(short *)(local_16c + uVar16 * 4 + 2) * *(int *)param_1[2] * 2;
                } while ((1 < *(byte *)(local_dc + (int)local_c0)) &&
                        (local_154 = local_154 + 1, (int)local_154 < local_164));
              }
              iVar17 = local_dc;
              if (*(byte *)(local_dc + (int)local_c0) < 2) {
                *(int **)((st_stack_frame + 0) + iVar19 * -0x30) = &local_174;
                aiStackY_1b0[iVar19 * -0xc + 4] = (int)local_68;
                aiStackY_1b0[iVar19 * -0xc + 3] = *(int *)param_1[2] << 1;
                aiStackY_1b0[iVar19 * -0xc + 2] = iVar17;
                aiStackY_1b0[iVar19 * -0xc + 1] = 0x69d2d2;
                iVar14 = st::fn_00405C81(param_1,aiStackY_1b0[iVar19 * -0xc + 2],
                                            aiStackY_1b0[iVar19 * -0xc + 3],
                                            (int *)aiStackY_1b0[iVar19 * -0xc + 4],
                                            *(int **)((st_stack_frame + 0) + iVar19 * -0x30));
                uVar16 = 0;
                local_bc = 0;
                local_38 = 0;
                if (local_174 == 8) {
                  bVar22 = false;
                  local_e8 = 0xffffffff;
                  if (0 < iVar14) {
                    do {
                      aiStack_130[uVar16] = 0;
                      aiStack_a8[uVar16] = 0;
                      iVar17 = local_68[uVar16];
                      if (*(int *)((int)local_78 + iVar17 * 0xe + 10) ==
                          *(int *)(local_74 + local_148 * 4)) {
                        aiStack_a8[uVar16] = iVar17 + 1;
                        local_38 = local_38 + 1;
                        if (!bVar22) {
                          bVar22 = true;
                        }
                      }
                      if (*(char *)(iVar17 + (int)local_c0) == '\x01') {
                        aiStack_130[uVar16] = iVar17 + 1;
                        local_bc = local_bc + 1;
                        if ((bVar22) && ((int)local_e8 < 0)) {
                          local_e8 = uVar16 - 1;
                        }
                      }
                      if (((uVar16 == iVar14 - 1U) && (bVar22)) && ((int)local_e8 < 0)) {
                        local_e8 = uVar16;
                      }
                      uVar16 = uVar16 + 1;
                      iVar17 = local_dc;
                    } while ((int)uVar16 < iVar14);
                  }
                  uVar16 = local_e8;
                  if (local_24 == -1) {
                    local_28[local_44] = local_178 & 0xffff;
                    local_158 = 1;
                  }
                  local_24 = -1;
                  if (-1 < (int)local_e8) {
                    local_b8 = -1;
                    if (local_38 == 1) {
                      iVar14 = aiStack_a8[local_e8];
                      goto LAB_0069d44d;
                    }
                    if (local_38 == 2) {
                      uVar10 = 0;
                      do {
                        uVar21 = uVar10 & 0x80000001;
                        bVar22 = uVar21 == 0;
                        if ((int)uVar21 < 0) {
                          bVar22 = (uVar21 - 1 | 0xfffffffe) == 0xffffffff;
                        }
                        if ((bVar22) && (aiStack_a8[uVar10] != 0)) goto LAB_0069d43d;
                        uVar10 = uVar10 + 1;
                      } while ((int)uVar10 < 8);
                    }
                    else if (local_38 == 3) {
                      iVar14 = 0;
                      uVar10 = 0;
                      do {
                        if (aiStack_a8[uVar10] != 0) {
                          if (iVar14 == 1) goto LAB_0069d43d;
                          iVar14 = iVar14 + 1;
                        }
                        uVar10 = uVar10 + 1;
                      } while ((int)uVar10 < 8);
                    }
                    goto LAB_0069d454;
                  }
                  goto LAB_0069d4ca;
                }
                local_b8 = -1;
                local_24 = -1;
                if (local_44 == 0) {
                  *(int *)((int)local_b4 + local_178 * 8) = iVar17;
                  *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
                  *local_28 = 0x10000;
                  local_44 = 1;
                  local_158 = 0;
                  uVar16 = 1;
                }
                else {
                  *(int *)((int)local_b4 + local_178 * 8) = iVar17;
                  *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
                  if (local_158 == 1) {
                    local_28[local_44] =
                         (local_178 + 1) * 0x10000 | (uint)*(ushort *)(local_28 + local_44);
                    uVar16 = local_44 + 1;
                    local_44 = uVar16;
                    local_158 = 0;
                  }
                  else {
                    local_28[local_44] = (local_178 + 1) * 0x10000 | local_178 & 0xffff;
                    uVar16 = local_44 + 1;
                    local_44 = uVar16;
                  }
                }
                goto LAB_0069d5f2;
              }
            }
LAB_0069d626:
            if (local_44 != 0) {
              local_e4 = 0;
              if (0 < (int)local_44) {
                do {
                  uVar16 = local_e4;
                  iVar14 = 0;
                  uVar10 = (uint)*(ushort *)(local_28 + local_e4);
                  uVar21 = (uint)local_28[local_e4] >> 0x10;
                  local_e8 = uVar21;
                  iVar17 = uVar21 - uVar10;
                  local_bc = 0;
                  local_c8 = 0;
                  local_34 = 0;
                  local_84 = 0;
                  if (iVar17 < 8) {
                    if (2 < iVar17) goto LAB_0069d684;
                    local_c8 = 1;
                  }
                  else {
                    *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d678;
                    uVar8 = st::fn_0072E6C0();
                    iVar17 = ((int)uVar8 % 3) * 2 + 3;
LAB_0069d684:
                    local_bc = iVar17;
                    local_34 = iVar17 / 2;
                    iVar14 = 1;
                    local_84 = 1;
                    local_d4 = 0;
                  }
                  local_154 = uVar10;
                  if (uVar10 < uVar21) {
                    do {
                      if (iVar14 == 0) {
LAB_0069d7b2:
                        iVar17 = *(int *)((int)local_b4 + local_154 * 8);
                        iVar14 = *(int *)((int)local_b4 + local_154 * 8 + 4);
                        if (-1 < iVar17) {
                          iVar11 = iVar17 * 0xe;
                          iVar6 = *(int *)(iVar11 + 6 + (int)local_78);
                          if ((iVar6 < 0) || (iVar6 != 0x3ed)) {
                            iVar13 = *(int *)param_1[2] << 1;
                            iVar6 = (iVar17 / iVar13) * 100;
                            iVar15 = iVar6 + 0x32;
                            iVar17 = (iVar17 % iVar13) * 100;
                            iVar1 = iVar17 + 0x32;
                            if (iVar14 < 0) {
                              *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d960;
                              local_EAX_3595 = st::fn_0072E6C0();
                              if ((int)local_EAX_3595 % 6 == 0) {
                                *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d971;
                                local_EAX_3612 = st::fn_0072E6C0();
                                *(uint *)((st_stack_frame + 0) + iVar19 * -0x30) =
                                     local_EAX_3612 % DAT_007d9564;
                                aiStackY_1b0[iVar19 * -0xc + 4] = 0x3f0;
                                aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                                aiStackY_1b0[iVar19 * -0xc + 2] = 0x69d986;
                                local_EAX_3633 = st::fn_0072E6C0();
                                aiStackY_1b0[iVar19 * -0xc + 2] =
                                     (int)local_EAX_3633 % 0x51 + -0x28 + iVar15;
                                aiStackY_1b0[iVar19 * -0xc + 1] = 0x69d998;
                                local_EAX_3651 = st::fn_0072E6C0();
                                aiStackY_1b0[iVar19 * -0xc + 1] =
                                     (int)local_EAX_3651 % 0x51 + -0x28 + iVar1;
                                aiStackY_1b0[iVar19 * -0xc] = 0x69d9b0;
                                st::fn_00402856(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                                   aiStackY_1b0[iVar19 * -0xc + 2],
                                                   aiStackY_1b0[iVar19 * -0xc + 3],
                                                   aiStackY_1b0[iVar19 * -0xc + 4],
                                                   *(uint *)((st_stack_frame + 0) + iVar19 * -0x30));
                                *(undefined4 *)(iVar11 + 6 + (int)local_78) = 0x3f0;
                              }
                              else {
                                *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d9c8;
                                local_EAX_3699 = st::fn_0072E6C0();
                                if ((int)local_EAX_3699 % 9 == 0) {
                                  *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d9d9;
                                  local_EAX_3716 = st::fn_0072E6C0();
                                  *(uint *)((st_stack_frame + 0) + iVar19 * -0x30) =
                                       local_EAX_3716 % DAT_007d977c;
                                  aiStackY_1b0[iVar19 * -0xc + 4] = 0x3f1;
                                  aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                                  aiStackY_1b0[iVar19 * -0xc + 2] = 0x69d9ee;
                                  uVar9 = st::fn_0072E6C0();
                                  aiStackY_1b0[iVar19 * -0xc + 2] =
                                       (int)uVar9 % 0x51 + -0x28 + iVar15;
                                  aiStackY_1b0[iVar19 * -0xc + 1] = 0x69da00;
                                  local_EAX_3755 = st::fn_0072E6C0();
                                  aiStackY_1b0[iVar19 * -0xc + 1] =
                                       (int)local_EAX_3755 % 0x51 + -0x28 + iVar1;
                                  aiStackY_1b0[iVar19 * -0xc] = 0x69da18;
                                  st::fn_00402856(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                                     aiStackY_1b0[iVar19 * -0xc + 2],
                                                     aiStackY_1b0[iVar19 * -0xc + 3],
                                                     aiStackY_1b0[iVar19 * -0xc + 4],
                                                     *(uint *)((st_stack_frame + 0) + iVar19 * -0x30));
                                  *(undefined4 *)(iVar11 + 6 + (int)local_78) = 0x3f1;
                                }
                              }
                            }
                            else {
                              local_150 = (iVar14 / iVar13) * 100 + 0x32;
                              local_cc = (iVar14 % iVar13) * 100 + 0x32;
                              iVar14 = local_150 - iVar15;
                              if ((iVar14 == 0) && (local_cc == iVar1)) {
                                *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d870;
                                local_EAX_3355 = st::fn_0072E6C0();
                                iVar17 = iVar17 + 0x24 + (int)local_EAX_3355 % 0x1d;
                                *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d881;
                                local_EAX_3372 = st::fn_0072E6C0();
                                iVar14 = iVar6 + 0x24 + (int)local_EAX_3372 % 0x1d;
                              }
                              else {
                                *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d894;
                                local_EAX_3391 = st::fn_0072E6C0();
                                iVar17 = (local_cc - iVar1) / 2 + iVar1 + -0xe +
                                         (int)local_EAX_3391 % 0x1d;
                                *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d8b6;
                                local_EAX_3425 = st::fn_0072E6C0();
                                iVar14 = iVar14 / 2 + iVar15 + -0xe + (int)local_EAX_3425 % 0x1d;
                              }
                              if (local_c8 == 1) {
                                *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d918;
                                local_EAX_3523 = st::fn_0072E6C0();
                                uVar16 = (int)local_EAX_3523 % 7 + 9;
                              }
                              else if (local_c8 == 2) {
                                *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d902;
                                local_EAX_3501 = st::fn_0072E6C0();
                                uVar16 = local_EAX_3501 & 0x80000003;
                                if ((int)uVar16 < 0) {
                                  uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
                                }
                              }
                              else if (local_c8 == 3) {
                                *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d8f0;
                                local_EAX_3483 = st::fn_0072E6C0();
                                uVar16 = (int)local_EAX_3483 % 5 + 4;
                              }
                              else {
                                *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d8e1;
                                local_EAX_3468 = st::fn_0072E6C0();
                                uVar16 = local_EAX_3468 % DAT_007d8f1c;
                              }
                              if (local_84 != 0) {
                                local_d4 = local_d4 + 1;
                              }
                              *(uint *)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198)
                                   = uVar16;
                              aiStackY_1b0[iVar19 * -0xc + 4] = 0x3ed;
                              aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                              aiStackY_1b0[iVar19 * -0xc + 2] = iVar14;
                              aiStackY_1b0[iVar19 * -0xc + 1] = iVar17;
                              aiStackY_1b0[iVar19 * -0xc] = 0x69d945;
                              st::fn_00402856(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                                 aiStackY_1b0[iVar19 * -0xc + 2],
                                                 aiStackY_1b0[iVar19 * -0xc + 3],
                                                 aiStackY_1b0[iVar19 * -0xc + 4],
                                                 *(uint *)((st_stack_frame + 0) +
                                                          iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
                              *(undefined4 *)(iVar11 + 6 + (int)local_78) = 0x3ed;
                            }
                          }
                        }
                      }
                      else if (iVar14 == 2) {
                        if ((int)local_178 <= (int)local_154) {
                          local_84 = 1;
                          goto LAB_0069d7b2;
                        }
                      }
                      else {
                        *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d6f8;
                        local_EAX_2979 = st::fn_0072E6C0();
                        if ((int)local_EAX_2979 % 3 != 0) {
                          if (local_d4 < local_34) {
                            local_c8 = ((local_34 / 2 <= local_d4) - 1 & 0xfffffffe) + 3;
                          }
                          else if (local_d4 == local_34) {
                            local_c8 = 2;
                          }
                          else {
                            local_c8 = ((local_d4 < local_34 / 2 + local_34) - 1 & 0xfffffffe) + 3;
                          }
                          if (local_bc <= local_d4) {
                            *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d76a;
                            local_EAX_3093 = st::fn_0072E6C0();
                            local_178 = (int)local_EAX_3093 % 10 + 5 + local_154;
                            local_84 = 2;
                            *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69d78e;
                            local_EAX_3129 = st::fn_0072E6C0();
                            local_bc = ((int)local_EAX_3129 % 3) * 2 + 3;
                            local_34 = local_bc / 2;
                            local_d4 = 0;
                          }
                          goto LAB_0069d7b2;
                        }
                      }
                      local_154 = local_154 + 1;
                      iVar14 = local_84;
                      uVar16 = local_e4;
                    } while ((int)local_154 < (int)local_e8);
                  }
                  local_e4 = uVar16 + 1;
                } while ((int)(uVar16 + 1) < (int)local_44);
              }
              if (local_ac < 1) break;
            }
            local_ac = local_ac - *(int *)(local_70 + local_15c * 4);
            *(undefined4 *)(local_70 + local_15c * 4) = 0;
            local_17c = local_17c + 1;
            local_140 = local_140 + -1;
            *(void ***)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) = &local_b4;
            aiStackY_1b0[iVar19 * -0xc + 4] = 0x69da93;
            st::fn_006AB060(*(void **)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
            *(undefined4 ***)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) =
                 &local_28;
            aiStackY_1b0[iVar19 * -0xc + 4] = 0x69da9c;
            st::fn_006AB060(*(void **)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
          }
        }
      }
      iVar17 = 0;
      local_144 = 0;
      iVar14 = 0;
      local_ac = 0;
      uVar16 = 0;
      if (0 < (int)local_13c) {
        do {
          if (uVar16 < local_138[3]) {
            piVar5 = (int *)(local_138[2] * uVar16 + local_138[7]);
          }
          else {
            piVar5 = nullptr;
          }
          if (((piVar5 != nullptr) && (0 < piVar5[2])) && (*piVar5 != 0xff)) {
            *(uint *)(local_74 + iVar17 * 4) = uVar16;
            *(int *)(local_70 + iVar17 * 4) = piVar5[2];
            iVar17 = iVar17 + 1;
            local_144 = iVar17;
            iVar14 = iVar14 + piVar5[2];
            local_ac = iVar14;
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < (int)local_13c);
      }
      if ((0 < iVar17) && (0 < iVar14)) {
        local_140 = STField<int>(param_1,0x5833) * 8;
        local_b0 = 0;
        local_170 = (STField<int>(param_1,0x5833) * 3) / 2;
        puVar18 = local_138;
        while ((0 < local_140 && (local_b0 < local_170))) {
          *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69db81;
          local_EAX_4140 = st::fn_0072E6C0();
          iVar15 = (int)local_EAX_4140 % iVar14;
          iVar6 = 0;
          iVar11 = 0;
          local_15c = iVar15;
          if (0 < iVar17) {
            do {
              iVar6 = iVar6 + *(int *)(local_70 + iVar11 * 4);
              local_15c = iVar11;
              puVar18 = local_138;
              if (iVar15 < iVar6) break;
              iVar11 = iVar11 + 1;
              local_15c = iVar15;
            } while (iVar11 < iVar17);
          }
          if (iVar17 <= iVar11) {
            local_15c = iVar17 + -1;
          }
          if (*(uint *)(local_74 + local_15c * 4) < puVar18[3]) {
            pAVar20 = (AnonShape_0069CB50_B339E56A *)
                      (puVar18[2] * *(uint *)(local_74 + local_15c * 4) + puVar18[7]);
          }
          else {
            pAVar20 = nullptr;
          }
          local_30 = pAVar20;
          if (pAVar20 == nullptr) {
            local_140 = local_140 + 1;
          }
          else {
            local_e4 = 0;
            do {
              dVar3 = pAVar20->field_000C->count;
              *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69dbf4;
              local_EAX_4255 = st::fn_0072E6C0();
              uVar16 = (int)local_EAX_4255 % (int)dVar3;
              pDVar12 = pAVar20->field_000C;
              if (uVar16 < pDVar12->count) {
                piVar5 = DArrayAt<int>(pDVar12, uVar16);
              }
              else {
                piVar5 = nullptr;
              }
              local_dc = *piVar5;
              if (((-1 < local_dc) && (*(int *)((int)local_78 + local_dc * 0xe + 6) < 0)) &&
                 ((*(byte *)((int)local_78 + local_dc * 0xe + 1) & 0xc) != 0)) {
                iVar17 = local_dc / (*(int *)param_1[2] << 1);
                iVar14 = local_dc % (*(int *)param_1[2] << 1);
                local_c4 = 1;
                iVar6 = 0;
                if (0 < local_40) {
                  do {
                    *(int *)((st_stack_frame + 0) + iVar19 * -0x30) = iVar17;
                    aiStackY_1b0[iVar19 * -0xc + 4] = iVar14;
                    puVar4 = local_16c;
                    aiStackY_1b0[iVar19 * -0xc + 3] = (int)*(short *)(local_16c + iVar6 * 4 + 2);
                    aiStackY_1b0[iVar19 * -0xc + 2] = (int)*(short *)(puVar4 + iVar6 * 4);
                    aiStackY_1b0[iVar19 * -0xc + 1] = 0x69dc8c;
                    local_EAX_4407 =
                         st::fn_006ACF90(aiStackY_1b0[iVar19 * -0xc + 2],
                                      aiStackY_1b0[iVar19 * -0xc + 3],
                                      aiStackY_1b0[iVar19 * -0xc + 4],
                                      *(int *)((st_stack_frame + 0) + iVar19 * -0x30));
                    if (local_EAX_4407 < 2) {
LAB_0069dcbc:
                      local_c4 = 0;
                      break;
                    }
                    *(int *)((st_stack_frame + 0) + iVar19 * -0x30) = iVar17 + 1;
                    aiStackY_1b0[iVar19 * -0xc + 4] = iVar14 + 1;
                    puVar4 = local_16c;
                    aiStackY_1b0[iVar19 * -0xc + 3] = (int)*(short *)(local_16c + iVar6 * 4 + 2);
                    aiStackY_1b0[iVar19 * -0xc + 2] = (int)*(short *)(puVar4 + iVar6 * 4);
                    aiStackY_1b0[iVar19 * -0xc + 1] = 0x69dcaf;
                    local_EAX_4442 =
                         st::fn_006ACF90(aiStackY_1b0[iVar19 * -0xc + 2],
                                      aiStackY_1b0[iVar19 * -0xc + 3],
                                      aiStackY_1b0[iVar19 * -0xc + 4],
                                      *(int *)((st_stack_frame + 0) + iVar19 * -0x30));
                    if (local_EAX_4442 < 2) goto LAB_0069dcbc;
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < local_40);
                }
                pAVar20 = local_30;
                if (local_c4 != 0) {
                  *(short *)(local_16c + local_40 * 4) = (short)iVar14;
                  *(short *)(local_16c + local_40 * 4 + 2) = (short)iVar17;
                  local_b0 = local_b0 + 1;
                  *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69dd0b;
                  local_EAX_4534 = st::fn_0072E6C0();
                  uVar16 = local_EAX_4534 & 0x80000001;
                  bVar22 = uVar16 == 0;
                  if ((int)uVar16 < 0) {
                    bVar22 = (uVar16 - 1 | 0xfffffffe) == 0xffffffff;
                  }
                  if (bVar22) {
                    *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69de40;
                    local_EAX_4843 = st::fn_0072E6C0();
                    *(uint *)((st_stack_frame + 0) + iVar19 * -0x30) = local_EAX_4843 % DAT_007d9994;
                    aiStackY_1b0[iVar19 * -0xc + 4] = 0x3f2;
                    aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                    aiStackY_1b0[iVar19 * -0xc + 2] = iVar17 * 100 + 0x32;
                    aiStackY_1b0[iVar19 * -0xc + 1] = iVar14 * 100 + 0x32;
                    aiStackY_1b0[iVar19 * -0xc] = 0x69de77;
                    st::fn_00402856(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                       aiStackY_1b0[iVar19 * -0xc + 2],
                                       aiStackY_1b0[iVar19 * -0xc + 3],
                                       aiStackY_1b0[iVar19 * -0xc + 4],
                                       *(uint *)((st_stack_frame + 0) + iVar19 * -0x30));
                    *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3f2;
                  }
                  else {
                    *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69dd22;
                    local_EAX_4557 = st::fn_0072E6C0();
                    uVar16 = local_EAX_4557 & 0x8000000f;
                    bVar22 = uVar16 == 0;
                    if ((int)uVar16 < 0) {
                      bVar22 = (uVar16 - 1 | 0xfffffff0) == 0xffffffff;
                    }
                    if (bVar22) {
                      *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69dd39;
                      local_EAX_4580 = st::fn_0072E6C0();
                      if (((iVar14 < 1) || (*(int *)param_1[2] * 2 + -2 <= iVar14)) ||
                         ((iVar17 < 1 || (iVar17 <= ((int *)param_1[2])[1] * 2 + -2)))) {
                        *(uint *)((st_stack_frame + 0) + iVar19 * -0x30) = local_EAX_4580 % DAT_007d977c
                        ;
                        aiStackY_1b0[iVar19 * -0xc + 4] = 0x3f1;
                        aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                        aiStackY_1b0[iVar19 * -0xc + 2] = iVar17 * 100;
                        aiStackY_1b0[iVar19 * -0xc + 1] = iVar14 * 100;
                      }
                      else {
                        *(uint *)((st_stack_frame + 0) + iVar19 * -0x30) = local_EAX_4580 % DAT_007d977c
                        ;
                        aiStackY_1b0[iVar19 * -0xc + 4] = 0x3f1;
                        aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                        aiStackY_1b0[iVar19 * -0xc + 2] = 0x69dd74;
                        local_EAX_4639 = st::fn_0072E6C0();
                        aiStackY_1b0[iVar19 * -0xc + 2] =
                             (int)local_EAX_4639 % 0x51 + -0x28 + iVar17 * 100;
                        aiStackY_1b0[iVar19 * -0xc + 1] = 0x69dd8c;
                        local_EAX_4663 = st::fn_0072E6C0();
                        aiStackY_1b0[iVar19 * -0xc + 1] =
                             (int)local_EAX_4663 % 0x51 + -0x28 + iVar14 * 100;
                      }
                      aiStackY_1b0[iVar19 * -0xc] = 0x69ddc4;
                      st::fn_00402856(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                         aiStackY_1b0[iVar19 * -0xc + 2],
                                         aiStackY_1b0[iVar19 * -0xc + 3],
                                         aiStackY_1b0[iVar19 * -0xc + 4],
                                         *(uint *)((st_stack_frame + 0) + iVar19 * -0x30));
                      *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3f1;
                    }
                    else {
                      *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69dde8;
                      local_EAX_4755 = st::fn_0072E6C0();
                      *(uint *)((st_stack_frame + 0) + iVar19 * -0x30) = local_EAX_4755 % DAT_007d88d4;
                      aiStackY_1b0[iVar19 * -0xc + 4] = 0x3e9;
                      aiStackY_1b0[iVar19 * -0xc + 3] = 0;
                      aiStackY_1b0[iVar19 * -0xc + 2] = iVar17 * 100 + 0x32;
                      aiStackY_1b0[iVar19 * -0xc + 1] = iVar14 * 100 + 0x32;
                      aiStackY_1b0[iVar19 * -0xc] = 0x69de1f;
                      st::fn_00402856(param_1,aiStackY_1b0[iVar19 * -0xc + 1],
                                         aiStackY_1b0[iVar19 * -0xc + 2],
                                         aiStackY_1b0[iVar19 * -0xc + 3],
                                         aiStackY_1b0[iVar19 * -0xc + 4],
                                         *(uint *)((st_stack_frame + 0) + iVar19 * -0x30));
                      *(undefined4 *)((int)local_78 + local_dc * 0xe + 6) = 0x3e9;
                    }
                  }
                  local_40 = local_40 + 1;
                  piVar5 = (int *)(local_70 + local_15c * 4);
                  *piVar5 = *piVar5 + -4;
                  if (*piVar5 < 0) {
                    *(undefined4 *)(local_70 + local_15c * 4) = 0;
                  }
                  break;
                }
              }
              local_e4 = local_e4 + 1;
            } while ((int)local_e4 < 10);
            local_140 = local_140 + -1;
            iVar17 = local_144;
            iVar14 = local_ac;
            puVar18 = local_138;
          }
        }
      }
    }
  }
  puVar18 = local_138;
  if (local_138 != nullptr) {
    uVar16 = 0;
    if (0 < (int)local_138[3]) {
      bVar22 = local_138[3] != 0;
      do {
        if (bVar22) {
          iVar17 = st::machine_word_boundary_cast<int>(puVar18[2] * uVar16 + puVar18[7]);
        }
        else {
          iVar17 = 0;
        }
        if ((iVar17 != 0) && (*(int *)(iVar17 + 0xc) != 0)) {
          *(int *)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) =
               *(int *)(iVar17 + 0xc);
          aiStackY_1b0[iVar19 * -0xc + 4] = 0x69df26;
          st::fn_006AE110(*(DArrayTy **)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
        }
        uVar16 = uVar16 + 1;
        bVar22 = uVar16 < puVar18[3];
      } while ((int)uVar16 < (int)puVar18[3]);
    }
    *(uint **)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) = puVar18;
    aiStackY_1b0[iVar19 * -0xc + 4] = 0x69df34;
    st::fn_006AE110(*(DArrayTy **)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
  }
  *(void ***)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) = &local_78;
  aiStackY_1b0[iVar19 * -0xc + 4] = 0x69df3d;
  st::fn_006AB060(*(void **)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
  *(undefined4 ***)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198) = &local_c0;
  aiStackY_1b0[iVar19 * -0xc + 4] = 0x69df49;
  st::fn_006AB060(*(void **)((st_stack_frame + 0) + iVar19 * -0x20 + iVar9 + -0x198 + 0x198));
  *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0x69df54;
  st::fn_00403805(param_1);
  ExceptionList = local_14;
  return local_13c;
LAB_0069d43d:
  iVar14 = aiStack_a8[uVar10];
LAB_0069d44d:
  local_b8 = iVar14 + -1;
LAB_0069d454:
  if (local_b8 < 0) {
    local_b8 = st::machine_word_boundary_cast<int>(aiStack_a8[local_e8] + -1);
  }
  iVar14 = local_e8 + 3;
  if (7 < iVar14) {
    iVar14 = local_e8 - 5;
  }
  *(undefined4 *)((st_stack_frame + 0) + iVar19 * -0x30) = 0;
  aiStackY_1b0[iVar19 * -0xc + 4] = (int)local_10c;
  aiStackY_1b0[iVar19 * -0xc + 3] = *(int *)param_1[2] << 1;
  aiStackY_1b0[iVar19 * -0xc + 2] = local_68[uVar16];
  aiStackY_1b0[iVar19 * -0xc + 1] = 0x69d494;
  iVar6 = st::fn_00405C81(param_1,aiStackY_1b0[iVar19 * -0xc + 2],aiStackY_1b0[iVar19 * -0xc + 3]
                             ,(int *)aiStackY_1b0[iVar19 * -0xc + 4],
                             *(int **)((st_stack_frame + 0) + iVar19 * -0x30));
  if (iVar6 == 8) {
    iVar6 = 0;
    do {
      if ((*(char *)(local_10c[iVar14] + (int)local_c0) == '\x01') && (local_10c[iVar14] != iVar17))
      {
        local_24 = local_10c[iVar14];
        break;
      }
      iVar11 = iVar14 + -1;
      if (iVar11 < 0) {
        iVar11 = iVar14 + 7;
      }
      iVar6 = iVar6 + 1;
      iVar14 = iVar11;
    } while (iVar6 < 8);
  }
LAB_0069d4ca:
  if (local_24 == -1) {
    *(int *)((int)local_b4 + local_178 * 8) = iVar17;
    *(undefined4 *)((int)local_b4 + local_178 * 8 + 4) = 0xffffffff;
    *(char *)(iVar17 + (int)local_c0) = (char)local_44 + '\x02';
    local_178 = local_178 + 1;
    if (local_158 != 0) {
      local_28[local_44] = local_178 * 0x10000 | (uint)*(ushort *)(local_28 + local_44);
      local_158 = 0;
      local_44 = local_44 + 1;
    }
  }
  else if (-1 < local_b8) {
    *(int *)((int)local_b4 + local_178 * 8) = iVar17;
    *(int *)((int)local_b4 + local_178 * 8 + 4) = local_b8;
    uVar16 = local_44 & 0xff;
LAB_0069d5f2:
    *(char *)(iVar17 + (int)local_c0) = (char)uVar16 + '\x02';
    local_178 = local_178 + 1;
  }
  if ((0xfc < (int)local_44) || (local_e4 = local_e4 + 1, local_164 <= (int)local_e4))
  goto LAB_0069d626;
  goto LAB_0069d203;
}

// 0069FF90 CGenerate::sub_0069FF90
#line 4 "decomp/ST.exe/functions/0069FF90/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=9; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=36, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0069FF90(CGenerate *this)

{
  code *pcVar1;

  pcVar1 = *(code **)&(this->aggregate_001C).field_0x22e;
  if (pcVar1 != nullptr) {
    (*pcVar1)(0);
  }
  return;
}

// 006A0150 CGenerate::sub_006A0150
#line 4 "decomp/ST.exe/functions/006A0150/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_006A0150(CGenerate *this)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;

  pbVar1 = (byte *)st::fn_006EFC50
                             ((this->aggregate_001C).field_020C,(this->aggregate_001C).field_0210,
                              *(cMf32 **)&(this->aggregate_001C).field_0x218,
                              *(int *)&(this->aggregate_001C).field_0x21d,0x20);
  this->field_000C = pbVar1;
  piVar2 = st::fn_006F0620((short *)pbVar1);
  this->field_0008 = piVar2;
  st::fn_00401CB2(1,piVar2);
  iVar3 = st::fn_006F0C00((short *)this->field_000C,st::pointer_boundary_cast<int *>(this->field_0008));
  if (iVar3 != 0) {
    return 0;
  }
  return 1;
}

// 006A0470 CGenerate::sub_006A0470
#line 4 "decomp/ST.exe/functions/006A0470/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=16;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006A0470(CGenerate *this)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  byte local_14;
  int local_10;
  int local_c;
  int local_8;

  iVar6 = *this->field_0008 * 0x28;
  this->field_5703 = iVar6;
  iVar2 = st::machine_word_boundary_cast<int>(this->field_0008[1] * 0x28);
  this->field_5707 = iVar2;
  puVar3 = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC70(iVar6 * iVar2));
  uVar7 = this->field_5703 * this->field_5707;
  this->field_56FF = puVar3;
  for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_10 = 0;
  for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
    *(undefined1 *)puVar3 = 0;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  }
  piVar4 = st::pointer_boundary_cast<int *>(this->field_0008);
  if (0 < *piVar4) {
    local_8 = 0;
    do {
      iVar2 = 0;
      local_c = 0;
      if (0 < piVar4[1]) {
        do {
          iVar6 = 0;
          do {
            piVar4 = st::pointer_boundary_cast<int *>(this->field_0008);
            iVar9 = (piVar4[1] * iVar6 + local_c) * *piVar4 + local_10;
            if (((*(short *)((int)piVar4 + (iVar9 * 3 + 6) * 2) != 0) &&
                (uVar1 = *(ushort *)((int)piVar4 + iVar9 * 6 + 0xc), (uVar1 & 0xf00) != 0)) &&
               (uVar1 != 0x1100)) {
              if ((uVar1 & 0x2000) == 0x2000) {
                uVar8 = (uVar1 & 0xf00) >> 8;
                local_14 = (byte)uVar1;
                pcVar5 = (char *)st::fn_004026F8(&this->field_0x1c03,
                                                    (uint)(local_14 >> 4) * 0xf + -0xe +
                                                    (uint)(local_14 & 0xf),(iVar6 - uVar8) + 1,uVar8
                                                   );
                if (pcVar5 != nullptr) {
                  uVar11 = this->field_5707;
                  iVar9 = this->field_5703;
                  pvVar10 = st::pointer_boundary_cast<void *>(this->field_56FF);
LAB_006a05f8:
                  st::fn_0040308A((int)pvVar10,local_8,iVar2,iVar9,uVar11,pcVar5,0x28,0x28);
                }
              }
              else {
                uVar8 = uVar1 >> 8 & 0xf;
                pcVar5 = (char *)st::fn_00402E96(&this->field_0x1c03,(uVar1 & 0xff) - 1,
                                                    (iVar6 - uVar8) + 1,uVar8);
                if (pcVar5 != nullptr) {
                  iVar9 = this->field_5703;
                  uVar11 = this->field_5707;
                  pvVar10 = st::pointer_boundary_cast<void *>(this->field_56FF);
                  goto LAB_006a05f8;
                }
              }
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < 6);
          local_c = local_c + 1;
          iVar2 = iVar2 + 0x28;
        } while (local_c < this->field_0008[1]);
      }
      piVar4 = st::pointer_boundary_cast<int *>(this->field_0008);
      local_10 = local_10 + 1;
      local_8 = local_8 + 0x28;
    } while (local_10 < *piVar4);
  }
  return;
}

// 006A09F0 CGenerate::sub_006A09F0
#line 4 "decomp/ST.exe/functions/006A09F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_006A09F0(CGenerate *this,byte *param_1,uint param_2)

{
  CHAR local_108 [260];

  st::external_00000080(local_108,st::mutable_c_string("%s%08u"),&DAT_007c8400,this->field_570B);
  st::fn_006F13F0(st::pointer_boundary_cast<cMf32 *>(this->field_0018),0xc,local_108,param_1,param_2,nullptr,'\0',nullptr);
  this->field_570B = this->field_570B + 1;
  return;
}

// 006A0E30 CGenerate::sub_006A0E30
#line 4 "decomp/ST.exe/functions/006A0E30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=4; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=4, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_006A0E30(CGenerate *this,uint param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  short sStack_a;

  piVar1 = st::pointer_boundary_cast<int *>(this->field_0008);
  uVar2 = *(uint *)((int)piVar1 + ((piVar1[1] * param_3 + param_2) * *piVar1 + param_1) * 6 + 8);
  sStack_a = (short)(uVar2 >> 0x10);
  if ((-1 < param_3) && (param_3 < 6)) {
    if (param_4 == -1) {
      param_4 = 0xff;
      if ((uVar2 & 0x10000000) != 0) {
        param_4 = 1;
      }
      if ((sStack_a == 0) && ((uVar2 & 0x1000) != 0)) {
        param_4 = 0;
      }
    }
    st::fn_0040420A(piVar1,param_1,param_2,param_3,param_4,nullptr,0);
  }
  return;
}

