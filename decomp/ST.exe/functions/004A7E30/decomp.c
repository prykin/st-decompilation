
/* [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1 */

undefined4 __thiscall STGroupBoatC::sub_004A7E30(STGroupBoatC *this,int param_1)

{
  int iVar1;
  DArrayTy *array;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;
  int iVar5;
  undefined1 local_14 [6];
  int local_e;
  int local_a;

  if ((int)this->field_023E < (int)this->field_023A) {
    if (param_1 != 1) {
      return 1;
    }
    iVar5 = 0;
    iVar1 = this->field_022E->field_000C;
    piVar3 = (int *)this->field_022E->field_001C;
    if (0 < iVar1) {
      do {
        if (((short)piVar3[1] != -1) && (*piVar3 == 0)) {
          return 1;
        }
        iVar5 = iVar5 + 1;
        piVar3 = (int *)((int)piVar3 + 0x16);
      } while (iVar5 < iVar1);
    }
  }
  if (this->field_0236 == 1) {
    array = (DArrayTy *)this->field_022A;
    iVar1 = this->field_0232;
    if (iVar1 == array->count - 1) {
      if (this->field_0246 != 0) {
        return 2;
      }
      if (iVar1 < 1) {
        return 1;
      }
      this->field_0236 = 0;
      this->field_023E = 0;
      this->field_0232 = iVar1 - 1U;
      DArrayGetElement(array,iVar1 - 1U,local_14);
      bVar2 = thunk_FUN_00430750(CASE_8);
      uVar4 = (uint)bVar2;
      local_e = local_e * 0xc9;
    }
    else {
      this->field_023E = 0;
      this->field_0232 = iVar1 + 1U;
      DArrayGetElement(array,iVar1 + 1U,local_14);
      bVar2 = thunk_FUN_00430750(CASE_8);
      uVar4 = (uint)bVar2;
      local_e = local_a * 0xc9;
    }
  }
  else {
    if (this->field_0232 == 0) {
      this->field_0232 = 1;
      this->field_0236 = 1;
      this->field_023E = 0;
      DArrayGetElement((DArrayTy *)this->field_022A,1,local_14);
      bVar2 = thunk_FUN_00430750(CASE_8);
    }
    else {
      uVar4 = this->field_0232 - 1;
      this->field_0232 = uVar4;
      this->field_023E = 0;
      DArrayGetElement((DArrayTy *)this->field_022A,uVar4,local_14);
      bVar2 = thunk_FUN_00430750(CASE_8);
      local_a = local_e;
    }
    uVar4 = (uint)bVar2;
    local_e = local_a * 0xc9;
  }
  this->field_023A = (local_e / (int)uVar4) / 3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  SetPatrolCmdToBoat(this,unaff_EDI);
  return 0;
}

