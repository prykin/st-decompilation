#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/AiFltClassTy.cpp

// 0065D230 AiFltClassTy::AiFltClassTy
#line 4 "decomp/ST.exe/functions/0065D230/decomp.c"
/* [STConstructorApplier] Recovered constructor candidate.
   VTable: 0079D6BC (store 0065D23B)
   Evidence: final_vptr=0079D6BC; returns_this=true; calls_before=1; field_writes_after=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; table_confidence=high */

AiFltClassTy * __thiscall st::fn_0065D230(AiFltClassTy *this)

{

  st::fn_006E60E0(this);
  this->vtable = &st_global_0079D6BC;
  memset(&this->field_0020, 0, 0x260); /* compiler bulk-zero initialization */
  this->field_0284 = nullptr;
  this->field_0020 = 900;
  this->field_007D = 0xfffe;
  this->field_0097 = 0xff;
  return this;
}

// 0065D6A0 AiFltClassTy::sub_0065D6A0
#line 4 "decomp/ST.exe/functions/0065D6A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall st::fn_0065D6A0(AiFltClassTy *this)

{
  STGroupBoatC *this_00;

  if ((this->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    this_00 = st::fn_00405CF9(*(char *)&this->field_0024,this->field_007D);
    if (this_00 != nullptr) {
      st::fn_00402770(this_00,this);
    }
  }
  return;
}

// 0065D6E0 AiFltClassTy::sub_0065D6E0
#line 4 "decomp/ST.exe/functions/0065D6E0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall st::fn_0065D6E0(AnonShape_0065D6E0_0F9074F6 *param_1,undefined4 param_2)

{
  STGroupBoatC *this;

  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    this = st::fn_00405CF9(param_1->field_0024,param_1->field_007D);
    if (this != nullptr) {
      st::fn_00402770(this,nullptr);
    }
  }
  return;
}

// 0065D720 AiFltClassTy::sub_0065D720
#line 4 "decomp/ST.exe/functions/0065D720/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall st::fn_0065D720(AnonShape_0065D720_52DE2AAB *param_1,undefined4 param_2)

{
  STGroupBoatC *pSVar1;

  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    pSVar1 = st::fn_00405CF9(param_1->field_0024,param_1->field_007D);
    if (pSVar1 != nullptr) {
      st::fn_004059A7((int)pSVar1);
      return;
    }
  }
  return;
}

// 0065D9C0 AiFltClassTy::sub_0065D9C0
#line 4 "decomp/ST.exe/functions/0065D9C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0 */

undefined2 __thiscall st::fn_0065D9C0(AiFltClassTy *this)

{
  undefined2 uVar1;
  STGroupBoatC *pSVar2;

  if ((this->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    pSVar2 = st::fn_00405CF9(*(char *)&this->field_0024,this->field_007D);
    if (pSVar2 != nullptr) {
      uVar1 = st::fn_00401735(pSVar2);
      return uVar1;
    }
  }
  return 0;
}

// 0065DA10 AiFltClassTy::sub_0065DA10
#line 4 "decomp/ST.exe/functions/0065DA10/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 006618E0 -> 0065DA10 @ 00661991 */

uint * __fastcall st::fn_0065DA10(AiFltClassTy *param_1,undefined4 param_2)

{
  STGroupBoatC *this;
  uint *puVar1;

  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    this = st::fn_00405CF9(*(char *)&param_1->field_0024,param_1->field_007D);
    if (this != nullptr) {
      puVar1 = st::fn_00402DB5((STGroupC *)this);
      return puVar1;
    }
  }
  return nullptr;
}

// 0065E360 AiFltClassTy::sub_0065E360
#line 4 "decomp/ST.exe/functions/0065E360/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=2; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 00660F70 -> 0065E360 @ 006611D9; AiFltClassTy::sub_00660F70 this; stable alias ESI */

uint * __fastcall st::fn_0065E360(AiFltClassTy *param_1,undefined4 param_2,int param_3)

{
  STGroupBoatC *this;
  uint *puVar1;

  if ((param_1->field_007D != 0xfffe) && (g_allPlayers_007FA174 != nullptr)) {
    this = st::fn_00405CF9(*(char *)&param_1->field_0024,param_1->field_007D);
    if (this != nullptr) {
      puVar1 = st::fn_00403D46((STGroupC *)this,param_3);
      return puVar1;
    }
  }
  return nullptr;
}

// 0065F5C0 AiFltClassTy::sub_0065F5C0
#line 4 "decomp/ST.exe/functions/0065F5C0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_0065F5C0(AiFltClassTy *this,short *param_1)

{
  short *psVar1;
  int iVar2;
  AnonPointee_AiFltClassTy_0223 *pAVar3;
  uint uVar4;
  bool bVar5;

  uVar4 = 0;
  pAVar3 = this->field_0223;
  if (0 < *(int *)&pAVar3->field_0xc) {
    bVar5 = *(int *)&pAVar3->field_0xc != 0;
    do {
      if (bVar5) {
        psVar1 = (short *)(pAVar3->field_0008 * uVar4 + pAVar3->field_001C);
      }
      else {
        psVar1 = nullptr;
      }
      iVar2 = st::fn_006ACF90((int)*psVar1,(int)psVar1[1],(int)*param_1,(int)param_1[1]);
      if (iVar2 < 8) {
        return 0;
      }
      pAVar3 = this->field_0223;
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < *(uint *)&pAVar3->field_0xc;
    } while ((int)uVar4 < (int)*(uint *)&pAVar3->field_0xc);
  }
  st::fn_006AE1C0((DArrayTy *)this->field_0223,param_1);
  return 1;
}

// 0065F980 AiFltClassTy::sub_0065F980
#line 4 "decomp/ST.exe/functions/0065F980/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0065F980(AiFltClassTy *this)

{
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  AiFltClassTy *local_c;
  undefined2 local_8;

  if (DAT_008117bc != nullptr) {
    memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
    local_10 = *(undefined2 *)&this->field_0024;
    local_e = this->field_007D;
    local_8 = *(undefined2 *)&this->field_00B3;
    local_14 = 0x5de5;
    local_c = this;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)*DAT_008117bc)(local_24);
    this->field_00B3 = 0;
    return;
  }
  this->field_00B3 = 0;
  return;
}

// 0065FA60 AiFltClassTy::sub_0065FA60
#line 4 "decomp/ST.exe/functions/0065FA60/decomp.c"
/* [STHiddenThisApplier] Anonymous hidden receiver recovered as
   /SubmarineTitans/Recovered/HiddenThis/AnonReceiver_0065FA60.
   Evidence: incoming_receiver_captures=1; receiver_accesses=4; incoming_edx_uses=0; calls=4;
   ecx_pointer_setup=4; ecx_scalar_setup=0; caller_cleanup_calls=0; callee_ret_pop=[12];
   expected_stack=12; receiver_family_members=1

   [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

uint * __thiscall
st::fn_0065FA60(AiFltClassTy *this,int param_1,int param_2,short *param_3)

{
  AiFltClassTy *pAVar1;
  int iVar2;
  undefined4 *puVar3;
  uint index;
  DArrayTy *array;
  InternalExceptionFrame local_5c;
  uint local_18;
  AiFltClassTy *local_14;
  DArrayTy *local_10;
  short local_a;
  short local_8;
  short local_6;

  local_10 = nullptr;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar2 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pAVar1 = local_14;
  if (iVar2 == 0) {
    if (param_2 == 0) {
      if (local_14->field_0284 != nullptr) {
        local_10 = (DArrayTy *)st::fn_00401573(local_14->field_0284,param_1);
      }
    }
    else if (param_2 == 1) {
      if (local_14->field_0284 != nullptr) {
        local_10 = (DArrayTy *)st::fn_00401573(local_14->field_0284,param_1);
      }
      if ((local_10 == nullptr) && (g_allPlayers_007FA174 != nullptr)) {
        local_10 = (DArrayTy *)
                   st::fn_00401415
                             (g_allPlayers_007FA174,*(char *)&pAVar1->field_0024,param_1,0,-1);
      }
    }
    else if ((param_2 == 2) && (g_allPlayers_007FA174 != nullptr)) {
      local_10 = (DArrayTy *)
                 st::fn_00401415
                           (g_allPlayers_007FA174,*(char *)&local_14->field_0024,param_1,0,-1);
    }
  }
  array = local_10;
  g_currentExceptionFrame = local_5c.previous;
  if (local_10 != nullptr) {
    if (local_10->count == 0) {
      st::fn_006AE110(local_10);
      local_10 = nullptr;
    }
    array = local_10;
    if ((((local_10 != nullptr) && (param_3 != nullptr)) && (0 < param_3[3])) &&
       ((0 < param_3[4] && (0 < param_3[5])))) {
      local_18 = local_10->count;
      while (index = local_18 - 1, -1 < (int)index) {
        if (index < array->count) {
          puVar3 = DArrayAt<undefined4>(array, index);
        }
        else {
          puVar3 = nullptr;
        }
        local_18 = index;
        if ((STFishC *)*puVar3 != nullptr) {
          st::fn_004018C5((STFishC *)*puVar3,&local_6,&local_8,&local_a);
          if (((local_6 < *param_3) || (local_8 < param_3[1])) ||
             ((index = local_18, local_a < param_3[2] ||
              ((((int)*param_3 + (int)param_3[3] <= (int)local_6 ||
                ((int)param_3[1] + (int)param_3[4] <= (int)local_8)) ||
               ((int)param_3[2] + (int)param_3[5] <= (int)local_a)))))) {
            st::fn_006B0C70(array,index);
            local_18 = index;
          }
        }
      }
    }
  }
  return &array->flags;
}

// 00660F70 AiFltClassTy::sub_00660F70
#line 4 "decomp/ST.exe/functions/00660F70/decomp.c"
/* WARNING: Removing unreachable block (ram,0x006611f2) */
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=26;
   incoming_edx_uses=0; incoming_stack_parameter_uses=5; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00660F70(AiFltClassTy *this,uint *param_1,undefined2 param_2)

