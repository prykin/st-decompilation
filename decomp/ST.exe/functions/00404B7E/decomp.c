
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall thunk_FUN_00616400(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar2 = (float)*(int *)(param_1 + 0x27c) * _DAT_0079cea8;
  fVar3 = (float)*(int *)(param_1 + 0x280) * _DAT_0079cea8;
  fVar4 = (float10)*(int *)(param_1 + 0x284) * (float10)_DAT_0079cea8;
  fVar1 = (float)fVar4;
  fVar4 = (float10)fVar2 * (float10)fVar2 + (float10)fVar3 * (float10)fVar3 + fVar4 * (float10)fVar1
  ;
  if (fVar4 != (float10)_DAT_0079034c) {
    fVar4 = (((float10)param_2 * (float10)fVar2 +
             (float10)param_3 * (float10)fVar3 + (float10)param_4 * (float10)fVar1) -
            ((float10)(int)*(short *)(param_1 + 0x25a) * (float10)fVar2 +
            (float10)(int)*(short *)(param_1 + 0x25c) * (float10)fVar3 +
            (float10)(int)*(short *)(param_1 + 0x25e) * (float10)fVar1)) / fVar4;
  }
  return fVar4;
}

