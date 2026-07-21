
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_0062bff0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,float *param_7,
            float param_8)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float local_7c [9];
  float local_58 [5];
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  float local_34 [4];
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;

  local_34[0] = (float)(param_4 - param_1);
  local_34[1] = (float)(param_5 - param_2);
  local_34[2] = (float)(param_6 - param_3);
  local_8 = SQRT(local_34[0] * local_34[0] + local_34[1] * local_34[1] + local_34[2] * local_34[2]);
  local_34[0] = local_34[0] / local_8;
  local_34[1] = local_34[1] / local_8;
  local_34[2] = local_34[2] / local_8;
  if (param_6 - param_3 == 0) {
    local_1c = 0.0;
    local_18 = 0.0;
    local_14 = 1.0;
    local_10 = 0.0;
  }
  else {
    local_c = (float)(param_1 - param_4);
    local_10 = (float)(param_2 - param_5);
    local_8 = local_c * local_34[0] + (float)(param_2 - param_5) * local_34[1];
    if (local_8 == _DAT_0079034c) {
      return 0;
    }
    local_8 = (--((float)param_3 * local_34[2] +
                 (float)param_2 * local_34[1] + (float)param_1 * local_34[0]) -
              ((float)param_6 * local_34[2] +
              (float)param_5 * local_34[1] + (float)param_4 * local_34[0])) / local_8;
    local_1c = (local_c * local_8 + (float)param_4) - (float)param_1;
    local_18 = (local_10 * local_8 + (float)param_5) - (float)param_2;
    local_14 = (float)param_6 - (float)param_3;
    fVar1 = SQRT(local_1c * local_1c + local_18 * local_18 + local_14 * local_14);
    local_1c = local_1c / fVar1;
    local_18 = local_18 / fVar1;
    local_14 = local_14 / fVar1;
  }
  local_34[3] = local_18 * local_34[2] - local_14 * local_34[1];
  local_24 = local_14 * local_34[0] - local_1c * local_34[2];
  local_20 = local_1c * local_34[1] - local_18 * local_34[0];
  if (param_8 != _DAT_0079034c) {
    fVar5 = (float10)fcos((float10)param_8);
    local_58[0] = 1.0;
    local_58[1] = 0.0;
    local_58[2] = 0.0;
    local_58[3] = 0.0;
    local_40 = 0;
    fVar6 = (float10)fsin((float10)param_8);
    local_58[4] = (float)fVar5;
    local_44 = (float)-fVar6;
    local_3c = (float)fVar6;
    local_38 = (float)fVar5;
    thunk_FUN_0062bec0(local_58,local_34,local_7c);
    pfVar3 = local_7c;
    pfVar4 = local_34;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar4 + 1;
    }
  }
  iVar2 = thunk_FUN_0062ba50(local_34,param_7);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}