{
  Global_sub_004E80F0_param_2Enum GVar1;
  ushort *puVar2;
  bool bVar3;
  STAllPlayersC *pSVar4;
  uint uVar5;
  Global_sub_004E80F0_param_2Enum *pGVar6;
  STAllPlayersC *pSVar7;
  int iVar8;
  DArrayTy *array;
  STGameObjC *pSVar9;
  short sVar10;
  undefined4 uVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 extraout_EDX;
  AnonShape_0068EB30_4F4B480A *pAVar12;
  AnonShape_0068EB30_4F4B480A local_6c;
  AiPlrClassTy *local_20;
  int local_1c;
  int local_18;
  int local_14;
  STGameObjC *local_10;
  int local_c;
  Global_sub_004E80F0_param_2Enum *local_8;

  if (((this->field_0284 != nullptr) && (this->field_020B != nullptr)) &&
     (g_allPlayers_007FA174 != nullptr)) {
    local_20 = st::fn_00401DC5(*(char *)&this->field_0024);
    sVar10 = this->field_007B;
    local_c = 0;
    if ((-(uint)(sVar10 != 1) & 2) != 0xffffffff) {
      local_8 = param_1;
      pSVar7 = g_allPlayers_007FA174;
      do {
        GVar1 = *local_8;
        if ((GVar1 == 0) || (((GVar1 == 0 || (0x28 < GVar1)) && (sVar10 != 1))))
        goto cf_continue_loop_0066137E;
        if ((((int)GVar1 < 1) || (0x28 < (int)GVar1)) || (pSVar7 == nullptr)) {
          if ((((int)GVar1 < 0x32) || (0x73 < (int)GVar1)) || (pSVar7 == nullptr)) {
            if ((((GVar1 == CASE_A3) || (GVar1 == CASE_A8)) ||
                ((GVar1 == CASE_B2 || (GVar1 == CASE_BE)))) && (pSVar7 != nullptr)) {
              pSVar7 = (STAllPlayersC *)st::fn_00401799(this->field_0024,GVar1);
              pSVar4 = g_allPlayers_007FA174;
            }
            else {
              pSVar4 = pSVar7;
              if (((GVar1 != 0xdd) && (GVar1 != 0xde)) && ((GVar1 != 0xe2 && (GVar1 != 0xdc))))
              goto cf_continue_loop_0066137E;
            }
          }
          else {
            pSVar7 = (STAllPlayersC *)st::fn_0040469C(this->field_0024,GVar1);
            pSVar4 = g_allPlayers_007FA174;
          }
        }
        else {
          pSVar7 = (STAllPlayersC *)st::fn_0040413D((byte *)this->field_0024,GVar1);
          pSVar4 = g_allPlayers_007FA174;
        }
        bVar3 = pSVar7 == nullptr;
        pSVar7 = pSVar4;
        if (bVar3) goto cf_continue_loop_0066137E;
        if (this->field_00FF == '\0') goto switchD_0066104e_caseD_9;
        switch(*local_8) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 8:
        case 0x14:
        case 0x1a:
        case 0x3b:
        case 0x60:
          iVar8 = *(int *)(this->field_0284 + 0x9c);
          if (this->field_0039 != 3) {
            if (iVar8 != 0) goto switchD_0066104e_caseD_9;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            iVar8 = *(int *)(this->field_0284 + 0x9a);
          }
          if (iVar8 == 0) goto cf_continue_loop_0066137E;
        default:
          goto switchD_0066104e_caseD_9;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 0x39:
        case 0x5e:
          iVar8 = *(int *)(this->field_0284 + 0x9c);
          break;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 0x3a:
          iVar8 = *(int *)(this->field_0284 + 0x9e);
          break;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 0x4f:
        case 0x61:
          iVar8 = *(int *)(this->field_0284 + 0x9a);
          break;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        case 100:
          iVar8 = *(int *)(this->field_0284 + 0xa0);
        }
        if (iVar8 != 0) {
switchD_0066104e_caseD_9:
          if ((0x31 < *local_8) && (*local_8 < 0x74)) {
            sVar10 = STField<short>(param_1,0xe);
            uVar11 = STReplaceLowWord((uint32_t)(local_8), (uint16_t)(sVar10));
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if ((sVar10 < 0) ||
               ((((short)param_1[4] < 0 || (STField<short>(param_1,0x12) < 0)) ||
                (iVar8 = st::fn_00402829(sVar10,(int)(short)param_1[4],
                                            (int)STField<short>(param_1,0x12),*local_8,
                                            this->field_0024,nullptr,nullptr,nullptr
                                            ,0,nullptr), uVar11 = extraout_EDX, iVar8 == 0)))) {
              local_10 = nullptr;
              if (((0x53 < *local_8) && (*local_8 < 0x5b)) &&
                 (array = (DArrayTy *)st::fn_004059B6(this,uVar11,0x53), array != nullptr)) {
                if (((array->count != 0) && (g_allPlayers_007FA174 != nullptr)) &&
                   (pSVar9 = st::fn_004028BA
                                       (g_allPlayers_007FA174,*(char *)&this->field_0024,
                                        *(ushort *)array->data,CASE_1), pSVar9 != nullptr)
                   ) {
                  local_10 = pSVar9;
                }
                st::fn_006AE110(array);
              }
              local_14 = (int)STField<short>(param_1,0xe);
              puVar2 = this->field_0284;
              local_18 = (int)(short)param_1[4];
              local_1c = (int)STField<short>(param_1,0x12);
              iVar8 = st::fn_00403F03(this->field_0024,*local_8,&local_14,&local_18,&local_1c,
                                         (int)(short)puVar2[0x41],(int)(short)puVar2[0x42],
                                         (int)(short)puVar2[0x43],(int)local_10);
              if (iVar8 == 0) {
                return;
              }
              STField<undefined2>(param_1,0xe) = (undefined2)local_14;
              *(undefined2 *)(param_1 + 4) = (undefined2)local_18;
              STField<undefined2>(param_1,0x12) = (undefined2)local_1c;
            }
            iVar8 = st::fn_00403445(this->field_0024,*local_8,(uint)(ushort)this->field_007D);
            if (0 < iVar8) {
              return;
            }
          }
          pGVar6 = local_8;
          pAVar12 = &local_6c;
          for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
            *(undefined4 *)pAVar12 = 0;
            pAVar12 = (AnonShape_0068EB30_4F4B480A *)((int)&pAVar12->field_0003 + 1);
          }
          uVar5 = param_1[3];
          *(undefined2 *)pAVar12 = 0;
          STPiece<0,4>(local_6c) = *pGVar6;
          STPiece<4,2>(local_6c) = param_2;
          if (local_20 == nullptr) {
            STPiece<8,4>(local_6c) = 0;
          }
          else {
            STPiece<8,4>(local_6c) = local_20->field_065C;
            local_20->field_065C = STPiece<8,4>(local_6c) + 1;
          }
          STPiece<12,2>(local_6c) = this->field_007D;
          STPiece<22,2>(local_6c) = STField<undefined2>(param_1,0xe);
          STPiece<24,2>(local_6c) = *(undefined2 *)(param_1 + 4);
          STPiece<26,2>(local_6c) = STField<undefined2>(param_1,0x12);
          STPiece<28,1>(local_6c) = SUB41(param_1[5],0);
          STPiece<14,4>(local_6c) = 0;
          if ((((char)STPiece<28,1>(local_6c) < '\0') || ('\a' < (char)STPiece<28,1>(local_6c))) &&
             ((STPiece<28,1>(local_6c) = this->field_0081, (char)STPiece<28,1>(local_6c) < '\0' ||
              ('\a' < (char)STPiece<28,1>(local_6c))))) {
            STPiece<28,1>(local_6c) = *(undefined1 *)&this->field_0024;
          }
          local_6c.field_0006 = (short)uVar5;
          st::fn_0072E340(&local_6c.field_0x1d,(char *)((int)param_1 + 0x15),0xe);
          iVar8 = st::fn_004056BE
                            ((AiTactClassTy *)this->field_0284,&local_6c,this->field_007F);
          pSVar7 = g_allPlayers_007FA174;
          if (iVar8 == 0) {
            param_1[9] = STPiece<8,4>(local_6c);
            return;
          }
        }
cf_continue_loop_0066137E:
        local_8 = local_8 + 1;
        local_c = local_c + 1;
        sVar10 = this->field_007B;
        if ((int)((-(uint)(sVar10 != 1) & 2) + 1) <= local_c) {
          return;
        }
      } while( true );
    }
  }
  return;
}

// 00661580 AiFltClassTy::sub_00661580
#line 4 "decomp/ST.exe/functions/00661580/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00661580(AiFltClassTy *this)

{
  ushort *this_00;
  int iVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;

  this_00 = this->field_0284;
  if (this_00 == nullptr) {
    return;
  }
  if (this->field_020B == nullptr) {
    return;
  }
  if ((this->field_01FB != 0) && (this->field_0280 < this->field_01FF + this->field_01FB)) {
    return;
  }
  this->field_01FF = this->field_0280;
  if ((this->field_00FF != '\0') && (this->field_007B == 2)) {
    iVar1 = *(int *)(this_00 + 0x9c);
    if (this->field_0039 != 3) {
      if (iVar1 != 0) goto LAB_006615ff;
      iVar1 = *(int *)(this_00 + 0x9a);
    }
    if (iVar1 == 0) {
      return;
    }
  }
LAB_006615ff:
  iVar1 = st::fn_00402EF5(this_00,this->field_007D);
  if (iVar1 < (int)(3 - (uint)(this->field_007B != 1))) {
    pDVar2 = this->field_020B;
    uVar3 = 0;
    if (0 < (int)pDVar2->count) {
      bVar5 = pDVar2->count != 0;
      do {
        if (bVar5) {
          puVar4 = DArrayAt<uint>(pDVar2, uVar3);
        }
        else {
          puVar4 = nullptr;
        }
        if (((puVar4[10] == 0) && (puVar4[9] == 0)) &&
           (st::fn_00402DC9(this,puVar4,(short)uVar3), puVar4[9] != 0)) {
          return;
        }
        pDVar2 = this->field_020B;
        uVar3 = uVar3 + 1;
        bVar5 = uVar3 < pDVar2->count;
      } while ((int)uVar3 < (int)pDVar2->count);
    }
  }
  return;
}

// 00661800 AiFltClassTy::sub_00661800
#line 4 "decomp/ST.exe/functions/00661800/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __fastcall st::fn_00661800(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  DArrayTy *array;
  ushort *puVar1;
  STGameObjC *this;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int local_8;

  local_8 = 0;
  array = (DArrayTy *)st::fn_004018CF((AiFltClassTy *)param_1,param_2);
  if (array != nullptr) {
    uVar3 = 0;
    iVar2 = 0;
    if (0 < (int)array->count) {
      bVar4 = array->count != 0;
      do {
        if (bVar4) {
          puVar1 = DArrayAt<ushort>(array, uVar3);
        }
        else {
          puVar1 = nullptr;
        }
        this = st::fn_004028BA(g_allPlayers_007FA174,param_1->field_0024,*puVar1,CASE_1);
        if ((((this != nullptr) && (iVar2 = (*this->vtable->vfunc_2C)(), 0x31 < iVar2)) &&
            (iVar2 < 0x74)) &&
           ((*(short *)&param_1->field_0x39 != 3 &&
            ((this->field_0361 == 5 || (iVar2 = st::fn_004046C9(this,5), 0 < iVar2)))))) {
          local_8 = local_8 + 1;
        }
        uVar3 = uVar3 + 1;
        bVar4 = uVar3 < array->count;
        iVar2 = local_8;
      } while ((int)uVar3 < (int)array->count);
    }
    st::fn_006AE110(array);
    return iVar2;
  }
  return 0;
}

// 00661CA0 AiFltClassTy::sub_00661CA0
#line 4 "decomp/ST.exe/functions/00661CA0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=29;
   incoming_edx_uses=0; incoming_stack_parameter_uses=6; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall
