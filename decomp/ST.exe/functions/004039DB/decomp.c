
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_0060a000(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  unkbyte10 extraout_ST0;
  float10 extraout_ST0_00;
  unkbyte10 extraout_ST0_01;
  float10 extraout_ST0_02;
  longlong lVar7;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  uint uStack_c;
  int iStack_8;
  
  iStack_18 = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    iStack_14 = 0;
    iStack_8 = *(int *)(*(int *)(param_1 + 0x234) + 0xc);
    switch(*(int *)(param_1 + 0x20d)) {
    case 0:
    case 3:
      if (*(int *)(param_1 + 0x1f5) == 0x4d) {
        iStack_8 = iStack_8 / *(int *)(param_1 + 0x21d);
        iStack_18 = (int)(0x3ed / (longlong)*(int *)(param_1 + 0x21d));
      }
      fVar6 = (float10)_DAT_0079c5a4 / (float10)iStack_8;
      if (*(int *)(param_1 + 0x20d) == 3) {
        *(undefined4 *)(param_1 + 0x1fd) = *(undefined4 *)(param_1 + 0x1f9);
      }
      break;
    default:
      fVar6 = (float10)_DAT_0079c5a4 / (float10)iStack_8;
      break;
    case 2:
    case 4:
      fVar6 = (float10)_DAT_0079cd28 / (float10)iStack_8;
      iStack_14 = iStack_8 / 2;
    }
    iStack_10 = 0;
    *(undefined4 *)(param_1 + 0x226) = *(undefined4 *)(param_1 + 0x1fd);
    *(undefined4 *)(param_1 + 0x230) = 1;
    uStack_c = 0;
    if (0 < iStack_8) {
      do {
        if (*(int *)(param_1 + 0x1f5) == 0x4d) {
          iVar4 = 0;
          if (0 < *(int *)(param_1 + 0x21d)) {
            do {
              uVar3 = iVar4 * iStack_8 + uStack_c;
              iVar1 = *(int *)(param_1 + 0x234);
              if ((uVar3 < *(uint *)(iVar1 + 0xc)) &&
                 (puVar5 = (undefined4 *)(*(int *)(iVar1 + 8) * uVar3 + *(int *)(iVar1 + 0x1c)),
                 puVar5 != (undefined4 *)0x0)) {
                puVar5[0xb] = (float)((float10)(int)uStack_c * fVar6);
                fcos((float10)(int)uStack_c * fVar6);
                lVar7 = Library::MSVCRT::__ftol();
                fsin(extraout_ST0);
                puVar5[3] = (int)lVar7 + *(int *)(param_1 + 0x1e9);
                lVar7 = Library::MSVCRT::__ftol();
                puVar5[4] = (int)lVar7 + *(int *)(param_1 + 0x1ed);
                puVar5[5] = iVar4 * iStack_18 + *(int *)(param_1 + 0x1f1);
                puVar5[6] = *(undefined4 *)(param_1 + 0x1e9);
                puVar5[7] = *(undefined4 *)(param_1 + 0x1ed);
                puVar5[8] = *(undefined4 *)(param_1 + 0x1f1);
                puVar5[1] = 0xffffffff;
                fVar6 = extraout_ST0_00;
                if (iVar4 == 0) {
                  uVar2 = *(undefined4 *)(param_1 + 0x215);
                  puVar5[9] = iStack_10;
                  *puVar5 = uVar2;
                  puVar5[10] = 7;
                  if ((int)uStack_c % 3 == 0) {
                    puVar5[1] = 0;
                  }
                }
                else {
                  uVar2 = *(undefined4 *)(param_1 + 0x211);
                  puVar5[10] = 0;
                  *puVar5 = uVar2;
                  iVar1 = *(int *)(param_1 + 0x1fd);
                  uVar3 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
                  *(uint *)(param_1 + 0x1c) = uVar3;
                  puVar5[9] = 0;
                  puVar5[0xd] = 0;
                  puVar5[0xc] = (float)((uVar3 >> 0x10) % (iVar1 - 99U) + 200);
                }
              }
              iStack_10 = iStack_10 + 1;
              if (6 < iStack_10) {
                iStack_10 = 0;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < *(int *)(param_1 + 0x21d));
          }
        }
        else {
          iVar4 = *(int *)(param_1 + 0x234);
          if ((uStack_c < *(uint *)(iVar4 + 0xc)) &&
             (puVar5 = (undefined4 *)(*(int *)(iVar4 + 8) * uStack_c + *(int *)(iVar4 + 0x1c)),
             puVar5 != (undefined4 *)0x0)) {
            puVar5[0xb] = (float)((float10)(int)uStack_c * fVar6);
            fcos((float10)(int)uStack_c * fVar6);
            lVar7 = Library::MSVCRT::__ftol();
            fsin(extraout_ST0_01);
            puVar5[3] = (int)lVar7 + *(int *)(param_1 + 0x1e9);
            lVar7 = Library::MSVCRT::__ftol();
            puVar5[4] = (int)lVar7 + *(int *)(param_1 + 0x1ed);
            puVar5[5] = *(undefined4 *)(param_1 + 0x1f1);
            iVar4 = *(int *)(param_1 + 0x1e9);
            puVar5[6] = iVar4;
            puVar5[7] = *(undefined4 *)(param_1 + 0x1ed);
            if (*(int *)(param_1 + 0x1f5) == 0x4d) {
              puVar5[6] = iVar4 + 100;
              puVar5[7] = puVar5[7] + 100;
            }
            puVar5[8] = *(undefined4 *)(param_1 + 0x1f1);
            if ((*(int *)(param_1 + 0x20d) == 4) && ((int)uStack_c <= iStack_14)) {
              puVar5[0xc] = (float)(int)uStack_c * *(float *)(param_1 + 0x22a);
            }
            if ((iStack_14 < 1) || ((int)uStack_c <= iStack_14)) {
              *puVar5 = *(undefined4 *)(param_1 + 0x211);
            }
            else {
              *puVar5 = *(undefined4 *)(param_1 + 0x215);
            }
            puVar5[10] = 0;
            puVar5[9] = iStack_10;
            iStack_10 = iStack_10 + 1;
            fVar6 = extraout_ST0_02;
            if (-1 < iStack_10) {
              iStack_10 = 0;
            }
          }
        }
        uStack_c = uStack_c + 1;
      } while ((int)uStack_c < iStack_8);
    }
    *(undefined4 *)(param_1 + 0x254) = 0;
    return 0;
  }
  return 0;
}

