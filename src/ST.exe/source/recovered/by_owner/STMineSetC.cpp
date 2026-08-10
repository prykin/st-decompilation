#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/STMineSetC.cpp

// 0041D1A0 STMineSetC::sub_0041D1A0
#line 4 "decomp/ST.exe/functions/0041D1A0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=13;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0041D1A0(STMineSetC *this,int param_1)

{
  int iVar1;

  this->field_010D = param_1;
  if (g_visibleClass_00802A88 != nullptr) {
    st::fn_0040141F
              (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
               (char)this->field_005F,this->field_0024,param_1,this->field_0018,0xffffffff);
  }
  iVar1 = this->vfunc_08();
  if ((iVar1 == 1) && (this->field_0024 == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected STPackTagged24(2, this->field_0018) == (((uint32_t)(this->field_0018) & 0x00ffffffu) | ((uint32_t)(2) << 24)) */
    st::fn_006E6710
              (g_sT3DSMAPContext_00807598,
               (float)(int)this->field_0041 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)this->field_0043 * _DAT_007904f8 * _DAT_007904f0,
               (uint)((float)this->field_0109 * _DAT_007904f8 + _DAT_007904f4),0x28,
               CONCAT22(CONCAT11(2,(char)(this->field_0018 >> 0x10)),(short)this->field_0018));
  }
  return;
}

// 0041D2B0 STMineSetC::sub_0041D2B0
#line 4 "decomp/ST.exe/functions/0041D2B0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0041D2B0(STMineSetC *this)

{
  int iVar1;

  if (g_visibleClass_00802A88 != nullptr) {
    st::fn_00404291
              (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
               (char)this->field_005F,this->field_0024,this->field_010D,this->field_0018);
  }
  iVar1 = this->vfunc_08();
  if ((iVar1 == 1) && (this->field_0024 == (uint)DAT_0080874d)) {
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected STPackTagged24(2, this->field_0018) == (((uint32_t)(this->field_0018) & 0x00ffffffu) | ((uint32_t)(2) << 24)) */
    st::fn_006E6780
              (g_sT3DSMAPContext_00807598,
               CONCAT22(CONCAT11(2,(char)(this->field_0018 >> 0x10)),(short)this->field_0018));
  }
  this->field_010D = -1;
  return;
}

// 0041D6C0 STMineSetC::sub_0041D6C0
#line 4 "decomp/ST.exe/functions/0041D6C0/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=006226C0 @ 006226FB
   -> TEST TEST EAX,EAX | 00627AA0 @ 00627CA1 -> MOV MOV dword ptr [EBP + -0x4],EAX

   [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=6; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall st::fn_0041D6C0(STMineSetC *this,uint param_1)

{
  int iVar1;
  int iVar2;

  if ((g_visibleClass_00802A88 == nullptr) || (DAT_0080874d == -1)) {
    return 0;
  }
  iVar1 = (int)this->field_005B;
  iVar2 = (int)this->field_005D;
  if ((((-1 < iVar1) && (iVar1 < g_visibleClass_00802A88->field_0020)) && (-1 < iVar2)) &&
     (((iVar2 < g_visibleClass_00802A88->field_0024 && (param_1 < 8)) &&
      (g_visibleClass_00802A88->field_00D4[param_1] != nullptr)))) {
    return (uint)(g_visibleClass_00802A88->field_00D4[param_1]
                  [iVar1 + g_visibleClass_00802A88->field_0020 * iVar2] != 0);
  }
  return 0;
}

// 00622600 STMineSetC::STMineSetC
#line 4 "decomp/ST.exe/functions/00622600/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079CEFC (store 00622629)
   Evidence: final_vptr=0079CEFC; returns_this=true; calls_before=2; field_writes_after=1;
   table_confidence=high

   [STPrototypeApplier] Propagated return.
   Evidence: 00622600 returns STMineSetC::STMineSetC this @ 00622640 */

STMineSetC * __thiscall st::fn_00622600(STMineSetC *this)

{

  st::fn_00401933((STGameObjC *)this);
  st::fn_00401316((AnonShape_004AB810_8E5693D5 *)&this->field_01D5);
  this->field_01D5 = st::machine_word_boundary_cast<undefined4>(&st_global_0079D05C);
  this->vtable = &st_global_0079CEFC;
  memset(&this->field_0x25e, 0, 0x109); /* compiler bulk-zero initialization */
  this->field_02BA = -1;
  return this;
}

// 00622670 STMineSetC::sub_00622670
#line 4 "decomp/ST.exe/functions/00622670/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5

   [STPrototypeApplier] Propagated return.
   Evidence: 00622670 returns return of sub_006E60A0 @ 006226A0 */

int __thiscall st::fn_00622670(STMineSetC *this)

{
  int iVar1;
  undefined4 local_24 [3];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;

  local_10 = this->field_0008;
  this->field_02AE = CASE_5;
  local_18 = 0;
  local_14 = 10;
  iVar1 = st::fn_006E60A0(this,local_24);
  return iVar1;
}

// 006226C0 STMineSetC::sub_006226C0
#line 4 "decomp/ST.exe/functions/006226C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=3; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_02AD uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02ADState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189
   [STAbiConsistencyApplier] narrow_accumulator_return target=return:-1: return=/byte Evidence: all
   resolved direct callers consume only AL or kill the result; narrow_uses=4, ignored=0, full=0,
   unknown=0; reverse CFG traversal from every RET finds the same exact low-accumulator definition
   width on every path; sites=00621B50 @ 00621F89 -> read as AL on every CFG path | 00621B50 @
   00621FD8 -> read as AL on every CFG path | 00621B50 @ 00622101 -> read as AL on every CFG path |
   006239A0 @ 00623A6C -> read as AL on every CFG path */

byte __thiscall st::fn_006226C0(STMineSetC *this,uint param_1,int param_2)

{
  AnonPointee_STMineSetC_0211 *pAVar1;
  VisibleClassTy *pVVar2;
  uint uVar3;
  int iVar4;
  STMineSetC *local_8;

  local_8 = this;
  if (((this->field_02AE == CASE_0) || (this->field_02AE == CASE_1)) &&
     (uVar3 = (uint)DAT_0080874d, this->field_0024 != uVar3)) {
    switch(this->field_02AD) {
    case CASE_0:
    case CASE_2:
      iVar4 = st::fn_00402865(this,uVar3);
      if (iVar4 == 0) {
        return 0;
      }
      break;
    case CASE_1:
      iVar4 = st::fn_00401811(this,uVar3);
      if (iVar4 == 0) {
        return 0;
      }
      break;
    case CASE_3:
      return 0;
    }
  }
  pAVar1 = this->field_0211;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (((((int)param_1 < (int)pAVar1->field_0048) || ((int)pAVar1->field_0058 < (int)param_1)) ||
      ((param_2 < (int)pAVar1->field_0044 || ((int)pAVar1->field_0054 < param_2)))) ||
     (((param_1 = st::fn_006DDBD0(), pVVar2 = g_visibleClass_00802A88, param_1 != 0 &&
       (g_visibleClass_00802A88 != nullptr)) &&
      ((iVar4 = (int)this->field_004B, DAT_0080874d != 0xff &&
       ((((((g_visibleClass_00802A88->field_00F8 != 0 &&
            (st::fn_00403F53
                       (g_visibleClass_00802A88,g_visibleClass_00802A88->field_010C,
                        (int)this->field_0047,(int)this->field_0049,&param_2,(int *)&local_8),
            -1 < iVar4)) && (iVar4 < 5)) && ((-1 < param_2 && (param_2 < (int)pVVar2->field_0030))))
         && ((iVar4 = (int)&local_8->vtable + g_centeredOffsets5[iVar4], -1 < iVar4 &&
             ((iVar4 < pVVar2->field_0034 && (pVVar2->field_004C != nullptr)))))) &&
        (pVVar2->field_004C[param_2 + iVar4 * pVVar2->field_0030] == 0)))))))) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
  }
  return (byte)param_1;
}

