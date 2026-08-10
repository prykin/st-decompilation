#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STParticleC.cpp

// 00629830 STParticleC::sub_00629830
#line 4 "decomp/ST.exe/functions/00629830/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00629830(STParticleC *this)

{
  this->field_00B2 = 0;
  this->field_00BF = 1;
  if (*(byte *)&this->field_0014 < 4) {
    this->field_00BA = 0x25;
  }
  else {
    this->field_00BA = 0x23;
  }
  if (-1 < (int)this->field_00C6) {
    st::fn_006E9520(g_sT3DSMAPContext_00807598,this->field_00C6,0,0,0);
  }
  return;
}

// 00629E60 STParticleC::sub_00629E60
#line 4 "decomp/ST.exe/functions/00629E60/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_00C2 uses
   /SubmarineTitans/Recovered/Enums/STParticleC_field_00C2State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_00C2 uses
   /SubmarineTitans/Recovered/Enums/STParticleC_field_00C2State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_8=8;CASE_10=16;CASE_20=32;CASE_40=64;CASE_80=128
    */

int __thiscall st::fn_00629E60(STParticleC *this,int param_1)

{
  byte bVar1;
  int iVar2;

  iVar2 = -1;
  if (param_1 != 0) {
    this->field_0040 = 1;
    bVar1 = st::fn_004013D4(this);
    this->field_00D6 = bVar1;
  }
  if (this->field_00D6 != '\0') {
    switch(this->field_00C2) {
    case CASE_1:
    case CASE_2:
      iVar2 = st::fn_00405727(this,1);
      break;
    case CASE_3:
    case CASE_4:
      if (this->field_00EB != nullptr) {
        st::fn_00404A7A(this);
      }
      iVar2 = st::fn_00405D53(this,1);
      break;
    default:
      goto switchD_00629e96_default;
    }
    if (-1 < iVar2) {
      this->field_00D6 = 1;
    }
  }
switchD_00629e96_default:
  return iVar2;
}

// 00629F20 STParticleC::sub_00629F20
#line 4 "decomp/ST.exe/functions/00629F20/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00629F20(STParticleC *this)

{
  int iVar1;
  AnonPointee_STParticleC_00EB *local_8;

  local_8 = (AnonPointee_STParticleC_00EB *)this;
  iVar1 = st::fn_006E62D0
                    (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)this->field_00E7,
                     (int *)&local_8);
  if (iVar1 != -4) {
    this->field_00EB = local_8;
    return;
  }
  memset(&this->field_0xd7, 0, 0x2d); /* compiler bulk-zero initialization */
  return;
}

// 00629F90 STParticleC::sub_00629F90
#line 4 "decomp/ST.exe/functions/00629F90/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=37;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00627EB0 -> 00629F90 @ 00627F75 */

