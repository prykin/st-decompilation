
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_00632e30(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int local_14;
  float local_10;
  undefined4 local_c;
  float local_8;
  
  local_c = 0;
  local_8 = 0.0;
  switch(*(undefined4 *)((int)param_1 + 0x11)) {
  case 0:
    *(undefined4 *)((int)param_1 + 0x5d) = DAT_007d1a54;
    local_8 = _DAT_0079c5a4 / (float)*(int *)((int)param_1 + 0x19);
    *(undefined4 *)((int)param_1 + 0x61) = DAT_007d1a58;
    *(undefined4 *)((int)param_1 + 0x75) = DAT_007d1a64;
    *(undefined4 *)((int)param_1 + 0x79) = DAT_007d1a68;
    *(undefined4 *)((int)param_1 + 0x65) = DAT_007d1a5c;
    *(undefined4 *)((int)param_1 + 0x6d) = DAT_007d1a60;
    *(float *)((int)param_1 + 0x7d) = _DAT_007d1a6c * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x81) = _DAT_007d1a70 * _DAT_0079d1a4;
    *(undefined4 *)((int)param_1 + 0x85) = DAT_007d1a74;
    *(undefined4 *)((int)param_1 + 0x89) = DAT_007d1a78;
    goto LAB_00632f7e;
  case 1:
    local_8 = _DAT_0079c5a4 / (float)*(int *)((int)param_1 + 0x19);
    fVar1 = _DAT_007d1aa4 * _DAT_0079d1a4;
    *(undefined4 *)((int)param_1 + 0x61) = 0;
    *(float *)((int)param_1 + 0x5d) = fVar1;
    *(float *)((int)param_1 + 0x75) = _DAT_007d1ab4 * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x79) = _DAT_007d1ab8 * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x65) = _DAT_007d1aac * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x6d) = _DAT_007d1ab0 * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x69) = _DAT_007d1ab4 * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x7d) = _DAT_007d1abc * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x81) = _DAT_007d1ac0 * _DAT_0079d1a4;
    *(undefined4 *)((int)param_1 + 0x85) = DAT_007d1ac4;
    *(undefined4 *)((int)param_1 + 0x89) = DAT_007d1ac8;
