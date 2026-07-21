
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006dd530(void *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;

  *param_3 = (float)*(double *)((int)this + 0x80);
  fVar1 = (float)((float10)*(double *)((int)this + 0x80) * (float10)_DAT_0079df60);
  switch(*(uint *)((int)this + 0xa8) & 0xfffffff7) {
  case 0:
    *param_1 = fVar1 + (float)*(double *)((int)this + 0x98);
    *param_2 = fVar1 + (float)*(double *)((int)this + 0xa0);
    return;
  case 1:
    *param_1 = (float)*(double *)((int)this + 0x98) - fVar1;
    *param_2 = fVar1 + (float)*(double *)((int)this + 0xa0);
    return;
  case 2:
    *param_1 = (float)*(double *)((int)this + 0x98) - fVar1;
    *param_2 = (float)*(double *)((int)this + 0xa0) - fVar1;
    return;
  case 3:
    *param_1 = fVar1 + (float)*(double *)((int)this + 0x98);
    *param_2 = (float)*(double *)((int)this + 0xa0) - fVar1;
    return;
  default:
    *param_1 = (float)*(double *)((int)this + 0x98);
    *param_2 = (float)*(double *)((int)this + 0xa0);
    return;
  }
}

