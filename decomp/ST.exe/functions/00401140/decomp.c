
void __fastcall thunk_FUN_0060aa00(void *param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  unkbyte10 extraout_ST1;
  longlong lVar8;
  uint uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  float fStack_8;
  
  fStack_8 = 0.0;
  iStack_14 = 0;
  iStack_10 = *(int *)(*(int *)((int)param_1 + 0x234) + 0xc);
  switch(*(undefined4 *)((int)param_1 + 0x20d)) {
  case 1:
  case 3:
    if (*(int *)((int)param_1 + 0x1f5) == 0x4d) {
      fStack_8 = 0.0072;
      iStack_10 = iStack_10 / *(int *)((int)param_1 + 0x21d);
    }
    else if (*(int *)((int)param_1 + 0x1f5) == 0x4c) {
      fStack_8 = 0.009;
    }
    else {
      fStack_8 = 0.36;
    }
    break;
  case 2:
  case 4:
    fStack_8 = 0.36;
    iStack_14 = iStack_10 / 2;
  }
  uStack_1c = 0;
  if (0 < iStack_10) {
    do {
      if (*(int *)((int)param_1 + 0x1f5) == 0x4d) {
        iStack_18 = 0;
        if (0 < *(int *)((int)param_1 + 0x21d)) {
          do {
            iVar6 = *(int *)((int)param_1 + 0x234);
            uVar3 = iStack_18 * iStack_10 + uStack_1c;
            if ((uVar3 < *(uint *)(iVar6 + 0xc)) &&
               (iVar6 = *(int *)(iVar6 + 8) * uVar3 + *(int *)(iVar6 + 0x1c), iVar6 != 0)) {
              fVar7 = (float10)*(float *)(iVar6 + 0x2c) - (float10)fStack_8;
              *(float *)(iVar6 + 0x2c) = (float)fVar7;
              if (iStack_18 != 0) {
                uVar3 = *(int *)(iVar6 + 0x34) + 1;
                *(uint *)(iVar6 + 0x34) = uVar3;
                *(float *)(iVar6 + 0x30) = (float)((uVar3 >> 1) + 10) + *(float *)(iVar6 + 0x30);
                lVar8 = __ftol();
                *(int *)(iVar6 + 0x24) = (int)lVar8;
                if ((float10)(*(int *)((int)param_1 + 0x1fd) + 100) <= extraout_ST0) {
                  *(undefined4 *)(iVar6 + 0x30) = 0x43480000;
                  *(undefined4 *)(iVar6 + 0x34) = 0;
                }
                __ftol();
                fVar7 = extraout_ST0_00;
              }
              fcos(fVar7);
              lVar8 = __ftol();
              fsin(extraout_ST1);
              iVar1 = (int)lVar8 + *(int *)(iVar6 + 0x18);
              *(int *)(iVar6 + 0xc) = iVar1;
              lVar8 = __ftol();
              iVar4 = (int)lVar8 + *(int *)(iVar6 + 0x1c);
              *(int *)(iVar6 + 0x10) = iVar4;
              FUN_006e3210(DAT_00807598,(iVar1 * *(int *)(DAT_00807598 + 0x380)) / 0xc9,
                           (iVar4 * *(int *)(DAT_00807598 + 0x380)) / 0xc9);
              lVar8 = __ftol();
              *(int *)(iVar6 + 0x14) = (short)lVar8 + 0x2d;
            }
            iStack_18 = iStack_18 + 1;
          } while (iStack_18 < *(int *)((int)param_1 + 0x21d));
        }
      }
      else {
        iVar6 = *(int *)((int)param_1 + 0x234);
        if ((uStack_1c < *(uint *)(iVar6 + 0xc)) &&
           (iVar6 = *(int *)(iVar6 + 8) * uStack_1c + *(int *)(iVar6 + 0x1c), iVar6 != 0)) {
          if (*(int *)((int)param_1 + 0x20d) == 3) {
            *(float *)(iVar6 + 0x2c) = *(float *)(iVar6 + 0x2c) - fStack_8;
          }
          else if ((*(int *)((int)param_1 + 0x20d) == 4) && ((int)uStack_1c <= iStack_14)) {
            *(float *)(iVar6 + 0x2c) = *(float *)(iVar6 + 0x2c) - fStack_8;
            __ftol();
            fVar2 = *(float *)((int)param_1 + 0x22a) + *(float *)(iVar6 + 0x30);
            *(float *)(iVar6 + 0x30) = fVar2;
            if ((float)*(int *)((int)param_1 + 0x1f9) <= fVar2) {
              *(float *)(iVar6 + 0x30) = (float)*(int *)((int)param_1 + 0x1fd);
            }
          }
          else {
            *(float *)(iVar6 + 0x2c) = fStack_8 + *(float *)(iVar6 + 0x2c);
          }
          fcos((float10)*(float *)(iVar6 + 0x2c));
          lVar8 = __ftol();
          fsin((float10)*(float *)(iVar6 + 0x2c));
          *(int *)(iVar6 + 0xc) = (int)lVar8 + *(int *)(iVar6 + 0x18);
          lVar8 = __ftol();
          *(int *)(iVar6 + 0x10) = (int)lVar8 + *(int *)(iVar6 + 0x1c);
        }
      }
      uStack_1c = uStack_1c + 1;
    } while ((int)uStack_1c < iStack_10);
  }
  if ((*(int *)((int)param_1 + 0x20d) != 4) && (*(int *)((int)param_1 + 0x20d) != 3)) {
    *(float *)((int)param_1 + 0x22a) = (float)(*(int *)((int)param_1 + 0x230) * 0x1e);
    lVar8 = __ftol();
    iVar6 = (int)lVar8;
    *(int *)((int)param_1 + 0x226) = iVar6;
    if (iVar6 < *(int *)((int)param_1 + 0x1f9)) {
      if (iVar6 <= *(int *)((int)param_1 + 0x1fd)) {
        *(undefined4 *)((int)param_1 + 0x230) = 1;
      }
    }
    else {
      *(undefined4 *)((int)param_1 + 0x226) = *(undefined4 *)((int)param_1 + 0x1fd);
      iVar6 = *(int *)(DAT_00802a38 + 0xe4);
      *(undefined4 *)((int)param_1 + 0x248) = 1;
      *(int *)((int)param_1 + 0x250) = iVar6 + 0x1e;
    }
  }
  uVar3 = *(int *)((int)param_1 + 0x226) - *(int *)((int)param_1 + 0x1f9) / 2;
  uVar5 = (int)uVar3 >> 0x1f;
  if ((((float)(int)((uVar3 ^ uVar5) - uVar5) < *(float *)((int)param_1 + 0x22a)) &&
      (*(char *)((int)param_1 + 0x22f) == '\0')) &&
     ((*(int *)((int)param_1 + 0x1f5) == 0x43 || (*(int *)((int)param_1 + 0x1f5) == 0x42)))) {
    thunk_FUN_0060aef0(param_1);
    *(undefined1 *)((int)param_1 + 0x22f) = 1;
  }
  return;
}