// 00622880 STMineSetC::sub_00622880
#line 4 "decomp/ST.exe/functions/00622880/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=17;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00622880(STMineSetC *this)

{
  STMineSetC_field_02ADState SVar1;

  st::fn_004021D5((STT3DSprC *)&this->field_01D5);
  SVar1 = this->field_02AD;
  if (SVar1 < CASE_3) {
    if (g_visibleClass_00802A88 != nullptr) {
      st::fn_004018F2
                (g_visibleClass_00802A88,(int)this->field_0047,(undefined *)(int)this->field_0049,
                 (int)this->field_004B,this->field_0024,*(int *)(&DAT_007d02b4 + (uint)SVar1 * 4),
                 this->field_0018,0xffffffff);
    }
  }
  else if ((SVar1 == CASE_3) && (g_visibleClass_00802A88 != nullptr)) {
    st::fn_004018F2
              (g_visibleClass_00802A88,(int)this->field_0047,(undefined *)(int)this->field_0049,
               (int)this->field_004B,this->field_0024,DAT_007d02c0,this->field_0018,0xffffffff);
    if ((-1 < this->field_005B) && ((-1 < this->field_005D && (-1 < this->field_005F)))) {
      st::fn_0040216C(this);
    }
  }
  if (this->field_034A != nullptr) {
    st::fn_006AE110(this->field_034A);
    this->field_034A = nullptr;
  }
  return;
}

// 00622BA0 STMineSetC::sub_00622BA0
#line 4 "decomp/ST.exe/functions/00622BA0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=71;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_00622BA0(STMineSetC *this)

