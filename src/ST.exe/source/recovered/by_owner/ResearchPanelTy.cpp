#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/ResearchPanelTy.cpp

// 0053C490 ResearchPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/0053C490/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079AD64
   Entries: 00405BF0
   Slots: 0x18
   Anchor:
   Evidence: unique_named_method_in_slot_family; unique_owner_for_target;
   competing_signature_shapes_in_slot_family */

void __thiscall st::fn_0053C490(ResearchPanelTy *this,int param_1)

{
  short sVar1;

  if (param_1 != this->field_005C) {
    /* ST_CALLSITE[0053C4A0]: CALL 0x00402b3a; direct=00402B3A ProdPanelTy::ShiftControls */
    st::fn_00402B3A((ProdPanelTy *)this,param_1);
    sVar1 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar1 = -sVar1;
    }
    *(short *)&this->field_0x2e = sVar1;
    if (this->field_0282 != 0) {
      st::fn_006E6080(this,2,this->field_0282,(undefined4 *)&this->field_0x18);
    }
  }
  return;
}

// 0053C620 ResearchPanelTy::sub_0053C620
#line 4 "decomp/ST.exe/functions/0053C620/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as ResearchPanelTy.
   Evidence: this_call_owners=[ResearchPanelTy]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0053C620(ResearchPanelTy *this)

{
  uint uVar1;
  UINT UVar2;
  uint uVar3;
  int iVar4;
  Global_sub_00528060_param_1Enum *pGVar5;
  uint *puVar6;
  byte *puVar7;
  int local_14;
  int local_c;
  undefined4 *local_8;

  if ((&this->field_027A)[(byte)this->field_0278] != 0) {
    local_8 = &this->field_01B6;
    puVar6 = &this->field_01A1;
    local_c = 0;
    local_14 = 5;
    do {
      this->field_0028 = 0x21;
      st::fn_006E6080(this,2,*puVar6,(undefined4 *)&this->field_0x18);
      iVar4 = *(int *)&this->field_0x2c;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar3 = (uint)((uint)(local_c + this->field_0199) <
                    *(uint *)((&this->field_027A)[(byte)this->field_0278] + 0xc));
      *(uint *)&this->field_0x2c = uVar3;
      if (uVar3 == 0) {
        if (iVar4 != 0) goto LAB_0053c75b;
LAB_0053c6ac:
        this->field_0028 = 5;
        uVar1 = *puVar6;
      }
      else {
        if (iVar4 != 0) goto LAB_0053c6ac;
LAB_0053c75b:
        this->field_0028 = 0x20;
        uVar1 = *puVar6;
      }
      st::fn_006E6080(this,2,uVar1,(undefined4 *)&this->field_0x18);
      if ((((*(int *)&this->field_0x2c != 0) &&
           (iVar4 = (&this->field_027A)[(byte)this->field_0278], iVar4 != 0)) &&
          (uVar3 = st::machine_word_boundary_cast<uint>(this->field_0199 + local_c), uVar3 < STField<uint>(iVar4,0xC))) &&
         (pGVar5 = (Global_sub_00528060_param_1Enum *)
                   (STField<int>(iVar4,0x8) * uVar3 + STField<int>(iVar4,0x1C)),
         pGVar5 != nullptr)) {
        *(char *)((int)local_8 + -1) = (pGVar5[8] == CASE_0) + '\x03';
        uVar1 = st::fn_00402789(*pGVar5);
        *local_8 = uVar1;
        UVar2 = st::fn_00404B29(*pGVar5,(char)((uint)*(undefined4 *)pGVar5 >> 0x10));
        local_8[1] = UVar2;
        if (pGVar5[8] == CASE_0) {
          pGVar5 = pGVar5 + 0x12;
          puVar7 = (byte *)(local_8 + 2);
          memmove(puVar7, pGVar5, 0x1e); /* compiler REP MOVS byte copy */
          pGVar5 = pGVar5 + 0x1c;
        }
        else {
          local_8[2] = *(undefined4 *)(pGVar5 + 10);
          local_8[3] = *(undefined4 *)(pGVar5 + 0xe);
        }
      }
      local_c = local_c + 1;
      puVar6 = puVar6 + 1;
      local_8 = (undefined4 *)((int)local_8 + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

