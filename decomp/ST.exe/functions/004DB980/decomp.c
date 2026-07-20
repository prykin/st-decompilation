
STWorldObject * FUN_004db980(short param_1,short param_2,short param_3,uint param_4)

{
  if ((((-1 < param_1) && (param_1 < SHORT_007fb240)) && (-1 < param_2)) &&
     (((param_2 < SHORT_007fb242 && (-1 < param_3)) && (param_3 < SHORT_007fb244)))) {
    return g_worldCells
           [(int)SHORT_007fb246 * (int)param_3 + (int)SHORT_007fb240 * (int)param_2 + (int)param_1].
           objects[param_4 & 0xff];
  }
  return (STWorldObject *)0;
}