{
  STMineSetC_field_02ADState SVar1;
  STMineSetC_sub_00626B50_param_1Enum SVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  undefined4 local_8;

  local_8 = 0;
  this->field_02C2 = this->field_0276;
  this->field_02C6 = this->field_027A;
  this->field_02CA = this->field_027E;
  this->field_0041 = (short)this->field_02C2;
  this->field_0043 = (short)this->field_02C6;
  this->field_0045 = (short)this->field_02CA;
  SVar2 = st::fn_0040581C();
  st::fn_00402414(this,SVar2);
  this->field_0056 = (short)this->field_02C6;
  iVar5 = this->field_02C2;
  this->field_0054 = (short)this->field_02C2;
  this->field_0058 = (short)this->field_02CA;
  sVar6 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    sVar6 = (((short)(iVar5 / 0xc9) + sVar6) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar6 = ((short)(iVar5 / 0xc9) + sVar6) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
  }
  iVar5 = this->field_02C6;
  this->field_0047 = sVar6;
  sVar7 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    sVar7 = (((short)(iVar5 / 0xc9) + sVar7) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
  }
  else {
    sVar7 = ((short)(iVar5 / 0xc9) + sVar7) - (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
  }
  iVar5 = this->field_02CA;
  this->field_0049 = sVar7;
  sVar8 = (short)(iVar5 >> 0x1f);
  if (iVar5 < 0) {
    sVar8 = (((short)(iVar5 / 200) + sVar8) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    sVar8 = ((short)(iVar5 / 200) + sVar8) - (short)((longlong)iVar5 * 0x51eb851f >> 0x3f);
  }
  this->field_005D = sVar7;
  this->field_004B = sVar8;
  this->field_005B = sVar6;
  this->field_005F = sVar8;
  uVar3 = st::fn_00405B9B(this->field_0272);
  this->field_02AD = (STMineSetC_field_02ADState)uVar3;
  this->field_035F = g_playSystem_00802A38->field_00E4;
  if ((STMineSetC_field_02ADState)uVar3 == CASE_2) {
    this->field_0342 = 0xffffffff;
  }
  sVar6 = this->field_0047 * 0xc9 + 100;
  this->field_003C = this->field_0049 * 0xc9 + 100;
  sVar8 = this->field_004B * 200;
  this->field_003A = sVar6;
  this->field_0313 = 1;
  sVar7 = sVar8 + 0x32;
  this->field_003E = sVar7;
  this->field_028A = (short)(sVar8 + 100) + -0x32;
  this->field_008E = 1;
  iVar4 = st::fn_006ACF0D(this->field_02C2,this->field_02C6,this->field_02CA,(int)sVar6,(int)sVar6,
                       (int)sVar7);
  this->field_02F6 = iVar4;
  SVar1 = this->field_02AD;
  if (SVar1 == CASE_3) {
    this->field_0352 = 0;
  }
  else {
    this->field_0352 = 1;
  }
  if (SVar1 < CASE_3) {
    if (g_visibleClass_00802A88 != nullptr) {
      st::fn_0040388C
                (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                 (undefined *)(int)this->field_004B,(int *)this->field_0024,
                 *(uint *)(&DAT_007d02b4 + (uint)SVar1 * 4),(int *)this->field_0018,0xffffffff);
    }
  }
  else if ((SVar1 == CASE_3) && (g_visibleClass_00802A88 != nullptr)) {
    st::fn_0040388C
              (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
               (undefined *)(int)this->field_004B,(int *)this->field_0024,DAT_007d02c0,
               (int *)this->field_0018,0xffffffff);
    st::fn_00402B3F(this,*(int *)(&DAT_007d02b4 + (uint)this->field_02AD * 4));
  }
  sVar6 = this->field_0047;
  if ((((-1 < sVar6) && (sVar7 = this->field_0049, -1 < sVar7)) &&
      (sVar8 = this->field_004B, -1 < sVar8)) &&
     (((sVar6 < g_worldGrid.sizeX && (sVar7 < g_worldGrid.sizeY)) && (sVar8 < 5)))) {
    this->field_003A = *(short *)&this->field_0282;
    this->field_003C = *(short *)&this->field_0286;
    this->field_003E = *(short *)&this->field_028A;
    if (this->field_0313 != '\0') {
      if (((-1 < sVar6) && (sVar6 < g_worldGrid.sizeX)) &&
         (((-1 < sVar7 &&
           (((sVar7 < g_worldGrid.sizeY && (-1 < sVar8)) && (sVar8 < g_worldGrid.sizeZ)))) &&
          (STGridAt3D(g_worldGrid, sVar6, sVar7, sVar8).objects[(byte)this->field_008E] != nullptr)))) {
        return 0;
      }
      iVar5 = st::fn_00401325
                        (sVar6,sVar7,sVar8,this->field_008E,
                         (RecoveredRecord_DumpClassC_00495EC0 *)this);
      if (iVar5 != 0) {
        return 0;
      }
      this->field_0314 = this->field_0314 + '\x01';
    }
    local_8 = 1;
  }
  return local_8;
}

// 006239A0 STMineSetC::sub_006239A0
#line 4 "decomp/ST.exe/functions/006239A0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=11;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_02AE uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02AEState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5 */

undefined4 __thiscall st::fn_006239A0(STMineSetC *this)

{
  uint uVar1;
  VisibleClassTy *this_00;
  byte bVar2;
  AnonReceiver_00636260 *this_01;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;

  local_8 = 0;
  switch(this->field_02AE) {
  case CASE_0:
    return 1;
  case CASE_1:
    iVar3 = st::fn_004014B5(this,this->field_02EE,&local_c,&local_10,&local_14);
    if (0 < iVar3) {
      this->field_0054 = (short)this->field_02C2;
      this->field_0056 = (short)this->field_02C6;
      this->field_0058 = (short)this->field_02CA;
      this->field_02C2 = local_c;
      this->field_02C6 = local_10;
      this->field_02CA = local_14;
      return 1;
    }
    return local_8;
  case CASE_2:
    if (g_playSystem_00802A38->field_00E4 < this->field_030F) {
      return 0;
    }
    if (this->field_0353 == '\0') {
      bVar2 = st::fn_00405637(this,(int)this->field_0047,(int)this->field_0049);
      this->field_0353 = bVar2;
    }
    st::fn_004042C3(this);
    if (this->field_0353 != '\0') {
      iVar3 = st::fn_004012C6(this,1);
      if (iVar3 == 0) {
        st::fn_00404147(this);
      }
      if (this->field_0363 == nullptr) {
        this_01 = (AnonReceiver_00636260 *)st::fn_00401E92();
        this->field_0363 = (HoloTy *)this_01;
        if (this_01 != nullptr) {
          st::fn_00405790
                    (this_01,this->field_02C2,this->field_02C6,st::machine_word_boundary_cast<int>(this->field_02CA + -0x28),0x82,0x14,5,
                     1);
        }
      }
    }
    this->field_02AE = CASE_3;
    this->field_030F = st::machine_word_boundary_cast<uint>(g_playSystem_00802A38->field_00E4 + 7);
    return local_8;
  case CASE_3:
    if (g_playSystem_00802A38->field_00E4 < this->field_030F) goto switchD_006239c1_caseD_4;
    st::fn_00405C5E(this);
    st::fn_004050F1(this);
    this->field_02AE = CASE_4;
    iVar3 = st::fn_004051E1(1);
    uVar4 = st::fn_004049FD(this,this->field_02C2,this->field_02C6,iVar3);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    st::fn_00403A4E
              (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(uVar4), (uint8_t)((char)this->field_0262)),
               CONCAT22(extraout_var,this->field_0032),this);
    st::fn_0040216C(this);
    iVar3 = st::fn_00404EC1(this->field_0047,this->field_0049,this->field_004B,this->field_008E,
                               (AnonShape_00495FF0_59081BDD *)this);
    if (iVar3 == 0) {
      this->field_0314 = this->field_0314 + -1;
    }
    if (this->field_02BA < 0) {
      st::fn_00404147(this);
      return local_8;
    }
    break;
  case CASE_4:
switchD_006239c1_caseD_4:
    if (this->field_02BA < 0) {
      if (this->field_02AE != CASE_4) {
        return 0;
      }
      st::fn_00404147(this);
      return local_8;
    }
    break;
  default:
    goto switchD_006239c1_default;
  }
  if (*(int *)(&DAT_007d04c0 + (uint)this->field_02AD * 4) <= this->field_02CE) {
    if (this->field_02DF != '\0') {
      if (this->field_02CE == *(int *)(&DAT_007d04c0 + (uint)this->field_02AD * 4)) {
        st::fn_00404854(&this->field_01D5,9);
      }
      st::fn_00401064((STT3DSprC *)&this->field_01D5,'\t',this->field_02DB);
      st::fn_004030BC((STT3DSprC *)&this->field_01D5,'\t');
    }
    if (this->field_02DB < this->field_02D7) {
      this->field_02DB = st::machine_word_boundary_cast<int>(this->field_02DB + 1);
    }
  }
  if (this->field_02E0 != '\0') {
    if (this->field_02E1 == this->field_02E5) {
      this->field_02E0 = 0;
      st::fn_00402761((STT3DSprC *)&this->field_01D5,10);
    }
    else {
      st::fn_00401064((STT3DSprC *)&this->field_01D5,'\n',this->field_02E1);
      st::fn_004030BC((STT3DSprC *)&this->field_01D5,'\n');
      this->field_02E1 = st::machine_word_boundary_cast<undefined4>(this->field_02E1 + 1);
    }
  }
  uVar1 = this->field_02CE;
  if ((int)uVar1 < this->field_02D2) {
    st::fn_00401064((STT3DSprC *)&this->field_01D5,'\x0e',uVar1);
    st::fn_004030BC((STT3DSprC *)&this->field_01D5,'\x0e');
LAB_00623d08:
    this->field_02CE = st::machine_word_boundary_cast<int>(this->field_02CE + 1);
  }
  else if (uVar1 == this->field_02D2) {
    if (-1 < this->field_02BA) {
      st::fn_00402761((STT3DSprC *)&this->field_01D5,0xe);
    }
    goto LAB_00623d08;
  }
  st::fn_004045D9
            ((STT3DSprC *)&this->field_01D5,(float)this->field_02C2 * _DAT_007904f8 * _DAT_007904f0,
             (float)this->field_02C6 * _DAT_007904f8 * _DAT_007904f0,
             (float)this->field_02CA * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  this_00 = g_visibleClass_00802A88;
  if (this->field_02DB == this->field_02D7) {
    st::fn_00404147(this);
    return local_8;
  }
  if (g_visibleClass_00802A88 != nullptr) {
    lVar6 = st::fn_0072E288();
    iVar3 = (int)lVar6;
    if ((DAT_0080874d != -1) && (this_00->field_00F8 != 0)) {
      piVar8 = &local_1c;
      piVar7 = &local_18;
      lVar6 = st::fn_0072E288();
      iVar5 = (int)lVar6;
      lVar6 = st::fn_0072E288();
      st::fn_00403F53(this_00,this_00->field_010C,(int)lVar6,iVar5,piVar7,piVar8);
      if ((((-1 < iVar3) &&
           (((iVar3 < 5 && (-1 < local_18)) && (local_18 < (int)this_00->field_0030)))) &&
          (((local_1c = g_centeredOffsets5[iVar3] + local_1c, -1 < local_1c &&
            (local_1c < this_00->field_0034)) && (this_00->field_004C != nullptr)))) &&
         (this_00->field_004C[local_18 + local_1c * this_00->field_0030] == 0)) {
        if (this->field_02E9 == '\0') {
          return local_8;
        }
        st::fn_00403D0F((STT3DSprC *)&this->field_01D5);
        this->field_02E9 = 0;
        return local_8;
      }
    }
    if (this->field_02E9 == '\0') {
      st::fn_00402982(&this->field_01D5,0);
      this->field_02E9 = 1;
      return local_8;
    }
  }
switchD_006239c1_default:
  return local_8;
}

// 00624920 STMineSetC::sub_00624920
#line 4 "decomp/ST.exe/functions/00624920/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00624920_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=0; incoming_stack_parameter_uses=32; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_sub_00624920_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3 */

undefined4 __thiscall
st::fn_00624920
          (STMineSetC *this,STMineSetC_sub_00624920_param_1Enum param_1,int *param_2,int *param_3,
          int *param_4)

{
  STMineSetC_field_02ADState SVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  short sVar14;
  undefined4 local_8;
  byte SVar1;

  local_8 = 0;
  switch(param_1) {
  case CASE_0:
    *param_2 = this->field_02C2;
    *param_3 = this->field_02C6;
    *param_4 = this->field_02CA;
    if (g_playSystem_00802A38->field_00E4 < this->field_030F) {
      return 1;
    }
    SVar2 = this->field_02AD;
    if (SVar2 < 4) {
      this->field_02AE = CASE_0;
      if ((SVar2 == CASE_3) || (SVar2 == CASE_2)) {
        this->field_030E = 1;
      }
      this->field_030A = 0;
      return 0;
    }
    this->field_02F2 = this->field_02CA;
    this->field_0302 = 1;
    iVar8 = st::fn_00404D6D(this,CASE_1,this->field_02C2,this->field_02C6,this->field_02CA);
    if (iVar8 != 0) {
      sVar14 = (short)this->field_02CA;
      this->field_0036 = sVar14;
      this->field_0038 = sVar14;
      this->field_02EE = 1;
      this->field_02AE = CASE_1;
      this->field_0034 = (short)this->field_02C2;
      return 1;
    }
    break;
  case CASE_1:
    if (this->field_0062 == 0) {
      *param_2 = this->field_02C2;
      *param_3 = this->field_02C6;
      iVar8 = this->field_02CA;
    }
    else {
      iVar11 = this->field_02F2;
      iVar8 = (g_playSystem_00802A38->field_00E4 - this->field_030F) * (uint)(byte)this->field_0062
              * this->field_0302;
      iVar8 = ((int)(iVar8 + (iVar8 >> 0x1f & 0xfU)) >> 4) + (int)this->field_0038;
      if (this->field_0302 < 1) {
        if (iVar8 < iVar11 - *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4)) {
          *param_2 = this->field_02C2;
          *param_3 = this->field_02C6;
          *param_4 = (iVar11 - *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4)) + 1;
          st::fn_00404D6D(this,CASE_1,this->field_02C2,this->field_02C6,
                             *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4) + iVar11);
          this->field_02AE = CASE_1;
          return 1;
        }
      }
      else if (*(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4) + iVar11 < iVar8) {
        *param_2 = this->field_02C2;
        *param_3 = this->field_02C6;
        *param_4 = *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4) + -1 + iVar11;
        iVar8 = st::fn_00404D6D(this,CASE_1,this->field_02C2,this->field_02C6,
                                   iVar11 - *(int *)(&DAT_007d0398 + (uint)this->field_02AD * 4));
        if (iVar8 != 0) {
          this->field_02EE = 1;
          this->field_02AE = CASE_1;
        }
        return 1;
      }
      *param_2 = this->field_02C2;
      *param_3 = this->field_02C6;
    }
    *param_4 = iVar8;
    return 1;
  case CASE_2:
    iVar10 = g_playSystem_00802A38->field_00E4 - this->field_030F;
    iVar12 = st::machine_word_boundary_cast<int>(this->field_0306 * iVar10);
    iVar11 = (this->field_02FA * iVar12) / 10000 + (int)this->field_0034;
    iVar7 = (this->field_02FE * iVar12) / 10000 + (int)this->field_0036;
    iVar9 = (this->field_0302 * iVar12) / 10000 + (int)this->field_0038;
    iVar8 = st::fn_00404BBA(this);
    if ((1 < iVar10) &&
       (uVar5 = st::fn_00404516
                          ((AnonReceiver_00601500 *)&this->field_0x231,iVar11,iVar7,iVar9,
                           (int)this->field_0054,(int)this->field_0056,(int)this->field_0058,
                           this->field_0262,iVar8,this->field_0018,0xffff,
                           *(int *)(&DAT_007d04d0 + (uint)this->field_02AD * 4),0,1), 0 < (int)uVar5
       )) {
      st::fn_0040525E(this);
      return 0;
    }
    *param_2 = iVar11;
    *param_3 = iVar7;
    local_8 = 1;
    *param_4 = iVar9;
    if (this->field_02F6 <= iVar12) {
      sVar14 = this->field_003A;
      sVar3 = this->field_003C;
      sVar4 = this->field_003E;
      *param_2 = (int)sVar14;
      *param_3 = (int)sVar3;
      *param_4 = (int)sVar4;
      iVar8 = st::fn_00404D6D(this,CASE_0,(int)sVar14,(int)sVar3,(int)sVar4);
      if (iVar8 != 0) {
        this->field_02EE = 0;
        this->field_02AE = CASE_1;
        this->field_030F = g_playSystem_00802A38->field_00E4;
        return 1;
      }
    }
    break;
  case CASE_3:
    iVar8 = (g_playSystem_00802A38->field_00E4 - this->field_030F) * this->field_0306;
    iVar11 = this->field_0302 * iVar8 + (int)this->field_0038;
    sVar14 = (short)(iVar11 >> 0x1f);
    if (iVar11 < 0) {
      puVar13 = (undefined *)
                ((short)(((short)(iVar11 / 200) + sVar14) -
                        (short)((longlong)iVar11 * 0x51eb851f >> 0x3f)) + -1);
    }
    else {
      puVar13 = (undefined *)
                (int)(short)(((short)(iVar11 / 200) + sVar14) -
                            (short)((longlong)iVar11 * 0x51eb851f >> 0x3f));
    }
    if (puVar13 != (undefined *)(int)this->field_004B) {
      sVar14 = (short)puVar13;
      iVar6 = st::fn_00404D3B(this->field_0047,this->field_0049,sVar14);
      if (iVar6 != 0) {
        sVar3 = this->field_0047;
        sVar4 = this->field_0049;
        if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar4 < 0)) ||
            ((g_worldGrid.sizeY <= sVar4 || (sVar14 < 0)))) ||
           ((g_worldGrid.sizeZ <= sVar14 ||
            (STGridAt3D(g_worldGrid, sVar3, sVar4, sVar14).objects[(byte)this->field_008E] == nullptr)))) {
          iVar7 = st::fn_00404EC1(sVar3,sVar4,this->field_004B,this->field_008E,
                                     (AnonShape_00495FF0_59081BDD *)this);
          if (iVar7 == 0) {
            this->field_0314 = this->field_0314 + -1;
          }
          sVar3 = this->field_0047;
          sVar4 = this->field_0049;
          if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
               ((sVar4 < 0 ||
                (((g_worldGrid.sizeY <= sVar4 || (sVar14 < 0)) || (g_worldGrid.sizeZ <= sVar14))))))
              || (STGridAt3D(g_worldGrid, sVar3, sVar4, sVar14).objects[(byte)this->field_008E] == nullptr)) &&
             (iVar7 = st::fn_00401325
                                (sVar3,sVar4,sVar14,this->field_008E,
                                 (RecoveredRecord_DumpClassC_00495EC0 *)this), iVar7 == 0)) {
            SVar1 = this->field_02AD;
            this->field_0314 = this->field_0314 + '\x01';
            if (SVar1 < 3) {
              if (g_visibleClass_00802A88 != nullptr) {
                st::fn_004018F2
                          (g_visibleClass_00802A88,(int)this->field_0047,
                           (undefined *)(int)this->field_0049,(int)this->field_004B,this->field_0024
                           ,*(int *)(&DAT_007d02b4 + (uint)SVar1 * 4),this->field_0018,0xffffffff);
                st::fn_0040388C
                          (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                           puVar13,(int *)this->field_0024,
                           *(uint *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),
                           (int *)this->field_0018,0xffffffff);
              }
            }
            else if ((SVar1 == 3) && (g_visibleClass_00802A88 != nullptr)) {
              st::fn_004018F2
                        (g_visibleClass_00802A88,(int)this->field_0047,
                         (undefined *)(int)this->field_0049,(int)this->field_004B,this->field_0024,
                         DAT_007d02c0,this->field_0018,0xffffffff);
              st::fn_00404291
                        (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                         (char)this->field_004B,this->field_0024,
                         *(int *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),this->field_0018);
              st::fn_0040388C
                        (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,puVar13
                         ,(int *)this->field_0024,
                         *(uint *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),
                         (int *)this->field_0018,0xffffffff);
              st::fn_0040141F
                        (g_visibleClass_00802A88,(int)this->field_0047,(int)this->field_0049,
                         (char)puVar13,this->field_0024,
                         *(int *)(&DAT_007d02b4 + (uint)this->field_02AD * 4),this->field_0018,
                         0xffffffff);
            }
            this->field_004B = sVar14;
            goto LAB_00625067;
          }
        }
      }
      iVar7 = st::fn_00404D6D(this,CASE_2,(int)this->field_003A,(int)this->field_003C,
                                 (short)(this->field_004B * 200 + 100) + -0x32);
      if (iVar7 != 0) {
        this->field_02EE = 2;
        this->field_02AE = CASE_1;
        this->field_030F = g_playSystem_00802A38->field_00E4;
        *param_2 = (int)this->field_003A;
        *param_3 = (int)this->field_003C;
        *param_4 = iVar11;
        return 1;
      }
    }
