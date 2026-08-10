#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/BldObjPanelTy.cpp

// 004F0AF0 BldObjPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/004F0AF0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079ABF0
   Entries: 00401AF0
   Slots: 0x18
   Anchor:
   Evidence: unique_named_method_in_slot_family; unique_owner_for_target;
   competing_signature_shapes_in_slot_family */

void __thiscall st::fn_004F0AF0(BldObjPanelTy *this,int param_1)

{
  short sVar1;

  if (param_1 != this->field_005C) {
    st::fn_00402B3A((ProdPanelTy *)this,param_1);
    sVar1 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar1 = -sVar1;
    }
    *(short *)&this->field_0x2e = sVar1;
    if (this->field_0292 != 0) {
      st::fn_006E6080(this,2,this->field_0292,(undefined4 *)&this->field_0x18);
    }
  }
  return;
}

// 004F0C80 BldObjPanelTy::sub_004F0C80
#line 4 "decomp/ST.exe/functions/004F0C80/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as BldObjPanelTy.
   Evidence: this_call_owners=[BldObjPanelTy]; agreed_this_calls=1; incoming_this_accesses=18;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004F0C80(BldObjPanelTy *this)

{
  UINT UVar1;
  uint uVar2;
  int iVar3;
  Global_sub_00523410_param_1Enum *pGVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  byte *puVar7;
  undefined4 uVar8;
  int local_14;
  undefined4 *local_c;
  int local_8;

  if ((&this->field_027E)[(byte)this->field_0278] != 0) {
    local_c = &this->field_01BE;
    puVar6 = &this->field_01A1;
    local_8 = 0;
    local_14 = 5;
    do {
      this->field_0028 = 0x21;
      st::fn_006E6080(this,2,*puVar6,(undefined4 *)&this->field_0x18);
      iVar3 = *(int *)&this->field_0x2c;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar2 = (uint)((uint)(local_8 + this->field_0199) <
                    *(uint *)((&this->field_027E)[(byte)this->field_0278] + 0xc));
      *(uint *)&this->field_0x2c = uVar2;
      if (uVar2 == 0) {
        if (iVar3 != 0) goto LAB_004f0da7;
LAB_004f0d0c:
        this->field_0028 = 5;
        uVar8 = *puVar6;
      }
      else {
        if (iVar3 != 0) goto LAB_004f0d0c;
LAB_004f0da7:
        this->field_0028 = 0x20;
        uVar8 = *puVar6;
      }
      st::fn_006E6080(this,2,uVar8,(undefined4 *)&this->field_0x18);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if ((((*(int *)&this->field_0x2c != 0) &&
           (iVar3 = (&this->field_027E)[(byte)this->field_0278], iVar3 != 0)) &&
          (uVar2 = st::machine_word_boundary_cast<uint>(this->field_0199 + local_8), uVar2 < *(uint *)(iVar3 + 0xc))) &&
         (pGVar4 = (Global_sub_00523410_param_1Enum *)
                   (*(int *)(iVar3 + 8) * uVar2 + *(int *)(iVar3 + 0x1c)),
         pGVar4 != nullptr)) {
        *(char *)((int)local_c + -9) = ((char)pGVar4[2] == 0) + '\x03';
        UVar1 = st::fn_00403684(*pGVar4,STField<byte>(pGVar4,9),0);
        local_c[-2] = UVar1;
        if ((char)pGVar4[2] == 0) {
          pbVar5 = (byte *)((int)pGVar4 + 0x12);
          puVar7 = (byte *)(local_c);
          memmove(puVar7, pbVar5, 0x1e); /* compiler REP MOVS byte copy */
        }
        else {
          *local_c = STField<undefined4>(pGVar4,10);
          local_c[1] = STField<undefined4>(pGVar4,0xe);
        }
      }
      local_8 = local_8 + 1;
      puVar6 = puVar6 + 1;
      local_c = (undefined4 *)((int)local_c + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}

