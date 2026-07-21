
undefined4 __fastcall FUN_00603120(AnonShape_00603120_1977E258 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;

  sVar1 = param_1->field_0259;
  sVar3 = param_1->field_0255;
  sVar4 = param_1->field_0257;
  if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) || (sVar4 < 0)) ||
      (((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)) ||
       ((g_worldGrid.sizeZ <= sVar1 ||
        ((g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
           (int)sVar3].objects[0] == (STWorldObject *)0x0 ||
         (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
           (int)sVar3].objects[0]->value_20 != 1000)))))))) &&
     ((param_1->field_0245 != 0 ||
      ((((((((short)(sVar3 + 1) < 0 || (g_worldGrid.sizeX <= (short)(sVar3 + 1))) || (sVar4 < 0)) ||
          ((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)))) || (g_worldGrid.sizeZ <= sVar1)) ||
        ((g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
           (int)(short)(sVar3 + 1)].objects[0] == (STWorldObject *)0x0 ||
         (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
           (int)(short)(sVar3 + 1)].objects[0]->value_20 != 1000)))) &&
       (((((sVar4 = sVar4 + 1, sVar3 < 0 ||
           (((g_worldGrid.sizeX <= sVar3 || (sVar4 < 0)) || (g_worldGrid.sizeY <= sVar4)))) ||
          (((sVar1 < 0 || (g_worldGrid.sizeZ <= sVar1)) ||
           (g_worldGrid.cells
            [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
             (int)sVar3].objects[0] == (STWorldObject *)0x0)))) ||
         (g_worldGrid.cells
          [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
           (int)sVar3].objects[0]->value_20 != 1000)) &&
        ((((sVar3 = sVar3 + 1, sVar3 < 0 || (g_worldGrid.sizeX <= sVar3)) ||
          ((sVar4 < 0 ||
           (((g_worldGrid.sizeY <= sVar4 || (sVar1 < 0)) || (g_worldGrid.sizeZ <= sVar1)))))) ||
         ((g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
            (int)sVar3].objects[0] == (STWorldObject *)0x0 ||
          (g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)sVar1 + (int)g_worldGrid.sizeX * (int)sVar4 +
            (int)sVar3].objects[0]->value_20 != 1000)))))))))))) {
    if (param_1->field_03A6 != '\0') {
      param_1->field_03A6 = 0;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    if (param_1->field_03A6 == '\0') {
      param_1->field_03A6 = 1;
      return uVar2;
    }
  }
  return uVar2;
}

