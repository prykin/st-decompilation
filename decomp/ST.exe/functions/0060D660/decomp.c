
/* [STMethodOwnerApplier] Structural method owner recovered as STFieldC.
   Evidence: this_call_owners=[STFieldC]; agreed_this_calls=1; incoming_this_accesses=9;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STFieldC::sub_0060D660(STFieldC *this,int *param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint size;
  int *piVar6;
  int *piVar7;
  int local_14;
  int local_10;
  int local_8;

  iVar5 = this->field_023C;
  size = iVar5 * 0x44;
  pvVar1 = Library::DKW::LIB::MemAlloc(size);
  this->field_0244 = pvVar1;
  if (pvVar1 == (void *)0x0) {
    return 0;
  }
  iVar2 = thunk_FUN_0062ca00();
  piVar6 = param_1;
  piVar7 = this->field_0244;
  for (uVar3 = size >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(char *)piVar7 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + 1);
    piVar7 = (int *)((int)piVar7 + 1);
  }
  local_8 = 0;
  local_10 = 0;
  piVar6 = param_1 + iVar5 * 0x11;
  if (0 < (int)this->field_023C) {
    local_14 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = piVar6;
    do {
      pvVar1 = this->field_0244;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = *(int *)((int)pvVar1 + local_14 + 0x40);
      if (((iVar5 != 0) || (*(int *)((int)pvVar1 + local_14 + 8) != 0)) && (*piVar6 != 0)) {
        piVar6 = piVar6 + 1;
        if (iVar5 != 0) {
          uVar3 = thunk_FUN_0062ca70((undefined4 *)((int)pvVar1 + local_14 + 0x40),piVar6);
          if (uVar3 != 0) {
            local_8 = local_8 + iVar2;
          }
          piVar6 = (int *)((int)piVar6 + iVar2);
        }
        if (*(int *)(local_14 + 8 + (int)this->field_0244) != 0) {
          pvVar1 = Library::DKW::LIB::MemAlloc(*(int *)((int)this->field_0244 + local_14 + 4) << 2);
          *(void **)(local_14 + 8 + (int)this->field_0244) = pvVar1;
          piVar7 = *(int **)((int)this->field_0244 + local_14 + 8);
          for (uVar3 = *(uint *)(local_14 + 4 + (int)this->field_0244) & 0x3fffffff; uVar3 != 0;
              uVar3 = uVar3 - 1) {
            *piVar7 = *piVar6;
            piVar6 = piVar6 + 1;
            piVar7 = piVar7 + 1;
          }
          for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(char *)piVar7 = (char)*piVar6;
            piVar6 = (int *)((int)piVar6 + 1);
            piVar7 = (int *)((int)piVar7 + 1);
          }
        }
        piVar6 = (int *)((int)param_1 + *param_1);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = piVar6;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x44;
    } while (local_10 < (int)this->field_023C);
  }
  return size + local_8;
}