undefined4 __thiscall
st::fn_00629F90(STParticleC *this,STParticleC *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  short sVar3;
  byte bVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  unkbyte10 extraout_ST0_00;
  longlong lVar6;

  this->field_00D2 = param_1->field_0042;
  this->field_0046 = param_1->field_0020;
  this->field_004A = param_1->field_0024;
  this->field_004E = param_1->field_0028;
  this->field_007A = param_1->field_0020;
  this->field_007E = param_1->field_0024;
  this->field_0082 = param_1->field_0028;
  this->field_0052 = param_1->field_0020;
  this->field_0056 = param_1->field_0024;
  this->field_005A = param_1->field_0028;
  if (this->field_0040 != '\0') {
    bVar4 = st::fn_004013D4(this);
    this->field_00D6 = bVar4;
  }
  fsin((float10)param_1->field_002C * (float10)_DAT_0079d064 * (float10)_DAT_0079d060);
  lVar6 = st::fn_0072E288();
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fcos(extraout_ST0);
  this->field_008A = (int)lVar6;
  lVar6 = st::fn_0072E288();
  iVar5 = (int)lVar6;
  this->field_008E = iVar5;
  if (iVar5 < 0) {
    this->field_008E = -iVar5;
  }
  fsin((float10)param_1->field_0030 * (float10)_DAT_0079d064 * (float10)_DAT_0079d060);
  lVar6 = st::fn_0072E288();
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  fcos(extraout_ST0_00);
  this->field_0092 = (int)lVar6;
  lVar6 = st::fn_0072E288();
  this->field_0096 = (int)lVar6;
  this->field_009A = param_1->field_0034;
  this->field_00A2 = 5;
  if (param_1->field_0038 == 0) {
    this->field_00A6 = 1000;
  }
  else {
    this->field_00A6 = param_1->field_0038;
  }
  iVar5 = this->field_0046;
  this->field_00AA = param_2;
  this->field_00AE = param_2;
  sVar3 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar3) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar3) -
                        (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
  }
  iVar2 = this->field_004A;
  this->field_005E = iVar5;
  sVar3 = (short)(iVar2 >> 0x1f);
  if (iVar2 < 0) {
    iVar5 = (short)(((short)(iVar2 / 0xc9) + sVar3) - (short)((longlong)iVar2 * 0x28c1979 >> 0x3f))
            + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(iVar2 / 0xc9) + sVar3) -
                        (short)((longlong)iVar2 * 0x28c1979 >> 0x3f));
  }
  iVar2 = this->field_004E;
  this->field_0062 = iVar5;
  if (iVar2 < 0) {
    iVar5 = (short)(iVar2 / 200) + -1;
  }
  else {
    iVar5 = (int)(short)(iVar2 / 200);
  }
  this->field_0066 = iVar5;
  cVar1 = param_1->field_0041;
  this->field_00C0 = cVar1;
  if (cVar1 == '\0') {
    return 0;
  }
  this->field_00BE = 0x1e;
  switch((uint)this->field_0014 >> 8 & 0xff) {
  case 0:
    if (param_1->field_001C == 4) {
      this->field_00BE = (byte)(&DAT_007d0af0)[(uint)*(byte *)&param_1->field_0014 * 8] >> 1;
      goto cf_common_exit_0062A1E3;
    }
    bVar4 = (byte)(&DAT_007d0a70)[(uint)*(byte *)&param_1->field_0014 * 8] >> 1;
    goto LAB_0062a1dd;
  case 1:
  case 0x20:
    this->field_00BE = (byte)(&DAT_007d0bf0)[(uint)*(byte *)&param_1->field_0014 * 8] >> 1;
    goto cf_common_exit_0062A1E3;
  case 2:
  case 8:
  case 0x40:
    iVar5 = DAT_007d09d4;
    break;
  default:
    goto cf_common_exit_0062A1E3;
  case 4:
    iVar5 = *(int *)(&DAT_007d0a00 + (uint)*(byte *)&this->field_0014 * 4);
    break;
  case 0x10:
    iVar5 = *(int *)(&DAT_007d0af0 + (uint)*(byte *)&param_1->field_0014 * 8);
    break;
  case 0x80:
    iVar5 = DAT_007d08b8;
  }
  bVar4 = (byte)(iVar5 / 2);
LAB_0062a1dd:
  this->field_00BE = bVar4;
cf_common_exit_0062A1E3:
  this->field_00BE = this->field_00BE + '\n';
  return 0;
}

