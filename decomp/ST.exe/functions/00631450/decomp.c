
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=5;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall STManRuinC::sub_00631450(STManRuinC *this)

{
  DArrayTy *pDVar1;
  ushort *puVar2;
  uint uVar3;
  short *psVar4;

  if ((this->field_0038 != (DArrayTy *)0x0) &&
     (uVar3 = this->field_0038->count - 1, -1 < (int)uVar3)) {
    do {
      pDVar1 = this->field_0038;
      if (uVar3 < pDVar1->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, uVar3) (runtime stride) */
        psVar4 = (short *)(pDVar1->elementSize * uVar3 + (int)pDVar1->data);
      }
      else {
        psVar4 = (short *)0x0;
      }
      thunk_FUN_00630bb0(this,*psVar4,psVar4[1],psVar4[2],*(undefined4 *)(psVar4 + 4),(int)psVar4[3]
                         ,*(undefined4 *)(psVar4 + 10));
      puVar2 = sub_00630C50(this,this->field_0040,this->field_004C,0,1,*(int *)(psVar4 + 10));
      *(ushort **)(psVar4 + 8) = puVar2;
      if (puVar2 == (ushort *)0x0) {
        FUN_006b0c70(this->field_0038,uVar3);
      }
      uVar3 = uVar3 - 1;
    } while (-1 < (int)uVar3);
    return 0;
  }
  return 0;
}