st::fn_00661CA0(AnonShape_00661CA0_93A030EF *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  AiTactClassTy *pAVar2;
  STGameObjC *pSVar3;
  STGameObjC *this;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  Global_sub_006753A0_param_1Enum GVar7;
  void *pvVar8;
  IMAGE_DOS_HEADER *pIVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  AnonShape_0068FD00_A5257008 **ppAVar14;
  bool bVar15;
  AnonShape_0068FD00_A5257008 *local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined1 local_5b;
  short *psStack_5a;
  undefined1 uStack_56;
  short local_30;
  short local_2e [5];
  uint local_24;
  AiPlrClassTy *local_20;
  short local_1c [2];
  short local_18 [2];
  AnonShape_00661CA0_93A030EF *local_14;
  STGameObjC *local_10;
  uint local_c;
  undefined2 local_6;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((g_allPlayers_007FA174 != nullptr) &&
     (local_14 = param_1,
     this = st::fn_004028BA
                      (g_allPlayers_007FA174,param_1->field_0024,*(ushort *)(param_3 + 0x16),CASE_1)
     , this != nullptr)) {
    local_10 = this;
    local_20 = st::fn_00401DC5(param_1->field_0024);
    uVar4 = (*this->vtable->vfunc_2C)();
    pSVar3 = local_10;
    local_c = uVar4;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(short *)(param_3 + 0x14) == 0) {
      st::fn_004018C5((STFishC *)this,local_18,local_1c,&local_6);
      if ((0x31 < (int)local_c) && ((int)local_c < 0x74)) {
        uVar4 = 0;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        local_24 = *(uint *)(param_1->field_020B + 0xc);
        if (0 < (int)local_24) {
          bVar15 = local_24 != 0;
          do {
            if (bVar15) {
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              puVar5 = (uint *)(*(int *)(param_1->field_020B + 8) * uVar4 +
                               *(int *)(param_1->field_020B + 0x1c));
            }
            else {
              puVar5 = nullptr;
            }
            if (puVar5[10] == 0) {
              iVar10 = 0;
              puVar13 = puVar5;
              do {
                if (*puVar13 == local_c) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  puVar5[10] = *(uint *)(param_3 + 0x18);
                  STField<short>(puVar5,0xe) = local_18[0];
                  *(short *)(puVar5 + 4) = local_1c[0];
                  STField<undefined2>(puVar5,0x12) = local_6;
                  puVar5[9] = 0;
                  goto LAB_00661e5f;
                }
                iVar10 = iVar10 + 1;
                puVar13 = puVar13 + 1;
              } while (iVar10 < 3);
            }
            uVar4 = uVar4 + 1;
            bVar15 = uVar4 < local_24;
          } while ((int)uVar4 < (int)local_24);
        }
      }
      if ((0 < (int)local_c) && ((int)local_c < 0x29)) {
        if (local_10->field_081E != 0) {
          iVar10 = param_1->field_020B;
          uVar11 = 0;
          uVar4 = *(uint *)(iVar10 + 0xc);
          if (0 < (int)uVar4) {
            bVar15 = uVar4 != 0;
            do {
              if (bVar15) {
                iVar6 = *(int *)(iVar10 + 8) * uVar11 + *(int *)(iVar10 + 0x1c);
              }
              else {
                iVar6 = 0;
              }
              if ((*(int *)(iVar6 + 0x28) == 0) && (*(int *)(iVar6 + 0x24) == local_10->field_081E))
              {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                uVar1 = *(undefined4 *)(param_3 + 0x18);
                *(undefined4 *)(iVar6 + 0x24) = 0;
                *(undefined4 *)(iVar6 + 0x28) = uVar1;
                goto LAB_00661e5f;
              }
              uVar11 = uVar11 + 1;
              bVar15 = uVar11 < uVar4;
            } while ((int)uVar11 < (int)uVar4);
          }
        }
        iVar10 = param_1->field_020B;
        uVar4 = 0;
        if (0 < *(int *)(iVar10 + 0xc)) {
          bVar15 = *(int *)(iVar10 + 0xc) != 0;
          do {
            if (bVar15) {
              puVar5 = (uint *)(*(int *)(iVar10 + 8) * uVar4 + *(int *)(iVar10 + 0x1c));
            }
            else {
              puVar5 = nullptr;
            }
            if (puVar5[10] == 0) {
              iVar6 = 0;
              puVar13 = puVar5;
              do {
                param_1 = local_14;
                if (*puVar13 == local_c) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  uVar4 = *(uint *)(param_3 + 0x18);
                  puVar5[9] = 0;
                  puVar5[10] = uVar4;
                  goto LAB_00661e5f;
                }
                iVar6 = iVar6 + 1;
                puVar13 = puVar13 + 1;
              } while (iVar6 < 3);
            }
            uVar4 = uVar4 + 1;
            bVar15 = uVar4 < *(uint *)(iVar10 + 0xc);
          } while ((int)uVar4 < (int)*(uint *)(iVar10 + 0xc));
        }
      }
LAB_00661e5f:
      if (((0x31 < (int)local_c) && ((int)local_c < 0x74)) && (param_1->field_0284 != 0)) {
        local_30 = local_18[0] + -4;
        local_2e[0] = local_1c[0] + -4;
        local_2e[2] = 9;
        local_2e[3] = 9;
        local_2e[1] = 0;
        local_2e[4] = 5;
        st::fn_00401906(&local_30,local_2e,local_2e + 2,local_2e + 3);
        ppAVar14 = &local_64;
        for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
          *ppAVar14 = nullptr;
          ppAVar14 = ppAVar14 + 1;
        }
        local_60 = param_1->field_0280;
        local_64 = (AnonShape_0068FD00_A5257008 *)0x6c;
        local_5c = 0;
        GVar7 = (*local_10->vtable->vfunc_2C)();
        iVar10 = st::fn_004020C2(GVar7);
        local_5b = (undefined1)iVar10;
        psStack_5a = &local_30;
        st::fn_004010E1
                  ((AiTactClassTy *)param_1->field_0284,(AnonShape_0068FD00_A5257008 *)&local_64);
      }
      if (((0 < (int)local_c) && ((int)local_c < 0x29)) && (param_1->field_007B == -0x8000)) {
        if (param_1->field_009B == 0x78) {
          param_1->field_009B = 0x33;
          param_1->field_009F = 0;
          param_1->field_00A3 = 0;
          param_1->field_00A7 = 0;
        }
        uVar4 = 0;
        if ((AiTactClassTy *)param_1->field_0284 != nullptr) {
          pvVar8 = (void *)st::fn_00405B23
                                     ((AiTactClassTy *)param_1->field_0284,local_10->field_081C);
          if (local_20 != nullptr) {
            uVar4 = local_20->field_065C;
            local_20->field_065C = uVar4 + 1;
          }
          if (pvVar8 != nullptr) {
            st::fn_00405844(pvVar8,local_c,uVar4);
          }
          local_10->field_081E = uVar4;
        }
      }
    }
    else {
      iVar10 = param_1->field_020B;
      uVar12 = 0;
      uVar11 = *(uint *)(iVar10 + 0xc);
      if (0 < (int)uVar11) {
        bVar15 = uVar11 != 0;
        do {
          if (bVar15) {
            iVar6 = *(int *)(iVar10 + 8) * uVar12 + *(int *)(iVar10 + 0x1c);
          }
          else {
            iVar6 = 0;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)(iVar6 + 0x28) == *(int *)(param_3 + 0x18)) {
            *(undefined4 *)(iVar6 + 0x28) = 0;
            break;
          }
          uVar12 = uVar12 + 1;
          bVar15 = uVar12 < uVar11;
        } while ((int)uVar12 < (int)uVar11);
      }
      if ((((0 < (int)uVar4) && ((int)uVar4 < 0x29)) && (param_1->field_007B == -0x8000)) &&
         (((AiTactClassTy *)param_1->field_0284 != nullptr &&
          (pvVar8 = (void *)st::fn_00405B23
                                      ((AiTactClassTy *)param_1->field_0284,local_10->field_081C),
          pvVar8 != nullptr)))) {
        st::fn_00402400(pvVar8,uVar4,pSVar3->field_081E);
      }
    }
    pIVar9 = st::fn_0040410B(local_c);
    if ((((uint)pIVar9 & 0x60) != 0) &&
       (pAVar2 = (AiTactClassTy *)param_1->field_0284, pAVar2 != nullptr)) {
      ppAVar14 = &local_64;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *ppAVar14 = nullptr;
        ppAVar14 = ppAVar14 + 1;
      }
      local_60 = param_1->field_0280;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_5c = *(undefined1 *)(param_3 + 0x14);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_5b = (undefined1)*(undefined2 *)(param_3 + 0x16);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STPiece<0,1>(psStack_5a) = (undefined1)((ushort)*(undefined2 *)(param_3 + 0x16) >> 8);
      STPiece<1,3>(psStack_5a) = (undefined3)local_c;
      uStack_56 = (undefined1)(local_c >> 0x18);
      local_64 = (AnonShape_0068FD00_A5257008 *)0x6e;
      st::fn_004010E1(pAVar2,(AnonShape_0068FD00_A5257008 *)&local_64);
    }
    pIVar9 = st::fn_0040410B(local_c);
    if ((((uint)pIVar9 & 0x10) != 0) &&
       (pAVar2 = (AiTactClassTy *)param_1->field_0284, pAVar2 != nullptr)) {
      ppAVar14 = &local_64;
      for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
        *ppAVar14 = nullptr;
        ppAVar14 = ppAVar14 + 1;
      }
      local_60 = param_1->field_0280;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_5c = *(undefined1 *)(param_3 + 0x14);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_5b = (undefined1)*(undefined2 *)(param_3 + 0x16);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      STPiece<0,1>(psStack_5a) = (undefined1)((ushort)*(undefined2 *)(param_3 + 0x16) >> 8);
      STPiece<1,3>(psStack_5a) = (undefined3)local_c;
      uStack_56 = (undefined1)(local_c >> 0x18);
      local_64 = (AnonShape_0068FD00_A5257008 *)0x74;
      st::fn_004010E1(pAVar2,(AnonShape_0068FD00_A5257008 *)&local_64);
    }
    if ((((0 < (int)local_c) && ((int)local_c < 0x29)) && (param_1->field_007B != 1)) &&
       (param_1->field_009B == 0x41)) {
      param_1->field_009B = 0x3c;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
  }
  return;
}

// 00664760 AiFltClassTy::sub_00664760
#line 4 "decomp/ST.exe/functions/00664760/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_00664760(AiFltClassTy *this)

{
  short *psVar1;
  ushort *puVar2;
  short *psVar3;
  AnonPointee_AiFltClassTy_0223 *pAVar4;
  AnonPointee_AiFltClassTy_022F *pAVar5;
  uint uVar6;
  bool bVar7;
  short local_10;
  short local_e [5];

  uVar6 = 0;
  pAVar5 = this->field_022F;
  this->field_009B = 0;
  this->field_009F = 0;
  this->field_00A3 = 0;
  this->field_00A7 = 0;
  bVar7 = *(int *)&pAVar5->field_0xc != 0;
  if (0 < *(int *)&pAVar5->field_0xc) {
    do {
      if (bVar7) {
        psVar3 = (short *)(pAVar5->field_0008 * uVar6 + pAVar5->field_001C);
      }
      else {
        psVar3 = nullptr;
      }
      st::fn_00401906(psVar3,psVar3 + 1,psVar3 + 3,psVar3 + 4);
      pAVar5 = this->field_022F;
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < *(uint *)&pAVar5->field_0xc;
    } while ((int)uVar6 < (int)*(uint *)&pAVar5->field_0xc);
  }
  pAVar4 = this->field_0223;
  uVar6 = 0;
  if (0 < *(int *)&pAVar4->field_0xc) {
    bVar7 = *(int *)&pAVar4->field_0xc != 0;
    do {
      if (bVar7) {
        psVar3 = (short *)(pAVar4->field_0008 * uVar6 + pAVar4->field_001C);
      }
      else {
        psVar3 = nullptr;
      }
      psVar1 = psVar3 + 1;
      st::fn_00404D54(STReplaceLowWord((uint32_t)(psVar3), (uint16_t)(*psVar3)),
                         STReplaceLowWord((uint32_t)(psVar1), (uint16_t)(*psVar1)),psVar3[2],psVar3,psVar1,
                         psVar3 + 2,0);
      pAVar4 = this->field_0223;
      uVar6 = uVar6 + 1;
      bVar7 = uVar6 < *(uint *)&pAVar4->field_0xc;
    } while ((int)uVar6 < (int)*(uint *)&pAVar4->field_0xc);
  }
  if (((this->field_0163 == '\x01') && (*(int *)&this->field_022F->field_0xc == 0)) &&
     (puVar2 = this->field_0284, puVar2 != nullptr)) {
    local_10 = puVar2[0x41] - 4;
    local_e[0] = puVar2[0x42] - 4;
    local_e[2] = 9;
    local_e[3] = 9;
    local_e[1] = 0;
    local_e[4] = 5;
    st::fn_00401906(&local_10,local_e,local_e + 2,local_e + 3);
    st::fn_00402A27(this,&local_10);
  }
  if ((this->field_0122 == '\x01') && (*(int *)&this->field_0223->field_0xc == 0)) {
    pAVar5 = this->field_022F;
    uVar6 = 0;
    if (0 < *(int *)&pAVar5->field_0xc) {
      bVar7 = *(int *)&pAVar5->field_0xc != 0;
      do {
        if (bVar7) {
          psVar3 = (short *)(pAVar5->field_0008 * uVar6 + pAVar5->field_001C);
        }
        else {
          psVar3 = nullptr;
        }
        st::fn_00403F7B(this,psVar3,5);
        pAVar5 = this->field_022F;
        uVar6 = uVar6 + 1;
        bVar7 = uVar6 < *(uint *)&pAVar5->field_0xc;
      } while ((int)uVar6 < (int)*(uint *)&pAVar5->field_0xc);
    }
  }
  return;
}