LAB_00625067:
    local_8 = 1;
    *param_2 = (int)this->field_003A;
    *param_3 = (int)this->field_003C;
    *param_4 = iVar11;
    if ((this->field_02F6 <= iVar8) &&
       (iVar8 = st::fn_00404D6D(this,CASE_0,(int)this->field_003A,(int)this->field_003C,iVar11),
       iVar8 != 0)) {
      this->field_02EE = 0;
      this->field_02AE = CASE_1;
      this->field_030F = g_playSystem_00802A38->field_00E4;
    }
  }
  return local_8;
}

// 00625730 STMineSetC::sub_00625730
#line 4 "decomp/ST.exe/functions/00625730/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=18;
   incoming_edx_uses=5; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target field_02AD uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_02ADState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_A6=166;CASE_A7=167;CASE_AF=175;CASE_BD=189 */

undefined4 __thiscall st::fn_00625730(STMineSetC *this)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  STWorldObject *this_00;
  short sVar4;
  int local_EAX_289;
  int iVar6;
  int local_EAX_752;
  int iVar7;
  Global_sub_006263B0_param_1Enum GVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar5;
  int iVar13;
  int iVar11;
  short sVar12;
  int iVar14;
  int iVar15;
  STMineSetC *pSVar16;
  bool bVar17;
  bool bVar18;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_stack_00000010;
  short sVar19;
  short sVar20;
  int local_34;
  int local_2c;
  int local_28;
  short *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  short local_a;
  short local_8;
  short local_6;

  local_18 = 0;
  switch((uint)this->field_02AD) {
  case 0:
  case 2:
  case 3:
    local_20 = (int)this->field_0047;
    iVar11 = (int)this->field_0049;
    local_34 = (int)this->field_004B;
    if ((((-1 < local_20) && (-1 < iVar11)) &&
        ((-1 < local_34 &&
         ((local_20 < g_worldGrid.sizeX && (iVar15 = (int)g_worldGrid.sizeY, iVar11 < iVar15))))))
       && (local_34 < 5)) {
      iVar14 = *(int *)(&DAT_007d03a8 + (uint)this->field_02AD * 4);
      local_1c = iVar11 - iVar14;
      if (local_1c < 0) {
        local_1c = 0;
      }
      local_28 = local_20 - iVar14;
      if (local_28 < 0) {
        local_28 = 0;
      }
      iVar11 = iVar14 + 1 + iVar11;
      if (iVar15 < iVar11) {
        iVar11 = iVar15;
      }
      local_20 = iVar14 + 1 + local_20;
      if (g_worldGrid.sizeX < local_20) {
        local_20 = (int)g_worldGrid.sizeX;
      }
      local_14 = local_34 - iVar14;
      if (local_14 < 0) {
        local_14 = 0;
      }
      local_34 = iVar14 + 1 + local_34;
      if (5 < local_34) {
        local_34 = 5;
      }
      iVar15 = local_1c;
      if (local_14 < local_34) {
        do {
          while (iVar14 = local_28, iVar11 <= iVar15) {
            local_14 = local_14 + 1;
            iVar15 = local_1c;
            if (local_34 <= local_14) {
              return local_18;
            }
          }
          for (; iVar14 < local_20; iVar14 = iVar14 + 1) {
            sVar19 = (short)iVar14;
            sVar20 = (short)iVar15;
            sVar12 = (short)local_14;
            local_EAX_289 = st::fn_00404D3B(sVar19,sVar20,sVar12);
            if (local_EAX_289 == 0) goto switchD_00625b9f_caseD_a8;
            if ((((((sVar19 < 0) || (g_worldGrid.sizeX <= sVar19)) || (sVar20 < 0)) ||
                 ((g_worldGrid.sizeY <= sVar20 || (sVar12 < 0)))) || (g_worldGrid.sizeZ <= sVar12))
               || (this_00 = STGridAt3D(g_worldGrid, sVar19, sVar20, sVar12).objects[0],
                  this_00 == nullptr)) goto LAB_00625b06;
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            if (in_stack_00000010 == 0) {
              if ((this_00[1].vtable < (STWorldObjectVTable *)0x8) &&
                 ((g_playSystem_00802A38 == nullptr ||
                  (g_bulkInitializedRecords_008087C7[(int)this_00[1].vtable].field_0022 < 8)))) {
                bVar1 = *(byte *)&this_00[1].vtable;
                bVar2 = (byte)this->field_0262;
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == bVar2) {
LAB_006259bf:
                    iVar6 = 0;
                  }
                  else {
                    bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                    if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar6 = -2;
                    }
                    else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                      iVar6 = -1;
                    }
                    else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                      iVar6 = 1;
                    }
                    else {
                      if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                      goto LAB_006259bf;
                      iVar6 = 2;
                    }
                  }
                  bVar17 = iVar6 < 0;
                }
                else {
                  bVar17 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar1].field_0023;
                }
                if ((bVar17) && (iVar6 = (*this_00->vtable[5].slots_00_28[2])(), iVar6 != 0))
                goto LAB_00625ad5;
              }
            }
            else {
              st::fn_004031E3(this_00,(uint *)&local_a,(int *)&local_8,&local_6);
              local_EAX_752 =
                   st::fn_006ACF0D(this->field_02C2,this->field_02C6,this->field_02CA,(int)local_a,
                                (int)local_8,(int)local_6);
              if (local_EAX_752 < *(int *)(&DAT_007d0294 + (uint)this->field_02AD * 4)) {
                if (local_EAX_752 < 0x15e) {
                  iVar6 = st::fn_00404BBA(this);
                }
                else if (*(int *)(&DAT_007d0294 + (uint)this->field_02AD * 4) == 0) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = st::fn_00404BBA(this);
                }
                st::fn_00403E22(this->field_0262,iVar6,(int)this_00,(short)this->field_0018,
                                   0xffff,*(int *)(&DAT_007d04d0 + (uint)this->field_02AD * 4),0x110
                                  );
                if ((this_00->value_20 == 1000) || (this_00->value_20 == 0x14)) {
                  this->field_0241 = *(undefined4 *)&this_00->field_0x18;
                }
                if (DAT_00811798 != nullptr) {
                  iVar6 = this->vfunc_2C();
                  iVar7 = this_00->GetObjectTypeId();
                  st::fn_004058A8(st::pointer_boundary_cast<void *>(DAT_00811798),iVar14,iVar15,(uint)this_00[1].vtable,iVar7,iVar6);
                }
              }
