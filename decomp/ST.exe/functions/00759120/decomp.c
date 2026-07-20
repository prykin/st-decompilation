
undefined4 FUN_00759120(AnonShape_00759120_E4E2134C *param_1)

{
  int iVar1;
  
  if (param_1->field_018E == 0) {
    iVar1 = FUN_00757d90((AnonShape_00757D90_5427B306 *)param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1->field_01A6 + 0x58);
  if (param_1->field_018E == iVar1 + 0xd0) {
    param_1->field_018E = 0;
  }
  else {
    iVar1 = (**(code **)(param_1->field_0010 + 0x14))(param_1,iVar1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(uint *)(param_1->field_01A6 + 0x58) = *(int *)(param_1->field_01A6 + 0x58) + 1U & 7;
  return 1;
}

