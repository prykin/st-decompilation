#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STBHEShellC.cpp

// 005F3440 STBHEShellC::STBHEShellC
#line 4 "decomp/ST.exe/functions/005F3440/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079C584 (store 005F3453)
   Evidence: final_vptr=0079C584; returns_this=true; calls_before=1; field_writes_after=0;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 005F3440 returns STBHEShellC::STBHEShellC this @ 005F345F */

STBHEShellC * __thiscall st::fn_005F3440(STBHEShellC *this)

{

  st::fn_006E60E0(this);
  this->vtable = &st_global_0079C584;
  memset(&this->field_0x4d, 0, 0x128); /* compiler bulk-zero initialization */
  return this;
}

// 005F3470 STBHEShellC::sub_005F3470
#line 4 "decomp/ST.exe/functions/005F3470/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_005F3470(STBHEShellC *this)

{
  uint local_24 [3];
  uint local_18;
  uint local_14;
  uint local_10;
  local_10 = this->field_0008;
  local_18 = 0;
  local_14 = 10;
  st::fn_006E60A0(this,local_24);
  return;
}

// 005F34B0 STBHEShellC::sub_005F34B0
#line 4 "decomp/ST.exe/functions/005F34B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005F34B0(STBHEShellC *this)

{
  this->field_009B = this->field_0069;
  this->field_00A7 = this->field_0069;
  this->field_0093 = this->field_0061;
  this->field_0097 = this->field_0065;
  this->field_009F = this->field_0061;
  this->field_00A3 = this->field_0065;
  this->field_0087 = 1;
  this->field_00AB = 0;
  this->field_00AF = 0x14;
  this->field_008F = 0xffffffff;
  return;
}

// 005F35F0 STBHEShellC::sub_005F35F0
#line 4 "decomp/ST.exe/functions/005F35F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_005F35F0.
   Evidence: incoming_receiver_captures=1; receiver_accesses=21; incoming_edx_uses=0; calls=4;
   ecx_pointer_setup=3; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[4];
   expected_stack=4; receiver_family_members=4

   [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=2; incoming_this_accesses=21;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_005F35F0(STBHEShellC *this,int param_1)

{
  uint *puVar1;
  AnonShape_005F35F0_EF2A6FDB *pAVar2;
  int iVar3;
  ushort *puVar4;
  InternalExceptionFrame local_54;
  uint local_10;
  char **local_c;
  AnonShape_005F35F0_EF2A6FDB *local_8;

  local_10 = 0;
  local_c = &PTR_s_adcbo_007ce5a0;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = reinterpret_cast<AnonShape_005F35F0_EF2A6FDB *>(this);

  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    if (param_1 == 1) {
      /* ST_CALLSITE[005F365D]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar4 = st::fn_00709AF0
                         (PTR_00806774,CASE_1D,local_c[local_8->field_0087],0xffffffff,0,1,0,
                          nullptr);
      puVar1 = &pAVar2->field_008F;

      st::fn_006E8660
                (g_sT3DSMAPContext_00807598,reinterpret_cast<int *>(puVar1),1,0,STField<uint>(puVar4,9),
                 STField<uint>(puVar4,0xd),0x5a,0x45,0);

      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar1,0,*(int *)puVar4,STField<int>(puVar4,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar1,0,pAVar2->field_00AB);
      pAVar2->field_0171 = puVar4;
      if (DAT_00807326 != '\0') {
        st::fn_006E9520
                  (g_sT3DSMAPContext_00807598,*puVar1,0,0x403170,(uint)pAVar2);
      }
    }
    else {
      puVar1 = &local_8->field_008F;
      if (-1 < (int)local_8->field_008F) {
        st::fn_006E9520
                  (g_sT3DSMAPContext_00807598,local_8->field_008F,0,0,(uint)local_8);
        st::fn_006E8BA0(g_sT3DSMAPContext_00807598,*puVar1);
      }
      /* ST_CALLSITE[005F3733]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar4 = st::fn_00709AF0
                         (PTR_00806774,CASE_1D,st::mutable_c_string("expl_i13"),0xffffffff,0,1,0,
                          nullptr);

      st::fn_006E8660
                (g_sT3DSMAPContext_00807598,reinterpret_cast<int *>(puVar1),3,0,STField<uint>(puVar4,9),
                 STField<uint>(puVar4,0xd),0x5a,0x45,0);

      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar1,0,*(int *)puVar4,STField<int>(puVar4,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar1,0,pAVar2->field_00AB);
      /* ST_CALLSITE[005F37A2]: CALL 0x00709af0; direct=00709AF0 Library::Ourlib::MFRLOAD::mfRLoad; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/int; source view only; no Ghidra override */
      puVar4 = st::fn_00709AF0
                         (PTR_00806764,CASE_1D,st::mutable_c_string("expl_s0"),0xffffffff,0,1,0,nullptr
                         );

      st::fn_006E98E0
                (g_sT3DSMAPContext_00807598,*puVar1,2,*(int *)puVar4,STField<int>(puVar4,0x21),1);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,*puVar1,2,pAVar2->field_00C0);
      st::fn_006E9D40(g_sT3DSMAPContext_00807598,(uint *)*puVar1,2);
    }
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,pAVar2->field_008F,
               (float)pAVar2->field_0093 * _DAT_007904f8 * _DAT_007904f0,
               (float)pAVar2->field_0097 * _DAT_007904f8 * _DAT_007904f0,
               (float)pAVar2->field_009B * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);

    st::fn_006EAAA0(g_sT3DSMAPContext_00807598,pAVar2->field_008F,0);
    pAVar2->field_00C4 = 1;
    g_currentExceptionFrame = local_54.previous;
    return 1;
  }
  g_currentExceptionFrame = local_54.previous;
  return local_10;
}

