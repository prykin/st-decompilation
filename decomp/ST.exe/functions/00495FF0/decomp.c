
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:3: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0049604C MOV EDX,dword ptr [EBP + 0x14];
   first-use mask */

undefined4
FUN_00495ff0(short param_1,short param_2,short param_3,byte param_4,
            AnonShape_00495FF0_59081BDD *param_5)

{
  int iVar1;

  iVar1 = (int)g_worldGrid.sizeX * (int)param_2 + (int)g_worldGrid.planeStride * (int)param_3 +
          (int)param_1;
  if ((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
     (((param_2 < g_worldGrid.sizeY && (-1 < param_3)) && (param_3 < g_worldGrid.sizeZ)))) {
    if ((AnonShape_00495FF0_59081BDD *)g_worldGrid.cells[iVar1].objects[param_4] != param_5) {
      return 0xffffffff;
    }
    g_worldGrid.cells[iVar1].objects[param_4] = (STWorldObject *)0x0;
    param_5->field_005B = 0xffff;
    param_5->field_005D = 0xffff;
    param_5->field_005F = 0xffff;
  }
  return 0;
}

