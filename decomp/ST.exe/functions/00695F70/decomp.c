
/* [STMethodOwnerApplier] Structural method owner recovered as CGenerate.
   Evidence: this_call_owners=[CGenerate]; agreed_this_calls=3; incoming_this_accesses=3;
   incoming_edx_uses=0; incoming_stack_parameter_uses=4; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=2; owner_evidence_coverage=adequate */

uint __thiscall CGenerate::sub_00695F70(CGenerate *this,uint param_1,int param_2,int param_3)

{
  DArrayTy *pDVar1;
  uint uVar2;
  void *pvVar3;
  undefined2 local_c;
  int iStack_a;

  pDVar1 = this->field_5853;
  /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, param_1) (runtime stride) */
  if (((pDVar1 == (DArrayTy *)0x0) || (pDVar1->count <= param_1)) ||
     (pvVar3 = (void *)(pDVar1->elementSize * param_1 + (int)pDVar1->data), pvVar3 == (void *)0x0))
  {
LAB_00696007:
    uVar2 = 0xffffffff;
  }
  else {
    if (*(int *)((int)pvVar3 + 0x15) == 0) {
      pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,6,10);
      *(DArrayTy **)((int)pvVar3 + 0x15) = pDVar1;
      if (pDVar1 == (DArrayTy *)0x0) goto LAB_00696007;
    }
    local_c = 0;
    iStack_a = param_2;
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(*(uint **)((int)pvVar3 + 0x15),(undefined4 *)&local_c);
    if (-1 < (int)uVar2) {
      *(uint *)((int)pvVar3 + 0x11) = uVar2 + 1;
      if (this->field_584F != (ushort *)0x0) {
        this->field_584F[this->field_582F * param_3 + param_2] = (ushort)param_1;
        return uVar2;
      }
    }
  }
  return uVar2;
}

