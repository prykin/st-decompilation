#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_owner/BldBoatPanelTy.cpp

// 004EEFB0 BldBoatPanelTy::ShiftControls
#line 4 "decomp/ST.exe/functions/004EEFB0/decomp.c"
/* [STVirtualMethodApplier] Recovered from virtual table slot family.
   Tables: 0079ABA0
   Entries: 00402914
   Slots: 0x18
   Anchor:
   Evidence: unique_named_method_in_slot_family; unique_owner_for_target;
   competing_signature_shapes_in_slot_family */

void __thiscall st::fn_004EEFB0(BldBoatPanelTy *this,int param_1)

{
  short sVar1;

  if (param_1 != this->field_005C) {
    /* ST_CALLSITE[004EEFC0]: CALL 0x00402b3a; direct=00402B3A ProdPanelTy::ShiftControls */
    st::fn_00402B3A(reinterpret_cast<ProdPanelTy *>(this),param_1);
    sVar1 = (short)this->field_0174;
    this->field_0028 = 0x24;
    if (param_1 != 0) {
      sVar1 = -sVar1;
    }
    *(short *)&this->field_0x2e = sVar1;
    if (this->field_0292 != 0) {
      st::fn_006E6080(this,2,this->field_0292,reinterpret_cast<undefined4 *>(&this->field_0x18));
    }
  }
  return;
}

// 004EF140 BldBoatPanelTy::sub_004EF140
#line 4 "decomp/ST.exe/functions/004EF140/decomp.c"
/* [STMethodOwnerApplier] Structural method owner recovered as BldBoatPanelTy.
   Evidence: this_call_owners=[BldBoatPanelTy]; agreed_this_calls=1; incoming_this_accesses=19;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004EF140(BldBoatPanelTy *this)

{
  int iVar1;
  uint uVar2;
  Global_sub_00523410_param_1Enum *pGVar3;
  byte *pbVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int local_14;
  int *local_c;
  int local_8;

  if ((&this->field_027A)[(byte)this->field_0278] != 0) {
    local_c = reinterpret_cast<int *>(&this->field_01B6);
    puVar5 = &this->field_01A1;
    local_8 = 0;
    local_14 = 5;
    do {
      this->field_0028 = 0x21;
      st::fn_006E6080(this,2,*puVar5,reinterpret_cast<undefined4 *>(&this->field_0x18));
      iVar1 = *(int *)&this->field_0x2c;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar2 = st::storage_bit_cast<uint>(static_cast<uint32_t>((uint)(local_8 + this->field_0199) <
                    *(uint *)((&this->field_027A)[(byte)this->field_0278] + 0xc)));
      *(uint *)&this->field_0x2c = uVar2;
      if (uVar2 == 0) {
        if (iVar1 != 0) goto LAB_004ef270;
LAB_004ef1cc:
        this->field_0028 = 5;
        uVar7 = *puVar5;
      }
      else {
        if (iVar1 != 0) goto LAB_004ef1cc;
LAB_004ef270:
        this->field_0028 = 0x20;
        uVar7 = *puVar5;
      }
      st::fn_006E6080(this,2,uVar7,reinterpret_cast<undefined4 *>(&this->field_0x18));
      if ((((*(int *)&this->field_0x2c != 0) &&
           (iVar1 = (&this->field_027A)[(byte)this->field_0278], iVar1 != 0)) &&
          (uVar2 = this->field_0199 + local_8, uVar2 < STField<uint>(iVar1,0xC))) &&
         (pGVar3 = (Global_sub_00523410_param_1Enum *)
                   (STField<int>(iVar1,0x8) * uVar2 + STField<int>(iVar1,0x1C)),
         pGVar3 != nullptr)) {
        *(char *)((int)local_c + -1) = ((char)pGVar3[2] == 0) + '\x03';

        iVar1 = st::fn_00403684(*pGVar3,STField<byte>(pGVar3,9),0);
        *local_c = iVar1;
        local_c[1] = 0;
        if ((char)pGVar3[2] == 0) {
          pbVar4 = (byte *)((int)pGVar3 + 0x12);
          piVar6 = local_c + 2;
          memmove(piVar6, pbVar4, 0x1e); /* compiler REP MOVS byte copy */
        }
        else {
          local_c[2] = STField<int>(pGVar3,10);
          local_c[3] = STField<int>(pGVar3,0xe);
        }
      }
      local_8 = local_8 + 1;
      puVar5 = puVar5 + 1;
      local_c = (int *)((int)local_c + 0x27);
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return;
}
