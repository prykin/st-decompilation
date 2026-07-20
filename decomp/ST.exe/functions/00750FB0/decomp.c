
void FUN_00750fb0(AnonShape_00750FB0_15A3AC3E *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1->field_0008 + 0x50);
  param_1->field_000C = iVar2;
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  *(undefined4 *)(param_1->field_000C + 0x10) = param_3;
  *(undefined4 *)(param_1->field_000C + 0x40) = 0;
  *(undefined4 *)(param_1->field_000C + 0x1c) = 0;
  iVar2 = *(int *)(param_1->field_0008 + 0x34) + *(int *)(param_1->field_000C + 0x24);
  iVar1 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar2 + 8));
  if (-1 < iVar1) {
    iVar1 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar2 + 8));
    for (iVar1 = *(int *)(iVar1 + 0x10 + iVar2); iVar1 != -1; iVar1 = *(int *)(iVar1 + 0x10 + iVar2)
        ) {
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + 1;
      iVar2 = FUN_00753b80((AnonShape_00753B80_E259A731 *)param_1,iVar1,
                           *(int *)(param_1->field_000C + 0x1c));
      iVar1 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar2 + 8));
    }
  }
  *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) =
       (int)*(short *)(iVar2 + 8);
  return;
}

