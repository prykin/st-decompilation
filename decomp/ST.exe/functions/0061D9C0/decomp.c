
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0061DB80 -> 0061D9C0 @ 0061DBE3

   [STMethodOwnerApplier] Structural method owner recovered as STLightC.
   Evidence: this_call_owners=[STLightC]; agreed_this_calls=1; incoming_this_accesses=14;
   incoming_edx_uses=0; incoming_stack_parameter_uses=23; direct_non_thunk_callers=0;
   incoming_ecx_receiver_callers=0; attributed_named_callers=1; owner_evidence_coverage=adequate */

int __thiscall STLightC::sub_0061D9C0(STLightC *this,ushort *param_1,int *param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int local_c;
  int local_8;

  local_8 = 0;
  local_c = 0;
  if (param_3 == 0) {
    param_3 = 0x10;
    this->field_0093 = *(int *)param_1;
    this->field_0097 = *(undefined4 *)(param_1 + 2);
    this->field_009B = *(undefined4 *)(param_1 + 4);
    this->field_009F = *(undefined4 *)(param_1 + 6);
    param_1 = param_1 + 8;
  }
  else {
    param_3 = 0;
  }
  uVar5 = this->field_0093;
  puVar1 = (undefined4 *)Library::DKW::LIB::FUN_006aac70(uVar5 * 4);
  this->field_009B = puVar1;
  puVar7 = param_1;
  for (uVar2 = uVar5 & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar1 = *(undefined4 *)puVar7;
    puVar7 = puVar7 + 2;
    puVar1 = puVar1 + 1;
  }
  param_3 = param_3 + uVar5 * 4;
  for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(char *)puVar1 = (char)*puVar7;
    puVar7 = (ushort *)((int)puVar7 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  param_1 = param_1 + uVar5 * 2;
  iVar3 = this->field_0093;
  if (0 < iVar3) {
    piVar4 = (int *)this->field_009B;
    do {
      iVar6 = *piVar4;
      piVar4 = piVar4 + 1;
      local_c = local_c + 8 + iVar6 * 0x14;
      local_8 = local_8 + iVar6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *param_2 = local_8;
  iVar3 = Library::DKW::LIB::FUN_006aac70(local_c);
  this->field_009F = iVar3;
  param_2 = (int *)(iVar3 + this->field_0093 * 4);
  local_c = 0;
  if (0 < this->field_0093) {
    do {
      *(int **)(this->field_009F + local_c * 4) = param_2;
      iVar3 = *(int *)(this->field_009B + local_c * 4);
      puVar7 = param_1;
      puVar1 = *(undefined4 **)(this->field_009F + local_c * 4);
      for (uVar5 = iVar3 * 5 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar1 = *(undefined4 *)puVar7;
        puVar7 = puVar7 + 2;
        puVar1 = puVar1 + 1;
      }
      param_3 = param_3 + iVar3 * 0x14;
      for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(char *)puVar1 = (char)*puVar7;
        puVar7 = (ushort *)((int)puVar7 + 1);
        puVar1 = (undefined4 *)((int)puVar1 + 1);
      }
      param_1 = param_1 + iVar3 * 10;
      param_2 = param_2 + iVar3 * 5;
      local_c = local_c + 1;
    } while (local_c < this->field_0093);
  }
  return param_3;
}

