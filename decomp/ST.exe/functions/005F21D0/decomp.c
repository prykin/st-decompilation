
/* [STMethodOwnerApplier] Structural method owner recovered as STManBasisC.
   Evidence: this_call_owners=[STManBasisC]; agreed_this_calls=1; incoming_this_accesses=4;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STManBasisC::sub_005F21D0(STManBasisC *this)

{
  dword dVar1;
  DArrayTy *pDVar2;
  undefined4 *puVar3;
  short *psVar4;
  uint uVar5;

  if (this->field_0038 != (DArrayTy *)0x0) {
    dVar1 = this->field_0038->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = this->field_0038;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar5) (runtime stride) */
        if ((uVar5 < pDVar2->count) &&
           (psVar4 = (short *)(pDVar2->elementSize * uVar5 + (int)pDVar2->data),
           psVar4 != (short *)0x0)) {
          puVar3 = thunk_FUN_005f1e40((uint)*(byte *)(psVar4 + 3),(int)*(short *)((int)psVar4 + 7),
                                      (int)(short)(*psVar4 * 0xc9 + 100),
                                      (int)(short)(psVar4[1] * 0xc9 + 100),
                                      (int)(short)(psVar4[2] * 200 + 100));
          *(undefined4 **)((int)psVar4 + 0xd) = puVar3;
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar1);
    }
  }
  if (this->field_003C != (DArrayTy *)0x0) {
    dVar1 = this->field_003C->count;
    uVar5 = 0;
    if (0 < (int)dVar1) {
      do {
        pDVar2 = this->field_003C;
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, uVar5) (runtime stride) */
        if (((uVar5 < pDVar2->count) &&
            (psVar4 = (short *)(pDVar2->elementSize * uVar5 + (int)pDVar2->data),
            psVar4 != (short *)0x0)) && (*(int *)(psVar4 + 0xc) != -1)) {
          thunk_FUN_005f1700((uint)*(byte *)(psVar4 + 3),(int)*(short *)((int)psVar4 + 7),0,
                             (int)(short)(*psVar4 * 0xc9 + 100),(int)(short)(psVar4[1] * 0xc9 + 100)
                             ,(int)(short)(psVar4[2] * 200 + 100),uVar5);
        }
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)dVar1);
    }
    return dVar1;
  }
  return 0;
}

