
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_006e29d0(void *this,float *param_1,int param_2,int param_3,int param_4)

{
  float10 fVar1;
  double dVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  dVar2 = ((double)(param_2 - *(int *)((int)this + 0x30)) / *(double *)((int)this + 0xd8) +
          *(double *)((int)this + 0x60)) - *(double *)((int)this + 0xb0);
  fVar3 = ((float10)*(double *)((int)this + 0x78) -
          (float10)(param_3 - *(int *)((int)this + 0x34)) / (float10)*(double *)((int)this + 0xe0))
          - (float10)*(double *)((int)this + 0xb8);
  fVar4 = ((float10)param_4 / (float10)*(double *)((int)this + 0x10c) +
          (float10)*(double *)((int)this + 0x114)) - (float10)*(double *)((int)this + 0xc0);
  switch(*(undefined4 *)((int)this + 0xa8)) {
  case 0:
    fVar1 = (float10)_DAT_007901c0;
    fVar5 = (float10)_DAT_007901c0;
    *param_1 = (float)(((float10)dVar2 * (float10)_DAT_0079df60 - fVar3 * fVar1) - fVar4 * fVar5);
    param_1[1] = (float)(((float10)dVar2 * (float10)_DAT_0079dfc0 - fVar3 * fVar1) - fVar4 * fVar5);
    break;
  case 1:
    fVar1 = (float10)_DAT_0079df60;
    *param_1 = (float)((fVar4 + fVar3) * (float10)_DAT_007901c0 + (float10)dVar2 * fVar1);
    param_1[1] = (float)(((float10)dVar2 * fVar1 - fVar3 * (float10)_DAT_007901c0) -
                        fVar4 * (float10)_DAT_007901c0);
    break;
  case 2:
    fVar5 = (fVar4 + fVar3) * (float10)_DAT_007901c0;
    fVar1 = (float10)_DAT_0079df60;
    *param_1 = (float)(fVar5 - (float10)dVar2 * fVar1);
    param_1[1] = (float)(fVar5 + (float10)dVar2 * fVar1);
    break;
  case 3:
    *param_1 = (float)(((float10)dVar2 * (float10)_DAT_0079dfc0 - fVar3 * (float10)_DAT_007901c0) -
                      fVar4 * (float10)_DAT_007901c0);
    param_1[1] = (float)((fVar4 + fVar3) * (float10)_DAT_007901c0 -
                        (float10)dVar2 * (float10)_DAT_0079df60);
    break;
  default:
    RaiseInternalException(-0x34,DAT_007ed77c,s_E__ourlib_Strend_cpp_007ee758,0xbf1);
    return;
  }
  param_1[2] = (float)(fVar3 * (float10)_DAT_0079df60 - fVar4 * (float10)_DAT_0079df60);
  return;
}