// 005F3BF0 STBHEShellC::sub_005F3BF0
#line 4 "decomp/ST.exe/functions/005F3BF0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=3; incoming_this_accesses=12;
   incoming_edx_uses=2; incoming_stack_parameter_uses=32; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005F27C0 @ 005F2904 -> killed on
   every CFG path | 005F27C0 @ 005F2AB0 -> read as EAX on every CFG path | 005F27C0 @ 005F2BB0 ->
   read as EAX on every CFG path | 005F3BF0 @ 005F41C4 -> read as EAX on every CFG path */

int __thiscall
st::fn_005F3BF0(STBHEShellC *this,int param_1,int param_2,undefined4 param_3,char param_4)

{
  double dVar1;
  short sVar2;
  uint uVar3;
  float fVar4;
  AnonPointee_STBHEShellC_00F3 *pAVar5;
  int iVar4;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  float local_20 [2];
  int local_18;
  float local_14_mg0;
  int local_10;
  int local_c;
  int local_8;

  local_8 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_4 == '\0') {
    this->field_00D1 = (short)this->field_0093;
    sVar2 = (short)this->field_009B;
    this->field_00D3 = (short)this->field_0097;
    this->field_00D5 = sVar2;
    iVar7 = 900 - sVar2;
    this->field_00DF = 0x14;
    this->field_00E7 = 1;
    this->field_00EF = iVar7;
    this->field_00FB = g_playSystem_00802A38->field_00E4;
    if (0 < iVar7) {
      this->field_00C9 = 0;
      return 1;
    }
    /* ST_CALLSITE[005F41C4]: CALL 0x0040473c; direct=0040473C STBHEShellC::sub_005F3BF0 */
    iVar7 = st::fn_0040473C(this,param_1,param_2,param_3,'\x01');
    if (iVar7 != 0) {
      this->field_00C9 = 1;
      this->field_0104 = CASE_1;
      local_8 = 1;
    }
  }
  else if (param_4 == '\x01') {

    iVar4 = st::fn_006ACED8(this->field_0093,this->field_0097,param_1,param_2);
    this->field_00EF = iVar4;
    local_14_mg0 = (float)iVar4;
    if (iVar4 < 0x1f7) {
      this->field_00F7 = (this->field_00DF * this->field_00DF * 10000) / 0x1f6;
      iVar7 = this->field_009B;
      lVar10 = st::fn_0072E288();
      iVar6 = (int)lVar10 + 1;
      fVar4 = (float)(int)local_14_mg0 / (float)(iVar6 * 2);
      local_14_mg0 = (fVar4 * fVar4) / (float)(int)local_14_mg0;
      dVar1 = (double)(fVar4 / local_14_mg0 + _DAT_00790784);
      st::fn_0072E150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
      lVar10 = st::fn_0072E288();
      local_10 = (int)lVar10;
      if (this->field_00EF != 0) {
        this->field_00D1 = (short)this->field_0093;
        this->field_00FF = iVar6;
        this->field_00D3 = (short)this->field_0097;
        this->field_00D5 = (short)this->field_009B;
        this->field_00E3 = this->field_00DF;
        lVar10 = st::fn_0072E288();
        this->field_00CD = (int)lVar10;
        lVar10 = st::fn_0072E288();
        local_18 = -this->field_00DF;

        iVar7 = st::fn_00405B19((float)local_10,(float)(int)this->field_00DF,
                                   (float)(0x4b0 - iVar7),(float)local_18,local_20);
        if (iVar7 != 0) {
          lVar11 = st::fn_0072E288();
          this->field_00DF = (int)lVar11;
          lVar11 = st::fn_0072E288();
          this->field_00EB = (int)lVar11;
          this->field_00D7 = ((param_1 - this->field_00D1) * (int)lVar10) / iVar4;
          this->field_00DB = ((param_2 - this->field_00D3) * (int)lVar10) / iVar4;
          uVar3 = g_playSystem_00802A38->field_00E4;
          this->field_00C9 = 1;
          this->field_00FB = uVar3;
          this->field_00E7 = local_10;
          this->field_00F3 = (AnonPointee_STBHEShellC_00F3 *)(iVar4 / 2);
          return 1;
        }
      }
    }
    else {
      iVar7 = this->field_00DF;
      iVar6 = (iVar7 * iVar7 * 10000) / iVar4;
      this->field_00F7 = iVar6;
      if (iVar7 * iVar7 != 0) {
        this->field_00E3 = iVar7;
        this->field_00D1 = (short)this->field_0093;
        this->field_00D3 = (short)this->field_0097;
        this->field_00D5 = (short)this->field_009B;
        iVar8 = (int)(0x1eab90 / (longlong)(iVar7 * 0x1b9f)) + 1;
        iVar6 = iVar6 * iVar8;
        this->field_00FF = iVar8;
        local_c = iVar7 * 0x1b9f;
        pAVar5 = (AnonPointee_STBHEShellC_00F3 *)((local_c * iVar8) / 10000);
        local_10 = ((local_c / 100) * (local_c / 100)) / ((int)pAVar5 * 2);
        iVar9 = (int)((ulonglong)((longlong)iVar6 * -0x68db8bad) >> 0x20);
        local_18 = (iVar9 >> 0xc) - (iVar9 >> 0x1f);

        iVar7 = st::fn_00405B19((float)local_c / (float)local_10,(float)iVar7,
                                   (float)((int)pAVar5 +
                                          (-(short)this->field_009B - (iVar6 * iVar8) / 20000)
                                          + 0x44c),(float)local_18,local_20);
        if (iVar7 != 0) {
          lVar10 = st::fn_0072E288();
          this->field_00DF = (int)lVar10;
          lVar10 = st::fn_0072E288();
          this->field_00EB = (int)lVar10;
          this->field_00D7 = ((param_1 - this->field_00D1) * local_10) / (int)local_14_mg0;
          this->field_00DB = ((param_2 - this->field_00D3) * local_10) / (int)local_14_mg0;
          uVar3 = g_playSystem_00802A38->field_00E4;
          this->field_00C9 = 1;
          this->field_00FB = uVar3;
          this->field_00E7 = local_10;
          this->field_00F3 = pAVar5;
          return 1;
        }
      }
    }
  }
  else if ((param_4 == '\x02') && (iVar7 = this->field_00EF, iVar7 != 0)) {
    uVar3 = this->field_00FF;
    this->field_00C9 = 2;
    if (uVar3 < g_playSystem_00802A38->field_00E4) {
      this->field_00FB = g_playSystem_00802A38->field_00E4 - uVar3;
      if (0x1f6 < iVar7) {
        this->field_00D5 = 0x44c;
        iVar6 = this->field_00E3 * 0x1b9f;
        this->field_00DF = iVar6;
        this->field_00E3 = iVar6;
        this->field_00D7 = ((param_1 - this->field_00D1) * iVar6) / iVar7;
        this->field_00DB = ((param_2 - this->field_00D3) * iVar6) / iVar7;
        return 1;
      }
      this->field_00DF = this->field_00F7 * uVar3;
      iVar6 = this->field_00CD;
      this->field_00D5 = 0x4b0 - (short)((this->field_00F7 * uVar3 * uVar3) / 20000);
      this->field_00E3 = iVar6;
      this->field_00D7 = ((param_1 - this->field_00D1) * iVar6) / iVar7;
      this->field_00DB = ((param_2 - this->field_00D3) * iVar6) / iVar7;
      return 1;
    }
  }
  return local_8;
}

