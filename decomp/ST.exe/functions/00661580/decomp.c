
/* [STMethodOwnerApplier] Structural method owner recovered as AiFltClassTy.
   Evidence: this_call_owners=[AiFltClassTy]; agreed_this_calls=1; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall AiFltClassTy::sub_00661580(AiFltClassTy *this)

{
  ushort *this_00;
  int iVar1;
  DArrayTy *pDVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;

  this_00 = this->field_0284;
  if (this_00 == (ushort *)0x0) {
    return;
  }
  if (this->field_020B == (DArrayTy *)0x0) {
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
  iVar1 = thunk_FUN_0068e800(this_00,this->field_007D);
  if (iVar1 < (int)(3 - (uint)(this->field_007B != 1))) {
    pDVar2 = this->field_020B;
    uVar3 = 0;
    if (0 < (int)pDVar2->count) {
      bVar5 = pDVar2->count != 0;
      do {
        if (bVar5) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar3) (runtime stride) */
          puVar4 = (uint *)(pDVar2->elementSize * uVar3 + (int)pDVar2->data);
        }
        else {
          puVar4 = (uint *)0x0;
        }
        if (((puVar4[10] == 0) && (puVar4[9] == 0)) &&
           (sub_00660F70(this,puVar4,(short)uVar3), puVar4[9] != 0)) {
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

