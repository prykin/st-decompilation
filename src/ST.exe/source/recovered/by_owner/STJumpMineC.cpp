#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STJumpMineC.cpp

// 00619170 STJumpMineC::STJumpMineC
#line 4 "decomp/ST.exe/functions/00619170/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079CED0 (store 00619178)
   Evidence: final_vptr=0079CED0; returns_this=true; calls_before=1; field_writes_after=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00619170 returns STJumpMineC::STJumpMineC this @ 0061918B */

STJumpMineC * __thiscall st::fn_00619170(STJumpMineC *this)

{
  st::fn_006E60E0(this);
  this->vtable = &st_global_0079CED0;
  this->field_0097 = 0xffffffff;
  return this;
}

// 006191A0 STJumpMineC::sub_006191A0
#line 4 "decomp/ST.exe/functions/006191A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/byte Evidence: all
   resolved direct callers consume only AL or kill the result; narrow_uses=2, ignored=0, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=00618C00 @ 00618D6F -> read as AL on every CFG path | 00618C00 @
   00618E68 -> read as AL on every CFG path */

byte __thiscall st::fn_006191A0(STJumpMineC *this,uint param_1,int param_2)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  STJumpMineC *local_8;

  if ((((g_sT3DSMAPContext_00807598->field_0048 <= (int)param_1) &&
       ((int)param_1 <= g_sT3DSMAPContext_00807598->field_0058)) &&
      (g_sT3DSMAPContext_00807598->field_0044 <= param_2)) &&
     (param_2 <= g_sT3DSMAPContext_00807598->field_0054)) {
    local_8 = this;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = st::fn_006DDBD0();
    pVVar1 = g_visibleClass_00802A88;
    if (((param_1 == 0) || (g_visibleClass_00802A88 == nullptr)) ||
       ((iVar2 = (int)this->field_00CD, DAT_0080874d == -1 ||
        (g_visibleClass_00802A88->field_00F8 == 0)))) goto cf_common_exit_00619287;
    /* ST_CALLSITE[00619238]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
    st::fn_00403F53
              (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,(int)this->field_00C9,
               (int)this->field_00CB,&param_2,(int *)&local_8);
    if (((iVar2 < 0) || (4 < iVar2)) ||
       ((param_2 < 0 ||
        (((((int)pVVar1->field_0030 <= param_2 ||
           (iVar2 = (int)&local_8->vtable + g_centeredOffsets5[iVar2], iVar2 < 0)) ||
          (pVVar1->field_0034 <= iVar2)) ||
         ((pVVar1->field_004C == nullptr ||
          (pVVar1->field_004C[param_2 + iVar2 * pVVar1->field_0030] != 0))))))))
    goto cf_common_exit_00619287;
  }
  param_1 = 0;
cf_common_exit_00619287:
  return (byte)param_1;
}

// 006192E0 STJumpMineC::sub_006192E0
#line 4 "decomp/ST.exe/functions/006192E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=2; incoming_this_accesses=1;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 006192E0 returns return of sub_006E60A0 @ 00619306 */

int __thiscall st::fn_006192E0(STJumpMineC *this)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = this->field_0008;
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(this,local_24);
  return iVar1;
}

// 00619350 STJumpMineC::sub_00619350
#line 4 "decomp/ST.exe/functions/00619350/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated return.
   Evidence: 00619350 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 00618EC9 */

byte * __thiscall st::fn_00619350(STJumpMineC *this,undefined4 *param_1)

{
  byte *pbVar1;
  byte *puVar3;
  byte *pbVar4;

  pbVar1 = st::pointer_boundary_cast<byte *>(st::fn_006AAC70(0x104));
  this->field_014C = this->field_001C;
  puVar3 = (byte *)&this->field_0x4d;
  pbVar4 = pbVar1;
  memmove(pbVar4, puVar3, 0x104); /* compiler REP MOVS byte copy */
  pbVar1[0xc] = 2;
  pbVar1[0xd] = 0;
  pbVar1[0xe] = 0;
  pbVar1[0xf] = 0;
  *param_1 = 0x104;
  return pbVar1;
}

// 006193E0 STJumpMineC::sub_006193E0
#line 4 "decomp/ST.exe/functions/006193E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_006193E0(STJumpMineC *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  short sVar6;

  iVar1 = this->field_0061;
  iVar2 = this->field_0065;
  iVar3 = this->field_0069;
  this->field_009F = iVar1;
  this->field_00A3 = iVar2;
  this->field_00A7 = iVar3;
  this->field_00DB = iVar1;
  this->field_00DF = iVar2;
  this->field_00E3 = iVar3;
  sVar4 = STBiasedDiv16(iVar1, 0xc9); /* exact signed 16-bit grid-index division */
  this->field_00C9 = sVar4;
  sVar5 = STBiasedDiv16(iVar2, 0xc9); /* exact signed 16-bit grid-index division */
  this->field_00CB = sVar5;
  sVar6 = STBiasedDiv16(iVar3, 200); /* exact signed 16-bit grid-index division */
  this->field_00CD = sVar6;
  if ((((-1 < sVar4) && (-1 < sVar5)) && (-1 < sVar6)) &&
     (((sVar4 < g_worldGrid.sizeX && (sVar5 < g_worldGrid.sizeY)) && (sVar6 < 5)))) {
    this->field_00E7 = this->field_006D;
    this->field_00EB = this->field_0071;
    this->field_00EF = this->field_0075;
    return 1;
  }
  return 0;
}

