
undefined4 __fastcall FUN_006367d0(int *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined3 extraout_var_00;
  int iVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  short local_10;
  int local_c;
  int local_8;
  
  bVar1 = false;
  if (param_1[0xb] != 0) {
    uVar10 = PTR_00802a38->field_00E4 - param_1[0xc];
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        iVar2 = (param_1[8] * uVar10 - (uVar10 * uVar10 * 0x29) / 100) + param_1[6];
        param_1[7] = iVar2;
        local_c = 0;
        if (0 < param_1[2]) {
          do {
            iVar11 = *param_1;
            local_8 = 0;
            uVar8 = iVar11 * local_c;
            if (local_c == param_1[9]) {
              if (0 < iVar11) {
                do {
                  iVar11 = param_1[0xb];
                  if ((uVar8 < *(uint *)(iVar11 + 0xc)) &&
                     (iVar11 = *(int *)(iVar11 + 8) * uVar8 + *(int *)(iVar11 + 0x1c), iVar11 != 0))
                  {
                    if (iVar2 < 300) {
                      uVar3 = Library::MSVCRT::FUN_0072e6c0();
                      uVar3 = uVar3 % ((uVar10 * 3 >> 1) + 0x1f);
                      uVar4 = Library::MSVCRT::FUN_0072e6c0();
                      uVar4 = uVar4 & 0x80000001;
                      if ((int)uVar4 < 0) {
                        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                      }
                      iVar5 = (-(uint)(uVar4 != 0) & 2) - 1;
                      *(int *)(iVar11 + 0xe) =
                           (*(int *)(iVar11 + 0x26) * param_1[7]) / 10000 +
                           (int)(*(int *)(iVar11 + 0x2a) * iVar5 * uVar3) / 10000 + param_1[3];
                      *(int *)(iVar11 + 0x12) =
                           ((*(int *)(iVar11 + 0x2a) * param_1[7]) / 10000 -
                           (int)(*(int *)(iVar11 + 0x26) * iVar5 * uVar3) / 10000) + param_1[4];
                      iVar5 = param_1[5];
                      *(undefined4 *)(iVar11 + 0x1a) = 4;
                      *(int *)(iVar11 + 0x16) = iVar5;
                      uVar3 = uVar10 / 6 + 4;
                      *(uint *)(iVar11 + 0x1e) = uVar3;
                      if (10 < uVar3) {
                        *(undefined4 *)(iVar11 + 0x1e) = 10;
                      }
                      iVar5 = *(int *)(iVar11 + 0xe);
                      *(int *)(iVar11 + 0x22) = param_1[2] + 4;
                      sVar6 = (short)(iVar5 >> 0x1f);
                      if (iVar5 < 0) {
                        local_10 = (((short)(iVar5 / 0xc9) + sVar6) -
                                   (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
                      }
                      else {
                        local_10 = ((short)(iVar5 / 0xc9) + sVar6) -
                                   (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
                      }
                      iVar5 = *(int *)(iVar11 + 0x12);
                      sVar6 = (short)(iVar5 >> 0x1f);
                      if (iVar5 < 0) {
                        sVar6 = (((short)(iVar5 / 0xc9) + sVar6) -
                                (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
                      }
                      else {
                        sVar6 = ((short)(iVar5 / 0xc9) + sVar6) -
                                (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
                      }
                      iVar5 = *(int *)(iVar11 + 0x16);
                      sVar7 = (short)(iVar5 >> 0x1f);
                      if (iVar5 < 0) {
                        sVar7 = (((short)(iVar5 / 200) + sVar7) -
                                (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
                      }
                      else {
                        sVar7 = ((short)(iVar5 / 200) + sVar7) -
                                (short)((longlong)iVar5 * 0x51eb851f >> 0x3f);
                      }
                      bVar1 = thunk_FUN_004961b0(local_10,sVar6,sVar7);
                      if (CONCAT31(extraout_var,bVar1) == 0) {
                        *(undefined4 *)(iVar11 + 8) = 0;
                      }
                      else {
                        *(undefined4 *)(iVar11 + 8) = 1;
                      }
                      *(undefined1 *)(iVar11 + 0xc) = 1;
                      bVar1 = true;
                    }
                    else {
                      *(undefined4 *)(iVar11 + 8) = 0;
                    }
                  }
                  local_8 = local_8 + 1;
                  uVar8 = uVar8 + 1;
                } while (local_8 < *param_1);
              }
            }
            else if (0 < iVar11) {
              do {
                iVar11 = param_1[0xb];
                if (((uVar8 < *(uint *)(iVar11 + 0xc)) &&
                    (iVar11 = *(int *)(iVar11 + 8) * uVar8 + *(int *)(iVar11 + 0x1c), iVar11 != 0))
                   && (*(int *)(iVar11 + 8) == 1)) {
                  *(undefined1 *)(iVar11 + 0xc) = 0;
                  iVar5 = *(int *)(iVar11 + 0x1e) + 1;
                  *(int *)(iVar11 + 0x1e) = iVar5;
                  if (iVar5 < *(int *)(iVar11 + 0x22)) {
                    *(undefined4 *)(iVar11 + 8) = 1;
                    bVar1 = true;
                  }
                  else {
                    *(undefined4 *)(iVar11 + 8) = 0;
                  }
                }
                local_8 = local_8 + 1;
                uVar8 = uVar8 + 1;
              } while (local_8 < *param_1);
            }
            local_c = local_c + 1;
          } while (local_c < param_1[2]);
        }
        iVar2 = param_1[9];
        param_1[9] = iVar2 + 1;
        if (param_1[2] <= iVar2 + 1) {
          param_1[9] = 0;
        }
        if (!bVar1) {
          return 1;
        }
        return 0;
      }
      if (iVar2 != 2) {
        return 1;
      }
    }
    iVar2 = (param_1[8] * uVar10 - (uVar10 * uVar10 * 0x21) / 100) + param_1[6];
    param_1[7] = iVar2;
    local_c = 0;
    if (0 < param_1[2]) {
      do {
        iVar11 = *param_1;
        uVar8 = iVar11 * local_c;
        if (local_c == param_1[9]) {
          local_8 = 0;
          if (0 < iVar11) {
            do {
              iVar11 = param_1[0xb];
              if ((uVar8 < *(uint *)(iVar11 + 0xc)) &&
                 (iVar11 = *(int *)(iVar11 + 8) * uVar8 + *(int *)(iVar11 + 0x1c), iVar11 != 0)) {
                if (iVar2 < 500) {
                  uVar3 = Library::MSVCRT::FUN_0072e6c0();
                  uVar3 = uVar3 % ((uVar10 * 3 >> 1) + 0x1f);
                  uVar4 = Library::MSVCRT::FUN_0072e6c0();
                  uVar4 = uVar4 & 0x80000001;
                  if ((int)uVar4 < 0) {
                    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                  }
                  iVar5 = (-(uint)(uVar4 != 0) & 2) - 1;
                  *(int *)(iVar11 + 0xe) =
                       (*(int *)(iVar11 + 0x26) * param_1[7]) / 10000 +
                       (int)(*(int *)(iVar11 + 0x2a) * iVar5 * uVar3) / 10000 + param_1[3];
                  *(int *)(iVar11 + 0x12) =
                       ((*(int *)(iVar11 + 0x2a) * param_1[7]) / 10000 -
                       (int)(*(int *)(iVar11 + 0x26) * iVar5 * uVar3) / 10000) + param_1[4];
                  *(int *)(iVar11 + 0x16) = param_1[5];
                  *(undefined4 *)(iVar11 + 0x1a) = 4;
                  if (param_1[1] == 0) {
                    uVar3 = uVar10 / 6 + 4;
                    *(uint *)(iVar11 + 0x1e) = uVar3;
                    if (10 < uVar3) {
                      *(undefined4 *)(iVar11 + 0x1e) = 10;
                    }
                    *(int *)(iVar11 + 0x22) = param_1[2] + *(int *)(iVar11 + 0x1e);
                  }
                  else {
                    iVar5 = uVar10 / 3 + 4;
                    *(int *)(iVar11 + 0x1e) = iVar5;
                    *(int *)(iVar11 + 0x22) = iVar5 + param_1[2];
                  }
                  iVar5 = *(int *)(iVar11 + 0xe);
                  *(int *)(iVar11 + 0x22) = param_1[2] + 4;
                  sVar6 = (short)(iVar5 >> 0x1f);
                  if (iVar5 < 0) {
                    local_10 = (((short)(iVar5 / 0xc9) + sVar6) -
                               (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
                  }
                  else {
                    local_10 = ((short)(iVar5 / 0xc9) + sVar6) -
                               (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
                  }
                  iVar5 = *(int *)(iVar11 + 0x12);
                  sVar6 = (short)(iVar5 >> 0x1f);
                  if (iVar5 < 0) {
                    sVar6 = (((short)(iVar5 / 0xc9) + sVar6) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
                  }
                  else {
                    sVar6 = ((short)(iVar5 / 0xc9) + sVar6) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f);
                  }
                  iVar5 = *(int *)(iVar11 + 0x16);
                  sVar7 = (short)(iVar5 >> 0x1f);
                  if (iVar5 < 0) {
                    sVar7 = (((short)(iVar5 / 200) + sVar7) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
                  }
                  else {
                    sVar7 = ((short)(iVar5 / 200) + sVar7) -
                            (short)((longlong)iVar5 * 0x51eb851f >> 0x3f);
                  }
                  bVar1 = thunk_FUN_004961b0(local_10,sVar6,sVar7);
                  if (CONCAT31(extraout_var_00,bVar1) == 0) {
                    *(undefined4 *)(iVar11 + 8) = 0;
                  }
                  else {
                    *(undefined4 *)(iVar11 + 8) = 1;
                  }
                  *(undefined1 *)(iVar11 + 0xc) = 1;
                  bVar1 = true;
                }
                else {
                  *(undefined4 *)(iVar11 + 8) = 0;
                }
              }
              local_8 = local_8 + 1;
              uVar8 = uVar8 + 1;
            } while (local_8 < *param_1);
          }
        }
        else {
          iVar5 = 0;
          if (0 < iVar11) {
            do {
              iVar11 = param_1[0xb];
              if (((uVar8 < *(uint *)(iVar11 + 0xc)) &&
                  (iVar11 = *(int *)(iVar11 + 8) * uVar8 + *(int *)(iVar11 + 0x1c), iVar11 != 0)) &&
                 (*(int *)(iVar11 + 8) == 1)) {
                *(undefined1 *)(iVar11 + 0xc) = 0;
                iVar9 = *(int *)(iVar11 + 0x1e) + 1;
                *(int *)(iVar11 + 0x1e) = iVar9;
                if (iVar9 < *(int *)(iVar11 + 0x22)) {
                  *(undefined4 *)(iVar11 + 8) = 1;
                  bVar1 = true;
                }
                else {
                  *(undefined4 *)(iVar11 + 8) = 0;
                }
              }
              iVar5 = iVar5 + 1;
              uVar8 = uVar8 + 1;
            } while (iVar5 < *param_1);
          }
        }
        local_c = local_c + 1;
      } while (local_c < param_1[2]);
    }
    iVar2 = param_1[9];
    param_1[9] = iVar2 + 1;
    if (param_1[2] <= iVar2 + 1) {
      param_1[9] = 0;
    }
    if (bVar1) {
      return 0;
    }
  }
  return 1;
}

