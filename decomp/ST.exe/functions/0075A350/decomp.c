
void FUN_0075a350(AnonShape_0075A350_15A0BA61 *param_1,undefined4 param_2,uint *param_3,uint param_4
                 )

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1->field_0196;
  if (*(int *)(iVar2 + 0x30) == 0) {
    iVar3 = (**(code **)(param_1->field_019A + 0xc))
                      (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4));
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x30) = 1;
    *(int *)(iVar2 + 0x4c) = *(int *)(iVar2 + 0x4c) + 1;
  }
  iVar3 = *(int *)(iVar2 + 0x44);
  if (iVar3 != 0) {
    if (iVar3 == 1) goto LAB_0075a413;
    if (iVar3 != 2) {
      return;
    }
    (**(code **)(param_1->field_019E + 4))
              (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4),
               (uint *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x48),param_2,param_3,param_4);
    if (*(uint *)(iVar2 + 0x34) < *(uint *)(iVar2 + 0x48)) {
      return;
    }
    *(undefined4 *)(iVar2 + 0x44) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *(int *)(iVar2 + 0x48) = param_1->field_012A + -1;
  if (*(int *)(iVar2 + 0x4c) == param_1->field_012E) {
    FUN_0075a590((AnonShape_0075A180_7E367FD8 *)param_1);
  }
  *(undefined4 *)(iVar2 + 0x44) = 1;
LAB_0075a413:
  puVar1 = (uint *)(iVar2 + 0x34);
  (**(code **)(param_1->field_019E + 4))
            (param_1,*(undefined4 *)(iVar2 + 0x38 + *(int *)(iVar2 + 0x40) * 4),puVar1,
             *(undefined4 *)(iVar2 + 0x48),param_2,param_3,param_4);
  if (*(uint *)(iVar2 + 0x48) <= *puVar1) {
    if (*(int *)(iVar2 + 0x4c) == 1) {
      FUN_0075a490((AnonShape_0075A180_7E367FD8 *)param_1);
    }
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(uint *)(iVar2 + 0x40) = *(uint *)(iVar2 + 0x40) ^ 1;
    *puVar1 = param_1->field_012A + 1;
    iVar3 = param_1->field_012A;
    *(undefined4 *)(iVar2 + 0x44) = 2;
    *(int *)(iVar2 + 0x48) = iVar3 + 2;
  }
  return;
}

