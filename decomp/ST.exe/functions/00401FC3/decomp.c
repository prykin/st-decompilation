
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
thunk_FUN_0062bff0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                  float *param_7,float param_8)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float afStack_7c [9];
  float afStack_58 [5];
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  afStack_34[0] = (float)(param_4 - param_1);
  afStack_34[1] = (float)(param_5 - param_2);
  afStack_34[2] = (float)(param_6 - param_3);
  fStack_8 = SQRT(afStack_34[0] * afStack_34[0] +
                  afStack_34[1] * afStack_34[1] + afStack_34[2] * afStack_34[2]);
  afStack_34[0] = afStack_34[0] / fStack_8;
  afStack_34[1] = afStack_34[1] / fStack_8;
  afStack_34[2] = afStack_34[2] / fStack_8;
  if (param_6 - param_3 == 0) {
    fStack_1c = 0.0;
    fStack_18 = 0.0;
    fStack_14 = 1.0;
    fStack_10 = 0.0;
  }
  else {
    fStack_c = (float)(param_1 - param_4);
    fStack_10 = (float)(param_2 - param_5);
    fStack_8 = fStack_c * afStack_34[0] + (float)(param_2 - param_5) * afStack_34[1];
    if (fStack_8 == _DAT_0079034c) {
      return 0;
    }
    fStack_8 = (--((float)param_3 * afStack_34[2] +
                  (float)param_2 * afStack_34[1] + (float)param_1 * afStack_34[0]) -
               ((float)param_6 * afStack_34[2] +
               (float)param_5 * afStack_34[1] + (float)param_4 * afStack_34[0])) / fStack_8;
    fStack_1c = (fStack_c * fStack_8 + (float)param_4) - (float)param_1;
    fStack_18 = (fStack_10 * fStack_8 + (float)param_5) - (float)param_2;
    fStack_14 = (float)param_6 - (float)param_3;
    fVar1 = SQRT(fStack_1c * fStack_1c + fStack_18 * fStack_18 + fStack_14 * fStack_14);
    fStack_1c = fStack_1c / fVar1;
    fStack_18 = fStack_18 / fVar1;
    fStack_14 = fStack_14 / fVar1;
  }
  afStack_34[3] = fStack_18 * afStack_34[2] - fStack_14 * afStack_34[1];
  fStack_24 = fStack_14 * afStack_34[0] - fStack_1c * afStack_34[2];
  fStack_20 = fStack_1c * afStack_34[1] - fStack_18 * afStack_34[0];
  if (param_8 != _DAT_0079034c) {
    fVar5 = (float10)fcos((float10)param_8);
    afStack_58[0] = 1.0;
    afStack_58[1] = 0.0;
    afStack_58[2] = 0.0;
    afStack_58[3] = 0.0;
    uStack_40 = 0;
    fVar6 = (float10)fsin((float10)param_8);
    afStack_58[4] = (float)fVar5;
    fStack_44 = (float)-fVar6;
    fStack_3c = (float)fVar6;
    fStack_38 = (float)fVar5;
    thunk_FUN_0062bec0(afStack_58,afStack_34,afStack_7c);
    pfVar3 = afStack_7c;
    pfVar4 = afStack_34;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar4 + 1;
    }
  }
  iVar2 = thunk_FUN_0062ba50(afStack_34,param_7);
  if (iVar2 == 0) {
    return 0;
  }
  return 1;
}

