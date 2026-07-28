
/* [STAbiConsistencyApplier] stack_parameter_width target=parameter:3: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=004DB9D9 MOV EAX,dword ptr [EBP + 0x14];
   first-use mask */

STWorldObject * FUN_004db980(short param_1,short param_2,short param_3,byte param_4)

{
  if ((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
     (((param_2 < g_worldGrid.sizeY && (-1 < param_3)) && (param_3 < g_worldGrid.sizeZ)))) {
    return g_worldGrid.cells
           [(int)g_worldGrid.planeStride * (int)param_3 + (int)g_worldGrid.sizeX * (int)param_2 +
            (int)param_1].objects[param_4];
  }
  return (STWorldObject *)0;
}

