
undefined4 __fastcall FUN_0060dab0(int param_1)

{
  short *psVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar8 = *(int *)(param_1 + 0x244);
  uVar6 = 2;
  if ((iVar8 != 0) && (*(int *)(param_1 + 0x240) == 1)) {
    iVar7 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)(iVar8 + 0x28);
    *(int *)(iVar8 + 0x1c) = *(int *)(iVar8 + 0x1c) + 6;
    iVar9 = *(int *)(*(int *)(param_1 + 0x244) + 0x18) * iVar7;
    *(int *)(*(int *)(param_1 + 0x244) + 0x14) = *(int *)(param_1 + 0x1fd) + iVar9;
    iVar8 = *(int *)(param_1 + 0x244);
    if (iVar9 < *(int *)(iVar8 + 0x1c)) {
      local_14 = (*(int *)(iVar8 + 0x10) * iVar9) / *(int *)(iVar8 + 0x1c);
    }
    else {
      local_14 = *(int *)(iVar8 + 0x10);
    }
    *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
    iVar8 = *(int *)(param_1 + 0x244);
    if (*(int *)(iVar8 + 0x20) <= *(int *)(iVar8 + 0x24)) {
      *(undefined4 *)(iVar8 + 0x20) = 0;
    }
    iVar8 = *(int *)(param_1 + 0x244);
    local_18 = 0;
    if (0 < *(int *)(iVar8 + 0xc)) {
      do {
        iVar8 = *(int *)(iVar8 + 0x10);
        local_c = 0;
        if (0 < local_14) {
          local_10 = 0;
          do {
            iVar9 = *(int *)(param_1 + 0x234);
            uVar10 = local_c + iVar8 * local_18;
            if ((uVar10 < *(uint *)(iVar9 + 0xc)) &&
               (iVar9 = *(int *)(iVar9 + 8) * uVar10 + *(int *)(iVar9 + 0x1c), iVar9 != 0)) {
              iVar4 = *(int *)(param_1 + 0x244);
              iVar5 = *(int *)(iVar4 + 0x14);
              psVar1 = (short *)(*(int *)(iVar4 + 8) + (local_10 / *(int *)(iVar4 + 0x10)) * 4);
              iVar4 = *(int *)(iVar4 + 0x1c);
              sVar2 = *psVar1;
              fcos((float10)*(float *)(iVar9 + 0x2c));
              sVar3 = psVar1[1];
              lVar11 = __ftol();
              fsin((float10)*(float *)(iVar9 + 0x2c));
              *(int *)(iVar9 + 0xc) = (int)lVar11 + *(int *)(iVar9 + 0x18);
              lVar11 = __ftol();
              *(int *)(iVar9 + 0x10) = (int)lVar11 + *(int *)(iVar9 + 0x1c);
              *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x20) + (int)sVar3 / (iVar7 * 0x50 + 200);
              if (iVar5 - (iVar4 * sVar2) / 10000 < *(int *)(param_1 + 0x1f9)) {
                if ((*(int *)(iVar9 + 4) == 0) && (-1 < (int)*(uint *)(iVar9 + 0x3c))) {
                  *(int *)(iVar9 + 0x24) = *(int *)(*(int *)(param_1 + 0x244) + 0x20) + local_c;
                  FUN_006eaaa0(DAT_00807598,*(uint *)(iVar9 + 0x3c),0);
                  *(undefined4 *)(iVar9 + 4) = 1;
                }
                if (*(int *)(iVar9 + 0x28) < *(int *)(iVar9 + 0x24)) {
                  *(int *)(iVar9 + 0x24) = *(int *)(iVar9 + 0x24) % *(int *)(iVar9 + 0x28);
                }
              }
              else if ((*(int *)(iVar9 + 4) != 0) && (-1 < (int)*(uint *)(iVar9 + 0x3c))) {
                FUN_006eab60(DAT_00807598,*(uint *)(iVar9 + 0x3c));
                *(undefined4 *)(iVar9 + 4) = 0xffffffff;
              }
            }
            local_c = local_c + 1;
            local_10 = local_10 + 0x33;
          } while (local_c < local_14);
        }
        iVar8 = *(int *)(param_1 + 0x244);
        local_18 = local_18 + 1;
      } while (local_18 < *(int *)(iVar8 + 0xc));
    }
    uVar6 = 1;
  }
  return uVar6;
}

