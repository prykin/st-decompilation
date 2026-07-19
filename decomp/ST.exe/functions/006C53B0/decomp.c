
int FUN_006c53b0(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  int local_50;
  uint local_40;
  uint local_3c;
  int local_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  int local_8;
  ushort uVar12;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d9b0;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_2c = 0;
  if ((*(uint *)(param_1 + 0xc) & 0x1100) == 0x100) {
    return 0;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  ExceptionList = &local_14;
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    ExceptionList = &local_14;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  iVar2 = param_2 + *(int *)(param_1 + 0x10);
  iVar9 = param_3 + *(int *)(param_1 + 0x14);
  param_4 = param_4 + *(int *)(param_1 + 0x10);
  param_5 = param_5 + *(int *)(param_1 + 0x14);
  local_40 = 0x80000000;
  local_3c = *(uint *)(param_1 + 0x4a0);
  uVar1 = *(uint *)(param_1 + 0x4a4);
  iVar6 = param_4 - iVar2;
  iVar3 = iVar2;
  iVar10 = iVar9;
  if (iVar6 < 0) {
    iVar6 = -iVar6;
    local_3c = FUN_006c59e0(local_3c);
    uVar8 = iVar9 - param_5 >> 0x1f;
    iVar3 = (iVar9 - param_5 ^ uVar8) - uVar8;
    if (iVar3 < iVar6) {
      iVar3 = iVar6;
    }
    local_40 = 1 << ((byte)iVar3 & 0x1f);
    iVar3 = param_4;
    iVar10 = param_5;
    param_4 = iVar2;
    param_5 = iVar9;
  }
  uVar8 = param_5 - iVar10;
  bVar11 = (byte)param_6;
  uVar12 = (ushort)param_6;
  if (uVar8 == 0) {
    if ((iVar10 < *(int *)(param_1 + 0x488)) || (*(int *)(param_1 + 0x490) <= param_5))
    goto LAB_006c596b;
    if (iVar3 < *(int *)(param_1 + 0x484)) {
      iVar3 = *(int *)(param_1 + 0x484);
    }
    if (*(int *)(param_1 + 0x48c) <= param_4) {
      param_4 = *(int *)(param_1 + 0x48c) + -1;
    }
    if (param_4 < iVar3) goto LAB_006c596b;
    if ((((*(byte *)(param_1 + 0x49c) & 1) == 0) && ((*(byte *)(param_1 + 0xc) & 4) != 0)) &&
       (*(int *)(param_1 + 0x498) != 7)) {
      local_2c = FUN_006c5210(param_1,iVar3,iVar10,param_4,param_6);
      goto LAB_006c596b;
    }
    local_2c = FUN_006bb8b0(param_1);
    if (local_2c != 0) goto LAB_006c596b;
    uVar8 = (param_4 - iVar3) + 1;
    local_8 = local_2c;
    if (*(int *)(param_1 + 0x20) == 0x10) {
      FUN_006c5a10(param_1,(ushort *)
                           (*(int *)(param_1 + 0x478) * iVar10 + *(int *)(param_1 + 0x474) +
                           iVar3 * 2),uVar8,local_3c,local_40,uVar12,uVar1);
      local_8 = 0xffffffff;
    }
    else {
      FUN_006c5b00(param_1,(byte *)(*(int *)(param_1 + 0x478) * iVar10 + *(int *)(param_1 + 0x474) +
                                   iVar3),uVar8,local_3c,local_40,bVar11,uVar1);
      local_8 = 0xffffffff;
    }
  }
  else if (iVar6 == 0) {
    if ((iVar3 < *(int *)(param_1 + 0x484)) || (*(int *)(param_1 + 0x48c) <= param_4))
    goto LAB_006c596b;
    if ((int)uVar8 < 0) {
      iVar10 = param_5;
      param_5 = iVar9;
    }
    if (iVar10 < *(int *)(param_1 + 0x488)) {
      iVar10 = *(int *)(param_1 + 0x488);
    }
    if (*(int *)(param_1 + 0x490) <= param_5) {
      param_5 = *(int *)(param_1 + 0x490) + -1;
    }
    if (param_5 < iVar10) goto LAB_006c596b;
    if ((((*(byte *)(param_1 + 0x49c) & 1) == 0) && ((*(byte *)(param_1 + 0xc) & 4) != 0)) &&
       (*(int *)(param_1 + 0x498) != 7)) {
      local_2c = FUN_006c52e0(param_1,iVar3,iVar10,param_5,param_6);
      goto LAB_006c596b;
    }
    local_2c = FUN_006bb8b0(param_1);
    if (local_2c != 0) goto LAB_006c596b;
    local_8 = 1;
    iVar2 = (param_5 - iVar10) + 1;
    if (*(int *)(param_1 + 0x20) == 0x10) {
      FUN_006c5bf0(param_1,(ushort *)
                           (*(int *)(param_1 + 0x478) * iVar10 + *(int *)(param_1 + 0x474) +
                           iVar3 * 2),*(int *)(param_1 + 0x478),iVar2,local_3c,local_40,uVar12,uVar1
                  );
      local_8 = 0xffffffff;
    }
    else {
      FUN_006c5d00(param_1,(byte *)(*(int *)(param_1 + 0x478) * iVar10 + *(int *)(param_1 + 0x474) +
                                   iVar3),*(int *)(param_1 + 0x478),iVar2,local_3c,local_40,bVar11,
                   uVar1);
      local_8 = 0xffffffff;
    }
  }
  else {
    local_2c = FUN_006bb8b0(param_1);
    if (local_2c != 0) goto LAB_006c596b;
    iVar2 = *(int *)(param_1 + 0x478);
    puVar7 = (ushort *)
             (*(int *)(param_1 + 0x28) * iVar3 + iVar2 * iVar10 + *(int *)(param_1 + 0x474));
    iVar4 = param_4 - iVar3;
    iVar5 = (uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f);
    iVar6 = iVar5 * 2;
    iVar9 = iVar4 * 2;
    if (iVar10 < param_5) {
      if (*(int *)(param_1 + 0x490) <= param_5) {
        param_5 = *(int *)(param_1 + 0x490) + -1;
      }
      if (iVar10 <= param_5) {
        local_50 = *(int *)(param_1 + 0x488);
LAB_006c579d:
        if (*(int *)(param_1 + 0x48c) <= param_4) {
          param_4 = *(int *)(param_1 + 0x48c) + -1;
        }
        if (iVar3 <= param_4) {
          local_8 = 2;
          if (iVar4 < iVar5) {
            iVar4 = -iVar5;
            if (local_50 <= param_5) {
              for (; iVar4 = iVar9 + iVar4, iVar10 < local_50; iVar10 = iVar10 + 1) {
                if (-1 < iVar4) {
                  puVar7 = (ushort *)((int)puVar7 + *(int *)(param_1 + 0x28));
                  iVar4 = iVar4 + iVar5 * -2;
                  iVar3 = iVar3 + 1;
                }
                puVar7 = (ushort *)((int)puVar7 + iVar2);
              }
              while (iVar3 < *(int *)(param_1 + 0x484)) {
                if (-1 < iVar4) {
                  puVar7 = (ushort *)((int)puVar7 + *(int *)(param_1 + 0x28));
                  iVar4 = iVar4 + iVar5 * -2;
                  iVar3 = iVar3 + 1;
                }
                puVar7 = (ushort *)((int)puVar7 + iVar2);
                iVar4 = iVar4 + iVar9;
                iVar10 = iVar10 + 1;
              }
              if (*(int *)(param_1 + 0x20) == 0x10) {
                FUN_006c6100(param_1,puVar7,iVar2,iVar3,iVar10,param_4,param_5,iVar4,iVar6,iVar9,
                             local_3c,local_40,uVar12,uVar1);
                local_8 = 0xffffffff;
                goto LAB_006c5965;
              }
              FUN_006c6290(param_1,(byte *)puVar7,iVar2,iVar3,iVar10,param_4,param_5,iVar4,iVar6,
                           iVar9,local_3c,local_40,bVar11,uVar1);
            }
          }
          else {
            iVar5 = -iVar4;
            if (*(int *)(param_1 + 0x484) <= param_4) {
              for (; iVar5 = iVar6 + iVar5, iVar3 < *(int *)(param_1 + 0x484); iVar3 = iVar3 + 1) {
                if (-1 < iVar5) {
                  puVar7 = (ushort *)((int)puVar7 + iVar2);
                  iVar5 = iVar5 + iVar4 * -2;
                  iVar10 = iVar10 + 1;
                }
                puVar7 = (ushort *)((int)puVar7 + *(int *)(param_1 + 0x28));
              }
              while (iVar10 < local_50) {
                if (-1 < iVar5) {
                  puVar7 = (ushort *)((int)puVar7 + iVar2);
                  iVar5 = iVar5 + iVar4 * -2;
                  iVar10 = iVar10 + 1;
                }
                puVar7 = (ushort *)((int)puVar7 + *(int *)(param_1 + 0x28));
                iVar5 = iVar5 + iVar6;
                iVar3 = iVar3 + 1;
              }
              if (*(int *)(param_1 + 0x20) == 0x10) {
                FUN_006c5e00(param_1,puVar7,iVar2,iVar3,iVar10,param_4,param_5,iVar5,iVar6,iVar9,
                             local_3c,local_40,uVar12,uVar1);
                local_8 = 0xffffffff;
              }
              else {
                FUN_006c5f90(param_1,(byte *)puVar7,iVar2,iVar3,iVar10,param_4,param_5,iVar5,iVar6,
                             iVar9,local_3c,local_40,bVar11,uVar1);
                local_8 = 0xffffffff;
              }
              goto LAB_006c5965;
            }
          }
          local_8 = 0xffffffff;
        }
      }
    }
    else {
      iVar2 = -iVar2;
      if (param_5 < *(int *)(param_1 + 0x488)) {
        param_5 = *(int *)(param_1 + 0x488);
      }
      if (param_5 <= iVar10) {
        iVar10 = -iVar10;
        param_5 = -param_5;
        local_50 = 1 - *(int *)(param_1 + 0x490);
        goto LAB_006c579d;
      }
    }
  }
LAB_006c5965:
  FUN_006bb980(param_1);
LAB_006c596b:
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  if ((local_2c == -0x7789ff60) || (local_2c == -0x7789fe52)) {
    local_2c = 0;
  }
  if (local_2c == 0) {
    ExceptionList = local_14;
    return 0;
  }
  RaiseInternalException(local_2c,DAT_007ed77c,s_E__DKW_DDX_C_ddline_c_007edf74,0x2ff);
  ExceptionList = local_14;
  return local_2c;
}

