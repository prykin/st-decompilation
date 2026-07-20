
undefined4
FUN_00495ff0(short param_1,short param_2,short param_3,uint param_4,
            AnonShape_00495FF0_59081BDD *param_5)

{
  int iVar1;
  
  iVar1 = (int)SHORT_007fb240 * (int)param_2 + (int)SHORT_007fb246 * (int)param_3 + (int)param_1;
  if ((((-1 < param_1) && (param_1 < SHORT_007fb240)) && (-1 < param_2)) &&
     (((param_2 < SHORT_007fb242 && (-1 < param_3)) && (param_3 < SHORT_007fb244)))) {
    if ((AnonShape_00495FF0_59081BDD *)g_worldCells[iVar1].objects[param_4 & 0xff] != param_5) {
      return 0xffffffff;
    }
    g_worldCells[iVar1].objects[param_4 & 0xff] = (STWorldObject *)0x0;
    param_5->field_005B = 0xffff;
    param_5->field_005D = 0xffff;
    param_5->field_005F = 0xffff;
  }
  return 0;
}