// 005F4370 STBHEShellC::sub_005F4370
#line 4 "decomp/ST.exe/functions/005F4370/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=3; incoming_this_accesses=22;
   incoming_edx_uses=0; incoming_stack_parameter_uses=12; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=005F27C0 @ 005F29E2 -> read as EAX on
   every CFG path | 005F27C0 @ 005F2AD8 -> read as EAX on every CFG path | 005F27C0 @ 005F2BD8 ->
   read as EAX on every CFG path */

int __thiscall
st::fn_005F4370(STBHEShellC *this,int *param_1,int *param_2,int *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  uVar1 = 0xffffffff;
  if (param_4 == 0) {
    *param_1 = (int)this->field_00D1;
    *param_2 = (int)this->field_00D3;
    iVar2 = (g_playSystem_00802A38->field_00E4 - this->field_00FB) * this->field_00DF;
    *param_3 = this->field_00D5 + iVar2;
    uVar1 = (uint)(this->field_00EF <= iVar2);
  }
  else {
    if (param_4 == 1) {
      iVar4 = g_playSystem_00802A38->field_00E4 - this->field_00FB;
      iVar2 = this->field_00E7;
      iVar3 = iVar4 * iVar4;
      *param_3 = (this->field_00DF * iVar3) / 20000 + (this->field_00EB * iVar3 * iVar4) / 30000 +
                 this->field_00E3 * iVar4 + (int)this->field_00D5;
      *param_1 = (this->field_00D7 * iVar3) / 20000 + (int)this->field_00D1;
      *param_2 = (this->field_00DB * iVar3) / 20000 + (int)this->field_00D3;
      if (0x1f6 < this->field_00EF) {
        return st::storage_bit_cast<uint>(static_cast<uint32_t>((int)((int)&this->field_00F3[-1].field_00FB + 2) <= (iVar2 * iVar3) / 20000));
      }
      return (uint)(iVar4 == this->field_00E7);
    }
    if (param_4 == 2) {
      iVar2 = g_playSystem_00802A38->field_00E4 - this->field_00FB;
      *param_1 = (this->field_00D7 * iVar2) / 10000 + (int)this->field_00D1;
      *param_2 = (this->field_00DB * iVar2) / 10000 + (int)this->field_00D3;
      *param_3 = ((this->field_00DF * iVar2) / 10000 - (this->field_00F7 * iVar2 * iVar2) / 20000) +
                 (int)this->field_00D5;
      return (uint)(this->field_00EF <= (this->field_00E3 * iVar2) / 10000);
    }
  }
  return uVar1;
}

