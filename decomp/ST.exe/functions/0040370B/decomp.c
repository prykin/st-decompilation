
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall thunk_FUN_0063e410(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  
  if (*(int *)(param_1 + 0x336) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x336) + 0xc);
    iVar4 = *(int *)(param_1 + 0x2c0);
    if ((iVar4 < 1) || (0x4a < iVar4)) {
      iStack_c = (iVar4 + 5) % 10;
      iStack_10 = *(int *)(param_1 + 700) + iStack_c;
    }
    else {
      iStack_c = (iVar4 + -1) * *(int *)(param_1 + 700);
      iStack_10 = *(int *)(param_1 + 700) + iStack_c;
    }
    uStack_8 = 0;
    if (0 < iVar1) {
      do {
        iVar4 = *(int *)(param_1 + 0x336);
        if (((uStack_8 < *(uint *)(iVar4 + 0xc)) &&
            (iVar4 = *(int *)(iVar4 + 8) * uStack_8 + *(int *)(iVar4 + 0x1c), iVar4 != 0)) &&
           (uVar2 = *(uint *)(iVar4 + 0x38), -1 < (int)uVar2)) {
          if (*(int *)(iVar4 + 4) == 1) {
            if ((iStack_c <= (int)uStack_8) && ((int)uStack_8 < iStack_10)) {
              *(undefined4 *)(iVar4 + 4) = 0;
              FUN_006ea270(*(void **)(param_1 + 0x211),uVar2,0,
                           *(uint *)(&DAT_007d1f98 + *(int *)(iVar4 + 0x20) * 4));
              FUN_006ea960(*(void **)(param_1 + 0x211),*(uint *)(iVar4 + 0x38),
                           (float)*(int *)(iVar4 + 8) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar4 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                           *(float *)(iVar4 + 0x10) + _DAT_007904fc);
              FUN_006eaaa0(*(void **)(param_1 + 0x211),*(uint *)(iVar4 + 0x38),0);
            }
          }
          else {
            iVar3 = *(int *)(DAT_00802a38 + 0xe4);
            if ((1 < (uint)(iVar3 - *(int *)(iVar4 + 0x30))) || (iVar3 == *(int *)(iVar4 + 0x30))) {
              *(int *)(iVar4 + 0x30) = iVar3;
              iVar3 = *(int *)(iVar4 + 0x24) + -1;
              if (*(int *)(iVar4 + 0x20) < iVar3) {
                *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
              }
              else {
                *(int *)(iVar4 + 0x20) = iVar3;
              }
              FUN_006ea270(*(void **)(param_1 + 0x211),uVar2,0,
                           *(uint *)(&DAT_007d1f98 + *(int *)(iVar4 + 0x20) * 4));
              FUN_006ea960(*(void **)(param_1 + 0x211),*(uint *)(iVar4 + 0x38),
                           (float)*(int *)(iVar4 + 8) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)(iVar4 + 0xc) * _DAT_007904f8 * _DAT_007904f0,
                           *(float *)(iVar4 + 0x10) + _DAT_007904fc);
            }
          }
        }
        uStack_8 = uStack_8 + 1;
      } while ((int)uStack_8 < iVar1);
    }
  }
  return;
}