// 00664960 AiFltClassTy::sub_00664960
#line 4 "decomp/ST.exe/functions/00664960/decomp.c"
/* WARNING: Type propagation algorithm not settling */
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=718;
   incoming_edx_uses=0; incoming_stack_parameter_uses=7; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __fastcall st::fn_00664960(AiFltClassTy *param_1)

{
  int iVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  AnonPointee_AiFltClassTy_0223 *pAVar5;
  AiPlrClassTy *this;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  short extraout_var_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_02;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_03;
  uint uVar13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_04;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_05;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_06;
  uint uVar14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_07;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_08;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_09;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_11;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_12;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_13;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_14;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_15;
  STGameObjC *this_00;
  int uVar12;
  int local_EAX_9844;
  ushort *puVar15;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX;
  int iVar16;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_00;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  int extraout_EDX_01;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var_16;
  undefined4 uVar17;
  int iVar18;
  uint *puVar19;
  uint *puVar20;
  bool bVar22;
  bool bVar23;
  undefined4 local_9c;
  uint local_98;
  undefined4 local_94;
  DArrayTy *local_90;
  uint local_68;
  short local_64;
  short local_62;
  short local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  STGameObjC *local_48;
  uint local_44 [2];
  undefined4 local_3c;
  undefined1 uStack_38;
  undefined1 uStack_37;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  undefined1 uStack_30;
  undefined1 uStack_2f;
  undefined1 uStack_2e;
  undefined1 uStack_2d;
  undefined1 uStack_2c;
  undefined4 local_2b;
  DArrayTy *local_10;
  uint local_c;
  AiPlrClassTy *local_8;

  if ((param_1->field_008B != 0) &&
     (param_1->field_0280 < param_1->field_008F + param_1->field_008B)) {
    return;
  }
  param_1->field_008F = param_1->field_0280;
  local_8 = st::fn_00401DC5(*(char *)&param_1->field_0024);
  iVar9 = st::fn_0040360C
                    ((AnonReceiver_00664540 *)param_1,local_44,&local_68);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  iVar11 = extraout_EDX;
  while (-1 < iVar9) {
    switch(local_44[0]) {
    case 0:
      goto switchD_006649d9_caseD_0;
    case 1:
      param_1->field_0139 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_013A =
           CONCAT13(uStack_38,CONCAT12(STPiece<3,1>(local_3c),CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c))));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_013E = CONCAT11(uStack_36,uStack_37);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0140 = CONCAT11(uStack_34,uStack_35);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0142 = CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0146 = CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      param_1->field_014A = local_2b;
      break;
    case 2:
      param_1->field_0187 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0188 =
           CONCAT13(uStack_38,CONCAT12(STPiece<3,1>(local_3c),CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c))));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_018C = CONCAT11(uStack_36,uStack_37);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_018E = CONCAT11(uStack_34,uStack_35);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0190 = CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      break;
    case 3:
      param_1->field_0152 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0153 =
           CONCAT13(uStack_38,CONCAT12(STPiece<3,1>(local_3c),CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c))));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0157 = CONCAT11(uStack_36,uStack_37);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0159 = CONCAT11(uStack_34,uStack_35);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_015B = CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_015F = CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      break;
    case 4:
      st::fn_006AE1C0(param_1->field_020B,&local_3c);
      st::fn_004049A8(param_1->field_020B,thunk_FUN_00660d10);
      goto cf_common_join_00665024;
    case 5:
      if (param_1->field_020B != nullptr) {
        param_1->field_020B->count = 0;
        goto cf_common_join_00665024;
      }
      break;
    case 6:
      param_1->field_00FF = (undefined1)local_3c;
      break;
    case 7:
      param_1->field_0163 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0164 =
           CONCAT13(uStack_38,CONCAT12(STPiece<3,1>(local_3c),CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c))));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0168 = CONCAT11(uStack_36,uStack_37);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_016A = CONCAT11(uStack_34,uStack_35);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_016C = CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0172 = CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      break;
    case 8:
      local_c = 0;
      local_4c = *(uint *)&param_1->field_022F->field_0xc;
      if (0 < (int)local_4c) {
        iVar11 = (int)STReplaceLowByte16((uint32_t)(local_3c), (uint8_t)((undefined1)local_3c));
        do {
          if (local_c < local_4c) {
            psVar10 = (short *)(param_1->field_022F->field_0008 * local_c +
                               param_1->field_022F->field_001C);
          }
          else {
            psVar10 = nullptr;
          }
          iVar16 = (int)psVar10[1];
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_50 = iVar11 + -1 + (int)CONCAT11(uStack_35,uStack_36);
          iVar9 = (int)*psVar10;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_48 = (STGameObjC *)
                     (CONCAT11(STPiece<3,1>(local_3c),STPiece<2,1>(local_3c)) + -1 +
                     (int)CONCAT11(uStack_33,uStack_34));
          iVar11 = (int)STReplaceLowByte16((uint32_t)(local_3c), (uint8_t)((undefined1)local_3c));
          local_10 = (DArrayTy *)(int)psVar10[3];
          local_58 = (int)psVar10[4];
          local_54 = iVar16 + -1 + local_58;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if (((iVar9 <= iVar11) && (iVar11 <= iVar9 + -1 + (int)local_10)) &&
             (((iVar16 <= CONCAT11(STPiece<3,1>(local_3c),STPiece<2,1>(local_3c)) &&
               (((CONCAT11(STPiece<3,1>(local_3c),STPiece<2,1>(local_3c)) <= local_54 && (iVar9 <= local_50)) &&
                (local_50 <= iVar9 + -1 + (int)local_10)))) &&
              ((iVar16 <= (int)local_48 && ((int)local_48 <= iVar16 + -1 + local_58))))))
          goto LAB_00665047;
          local_50 = iVar9 + -1 + (int)local_10;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          iVar18 = (int)CONCAT11(STPiece<3,1>(local_3c),STPiece<2,1>(local_3c));
          local_54 = iVar16 + -1 + local_58;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_48 = (STGameObjC *)(iVar18 + -1 + (int)CONCAT11(uStack_33,uStack_34));
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((iVar11 <= iVar9) &&
             (((iVar1 = iVar11 + -1 + (int)CONCAT11(uStack_35,uStack_36), iVar9 <= iVar1 &&
               (iVar18 <= iVar16)) &&
              ((iVar16 <= (int)local_48 &&
               ((((iVar11 <= local_50 && (local_50 <= iVar1)) && (iVar18 <= local_54)) &&
                (local_54 <= (int)local_48)))))))) {
            st::fn_006AE140((DArrayTy *)param_1->field_022F,local_c,&local_3c);
            goto cf_common_join_00665024;
          }
          local_c = local_c + 1;
        } while ((int)local_c < (int)local_4c);
      }
      if (param_1->field_022F != nullptr) {
        st::fn_006B11D0((uint *)param_1->field_022F,0,&local_3c);
      }
      param_1->field_0170 = param_1->field_0170 + 1;
      goto cf_common_join_00665024;
    case 9:
      if (param_1->field_022F != nullptr) {
        *(undefined4 *)&param_1->field_022F->field_0xc = 0;
        goto cf_common_join_00665024;
      }
      break;
    case 10:
      param_1->field_0176 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0177 = CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0179 = CONCAT11(uStack_38,STPiece<3,1>(local_3c));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_017B = CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_017F = CONCAT13(uStack_30,CONCAT12(uStack_31,CONCAT11(uStack_32,uStack_33)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0183 = CONCAT13(uStack_2c,CONCAT12(uStack_2d,CONCAT11(uStack_2e,uStack_2f)));
      break;
    case 0xb:
      param_1->field_0100 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0101 = CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0103 = CONCAT11(uStack_38,STPiece<3,1>(local_3c));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0105 = CONCAT11(uStack_36,uStack_37);
      param_1->field_0111 = local_2b;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0107 = CONCAT13(uStack_32,CONCAT12(uStack_33,CONCAT11(uStack_34,uStack_35)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_010B = CONCAT11(uStack_30,uStack_31);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_010D = CONCAT11(uStack_2e,uStack_2f);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_010F = CONCAT11(uStack_2c,uStack_2d);
      break;
    case 0xc:
      param_1->field_0115 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0116 =
           CONCAT13(uStack_38,CONCAT12(STPiece<3,1>(local_3c),CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c))));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_011A = CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      break;
    case 0xd:
      param_1->field_0122 = (undefined1)local_3c;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0129 =
           CONCAT13(uStack_38,CONCAT12(STPiece<3,1>(local_3c),CONCAT11(STPiece<2,1>(local_3c),STPiece<1,1>(local_3c))));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_1->field_0123 = CONCAT13(uStack_34,CONCAT12(uStack_35,CONCAT11(uStack_36,uStack_37)));
      break;
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    case 0xe:
      st::fn_00404D54(CONCAT13(STPiece<3,1>(local_3c),
                                  CONCAT12(STPiece<2,1>(local_3c),
                                           STReplaceLowByte16((uint32_t)(local_3c), (uint8_t)((undefined1)local_3c)))),
                         CONCAT13(uStack_37,
                                  CONCAT12(uStack_38,CONCAT11(STPiece<3,1>(local_3c),STPiece<2,1>(local_3c)))),
                         CONCAT11(uStack_37,uStack_38),(short *)&local_3c,
                         (short *)((int)&local_3c + 2),(short *)&uStack_38,0);
      pAVar5 = param_1->field_0223;
      uVar13 = 0;
      local_4c = *(uint *)&pAVar5->field_0xc;
      if (0 < (int)local_4c) {
        bVar22 = local_4c != 0;
        do {
          if (bVar22) {
            psVar10 = (short *)(pAVar5->field_0008 * uVar13 + pAVar5->field_001C);
          }
          else {
            psVar10 = nullptr;
          }
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          if ((((STReplaceLowByte16((uint32_t)(local_3c), (uint8_t)((undefined1)local_3c)) == *psVar10) &&
               (CONCAT11(STPiece<3,1>(local_3c),STPiece<2,1>(local_3c)) == psVar10[1])) &&
              (CONCAT11(uStack_37,uStack_38) == psVar10[2])) &&
             (((CONCAT11(uStack_31,uStack_32) == psVar10[5] &&
               (CONCAT11(uStack_2f,uStack_30) == psVar10[6])) &&
              (CONCAT11(uStack_2d,uStack_2e) == psVar10[7])))) goto cf_common_join_00665024;
          uVar13 = uVar13 + 1;
          bVar22 = uVar13 < local_4c;
        } while ((int)uVar13 < (int)local_4c);
      }
      if (pAVar5 != nullptr) {
        st::fn_006B11D0((uint *)pAVar5,0,&local_3c);
      }
      param_1->field_0127 = param_1->field_0127 + 1;
      goto cf_common_join_00665024;
    case 0xf:
      if (param_1->field_0223 != nullptr) {
        *(undefined4 *)&param_1->field_0223->field_0xc = 0;
        goto cf_common_join_00665024;
      }
      break;
    case 0x10:
      param_1->field_0194 = (undefined1)local_3c;
      break;
    default:
      iVar11 = st::fn_00404386(param_1,local_44[0]);
      if (iVar11 < 1) goto cf_common_join_00665024;
      break;
    case 0x32:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        st::fn_004014BF(param_1);
      }
      uVar13 = 500;
      goto cf_common_join_00664FF6;
    case 0x33:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        st::fn_004014BF(param_1);
      }
      uVar13 = 0x1fe;
      goto cf_common_join_00664FF6;
    case 0x34:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        st::fn_004014BF(param_1);
      }
      uVar13 = 0x208;
      goto cf_common_join_00664FF6;
    case 0x35:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        st::fn_004014BF(param_1);
      }
      uVar13 = 0x212;
      goto cf_common_join_00664FF6;
    case 0x36:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        st::fn_004014BF(param_1);
      }
      uVar13 = 0x21c;
      goto cf_common_join_00664FF6;
    case 0x37:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        st::fn_004014BF(param_1);
      }
      uVar13 = 0x226;
      goto cf_common_join_00664FF6;
    case 0x38:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        st::fn_004014BF(param_1);
      }
      uVar13 = 0x230;
      goto cf_common_join_00664FF6;
    case 0x39:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        st::fn_004014BF(param_1);
      }
      uVar13 = 0x23a;
      goto cf_common_join_00664FF6;
    case 0x3a:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      iVar11 = 0;
      if (param_1->field_00B3 != 0) {
        st::fn_004014BF(param_1);
      }
      uVar13 = 0x244;
      goto cf_common_join_00664FF6;
    case 0x3b:
      puVar19 = local_44;
      puVar20 = (uint *)&param_1->field_0xb7;
      memmove(puVar20, puVar19, 0x34); /* compiler REP MOVS byte copy */
      if (param_1->field_00B3 != 0) {
        st::fn_004014BF(param_1);
      }
      uVar13 = 0x24e;
