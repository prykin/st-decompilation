
void FUN_0075a2d0(AnonShape_0075A2D0_C70BF9F5 *param_1,undefined4 param_2,undefined4 param_3,
                 undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;

  iVar2 = param_1->field_0196;
  if (*(int *)(iVar2 + 0x30) == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar4 = (**(code **)(param_1->field_019A + 0xc))(param_1,iVar2 + 8);
    if (iVar4 == 0) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x30) = 1;
  }
  uVar3 = param_1->field_012A;
  puVar1 = (uint *)(iVar2 + 0x34);
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(param_1->field_019E + 4))(param_1,iVar2 + 8,puVar1,uVar3,param_2,param_3,param_4);
  if (uVar3 <= *puVar1) {
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *puVar1 = 0;
  }
  return;
}

