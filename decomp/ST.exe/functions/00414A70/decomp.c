
void FUN_00414a70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 *local_1c;
  int local_10;
  int local_8;

  if (param_1 == 0) {
    local_10 = 0;
    local_1c = DAT_007f4d50;
  }
  else {
    local_10 = 0x14;
    local_1c = DAT_007f4d54;
  }
  DAT_007f4d18 = Library::DKW::LIB::FUN_006aac70(param_2 * 0x18);
  iVar10 = 1;
  DAT_007f4d44 = 0;
  if (0 < DAT_007f4d2c / 2) {
    do {
      iVar1 = DAT_007f4d34 + -1;
      iVar9 = DAT_007f4d34;
      if (iVar10 <= iVar1) {
        iVar9 = iVar10;
      }
      iVar9 = 1 - iVar9;
      if (iVar10 <= iVar1) {
        iVar1 = iVar10 + -1;
      }
      if (iVar9 <= iVar1) {
        iVar2 = -iVar10;
        iVar5 = iVar10;
        do {
          while (iVar5 = iVar5 + -1, iVar3 = iVar10, iVar2 <= iVar5) {
            iVar3 = FUN_006aadd0(iVar10,iVar5,iVar9,0,0,0);
            local_8 = iVar3 * 4;
            if ((param_1 != 0) && (iVar5 == iVar10 + -1)) {
              local_8 = local_8 + -1;
            }
            iVar4 = FUN_006aae60(-0x14,local_10,0,iVar10,iVar5,iVar9);
            FUN_00415050(iVar10,iVar5,iVar9,local_8,iVar4,iVar3);
            if (param_2 <= DAT_007f4d44) goto cf_break_loop_00414E8A;
          }
          while (iVar3 = iVar3 + -1, iVar2 <= iVar3) {
            iVar5 = FUN_006aadd0(iVar3,iVar2,iVar9,0,0,0);
            local_8 = iVar5 * 4;
            if (param_1 == 0) {
              if (iVar3 == 0) {
                local_8 = local_8 + -2;
              }
              else if (iVar3 == -1) {
LAB_00414bc1:
                local_8 = local_8 + -1;
              }
            }
            else if (iVar3 == iVar2) {
              local_8 = local_8 + -2;
            }
            else if (iVar3 == iVar2 + 1) goto LAB_00414bc1;
            iVar4 = FUN_006aae60(-0x14,local_10,0,iVar3,iVar2,iVar9);
            FUN_00415050(iVar3,iVar2,iVar9,local_8,iVar4,iVar5);
            if (param_2 <= DAT_007f4d44) goto cf_break_loop_00414E8A;
          }
          iVar5 = iVar2 + 1;
          for (iVar3 = iVar5; iVar3 <= iVar10; iVar3 = iVar3 + 1) {
            iVar4 = FUN_006aadd0(iVar2,iVar3,iVar9,0,0,0);
            local_8 = iVar4 * 4;
            if (param_1 == 0) {
              if (iVar10 == 1) {
LAB_00414c44:
                local_8 = local_8 + -1;
              }
            }
            else if (iVar3 == iVar5) goto LAB_00414c44;
            iVar6 = FUN_006aae60(-0x14,local_10,0,iVar2,iVar3,iVar9);
            FUN_00415050(iVar2,iVar3,iVar9,local_8,iVar6,iVar4);
            if (param_2 <= DAT_007f4d44) goto cf_break_loop_00414E8A;
          }
          for (; iVar5 <= iVar10; iVar5 = iVar5 + 1) {
            iVar3 = FUN_006aadd0(iVar5,iVar10,iVar9,0,0,0);
            local_8 = iVar3 * 4;
            if (param_1 == 0) {
              if (iVar5 == 0) {
                local_8 = local_8 + -2;
              }
              else if (iVar5 == -1) {
LAB_00414ccc:
                local_8 = local_8 + -1;
              }
            }
            else if (iVar5 == iVar10) {
              local_8 = local_8 + -2;
            }
            else if (iVar5 == iVar10 + -1) goto LAB_00414ccc;
            iVar4 = FUN_006aae60(-0x14,local_10,0,iVar5,iVar10,iVar9);
            FUN_00415050(iVar5,iVar10,iVar9,local_8,iVar4,iVar3);
            if (param_2 <= DAT_007f4d44) goto cf_break_loop_00414E8A;
          }
          iVar9 = iVar9 + 1;
          iVar5 = iVar10;
        } while (iVar9 <= iVar1);
      }
      if (iVar10 <= DAT_007f4d34 + -1) {
        iVar2 = -iVar10;
        iVar1 = iVar2;
        iVar9 = iVar2;
        iVar5 = iVar2;
        if (-iVar10 == iVar10 || SBORROW4(iVar2,iVar10) != iVar10 * -2 < 0) {
          do {
            for (; iVar1 <= iVar10; iVar1 = iVar1 + 1) {
              iVar3 = FUN_006aadd0(iVar1,iVar5,iVar10,0,0,0);
              local_8 = iVar3 * 4;
              if (param_1 == 0) {
                if (iVar1 == 0) {
                  local_8 = local_8 + -2;
                }
                else if (iVar1 == -1) {
                  local_8 = local_8 + -1;
                }
              }
              else {
                uVar8 = iVar5 - iVar1 >> 0x1f;
                iVar4 = (iVar5 - iVar1 ^ uVar8) - uVar8;
                if (iVar4 < 2) {
                  local_8 = local_8 + -2 + iVar4;
                }
              }
              iVar4 = FUN_006aae60(-0x14,local_10,0,iVar1,iVar5,iVar10);
              FUN_00415050(iVar1,iVar5,iVar10,local_8,iVar4,iVar3);
              if (param_2 <= DAT_007f4d44) goto cf_break_loop_00414E8A;
            }
            iVar5 = iVar5 + 1;
            iVar1 = iVar2;
          } while (iVar5 <= iVar10);
        }
        for (; iVar1 = iVar2, iVar9 <= iVar10; iVar9 = iVar9 + 1) {
          for (; iVar1 <= iVar10; iVar1 = iVar1 + 1) {
            iVar5 = FUN_006aadd0(iVar1,iVar9,iVar2,0,0,0);
            local_8 = iVar5 * 4;
            if (param_1 == 0) {
              if (iVar1 == 0) {
                local_8 = local_8 + -2;
              }
              else if (iVar1 == -1) {
                local_8 = local_8 + -1;
              }
            }
            else {
              uVar8 = iVar9 - iVar1 >> 0x1f;
              iVar3 = (iVar9 - iVar1 ^ uVar8) - uVar8;
              if (iVar3 < 2) {
                local_8 = local_8 + -2 + iVar3;
              }
            }
            iVar3 = FUN_006aae60(-0x14,local_10,0,iVar1,iVar9,iVar2);
            FUN_00415050(iVar1,iVar9,iVar2,local_8,iVar3,iVar5);
            if (param_2 <= DAT_007f4d44) goto cf_break_loop_00414E8A;
          }
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 <= DAT_007f4d2c / 2);
  }
cf_break_loop_00414E8A:
  iVar10 = 0;
  *local_1c = 0;
  local_1c[1] = 0;
  local_1c[2] = 0;
  local_1c[3] = 0;
  if (0 < DAT_007f4d44) {
    puVar7 = local_1c;
    iVar1 = 0;
    do {
      local_1c = puVar7 + 4;
      iVar10 = iVar10 + 1;
      *local_1c = *(undefined1 *)(iVar1 + DAT_007f4d18);
      puVar7[5] = *(undefined1 *)(iVar1 + 4 + DAT_007f4d18);
      puVar7[6] = *(undefined1 *)(iVar1 + 8 + DAT_007f4d18);
      puVar7[7] = *(undefined1 *)(iVar1 + 0x10 + DAT_007f4d18);
      puVar7 = local_1c;
      iVar1 = iVar1 + 0x18;
    } while (iVar10 < DAT_007f4d44);
  }
  local_1c[4] = 0x7f;
  local_1c[5] = 0x7f;
  local_1c[6] = 0x7f;
  local_1c[7] = 0xff;
  FreeAndNull((void **)&DAT_007f4d18);
  return;
}

