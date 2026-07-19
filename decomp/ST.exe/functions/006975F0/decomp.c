
void __fastcall FUN_006975f0(void *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  int local_20;
  uint local_18;
  int *local_10;
  int local_8;
  
  iVar4 = *(int *)((int)param_1 + 0x5853);
  if (iVar4 != 0) {
    uVar1 = *(uint *)(iVar4 + 0xc);
    iVar7 = 0;
    uVar8 = 0;
    local_8 = 0;
    if (0 < (int)uVar1) {
      do {
        if (uVar8 < uVar1) {
          piVar3 = (int *)(*(int *)(iVar4 + 8) * uVar8 + *(int *)(iVar4 + 0x1c));
        }
        else {
          piVar3 = (int *)0x0;
        }
        iVar6 = *piVar3;
        if ((((iVar6 < 2) && ((char)piVar3[1] == '\0')) && (0 < *(int *)((int)piVar3 + 5))) &&
           (((*(int *)((int)piVar3 + 0xd) == 1 && (iVar6 == 0)) ||
            ((*(int *)((int)piVar3 + 0xd) == 2 && (iVar6 == 1)))))) {
          if ((piVar3 != (int *)0x0) && (*(int *)((int)piVar3 + 0x11) < 10)) {
            iVar7 = iVar7 + 1;
          }
          local_8 = local_8 + *(int *)((int)piVar3 + 0x11);
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    iVar4 = (local_8 * 100) / *(int *)((int)param_1 + 0x582f);
    if (*(int *)((int)param_1 + 0x5843) < iVar4) {
      local_20 = 9;
      do {
        uVar8 = uVar1;
        if (0x117 < local_20) {
          return;
        }
        while ((uVar8 = uVar8 - 1, -1 < (int)uVar8 &&
               (iVar4 = (local_8 * 100) / *(int *)((int)param_1 + 0x582f),
               *(int *)((int)param_1 + 0x5843) < iVar4))) {
          iVar6 = *(int *)((int)param_1 + 0x5853);
          if (uVar8 < *(uint *)(iVar6 + 0xc)) {
            local_10 = (int *)(*(int *)(iVar6 + 8) * uVar8 + *(int *)(iVar6 + 0x1c));
          }
          else {
            local_10 = (int *)0x0;
          }
          if (((((char)local_10[1] == '\0') && (0 < *(int *)((int)local_10 + 5))) &&
              (((*(int *)((int)local_10 + 0xd) == 1 && (*local_10 == 0)) ||
               ((*(int *)((int)local_10 + 0xd) == 2 && (*local_10 == 1)))))) &&
             ((local_10 != (int *)0x0 &&
              (((*(int *)((int)local_10 + 0x11) <= local_20 &&
                (uVar5 = Library::MSVCRT::FUN_0072e6c0(),
                (int)uVar5 % (int)(((iVar7 < 4) - 1 & 3) + 2) != 0)) &&
               (iVar6 = *(int *)((int)local_10 + 0x15), iVar6 != 0)))))) {
            local_18 = 0;
            if (0 < *(int *)(iVar6 + 0xc)) {
              bVar9 = *(int *)(iVar6 + 0xc) != 0;
              do {
                if (bVar9) {
                  iVar6 = *(int *)(iVar6 + 8) * local_18 + *(int *)(iVar6 + 0x1c);
                }
                else {
                  iVar6 = 0;
                }
                if (*(char *)(iVar6 + 1) == '\0') {
                  iVar2 = *(int *)((int)param_1 + 0x5833);
                  *(undefined1 *)(iVar6 + 1) = 1;
                  thunk_FUN_006a0e30(param_1,*(int *)(iVar6 + 2) % iVar2,*(int *)(iVar6 + 2) / iVar2
                                     ,(uint)(*(int *)((int)local_10 + 0xd) != 1),-1);
                  local_8 = local_8 + -1;
                }
                iVar6 = *(int *)((int)local_10 + 0x15);
                local_18 = local_18 + 1;
                bVar9 = local_18 < *(uint *)(iVar6 + 0xc);
              } while ((int)local_18 < (int)*(uint *)(iVar6 + 0xc));
            }
          }
        }
        local_20 = local_20 + 9;
      } while (*(int *)((int)param_1 + 0x5843) < iVar4);
    }
  }
  return;
}

