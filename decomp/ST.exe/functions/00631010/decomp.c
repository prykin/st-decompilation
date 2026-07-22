
/* [STMethodOwnerApplier] Structural method owner recovered as STManRuinC.
   Evidence: this_call_owners=[STManRuinC]; agreed_this_calls=1; incoming_this_accesses=15;
   incoming_edx_uses=0; incoming_stack_parameter_uses=0; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

void __thiscall STManRuinC::sub_00631010(STManRuinC *this)

{
  DArrayTy *pDVar1;
  int *piVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  short local_20;
  short local_1e;
  short local_1c;
  short local_1a;
  undefined4 local_18;
  undefined4 local_c;
  uint local_8;

  pDVar1 = this->field_0038;
  if (pDVar1 != (DArrayTy *)0x0) {
    local_8 = pDVar1->count - 1;
    if (-1 < (int)local_8) {
      if (local_8 < pDVar1->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar1, local_8) (runtime stride) */
        puVar3 = (undefined4 *)(pDVar1->elementSize * local_8 + (int)pDVar1->data);
      }
      else {
        puVar3 = (undefined4 *)0x0;
      }
      if (puVar3[3] + 0x2ee < g_playSystem_00802A38->field_00E4) {
        piVar2 = (int *)puVar3[4];
        psVar7 = &local_20;
        for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
          *(undefined4 *)psVar7 = *puVar3;
          puVar3 = puVar3 + 1;
          psVar7 = psVar7 + 2;
        }
        FUN_006e91d0(PTR_00807598,piVar2);
        iVar6 = thunk_FUN_00630ac0(this,local_8);
        if (iVar6 != 0) {
          thunk_FUN_00630bb0(this,local_20,local_1e,local_1c,local_18,(int)local_1a,local_c);
          this->field_0044 = 1;
          iVar6 = thunk_FUN_00630ff0();
          this->field_0048 = iVar6;
          if (iVar6 < 1) {
            this->field_0044 = 1;
          }
          else {
            puVar4 = sub_00630C50(this,this->field_0040,this->field_004C,1,1,this->field_0050);
            if (puVar4 != (ushort *)0x0) {
              this->field_0044 = 2;
            }
          }
          uVar5 = thunk_FUN_00631880(this,&this->field_0040,this->field_0061);
          if (((uVar5 == 0) && (this->field_0048 != 0)) && (this->field_0061 != 0)) {
            FUN_006e8ba0(PTR_00807598,this->field_0061);
          }
          this->field_0061 = -1;
        }
      }
    }
  }
  return;
}

