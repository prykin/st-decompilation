
int FUN_006bac60(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7
                )

{
  undefined1 *puVar1;
  BOOL BVar2;
  int unaff_EBX;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *local_98;
  int local_94;
  undefined1 local_90 [12];
  int local_84;
  int local_80;
  tagRECT local_7c;
  RECT *local_6c;
  undefined1 *local_68;
  int local_64;
  int local_60;
  RECT local_5c;
  RECT local_4c;
  int local_3c;
  RECT *local_38;
  int local_34;
  undefined1 local_30 [4];
  RECT local_2c;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d928;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff58;
  iVar3 = 0;
  if ((((*(uint *)(param_1 + 8) & 0x20000000) != 0) || ((*(uint *)(param_1 + 0xc) & 0x100) != 0)) ||
     (*(int *)(param_1 + 0x40) == 0)) goto LAB_006bb2e7;
  ExceptionList = &local_14;
  puVar1 = &stack0xffffff58;
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    ExceptionList = &local_14;
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
    puVar1 = local_1c;
  }
  local_1c = puVar1;
  if ((*(uint *)(param_1 + 8) & 0x3000000) == 0) {
    if (param_6 == 0) {
      param_6 = *(int *)(param_1 + 0x18);
    }
    if (param_7 == 0) {
      param_7 = *(int *)(param_1 + 0x1c);
    }
    if (DAT_00854ec8 == 0) {
      DAT_00854ec8 = 1;
      if ((*(code **)(param_1 + 0x4e8) != (code *)0x0) &&
         (iVar3 = (**(code **)(param_1 + 0x4e8))(*(undefined4 *)(param_1 + 0x4ec),1), iVar3 != 0))
      goto LAB_006bb2b2;
      DAT_00854ec8 = 0;
    }
    local_4c.left = *(int *)(param_1 + 0x10) + param_4;
    local_4c.top = *(int *)(param_1 + 0x14) + param_5;
    local_4c.right = local_4c.left + param_6;
    local_4c.bottom = local_4c.top + param_7;
    local_2c.top = 0;
    local_2c.left = 0;
    local_2c.right = *(LONG *)(param_1 + 0x18);
    local_2c.bottom = *(LONG *)(param_1 + 0x1c);
    BVar2 = IntersectRect((LPRECT)local_90,&local_4c,&local_2c);
    if (BVar2 == 0) goto LAB_006bb2b2;
    uVar4 = local_90._8_4_ - local_90._0_4_;
    iVar5 = local_84 - local_90._4_4_;
    local_5c.left = local_90._0_4_ + param_2;
    local_5c.top = local_90._4_4_ + param_3;
    ClientToScreen(*(HWND *)(param_1 + 4),(LPPOINT)&local_5c);
    local_5c.right = local_5c.left + uVar4;
    local_5c.bottom = local_5c.top + iVar5;
    if (*(int *)(param_1 + 0x24) == *(int *)(param_1 + 0x20)) {
      iVar5 = 0;
      while (iVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 0x14))
                               (*(int **)(param_1 + 0x34),&local_5c,*(undefined4 *)(param_1 + 0x40),
                                local_90,0x1000000,0), iVar3 != 0) {
        if (iVar3 == -0x7789fe3e) {
          FUN_006cec40(param_1);
        }
        else {
          if (((iVar3 != -0x7789ff60) && (iVar3 != -0x7789fe52)) || (iVar5 != 0)) break;
          Sleep(2);
        }
        iVar5 = iVar5 + 1;
        if (1 < iVar5) break;
      }
    }
    else {
      local_34 = 0;
      local_38 = (RECT *)0x0;
      iVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 0xc))
                        (*(int **)(param_1 + 0x38),&local_5c,0,local_30);
      if (iVar3 == 0) {
        local_8 = 0;
        FUN_0072da40();
        local_8 = 0xffffffff;
        local_68 = &stack0xffffff58;
        local_1c = &stack0xffffff58;
        iVar3 = (**(code **)(**(int **)(param_1 + 0x38) + 0xc))
                          (*(int **)(param_1 + 0x38),&local_5c,&stack0xffffff58,local_30);
        if (iVar3 == 0) {
          iVar3 = 0;
          local_34 = unaff_EBX;
          if (unaff_EBX < 1) goto LAB_006bb2b2;
          local_38 = (RECT *)(local_90 + 8);
          if ((((unaff_EBX == 1) && (local_5c.left == local_90._8_4_)) &&
              (local_5c.right == local_80)) &&
             ((local_5c.top == local_84 && (local_5c.bottom == local_7c.left)))) {
            local_38 = (RECT *)0x0;
            local_34 = 0;
          }
        }
      }
      iVar6 = 0;
      iVar3 = FUN_006bbed0(*(int **)(param_1 + 0x34),&local_98,&local_94,&local_5c);
      while (iVar3 != 0) {
        if (iVar3 == -0x7789fe3e) {
          FUN_006cec40(param_1);
        }
        else {
          if ((iVar3 != -0x7789ff60) && (iVar3 != -0x7789fe52)) break;
          Sleep(2);
        }
        iVar6 = iVar6 + 1;
        if (9 < iVar6) break;
        iVar3 = FUN_006bbed0(*(int **)(param_1 + 0x34),&local_98,&local_94,&local_5c);
      }
      if ((iVar3 == -0x7789ff60) || (iVar3 == -0x7789fe52)) goto LAB_006bb2a0;
      if (iVar3 != 0) goto LAB_006bb2b2;
      iVar3 = FUN_006bb8b0(param_1);
      local_3c = iVar3;
      if (iVar3 == 0) {
        local_8 = 1;
        if (local_38 != (RECT *)0x0) {
          local_6c = local_38;
          for (local_80 = 0; local_80 < local_34; local_80 = local_80 + 1) {
            BVar2 = IntersectRect(&local_7c,&local_5c,local_6c);
            if (BVar2 != 0) {
              iVar5 = local_7c.left - local_5c.left;
              local_60 = iVar5 + local_90._0_4_;
              iVar6 = local_7c.top - local_5c.top;
              local_64 = local_90._4_4_ + iVar6;
              uVar4 = local_7c.right - local_7c.left;
              iVar7 = local_7c.bottom - local_7c.top;
              switch(*(undefined4 *)(param_1 + 0x24)) {
              case 8:
                FUN_006cea60((undefined8 *)
                             ((iVar6 * local_94 - local_5c.left) + local_7c.left + (int)local_98),
                             local_94,(undefined8 *)
                                      (*(int *)(param_1 + 0x478) * local_64 +
                                       *(int *)(param_1 + 0x474) + local_60),
                             *(int *)(param_1 + 0x478),uVar4,iVar7);
                break;
              case 9:
              case 10:
              case 0xb:
              case 0xc:
              case 0xd:
              case 0xe:
              case 0xf:
              case 0x11:
              case 0x12:
              case 0x13:
              case 0x14:
              case 0x15:
              case 0x16:
              case 0x17:
              case 0x19:
              case 0x1a:
              case 0x1b:
              case 0x1c:
              case 0x1d:
              case 0x1e:
              case 0x1f:
                break;
              case 0x10:
                FUN_006d05b0((undefined4 *)((int)local_98 + iVar5 * 2 + iVar6 * local_94),local_94,
                             (uint *)(*(int *)(param_1 + 0x478) * local_64 +
                                      *(int *)(param_1 + 0x474) + local_60),
                             *(int *)(param_1 + 0x478),uVar4,iVar7,*(int *)(param_1 + 0x4c0));
                break;
              case 0x18:
                FUN_006d3a50((undefined2 *)((int)local_98 + iVar5 * 3 + iVar6 * local_94),local_94,
                             (byte *)(*(int *)(param_1 + 0x478) * local_64 +
                                      *(int *)(param_1 + 0x474) + local_60),
                             *(int *)(param_1 + 0x478),uVar4,iVar7,*(int *)(param_1 + 0x4c0));
                break;
              case 0x20:
                FUN_006d39f0((undefined4 *)((int)local_98 + iVar5 * 4 + iVar6 * local_94),local_94,
                             (byte *)(*(int *)(param_1 + 0x478) * local_64 +
                                      *(int *)(param_1 + 0x474) + local_60),
                             *(int *)(param_1 + 0x478),uVar4,iVar7,*(int *)(param_1 + 0x4c0));
                break;
              default:
                goto switchD_006bafc0_default;
              }
              iVar3 = local_3c;
            }
switchD_006bafc0_default:
            local_6c = local_6c + 1;
          }
          goto switchD_006bb0eb_caseD_9;
        }
        switch(*(undefined4 *)(param_1 + 0x24)) {
        case 8:
          FUN_006cea60(local_98,local_94,
                       (undefined8 *)
                       (*(int *)(param_1 + 0x478) * local_90._4_4_ + *(int *)(param_1 + 0x474) +
                       local_90._0_4_),*(int *)(param_1 + 0x478),uVar4,iVar5);
          break;
        case 0x10:
          FUN_006d05b0((undefined4 *)local_98,local_94,
                       (uint *)(*(int *)(param_1 + 0x478) * local_90._4_4_ +
                                *(int *)(param_1 + 0x474) + local_90._0_4_),
                       *(int *)(param_1 + 0x478),uVar4,iVar5,*(int *)(param_1 + 0x4c0));
          break;
        case 0x18:
          FUN_006d3a50((undefined2 *)local_98,local_94,
                       (byte *)(*(int *)(param_1 + 0x478) * local_90._4_4_ +
                                *(int *)(param_1 + 0x474) + local_90._0_4_),
                       *(int *)(param_1 + 0x478),uVar4,iVar5,*(int *)(param_1 + 0x4c0));
          break;
        case 0x20:
          FUN_006d39f0((undefined4 *)local_98,local_94,
                       (byte *)(*(int *)(param_1 + 0x478) * local_90._4_4_ +
                                *(int *)(param_1 + 0x474) + local_90._0_4_),
                       *(int *)(param_1 + 0x478),uVar4,iVar5,*(int *)(param_1 + 0x4c0));
        default:
switchD_006bb0eb_caseD_9:
        }
        local_8 = 0xffffffff;
        FUN_006bb980(param_1);
      }
      (**(code **)(**(int **)(param_1 + 0x34) + 0x80))(*(int **)(param_1 + 0x34),0);
    }
    if ((iVar3 == -0x7789ff60) || (iVar3 == -0x7789fe52)) {
LAB_006bb2a0:
      iVar3 = 0;
    }
  }
  else {
    FUN_006bb370(param_1,param_2,param_3);
  }
LAB_006bb2b2:
  if ((*(uint *)(param_1 + 8) & 0x4000000) != 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4f0));
  }
  if (iVar3 == 0) {
LAB_006bb2e7:
    iVar3 = 0;
  }
  else {
    FUN_006a5e40(iVar3,DAT_007ed77c,0x7edc48,0x3db);
  }
  ExceptionList = local_14;
  return iVar3;
}

