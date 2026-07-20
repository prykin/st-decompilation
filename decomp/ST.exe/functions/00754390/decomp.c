
undefined4
FUN_00754390(AnonShape_00754390_3E94CBF5 *param_1,ushort *param_2,undefined4 *param_3,
            undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00755970((int)param_1,param_2,1);
  if (0 < iVar1) {
    iVar2 = *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) +
            *(int *)(param_1->field_0008 + 0x34);
    iVar1 = param_1->field_0010;
    *param_4 = *(undefined4 *)(iVar2 + 0x10 + iVar1);
    *param_3 = *(undefined4 *)(iVar2 + iVar1 + 0x14);
    return 0;
  }
  return 0xfffffffc;
}

