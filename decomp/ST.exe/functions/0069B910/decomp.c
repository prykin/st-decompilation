
int FUN_0069b910(int param_1,int param_2,int *param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_8;

  local_8 = 0;
  local_28 = 0;
  iVar8 = 0;
  if (0 < param_4) {
    iVar9 = param_2 * 3;
    while (iVar8 = local_8, 0 < iVar9) {
      uVar5 = Library::MSVCRT::FUN_0072e6c0();
      local_18 = (int)uVar5 % param_2;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (param_6 < *(int *)(local_18 * 0x40 + 0x2c + param_1)) {
        iVar8 = local_18 * 0x40;
        bVar4 = true;
        iVar1 = *(int *)(iVar8 + 0x30 + param_1);
        iVar2 = *(int *)(iVar8 + 0x38 + param_1);
        iVar8 = iVar8 + param_1;
        iVar3 = *(int *)(iVar8 + 0x3c);
        iVar7 = *(int *)(iVar8 + 0x34);
        if ((local_8 != 0) && (local_14 = 0, 0 < local_8)) {
          local_1c = param_3;
          do {
            if (*local_1c == local_18) {
              bVar4 = false;
              break;
            }
            iVar6 = *local_1c * 0x40 + param_1;
            iVar6 = FUN_006acf90((iVar2 - iVar1) / 2 + iVar1,(iVar3 - iVar7) / 2 + iVar7,
                                 (*(int *)(iVar6 + 0x38) - *(int *)(iVar6 + 0x30)) / 2 +
                                 *(int *)(iVar6 + 0x30),
                                 (*(int *)(iVar6 + 0x3c) - *(int *)(iVar6 + 0x34)) / 2 +
                                 *(int *)(iVar6 + 0x34));
            if (iVar6 < param_5) {
              bVar4 = false;
              break;
            }
            local_14 = local_14 + 1;
            local_1c = local_1c + 1;
          } while (local_14 < local_8);
        }
        if (!bVar4) {
          if (iVar9 != 1 && -1 < iVar9 + -1) {
            return local_8;
          }
          local_24 = 0;
          local_20 = local_18;
          if (param_2 < 1) {
            return local_8;
          }
          do {
            local_20 = local_20 + 1;
            if (param_6 <= *(int *)(iVar8 + 0x2c)) {
              iVar9 = *(int *)(iVar8 + 0x38);
              iVar1 = *(int *)(iVar8 + 0x30);
              bVar4 = true;
              iVar2 = *(int *)(iVar8 + 0x3c);
              iVar3 = *(int *)(iVar8 + 0x34);
              local_14 = 0;
              if (local_8 < 1) {
LAB_0069bb27:
                local_18 = local_20;
                break;
              }
              local_1c = param_3;
              while (*local_1c != local_18) {
                iVar7 = param_1 + *local_1c * 0x40;
                iVar7 = FUN_006acf90(iVar9 / 2 + iVar1,iVar2 / 2 + iVar3,
                                     *(int *)(iVar7 + 0x38) / 2 + *(int *)(iVar7 + 0x30),
                                     *(int *)(iVar7 + 0x3c) / 2 + *(int *)(iVar7 + 0x34));
                if (iVar7 < param_5) break;
                local_14 = local_14 + 1;
                local_1c = local_1c + 1;
                if (local_8 <= local_14) goto LAB_0069bb27;
              }
              bVar4 = false;
            }
            local_24 = local_24 + 1;
          } while (local_24 < param_2);
          if (!bVar4) {
            return local_8;
          }
        }
        param_3[local_8] = local_18;
        local_8 = local_8 + 1;
        local_28 = local_28 + 1;
        iVar9 = param_2 * 3;
        if (param_4 <= local_28) {
          return local_8;
        }
      }
      else {
        iVar9 = iVar9 + -1;
      }
    }
  }
  return iVar8;
}

