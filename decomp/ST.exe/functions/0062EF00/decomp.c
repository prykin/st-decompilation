
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0062FCA0 -> 0062EF00 @ 0062FCCF

   [STMethodOwnerApplier] Structural method owner recovered as STRubbishC.
   Evidence: this_call_owners=[STRubbishC]; agreed_this_calls=1; incoming_this_accesses=2;
   incoming_edx_uses=0; incoming_stack_parameter_uses=2; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

undefined4 __thiscall
STRubbishC::sub_0062EF00(STRubbishC *this,int param_1,AnonShape_0062FCA0_22A9EE35 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  uVar2 = 0;
  if ((&this->field_01E5)[param_1] != 0) {
    *(uint *)((&this->field_01E5)[param_1] + 0x14) = (uint)*(ushort *)&param_2->field_0028;
    *(undefined4 *)((&this->field_01E5)[param_1] + 0x20) = *(undefined4 *)&param_2->field_0x14;
    *(undefined4 *)((&this->field_01E5)[param_1] + 0x24) = *(undefined4 *)&param_2->field_0x18;
    *(undefined4 *)((&this->field_01E5)[param_1] + 0x28) = *(undefined4 *)&param_2->field_0x1c;
    *(int *)(&this->field_01E5)[param_1] = param_2->field_0020;
    *(uint *)((&this->field_01E5)[param_1] + 0x35) = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)((&this->field_01E5)[param_1] + 0x39) = 3000;
    uVar1 = this->field_001C * 0x41c64e6d + 0x3039;
    this->field_001C = uVar1;
    *(uint *)((&this->field_01E5)[param_1] + 0x1c) = (uVar1 >> 0x10) % 5;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar4 = *(int *)((&this->field_01E5)[param_1] + 0x1c);
    iVar3 = thunk_FUN_004ab050();
    iVar4 = thunk_FUN_0062ffd0(iVar3,iVar4);
    *(int *)((&this->field_01E5)[param_1] + 0x2c) = iVar4;
    *(uint *)((&this->field_01E5)[param_1] + 4) = (uint)param_2->field_0028 >> 0x10;
    *(uint *)((&this->field_01E5)[param_1] + 0xc) = (uint)*(ushort *)&param_2->field_0x24;
    *(undefined4 *)((&this->field_01E5)[param_1] + 8) = *(undefined4 *)(param_2 + 1);
    iVar4 = *(int *)((&this->field_01E5)[param_1] + 4);
    if ((iVar4 == 3) || (iVar4 == 6)) {
      sub_00630260(this,param_1,1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