// 0062A370 STParticleC::sub_0062A370
#line 4 "decomp/ST.exe/functions/0062A370/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=33;
   incoming_edx_uses=9; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_0062A370(STParticleC *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_2c;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  short local_8;
  short local_6;

  local_2c = 0;
  iVar3 = param_1 - this->field_00AE;
  iVar4 = st::machine_word_boundary_cast<int>(this->field_008E * this->field_009A * iVar3);
  local_14 = 1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = st::machine_word_boundary_cast<int>(this->field_00A6 * 20000);
  iVar5 = st::machine_word_boundary_cast<int>(this->field_008A * this->field_009A * iVar3);
  local_c = iVar4 / 10000 - (iVar4 * iVar3) / param_1;
  iVar4 = iVar5 / 10000 +
          ((iVar5 * iVar3) / param_1 - (iVar3 * iVar3) / (int)(this->field_00A2 << 1)) +
          this->field_0082;
  iVar3 = (this->field_0092 * local_c) / 10000 + this->field_007E;
  local_10 = (this->field_0096 * local_c) / 10000 + this->field_007A;
  if ((this->field_0014 & 0xff00) == 0x400) {
    if (local_10 < 0) {
      iVar5 = (short)(local_10 / 0xc9) + -1;
    }
    else {
      iVar5 = (int)(short)(local_10 / 0xc9);
    }
    if (iVar5 == this->field_005E) {
      if (iVar3 < 0) {
        iVar5 = (short)(iVar3 / 0xc9) + -1;
      }
      else {
        iVar5 = (int)(short)(iVar3 / 0xc9);
      }
      if (iVar5 == this->field_005E) {
        if (iVar3 < 0) {
          iVar5 = (short)(iVar3 / 200) + -1;
        }
        else {
          iVar5 = (int)(short)(iVar3 / 200);
        }
        if (iVar5 == this->field_0066) {
          local_14 = 0;
        }
      }
    }
  }
  uVar2 = st::fn_00404516
                    ((AnonReceiver_00601500 *)&this->field_0xd7,local_10,iVar3,iVar4,
                     this->field_0046,this->field_004A,this->field_004E,0xff,
                     *(int *)(&DAT_007d0a1c + (uint)*(byte *)&this->field_0014 * 4),0,0xffff,0x14e,0
                     ,0);
  if ((uVar2 == 0) || (local_14 == 0)) {
    iVar5 = this->field_004E;
    this->field_0086 = st::machine_word_boundary_cast<undefined4>(this->field_0086 + local_c);
    this->field_004E = iVar4;
    this->field_0052 = this->field_0046;
    this->field_0056 = this->field_004A;
    this->field_005A = iVar5;
    this->field_0046 = local_10;
    this->field_004A = iVar3;
    return 1;
  }
  if (uVar2 == 2) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((this->field_00EB != nullptr) &&
       (iVar3 = (**(code **)(this->field_00EB->field_0000 + 0xe0))
                          (this->field_00EF,(int)&param_1 + 2,&local_6,&local_8,&local_24),
       iVar3 == 0)) {
      this->field_0052 = this->field_0046;
      this->field_0056 = this->field_004A;
      this->field_005A = this->field_004E;
      this->field_0046 = (int)STPiece<2,2>(param_1);
      this->field_004A = (int)local_6;
      this->field_004E = (int)local_8;
      this->field_0076 = 2;
      this->field_00F3 = local_24;
      return 0;
    }
  }
  else if (uVar2 == 1) {
    iVar5 = this->field_0046;
    this->field_0046 = local_10;
    iVar5 = local_10 - iVar5;
    iVar1 = this->field_004A;
    local_14 = iVar4 - this->field_004E;
    this->field_004E = iVar4;
    this->field_004A = iVar3;
    if (this->field_00C0 == '\0') {
      return -1;
    }
    local_2c = st::fn_004054ED(st::pointer_boundary_cast<undefined4 *>(&local_20),st::pointer_boundary_cast<undefined4 *>(&local_1c),st::pointer_boundary_cast<undefined4 *>(&local_18),local_10,iVar3,
                                  iVar4 - (uint)(byte)this->field_00BE);
    if ((local_2c < 1) && (local_14 < 1)) {
      if (-1 < local_2c) {
        return 0;
      }
      iVar5 = this->field_004E;
      this->field_0086 = st::machine_word_boundary_cast<undefined4>(this->field_0086 + local_c);
      this->field_0052 = this->field_0046;
      this->field_004E = iVar4;
      this->field_0056 = this->field_004A;
      this->field_005A = iVar5;
      this->field_0046 = local_10;
      this->field_004A = iVar3;
      return 1;
    }
    if (-1 < local_2c) {
      if ((local_2c == 0) && (0 < local_14)) {
        local_20 = 0;
        local_1c = 0;
        local_18 = -10000;
      }
      local_2c = st::fn_00402347(this,local_20,local_1c,local_18,iVar5,iVar3 - iVar1,local_14);
      if (0 < local_2c) {
        this->field_0086 = st::machine_word_boundary_cast<undefined4>(this->field_0086 + local_c);
        this->field_0052 = this->field_0046;
        iVar5 = this->field_004E;
        this->field_0056 = this->field_004A;
        this->field_004E = iVar4;
        this->field_005A = iVar5;
        this->field_0046 = local_10;
        this->field_004A = iVar3;
        return 1;
      }
    }
  }
  return local_2c;
}

// 0062A860 STParticleC::sub_0062A860
#line 4 "decomp/ST.exe/functions/0062A860/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0062A860(STParticleC *this)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined4 local_10;

  memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
  local_10 = this->field_00D2;
  local_14 = 10;
  st::fn_0040221B((void *)this->field_00CE,local_24);
  return;
}