// 005F4680 STBHEShellC::sub_005F4680
#line 4 "decomp/ST.exe/functions/005F4680/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=33;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005F4680(STBHEShellC *this)

{
  short sVar1;
  VisibleClassTy *pVVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;

  if ((int)this->field_008F < 0) {
    /* ST_CALLSITE[005F469C]: CALL 0x004055ba; direct=004055BA STBHEShellC::sub_005F35F0 */
    st::fn_004055BA(this,this->field_0087);
  }
  pVVar2 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 != nullptr) {
    iVar5 = this->field_009B;
    local_8 = STBiasedDiv16(iVar5, 200); /* exact signed 16-bit grid-index division */
    iVar5 = this->field_0097;
    iVar5 = STBiasedDiv16(iVar5, 0xc9); /* exact signed 16-bit grid-index division */
    iVar3 = this->field_0093;
    iVar3 = STBiasedDiv16(iVar3, 0xc9); /* exact signed 16-bit grid-index division */
    if ((((((DAT_0080874d != -1) && (g_visibleClass_00802A88->field_00F8 != 0)) &&
          /* ST_CALLSITE[005F4767]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
          (st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,iVar3,iVar5,
                      &local_c,&local_10), -1 < local_8)) && ((local_8 < 5 && (-1 < local_c)))) &&
        ((local_c < pVVar2->field_0030 &&
         ((local_10 = g_centeredOffsets5[local_8] + local_10, -1 < local_10 &&
          (local_10 < pVVar2->field_0034)))))) &&
       ((pVVar2->field_004C != nullptr &&
        (pVVar2->field_004C[local_c + local_10 * pVVar2->field_0030] == 0)))) {
      if (this->field_00C4 == '\0') {
        return;
      }
      st::fn_006EAB60(g_sT3DSMAPContext_00807598,this->field_008F);
      this->field_00C4 = 0;
      return;
    }
    iVar5 = this->field_00AB + 1;
    this->field_00AB = iVar5;
    if (this->field_00AF <= iVar5) {
      this->field_00AB = 0;
    }
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,this->field_008F,
               (float)this->field_0093 * _DAT_007904f8 * _DAT_007904f0,
               (float)this->field_0097 * _DAT_007904f8 * _DAT_007904f0,
               (float)this->field_009B * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_006EA270(g_sT3DSMAPContext_00807598,this->field_008F,0,this->field_00AB);
    local_8 = st::fn_006ACF0D(this->field_009F,this->field_00A3,this->field_00A7,this->field_0093,
                           this->field_0097,this->field_009B);
    if (local_8 == 0) {
      iVar5 = this->field_0093;
      iVar3 = this->field_0097;
      iVar4 = this->field_009B;
    }
    else {
      iVar5 = ((this->field_009F - this->field_0093) * 0x28) / local_8 + this->field_0093;
      iVar3 = ((this->field_00A3 - this->field_0097) * 0x28) / local_8 + this->field_0097;
      iVar4 = ((this->field_00A7 - this->field_009B) * 0x28) / local_8 + this->field_009B;
    }
    /* ST_CALLSITE[005F490F]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
    st::fn_00401433(g_traksClass_00802A7C,1,1,0,iVar5,iVar3,iVar4,0,0,0,0,0,0,-1,0,0);
    if (this->field_00C4 == '\0') {
      st::fn_006EAAA0(g_sT3DSMAPContext_00807598,this->field_008F,0);
      this->field_00C4 = 1;
      return;
    }
  }
  return;
}

// 005F4C50 STBHEShellC::sub_005F4C50
#line 4 "decomp/ST.exe/functions/005F4C50/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=27;
   incoming_edx_uses=0; incoming_stack_parameter_uses=30; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_005F4C50
          (STBHEShellC *this,float param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  STBHEShellC_field_0169DArray *pSVar1;
  int iVar2;
  DArrayTy *pSVar2_mg0;
  STBHEShellC_field_0169Element *element_0169;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  byte local_2c [6];
  int local_26;
  uint local_22;
  uint local_1e;
  int local_1a;
  int local_16;
  uint local_12;
  uint local_d;
  float local_8;

  iVar6 = param_4;
  local_8 = _DAT_0079c5a4 / (float)param_5;
  this->field_0109 = param_5;
  this->field_010D = param_4;
  this->field_0111 = (int)param_1;
  this->field_0115 = param_2;
  this->field_0119 = param_3;
  this->field_0121 = -0x1e;
  this->field_011D = 0x14;
  this->field_0125 = 7;
  if (0 < param_4) {
    iVar7 = 0;
    puVar4 = &this->field_0149;
    do {
      puVar4[-4] = this->field_011D;
      *puVar4 = this->field_0119;
      iVar2 = iVar7 / this->field_0121;
      iVar7 = iVar7 + -0x96;
      puVar4[4] = iVar2 + g_playSystem_00802A38->field_00E4 + param_6;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_4 = param_4 + -1;
      puVar4 = puVar4 + 1;
    } while (param_4 != 0);
  }
  if (this->field_0169 != nullptr) {
    st::fn_006AE110(reinterpret_cast<DArrayTy *>(this->field_0169));
  }
  /* ST_CALLSITE[005F4D1C]: CALL 0x006ae290; direct=006AE290 Library::DKW::TBL::DArrayCreate; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STBHEShellC_field_0169DArray; source view only; no Ghidra override */
  pSVar2_mg0 = st::fn_006AE290(nullptr,iVar6 * param_5,0x23,10);
  this->field_0169 = reinterpret_cast<STBHEShellC_field_0169DArray *>(pSVar2_mg0);
  if ((pSVar2_mg0 != nullptr) && (param_4 = 0, 0 < this->field_010D)) {
    do {
      auto param_1_after_write = 0.0; /* compiler stack-slot lifetime split */
      auto param_3_after_write = 0; /* compiler stack-slot lifetime split */
      iVar6 = this->field_0109 * param_4;
      if (0 < this->field_0109) {
        do {
          puVar4 = reinterpret_cast<uint *>(local_2c);
          memset(puVar4, 0, 0x23); /* compiler bulk-zero initialization */
          puVar4 = reinterpret_cast<uint *>(((byte *)puVar4 + 0x20));
          if (param_4 == 0) {
            fcos((float10)param_1_after_write);
            lVar8 = st::fn_0072E288();
            iVar7 = (int)lVar8;
            fsin((float10)param_1_after_write);
            local_1a = iVar7;
            lVar8 = st::fn_0072E288();
            local_16 = (int)lVar8;
            param_1_after_write = param_1_after_write + local_8;
          }
          else {
            pSVar1 = this->field_0169;
            if (st::storage_bit_cast<uint>(static_cast<uint32_t>(iVar6 - param_5)) < pSVar1->count) {
              element_0169 = DArrayAt<STBHEShellC_field_0169Element>(pSVar1, iVar6 - param_5);
            }
            else {
              element_0169 = nullptr;
            }
            iVar7 = element_0169->field_0012;
            local_16 = element_0169->field_0016;
            local_1a = iVar7;
          }
          STPiece<2,4>(local_2c) = ((&this->field_0139)[param_4] * iVar7) / 10000 + this->field_0111;
          local_26 = st::machine_word_boundary_cast<int>(((&this->field_0139)[param_4] * local_16) / 10000 + this->field_0115);
          local_12 = DAT_007ce5ec;
          local_22 = this->field_0119;
          local_1e = 0;
          local_2c[1] = 3;
          local_d = 0xffffffff;
          uVar5 = (uint)((&this->field_0159)[param_4] != 0);
          if (this->field_0103 != '\0') {

            st::fn_00403247((int)local_2c,3,uVar5);
          }
          local_2c[0] = uVar5 == 0;

          st::fn_006AE1C0(reinterpret_cast<DArrayTy *>(this->field_0169),local_2c);
          param_3_after_write = param_3_after_write + 1;
          iVar6 = iVar6 + 1;
        } while (param_3_after_write < this->field_0109);
      }
      param_4 = param_4 + 1;
    } while (param_4 < this->field_010D);
  }
  if (this->field_0169 == nullptr) {
    return 0;
  }
  return 1;
}

// 005F4FA0 STBHEShellC::sub_005F4FA0
#line 4 "decomp/ST.exe/functions/005F4FA0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_005F4FA0(STBHEShellC *this)

{
  STBHEShellC_field_0169DArray *pSVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  uint uVar8;
  char *pcVar9;
  longlong lVar10;
  int local_20;
  short local_18;
  short local_14;
  int local_c;
  int local_8;

  local_c = 0;
  bVar4 = false;
  iVar6 = 0;
  if ((this->field_0169 != nullptr) &&
     (local_8 = 0, 0 < this->field_010D)) {
    do {
      uVar8 = local_8 * this->field_0109;
      if (g_playSystem_00802A38->field_00E4 < (uint)(&this->field_0159)[local_8]) {
        local_c = 1;
      }
      else {
        (&this->field_0139)[local_8] = st::machine_word_boundary_cast<undefined4>((&this->field_0139)[local_8] + this->field_0125);
        iVar6 = st::machine_word_boundary_cast<int>((&this->field_0149)[local_8] + this->field_0121);
        (&this->field_0149)[local_8] = iVar6;
        if ((local_8 == 0) && (iVar6 = iVar6 / 200, iVar6 != this->field_0129)) {
          this->field_0129 = iVar6;
          /* ST_CALLSITE[005F505D]: CALL 0x00401285; direct=00401285 STBHEShellC::sub_005F5700 */
          st::fn_00401285(this,iVar6,this->field_0139);
        }
        local_20 = 0;
        if (0 < this->field_0109) {
          do {
            pSVar1 = this->field_0169;
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            if (((uVar8 < pSVar1->count) &&
                (pcVar9 = &pSVar1->data->field_0000 + pSVar1->elementSize * uVar8,
                pcVar9 != nullptr)) && (*pcVar9 != '\x02')) {
              *(int *)(pcVar9 + 2) =
                   (*(int *)(pcVar9 + 0x12) * (&this->field_0139)[local_8]) / 10000 +
                   this->field_0111;
              iVar6 = *(int *)(pcVar9 + 2);
              *(int *)(pcVar9 + 6) =
                   (*(int *)(pcVar9 + 0x16) * (&this->field_0139)[local_8]) / 10000 +
                   this->field_0115;
              iVar2 = (&this->field_0149)[local_8];
              *(int *)(pcVar9 + 10) = iVar2;
              local_18 = STBiasedDiv16(iVar6, 0xc9); /* exact signed 16-bit grid-index division */
              iVar3 = *(int *)(pcVar9 + 6);
              local_14 = STBiasedDiv16(iVar3, 0xc9); /* exact signed 16-bit grid-index division */
              sVar7 = STBiasedDiv16(iVar2, 200); /* exact signed 16-bit grid-index division */
              if ((((iVar6 < 0) || (g_worldGrid.sizeX <= iVar6)) ||
                  ((*(int *)(pcVar9 + 6) < 0 ||
                   (((int)g_worldGrid.sizeY <= *(int *)(pcVar9 + 6) || (iVar2 < 0)))))) ||

                 (iVar5 = st::fn_00404D3B(local_18,local_14,sVar7), iVar5 == 0)) {
                st::fn_006E3210
                          (g_sT3DSMAPContext_00807598,
                           (*(int *)(pcVar9 + 2) * g_sT3DSMAPContext_00807598->field_0380) / 0xc9,
                           (*(int *)(pcVar9 + 6) * g_sT3DSMAPContext_00807598->field_0380) / 0xc9);
                lVar10 = st::fn_0072E288();
                if (*(int *)(pcVar9 + 10) < (short)lVar10) {
                  *pcVar9 = '\x02';
                  if (-1 < (int)*(uint *)(pcVar9 + 0x1f)) {
                    st::fn_006E8BA0
                              (g_sT3DSMAPContext_00807598,*(uint *)(pcVar9 + 0x1f));
                    *(uint *)(pcVar9 + 0x1f) = 0xffffffff;
                  }
                  goto LAB_005f528b;
                }
              }
              if (*pcVar9 == '\0') {
                if ((*(uint *)(pcVar9 + 0x1f) == 0xffffffff) && (this->field_0103 != '\0')) {

                  st::fn_00403247((int)pcVar9,pcVar9[1],0);
                }
                *pcVar9 = '\x01';
              }
              if ((local_c == 0) && (*pcVar9 != '\x02')) {
                local_c = 1;
              }
              if (((local_8 == 0) && (!bVar4)) && (*pcVar9 != '\x02')) {
                bVar4 = true;
              }
            }
LAB_005f528b:
            local_20 = local_20 + 1;
            uVar8 = uVar8 + 1;
          } while (local_20 < this->field_0109);
        }
      }
      local_8 = local_8 + 1;
      iVar6 = local_c;
    } while (local_8 < this->field_010D);
  }
  return iVar6;
}

// 005F53A0 STBHEShellC::sub_005F53A0
#line 4 "decomp/ST.exe/functions/005F53A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005F53A0(STBHEShellC *this)

{
  dword dVar1;
  STBHEShellC_field_0169DArray *pSVar2;
  char *pcVar3;
  uint uVar4;

  if (this->field_0169 != nullptr) {
    dVar1 = this->field_0169->count;
    uVar4 = 0;
    if (0 < (int)dVar1) {
      do {
        pSVar2 = this->field_0169;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if (((uVar4 < pSVar2->count) &&
            (pcVar3 = &pSVar2->data->field_0000 + pSVar2->elementSize * uVar4, pcVar3 != nullptr
            )) && (-1 < (int)*(uint *)(pcVar3 + 0x1f))) {
          st::fn_006E8BA0(g_sT3DSMAPContext_00807598,*(uint *)(pcVar3 + 0x1f));
          *(uint *)(pcVar3 + 0x1f) = 0xffffffff;
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < (int)dVar1);
    }
    st::fn_006AE110(reinterpret_cast<DArrayTy *>(this->field_0169));
    this->field_0169 = nullptr;
  }
  return;
}

// 005F5700 STBHEShellC::sub_005F5700
#line 4 "decomp/ST.exe/functions/005F5700/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=14;
   incoming_edx_uses=18; incoming_stack_parameter_uses=12; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_005F5700(STBHEShellC *this,int param_1,int param_2)

{
  int iVar1;
  STWorldObject *this_00;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  short local_8;
  short local_6;
  short sVar2;

  iVar2 = param_1;
  local_c = 0;
  iVar1 = this->field_0111;
  local_14 = STBiasedDiv16(iVar1, 0xc9); /* exact signed 16-bit grid-index division */
  iVar1 = this->field_0115;
  local_1c = STBiasedDiv16(iVar1, 0xc9); /* exact signed 16-bit grid-index division */
  iVar1 = param_2 / 0xc9;
  iVar5 = local_1c - (iVar1 + 1);
  local_10 = local_14 - (iVar1 + 1);
  local_1c = iVar1 + 2 + local_1c;
  local_14 = iVar1 + 2 + local_14;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  if (local_10 < 0) {
    local_10 = 0;
  }
  if (g_worldGrid.sizeY < local_1c) {
    local_1c = (int)g_worldGrid.sizeY;
  }
  if (g_worldGrid.sizeX < local_14) {
    local_14 = (int)g_worldGrid.sizeX;
  }
  if ((4 < param_1) || (sVar2 = g_worldGrid.sizeX, param_1 < 0)) {
    return 0;
  }
  do {
    iVar1 = local_10;
    if (local_1c <= iVar5) {
      return local_c;
    }
    for (; iVar1 < local_14; iVar1 = iVar1 + 1) {
      sVar3 = (short)iVar1;
      if ((((-1 < sVar3) && (sVar3 < sVar2)) && (sVar6 = (short)iVar5, -1 < sVar6)) &&
         (((sVar6 < g_worldGrid.sizeY && (sVar7 = (short)iVar2, -1 < sVar7)) &&
          ((sVar7 < g_worldGrid.sizeZ &&
           (this_00 = g_worldGrid.cells
                      [(int)sVar6 * (int)sVar2 + (int)g_worldGrid.planeStride * (int)sVar7 +
                       (int)sVar3].objects[0], this_00 != nullptr)))))) {
        st::fn_004031E3(this_00,reinterpret_cast<uint *>(&local_6),(short *)((int)&param_1 + 2),&local_8);
        if (*(int *)&this_00[1].field_0x8 == 1) {

          iVar4 = st::fn_006ACED8((int)local_6,(int)STPiece<2,2>(param_1),this->field_0111,this->field_0115);
          if (param_2 <= iVar4) {

            iVar4 = st::fn_006ACED8(local_6 + 100,(int)STPiece<2,2>(param_1),this->field_0111,this->field_0115);
            if (param_2 <= iVar4) {

              iVar4 = st::fn_006ACED8((int)local_6,STPiece<2,2>(param_1) + 100,this->field_0111,
                                   this->field_0115);
              if (param_2 <= iVar4) {

                iVar4 = st::fn_006ACED8(local_6 + 100,STPiece<2,2>(param_1) + 100,this->field_0111,
                                     this->field_0115);
                if (param_2 <= iVar4) goto cf_continue_loop_005F5985;
              }
            }
          }
        }
        else {

          iVar4 = st::fn_006ACED8((int)local_6,(int)STPiece<2,2>(param_1),this->field_0111,this->field_0115);
          if (param_2 <= iVar4) goto cf_continue_loop_005F5985;
        }
        local_c = local_c + 1;
        st::fn_00403E22(this->field_0051,st::storage_bit_cast<int>(static_cast<uint32_t>(this->field_007D << 2)) / (8 - iVar2),
                           reinterpret_cast<RecoveredRecord_00601D10_11B39116 *>(this_00),(short)this->field_0081,
                           this->field_0085,0xb5,0x110);
      }
cf_continue_loop_005F5985:
      sVar2 = g_worldGrid.sizeX;
    }
    iVar5 = iVar5 + 1;
  } while( true );
}

// 005F5A90 STBHEShellC::sub_005F5A90
#line 4 "decomp/ST.exe/functions/005F5A90/decomp.c"
/* [STPrototypeRepairApplier] Propagated return.
   Evidence: 005F5A90 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 005F3098

   [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

byte * __thiscall st::fn_005F5A90(STBHEShellC *this,int *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *puVar5;
  byte *pbVar6;
  byte *local_c;
  uint local_8;

  pbVar1 = (byte *)st::fn_006AAC70(0x128);
  this->field_016D = this->field_001C;
  puVar5 = reinterpret_cast<byte *>(&this->field_0x4d);
  pbVar6 = pbVar1;
  memmove(pbVar6, puVar5, 0x128); /* compiler REP MOVS byte copy */
  pbVar1[0xc] = 2;
  pbVar1[0xd] = 0;
  pbVar1[0xe] = 0;
  pbVar1[0xf] = 0;
  if (this->field_0169 != nullptr) {
    local_c = (byte *)st::fn_006B0020(&this->field_0169->flags,reinterpret_cast<int *>(&local_8));
    pbVar2 = (byte *)st::fn_006ACF50(pbVar1,local_8 + 300);
    *(uint *)(pbVar2 + 0x128) = local_8;
    pbVar6 = local_c;
    pbVar1 = pbVar2 + 300;
    memmove(pbVar1, pbVar6, local_8); /* compiler REP MOVS byte copy */
    if (local_c != nullptr) {
      st::fn_006AB060(&local_c);
    }
    *param_1 = local_8 + 0x128;
    return pbVar2;
  }
  *param_1 = 0x128;
  return pbVar1;
}

// 005F5B80 STBHEShellC::sub_005F5B80
#line 4 "decomp/ST.exe/functions/005F5B80/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_005F5B80(STBHEShellC *this,undefined4 *param_1)

{
  dword dVar1;
  STBHEShellC_field_0169DArray *pSVar2;
  DArrayTy *pSVar2_mg0;
  int iVar3;
  char *pcVar4;
  byte *puVar5;
  uint uVar6;
  byte *puVar7;

  puVar5 = reinterpret_cast<byte *>((param_1));
  puVar7 = reinterpret_cast<byte *>(&this->field_0x4d);
  memmove(puVar7, puVar5, 0x128); /* compiler REP MOVS byte copy */
  iVar3 = 0x128;
  if (this->field_0169 != nullptr) {
    /* ST_CALLSITE[005F5BAF]: CALL 0x006b0060; direct=006B0060 FUN_006b0060; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/SubmarineTitans/Recovered/DArraySpecializations/STBHEShellC_field_0169DArray; source view only; no Ghidra override */
    pSVar2_mg0 = st::fn_006B0060(nullptr,param_1 + 0x4b);
    this->field_0169 = reinterpret_cast<STBHEShellC_field_0169DArray *>(pSVar2_mg0);
    iVar3 = param_1[0x4a] + 300;
  }
  this->field_008F = 0xffffffff;
  if (this->field_0169 != nullptr) {
    dVar1 = this->field_0169->count;
    uVar6 = 0;
    if (0 < (int)dVar1) {
      do {
        pSVar2 = this->field_0169;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        if ((uVar6 < pSVar2->count) &&
           (pcVar4 = &pSVar2->data->field_0000 + pSVar2->elementSize * uVar6, pcVar4 != nullptr)
           ) {
          *(uint *)(pcVar4 + 0x1f) = 0xffffffff;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)dVar1);
    }
  }
  return iVar3;
}

// 005F5C40 STBHEShellC::sub_005F5C40
#line 4 "decomp/ST.exe/functions/005F5C40/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005F5C40 -> 00568DD0 @ 005F5CC6

   [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

void __thiscall st::fn_005F5C40(STBHEShellC *this,int param_1,int param_2,int soundId)

{
  short sVar1;
  SoundPosition local_10;

  sVar1 = (short)(param_1 >> 0x1f);
  if (param_1 < 0) {
    local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                        (short)((longlong)param_1 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.x = (short)(((short)(param_1 / 0xc9) + sVar1) -
                             (short)((longlong)param_1 * 0x28c1979 >> 0x3f));
  }
  sVar1 = (short)(param_2 >> 0x1f);
  if (param_2 < 0) {
    local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                        (short)((longlong)param_2 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    local_10.y = (short)(((short)(param_2 / 0xc9) + sVar1) -
                             (short)((longlong)param_2 * 0x28c1979 >> 0x3f));
  }
  local_10.unknown = (int)this->field_0018;
  /* ST_CALLSITE[005F5CC6]: CALL 0x00404bd8; direct=00404BD8 SoundClassTy::PlaySound */
  st::fn_00404BD8(reinterpret_cast<SoundClassTy *>(&g_sound),SOUND_MODE_2,nullptr,soundId,&local_10,0);
  return;
}

// 005F5D10 STBHEShellC::sub_005F5D10
#line 4 "decomp/ST.exe/functions/005F5D10/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005F5D10(STBHEShellC *this,int param_1)

{
  int iVar1;
  uint local_c;
  short local_8;
  short local_6;

  if (param_1 != 0) {
    if (param_1 == 1) {
      this->field_0093 = this->field_0040;
      this->field_0097 = this->field_0044;
      this->field_009B = this->field_0048;
      this->field_0034 = 0;
LAB_005f5d4b:
      /* ST_CALLSITE[005F5D59]: CALL 0x00404e0d; direct=00404E0D STBHEShellC::sub_005F5E30 */
      st::fn_00404E0D(this,this->field_0040,this->field_0044,this->field_0048);
      this->field_0104 = CASE_3;
      return;
    }
    if (param_1 == 2) {
      if ((int *)this->field_0034 != 0) {
        /* ST_CALLSITE[005F5D91]: CALL dword ptr [EAX + 0xe0]; [STIndirectCallsiteApplier] exact slot 0xE0; mode=structural-presentation; signature=__thiscall;/undefined4;pointer:/void;/undefined4;/undefined4;/undefined4;/undefined4;/undefined4 */
        iVar1 = STStructuralVirtualCall<undefined4>(STField<int *>(this,0x34), 0xE0, this->field_0038, (int)&param_1 + 2, &local_6, &local_8, &local_c);
        if (iVar1 == 0) {
          this->field_0040 = (int)STPiece<2,2>(param_1);
          this->field_0093 = (int)STPiece<2,2>(param_1);
          this->field_0044 = (int)local_6;
          this->field_0048 = (int)local_8;
          this->field_0097 = (int)local_6;
          this->field_009B = (int)local_8;
          this->field_003C = local_c;
          goto LAB_005f5d4b;
        }
      }
      this->field_0104 = CASE_5;
    }
  }
  this->field_0104 = CASE_5;
  return;
}

// 005F5E30 STBHEShellC::sub_005F5E30
#line 4 "decomp/ST.exe/functions/005F5E30/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=3; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_005F5E30(STBHEShellC *this,int param_1,int param_2,int param_3)

{
  this->field_009F = this->field_0093;
  this->field_00A3 = this->field_0097;
  this->field_0093 = param_1;
  this->field_0097 = param_2;
  this->field_00A7 = this->field_009B;
  this->field_0087 = 3;
  this->field_009B = param_3;
  this->field_00AF = 0x1e;
  this->field_00B3 = 0xb;
  this->field_00BC = 0x14;
  this->field_00B7 = 0;
  this->field_00C0 = 0;
  this->field_00AB = 0;
  if (this->field_0103 != '\0') {
    /* ST_CALLSITE[005F5EBF]: CALL 0x004055ba; direct=004055BA STBHEShellC::sub_005F35F0 */
    st::fn_004055BA(this,3);
  }
  /* ST_CALLSITE[005F5ED9]: CALL 0x0040264e; direct=0040264E STBHEShellC::sub_005F5C40 */
  st::fn_0040264E(this,this->field_0093,this->field_0097,0x48a);
  return;
}
