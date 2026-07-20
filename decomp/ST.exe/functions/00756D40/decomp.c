
undefined4 FUN_00756d40(AnonShape_00756D40_7190B7CA *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (((((param_1->field_0044 != 0) || (param_1->field_011E != 0)) || (param_1->field_0020 != 3)) ||
      (((param_1->field_001C != 3 || (param_1->field_0024 != 2)) ||
       ((param_1->field_0070 != 3 ||
        ((iVar1 = param_1->field_00D0, *(int *)(iVar1 + 8) != 2 ||
         (uVar3 = 1, *(int *)(iVar1 + 0x5c) != 1)))))))) ||
     ((*(int *)(iVar1 + 0xb0) != 1 ||
      (((((2 < *(int *)(iVar1 + 0xc) || (*(int *)(iVar1 + 0x60) != 1)) ||
         (*(int *)(iVar1 + 0xb4) != 1)) ||
        ((iVar2 = param_1->field_012A, *(int *)(iVar1 + 0x24) != iVar2 ||
         (*(int *)(iVar1 + 0x78) != iVar2)))) || (*(int *)(iVar1 + 0xcc) != iVar2)))))) {
    uVar3 = 0;
  }
  return uVar3;
}