LAB_00625ad5:
              if (this->field_02AD == CASE_2) {
                if (this->field_0342 != 0) {
                  GVar8 = this_00->GetObjectTypeId();
                  uVar9 = st::fn_0040354E(GVar8);
                  if ((this->field_0342 & uVar9) != 0) goto LAB_00625aff;
                }
              }
              else {
LAB_00625aff:
                local_18 = 1;
              }
/* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
LAB_00625b06:
              if (((((in_stack_00000010 != 0) && (this->field_02AD != CASE_1)) && (-1 < sVar19)) &&
                  (((sVar19 < g_worldGrid.sizeX && (-1 < sVar20)) &&
                   ((sVar20 < g_worldGrid.sizeY && ((-1 < sVar12 && (sVar12 < g_worldGrid.sizeZ)))))
                   ))) && (pSVar16 = (STMineSetC *)
                                     STGridAt3D(g_worldGrid, sVar19, sVar20, sVar12).objects[1]
                          , pSVar16 != nullptr)) {
                uVar10 = pSVar16->vfunc_2C();
                switch(uVar10) {
                case 0xa6:
                case 0xa7:
                case 0xaf:
                case 0xbd:
                  st::fn_0040525E(pSVar16);
                }
              }
            }
switchD_00625b9f_caseD_a8:
          }
          iVar15 = iVar15 + 1;
        } while( true );
      }
    }
    break;
  case 1:
    bVar17 = false;
    local_20 = 0;
    local_24 = st::pointer_boundary_cast<short *>(&DAT_007d03ba);
    do {
      local_2c = 3;
      do {
        iVar14 = (int)local_24[-1] + (int)this->field_0047;
        iVar15 = (int)*local_24 + (int)this->field_0049;
        iVar11 = (int)local_24[1] + (int)this->field_004B;
        if (((((iVar14 < 0) || (iVar15 < 0)) || (iVar11 < 0)) ||
            ((g_worldGrid.sizeX <= iVar14 || (g_worldGrid.sizeY <= iVar15)))) || (4 < iVar11))
        goto cf_continue_loop_0062607F;
        sVar12 = (short)iVar14;
        sVar20 = (short)iVar15;
        sVar19 = (short)iVar11;
        if (((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) ||
           ((sVar20 < 0 ||
            (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)))))) {
          pSVar16 = nullptr;
/* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
LAB_00625d60:
          if (in_stack_00000010 != 0) {
            iVar6 = this->field_02C6;
            sVar4 = (short)(iVar6 >> 0x1f);
            if (iVar6 < 0) {
              iVar6 = (short)(((short)(iVar6 / 0xc9) + sVar4) -
                             (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)(((short)(iVar6 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar6 * 0x28c1979 >> 0x3f));
            }
            iVar7 = this->field_02C2;
            sVar4 = (short)(iVar7 >> 0x1f);
            if (iVar7 < 0) {
              iVar7 = (short)(((short)(iVar7 / 0xc9) + sVar4) -
                             (short)((longlong)iVar7 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)(((short)(iVar7 / 0xc9) + sVar4) -
                                  (short)((longlong)iVar7 * 0x28c1979 >> 0x3f));
            }
            iVar13 = st::fn_006ACF90(iVar7,iVar6,iVar14,iVar15);
            if (iVar13 < 2) {
              iVar15 = this->field_02C2;
              sVar4 = (short)(iVar15 >> 0x1f);
              if (iVar15 < 0) {
                iVar15 = (short)(((short)(iVar15 / 0xc9) + sVar4) -
                                (short)((longlong)iVar15 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar15 = (int)(short)(((short)(iVar15 / 0xc9) + sVar4) -
                                     (short)((longlong)iVar15 * 0x28c1979 >> 0x3f));
              }
              uVar9 = iVar15 - iVar11 >> 0x1f;
              if ((int)((iVar15 - iVar11 ^ uVar9) - uVar9) < 2) {
                if (((sVar12 < 0) || (g_worldGrid.sizeX <= sVar12)) ||
                   ((sVar20 < 0 ||
                    (((g_worldGrid.sizeY <= sVar20 || (sVar19 < 0)) || (g_worldGrid.sizeZ <= sVar19)
                     ))))) goto cf_continue_loop_0062607F;
                pSVar16 = (STMineSetC *)
                          STGridAt3D(g_worldGrid, sVar12, sVar20, sVar19).objects[1];
              }
            }
            if (pSVar16 != nullptr) {
              uVar10 = pSVar16->vfunc_2C();
              switch(uVar10) {
              case 0xa6:
              case 0xa7:
              case 0xaf:
              case 0xbd:
                st::fn_0040525E(pSVar16);
              }
            }
          }
        }
        else {
          pSVar16 = (STMineSetC *)
                    STGridAt3D(g_worldGrid, sVar12, sVar20, sVar19).objects[0];
          if (pSVar16 == nullptr) goto LAB_00625d60;
          iVar6 = pSVar16->vfunc_F0();
          if (iVar6 != 0) {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            if (in_stack_00000010 != 0) {
              st::fn_004031E3(pSVar16,(uint *)&local_a,(int *)&local_8,&local_6);
              iVar5 = st::fn_006ACF0D(this->field_02C2,this->field_02C6,this->field_02CA,(int)local_a,
                                   (int)local_8,(int)local_6);
              if (iVar5 < *(int *)(&DAT_007d0294 + (uint)this->field_02AD * 4)) {
                if (iVar5 < 0x15e) {
                  iVar6 = st::fn_00404BBA(this);
                }
                else if (*(int *)(&DAT_007d0294 + (uint)this->field_02AD * 4) == 0) {
                  iVar6 = 0;
                }
                else {
                  iVar6 = st::fn_00404BBA(this);
                }
                st::fn_00403E22(this->field_0262,iVar6,(int)pSVar16,(short)this->field_0018,
                                   0xffff,*(int *)(&DAT_007d04d0 + (uint)this->field_02AD * 4),0x110
                                  );
                if ((pSVar16->field_0020 == 1000) || (pSVar16->field_0020 == 0x14)) {
                  this->field_0241 = pSVar16->field_0018;
                }
                if (DAT_00811798 != nullptr) {
                  iVar6 = this->vfunc_2C();
                  uVar10 = pSVar16->vfunc_2C();
                  st::fn_004058A8(st::pointer_boundary_cast<void *>(DAT_00811798),iVar14,iVar15,pSVar16->field_0024,uVar10,iVar6);
                }
              }
              goto LAB_00625d60;
            }
            if (((uint)pSVar16->field_0024 < 8) &&
               ((g_playSystem_00802A38 == nullptr ||
                (g_bulkInitializedRecords_008087C7[pSVar16->field_0024].field_0022 < 8)))) {
              bVar1 = *(byte *)&pSVar16->field_0024;
              bVar2 = (byte)this->field_0262;
              if (DAT_00808a8f == '\0') {
                if (bVar1 == bVar2) {
LAB_00625efc:
                  iVar11 = 0;
                }
                else {
                  bVar3 = g_playerRelationMatrix[bVar1][bVar2];
                  if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar11 = -2;
                  }
                  else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar2][bVar1] == 0)) {
                    iVar11 = -1;
                  }
                  else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar2][bVar1] == 1)) {
                    iVar11 = 1;
                  }
                  else {
                    if ((bVar3 != 1) || (g_playerRelationMatrix[bVar2][bVar1] != 1))
                    goto LAB_00625efc;
                    iVar11 = 2;
                  }
                }
                bVar18 = iVar11 < 0;
              }
              else {
                bVar18 = g_bulkInitializedRecords_008087C7[bVar2].field_0023 !=
                         g_bulkInitializedRecords_008087C7[bVar1].field_0023;
              }
              if (((bVar18) && (iVar11 = pSVar16->vfunc_F8(), iVar11 != 0)) &&
                 (iVar11 = st::fn_00402CBB(this,(int *)pSVar16,local_20), iVar11 != 0)) {
                if (DAT_00811798 != nullptr) {
                  iVar11 = this->vfunc_2C();
                  uVar10 = pSVar16->vfunc_2C();
                  st::fn_004058A8(st::pointer_boundary_cast<void *>(DAT_00811798),iVar14,iVar15,pSVar16->field_0024,uVar10,iVar11);
                }
                bVar17 = true;
              }
            }
          }
        }
cf_continue_loop_0062607F:
        local_24 = local_24 + 3;
        local_2c = local_2c + -1;
      } while (local_2c != 0);
      local_20 = local_20 + 1;
    } while ((int)local_24 < 0x7d046e);
    if (bVar17) {
      local_18 = 1;
      this->field_0346 = g_playSystem_00802A38->field_00E4;
    }
  }
  return local_18;
}

// 00626B50 STMineSetC::sub_00626B50
#line 4 "decomp/ST.exe/functions/00626B50/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00626B50_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_sub_00626B50_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_00626B50(STMineSetC *this,STMineSetC_sub_00626B50_param_1Enum param_1)

{
  switch(param_1) {
  case CASE_0:
    this->field_02D6 = 0;
    return;
  case CASE_1:
    this->field_02D6 = 1;
    return;
  case CASE_2:
    this->field_02D6 = 2;
    return;
  case CASE_3:
    this->field_02D6 = 3;
  }
  return;
}

// 00626EA0 STMineSetC::FUN_00626ea0
#line 4 "decomp/ST.exe/functions/00626EA0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079CEFC
   Entries: 004043EA
   Slots: 0x6C
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_00626EA0(STMineSetC *this)

{
  return this->field_0262;
}

// 00626FA0 STMineSetC::FUN_00626fa0
#line 4 "decomp/ST.exe/functions/00626FA0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079CEFC
   Entries: 004052B3
   Slots: 0xEC
   Anchor:
   Evidence: slot_family_has_no_named_method; unique_owner_for_target;
   receiver_only_leaf_virtual_signature */

