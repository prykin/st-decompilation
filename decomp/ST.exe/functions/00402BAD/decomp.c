
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_0061dd40(int param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  longlong lVar7;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  
  uStack_10 = 0xffffffff;
  fVar3 = (float)(int)*(short *)(param_1 + 0x30) * _DAT_007904f8 * _DAT_007904f0;
  fVar4 = (float)(int)*(short *)(param_1 + 0x32) * _DAT_007904f8 * _DAT_007904f0;
  fVar5 = (float)(int)*(short *)(param_1 + 0x34) * _DAT_007904f8 * _DAT_007904f0;
  *(float *)(param_1 + 99) = fVar3;
  *(float *)(param_1 + 0x67) = fVar4;
  *(float *)(param_1 + 0x6b) = fVar5;
  fVar5 = fVar5 - (float)(int)*(short *)(param_1 + 0x3a) * _DAT_007904f8 * _DAT_007904f0;
  fVar4 = fVar4 - (float)(int)*(short *)(param_1 + 0x38) * _DAT_007904f8 * _DAT_007904f0;
  fVar3 = fVar3 - (float)(int)*(short *)(param_1 + 0x36) * _DAT_007904f8 * _DAT_007904f0;
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if ((fVar3 != _DAT_0079034c) && (*(int *)(param_1 + 0x97) != 0)) {
    iStack_c = 0;
    *(float *)(param_1 + 0x47) = fVar3 / (float)*(int *)(param_1 + 0x97);
    if (0 < *(int *)(param_1 + 0x93)) {
      do {
        iVar6 = 0;
        if (0 < **(int **)(param_1 + 0x9b)) {
          iStack_8 = 0;
          do {
            iVar2 = *(int *)(*(int *)(param_1 + 0x9f) + iStack_c * 4);
            lVar7 = __ftol();
            *(int *)(iVar2 + 0xc + iStack_8) = (int)(short)lVar7;
            iVar6 = iVar6 + 1;
            iStack_8 = iStack_8 + 0x14;
          } while (iVar6 < *(int *)(*(int *)(param_1 + 0x9b) + iVar6 * 4));
        }
        iStack_c = iStack_c + 1;
      } while (iStack_c < *(int *)(param_1 + 0x93));
    }
    uVar1 = *(int *)(param_1 + 0xac) * 0x41c64e6d + 0x3039;
    *(uint *)(param_1 + 0xac) = uVar1;
    fVar3 = (float)((uVar1 >> 0x10) % 0xb5) * _DAT_0079c70c;
    *(float *)(param_1 + 0x4b) = fVar3;
    iVar6 = thunk_FUN_0062bff0((int)*(short *)(param_1 + 0x30),(int)*(short *)(param_1 + 0x32),
                               (int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),
                               (int)*(short *)(param_1 + 0x38),(int)*(short *)(param_1 + 0x3a),
                               (float *)(param_1 + 0x6f),fVar3);
    if (iVar6 != 0) {
      *(undefined4 *)(param_1 + 0x5b) = 0x8fc;
      *(undefined4 *)(param_1 + 0x5f) = 6;
      *(undefined4 *)(param_1 + 0x4f) = 0;
      *(undefined4 *)(param_1 + 0x53) = 1;
      *(undefined1 *)(param_1 + 0x46) = 0;
      uStack_10 = 1;
    }
    return uStack_10;
  }
  return 0xffffffff;
}

