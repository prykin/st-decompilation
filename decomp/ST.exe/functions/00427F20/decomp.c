
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_00427f20(void *this,float param_1,float param_2,float param_3,int param_4,int param_5,
            int *param_6)

{
  double dVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int local_b8;
  int *local_b4;
  int local_b0;
  int local_8c;
  int local_6c;
  int local_54 [4];
  int local_44;
  int *local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00790550;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff3c;
  local_30 = 0;
  DAT_007f4d84 = 0;
  DAT_007f4d78 = 0;
  DAT_007f4d6c = (undefined4 *)0x0;
  ExceptionList = &local_14;
  puVar2 = &stack0xffffff3c;
  if (param_4 < 1) goto LAB_004286d0;
  if (param_5 < 0) {
    param_5 = 0;
  }
  ExceptionList = &local_14;
  puVar2 = &stack0xffffff3c;
  if ((param_4 < param_5) ||
     (_DAT_007f4d70 = param_4, ExceptionList = &local_14, puVar2 = &stack0xffffff3c,
     param_4 - param_5 < 100)) goto LAB_004286d0;
  ExceptionList = &local_14;
  iVar3 = FUN_006e25d0(this,local_54);
  iVar4 = 1;
  if (iVar3 != 1) {
    iVar3 = FUN_006e25d0(this,local_54);
    iVar4 = 1;
    if (iVar3 != 1) {
      iVar3 = FUN_006e25d0(this,local_54);
      iVar4 = 1;
      if (iVar3 != 1) {
        iVar3 = FUN_006e25d0(this,local_54);
        iVar4 = 1;
        if (iVar3 != 1) {
          iVar3 = FUN_006e25d0(this,local_54);
          iVar4 = 1;
          if (iVar3 != 1) {
            iVar3 = FUN_006e25d0(this,local_54);
            iVar4 = 1;
            if (iVar3 != 1) {
              iVar3 = FUN_006e25d0(this,local_54);
              iVar4 = 1;
              if (iVar3 != 1) {
                iVar4 = FUN_006e25d0(this,local_54);
              }
            }
          }
        }
      }
    }
  }
  puVar2 = local_1c;
  if (iVar4 == 0) goto LAB_004286d0;
  dVar1 = (double)(param_1 / (float)*(double *)((int)this + 0x368));
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar12 = Library::MSVCRT::__ftol();
  DAT_007f4d7c = (int)lVar12;
  iVar4 = -param_4;
  local_34 = param_4;
  if (*(int *)((int)this + 0x370) <= DAT_007f4d7c + param_4) {
    local_34 = (*(int *)((int)this + 0x370) - DAT_007f4d7c) + -1;
  }
  local_2c = iVar4;
  if (DAT_007f4d7c + iVar4 < 0) {
    local_2c = -DAT_007f4d7c;
  }
  dVar1 = (double)(param_2 / (float)*(double *)((int)this + 0x368));
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar12 = Library::MSVCRT::__ftol();
  DAT_007f4d80 = (int)lVar12;
  iVar3 = param_4;
  if (*(int *)((int)this + 0x370) <= DAT_007f4d80 + param_4) {
    iVar3 = (*(int *)((int)this + 0x370) - DAT_007f4d80) + -1;
  }
  if (DAT_007f4d80 + iVar4 < 0) {
    iVar4 = -DAT_007f4d80;
  }
  puVar2 = local_1c;
  if ((local_34 == local_2c || local_34 - local_2c < 0) || (iVar3 == iVar4 || iVar3 - iVar4 < 0))
  goto LAB_004286d0;
  Library::MSVCRT::FUN_0072e150
            (SUB84((double)(param_3 * _DAT_00790538),0),
             (uint)((ulonglong)(double)(param_3 * _DAT_00790538) >> 0x20));
  local_8 = 0;
  Library::MSVCRT::FUN_0072da40();
  local_38 = (int *)&stack0xffffff3c;
  local_1c = &stack0xffffff3c;
  Library::MSVCRT::FUN_0072da40();
  piVar5 = local_38;
  local_8 = 0xffffffff;
  DAT_007f4d74 = (int *)(&stack0xffffff3c + param_4 * 0x10);
  piVar9 = local_38;
  for (iVar6 = (param_4 + 1U & 0xfffffff) << 2; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = 0;
    piVar9 = piVar9 + 1;
  }
  for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined1 *)piVar9 = 0;
    piVar9 = (int *)((int)piVar9 + 1);
  }
  local_1c = &stack0xffffff3c;
  *local_38 = param_4;
  piVar5[1] = param_5;
  iVar10 = param_4 * param_4;
  local_44 = 0;
  local_6c = param_4;
  iVar6 = (1 - param_4) * iVar10 + ((int)(iVar10 + (iVar10 >> 0x1f & 3U)) >> 2);
  local_8c = 0;
  iVar8 = iVar10 * 2 * param_4;
  if (0 < iVar8) {
    piVar5 = local_38 + param_4 * 4;
    do {
      if (0 < iVar6) {
        *piVar5 = local_44;
        local_6c = local_6c + -1;
        piVar5 = piVar5 + -4;
        iVar8 = iVar8 + iVar10 * -2;
        iVar6 = iVar6 - iVar8;
      }
      local_44 = local_44 + 1;
      local_8c = local_8c + iVar10 * 2;
      iVar6 = iVar6 + local_8c + iVar10;
    } while (local_8c < iVar8);
  }
  iVar6 = iVar6 - (local_8c + iVar8) / 2;
  if (-1 < local_6c) {
    piVar5 = local_38 + local_6c * 4;
    local_b0 = local_6c + 1;
    iVar7 = local_44;
    do {
      *piVar5 = iVar7;
      piVar5 = piVar5 + -4;
      if (iVar6 < 0) {
        iVar7 = iVar7 + 1;
        local_8c = local_8c + iVar10 * 2;
        iVar6 = iVar6 + local_8c;
      }
      iVar8 = iVar8 + iVar10 * -2;
      iVar6 = iVar6 + (iVar10 - iVar8);
      local_b0 = local_b0 + -1;
    } while (local_b0 != 0);
  }
  if (0 < param_5) {
    iVar7 = param_5 * param_5;
    iVar6 = iVar7 * 2;
    local_44 = 0;
    local_6c = param_5;
    iVar8 = (1 - param_5) * iVar7 + ((int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2);
    local_8c = 0;
    iVar10 = iVar6 * param_5;
    if (0 < iVar10) {
      local_b4 = local_38 + param_5 * 4 + 1;
      do {
        if (0 < iVar8) {
          *local_b4 = local_44;
          local_6c = local_6c + -1;
          local_b4 = local_b4 + -4;
          iVar10 = iVar10 + iVar7 * -2;
          iVar8 = iVar8 - iVar10;
        }
        local_44 = local_44 + 1;
        local_8c = local_8c + iVar6;
        iVar8 = iVar8 + local_8c + iVar7;
      } while (local_8c < iVar10);
    }
    iVar8 = iVar8 - (local_8c + iVar10) / 2;
    if (-1 < local_6c) {
      piVar5 = local_38 + local_6c * 4 + 1;
      local_b8 = local_6c + 1;
      do {
        *piVar5 = local_44;
        piVar5 = piVar5 + -4;
        if (iVar8 < 0) {
          local_44 = local_44 + 1;
          local_8c = local_8c + iVar6;
          iVar8 = iVar8 + local_8c;
        }
        iVar10 = iVar10 + iVar7 * -2;
        iVar8 = iVar8 + (iVar7 - iVar10);
        local_b8 = local_b8 + -1;
      } while (local_b8 != 0);
    }
  }
  iVar6 = *local_38;
  iVar8 = -iVar6;
  if (-iVar6 < local_2c) {
    iVar8 = local_2c;
  }
  if (local_34 < iVar6) {
    iVar6 = local_34;
  }
  *DAT_007f4d74 = iVar8;
  DAT_007f4d74[3] = iVar6;
  if (param_5 < 1) {
    DAT_007f4d74[1] = DAT_007f4d74[3];
    DAT_007f4d74[2] = *DAT_007f4d74;
  }
  else {
    iVar6 = local_38[1];
    iVar8 = -iVar6;
    if (-local_34 != iVar6 && local_34 <= -iVar6) {
      iVar8 = local_34;
    }
    if (iVar6 < local_2c) {
      iVar6 = local_2c;
    }
    DAT_007f4d74[1] = iVar8;
    DAT_007f4d74[2] = iVar6;
  }
  iVar6 = 1;
  if (0 < param_4) {
    iVar8 = 0x10;
    piVar5 = local_38;
    do {
      iVar10 = piVar5[4];
      iVar7 = -iVar10;
      if (-iVar10 < local_2c) {
        iVar7 = local_2c;
      }
      if (local_34 < iVar10) {
        iVar10 = local_34;
      }
      *(int *)((int)DAT_007f4d74 - iVar8) = iVar7;
      *(int *)(iVar8 + (int)DAT_007f4d74) = iVar7;
      *(int *)((int)DAT_007f4d74 + (0xc - iVar8)) = iVar10;
      *(int *)(iVar8 + 0xc + (int)DAT_007f4d74) = iVar10;
      if (param_5 < iVar6) {
        *(undefined4 *)((int)DAT_007f4d74 + (4 - iVar8)) =
             *(undefined4 *)((int)DAT_007f4d74 + (0xc - iVar8));
        *(undefined4 *)(iVar8 + 4 + (int)DAT_007f4d74) =
             *(undefined4 *)(iVar8 + 0xc + (int)DAT_007f4d74);
        ((undefined4 *)((int)DAT_007f4d74 - iVar8))[2] = *(undefined4 *)((int)DAT_007f4d74 - iVar8);
        iVar10 = *(int *)(iVar8 + (int)DAT_007f4d74);
      }
      else {
        iVar10 = piVar5[5];
        iVar7 = -iVar10;
        if (-local_34 != iVar10 && local_34 <= -iVar10) {
          iVar7 = local_34;
        }
        if (iVar10 < local_2c) {
          iVar10 = local_2c;
        }
        *(int *)((int)DAT_007f4d74 + (4 - iVar8)) = iVar7;
        *(int *)(iVar8 + 4 + (int)DAT_007f4d74) = iVar7;
        *(int *)((int)DAT_007f4d74 + (8 - iVar8)) = iVar10;
      }
      *(int *)(iVar8 + 8 + (int)DAT_007f4d74) = iVar10;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x10;
      piVar5 = piVar5 + 4;
    } while (iVar6 <= param_4);
  }
  if (param_5 < 1) {
    local_30 = thunk_FUN_00427bb0(this,iVar4,iVar3,0);
joined_r0x004286bb:
    puVar2 = local_1c;
    if (local_30 != 0) goto LAB_004286d0;
  }
  else {
    iVar6 = -1 - param_5;
    if (iVar3 < -1 - param_5) {
      iVar6 = iVar3;
    }
    if ((iVar4 <= iVar6) &&
       (local_30 = thunk_FUN_00427bb0(this,iVar4,iVar6,0), puVar2 = local_1c, local_30 != 0))
    goto LAB_004286d0;
    iVar6 = -param_5;
    if (-param_5 < iVar4) {
      iVar6 = iVar4;
    }
    iVar8 = param_5;
    if (iVar3 < param_5) {
      iVar8 = iVar3;
    }
    if ((iVar6 <= iVar8) &&
       ((local_30 = thunk_FUN_00427bb0(this,iVar6,iVar8,-1), puVar2 = local_1c, local_30 != 0 ||
        (local_30 = thunk_FUN_00427bb0(this,iVar6,iVar8,1), puVar2 = local_1c, local_30 != 0))))
    goto LAB_004286d0;
    iVar6 = param_5 + 1;
    if (param_5 + 1 < iVar4) {
      iVar6 = iVar4;
    }
    if (iVar6 <= iVar3) {
      local_30 = thunk_FUN_00427bb0(this,iVar6,iVar3,0);
      goto joined_r0x004286bb;
    }
  }
  puVar2 = local_1c;
  if (DAT_007f4d78 == 0) {
    FUN_006ab060(&DAT_007f4d6c);
    puVar2 = local_1c;
  }
LAB_004286d0:
  local_1c = puVar2;
  iVar4 = 0;
  if (local_30 == 0) {
    if ((param_6[7] != 0) && (param_6[8] != 0)) {
      if (0 < param_6[7]) {
        puVar11 = (undefined4 *)(param_6[8] + 8);
        do {
          FUN_006a5e90((undefined4 *)*puVar11);
          puVar11 = puVar11 + 3;
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_6[7]);
      }
      FUN_006ab060(param_6 + 8);
    }
    *param_6 = DAT_007f4d7c;
    param_6[1] = DAT_007f4d80;
    param_6[2] = 0;
    param_6[3] = 0;
    param_6[4] = 0;
    param_6[5] = 0;
    param_6[6] = 0;
    param_6[7] = DAT_007f4d78;
    param_6[8] = (int)DAT_007f4d6c;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    if (0 < DAT_007f4d78) {
      iVar3 = 0;
      do {
        FUN_006a5e90(*(undefined4 **)(iVar3 + 8 + (int)DAT_007f4d6c));
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + 0xc;
      } while (iVar4 < DAT_007f4d78);
    }
    FUN_006a5e90(DAT_007f4d6c);
    iVar4 = local_30;
    RaiseInternalException(local_30,DAT_007ed77c,s_E____titans_wlad_Td3dshad_cpp_007a5208,0x78f);
  }
  ExceptionList = local_14;
  return iVar4;
}

