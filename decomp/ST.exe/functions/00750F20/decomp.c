
void FUN_00750f20(AnonShape_00750F20_F8C16F98 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar2 = *(int *)(param_1->field_0008 + 0x50);
  param_1->field_000C = iVar2;
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  *(undefined4 *)(param_1->field_000C + 0x10) = param_3;
  *(undefined4 *)(param_1->field_000C + 0x40) = 0;
  *(undefined4 *)(param_1->field_000C + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1->field_000C + 0x1c) = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  param_1->field_0010 = *(undefined4 *)(param_1->field_000C + 0x24);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  piVar1 = (int *)(*(int *)(param_1->field_0008 + 0x34) + *(int *)(param_1->field_000C + 0x24) + 4);
  iVar2 = *piVar1;
  while (iVar2 != -1) {
    *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + 1;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar2 = FUN_00753b80(param_1,*piVar1,*(int *)(param_1->field_000C + 0x1c));
    piVar1 = (int *)(iVar2 + 4);
    *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) =
         0xffffffff;
    iVar2 = *piVar1;
  }
  return;
}

