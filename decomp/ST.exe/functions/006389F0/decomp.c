
undefined4 __cdecl FUN_006389f0(short param_1,short param_2,short param_3)

{
  STWorldObject *pSVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_28 [8];
  undefined4 local_8;
  
  local_8 = 0;
  bVar2 = thunk_FUN_004961b0(param_1,param_2,param_3);
  if (((((CONCAT31(extraout_var,bVar2) == 0) && (-1 < param_1)) && (param_1 < g_worldGrid.sizeX)) &&
      ((-1 < param_2 && (param_2 < g_worldGrid.sizeY)))) &&
     ((-1 < param_3 &&
      ((param_3 < g_worldGrid.sizeZ &&
       (pSVar1 = g_worldGrid.cells
                 [(int)g_worldGrid.planeStride * (int)param_3 +
                  (int)g_worldGrid.sizeX * (int)param_2 + (int)param_1].objects[1],
       pSVar1 != (STWorldObject *)0x0)))))) {
    iVar3 = pSVar1->value_20;
    if ((iVar3 == 0xbe) || ((iVar3 == 0x1ae || (iVar3 == 0x8c)))) {
      local_8 = 0xffffffff;
    }
    else {
      puVar4 = local_28;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      switch(pSVar1->value_20) {
      case 0x32:
      case 0xfa:
      case 0x10e:
      case 0x118:
        local_28[2] = *(undefined4 *)&pSVar1->field_0x8;
        local_28[3] = 2;
        local_28[4] = 0x128;
        (*PTR_00802a38->vtable->SendMessage)
                  ((SystemWithNamedObjClassTy *)PTR_00802a38,(int)local_28);
        return 1;
      }
    }
  }
  return local_8;
}

