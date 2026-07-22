
/* [STMethodOwnerApplier] Structural method owner recovered as STBHEShellC.
   Evidence: this_call_owners=[STBHEShellC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STBHEShellC::sub_005F5B80(STBHEShellC *this,undefined4 *param_1)

{
  dword dVar1;
  DArrayTy *pDVar2;
  int iVar3;
  void *pvVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;

  puVar5 = param_1;
  puVar7 = (undefined4 *)&this->field_0x4d;
  for (iVar3 = 0x4a; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar3 = 0x128;
  if (this->field_0169 != (DArrayTy *)0x0) {
    pDVar2 = (DArrayTy *)FUN_006b0060((uint *)0x0,param_1 + 0x4b);
    this->field_0169 = pDVar2;
    iVar3 = param_1[0x4a] + 300;
  }
  this->field_008F = -1;
  if (this->field_0169 != (DArrayTy *)0x0) {
    dVar1 = this->field_0169->count;
    uVar6 = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = this->field_0169;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar6) (runtime stride) */
        if ((uVar6 < pDVar2->count) &&
           (pvVar4 = (void *)(pDVar2->elementSize * uVar6 + (int)pDVar2->data),
           pvVar4 != (void *)0x0)) {
          *(undefined4 *)((int)pvVar4 + 0x1f) = 0xffffffff;
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)dVar1);
    }
  }
  return iVar3;
}

