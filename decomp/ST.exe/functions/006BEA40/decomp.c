
int FUN_006bea40(int *param_1,uint param_2)

{
  AnonShape_006CEC40_BB23E716 *pAVar1;
  void **ppvVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  uint *local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  int *local_7c;
  undefined1 *local_78;
  undefined8 *local_74;
  int local_70;
  int *local_6c;
  int local_68;
  undefined1 local_64 [4];
  undefined4 local_60 [4];
  AnonShape_006CEC40_BB23E716 *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  tagRECT local_3c;
  int *local_2c;
  int local_24;
  int local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;

  local_8 = 0xffffffff;
  puStack_c = &DAT_0079d968;
  puStack_10 = &LAB_0072d964;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff4c;
  pAVar1 = (AnonShape_006CEC40_BB23E716 *)*param_1;
  iVar6 = 0;
  local_24 = 0;
  local_50 = pAVar1;
  if (DAT_00854fe8 != 0) {
    ExceptionList = &local_14;
    local_1c = &stack0xffffff4c;
    Library::DKW::DDX::FUN_006c4630((int)pAVar1,pAVar1->field_0044,local_60);
    DAT_00854f74 = Library::DKW::DDX::FUN_006c4880
                             ((int)pAVar1,DAT_00854f30,DAT_00854f34,DAT_00854f38,DAT_00854f3c,
                              *(uint *)&pAVar1->field_0x20);
    Library::DKW::DDX::FUN_006c44e0((int)pAVar1,local_60);
    ExceptionList = local_14;
    return 0;
  }
  if ((*(uint *)&pAVar1->field_0x8 & 0x2000000) != 0) {
    ExceptionList = &local_14;
    ppvVar2 = &local_14;
    local_1c = &stack0xffffff4c;
    puVar3 = &stack0xffffff4c;
    if ((*(uint *)&pAVar1->field_0x8 & 0x1000000) != 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      while (iVar4 = (**(code **)(*pAVar1->field_0048 + 0x14))(pAVar1->field_0048,0),
            ppvVar2 = ExceptionList, puVar3 = local_1c, iVar4 != 0) {
        if (iVar4 == -0x7789fe3e) {
          FUN_006cec40(pAVar1);
        }
        else {
          if (((iVar4 != -0x7789ff60) && (iVar4 != -0x7789fe52)) || (iVar6 != 0)) break;
          Sleep(2);
        }
        iVar6 = iVar6 + 1;
        ppvVar2 = ExceptionList;
        puVar3 = local_1c;
        if (1 < iVar6) break;
      }
    }
    local_1c = puVar3;
    ExceptionList = ppvVar2;
    iVar4 = 0;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    while (iVar6 = (**(code **)(*pAVar1->field_0034 + 0x2c))(), iVar6 != 0) {
      if (iVar6 == -0x7789fe3e) {
        FUN_006cec40(pAVar1);
      }
      else {
        if (((iVar6 != -0x7789ff60) && (iVar6 != -0x7789fe52)) || (iVar4 != 0)) break;
        Sleep(2);
      }
      iVar4 = iVar4 + 1;
      if (1 < iVar4) break;
    }
    if ((iVar6 == -0x7789ff60) || (iVar6 == -0x7789fe52)) {
      iVar6 = 0;
    }
    goto cf_common_join_006BF619;
  }
  local_20 = *(int *)param_1[0x70];
  if (*(int *)&pAVar1->field_0x24 == *(int *)&pAVar1->field_0x20) {
    if (((1 < local_20) && ((pAVar1->field_0xc & 2) != 0)) &&
       ((param_1[4] * param_1[3] * 3) / (local_20 + 2) <= ((int *)param_1[0x70])[1])) {
      param_2 = param_2 | 1;
    }
    if ((*(uint *)&pAVar1->field_0x8 & 0x1000000) == 0) {
      local_3c.left = param_1[1];
      local_3c.top = param_1[2];
      local_3c.right = param_1[3];
      local_3c.bottom = param_1[4];
      ExceptionList = &local_14;
      local_1c = &stack0xffffff4c;
    }
    else {
      ExceptionList = &local_14;
      GetClientRect(*(HWND *)&pAVar1->field_0x4,&local_3c);
      param_2 = 1;
    }
    ClientToScreen(*(HWND *)&pAVar1->field_0x4,(LPPOINT)&local_3c);
    if (param_2 == 0) {
      local_40 = local_3c.left;
      local_44 = local_3c.top;
      if (*(int *)(pAVar1 + 0x11) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(**(int **)&pAVar1->field_0x2c + 0x58))();
        *(undefined4 *)(pAVar1 + 0x11) = 0;
      }
      piVar7 = (int *)(param_1[0x70] + 8);
      if (0 < local_20) {
        local_a8 = local_20;
        do {
          piVar7[2] = piVar7[2] + *piVar7;
          piVar7[3] = piVar7[3] + piVar7[1];
          local_3c.left = *piVar7 + local_40;
          local_3c.top = piVar7[1] + local_44;
          local_3c.right = piVar7[2] + local_40;
          local_3c.bottom = piVar7[3] + local_44;
          local_48 = 0;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          while (iVar6 = (**(code **)(*pAVar1->field_0034 + 0x14))(pAVar1->field_0034,&local_3c),
                iVar6 != 0) {
            if (iVar6 == -0x7789fe3e) {
              FUN_006cec40(pAVar1);
            }
            else {
              if (((iVar6 != -0x7789ff60) && (iVar6 != -0x7789fe52)) || (local_48 != 0)) break;
              Sleep(2);
            }
            local_48 = local_48 + 1;
            if (1 < local_48) break;
          }
          if ((iVar6 == -0x7789ff60) || (iVar6 == -0x7789fe52)) {
            iVar6 = 0;
            param_1[0x6d] = 1;
            param_1[0x6e] = 1;
          }
          if (local_24 == 0) {
            local_24 = iVar6;
          }
          piVar7 = piVar7 + 4;
          local_a8 = local_a8 + -1;
        } while (local_a8 != 0);
      }
    }
    else {
      local_3c.right = local_3c.right + local_3c.left;
      local_3c.bottom = local_3c.bottom + local_3c.top;
      iVar4 = 0;
      if (*(int *)(pAVar1 + 0x11) != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(**(int **)&pAVar1->field_0x2c + 0x58))();
        *(undefined4 *)(pAVar1 + 0x11) = 0;
      }
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      while (iVar6 = (**(code **)(*pAVar1->field_0034 + 0x14))(pAVar1->field_0034,&local_3c),
            iVar6 != 0) {
        if (iVar6 == -0x7789fe3e) {
          FUN_006cec40(pAVar1);
        }
        else {
          if (((iVar6 != -0x7789ff60) && (iVar6 != -0x7789fe52)) || (iVar4 != 0)) break;
          Sleep(2);
        }
        iVar4 = iVar4 + 1;
        if (1 < iVar4) break;
      }
      if ((iVar6 == -0x7789ff60) || (iVar6 == -0x7789fe52)) {
        iVar6 = 0;
        param_1[0x6d] = 1;
        param_1[0x6e] = 1;
      }
    }
    goto cf_common_join_006BF619;
  }
  local_3c.left = param_1[1];
  local_3c.top = param_1[2];
  ExceptionList = &local_14;
  local_1c = &stack0xffffff4c;
  ClientToScreen(*(HWND *)&pAVar1->field_0x4,(LPPOINT)&local_3c);
  local_40 = local_3c.left;
  local_44 = local_3c.top;
  local_3c.right = param_1[3] + local_3c.left;
  local_3c.bottom = param_1[4] + local_3c.top;
  local_48 = 0;
  while (iVar6 = FUN_006bbed0(pAVar1->field_0034,&local_74,&local_70,&local_3c), iVar6 != 0) {
    if (iVar6 == -0x7789fe3e) {
      FUN_006cec40(pAVar1);
    }
    else {
      if (((iVar6 != -0x7789ff60) && (iVar6 != -0x7789fe52)) || (local_48 != 0)) break;
      Sleep(2);
    }
    local_48 = local_48 + 1;
    if (1 < local_48) break;
  }
  if ((iVar6 == -0x7789ff60) || (iVar6 == -0x7789fe52)) {
    iVar6 = 0;
    param_1[0x6d] = 1;
    param_1[0x6e] = 1;
    goto cf_common_join_006BF619;
  }
  if (iVar6 != 0) goto cf_common_join_006BF619;
  local_68 = 0;
  local_6c = (int *)0x0;
  iVar4 = 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar6 = (**(code **)(**(int **)&pAVar1->field_0x38 + 0xc))();
  if (iVar6 == 0) {
    local_8 = 0;
    Library::MSVCRT::FUN_0072da40();
    local_8 = 0xffffffff;
    local_78 = &stack0xffffff3c;
    local_1c = &stack0xffffff3c;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar6 = (**(code **)(**(int **)&pAVar1->field_0x38 + 0xc))
                      (*(int **)&pAVar1->field_0x38,&local_3c,&stack0xffffff3c,local_64);
    if (iVar6 == 0) {
      local_68 = iVar4;
      if (iVar4 < 1) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*pAVar1->field_0034 + 0x80))(pAVar1->field_0034,0);
        iVar6 = 0;
        goto cf_common_join_006BF619;
      }
      local_6c = &local_a4;
      if ((((iVar4 == 1) && (local_3c.left == local_a4)) && (local_3c.right == local_9c)) &&
         ((local_3c.top == local_a0 && (local_3c.bottom == local_98)))) {
        local_6c = (int *)0x0;
        local_68 = 0;
      }
    }
  }
  if (0 < local_68) {
    piVar7 = local_6c + 1;
    iVar6 = local_68;
    do {
      piVar7[-1] = piVar7[-1] - local_40;
      piVar7[1] = piVar7[1] - local_40;
      *piVar7 = *piVar7 - local_44;
      piVar7[2] = piVar7[2] - local_44;
      piVar7 = piVar7 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar4 = 0;
  do {
    iVar6 = FUN_006bbe40(pAVar1->field_0044,(uint *)&local_90,&local_94,0);
    if (iVar6 == 0) goto LAB_006bed50;
    if (iVar6 != -0x7789fe3e) break;
    FUN_006cec40(pAVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  if (iVar6 == 0) {
LAB_006bed50:
    local_8 = 1;
    if (local_6c != (int *)0x0) {
      if (param_2 == 0) {
        local_2c = (int *)(param_1[0x70] + 8);
        for (local_4c = 0; local_4c < local_20; local_4c = local_4c + 1) {
          local_7c = local_6c;
          local_48 = 0;
          while (iVar4 = local_48, local_48 < local_68) {
            iVar5 = FUN_006cfeb0(&local_8c,local_2c,local_7c);
            if (iVar5 == 0) goto switchD_006befc1_caseD_9;
            switch(*(undefined4 *)&pAVar1->field_0x24) {
            case 8:
              FUN_006cea60((undefined8 *)(local_88 * local_70 + local_8c + (int)local_74),local_70,
                           (undefined8 *)(local_88 * local_94 + local_8c + (int)local_90),local_94,
                           local_84,local_80);
              local_48 = iVar4 + 1;
              local_7c = local_7c + 4;
              break;
            case 0x10:
              FUN_006d05b0((undefined4 *)((int)local_74 + local_8c * 2 + local_88 * local_70),
                           local_70,(uint *)(local_88 * local_94 + local_8c + (int)local_90),
                           local_94,local_84,local_80,*(int *)(pAVar1 + 0x10));
              local_48 = iVar4 + 1;
              local_7c = local_7c + 4;
              break;
            case 0x18:
              FUN_006d3a50((undefined2 *)((int)local_74 + local_8c * 3 + local_88 * local_70),
                           local_70,(byte *)(local_88 * local_94 + local_8c + (int)local_90),
                           local_94,local_84,local_80,*(int *)(pAVar1 + 0x10));
              local_48 = iVar4 + 1;
              local_7c = local_7c + 4;
              break;
            case 0x20:
              FUN_006d39f0((undefined4 *)((int)local_74 + local_8c * 4 + local_88 * local_70),
                           local_70,(byte *)(local_88 * local_94 + local_8c + (int)local_90),
                           local_94,local_84,local_80,*(int *)(pAVar1 + 0x10));
            default:
switchD_006befc1_caseD_9:
              local_48 = iVar4 + 1;
              local_7c = local_7c + 4;
            }
          }
          local_2c = local_2c + 4;
        }
      }
      else {
        local_a4 = 0;
        local_a0 = 0;
        local_9c = param_1[3];
        local_98 = param_1[4];
        local_7c = local_6c;
        local_48 = 0;
        while (iVar4 = local_48, local_48 < local_68) {
          iVar5 = FUN_006cfeb0(&local_8c,&local_a4,local_7c);
          if (iVar5 == 0) goto switchD_006bedda_caseD_9;
          switch(*(undefined4 *)&pAVar1->field_0x24) {
          case 8:
            FUN_006cea60((undefined8 *)(local_88 * local_70 + local_8c + (int)local_74),local_70,
                         (undefined8 *)(local_88 * local_94 + local_8c + (int)local_90),local_94,
                         local_84,local_80);
            local_48 = iVar4 + 1;
            local_7c = local_7c + 4;
            break;
          case 0x10:
            FUN_006d05b0((undefined4 *)((int)local_74 + local_8c * 2 + local_88 * local_70),local_70
                         ,(uint *)(local_88 * local_94 + local_8c + (int)local_90),local_94,local_84
                         ,local_80,*(int *)(pAVar1 + 0x10));
            local_48 = iVar4 + 1;
            local_7c = local_7c + 4;
            break;
          case 0x18:
            FUN_006d3a50((undefined2 *)((int)local_74 + local_8c * 3 + local_88 * local_70),local_70
                         ,(byte *)(local_88 * local_94 + local_8c + (int)local_90),local_94,local_84
                         ,local_80,*(int *)(pAVar1 + 0x10));
            local_48 = iVar4 + 1;
            local_7c = local_7c + 4;
            break;
          case 0x20:
            FUN_006d39f0((undefined4 *)((int)local_74 + local_8c * 4 + local_88 * local_70),local_70
                         ,(byte *)(local_88 * local_94 + local_8c + (int)local_90),local_94,local_84
                         ,local_80,*(int *)(pAVar1 + 0x10));
          default:
switchD_006bedda_caseD_9:
            local_48 = iVar4 + 1;
            local_7c = local_7c + 4;
          }
        }
      }
      goto switchD_006bf136_caseD_9;
    }
    if (param_2 == 0) {
      local_2c = (int *)(param_1[0x70] + 8);
      local_4c = 0;
      while (piVar7 = local_2c, local_4c < local_20) {
        switch(*(undefined4 *)&pAVar1->field_0x24) {
        case 8:
          FUN_006cea60((undefined8 *)((int)local_74 + *local_2c + local_70 * local_2c[1]),local_70,
                       (undefined8 *)((int)local_90 + *local_2c + local_94 * local_2c[1]),local_94,
                       local_2c[2],local_2c[3]);
          local_4c = local_4c + 1;
          local_2c = piVar7 + 4;
          break;
        case 0x10:
          FUN_006d05b0((undefined4 *)((int)local_74 + *local_2c * 2 + local_70 * local_2c[1]),
                       local_70,(uint *)((int)local_90 + *local_2c + local_94 * local_2c[1]),
                       local_94,local_2c[2],local_2c[3],*(int *)(pAVar1 + 0x10));
          local_4c = local_4c + 1;
          local_2c = piVar7 + 4;
          break;
        case 0x18:
          FUN_006d3a50((undefined2 *)((int)local_74 + *local_2c * 3 + local_70 * local_2c[1]),
                       local_70,(byte *)((int)local_90 + *local_2c + local_94 * local_2c[1]),
                       local_94,local_2c[2],local_2c[3],*(int *)(pAVar1 + 0x10));
          local_4c = local_4c + 1;
          local_2c = piVar7 + 4;
          break;
        case 0x20:
          FUN_006d39f0((undefined4 *)((int)local_74 + *local_2c * 4 + local_70 * local_2c[1]),
                       local_70,(byte *)((int)local_90 + *local_2c + local_94 * local_2c[1]),
                       local_94,local_2c[2],local_2c[3],*(int *)(pAVar1 + 0x10));
        default:
          local_4c = local_4c + 1;
          local_2c = piVar7 + 4;
        }
      }
      goto switchD_006bf136_caseD_9;
    }
    switch(*(undefined4 *)&pAVar1->field_0x24) {
    case 8:
      FUN_006cea60(local_74,local_70,(undefined8 *)local_90,local_94,param_1[3],param_1[4]);
    default:
switchD_006bf136_caseD_9:
      break;
    case 0x10:
      FUN_006d05b0((undefined4 *)local_74,local_70,local_90,local_94,param_1[3],param_1[4],
                   *(int *)(pAVar1 + 0x10));
      break;
    case 0x18:
      FUN_006d3a50((undefined2 *)local_74,local_70,(byte *)local_90,local_94,param_1[3],param_1[4],
                   *(int *)(pAVar1 + 0x10));
      break;
    case 0x20:
      FUN_006d39f0((undefined4 *)local_74,local_70,(byte *)local_90,local_94,param_1[3],param_1[4],
                   *(int *)(pAVar1 + 0x10));
    }
    local_8 = 0xffffffff;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*pAVar1->field_0044 + 0x80))(pAVar1->field_0044,0);
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*pAVar1->field_0034 + 0x80))(pAVar1->field_0034,0);
cf_common_join_006BF619:
  if ((iVar6 == -0x7789ff60) || (iVar6 == -0x7789fe52)) {
    iVar6 = 0;
  }
  if (local_24 == 0) {
    local_24 = iVar6;
  }
  ExceptionList = local_14;
  return local_24;
}

