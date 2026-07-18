
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall thunk_FUN_0041da30(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (DAT_0080732c == 1) {
      fVar3 = (float)(int)*(short *)(param_1 + 0x45) * _DAT_007904f8 * _DAT_007904f0 +
              *(float *)(param_1 + 0x70) + _DAT_007904fc;
      fVar2 = (float)(int)*(short *)(param_1 + 0x43) * _DAT_007904f8 * _DAT_007904f0;
      fVar1 = (float)(int)*(short *)(param_1 + 0x41) * _DAT_007904f8 * _DAT_007904f0;
    }
    else {
      fVar3 = (float)(int)*(short *)(param_1 + 0x45) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc
      ;
      fVar2 = (float)(int)*(short *)(param_1 + 0x43) * _DAT_007904f8 * _DAT_007904f0;
      fVar1 = (float)(int)*(short *)(param_1 + 0x41) * _DAT_007904f8 * _DAT_007904f0;
    }
  }
  else {
    fVar3 = (float)(int)*(short *)(param_1 + 0x45) * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc;
    fVar2 = (float)(*(short *)(param_1 + 0x49) + 1) * _DAT_007904f8;
    fVar1 = (float)(*(short *)(param_1 + 0x47) + 1) * _DAT_007904f8;
  }
  thunk_FUN_004ad3c0((void *)(param_1 + 0x1d5),fVar1,fVar2,fVar3);
  thunk_FUN_004ac9e0((void *)(param_1 + 0x1d5),*(int *)(DAT_00802a38 + 0xe4));
  return;
}