// 0062AEF0 STParticleC::sub_0062AEF0
#line 4 "decomp/ST.exe/functions/0062AEF0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0062AEF0(STParticleC *this,undefined4 *param_1)

{
  undefined4 uVar1;
  STParticleC *pSVar3;

  uVar1 = this->field_00CE;
  pSVar3 = this;
  memmove(pSVar3, param_1, 0xd6); /* compiler REP MOVS byte copy */
  pSVar3 = (STParticleC *)((byte *)pSVar3 + 0xd4);
  param_1 = param_1 + 0x35;
  pSVar3->field_0x2 = STField<undefined1>(param_1,2);
  this->field_00CE = uVar1;
  this->field_00CA = nullptr;
  this->field_00C6 = 0xffffffff;
  return;
}

// 0062B4A0 STParticleC::sub_0062B4A0
#line 4 "decomp/ST.exe/functions/0062B4A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STParticleC.
   Evidence: this_call_owners=[STParticleC]; agreed_this_calls=2; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/byte Evidence: all
   resolved direct callers consume only AL or kill the result; narrow_uses=4, ignored=0, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=00627EB0 @ 0062809D -> read as AL on every CFG path | 00627EB0 @
   00628557 -> read as AL on every CFG path | 00629E60 @ 00629E75 -> read as AL on every CFG path |
   00629F90 @ 00629FE5 -> read as AL on every CFG path */

byte __thiscall st::fn_0062B4A0(STParticleC *this)

{
  int iVar1;
  int iVar2;
  short sVar3;
  VisibleClassTy *pVVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_14 = this->field_0046;
  sVar3 = (short)(local_14 >> 0x1f);
  if (local_14 < 0) {
    iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar3) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    local_c = iVar5 + -1;
  }
  else {
    iVar5 = (int)(short)(((short)(local_14 / 0xc9) + sVar3) -
                        (short)((longlong)local_14 * 0x28c1979 >> 0x3f));
    local_c = iVar5;
  }
  iVar1 = this->field_004A;
  sVar3 = (short)(iVar1 >> 0x1f);
  if (iVar1 < 0) {
    iVar6 = (int)(short)(((short)(iVar1 / 0xc9) + sVar3) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    local_8 = iVar6 + -1;
  }
  else {
    iVar6 = (int)(short)(((short)(iVar1 / 0xc9) + sVar3) -
                        (short)((longlong)iVar1 * 0x28c1979 >> 0x3f));
    local_8 = iVar6;
  }
  iVar2 = this->field_004E;
  sVar3 = (short)(iVar2 >> 0x1f);
  if (iVar2 < 0) {
    local_10 = (short)(((short)(iVar2 / 200) + sVar3) -
                      (short)((longlong)iVar2 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    local_10 = (int)(short)(((short)(iVar2 / 200) + sVar3) -
                           (short)((longlong)iVar2 * 0x51eb851f >> 0x3f));
  }
  if (iVar1 < 0) {
    iVar6 = iVar6 + -1;
  }
  if (local_14 < 0) {
    iVar5 = iVar5 + -1;
  }
  if ((((g_sT3DSMAPContext_00807598->field_0048 <= iVar5) &&
       (iVar5 <= g_sT3DSMAPContext_00807598->field_0058)) &&
      (g_sT3DSMAPContext_00807598->field_0044 <= iVar6)) &&
     (iVar6 <= g_sT3DSMAPContext_00807598->field_0054)) {
    iVar5 = st::fn_006DDBD0();
    pVVar4 = g_visibleClass_00802A88;
    if (((iVar5 == 0) || (g_visibleClass_00802A88 == nullptr)) ||
       ((DAT_0080874d == -1 || (g_visibleClass_00802A88->field_00F8 == 0))))
    goto cf_common_exit_0062B616;
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,local_c,local_8,&local_14
               ,&local_c);
    if (((local_10 < 0) || (4 < local_10)) ||
       ((local_14 < 0 ||
        (((((int)pVVar4->field_0030 <= local_14 ||
           (local_c = g_centeredOffsets5[local_10] + local_c, local_c < 0)) ||
          (pVVar4->field_0034 <= local_c)) ||
         ((pVVar4->field_004C == nullptr ||
          (pVVar4->field_004C[local_14 + local_c * pVVar4->field_0030] != 0))))))))
    goto cf_common_exit_0062B616;
  }
  iVar5 = 0;
cf_common_exit_0062B616:
  return (byte)iVar5;
}