dword __thiscall st::fn_00626FA0(STMineSetC *this)

{
  return (uint)(this->field_021D == 0);
}

// 00627400 STMineSetC::sub_00627400
#line 4 "decomp/ST.exe/functions/00627400/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as STMineSetC.
   Evidence: this_call_owners=[STMineSetC]; agreed_this_calls=1; incoming_this_accesses=8;
   incoming_edx_uses=4; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_00627400(STMineSetC *this,undefined4 param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STFishC *this_00;
  int iVar4;
  dword dVar5;

  sVar1 = this->field_0047;
  sVar2 = this->field_0049;
  sVar3 = this->field_004B;
  if ((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
     (((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)) ||
      ((g_worldGrid.sizeZ <= sVar3 ||
       (this_00 = (STFishC *)
                  STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[(byte)this->field_008E], this_00 == nullptr)))))) {
    if ((((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) || (sVar2 < 0)) ||
         ((g_worldGrid.sizeY <= sVar2 || (sVar3 < 0)))) ||
        ((g_worldGrid.sizeZ <= sVar3 ||
         (STGridAt3D(g_worldGrid, sVar1, sVar2, sVar3).objects[(byte)this->field_008E] == nullptr)))) &&
       (iVar4 = st::fn_00401325
                          (sVar1,sVar2,sVar3,this->field_008E,
                           (RecoveredRecord_DumpClassC_00495EC0 *)this), iVar4 == 0)) {
      this->field_0314 = this->field_0314 + '\x01';
      return param_1;
    }
  }
  else {
    if (this->field_0315 < g_playSystem_00802A38->field_00E4) {
      st::fn_0040525E(this);
      return this->field_02AE;
    }
    if ((int)(((ulonglong)(this->field_0315 - g_playSystem_00802A38->field_00E4) % 200) / 3) != 0) {
      dVar5 = this_00->slot_2C();
      if (dVar5 == 0xe6) {
        st::fn_00404A4D(this_00,0);
      }
      else if ((0xe6 < (int)dVar5) && ((int)dVar5 < 0xec)) {
        st::fn_00402612(this_00,0);
        return param_1;
      }
    }
  }
  return param_1;
}

