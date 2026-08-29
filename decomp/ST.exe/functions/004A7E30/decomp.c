#include "../../pseudocode_runtime.h"


/* [STMethodOwnerApplier] Structural method owner recovered as STGroupBoatC.
   Evidence: this_call_owners=[STGroupBoatC]; agreed_this_calls=1; incoming_this_accesses=10;
   incoming_edx_uses=0; incoming_stack_parameter_uses=1
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=00497E00 @ 00497F66 -> killed on
   every CFG path | 0049B7D0 @ 0049B806 -> read as EAX on every CFG path | 004A7AF0 @ 004A7B9B ->
   read as EAX on every CFG path | 004A7AF0 @ 004A7C80 -> read as EAX on every CFG path */

int __thiscall STGroupBoatC::sub_004A7E30(STGroupBoatC *this,int param_1)

{
  dword dVar1;
  DArrayTy *array;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  byte local_14 [6];
  int local_e;
  int local_a;

  if (this->field_023E < (int)this->field_023A) {
    if (param_1 != 1) {
      return 1;
    }
    iVar5 = 0;
    dVar1 = this->field_022E->count;
    piVar3 = this->field_022E->data;
    if (0 < (int)dVar1) {
      do {
        if (((short)piVar3[1] != -1) && (*piVar3 == 0)) {
          return 1;
        }
        iVar5 = iVar5 + 1;
        piVar3 = (int *)((int)piVar3 + 0x16);
      } while (iVar5 < (int)dVar1);
    }
  }
  if (this->field_0236 == 1) {
    array = this->field_022A;
    iVar5 = this->field_0232;
    if (iVar5 == array->count - 1) {
      if (this->field_0246 != 0) {
        return 2;
      }
      if (iVar5 < 1) {
        return 1;
      }
      this->field_0236 = 0;
      this->field_023E = 0;
      this->field_0232 = iVar5 - 1U;

      DArrayGetElement(array,iVar5 - 1U,local_14);
      bVar2 = thunk_FUN_00430750(CASE_8);
      uVar4 = (uint)bVar2;
      local_e = local_e * 0xc9;
    }
    else {
      this->field_023E = 0;
      this->field_0232 = iVar5 + 1U;

      DArrayGetElement(array,iVar5 + 1U,local_14);
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

      DArrayGetElement(this->field_022A,1,local_14);
      bVar2 = thunk_FUN_00430750(CASE_8);
    }
    else {
      uVar4 = this->field_0232 - 1;
      this->field_0232 = uVar4;
      this->field_023E = 0;

      DArrayGetElement(this->field_022A,uVar4,local_14);
      bVar2 = thunk_FUN_00430750(CASE_8);
      local_a = local_e;
    }
    uVar4 = (uint)bVar2;
    local_e = local_a * 0xc9;
  }
  this->field_023A = (local_e / (int)uVar4) / 3;
  /* ST_CALLSITE[004A7FFA]: CALL 0x00404b1a; direct=00404B1A STGroupBoatC::SetPatrolCmdToBoat */
  SetPatrolCmdToBoat(this);
  return 0;
}