LAB_00632f7e:
    local_c = 1;
    *(undefined4 *)((int)param_1 + 0x8d) = 0x40c90fdb;
    *(undefined4 *)((int)param_1 + 0x91) = 0x40c90fdb;
    break;
  case 2:
    *(undefined4 *)((int)param_1 + 0x5d) = DAT_007d1af4;
    local_8 = _DAT_0079c5a4 / (float)*(int *)((int)param_1 + 0x19);
    *(undefined4 *)((int)param_1 + 0x61) = DAT_007d1af8;
    fVar1 = _DAT_0079034c;
    *(float *)((int)param_1 + 0x75) = _DAT_007d1b04 * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x79) = _DAT_007d1b08 * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x65) = _DAT_007d1afc * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x6d) = _DAT_007d1b00 * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x7d) = _DAT_007d1b0c * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x81) = _DAT_007d1b10 * _DAT_0079d1a4;
    *(undefined4 *)((int)param_1 + 0x85) = DAT_007d1b14;
    *(undefined4 *)((int)param_1 + 0x89) = DAT_007d1b18;
    if (*param_1 != 0) {
      iVar6 = *(int *)(*param_1 + 0xc);
      uVar10 = 0;
      if (0 < iVar6) {
        do {
          iVar11 = *param_1;
          if (uVar10 < *(uint *)(iVar11 + 0xc)) {
            iVar11 = *(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c);
          }
          else {
            iVar11 = 0;
          }
          if ((0 < (int)uVar10) && ((int)uVar10 % *(int *)((int)param_1 + 0x19) == 0)) {
            fVar1 = _DAT_0079034c;
          }
          if (iVar11 != 0) {
            *(float *)(iVar11 + 0x21) = fVar1;
            fVar1 = fVar1 + local_8;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar6);
      }
    }
    local_10 = 0.0;
    if (0 < *(int *)((int)param_1 + 0x1d)) {
      pfVar7 = (float *)((int)param_1 + 0x21);
      do {
        fVar1 = *(float *)((int)param_1 + 0x91) -
                (float)(int)local_10 * *(float *)((int)param_1 + 0x7d);
        if (fVar1 < _DAT_0079034c) {
          if (_DAT_0079034c < *pfVar7) {
            uVar10 = *(int *)((int)param_1 + 0x19) * (int)local_10;
            iVar6 = *(int *)((int)param_1 + 0x19) + uVar10;
            if (*param_1 != 0) {
              for (; (int)uVar10 < iVar6; uVar10 = uVar10 + 1) {
                iVar11 = *param_1;
                if ((uVar10 < *(uint *)(iVar11 + 0xc)) &&
                   (iVar11 = *(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c), iVar11 != 0))
                {
                  *(undefined4 *)(iVar11 + 8) = 0;
                }
              }
            }
          }
        }
        else if (*pfVar7 <= _DAT_0079034c) {
          uVar10 = *(int *)((int)param_1 + 0x19) * (int)local_10;
          iVar6 = *(int *)((int)param_1 + 0x19) + uVar10;
          if (*param_1 != 0) {
            for (; (int)uVar10 < iVar6; uVar10 = uVar10 + 1) {
              iVar11 = *param_1;
              if ((uVar10 < *(uint *)(iVar11 + 0xc)) &&
                 (iVar11 = *(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
                *(undefined4 *)(iVar11 + 8) = 1;
              }
            }
          }
        }
        local_10 = (float)((int)local_10 + 1);
        *pfVar7 = fVar1;
        pfVar7 = pfVar7 + 1;
      } while ((int)local_10 < *(int *)((int)param_1 + 0x1d));
    }
    break;
  case 3:
    iVar6 = FUN_006aac70(*(int *)((int)param_1 + 0x19) << 3);
    fVar1 = *(float *)((int)param_1 + 0x6d) - *(float *)((int)param_1 + 0x69);
    *(int *)((int)param_1 + 0x39) = iVar6;
    *(undefined4 *)((int)param_1 + 0x31) = 0;
    bVar4 = fVar1 != _DAT_0079034c;
    *(undefined4 *)((int)param_1 + 0x35) = 0;
    if (bVar4) {
      iVar11 = *(int *)((int)param_1 + 0x19);
      local_10 = 0.0;
      fVar2 = *(float *)((int)param_1 + 0x89);
      if (0 < iVar11) {
        do {
          *(float *)(iVar6 + (int)local_10 * 4) =
               (float)(int)local_10 * (fVar1 / (float)(iVar11 + -1)) +
               *(float *)((int)param_1 + 0x69);
          *(float *)(*(int *)((int)param_1 + 0x39) +
                    ((int)local_10 + *(int *)((int)param_1 + 0x19)) * 4) =
               (float)(int)local_10 * (fVar2 / (float)iVar11);
          iVar6 = *(int *)((int)param_1 + 0x39);
          if (*(float *)((int)param_1 + 0x45) < *(float *)(iVar6 + (int)local_10 * 4)) {
            *(int *)((int)param_1 + 0x35) = *(int *)((int)param_1 + 0x35) + 1;
          }
          else {
            *(int *)((int)param_1 + 0x31) = *(int *)((int)param_1 + 0x31) + 1;
          }
          local_10 = (float)((int)local_10 + 1);
        } while ((int)local_10 < *(int *)((int)param_1 + 0x19));
      }
    }
    bVar4 = *(float *)((int)param_1 + 0x81) != _DAT_0079034c;
    *(undefined4 *)((int)param_1 + 0x71) = 0x40490fdb;
    if (bVar4) {
      lVar12 = __ftol();
      local_14 = (int)lVar12;
      if (local_14 < 1) {
        local_14 = 1;
      }
      *(float *)((int)param_1 + 0x81) = _DAT_0079d1a4 / (float)local_14;
    }
    iVar6 = *(int *)((int)param_1 + 0x1d);
    *(undefined4 *)((int)param_1 + 0x79) = 0;
    fVar1 = _DAT_0079d1a4 / (float)iVar6;
    *(int *)((int)param_1 + 0x99) = iVar6 * 4;
    *(float *)((int)param_1 + 0x7d) = fVar1;
    *(float *)((int)param_1 + 0x75) = _DAT_0079c5a4 / (float)(iVar6 * 3);
    if (*param_1 != 0) {
      iVar6 = *(int *)(*param_1 + 0xc);
      uVar10 = 0;
      if (0 < iVar6) {
        do {
          iVar11 = *param_1;
          if (uVar10 < *(uint *)(iVar11 + 0xc)) {
            puVar5 = (undefined4 *)(*(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c));
          }
          else {
            puVar5 = (undefined4 *)0x0;
          }
          *(undefined1 *)(puVar5 + 3) = 0;
          *(undefined4 *)((int)puVar5 + 0x21) = 0;
          if ((int)uVar10 < *(int *)((int)param_1 + 0x1d) * 2) {
            uVar8 = *(undefined4 *)((int)param_1 + 0x25);
          }
          else {
            uVar8 = *(undefined4 *)((int)param_1 + 0x29);
          }
          *puVar5 = uVar8;
          if (uVar10 == iVar6 - 1U) {
            *puVar5 = *(undefined4 *)((int)param_1 + 0x25);
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar6);
      }
    }
    uVar8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    *(undefined4 *)((int)param_1 + 0x2d) = 0;
    *(undefined4 *)((int)param_1 + 5) = uVar8;
    break;
  case 4:
    *(undefined4 *)((int)param_1 + 0x5d) = DAT_007d1b7c;
    local_8 = _DAT_0079c5a4 / (float)*(int *)((int)param_1 + 0x19);
    *(undefined4 *)((int)param_1 + 0x61) = DAT_007d1b80;
    *(float *)((int)param_1 + 0x75) = _DAT_007d1b8c * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x79) = _DAT_007d1b90 * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x65) = _DAT_007d1b84 * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x6d) = _DAT_007d1b88 * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x7d) = _DAT_007d1b94 * _DAT_0079d1a4;
    *(float *)((int)param_1 + 0x81) = _DAT_007d1b98 * _DAT_0079d1a4;
    *(undefined4 *)((int)param_1 + 0x85) = DAT_007d1b9c;
    *(undefined4 *)((int)param_1 + 0x89) = DAT_007d1ba0;
    if ((*param_1 != 0) && (iVar6 = *(int *)(*param_1 + 0xc), iVar6 != 0)) {
      uVar10 = 0;
      local_10 = 0.0;
      local_8 = _DAT_0079c5a4 / (float)*(int *)((int)param_1 + 0x1d);
      if (0 < *(int *)((int)param_1 + 0x1d)) {
        do {
          iVar11 = *param_1;
          if ((uVar10 < *(uint *)(iVar11 + 0xc)) &&
             (iVar11 = *(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
            *(float *)(iVar11 + 0x21) = local_10;
            *(undefined4 *)(iVar11 + 0x25) = *(undefined4 *)((int)param_1 + 0x6d);
            *(undefined4 *)(iVar11 + 8) = 1;
          }
          uVar9 = *(int *)((int)param_1 + 0x1d) + uVar10;
          iVar11 = *param_1;
          if ((uVar9 < *(uint *)(iVar11 + 0xc)) &&
             (iVar11 = *(int *)(iVar11 + 8) * uVar9 + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
            *(float *)(iVar11 + 0x21) = local_10;
            *(undefined4 *)(iVar11 + 0x25) = *(undefined4 *)((int)param_1 + 0x6d);
            *(undefined4 *)((int)param_1 + 0x71) = *(undefined4 *)((int)param_1 + 0x6d);
            uVar9 = FUN_0072e6c0();
            *(undefined4 *)(iVar11 + 8) = 1;
            *(undefined4 *)(iVar11 + 0x1d) = 7;
            *(int *)(iVar11 + 0x19) = (int)uVar9 % 7;
          }
          local_10 = local_10 + local_8;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < *(int *)((int)param_1 + 0x1d));
      }
      for (uVar10 = *(int *)((int)param_1 + 0x1d) * 2; (int)uVar10 < iVar6; uVar10 = uVar10 + 1) {
        iVar11 = *param_1;
        if (uVar10 < *(uint *)(iVar11 + 0xc)) {
          iVar11 = *(int *)(iVar11 + 8) * uVar10 + *(int *)(iVar11 + 0x1c);
        }
        else {
          iVar11 = 0;
        }
        uVar9 = FUN_0072e6c0();
        local_8 = (float)((int)uVar9 % 0x168) * _DAT_0079d1a8;
        if (iVar11 != 0) {
          *(float *)(iVar11 + 0x21) = local_8;
          uVar9 = FUN_0072e6c0();
          fVar1 = *(float *)((int)param_1 + 0x79);
          fVar2 = *(float *)((int)param_1 + 0x6d);
          fVar3 = *(float *)((int)param_1 + 0x6d);
          *(undefined4 *)(iVar11 + 0x19) = 0;
          *(float *)(iVar11 + 0x25) =
               ((fVar1 - fVar2) * (float)((int)uVar9 % (iVar6 + 1))) / (float)iVar6 + fVar3;
          uVar8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
          *(undefined4 *)(iVar11 + 8) = 1;
          *(undefined4 *)(iVar11 + 0x35) = uVar8;
        }
      }
    }
  }
  iVar6 = *(int *)((int)param_1 + 0x11);
  if (((iVar6 == 0) || (iVar6 == 1)) && (*param_1 != 0)) {
    uVar10 = *(uint *)(*param_1 + 0xc);
    if (iVar6 == 1) {
      iVar6 = *(int *)((int)param_1 + 0x1d);
      iVar11 = 0;
      uVar10 = uVar10 - iVar6;
      fVar1 = _DAT_0079c5a4 / (float)iVar6;
      fVar2 = fVar1 * _DAT_00790784;
      uVar9 = uVar10;
      if (0 < iVar6) {
        do {
          iVar6 = *param_1;
          if ((uVar9 < *(uint *)(iVar6 + 0xc)) &&
             (iVar6 = *(int *)(iVar6 + 8) * uVar9 + *(int *)(iVar6 + 0x1c), iVar6 != 0)) {
            *(float *)(iVar6 + 0x21) = fVar2;
            fVar2 = fVar2 + fVar1;
            *(undefined4 *)(iVar6 + 8) = 1;
            *(undefined4 *)(iVar6 + 0x19) = 3;
          }
          iVar11 = iVar11 + 1;
          uVar9 = uVar9 + 1;
        } while (iVar11 < *(int *)((int)param_1 + 0x1d));
      }
    }
    uVar9 = 0;
    fVar1 = _DAT_0079034c;
    if (0 < (int)uVar10) {
      do {
        iVar6 = *param_1;
        if ((uVar9 < *(uint *)(iVar6 + 0xc)) &&
           (iVar6 = *(int *)(iVar6 + 8) * uVar9 + *(int *)(iVar6 + 0x1c), iVar6 != 0)) {
          *(float *)(iVar6 + 0x21) = fVar1;
          fVar1 = fVar1 + local_8;
          *(undefined4 *)(iVar6 + 8) = 1;
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar10);
    }
  }
  return local_c;
}

