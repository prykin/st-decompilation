
bool __thiscall FUN_00417f30(void *this,short param_1,short param_2,short param_3)

{
  if (*(short *)(DAT_007fb280 +
                ((int)SHORT_007fb278 * (int)param_2 +
                (int)param_1 + (int)SHORT_007fb27e * (int)param_3) * 2) < 0) {
    return false;
  }
  return g_worldCells
         [(int)SHORT_007fb240 * (int)param_2 + (int)param_1 + (int)SHORT_007fb246 * (int)param_3].
         objects[*(byte *)((int)this + 0x8e)] == (STWorldObject *)0x0;
}

