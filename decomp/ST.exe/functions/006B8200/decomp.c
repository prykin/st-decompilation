
undefined4 FUN_006b8200(AnonShape_006B8200_800652FF *param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;

  if ((param_2 < param_1->field_0008) && (param_3 < param_1->field_0008)) {
    iVar1 = param_1->field_0014;
    uVar2 = *(undefined4 *)(iVar1 + param_2 * 4);
    *(undefined4 *)(iVar1 + param_2 * 4) = *(undefined4 *)(iVar1 + param_3 * 4);
    *(undefined4 *)(param_1->field_0014 + param_3 * 4) = uVar2;
    return 0;
  }
  return 0xfffffffc;
}

