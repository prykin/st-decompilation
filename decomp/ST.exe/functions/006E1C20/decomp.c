
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_006e1c20(void *this,float param_1,int param_2,float param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int local_24;
  int local_20;
  float local_14;
  float local_10;
  undefined4 local_c;
  
  local_14 = (float)*(double *)((int)this + 0x98);
  local_10 = (float)*(double *)((int)this + 0xa0);
  local_c = 0;
  FUN_006e25d0(this,&local_24);
  fVar1 = (float)((int)param_1 * 0x10000 - local_24) * (float)_DAT_0079b148;
  fVar2 = (float)(param_2 * 0x10000 - local_20) * (float)_DAT_0079b148;
  fVar3 = param_3 * (float)_DAT_0079df60;
  param_1 = fVar3;
  switch(*(undefined4 *)((int)this + 0xa8)) {
  case 0:
    fVar2 = fVar2 * (float)*(double *)((int)this + 0xf0);
    fVar1 = fVar1 * (float)*(double *)((int)this + 0xe8);
    param_1 = fVar3 + (fVar1 + fVar2) * (float)_DAT_0079df60;
    fVar3 = fVar3 + (fVar2 * (float)_DAT_0079df60 - fVar1 * (float)_DAT_0079df60);
    break;
  case 1:
    fVar1 = fVar1 * (float)*(double *)((int)this + 0xe8);
    fVar2 = fVar2 * (float)*(double *)((int)this + 0xf0);
    param_1 = -fVar3 + (fVar1 - fVar2) * (float)_DAT_0079df60;
    fVar3 = fVar3 + (fVar1 + fVar2) * (float)_DAT_0079df60;
    break;
  case 2:
    fVar2 = fVar2 * (float)*(double *)((int)this + 0xf0);
    fVar1 = fVar1 * (float)*(double *)((int)this + 0xe8);
    param_1 = -fVar3 - (fVar1 + fVar2) * (float)_DAT_0079df60;
    fVar3 = -fVar3 + (fVar1 - fVar2) * (float)_DAT_0079df60;
    break;
  case 3:
    fVar2 = fVar2 * (float)*(double *)((int)this + 0xf0);
    fVar1 = fVar1 * (float)*(double *)((int)this + 0xe8);
    param_1 = fVar3 + (fVar2 * (float)_DAT_0079df60 - fVar1 * (float)_DAT_0079df60);
    fVar3 = -fVar3 - (fVar1 + fVar2) * (float)_DAT_0079df60;
  }
  *param_4 = param_1 + (float)*(double *)((int)this + 0x98);
  *param_5 = fVar3 + (float)*(double *)((int)this + 0xa0);
  return 0;
}

