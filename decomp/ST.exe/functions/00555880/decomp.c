
undefined4 FUN_00555880(AnonShape_00555880_021D11E5 *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;

  sVar1 = param_1->field_001C;
  if ((((-1 < sVar1) && (sVar1 < g_worldGrid.sizeX)) && (sVar2 = param_1->field_001E, -1 < sVar2))
     && (((sVar2 < g_worldGrid.sizeY && (sVar3 = param_1->field_0020, -1 < sVar3)) &&
         (sVar3 < g_worldGrid.sizeZ)))) {
    iVar4 = thunk_FUN_004961b0(sVar1,sVar2,sVar3);
    if (iVar4 != 0) {
      return 1;
    }
    return 0;
  }
  if (-1 < param_1->field_0020) {
    return 1;
  }
  return 0;
}