cf_common_join_00664FF6:
      param_1->field_009B = uVar13;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
      param_1->field_00B3 = uVar13;
cf_common_join_00665024:
      if ((local_44[0] < 0x32) || (99 < local_44[0])) {
        if ((local_44[0] == 0) || (0x31 < local_44[0])) {
switchD_006649d9_caseD_0:
          st::fn_00404386(param_1,local_44[0]);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar11 = extraout_EDX_01;
          goto LAB_00665067;
        }
      }
      else {
        st::fn_00402356((int)param_1);
      }
    }
LAB_00665047:
    iVar9 = st::fn_0040360C
                      ((AnonReceiver_00664540 *)param_1,local_44,&local_68);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar11 = extraout_EDX_00;
  }
LAB_00665067:
  this = local_8;
  param_1->field_00EB = 0;
  uVar13 = param_1->field_009B;
  if (0x82 < uVar13) {
    if (uVar13 < 0x201) {
      if (uVar13 == 0x200) {
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            param_1->field_009B = 0x201;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
LAB_00666934:
          uVar6 = st::fn_0040343B(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if ((int)*(short *)&param_1->field_0xd3 < CONCAT22(extraout_var_12,uVar6))
          goto cf_common_join_00666DC1;
          goto cf_common_join_00667047;
        }
        iVar11 = param_1->field_00EF;
        param_1->field_00A3 = 1;
        if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
          psVar10 = &param_1->field_01A1;
          iVar11 = st::fn_00401C6C
                             ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0x195,
                              psVar10,iVar11);
          if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
            if (param_1->field_00F3 != 2) {
              sVar8 = param_1->field_01AB / 2 + param_1->field_01A5;
              iVar11 = (int)param_1->field_01A9 / 2 + (int)param_1->field_01A3;
              sVar7 = param_1->field_01A7;
              sVar4 = *psVar10;
              goto LAB_006668ef;
            }
            iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     st::fn_004028E2((AnonReceiver_00660180 *)param_1,psVar10,'\x02');
            goto LAB_006668f9;
          }
        }