// 00619A20 STJumpMineC::sub_00619A20
#line 4 "decomp/ST.exe/functions/00619A20/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00619A20(STJumpMineC *this)

{
  VisibleClassTy *pVVar1;
  int iVar2;
  uint uVar3;
  int local_c;
  int local_8;

  if ((int)this->field_0097 < 0) {
    /* ST_CALLSITE[00619A3C]: CALL 0x004056eb; direct=004056EB STJumpMineC::LoadImagJMine */
    st::fn_004056EB(this,this->field_008F);
  }
  pVVar1 = g_visibleClass_00802A88;
  if (g_visibleClass_00802A88 == nullptr) {
    if (this->field_00C4 == '\0') {
      return;
    }
    uVar3 = this->field_0097;
  }
  else {
    iVar2 = (int)this->field_00CD;
    if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
          /* ST_CALLSITE[00619A8A]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
          (st::fn_00403F53
                     (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                      (int)this->field_00C9,(int)this->field_00CB,&local_8,&local_c), iVar2 < 0)) ||
         ((4 < iVar2 || (local_8 < 0)))) ||
        (((int)pVVar1->field_0030 <= local_8 ||
         ((local_c = g_centeredOffsets5[iVar2] + local_c, local_c < 0 ||
          (pVVar1->field_0034 <= local_c)))))) ||
       ((pVVar1->field_004C == nullptr ||
        (pVVar1->field_004C[local_8 + local_c * pVVar1->field_0030] != 0)))) {
      iVar2 = st::machine_word_boundary_cast<int>(this->field_00AB + 1);
      this->field_00AB = iVar2;
      if (this->field_00AF <= iVar2) {
        this->field_00AB = 0;
      }
      st::fn_006EA960
                (g_sT3DSMAPContext_00807598,this->field_0097,
                 (float)this->field_009F * _DAT_007904f8 * _DAT_007904f0,
                 (float)this->field_00A3 * _DAT_007904f8 * _DAT_007904f0,
                 (float)this->field_00A7 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
      st::fn_006EA270(g_sT3DSMAPContext_00807598,this->field_0097,0,this->field_00AB);
      st::fn_006E96D0(g_sT3DSMAPContext_00807598,this->field_0097);
      if (this->field_00C4 != '\0') {
        return;
      }
      st::fn_006EAAA0(g_sT3DSMAPContext_00807598,this->field_0097,0);
      this->field_00C4 = 1;
      return;
    }
    if (this->field_00C4 == '\0') {
      return;
    }
    uVar3 = this->field_0097;
  }
  st::fn_006EAB60(g_sT3DSMAPContext_00807598,uVar3);
  this->field_00C4 = 0;
  return;
}

// 00619C70 STJumpMineC::sub_00619C70
#line 4 "decomp/ST.exe/functions/00619C70/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target field_0093 uses
   /SubmarineTitans/Recovered/Enums/STJumpMineC_field_0093State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_00619C70(STJumpMineC *this)

{
  VisibleClassTy *pVVar1;
  uint uVar2;
  uint local_EAX_444;
  int iVar3;
  int iVar4;
  uint uVar11;
  uint uVar5;
  STJumpMineC_field_0093State SVar6;
  int iVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar12;
  int iVar13;
  int iVar14;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_2c = 0;
  switch(this->field_0093) {
  case CASE_1:
    iVar13 = g_playSystem_00802A38->field_00E4 - this->field_011B;
    iVar13 = (this->field_0117 * iVar13 * iVar13) / 10000 + this->field_0113 * iVar13 +
             this->field_00D7;
    iVar14 = STBiasedDiv16(iVar13, 200); /* exact signed 16-bit grid-index division */
    /* ST_CALLSITE[00619D2C]: CALL 0x004046ab; direct=004046AB STJumpMineC::sub_0061B340 */
    uVar2 = st::fn_004046AB(this,this->field_00C9,this->field_00CB,iVar14,this->field_009F,
                         this->field_00A3,iVar13,&local_c);
    switch(uVar2) {
    case 0:
      this->field_00CD = (short)iVar14;
      this->field_00E3 = this->field_00A7;
      this->field_00A7 = iVar13;
      return 1;
    case 1:
      this->field_0113 = 0xfffffffd;
      this->field_011B = g_playSystem_00802A38->field_00E4;
      this->field_00D7 = local_c;
      this->field_00E3 = this->field_00A7;
      this->field_00A7 = local_c;
      return 1;
    case 2:
      iVar13 = (int)this->field_00C9;
      iVar14 = (int)this->field_00CB;
      if ((((-1 < iVar13) && (-1 < iVar14)) && (iVar3 = (int)g_worldGrid.sizeX, iVar13 < iVar3)) &&
         ((iVar14 < g_worldGrid.sizeY && (*(char *)(iVar3 * iVar14 + DAT_007fb26c + iVar13) != '\0')
          ))) {
        if ((((&DAT_007fb24c)[this->field_0051] == 0) ||
            (*(char *)(iVar3 * iVar14 + (&DAT_007fb24c)[this->field_0051] + iVar13) == '\0')) &&
           (local_EAX_444 = st::fn_00403B66(iVar13,iVar14,this->field_0051,1,DAT_007e66ac),
           -1 < (int)local_EAX_444)) {
          this->field_00A7 = local_c;
          this->field_00AF = 0;
          st::fn_00405B82(this->field_009F,this->field_00A3,local_c);
          goto LAB_00619e5f;
        }
      }
      uVar12 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
      this->field_001C = uVar12;
      this->field_0113 = (uVar12 >> 0x10) % 0xb + 10;
      this->field_011B = g_playSystem_00802A38->field_00E4;
      this->field_00D7 = local_c;
      this->field_00E3 = this->field_00A7;
      this->field_00A7 = local_c;
      if (((void *)this->field_007D != 0) &&
         (iVar13 = st::fn_00402E19((void *)this->field_007D,this->field_009F,this->field_00A3,
                                      local_c,(undefined4 *)&this->field_0x11f), iVar13 != 0)) {
        if (this->field_014B != '\0') {
          st::fn_00405C59((void *)this->field_007D,this->field_0145,0);
        }
        this->field_014B = 1;
        iVar13 = st::fn_00403E6D(this,CASE_2,this->field_0127,this->field_012B,this->field_012F);
        if (iVar13 == 0) {
          return 1;
        }
        st::fn_00405C59((void *)this->field_007D,this->field_0145,1);
        this->field_0093 = CASE_2;
        return 1;
      }
      iVar13 = st::fn_004038A0(this,this->field_009F,this->field_00A3,this->field_00A7,
                                  (int *)&this->field_0x11f);
      if (iVar13 == 0) {
        return 1;
      }
      this->field_014B = 1;
      iVar13 = st::fn_00403E6D(this,CASE_2,this->field_0127,this->field_012B,this->field_012F);
      if (iVar13 == 0) {
        return 1;
      }
      this->field_0093 = CASE_2;
      return 1;
    case 3:
      this->field_00A7 = local_c;
      /* ST_CALLSITE[00619FEB]: CALL 0x004056eb; direct=004056EB STJumpMineC::LoadImagJMine */
      iVar13 = st::fn_004056EB(this,2);
      if (iVar13 != 0) {
        this->field_0093 = CASE_5;
        this->field_00AF = 0x19;
        this->field_00C0 = 0xb;
        this->field_00B3 = 0x14;
        this->field_00BC = 0;
        this->field_00B7 = 0;
        this->field_00AB = 0;
        return 1;
      }
LAB_00619e5f:
      this->field_0093 = CASE_6;
      return 1;
    case 4:
      goto cf_common_exit_0061AB3A;
    default:
      return 1;
    }
  case CASE_2:
    iVar13 = g_playSystem_00802A38->field_00E4 - this->field_011B;
    local_1c = (this->field_0117 * iVar13 * iVar13) / 10000 + this->field_0113 * iVar13 +
               this->field_00D7;
    local_20 = STBiasedDiv16(local_1c, 200); /* exact signed 16-bit grid-index division */
    iVar13 = st::machine_word_boundary_cast<int>(this->field_010F * iVar13);
    this->field_00F3 = this->field_00F3 + this->field_010F;
    iVar14 = (this->field_0103 * iVar13) / 10000 + this->field_00CF;
    iVar13 = (this->field_0107 * iVar13) / 10000 + this->field_00D3;
    local_28 = STBiasedDiv16(iVar14, 0xc9); /* exact signed 16-bit grid-index division */
    local_24 = STBiasedDiv16(iVar13, 0xc9); /* exact signed 16-bit grid-index division */
    /* ST_CALLSITE[0061A1A9]: CALL 0x004046ab; direct=004046AB STJumpMineC::sub_0061B340 */
    iVar3 = st::fn_004046AB(this,(short)local_28,(short)local_24,local_20,iVar14,iVar13,local_1c,
                         &local_c);
    switch(iVar3) {
    case 0:
      this->field_00DB = this->field_009F;
      this->field_00DF = this->field_00A3;
      this->field_00E3 = this->field_00A7;
      this->field_00C9 = (short)local_28;
      this->field_00CB = (short)local_24;
      this->field_009F = iVar14;
      this->field_00CD = (short)local_20;
      this->field_00A3 = iVar13;
      this->field_00A7 = local_1c;
      break;
    case 1:
      this->field_0113 = 0xfffffffd;
      this->field_011B = g_playSystem_00802A38->field_00E4;
      this->field_00D7 = local_c;
      this->field_00E3 = this->field_00A7;
      this->field_00CF = iVar14;
      this->field_00D3 = iVar13;
      this->field_00A7 = local_c;
      iVar13 = st::fn_0040169A(this,(undefined4 *)&local_30);
      if ((iVar13 < 1) || (299 < this->field_0141)) {
        if (iVar13 == 0) {
          iVar13 = st::fn_00403E6D(this,CASE_1,this->field_009F,this->field_00A3,this->field_00A7
                                     );
          if (iVar13 == 0) {
LAB_0061a4f4:
            /* ST_CALLSITE[0061A4F6]: CALL 0x004023ec; direct=004023EC STJumpMineC::sub_006192E0 */
            st::fn_004023EC(this);
          }
          else {
            this->field_0093 = CASE_1;
          }
        }
        else {
LAB_0061a4fd:
          if (local_30 != 0) {
            st::fn_00403E6D(this,CASE_2,this->field_0127,this->field_012B,this->field_012F);
          }
        }
      }
      else {
        iVar13 = st::fn_00403E6D(this,CASE_3,this->field_0127,this->field_012B,this->field_012F);
        if (iVar13 != 0) {
          this->field_0093 = CASE_3;
          st::fn_004057A4(this,this->field_009F,this->field_00A3,0x495);
        }
      }
      break;
    case 2:
      iVar3 = (int)this->field_00CB;
      if (((((this->field_00C9 < 0) || (iVar3 < 0)) ||
           (iVar4 = (int)g_worldGrid.sizeX, iVar4 <= this->field_00C9)) ||
          (((g_worldGrid.sizeY <= iVar3 ||
            (iVar7 = (int)this->field_00C9, *(char *)(iVar4 * iVar3 + DAT_007fb26c + iVar7) == '\0')
            ) || ((local_2c = (&DAT_007fb24c)[this->field_0051], local_2c != 0 &&
                  (*(char *)(iVar4 * this->field_00CB + local_2c + iVar7) != '\0')))))) ||
         (uVar11 = st::fn_00403B66(iVar7,(int)this->field_00CB,this->field_0051,1,DAT_007e66ac),
         (int)uVar11 < 0)) {
        this->field_001C = st::machine_word_boundary_cast<undefined4>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_0113 = 0xf;
        uVar12 = st::machine_word_boundary_cast<uint>(this->field_001C * 0x41c64e6d + 0x3039);
        this->field_001C = uVar12;
        this->field_010F = (uVar12 >> 0x10 & 1) + 7;
        this->field_011B = g_playSystem_00802A38->field_00E4;
        this->field_00D7 = local_c;
        this->field_00E3 = this->field_00A7;
        this->field_00CF = iVar14;
        this->field_00D3 = iVar13;
        this->field_00A7 = local_c;
        iVar13 = st::fn_0040169A(this,(undefined4 *)&local_30);
        if ((iVar13 < 1) || (299 < this->field_0141)) {
          if (iVar13 != 0) goto LAB_0061a4fd;
          iVar13 = st::fn_00403E6D(this,CASE_1,this->field_009F,this->field_00A3,this->field_00A7
                                     );
          if (iVar13 == 0) goto LAB_0061a4f4;
          this->field_0093 = CASE_1;
        }
        else {
          iVar13 = st::fn_00403E6D(this,CASE_3,this->field_0127,this->field_012B,this->field_012F
                                     );
          if (iVar13 != 0) {
            this->field_0093 = CASE_3;
            st::fn_004057A4(this,this->field_009F,this->field_00A3,0x495);
          }
        }
      }
      else {
        this->field_009F = iVar14;
        this->field_00A3 = iVar13;
        this->field_00A7 = local_c;
        this->field_00AF = 0;
        st::fn_00405B82(this->field_009F,iVar13,local_c);
        this->field_0093 = CASE_6;
      }
      break;
    case 3:
      if (iVar3 == 4) {
        return local_2c;
      }
      break;
    case 4:
      goto cf_common_exit_0061AB3A;
    }
    if ((int)this->field_00F3 < this->field_00F7) {
      return 1;
    }
    uVar12 = this->field_00A7;
    iVar13 = this->field_00A3;
    iVar14 = this->field_009F;
    goto cf_common_exit_0061A55D;
  case CASE_3:
    local_30 = g_playSystem_00802A38->field_00E4 - this->field_011B;
    uVar12 = (this->field_0113 * local_30) / 10000 +
             (this->field_0117 * local_30 * local_30) / 10000 + this->field_00D7;
    sVar8 = (short)((int)uVar12 >> 0x1f);
    if ((int)uVar12 < 0) {
      local_14 = (int)(short)(((short)((int)uVar12 / 200) + sVar8) -
                             (short)((longlong)(int)uVar12 * 0x51eb851f >> 0x3f));
      local_20 = local_14 + -1;
    }
    else {
      local_20 = (int)(short)(((short)((int)uVar12 / 200) + sVar8) -
                             (short)((longlong)(int)uVar12 * 0x51eb851f >> 0x3f));
      local_14 = local_20;
    }
    iVar13 = (this->field_010F * local_30) / 100;
    this->field_00F3 = this->field_00F3 + this->field_010F;
    iVar14 = (this->field_0103 * iVar13) / 10000 + this->field_00CF;
    local_8 = (this->field_0107 * iVar13) / 10000 + this->field_00D3;
    sVar8 = (short)(iVar14 >> 0x1f);
    if (iVar14 < 0) {
      local_10 = (int)(short)(((short)(iVar14 / 0xc9) + sVar8) -
                             (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
      local_28 = local_10 + -1;
    }
    else {
      local_28 = (int)(short)(((short)(iVar14 / 0xc9) + sVar8) -
                             (short)((longlong)iVar14 * 0x28c1979 >> 0x3f));
      local_10 = local_28;
    }
    sVar8 = (short)(local_8 >> 0x1f);
    if (local_8 < 0) {
      local_18 = (int)(short)(((short)(local_8 / 0xc9) + sVar8) -
                             (short)((longlong)local_8 * 0x28c1979 >> 0x3f));
      local_24 = local_18 + -1;
    }
    else {
      local_18 = (int)(short)(((short)(local_8 / 0xc9) + sVar8) -
                             (short)((longlong)local_8 * 0x28c1979 >> 0x3f));
      local_24 = local_18;
    }
    if ((local_30 < 3) ||
       (uVar5 = st::fn_00404516
                          ((AnonReceiver_00601500 *)&this->field_0x20,iVar14,local_8,uVar12,
                           this->field_00DB,this->field_00DF,this->field_00E3,this->field_0051,
                           DAT_007e66ac,this->field_0085,this->field_0089,0xb3,0,0), (int)uVar5 < 1)
       ) {
      sVar10 = (short)local_18;
      this->field_00DB = this->field_009F;
      this->field_00DF = this->field_00A3;
      this->field_00E3 = this->field_00A7;
      sVar8 = (short)local_10;
      this->field_009F = iVar14;
      this->field_00A3 = local_8;
      this->field_00A7 = uVar12;
      if (iVar14 < 0) {
        sVar8 = sVar8 + -1;
      }
      this->field_00C9 = sVar8;
      if (local_8 < 0) {
        sVar10 = sVar10 + -1;
      }
      this->field_00CB = sVar10;
      sVar8 = (short)local_14;
      if ((int)uVar12 < 0) {
        sVar8 = sVar8 + -1;
      }
      this->field_00CD = sVar8;
      if (this->field_0093 == CASE_3) {
        /* ST_CALLSITE[0061A904]: CALL 0x00401433; direct=00401433 TraksClassTy::TraksCreate */
        st::fn_00401433
                  (g_traksClass_00802A7C,1,1,0,iVar14,local_8,uVar12,0,0,0,0,0,0,-1,0,0);
      }
      return 1;
    }
    if (uVar5 != 5) {
      SVar6 = st::fn_004028E7(this,uVar5,this->field_0093,local_28,local_24,local_20,iVar14,
                                 local_8,uVar12);
      this->field_0093 = SVar6;
      if (SVar6 == CASE_5) {
        st::fn_004057A4(this,this->field_009F,this->field_00A3,0x496);
        this->field_00AF = 0x19;
        this->field_00C0 = 0xb;
        this->field_00B3 = 0x14;
        this->field_00BC = 0;
        this->field_00B7 = 0;
        this->field_00AB = 0;
        return local_2c;
      }
      this->field_00DB = this->field_009F;
      this->field_00E3 = this->field_00A7;
      this->field_009F = iVar14;
      this->field_00DF = this->field_00A3;
      this->field_00A3 = local_8;
      this->field_00A7 = uVar12;
      sVar8 = (short)local_10;
      if (iVar14 < 0) {
        sVar8 = sVar8 + -1;
      }
      this->field_00C9 = sVar8;
      sVar8 = (short)local_18;
      if (local_8 < 0) {
        sVar8 = sVar8 + -1;
      }
      this->field_00CB = sVar8;
      sVar8 = (short)local_14;
      if ((int)uVar12 < 0) {
        sVar8 = sVar8 + -1;
      }
      this->field_00CD = sVar8;
      if (this->field_0093 != CASE_1) {
        return 1;
      }
      iVar13 = this->field_00A3;
      iVar14 = this->field_009F;
      goto cf_common_exit_0061A55D;
    }
    break;
  case CASE_4:
    iVar14 = (g_playSystem_00802A38->field_00E4 - this->field_011B) * this->field_010F;
    iVar13 = (this->field_0103 * iVar14) / 10000 + this->field_00CF;
    local_8 = (this->field_0107 * iVar14) / 10000 + this->field_00D3;
    local_1c = (this->field_010B * iVar14) / 10000 + this->field_00D7;
    sVar8 = (short)(local_1c >> 0x1f);
    if (local_1c < 0) {
      local_14 = (int)(short)(((short)(local_1c / 200) + sVar8) -
                             (short)((longlong)local_1c * 0x51eb851f >> 0x3f));
      local_30 = local_14 + -1;
    }
    else {
      local_30 = (int)(short)(((short)(local_1c / 200) + sVar8) -
                             (short)((longlong)local_1c * 0x51eb851f >> 0x3f));
      local_14 = local_30;
    }
    sVar8 = (short)(local_8 >> 0x1f);
    if (local_8 < 0) {
      sVar10 = ((short)(local_8 / 0xc9) + sVar8) - (short)((longlong)local_8 * 0x28c1979 >> 0x3f);
      sVar8 = sVar10 + -1;
    }
    else {
      sVar8 = ((short)(local_8 / 0xc9) + sVar8) - (short)((longlong)local_8 * 0x28c1979 >> 0x3f);
      sVar10 = sVar8;
    }
    local_18 = (int)sVar10;
    sVar10 = (short)(iVar13 >> 0x1f);
    if (iVar13 < 0) {
      sVar10 = ((short)(iVar13 / 0xc9) + sVar10) - (short)((longlong)iVar13 * 0x28c1979 >> 0x3f);
      sVar9 = sVar10 + -1;
    }
    else {
      sVar9 = ((short)(iVar13 / 0xc9) + sVar10) - (short)((longlong)iVar13 * 0x28c1979 >> 0x3f);
      sVar10 = sVar9;
    }
    local_10 = (int)sVar10;
    /* ST_CALLSITE[0061AA4B]: CALL 0x004046ab; direct=004046AB STJumpMineC::sub_0061B340 */
    local_28 = st::fn_004046AB(this,sVar9,sVar8,local_30,iVar13,local_8,local_1c,&local_c);
    switch(local_28) {
    case 0:
      this->field_00DB = this->field_009F;
      this->field_00DF = this->field_00A3;
      this->field_00E3 = this->field_00A7;
      sVar8 = (short)local_10;
      this->field_009F = iVar13;
      this->field_00A3 = local_8;
      this->field_00A7 = local_1c;
      if (iVar13 < 0) {
        sVar8 = sVar8 + -1;
      }
      this->field_00C9 = sVar8;
      sVar8 = (short)local_18;
      if (local_8 < 0) {
        sVar8 = sVar8 + -1;
      }
      this->field_00CB = sVar8;
      if (local_1c < 0) {
        this->field_00CD = (short)local_14 + -1;
      }
      else {
        this->field_00CD = (short)local_14;
      }
      break;
    case 1:
    case 2:
      st::fn_00403E6D(this,CASE_1,this->field_009F,this->field_00A3,this->field_00A7);
    default:
      if (local_28 == 4) {
        return local_2c;
      }
      break;
    case 3:
      this->field_00A7 = local_c;
      this->field_009F = iVar13;
      this->field_00A3 = local_8;
      /* ST_CALLSITE[0061AB87]: CALL 0x004056eb; direct=004056EB STJumpMineC::LoadImagJMine */
      iVar13 = st::fn_004056EB(this,2);
      this->field_0093 = CASE_6 - (iVar13 != 0);
      break;
    case 4:
      goto cf_common_exit_0061AB3A;
    }
    if (iVar14 < this->field_00F7) {
      return 1;
    }
    uVar12 = this->field_00A7;
    iVar13 = this->field_00A3;
    iVar14 = this->field_009F;
cf_common_exit_0061A55D:
    local_2c = 1;
    iVar13 = st::fn_00403E6D(this,CASE_1,iVar14,iVar13,uVar12);
    if (iVar13 != 0) {
      this->field_0093 = CASE_1;
      return local_2c;
    }
    break;
  case CASE_5:
    if ((this->field_014B != '\0') && ((void *)this->field_007D != 0)) {
      st::fn_00405C59((void *)this->field_007D,this->field_0145,0);
      this->field_014B = 0;
    }
    if ((int)this->field_0097 < 0) {
      this->field_0093 = CASE_6;
      return local_2c;
    }
    if (0x10 < (int)this->field_00AB) {
      if (this->field_00AB == 0x11) {
        st::fn_006E9CB0(g_sT3DSMAPContext_00807598,(uint *)this->field_0097,2);
      }
      st::fn_006EA270(g_sT3DSMAPContext_00807598,this->field_0097,2,this->field_00B7);
      if ((int)this->field_00B7 < this->field_00B3) {
        this->field_00B7 = st::machine_word_boundary_cast<undefined4>(this->field_00B7 + 1);
      }
    }
    if (this->field_00BB != '\0') {
      if (this->field_00BC == this->field_00C0) {
        this->field_00BB = 0;
        st::fn_006E9D40(g_sT3DSMAPContext_00807598,(uint *)this->field_0097,1);
      }
      else {
        st::fn_006EA270
                  (g_sT3DSMAPContext_00807598,this->field_0097,1,this->field_00BC);
        this->field_00BC = st::machine_word_boundary_cast<uint>(this->field_00BC + 1);
      }
    }
    uVar12 = this->field_00AB;
    if ((int)uVar12 < this->field_00AF) {
      st::fn_006EA270(g_sT3DSMAPContext_00807598,this->field_0097,0,uVar12);
LAB_0061acc2:
      this->field_00AB = st::machine_word_boundary_cast<undefined4>(this->field_00AB + 1);
    }
    else if (uVar12 == this->field_00AF) {
      if (-1 < (int)this->field_0097) {
        st::fn_006E9D40(g_sT3DSMAPContext_00807598,(uint *)this->field_0097,0);
      }
      goto LAB_0061acc2;
    }
    st::fn_006EA960
              (g_sT3DSMAPContext_00807598,this->field_0097,
               (float)this->field_009F * _DAT_007904f8 * _DAT_007904f0,
               (float)this->field_00A3 * _DAT_007904f8 * _DAT_007904f0,
               (float)this->field_00A7 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (this->field_00B7 == this->field_00B3) {
      if (-1 < (int)this->field_0097) {
        st::fn_006EAB60(g_sT3DSMAPContext_00807598,this->field_0097);
      }
      this->field_0093 = CASE_6;
    }
    pVVar1 = g_visibleClass_00802A88;
    if (g_visibleClass_00802A88 != nullptr) {
      iVar13 = (int)this->field_00CD;
      if ((((((DAT_0080874d == -1) || (g_visibleClass_00802A88->field_00F8 == 0)) ||
            /* ST_CALLSITE[0061AD9B]: CALL 0x00403f53; direct=00403F53 VisibleClassTy::sub_00558C00 */
            (st::fn_00403F53
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                        (int)this->field_00C9,(int)this->field_00CB,&local_28,&local_24), iVar13 < 0
            )) || ((4 < iVar13 || (local_28 < 0)))) || ((int)pVVar1->field_0030 <= local_28)) ||
         (((local_24 = g_centeredOffsets5[iVar13] + local_24, local_24 < 0 ||
           (pVVar1->field_0034 <= local_24)) ||
          ((pVVar1->field_004C == nullptr ||
           (pVVar1->field_004C[local_24 * pVVar1->field_0030 + local_28] != 0)))))) {
        if (this->field_00C4 == '\0') {
          st::fn_006EAAA0(g_sT3DSMAPContext_00807598,this->field_0097,0);
          this->field_00C4 = 1;
          return local_2c;
        }
      }
      else if (this->field_00C4 != '\0') {
        st::fn_006EAB60(g_sT3DSMAPContext_00807598,this->field_0097);
        this->field_00C4 = 0;
        return local_2c;
      }
    }
    goto switchD_00619c92_default;
  case CASE_6:
    break;
  default:
    goto switchD_00619c92_default;
  }
  /* ST_CALLSITE[0061AE41]: CALL 0x004023ec; direct=004023EC STJumpMineC::sub_006192E0 */
  st::fn_004023EC(this);
switchD_00619c92_default:
  return local_2c;
cf_common_exit_0061AB3A:
  if (-1 < (int)this->field_0097) {
    st::fn_006EAB60(g_sT3DSMAPContext_00807598,this->field_0097);
    this->field_00C4 = 0;
  }
  this->field_0093 = CASE_6;
  return local_2c;
}

// 0061B340 STJumpMineC::sub_0061B340
#line 4 "decomp/ST.exe/functions/0061B340/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_width: parameter=/short Evidence: entry-use
   width=/short; unmasked_dword_reads=0; evidence=0061B89C MOVSX EAX,word ptr [EBP + 0x8]

   [STMethodOwnerApplier] Structural method owner recovered as STJumpMineC.
   Evidence: this_call_owners=[STJumpMineC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=4; incoming_stack_parameter_uses=56; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
st::fn_0061B340
          (STJumpMineC *this,short param_1,short param_2,int param_3,int param_4,int param_5,
          int param_6,int *param_7)

{
  uint32_t _local_c;

  int _param_1 = static_cast<int>(param_1);
  int _param_2 = static_cast<int>(param_2);

  byte bVar1;
  byte bVar2;
  byte bVar3;
  STWorldObject *pSVar4;
  int iVar5;
  int local_EAX_109;
  int iVar7;
  uint uVar8;
  STJumpMineC_field_0093State SVar8;
  int local_EAX_1138;
  int iVar6;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_00000006;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  short in_stack_0000000a;
  STJumpMineC_field_0093State SVar12;
  short sVar13;
  int local_14;
  int local_10;
  byte local_c;
  undefined3 uStack_b;
  undefined4 local_8;

  local_8 = 0;
  *param_7 = param_6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if ((-1 < in_stack_00000006) && (-1 < in_stack_0000000a)) {
    if (param_3 < 0) goto LAB_0061bb57;
    if (((_param_1 < g_worldGrid.sizeX) && (_param_2 < g_worldGrid.sizeY)) && (param_3 < 5)) {
      sVar13 = (short)param_3;
      local_EAX_109 = st::fn_00404D3B(param_1,param_2,sVar13);
      if (local_EAX_109 == 0) {
        local_10 = this->field_00A7 - this->field_00E3;
        if (((((param_1 < 0) || (g_worldGrid.sizeX <= param_1)) || (param_2 < 0)) ||
            ((g_worldGrid.sizeY <= param_2 || (sVar13 < 0)))) ||
           ((g_worldGrid.sizeZ <= sVar13 ||
            (pSVar4 = STGridAt3D(g_worldGrid, param_1, param_2, sVar13).objects[0],
            pSVar4 == nullptr)))) {
          st::fn_006E3310
                    (g_sT3DSMAPContext_00807598,
                     (g_sT3DSMAPContext_00807598->field_0380 * param_4) / 0xc9,
                     (int *)((g_sT3DSMAPContext_00807598->field_0380 * param_5) / 0xc9),param_3,
                     &local_14);
          lVar11 = st::fn_0072E288();
          iVar9 = (int)(short)lVar11;
          iVar7 = param_3 + 1;
          iVar5 = local_14;
          if (local_14 <= iVar7) {
            iVar5 = iVar7;
          }
          if (local_10 < 0) {
            if (iVar9 < param_6) {
              return local_8;
            }
            if (((local_14 <= iVar7) && (iVar7 < 5)) &&
               (local_EAX_1138 = st::fn_00404D3B(param_1,param_2,sVar13 + 1), local_EAX_1138 == 0
               )) {
              return 3;
            }
            if (iVar5 * 200 < iVar9) {
              return 3;
            }
          }
          else {
            if (iVar9 <= param_6) {
              return local_8;
            }
            if ((iVar7 < 5) && (iVar6 = st::fn_00404D3B(param_1,param_2,sVar13 + -1), iVar6 != 0)
               ) {
              *param_7 = param_3 * 200;
              return 1;
            }
          }
          *param_7 = iVar9;
          return 2;
        }
        if (0 < local_10) {
          iVar7 = this->field_00CF;
          iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
          if (iVar7 == _param_1) {
            iVar7 = this->field_00D3;
            iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
            if (iVar7 == _param_2) {
              iVar7 = this->field_00D7;
              iVar7 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
              if (iVar7 == param_3) {
                return local_8;
              }
            }
          }
          iVar7 = param_3 * 0xc9 + 0x97;
          if (param_6 < iVar7) {
            return local_8;
          }
          *param_7 = iVar7;
          return 2;
        }
        if ((((pSVar4[1].vtable < (STWorldObjectVTable *)0x8) &&
             ((g_playSystem_00802A38 == nullptr ||
              (g_bulkInitializedRecords_008087C7[(int)pSVar4[1].vtable].field_0022 < 8)))) &&
            (pSVar4->value_20 == 1000)) &&
           /* ST_CALLSITE[0061B555]: [STIndirectCallsiteApplier] exact slot 0xF0; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
           ((iVar7 = pSVar4->vfunc_F0(), iVar7 != 0 &&
            /* ST_CALLSITE[0061B567]: [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
            (iVar7 = pSVar4->vfunc_F8(), iVar7 != 0)))) {
          bVar1 = *(byte *)&pSVar4[1].vtable;
          bVar2 = *(byte *)&this->field_0051;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          _local_c = CONCAT31(uStack_b,bVar1);
          local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar2));
          if (DAT_00808a8f == '\0') {
            if (bVar1 == bVar2) {
LAB_0061b627:
              iVar7 = 0;
            }
            else {
              bVar3 = g_playerRelationMatrix[bVar1][bVar2];
              if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                iVar7 = -2;
              }
              else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                iVar7 = -1;
              }
              else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                iVar7 = 1;
              }
              else {
                if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061b627;
                iVar7 = 2;
              }
            }
            bVar10 = iVar7 < 0;
          }
          else {
            bVar10 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                     g_bulkInitializedRecords_008087C7[bVar1].field_0023;
          }
          if (bVar10) {
            uVar8 = st::fn_00404516((AnonReceiver_00601500 *)&this->field_0x20,param_4,param_5,
                                       param_6,this->field_00DB,this->field_00DF,this->field_00E3,
                                       this->field_0051,DAT_007e66ac,this->field_0085,
                                       this->field_0089,0xb3,0,0);
            if ((uVar8 != 2) && (uVar8 != 3)) {
              return local_8;
            }
            SVar12 = this->field_0093;
            goto LAB_0061b6ac;
          }
        }
        iVar7 = param_3 * 0xc9 + 0x96;
        goto LAB_0061ba9b;
      }
      if (param_1 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeX <= param_1) {
        return local_8;
      }
      if (param_2 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeY <= param_2) {
        return local_8;
      }
      if (sVar13 < 0) {
        return local_8;
      }
      if (g_worldGrid.sizeZ <= sVar13) {
        return local_8;
      }
      pSVar4 = STGridAt3D(g_worldGrid, param_1, param_2, sVar13).objects[0];
      if (pSVar4 == nullptr) {
        return local_8;
      }
      if ((STWorldObjectVTable *)0x7 < pSVar4[1].vtable) {
        return local_8;
      }
      if ((g_playSystem_00802A38 != nullptr) &&
         (7 < g_bulkInitializedRecords_008087C7[(int)pSVar4[1].vtable].field_0022)) {
        return local_8;
      }
      if (pSVar4->value_20 != 1000) {
        return local_8;
      }
      bVar1 = *(byte *)&pSVar4[1].vtable;
      bVar2 = *(byte *)&this->field_0051;
      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar1));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _local_c = CONCAT31(uStack_b,bVar2);
      if (DAT_00808a8f == '\0') {
        if (bVar1 == bVar2) {
LAB_0061b993:
          iVar7 = 0;
        }
        else {
          bVar3 = g_playerRelationMatrix[bVar1][bVar2];
          if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
            iVar7 = -2;
          }
          else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
            iVar7 = -1;
          }
          else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
            iVar7 = 1;
          }
          else {
            if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1)) goto LAB_0061b993;
            iVar7 = 2;
          }
        }
        bVar10 = iVar7 < 0;
      }
      else {
        bVar10 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                 g_bulkInitializedRecords_008087C7[bVar1].field_0023;
      }
      if (bVar10) {
        /* ST_CALLSITE[0061BAC0]: [STIndirectCallsiteApplier] exact slot 0xF0; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
        iVar7 = pSVar4->vfunc_F0();
        if (iVar7 == 0) {
          return local_8;
        }
        /* ST_CALLSITE[0061BAD2]: [STIndirectCallsiteApplier] exact slot 0xF8; mode=machine-word; signature=__thiscall;/undefined4;pointer:/SubmarineTitans/Recovered/GlobalRecords/STWorldObject */
        iVar7 = pSVar4->vfunc_F8();
        if (iVar7 == 0) {
          return local_8;
        }
        uVar8 = st::fn_00404516
                          ((AnonReceiver_00601500 *)&this->field_0x20,param_4,param_5,param_6,
                           this->field_00DB,this->field_00DF,this->field_00E3,this->field_0051,
                           DAT_007e66ac,this->field_0085,this->field_0089,0xb3,0,0);
        if ((uVar8 != 2) && (uVar8 != 3)) {
          return local_8;
        }
        SVar12 = this->field_0093;
LAB_0061b6ac:
        SVar8 = st::fn_004028E7(this,uVar8,SVar12,_param_1,_param_2,param_3,param_4,param_5,
                                   param_6);
        this->field_0093 = SVar8;
        if (SVar8 != CASE_5) {
          return local_8;
        }
        this->field_00AF = 0x19;
        this->field_00C0 = 0xb;
        this->field_00B3 = 0x14;
        this->field_00BC = 0;
        this->field_00B7 = 0;
        this->field_00AB = 0;
        return 3;
      }
      if (this->field_00A7 != this->field_00E3 && -1 < this->field_00A7 - this->field_00E3) {
        iVar7 = this->field_00CF;
        iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
        if (iVar7 == _param_1) {
          iVar7 = this->field_00D3;
          iVar7 = STBiasedDiv16(iVar7, 0xc9); /* exact signed 16-bit grid-index division */
          if (iVar7 == _param_2) {
            iVar7 = this->field_00D7;
            iVar7 = STBiasedDiv16(iVar7, 200); /* exact signed 16-bit grid-index division */
            if (iVar7 == param_3) {
              return local_8;
            }
          }
        }
        iVar7 = param_3 * 0xc9 + 0x97;
        if (param_6 < iVar7) {
          return local_8;
        }
        *param_7 = iVar7;
        return 2;
      }
      iVar7 = param_3 * 0xc9 + 0x32;
LAB_0061ba9b:
      if (iVar7 < param_6) {
        return local_8;
      }
      *param_7 = iVar7;
      return 2;
    }
  }
  if (-1 < param_3) {
    if (param_3 < 5) {
      local_8 = 4;
    }
    return local_8;
  }
LAB_0061bb57:
  *param_7 = 0;
  return 2;
}

