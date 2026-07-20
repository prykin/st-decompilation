
/* [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1 */

undefined4 __thiscall STGroupBoatC::sub_004A7E30(STGroupBoatC *this,int param_1)

{
  int iVar1;
  AnonShape_006ACC70_C8641025 *pAVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  int unaff_EDI;
  int iVar6;
  undefined4 local_14;
  int local_e;
  int local_a;
  
  if ((int)this->field_023E < (int)this->field_023A) {
    if (param_1 != 1) {
      return 1;
    }
    iVar6 = 0;
    iVar1 = this->field_022E->field_000C;
    piVar4 = (int *)this->field_022E->field_001C;
    if (0 < iVar1) {
      do {
        if (((short)piVar4[1] != -1) && (*piVar4 == 0)) {
          return 1;
        }
        iVar6 = iVar6 + 1;
        piVar4 = (int *)((int)piVar4 + 0x16);
      } while (iVar6 < iVar1);
    }
  }
  if (this->field_0236 == 1) {
    pAVar2 = (AnonShape_006ACC70_C8641025 *)this->field_022A;
    iVar1 = this->field_0232;
    if (iVar1 == pAVar2->field_000C - 1) {
      if (this->field_0246 != 0) {
        return 2;
      }
      if (iVar1 < 1) {
        return 1;
      }
      this->field_0236 = 0;
      this->field_023E = 0;
      this->field_0232 = iVar1 - 1U;
      FUN_006acc70(pAVar2,iVar1 - 1U,&local_14);
      bVar3 = thunk_FUN_00430750(CASE_8);
      uVar5 = (uint)bVar3;
      local_e = local_e * 0xc9;
    }
    else {
      this->field_023E = 0;
      this->field_0232 = iVar1 + 1U;
      FUN_006acc70(pAVar2,iVar1 + 1U,&local_14);
      bVar3 = thunk_FUN_00430750(CASE_8);
      uVar5 = (uint)bVar3;
      local_e = local_a * 0xc9;
    }
  }
  else {
    if (this->field_0232 == 0) {
      this->field_0232 = 1;
      this->field_0236 = 1;
      this->field_023E = 0;
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)this->field_022A,1,&local_14);
      bVar3 = thunk_FUN_00430750(CASE_8);
    }
    else {
      uVar5 = this->field_0232 - 1;
      this->field_0232 = uVar5;
      this->field_023E = 0;
      FUN_006acc70((AnonShape_006ACC70_C8641025 *)this->field_022A,uVar5,&local_14);
      bVar3 = thunk_FUN_00430750(CASE_8);
      local_a = local_e;
    }
    uVar5 = (uint)bVar3;
    local_e = local_a * 0xc9;
  }
  this->field_023A = (local_e / (int)uVar5) / 3;
  SetPatrolCmdToBoat(this,unaff_EDI);
  return 0;
}