LAB_00666901:
        param_1->field_009B = 0x201;
        goto cf_common_join_00667054;
      }
      if (uVar13 < 0x1f6) {
        if (uVar13 != 0x1f5) {
          if (uVar13 < 0x86) {
            if (uVar13 == 0x85) {
              param_1->field_00EB = 0x40;
              if (param_1->field_00A3 == 0) {
                param_1->field_00A3 = 1;
                iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                         st::fn_004028E2((AnonReceiver_00660180 *)param_1,
                                            (short *)&param_1->field_0x195,(char)param_1->field_00FB
                                           );
                if (iVar11 == 0) goto cf_common_exit_00667066;
                if (local_8 != nullptr) {
                  st::fn_00402C61(local_8,-1,param_1->field_00F7);
                }
              }
              else {
                if (param_1->field_00A7 != 0) {
                  if (local_8 != nullptr) {
                    st::fn_00402C61(local_8,'\x01',param_1->field_00F7);
                  }
                  param_1->field_009B = 0;
                  param_1->field_009F = 0;
                  param_1->field_00A3 = 0;
                  param_1->field_00A7 = 0;
                }
                uVar6 = st::fn_0040343B(param_1);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                if (((int)param_1->field_018E < CONCAT22(extraout_var_06,uVar6)) &&
                   ((param_1->field_00AB == 0 ||
                    (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
                goto cf_common_exit_00667066;
                if (this != nullptr) {
                  st::fn_00402C61(this,-1,param_1->field_00F7);
                }
              }
            }
            else if (uVar13 == 0x83) {
              param_1->field_00EB = 0x40;
              if (param_1->field_00A3 == 0) {
                param_1->field_00A3 = 1;
                iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                         st::fn_004028E2((AnonReceiver_00660180 *)param_1,&param_1->field_01A1,
                                            '\x02');
                if (iVar11 == 0) goto cf_common_exit_00667066;
LAB_00665eba:
                param_1->field_009B = 0x85;
                goto cf_common_join_00667054;
              }
              if (param_1->field_00A7 != 0) {
                param_1->field_009B = 0x84;
                param_1->field_009F = 0;
                param_1->field_00A3 = 0;
                param_1->field_00A7 = 0;
              }
              uVar6 = st::fn_0040343B(param_1);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if (((int)param_1->field_018E < CONCAT22(extraout_var_05,uVar6)) &&
                 ((param_1->field_00AB == 0 ||
                  (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
              goto cf_common_exit_00667066;
              if (local_8 != nullptr) {
                st::fn_00402C61(local_8,-1,param_1->field_00F7);
              }
            }
            else {
              if (uVar13 != 0x84) goto cf_common_exit_00667066;
              param_1->field_00EB = 0x40;
              if (param_1->field_00A3 == 0) {
                param_1->field_00A3 = 1;
                if (((param_1->field_00EF == 0x200) || (param_1->field_00EF == 0x400)) &&
                   (uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039, param_1->field_001C = uVar13
                   , (uVar13 & 0x10000) != 0)) {
                  iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::
                           st::fn_00401C6C((AnonReceiver_0065ED90 *)param_1,
                                              (short *)&param_1->field_0x195,&param_1->field_01A1,
                                              param_1->field_00EF);
                  if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
                    iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                             st::fn_004028E2((AnonReceiver_00660180 *)param_1,
                                                &param_1->field_01A1,'\x02');
                    if (iVar11 == 0) goto cf_common_exit_00667066;
                    param_1->field_009B = 0x85;
                  }
                  else {
                    param_1->field_009B = 0x85;
                  }
                  goto cf_common_join_00667054;
                }
                goto LAB_00665eba;
              }
              if (param_1->field_00A7 != 0) {
                param_1->field_009B = 0x85;
                param_1->field_009F = 0;
                param_1->field_00A3 = 0;
                param_1->field_00A7 = 0;
              }
              uVar6 = st::fn_0040343B(param_1);
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if (((int)param_1->field_018E < CONCAT22(extraout_var_04,uVar6)) &&
                 ((param_1->field_00AB == 0 ||
                  (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
              goto cf_common_exit_00667066;
              if (local_8 != nullptr) {
                st::fn_00402C61(local_8,-1,param_1->field_00F7);
              }
            }
          }
          else {
            if (uVar13 != 0x8c) {
              if (uVar13 != 500) goto cf_common_exit_00667066;
              param_1->field_00EB = 0x40;
              param_1->field_00AB = param_1->field_00E6;
              param_1->field_00AF = param_1->field_0280;
              st::fn_0040528B((AnonShape_0065FA10_37C5A4D3 *)param_1,param_1->field_0280,0,0,0);
              uVar13 = *(uint *)&param_1->field_0xbf & 1;
              param_1->field_00F3 = uVar13;
              if (uVar13 == 0) {
                param_1->field_00F3 = *(uint *)&param_1->field_0xbf & 2;
              }
              if (param_1->field_00F3 == 0) {
                uVar14 = param_1->field_001C * 0x41c64e6d + 0x3039;
                param_1->field_001C = uVar14;
                param_1->field_00F3 = (uVar14 >> 0x10 & 1) + 1;
              }
              uVar14 = *(uint *)&param_1->field_0xc3;
              if ((uVar14 & 0x100) == 0) {
                uVar13 = uVar14 & 0x200;
                param_1->field_00EF = uVar13;
                if (uVar13 == 0) {
                  uVar13 = uVar14 & 0x400;
                  param_1->field_00EF = uVar13;
                }
                if ((param_1->field_00EF == 0) && ((uVar14 & 0x800) != 0)) {
                  uVar14 = param_1->field_001C * 0x41c64e6d + 0x3039;
                  param_1->field_001C = uVar14;
                  param_1->field_00EF = (-(uint)((uVar14 & 0x10000) != 0) & 0xfffffe00) + 0x400;
                }
              }
              else {
                param_1->field_00EF = 0x100;
              }
              if ((param_1->field_00EF == 0x100) && (param_1->field_00F3 == 1)) {
                param_1->field_009B = 0x1f8;
              }
              else {
                iVar11 = st::fn_0040586C(param_1,*(short **)&param_1->field_0xc7,
                                            (short *)&param_1->field_0x195,
                                            *(uint *)&param_1->field_0xcb,
                                            *(uint *)&param_1->field_0xcf,&param_1->field_0xd5,
                                            STReplaceLowByte((uint32_t)(uVar13), (uint8_t)(param_1->field_0xd3)),1);
                if (iVar11 != 0) goto cf_common_join_00667047;
                iVar11 = param_1->field_00EF;
                if (((iVar11 == 0x200) || (iVar11 == 0x400)) &&
                   (iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_0065ED90::
                             st::fn_00401C6C((AnonReceiver_0065ED90 *)param_1,
                                                (short *)&param_1->field_0x195,&param_1->field_01A1,
                                                iVar11), iVar11 == param_1->field_00EF)) {
                  param_1->field_009B = 0x1f5;
                }
                else {
                  param_1->field_00EF = 0x100;
                  if (param_1->field_00F3 != 1) goto LAB_00666423;
                  param_1->field_009B = 0x1f8;
                }
              }
              goto cf_common_join_00667054;
            }
            param_1->field_00EB = 0x200;
            if (param_1->field_00A3 == 0) {
              param_1->field_00A3 = 1;
              param_1->field_00AB = param_1->field_015B;
              param_1->field_00AF = param_1->field_0280;
              st::fn_0040528B((AnonShape_0065FA10_37C5A4D3 *)param_1,param_1->field_0280,0,0,0);
              iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                       st::fn_004028E2((AnonReceiver_00660180 *)param_1,
                                          (short *)&param_1->field_0x195,(char)param_1->field_015F);
              if (iVar11 == 0) goto cf_common_exit_00667066;
              if (param_1->field_0284 != nullptr) {
                st::fn_0040452F(param_1->field_0284,param_1->field_007D);
              }
            }
            else {
              /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
              if (((param_1->field_00A7 == 0) &&
                  (uVar6 = st::fn_0040343B(param_1),
                  (int)param_1->field_0159 < CONCAT22(extraout_var_07,uVar6))) &&
                 ((param_1->field_00AB == 0 ||
                  (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
              goto cf_common_exit_00667066;
              if (param_1->field_0284 != nullptr) {
                st::fn_0040452F(param_1->field_0284,param_1->field_007D);
              }
            }
          }
          goto cf_common_join_0066704E;
        }
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 == 0) {
          param_1->field_00A3 = 1;
          if (param_1->field_00F3 == 2) {
            iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     st::fn_004028E2((AnonReceiver_00660180 *)param_1,&param_1->field_01A1,'\x02'
                                       );
          }
          else {
            sVar7 = param_1->field_01AB / 2 + param_1->field_01A5;
            iVar11 = (int)param_1->field_01A9 / 2 + (int)param_1->field_01A3;
            iVar9 = (int)param_1->field_01A7 / 2 + (int)param_1->field_01A1;
LAB_00666413:
            iVar11 = st::fn_004055A6(param_1,iVar9,iVar11,sVar7,0);
          }
LAB_0066641b:
          if (iVar11 == 0) goto cf_common_exit_00667066;
          goto LAB_00666423;
        }
        if (param_1->field_00A7 == 0) goto LAB_006664d8;
        if ((*(uint *)&param_1->field_0xc3 & 0x800) == 0) goto LAB_00666423;
        param_1->field_009B = 0x1f6;
        goto cf_common_join_00667054;
      }
      switch(uVar13) {
      case 0x1f6:
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            param_1->field_009B = 0x1f7;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
          uVar6 = st::fn_0040343B(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if (CONCAT22(extraout_var_08,uVar6) <= (int)param_1->field_00E4)
          goto cf_common_join_00667047;
          goto cf_common_join_00666DC1;
        }
        iVar11 = param_1->field_00EF;
        param_1->field_00A3 = 1;
        if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
          psVar10 = &param_1->field_01A1;
          iVar11 = st::fn_00401C6C
                             ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0x195,
                              psVar10,iVar11);
          if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
            if (param_1->field_00F3 != 2) {
              sVar7 = param_1->field_01AB / 2 + param_1->field_01A5;
              iVar11 = (int)param_1->field_01A9 / 2 + (int)param_1->field_01A3;
              iVar9 = (int)param_1->field_01A7 / 2 + (int)*psVar10;
              goto LAB_00666413;
            }
            iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     st::fn_004028E2((AnonReceiver_00660180 *)param_1,psVar10,'\x02');
            goto LAB_0066641b;
          }
        }
LAB_00666423:
        param_1->field_009B = 0x1f7;
        break;
      case 0x1f7:
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            st::fn_004014BF(param_1);
            param_1->field_009B = 0;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
LAB_006664d8:
          uVar6 = st::fn_0040343B(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          iVar11 = CONCAT22(extraout_var_09,uVar6);
          sVar7 = param_1->field_00E4;
          goto LAB_006664e6;
        }
        param_1->field_00A3 = 1;
        iVar11 = st::fn_004028E2
                           ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0x195,
                            (char)param_1->field_00F3);
        goto joined_r0x00666ceb;
      case 0x1f8:
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 != 0) {
          if (param_1->field_00A7 != 0) {
            st::fn_004014BF(param_1);
            param_1->field_009B = 0;
            param_1->field_009F = 0;
            param_1->field_00A3 = 0;
            param_1->field_00A7 = 0;
          }
          uVar6 = st::fn_0040343B(param_1);
          /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
          if ((int)param_1->field_00E4 < CONCAT22(extraout_var_11,uVar6))
          goto cf_common_join_00666DC1;
          goto cf_common_join_00667047;
        }
        param_1->field_00A3 = 1;
        param_1->field_023B->count = 0;
        uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
        param_1->field_001C = uVar13;
        uVar6 = st::fn_0040343B(param_1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar13 = CONCAT22(extraout_var_10,uVar6) / ((uVar13 >> 0x10) % 3 + 5);
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        iVar11 = st::fn_004056C3(param_1,*(uint *)&param_1->field_0xc7,uVar13,
                                    &param_1->field_023B->flags,*(uint *)&param_1->field_0xcb,
                                    *(uint *)&param_1->field_0xcf,&param_1->field_0xd5,
                                    (uint)(byte)param_1->field_0xd3);
        if (iVar11 < 1) {
          st::fn_004014BF(param_1);
          param_1->field_009B = 0;
          param_1->field_009F = 0;
          param_1->field_00A3 = 0;
          param_1->field_00A7 = 0;
        }
        iVar11 = st::fn_004029BE(param_1,param_1->field_023B);
        goto joined_r0x00666ceb;
      default:
        goto cf_common_exit_00667066;
      case 0x1fe:
        param_1->field_00EB = 0x40;
        param_1->field_00AB = *(int *)&param_1->field_0xd5;
        param_1->field_00AF = param_1->field_0280;
        st::fn_0040528B((AnonShape_0065FA10_37C5A4D3 *)param_1,*(int *)&param_1->field_0xd5,0,0,0
                          );
        *(undefined2 *)&param_1->field_0x195 = *(undefined2 *)&param_1->field_0xc7;
        *(undefined2 *)&param_1->field_0x197 = *(undefined2 *)&param_1->field_0xc9;
        *(undefined2 *)&param_1->field_0x199 = *(undefined2 *)&param_1->field_0xcb;
        *(undefined2 *)&param_1->field_0x19b = *(undefined2 *)&param_1->field_0xcd;
        *(undefined2 *)&param_1->field_0x19d = *(undefined2 *)&param_1->field_0xcf;
        *(undefined2 *)&param_1->field_0x19f = *(undefined2 *)&param_1->field_0xd1;
        st::fn_00403BDE((short *)&param_1->field_0x195,(short *)&param_1->field_0x197,
                           (short *)&param_1->field_0x199,(short *)&param_1->field_0x19b,
                           (short *)&param_1->field_0x19d,(short *)&param_1->field_0x19f);
        uVar13 = *(uint *)&param_1->field_0xbf & 1;
        param_1->field_00F3 = uVar13;
        if (uVar13 == 0) {
          param_1->field_00F3 = *(uint *)&param_1->field_0xbf & 2;
        }
        if (param_1->field_00F3 == 0) {
          uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
          param_1->field_001C = uVar13;
          param_1->field_00F3 = (uVar13 >> 0x10 & 1) + 1;
        }
        uVar13 = *(uint *)&param_1->field_0xc3;
        if ((uVar13 & 0x100) == 0) {
          param_1->field_00EF = uVar13 & 0x200;
          if ((uVar13 & 0x200) == 0) {
            param_1->field_00EF = uVar13 & 0x400;
          }
          if ((param_1->field_00EF == 0) && ((uVar13 & 0x800) != 0)) {
            uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
            param_1->field_001C = uVar13;
            param_1->field_00EF = (-(uint)((uVar13 & 0x10000) != 0) & 0xfffffe00) + 0x400;
          }
          param_1->field_00EF = 0x100;
          param_1->field_009B = 0x201;
        }
        else {
          param_1->field_00EF = 0x100;
          param_1->field_009B = 0x201;
        }
        break;
      case 0x1ff:
        param_1->field_00EB = 0x40;
        if (param_1->field_00A3 == 0) {
          param_1->field_00A3 = 1;
          if (param_1->field_00F3 == 2) {
            iVar11 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00660180::
                     st::fn_004028E2((AnonReceiver_00660180 *)param_1,&param_1->field_01A1,'\x02'
                                       );
          }
          else {
            sVar8 = param_1->field_01AB / 2 + param_1->field_01A5;
            iVar11 = (int)param_1->field_01A9 / 2 + (int)param_1->field_01A3;
            sVar7 = param_1->field_01A7;
            sVar4 = param_1->field_01A1;
LAB_006668ef:
            iVar11 = st::fn_004055A6(param_1,(int)sVar7 / 2 + (int)sVar4,iVar11,sVar8,0);
          }
LAB_006668f9:
          if (iVar11 == 0) goto cf_common_exit_00667066;
          goto LAB_00666901;
        }
        if (param_1->field_00A7 == 0) goto LAB_00666934;
        if ((*(uint *)&param_1->field_0xc3 & 0x800) == 0) goto LAB_00666901;
        param_1->field_009B = 0x200;
      }
      goto cf_common_join_00667054;
    }
    if (0x4d < uVar13 - 0x201) goto cf_common_exit_00667066;
    bVar2 = *(byte *)(uVar13 + 0x667073);
    switch(uVar13) {
    case 0x201:
      param_1->field_00EB = 0x40;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        iVar11 = st::fn_004028E2
                           ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0x195,
                            (char)param_1->field_00F3);
        goto joined_r0x00666ceb;
      }
      if (param_1->field_00A7 != 0) {
        param_1->field_009B = 0;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
      uVar6 = st::fn_0040343B(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if ((int)*(short *)&param_1->field_0xd3 < CONCAT22(extraout_var_13,uVar6))
      goto cf_common_join_00666DC1;
      break;
    default:
      goto cf_common_exit_00667066;
    case 0x208:
      param_1->field_00EB = 0x10;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = *(undefined4 *)&param_1->field_0xc5;
        param_1->field_00AF = param_1->field_0280;
        st::fn_0040528B((AnonShape_0065FA10_37C5A4D3 *)param_1,
                           (int)*(short *)&param_1->field_0xcb,(int)*(short *)&param_1->field_0xc9,
                           (int)*(short *)&param_1->field_0xcb,(int)*(short *)&param_1->field_0xcd);
        iVar11 = st::fn_004055A6(param_1,(int)*(short *)&param_1->field_0xbf,
                                    (int)*(short *)&param_1->field_0xc1,
                                    *(short *)&param_1->field_0xc3,
                                    *(undefined4 *)&param_1->field_0xcf);
        goto joined_r0x00666ceb;
      }
      if (param_1->field_00A7 != 0) break;
      if (param_1->field_00AB == 0) goto cf_common_exit_00667066;
      uVar13 = param_1->field_00AF + param_1->field_00AB;
      bVar22 = param_1->field_0280 < uVar13;
      bVar23 = param_1->field_0280 == uVar13;
LAB_00666ddf:
      if (bVar22 || bVar23) goto cf_common_exit_00667066;
      break;
    case 0x212:
      param_1->field_00EB = 0x20;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = *(undefined4 *)&param_1->field_0xc7;
        param_1->field_00AF = param_1->field_0280;
        st::fn_0040528B((AnonShape_0065FA10_37C5A4D3 *)param_1,(uint)bVar2,0,0,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        uVar17 = CONCAT22(extraout_var_16,*(undefined2 *)&param_1->field_0xc3);
        iVar11 = st::fn_00403F6C((AnonShape_00660620_6BCED4D7 *)param_1,uVar17,uVar17);
        goto joined_r0x00666ceb;
      }
      if (param_1->field_00A7 == 0) {
        uVar6 = st::fn_0040343B(param_1);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        iVar11 = CONCAT22(extraout_var_14,uVar6);
        sVar7 = *(short *)&param_1->field_0xc5;
LAB_006664e6:
        if (sVar7 < iVar11) {
          if (param_1->field_00AB == 0) goto cf_common_exit_00667066;
          uVar13 = param_1->field_00AF + param_1->field_00AB;
          bVar22 = param_1->field_0280 < uVar13;
          bVar23 = param_1->field_0280 == uVar13;
          goto LAB_00666ddf;
        }
      }
      break;
    case 0x21c:
      param_1->field_00EB = 2;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = *(undefined4 *)&param_1->field_0xd3;
        param_1->field_00AF = param_1->field_0280;
        iVar11 = st::fn_00401FB9(param_1,&param_1->field_0xc7,*(int *)&param_1->field_0xc3,
                                    (short *)&param_1->field_0xc7);
        goto joined_r0x00666ceb;
      }
LAB_00666db5:
      if (param_1->field_00A7 == 0) {
cf_common_join_00666DC1:
        if (param_1->field_00AB == 0) goto cf_common_exit_00667066;
        uVar13 = param_1->field_00AF + param_1->field_00AB;
        bVar22 = param_1->field_0280 < uVar13;
        bVar23 = param_1->field_0280 == uVar13;
        goto LAB_00666ddf;
      }
      break;
    case 0x226:
      param_1->field_00EB = 0x2000;
      if (param_1->field_00A3 != 0) goto LAB_00666db5;
      param_1->field_00A3 = 1;
      param_1->field_00AB = *(undefined4 *)&param_1->field_0xcf;
      param_1->field_00AF = param_1->field_0280;
      iVar11 = st::fn_0040451B(param_1,*(short *)&param_1->field_0xc3,
                                  *(short *)&param_1->field_0xc5,*(short *)&param_1->field_0xc7,
                                  (int)*(short *)&param_1->field_0xc9,
                                  (int)*(short *)&param_1->field_0xcb,
                                  (int)*(short *)&param_1->field_0xcd);
      goto joined_r0x00666ceb;
    case 0x230:
      param_1->field_00EB = 0x1000;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = *(undefined4 *)&param_1->field_0xcb;
        param_1->field_00AF = param_1->field_0280;
        iVar11 = st::fn_00404CB4(param_1,*(short *)&param_1->field_0xc3,
                                    *(short *)&param_1->field_0xc5,*(short *)&param_1->field_0xc7);
        goto joined_r0x00666ceb;
      }
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((param_1->field_00A7 == 0) &&
          (uVar6 = st::fn_0040343B(param_1),
          (int)*(short *)&param_1->field_0xc9 < CONCAT22(extraout_var_15,uVar6))) &&
         ((param_1->field_00AB == 0 ||
          (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
      goto cf_common_exit_00667066;
      break;
    case 0x23a:
      param_1->field_00EB = 0x800;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        param_1->field_00AB = *(undefined4 *)&param_1->field_0xc9;
        param_1->field_00AF = param_1->field_0280;
        iVar11 = st::fn_00402009(param_1,*(short *)&param_1->field_0xc3,
                                    *(short *)&param_1->field_0xc5,*(short *)&param_1->field_0xc7);
        goto joined_r0x00666ceb;
      }
      if ((param_1->field_00A7 == 0) &&
         ((param_1->field_00AB == 0 ||
          (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
      goto cf_common_exit_00667066;
      break;
    case 0x244:
      param_1->field_00EB = 0x800;
      param_1->field_00AB = *(undefined4 *)&param_1->field_0xc9;
      param_1->field_00AF = param_1->field_0280;
      param_1->field_009B = 0x246;
      goto cf_common_join_00667054;
    case 0x246:
      param_1->field_00EB = 0x800;
      if (param_1->field_00A3 != 0) goto LAB_00666db5;
      param_1->field_00A3 = 1;
      iVar11 = st::fn_0040569B((AnonShape_00660620_6BCED4D7 *)param_1,
                                  (int)*(short *)&param_1->field_0xc3,*(short *)&param_1->field_0xc3
                                  ,*(short *)&param_1->field_0xc5,
                                  (int)*(short *)&param_1->field_0xc7,*(int *)&param_1->field_0xbf);
joined_r0x00666ceb:
      if (iVar11 == 0) goto cf_common_exit_00667066;
      break;
    case 0x24e:
      param_1->field_00EB = 0x40;
      if (param_1->field_00A3 == 0) {
        param_1->field_00A3 = 1;
        iVar11 = st::fn_004047EB((AnonShape_0065E360_B94C37CB *)param_1,
                                    *(undefined4 *)&param_1->field_0xc3,
                                    *(undefined4 *)&param_1->field_0xc3,
                                    (int)*(short *)&param_1->field_0xc7,
                                    (int)*(short *)&param_1->field_0xc9);
        param_1->field_00B3 = iVar11;
        if (0 < iVar11) {
          iVar11 = (*(int *)&param_1->field_0xcd * iVar11) / 100;
          param_1->field_00B3 = iVar11;
          if (iVar11 == 0) {
            param_1->field_00B3 = 1;
          }
          goto cf_common_exit_00667066;
        }
      }
      else {
        local_8 = nullptr;
        switch(*(undefined4 *)&param_1->field_0xc3) {
        case 0xa3:
          iVar11 = 0x4e;
          break;
        default:
          iVar11 = 0;
          break;
        case 0xa8:
          iVar11 = 0x45;
          break;
        case 0xb2:
          iVar11 = 0x70;
          break;
        case 0xbe:
          iVar11 = 0x72;
        }
        local_10 = (DArrayTy *)st::fn_004059B6(param_1,(uint)bVar2,iVar11);
        if (local_10 != nullptr) {
          uVar13 = local_10->count;
          local_c = 0;
          if (0 < (int)uVar13) {
            do {
              if (local_c < uVar13) {
                puVar15 = DArrayAt<ushort>(local_10, local_c);
              }
              else {
                puVar15 = nullptr;
              }
              this_00 = st::fn_004028BA
                                  (g_allPlayers_007FA174,*(char *)&param_1->field_0024,*puVar15,
                                   CASE_1);
              local_48 = this_00;
              switch(*(undefined4 *)&param_1->field_0xc3) {
              case 0xa3:
              case 0xa8:
              case 0xbe:
                uVar13 = st::fn_004012C1(this_00,0,nullptr,(int)*(short *)&param_1->field_0xc7
                                            ,(int)*(short *)&param_1->field_0xc9,0,0,0);
                if (uVar13 != 0) {
                  sVar7 = *(short *)&param_1->field_0xc7;
                  sVar4 = *(short *)&param_1->field_0xc9;
                  this_00->field_0265 = this_00->field_0265 | 2;
                  this_00->field_02A5 = (int)sVar7;
                  this_00->field_02A9 = (int)sVar4;
                  this_00->field_02AD = 0;
                  local_8 = (AiPlrClassTy *)((int)&local_8->vtable + 1);
                  if ((int)param_1->field_00B3 <= (int)local_8) goto cf_break_loop_0066703E;
                }
                break;
              case 0xb2:
                if (this_00->field_0024 != this_00->field_023D) {
                  uVar12 = st::fn_004049B7((char)this_00->field_023D);
                  local_4c = ((uint)(byte)uVar12 + this_00->field_0235 * 3) * 3;
                  local_EAX_9844 = st::fn_004049B7(*(char *)&this_00->field_0024);
                  local_EAX_9844 = (int)(byte)local_EAX_9844;
                  if ((&DAT_007e1984)[local_EAX_9844 + local_4c] == '\0') break;
                }
                if ((local_48->field_0245 == 0) && (99 < local_48->field_04EC)) {
                  st::fn_00401627(local_48,(int)*(short *)&param_1->field_0xc7,
                                     (int)*(short *)&param_1->field_0xc9,0);
                  local_8 = (AiPlrClassTy *)((int)&local_8->vtable + 1);
                  if ((int)param_1->field_00B3 <= (int)local_8) goto cf_break_loop_0066703E;
                }
              }
              local_c = local_c + 1;
              uVar13 = local_10->count;
            } while ((int)local_c < (int)uVar13);
          }
cf_break_loop_0066703E:
          st::fn_006AE110(local_10);
        }
      }
    }
cf_common_join_00667047:
    st::fn_004014BF(param_1);
    goto cf_common_join_0066704E;
  }
  if (uVar13 == 0x82) {
    param_1->field_00EB = 0x40;
    param_1->field_00AB = param_1->field_0190;
    param_1->field_00AF = param_1->field_0280;
    st::fn_0040528B((AnonShape_0065FA10_37C5A4D3 *)param_1,param_1->field_0190,0,0,0);
    iVar11 = param_1->field_00EF;
    if (((iVar11 == 0x200) || (iVar11 == 0x400)) &&
       (iVar11 = st::fn_00401C6C
                           ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0x195,
                            &param_1->field_01A1,iVar11), iVar11 == param_1->field_00EF)) {
      param_1->field_009B = 0x83;
    }
    else {
      param_1->field_00EF = 0x100;
      param_1->field_009B = 0x85;
    }
    goto cf_common_join_00667054;
  }
  switch(uVar13) {
  case 0:
    uVar3 = param_1->field_007B;
    if (0x10 < uVar3) {
      if (uVar3 == 0x20) goto LAB_006650bc;
      if (uVar3 != 0x8000) goto cf_common_exit_00667066;
      st::fn_0040148D((AnonShape_0065FD00_EB74ED0C *)param_1,iVar11);
      param_1->field_009B = 0x32;
      break;
    }
    if (uVar3 == 0x10) {
LAB_006650bc:
      st::fn_0040148D((AnonShape_0065FD00_EB74ED0C *)param_1,iVar11);
      param_1->field_009B = 0x3c;
      break;
    }
    if (uVar3 != 1) {
      if ((uVar3 != 2) && (uVar3 != 4)) goto cf_common_exit_00667066;
      goto LAB_006650bc;
    }
    goto LAB_00665237;
  default:
    goto cf_common_exit_00667066;
  case 10:
    param_1->field_00EB = 1;
    goto cf_common_exit_00667066;
  case 0xc:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = 2000;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0xe:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = 10;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0x10:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = 0x32;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    goto LAB_006651f3;
  case 0x12:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = 0x7d;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
LAB_006651f3:
    if ((param_1->field_00AB == 0) ||
       (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))
    goto cf_common_exit_00667066;
    memset(&param_1->field_01AD, 0, 0x4a); /* compiler bulk-zero initialization */
    if (param_1->field_00B3 != 0) {
      st::fn_004014BF(param_1);
    }
LAB_00665237:
    param_1->field_009B = 10;
    break;
  case 0x14:
    if (param_1->field_0115 == '\0') {
LAB_0066530b:
      param_1->field_009B = 0x28;
LAB_00665315:
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
    else {
      param_1->field_009B = 0x19;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
      param_1->field_011E = param_1->field_0116;
      param_1->field_00EB = 2;
    }
    goto LAB_00665327;
  case 0x19:
    param_1->field_00EB = 2;
    if (param_1->field_00A3 != 0) {
      if ((param_1->field_00A7 != 0) ||
         ((param_1->field_00AB != 0 &&
          (param_1->field_00AF + param_1->field_00AB < param_1->field_0280)))) goto LAB_0066530b;
      goto LAB_00665327;
    }
    param_1->field_00A3 = 1;
    param_1->field_00AB = param_1->field_011A;
    param_1->field_00AF = param_1->field_0280;
    iVar11 = st::fn_00401FB9(param_1,param_1->field_011A,param_1->field_011E,nullptr);
    if (-1 < iVar11) goto cf_common_exit_00667066;
    param_1->field_009B = 0x28;
    break;
  case 0x1e:
    param_1->field_00EB = 4;
    param_1->field_009B = 0x23;
    break;
  case 0x23:
    param_1->field_00EB = 4;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = param_1->field_01BB;
      param_1->field_00AF = param_1->field_0280;
      iVar11 = st::fn_00403BE8(param_1,param_1->field_01AD,param_1->field_01C3,
                                  param_1->field_01C5,param_1->field_01C7,param_1->field_01B9,
                                  param_1->field_01C9,&param_1->field_0x1ca);
      if (-1 < iVar11) goto cf_common_exit_00667066;
      if (param_1->field_00B3 != 0) goto cf_common_join_00667047;
      goto cf_common_join_0066704E;
    }
    if ((param_1->field_00A7 == 0) &&
       ((param_1->field_00AB == 0 ||
        (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
    goto cf_common_exit_00667066;
    memset(&param_1->field_01AD, 0, 0x4a); /* compiler bulk-zero initialization */
    iVar11 = 0;
    if (param_1->field_00B3 != 0) {
      st::fn_004014BF(param_1);
    }
    param_1->field_01F7 = 0x19;
    param_1->field_009B = 0x78;
    break;
  case 0x28:
    if ((param_1->field_0122 == '\0') || (*(int *)&param_1->field_0223->field_0xc == 0)) {
LAB_00665607:
      param_1->field_009B = 0x3c;
      goto LAB_00665315;
    }
    param_1->field_012D = 0;
    param_1->field_00AB = param_1->field_0123;
    param_1->field_00AF = param_1->field_0280;
    param_1->field_009B = 0x2a;
    param_1->field_009F = 0;
    param_1->field_00A3 = 0;
    param_1->field_00A7 = 0;
    param_1->field_00EB = 8;
LAB_00665327:
    if (param_1->field_0139 != '\0') {
      uVar13 = param_1->field_014E + param_1->field_014A;
      bVar22 = param_1->field_0280 < uVar13;
      bVar23 = param_1->field_0280 == uVar13;
/* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
LAB_0066534b:
      if ((!bVar22 && !bVar23) &&
         (uVar6 = st::fn_0040343B(param_1), (int)param_1->field_013E <= CONCAT22(extraout_var,uVar6)))
      {
LAB_0066586a:
        param_1->field_009B = 0x6e;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
    }
LAB_00665886:
    if ((param_1->field_0163 == '\0') ||
       (iVar11 = st::fn_00403F4E((AnonShape_0065EF70_E78A8204 *)param_1), iVar11 == 0))
    goto cf_common_exit_00667066;
    param_1->field_009B = 100;
    break;
  case 0x2a:
    param_1->field_00EB = 8;
    if (param_1->field_00A3 != 0) {
      iVar11 = param_1->field_0135;
      if (iVar11 == 0) {
LAB_006655b2:
        if (param_1->field_00A7 != 0) {
LAB_006655ba:
          param_1->field_009B = 0x2a;
          param_1->field_009F = 0;
          param_1->field_00A3 = 0;
          param_1->field_012D = param_1->field_012D + 1;
          param_1->field_00A7 = 0;
        }
      }
      else {
        if (param_1->field_0131 + iVar11 < param_1->field_0280) goto LAB_006655ba;
        if (iVar11 == 0) goto LAB_006655b2;
      }
      if ((param_1->field_00AB != 0) &&
         (param_1->field_00AF + param_1->field_00AB < param_1->field_0280)) goto LAB_00665607;
      goto LAB_00665327;
    }
    param_1->field_00A3 = 1;
    pAVar5 = param_1->field_0223;
    if ((param_1->field_012D < *(uint *)&pAVar5->field_0xc) &&
       (psVar10 = (short *)(pAVar5->field_0008 * param_1->field_012D + pAVar5->field_001C),
       psVar10 != nullptr)) {
      param_1->field_0131 = param_1->field_0280;
      param_1->field_0135 = *(undefined4 *)(psVar10 + 3);
      st::fn_0040528B((AnonShape_0065FA10_37C5A4D3 *)param_1,(int)psVar10[6],(int)psVar10[5],
                         (int)psVar10[6],(int)psVar10[7]);
      local_64 = *psVar10;
      local_62 = psVar10[1];
      local_60 = psVar10[2];
      local_5e = 1;
      local_5c = 1;
      local_5a = 1;
      iVar11 = st::fn_004028E2
                         ((AnonReceiver_00660180 *)param_1,&local_64,'\x02');
      if (iVar11 == 0) goto cf_common_exit_00667066;
    }
    param_1->field_009B = 0x3c;
    break;
  case 0x32:
    param_1->field_009B = 0x33;
    break;
  case 0x33:
    param_1->field_009B = 0x34;
    break;
  case 0x34:
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      iVar11 = st::fn_0040595C(param_1);
      if (iVar11 == 0) goto cf_common_exit_00667066;
      param_1->field_009B = 0x78;
      param_1->field_01F7 = 3000;
      param_1->field_009F = 0x33;
    }
    else {
      if (param_1->field_00A7 == 0) goto cf_common_exit_00667066;
      uVar6 = st::fn_0040343B(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT22(extraout_var_00,uVar6) != 0 && -1 < extraout_var_00) {
        uVar13 = param_1->field_0280;
        memset(&stack0xffffff64, 0, 0x34); /* compiler bulk-zero initialization */
        iVar11 = 0;
        local_9c = 0x72;
        local_94 = 2;
        local_98 = uVar13;
        local_90 = (DArrayTy *)st::fn_004018CF(param_1,uVar13);
        if ((AiTactClassTy *)param_1->field_0284 != nullptr) {
          st::fn_004010E1
                    ((AiTactClassTy *)param_1->field_0284,
                     (AnonShape_0068FD00_A5257008 *)&stack0xffffff64);
        }
        st::fn_006AE110(local_90);
      }
      param_1->field_009B = 0x78;
      param_1->field_01F7 = 0xfa;
      param_1->field_009F = 0x33;
    }
    goto LAB_0066705a;
  case 0x3c:
    if (param_1->field_0100 == '\0') {
      param_1->field_009B = 0x14;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
    else {
      param_1->field_009B = 0x41;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
      param_1->field_00EB = 1;
    }
    if (param_1->field_0139 != '\0') {
      uVar13 = param_1->field_014E + param_1->field_014A;
      bVar22 = param_1->field_0280 < uVar13;
      bVar23 = param_1->field_0280 == uVar13;
      goto LAB_0066534b;
    }
    goto LAB_00665886;
  case 0x41:
    param_1->field_00EB = 1;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = param_1->field_0107;
      param_1->field_00AF = param_1->field_0280;
      st::fn_0040528B((AnonShape_0065FA10_37C5A4D3 *)param_1,(int)param_1->field_010D,
                         (int)param_1->field_010B,(int)param_1->field_010D,(int)param_1->field_010F);
      st::fn_004055A6(param_1,(int)param_1->field_0101,(int)param_1->field_0103,
                         param_1->field_0105,0);
      goto cf_common_exit_00667066;
    }
    if ((param_1->field_00AB != 0) &&
       (param_1->field_00AF + param_1->field_00AB < param_1->field_0280)) {
      param_1->field_009B = 0x14;
      param_1->field_009F = 0;
      param_1->field_00A3 = 0;
      param_1->field_00A7 = 0;
    }
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    if (((param_1->field_0139 == '\0') ||
        (param_1->field_0280 <= param_1->field_014E + param_1->field_014A)) ||
       (uVar6 = st::fn_0040343B(param_1), CONCAT22(extraout_var_01,uVar6) < (int)param_1->field_013E))
    goto LAB_00665886;
    goto LAB_0066586a;
  case 100:
    param_1->field_00EB = 0x100;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = param_1->field_016C;
      param_1->field_00AF = param_1->field_0280;
      st::fn_0040528B((AnonShape_0065FA10_37C5A4D3 *)param_1,param_1->field_016C,0,0,0);
      st::fn_004028E2
                ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0x195,'\x01');
      goto cf_common_exit_00667066;
    }
    if ((param_1->field_00A7 == 0) &&
       ((param_1->field_00AB == 0 ||
        (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
    goto cf_common_exit_00667066;
    goto cf_common_join_0066704E;
  case 0x6e:
    param_1->field_00EB = 0x80;
    param_1->field_00AB = param_1->field_0142;
    param_1->field_00AF = param_1->field_0280;
    st::fn_0040528B((AnonShape_0065FA10_37C5A4D3 *)param_1,iVar11,0,0,0);
    if ((short *)param_1->field_0097 != (short *)0xff) {
      iVar11 = st::fn_0040586C(param_1,(short *)param_1->field_0097,
                                  (short *)&param_1->field_0x195,0,param_1->field_013A,nullptr,
                                  0xffffffff,0);
      if (iVar11 == 0) {
        uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039;
        param_1->field_001C = uVar13;
        if ((uVar13 & 0x10000) == 0) {
          iVar11 = st::fn_00401C6C
                             ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0x195,
                              &param_1->field_01A1,0);
          if ((iVar11 == 0x200) || (iVar11 == 0x400)) {
            param_1->field_00EF = iVar11;
            param_1->field_009B = 0x6f;
          }
          else {
            param_1->field_00EF = 0x100;
            param_1->field_009B = 0x71;
          }
        }
        else {
          param_1->field_00EF = 0x100;
          param_1->field_009B = 0x71;
        }
        break;
      }
    }
    param_1->field_014E = param_1->field_0280;
    goto cf_common_join_0066704E;
  case 0x6f:
    param_1->field_00EB = 0x80;
    if (param_1->field_00A3 != 0) {
      if (param_1->field_00A7 != 0) {
        param_1->field_009B = 0x70;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
LAB_00665a76:
      uVar6 = st::fn_0040343B(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (((int)param_1->field_0140 < CONCAT22(extraout_var_02,uVar6)) &&
         ((param_1->field_00AB == 0 ||
          (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))))
      goto cf_common_exit_00667066;
LAB_00665aac:
      param_1->field_014E = param_1->field_0280;
      goto cf_common_join_0066704E;
    }
    param_1->field_00A3 = 1;
LAB_00665b48:
    iVar11 = st::fn_004028E2
                       ((AnonReceiver_00660180 *)param_1,&param_1->field_01A1,'\x02');
    if (iVar11 == 0) goto cf_common_exit_00667066;
LAB_00665b57:
    param_1->field_009B = 0x71;
    break;
  case 0x70:
    param_1->field_00EB = 0x80;
    if (param_1->field_00A3 != 0) {
      if (param_1->field_00A7 != 0) {
        param_1->field_009B = 0x71;
        param_1->field_009F = 0;
        param_1->field_00A3 = 0;
        param_1->field_00A7 = 0;
      }
      uVar6 = st::fn_0040343B(param_1);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if ((int)param_1->field_0140 < CONCAT22(extraout_var_03,uVar6)) {
        if ((param_1->field_00AB == 0) ||
           (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB))
        goto cf_common_exit_00667066;
        param_1->field_014E = param_1->field_0280;
        goto cf_common_join_0066704E;
      }
      goto LAB_00665aac;
    }
    param_1->field_00A3 = 1;
    if (((param_1->field_00EF != 0x200) && (param_1->field_00EF != 0x400)) ||
       (uVar13 = param_1->field_001C * 0x41c64e6d + 0x3039, param_1->field_001C = uVar13,
       (uVar13 & 0x10000) == 0)) goto LAB_00665b57;
    iVar11 = st::fn_00401C6C
                       ((AnonReceiver_0065ED90 *)param_1,(short *)&param_1->field_0x195,
                        &param_1->field_01A1,param_1->field_00EF);
    if ((iVar11 == 0x200) || (iVar11 == 0x400)) goto LAB_00665b48;
    param_1->field_009B = 0x71;
    break;
  case 0x71:
    param_1->field_00EB = 0x80;
    if (param_1->field_00A3 != 0) {
      if (param_1->field_00A7 != 0) goto LAB_00665aac;
      goto LAB_00665a76;
    }
    param_1->field_00A3 = 1;
    iVar11 = st::fn_004028E2
                       ((AnonReceiver_00660180 *)param_1,(short *)&param_1->field_0x195,
                        (char)param_1->field_0146);
    if (iVar11 == 0) goto cf_common_exit_00667066;
    param_1->field_014E = param_1->field_0280;
cf_common_join_0066704E:
    param_1->field_009B = 0;
    break;
  case 0x78:
    param_1->field_00EB = 0x4000;
    if (param_1->field_00A3 == 0) {
      param_1->field_00A3 = 1;
      param_1->field_00AB = param_1->field_01F7;
      param_1->field_00AF = param_1->field_0280;
      goto cf_common_exit_00667066;
    }
    if (param_1->field_0280 <= param_1->field_00AF + param_1->field_00AB)
    goto cf_common_exit_00667066;
    param_1->field_009B = param_1->field_009F;
  }
cf_common_join_00667054:
  param_1->field_009F = 0;
LAB_0066705a:
  param_1->field_00A3 = 0;
  param_1->field_00A7 = 0;
cf_common_exit_00667066:
  if (((param_1->field_0284 != nullptr) && (param_1->field_0176 != '\0')) &&
     ((param_1->field_00EB & param_1->field_017B) != 0)) {
    st::fn_00401B09(param_1);
  }
  return;
}

