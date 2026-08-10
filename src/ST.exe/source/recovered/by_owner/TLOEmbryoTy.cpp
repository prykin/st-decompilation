#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/TLOEmbryoTy.cpp

// 00419C70 TLOEmbryoTy::sub_00419C70
#line 4 "decomp/ST.exe/functions/00419C70/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=6;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __fastcall st::fn_00419C70(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;

  uVar1 = st::fn_004052C2
                    (g_allPlayers_007FA174,(char)param_1[9],
                     STReplaceLowWord((uint32_t)(param_1), (uint16_t)((short)param_1[0xc])),0xffff,param_1,
                     param_3,0);
  st::fn_0040494E
            (g_allPlayers_007FA174,1,(int *)param_1[9],
             STReplaceLowWord((uint32_t)(uVar1), (uint16_t)(STField<undefined2>(param_1,0x32))));
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  st::fn_004019A6
            (1,(int *)param_1[9],CONCAT22(extraout_var,STField<undefined2>(param_1,0x32)));
  return uVar1;
}

// 00419CF0 TLOEmbryoTy::sub_00419CF0
#line 4 "decomp/ST.exe/functions/00419CF0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void __fastcall st::fn_00419CF0(int *param_1,undefined4 param_2,uint param_3)

{
  st::fn_004052C2
            (g_allPlayers_007FA174,(char)param_1[9],
             STReplaceLowWord((uint32_t)(param_2), (uint16_t)((short)param_1[0xc])),param_3,param_1,1,0);
  return;
}

// 0041C3F0 TLOEmbryoTy::sub_0041C3F0
#line 4 "decomp/ST.exe/functions/0041C3F0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=27;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall st::fn_0041C3F0(TLOEmbryoTy *this,undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;

  if (((-1 < (int)param_1) &&
      (this->field_0101 = param_1, g_visibleClass_00802A88 != nullptr)) &&
     ((this->field_01D1 & 1) == 0)) {
    st::fn_0040388C
              (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
               (undefined *)(int)this->field_005F,(int *)this->field_0024,(uint)param_1,
               (int *)this->field_0018,0xffffffff);
    if (this->field_0020 == 0x14) {
      iVar1 = st::fn_0040186B(this->field_0024,10);
      if (iVar1 < 1) {
        this->field_0105 = (int)this->field_0101;
      }
      else {
        this->field_0105 = (int)this->field_0101 << 1;
      }
      st::fn_00402C2A
                (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
                 (char)this->field_005F,(undefined *)this->field_0024,this->field_0105,
                 this->field_0018,0xffffffff);
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    uVar2 = (*(code *)this->field_0000->field_002C)();
    switch(uVar2) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    case 5:
    case 0x11:
    case 0x21:
      (**(code **)(this->field_0000 + 1))();
      break;
    case 0xb:
    case 0x23:
      this->field_010D = st::machine_word_boundary_cast<undefined4>(this->field_0101);
      st::fn_0040141F
                (g_visibleClass_00802A88,(int)this->field_005B,(int)this->field_005D,
                 (char)this->field_005F,this->field_0024,(int)this->field_0101,this->field_0018,
                 0xffffffff);
      return;
    }
  }
  return;
}

// 004D10A0 TLOEmbryoTy::sub_004D10A0
#line 4 "decomp/ST.exe/functions/004D10A0/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as TLOEmbryoTy.
   Evidence: this_call_owners=[TLOEmbryoTy]; agreed_this_calls=1; incoming_this_accesses=7;
   incoming_edx_uses=8; incoming_stack_parameter_uses=1; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall st::fn_004D10A0(TLOEmbryoTy *this,int param_1)

{
  uint uVar1;
  uint uVar2;

  uVar1 = ((((0x18 - (int)this->field_029C / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18) / 6) * 9;
  uVar2 = uVar1;
  if (param_1 != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    uVar2 = (*(int *)(this->field_01F5 + 0x18 + this->field_02F0 * 0x24) -
            *(int *)(this->field_01F5 + this->field_02F0 * 0x24 + 0x10)) + uVar1;
  }
  st::fn_00401EBA(&this->field_01D5,*(byte *)&this->field_02F0,uVar1,uVar1 + 8,'\0');
  st::fn_00401064((STT3DSprC *)&this->field_01D5,*(char *)&this->field_02F0,uVar2);
  st::fn_00401EBA(&this->field_01D5,*(char *)&this->field_02F0 - 1,uVar1,uVar1 + 8,'\0');
  st::fn_00401064((STT3DSprC *)&this->field_01D5,*(char *)&this->field_02F0 + -1,uVar2);
  return 0;
}

