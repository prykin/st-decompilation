
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005f3b30(float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar2 = param_1 * param_1;
  fVar3 = fVar2 * _DAT_00790784;
  fVar4 = fVar2 * param_1 * _DAT_0079c588;
  fVar1 = param_3 - param_1 * param_2;
  fVar5 = fVar3 * fVar2 - fVar4 * param_1;
  if (fVar5 != _DAT_0079034c) {
    *param_5 = (fVar1 * fVar2 - fVar4 * param_4) / fVar5;
    param_5[1] = (fVar3 * param_4 - fVar1 * param_1) / fVar5;
    return 1;
  }
  return 0;
}

