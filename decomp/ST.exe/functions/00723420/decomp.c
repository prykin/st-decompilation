
int FUN_00723420(int *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int *piVar6;
  int iVar7;
  undefined3 extraout_var_01;
  DWORD DVar8;
  undefined3 extraout_var_02;
  uint *puVar9;
  undefined4 unaff_ESI;
  uint uVar10;
  undefined4 *puVar11;
  void *unaff_EDI;
  int *piVar12;
  undefined4 local_bc;
  undefined4 local_b8 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int *local_38;
  int local_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  uint local_10;
  int *local_c;
  int local_8;
  
  local_8 = 0;
  local_bc = DAT_00858df8;
  DAT_00858df8 = &local_bc;
  iVar4 = __setjmp3(local_b8,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_bc;
    iVar4 = FUN_006ad4d0(s_E__Ourlib__stab_cpp_007f0bac,0x163,0,iVar4,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(0xffff,0,0x7f0bac,0x164);
      return 0xffff;
    }
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  switch(param_1[4]) {
  case 2:
    local_c = (int *)param_1[5];
    if (local_c == (int *)0x0) {
LAB_00723d89:
      local_8 = 0xffff;
    }
    else {
      local_38[0x1d] = *local_c;
      iVar4 = 0;
      piVar6 = local_c + 2;
      piVar12 = local_38 + 9;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar12 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar12 = piVar12 + 1;
      }
      local_38[0x10] = (int)local_38;
      piVar6 = local_c + 10;
      piVar12 = local_38 + 0x11;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar12 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar12 = piVar12 + 1;
      }
      local_38[0x18] = (int)local_38;
      piVar6 = (int *)local_c[0x12];
      iVar7 = *piVar6;
      while (iVar7 != 0) {
        piVar12 = piVar6 + 0x1c;
        piVar6 = piVar6 + 0x1c;
        iVar4 = iVar4 + 1;
        iVar7 = *piVar12;
      }
      uVar10 = (iVar4 + 1) * 0x70;
      puVar5 = FUN_006aac10(uVar10);
      local_38[0x19] = (int)puVar5;
      puVar11 = (undefined4 *)local_c[0x12];
      for (uVar10 = uVar10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar5 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar5 = puVar5 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar5 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      local_38[0x1a] = local_c[0x13];
      local_38[0x1c] = local_c[1];
      iVar4 = FUN_007233f0((int)local_38);
      if (-1 < iVar4) {
        *(undefined4 *)(iVar4 * 0x70 + 4 + local_38[0x19]) = 1;
      }
      piVar6 = (int *)local_38[0x19];
      if (*piVar6 != 0) {
        iVar4 = 0;
        do {
          piVar6[0x11] = 0;
          *(undefined4 *)(local_38[0x19] + 0x4c + iVar4) = 0;
          iVar4 = iVar4 + 0x70;
          piVar6 = (int *)(local_38[0x19] + iVar4);
        } while (*piVar6 != 0);
      }
      local_38[7] = (uint)(local_c[0x14] == 0);
      local_38[8] = (uint)(local_c[0x15] == 0);
      local_38[0x1d] = local_38[0x1d] | 0x70000000;
      iVar4 = FUN_006e4d40((void *)local_38[4],local_38[3]);
      if (iVar4 == 1) {
        local_28 = local_38[2];
        local_24 = 2;
        local_20 = 8;
        local_8 = (**(code **)*local_38)(&local_30);
      }
    }
    break;
  case 3:
    iVar4 = FUN_006e4d40((void *)local_38[4],local_38[3]);
    if (iVar4 == 1) {
      local_28 = local_38[2];
      local_24 = 2;
      local_20 = 9;
      (**(code **)*local_38)(&local_30);
    }
    if (local_38[0x19] != 0) {
      FUN_006ab060(local_38 + 0x19);
    }
    break;
  case 5:
    if (((local_38[0x1d] & 0xf0000000U) == 0) && (piVar6 = (int *)local_38[0x19], *piVar6 != 0)) {
      iVar4 = 0;
      do {
        iVar7 = (**(code **)(*local_38 + 4))((int)piVar6 + iVar4);
        if (iVar7 != 0) goto LAB_00723d89;
        piVar6 = (int *)local_38[0x19];
        iVar4 = iVar4 + 0x70;
      } while (*(int *)((int)piVar6 + iVar4) != 0);
    }
    break;
  case 6:
    if (((*param_1 != local_38[2]) || (param_1[1] != 2)) && (local_38[8] != 0)) {
      piVar6 = (int *)local_38[0x19];
      piVar12 = (int *)param_1[5];
      if (*piVar6 != 0) {
        iVar4 = 0;
LAB_00723833:
        if ((*(int *)((int)piVar6 + iVar4 + 0x1c) != 0) ||
           (bVar3 = FUN_00753090(*(int *)((int)piVar6 + iVar4 + 0xc),
                                 *(int *)((int)piVar6 + iVar4 + 0x10),
                                 *(int *)((int)piVar6 + iVar4 + 0x14),
                                 *(int *)((int)piVar6 + iVar4 + 0x18),*piVar12,piVar12[1],piVar12[2]
                                 ,piVar12[3]), CONCAT31(extraout_var,bVar3) == 0))
        goto LAB_00723867;
        piVar6 = (int *)local_38[0x19];
        local_38[0x1d] = local_38[0x1d] | 0x80000000;
        local_38[6] = local_38[6] + 1;
        iVar4 = 0;
        if (*piVar6 != 0) {
          iVar7 = 0;
          do {
            if (*(int *)((int)piVar6 + iVar7 + 0x44) != 0) {
              *(undefined4 *)((int)piVar6 + iVar7 + 0x44) = 0;
              if (*(int *)(local_38[0x19] + 0x60 + iVar7) != 0) {
                local_8 = FUN_006e5fe0(local_38,(undefined4 *)(local_38[0x19] + iVar7 + 0x50));
              }
            }
            piVar6 = (int *)local_38[0x19];
            iVar7 = iVar7 + 0x70;
            iVar4 = iVar4 + 1;
          } while (*(int *)((int)piVar6 + iVar7) != 0);
        }
        *(undefined4 *)(iVar4 * 0x70 + 0x4c + local_38[0x19]) = 0;
        break;
      }
    }
    break;
  case 7:
    if (((local_38[0x1d] & 0x80000000U) != 0) && ((*param_1 != local_38[2] || (param_1[1] != 2)))) {
      piVar6 = (int *)local_38[0x19];
      piVar12 = (int *)param_1[5];
      if (*piVar6 != 0) {
        iVar4 = 0;
        do {
          if (((*(int *)((int)piVar6 + iVar4 + 0x1c) == 0) &&
              (bVar3 = FUN_00753090(*(int *)((int)piVar6 + iVar4 + 0xc),
                                    *(int *)((int)piVar6 + iVar4 + 0x10),
                                    *(int *)((int)piVar6 + iVar4 + 0x14),
                                    *(int *)((int)piVar6 + iVar4 + 0x18),*piVar12,piVar12[1],
                                    piVar12[2],piVar12[3]), CONCAT31(extraout_var_00,bVar3) != 0))
             && (local_38[6] != 0)) {
            iVar4 = local_38[6];
            local_38[6] = iVar4 + -1;
            if (iVar4 + -1 == 0) {
              piVar6 = (int *)local_38[0x19];
              local_38[0x1d] = local_38[0x1d] & 0x7fffffff;
              if (*piVar6 != 0) {
                iVar4 = 0;
                goto LAB_00723991;
              }
            }
            break;
          }
          piVar6 = (int *)local_38[0x19];
          iVar4 = iVar4 + 0x70;
        } while (*(int *)((int)piVar6 + iVar4) != 0);
      }
    }
    break;
  case 8:
    if ((local_38[0x1d] & 0x70000000U) != 0) {
      local_38[0x1d] = local_38[0x1d] & 0x8fffffff;
      if ((local_38[7] != 0) && (piVar6 = (int *)local_38[0x19], *piVar6 != 0)) {
        iVar4 = 0;
        do {
          if (*(int *)((int)piVar6 + iVar4 + 0x1c) == 0) {
            local_48 = *(undefined4 *)((int)piVar6 + iVar4 + 0xc);
            local_44 = *(undefined4 *)((int)piVar6 + iVar4 + 0x10);
            local_40 = *(undefined4 *)((int)piVar6 + iVar4 + 0x14);
            local_3c = *(undefined4 *)((int)piVar6 + iVar4 + 0x18);
            local_1c = &local_48;
            local_24 = 0xf;
            local_20 = 6;
            local_8 = FUN_006e5fe0(local_38,&local_30);
          }
          piVar6 = (int *)local_38[0x19];
          iVar4 = iVar4 + 0x70;
        } while (*(int *)((int)piVar6 + iVar4) != 0);
      }
      local_1c = (undefined4 *)local_38[2];
      local_20 = 0x13;
      local_18 = 0;
      iVar4 = FUN_006e6000(local_38,3,1,&local_30);
      if (iVar4 != 0) goto LAB_00723d89;
      if (((local_38[0x1d] & 0xf0000000U) == 0) && (piVar6 = (int *)local_38[0x19], *piVar6 != 0)) {
        iVar4 = 0;
        do {
          iVar7 = (**(code **)(*local_38 + 4))((int)piVar6 + iVar4);
          if (iVar7 != 0) goto LAB_00723d89;
          piVar6 = (int *)local_38[0x19];
          iVar4 = iVar4 + 0x70;
        } while (*(int *)((int)piVar6 + iVar4) != 0);
      }
    }
    break;
  case 9:
    if ((local_38[0x1d] & 0x70000000U) == 0) {
      piVar6 = (int *)local_38[0x19];
      if (*piVar6 != 0) {
        iVar4 = 0;
        do {
          if (*(int *)((int)piVar6 + iVar4 + 0x1c) == 0) {
            local_68 = *(undefined4 *)((int)piVar6 + iVar4 + 0xc);
            local_64 = *(undefined4 *)((int)piVar6 + iVar4 + 0x10);
            local_60 = *(undefined4 *)((int)piVar6 + iVar4 + 0x14);
            local_5c = *(undefined4 *)((int)piVar6 + iVar4 + 0x18);
            local_30 = local_38[2];
            local_1c = &local_68;
            local_2c = 2;
            local_24 = 0xf;
            local_20 = 7;
            local_8 = FUN_006e5fe0(local_38,&local_30);
          }
          piVar6 = (int *)local_38[0x19];
          iVar4 = iVar4 + 0x70;
        } while (*(int *)((int)piVar6 + iVar4) != 0);
      }
      piVar6 = (int *)local_38[0x19];
      if (*piVar6 != 0) {
        iVar4 = 0;
        do {
          if (*(int *)((int)piVar6 + iVar4 + 0x44) != 0) {
            *(undefined4 *)((int)piVar6 + iVar4 + 0x44) = 0;
            if (*(int *)(local_38[0x19] + iVar4 + 0x60) != 0) {
              local_8 = FUN_006e5fe0(local_38,(undefined4 *)(local_38[0x19] + iVar4 + 0x50));
            }
          }
          iVar4 = iVar4 + 0x70;
          *(undefined4 *)(local_38[0x19] + -0x24 + iVar4) = 0;
          piVar6 = (int *)local_38[0x19];
        } while (*(int *)((int)piVar6 + iVar4) != 0);
      }
      local_1c = (undefined4 *)local_38[2];
      local_20 = 0x14;
      FUN_006e6000(local_38,3,1,&local_30);
      local_38[0x1d] = local_38[0x1d] | 0x70000000;
    }
    break;
  case 0x20:
    uVar10 = param_1[5];
    local_38[0x1d] = local_38[0x1d] & 0xff000000U | uVar10;
    if (((uVar10 & 0xffffff) == 0) && (piVar6 = (int *)local_38[0x19], *piVar6 != 0)) {
      iVar4 = 0;
      do {
        if (*(int *)((int)piVar6 + iVar4 + 0x44) != 0) {
          *(undefined4 *)((int)piVar6 + iVar4 + 0x44) = 0;
          if (*(int *)(local_38[0x19] + iVar4 + 0x60) != 0) {
            local_8 = FUN_006e5fe0(local_38,(undefined4 *)(local_38[0x19] + iVar4 + 0x50));
          }
        }
        piVar6 = (int *)local_38[0x19];
        iVar4 = iVar4 + 0x70;
      } while (*(int *)((int)piVar6 + iVar4) != 0);
    }
    break;
  case 0x21:
    param_1[5] = local_38[0x1d];
    break;
  case 0x22:
    iVar4 = FUN_007233f0((int)local_38);
    if (-1 < iVar4) {
      *(undefined4 *)(local_38[0x19] + 4 + iVar4 * 0x70) = 0;
      iVar4 = (**(code **)(*local_38 + 4))(local_38[0x19] + iVar4 * 0x70);
      if (iVar4 != 0) goto LAB_00723d89;
    }
    local_38[0x1a] = param_1[5];
    iVar4 = FUN_007233f0((int)local_38);
    if (-1 < iVar4) {
      iVar4 = iVar4 * 0x70;
      *(undefined4 *)(local_38[0x19] + 4 + iVar4) = 1;
      iVar7 = (**(code **)(*local_38 + 4))(local_38[0x19] + iVar4);
      if (iVar7 != 0) goto LAB_00723d89;
      if ((short)param_1[6] == 0) {
        local_38[0xe] = local_38[0x19] + iVar4;
        iVar4 = FUN_006e6020(local_38,local_38 + 9);
        goto joined_r0x00723c77;
      }
    }
    break;
  case 0x23:
    puVar9 = (uint *)local_38[0x19];
    iVar4 = 0;
    uVar10 = *puVar9;
    if (uVar10 != 0) {
      do {
        if (uVar10 == *(ushort *)(param_1 + 5)) {
          iVar4 = iVar4 * 0x70;
          *(uint *)(local_38[0x19] + 4 + iVar4) = (uint)*(ushort *)((int)param_1 + 0x16);
          iVar7 = local_38[0x19] + iVar4;
          if ((*(int *)(iVar7 + 4) == 2) && (*(int *)(iVar7 + 0x44) != 0)) {
            *(undefined4 *)(iVar7 + 0x44) = 0;
            if (*(int *)(local_38[0x19] + 0x60 + iVar4) != 0) {
              local_8 = FUN_006e5fe0(local_38,(undefined4 *)(local_38[0x19] + iVar4 + 0x50));
            }
          }
          iVar4 = (**(code **)(*local_38 + 4))(local_38[0x19] + iVar4);
          goto joined_r0x00723c77;
        }
        uVar10 = puVar9[0x1c];
        puVar9 = puVar9 + 0x1c;
        iVar4 = iVar4 + 1;
      } while (uVar10 != 0);
    }
    break;
  case 0x24:
    uVar10 = local_38[0x1d];
    if ((uVar10 & 0x80000000) == 0) {
      if (((uVar10 & 0x70000000) == 0) && (piVar6 = (int *)local_38[0x19], *piVar6 != 0)) {
        iVar4 = 0;
        do {
          if (*(int *)((int)piVar6 + iVar4 + 0x1c) == 0) {
            local_78 = *(undefined4 *)((int)piVar6 + iVar4 + 0xc);
            local_74 = *(undefined4 *)((int)piVar6 + iVar4 + 0x10);
            local_70 = *(undefined4 *)((int)piVar6 + iVar4 + 0x14);
            local_6c = *(undefined4 *)((int)piVar6 + iVar4 + 0x18);
            local_30 = local_38[2];
            local_1c = &local_78;
            local_2c = 2;
            local_24 = 0xf;
            local_20 = 7;
            FUN_006e5fe0(local_38,&local_30);
          }
          piVar6 = (int *)local_38[0x19];
          iVar4 = iVar4 + 0x70;
        } while (*(int *)((int)piVar6 + iVar4) != 0);
      }
    }
    else {
      local_38[6] = 0;
      local_38[0x1d] = uVar10 & 0x7fffffff;
    }
    piVar6 = (int *)local_38[0x19];
    if (*piVar6 != 0) {
      iVar4 = 0;
      do {
        piVar6[3] = piVar6[3] + (int)(short)param_1[5];
        piVar6 = (int *)(local_38[0x19] + 0x10 + iVar4);
        piVar12 = (int *)(local_38[0x19] + 0x10 + iVar4);
        iVar4 = iVar4 + 0x70;
        *piVar12 = *piVar6 + (int)*(short *)((int)param_1 + 0x16);
        piVar6 = (int *)(local_38[0x19] + iVar4);
      } while (*piVar6 != 0);
    }
    if ((((local_38[0x1d] & 0x70000000U) == 0) && (local_38[7] != 0)) &&
       (piVar6 = (int *)local_38[0x19], *piVar6 != 0)) {
      iVar4 = 0;
      do {
        if (*(int *)((int)piVar6 + iVar4 + 0x1c) == 0) {
          local_58 = *(undefined4 *)((int)piVar6 + iVar4 + 0xc);
          local_54 = *(undefined4 *)((int)piVar6 + iVar4 + 0x10);
          local_50 = *(undefined4 *)((int)piVar6 + iVar4 + 0x14);
          local_4c = *(undefined4 *)((int)piVar6 + iVar4 + 0x18);
          local_1c = &local_58;
          local_24 = 0xf;
          local_20 = 6;
          local_8 = FUN_006e5fe0(local_38,&local_30);
        }
        piVar6 = (int *)local_38[0x19];
        iVar4 = iVar4 + 0x70;
      } while (*(int *)((int)piVar6 + iVar4) != 0);
    }
    piVar6 = (int *)local_38[0x19];
    if (*piVar6 != 0) {
      iVar4 = 0;
      do {
        if (*(int *)((int)piVar6 + iVar4 + 0x44) != 0) {
          *(undefined4 *)((int)piVar6 + iVar4 + 0x44) = 0;
          if (*(int *)(local_38[0x19] + 0x60 + iVar4) != 0) {
            local_8 = FUN_006e5fe0(local_38,(undefined4 *)(local_38[0x19] + iVar4 + 0x50));
          }
        }
        iVar4 = iVar4 + 0x70;
        *(undefined4 *)(local_38[0x19] + -0x24 + iVar4) = 0;
        piVar6 = (int *)local_38[0x19];
      } while (*(int *)((int)piVar6 + iVar4) != 0);
    }
    local_28 = 1;
    local_24 = 3;
    local_20 = 0x15;
    local_18 = FUN_006e5fe0(local_38,&local_30);
    if (local_18 == 0) {
      local_20 = 0x60;
      (**(code **)*local_38)(&local_30);
    }
    DAT_00858df8 = (undefined4 *)local_bc;
    return 0;
  case 0x25:
    param_1[5] = local_38[0x1a];
    break;
  case 0x2d:
    iVar4 = FUN_007233f0((int)local_38);
    if (-1 < iVar4) {
      *(undefined4 *)(local_38[0x19] + 4 + iVar4 * 0x70) = 0;
      iVar4 = (**(code **)(*local_38 + 4))(local_38[0x19] + iVar4 * 0x70);
      if (iVar4 != 0) goto LAB_00723d89;
    }
    local_38[0x1a] = param_1[5];
    iVar4 = FUN_007233f0((int)local_38);
    if (-1 < iVar4) {
      *(undefined4 *)(local_38[0x19] + 4 + iVar4 * 0x70) = 1;
      iVar4 = (**(code **)(*local_38 + 4))(local_38[0x19] + iVar4 * 0x70);
joined_r0x00723c77:
      if (iVar4 != 0) goto LAB_00723d89;
    }
  }
  goto switchD_00723488_caseD_4;
LAB_00723867:
  piVar6 = (int *)local_38[0x19];
  iVar4 = iVar4 + 0x70;
  if (*(int *)((int)piVar6 + iVar4) == 0) goto switchD_00723488_caseD_4;
  goto LAB_00723833;
LAB_00724056:
  local_8 = 0xffff;
  goto switchD_00723db1_caseD_1;
  while( true ) {
    piVar6 = (int *)local_38[0x19];
    iVar4 = iVar4 + 0x70;
    if (*(int *)((int)piVar6 + iVar4) == 0) break;
LAB_00723991:
    iVar7 = (**(code **)(*local_38 + 4))((int)piVar6 + iVar4);
    if (iVar7 != 0) goto LAB_00723d89;
  }
switchD_00723488_caseD_4:
  if (local_38[0x1d] == 1) {
    switch(param_1[4]) {
    case 0:
      piVar6 = (int *)local_38[0x19];
      if (*piVar6 != 0) {
        iVar4 = 0;
        do {
          if ((*(int *)(iVar4 + 0x48 + (int)piVar6) != 0) &&
             (*(int *)(iVar4 + 0x4c + (int)piVar6) != 0)) {
            iVar7 = iVar4 + local_38[0x19];
            DVar8 = timeGetTime();
            if (((uint)(*(int *)(iVar7 + 0x4c) + *(int *)(iVar7 + 0x48)) <= DVar8) &&
               (*(int *)(iVar7 + 0x44) == 0)) {
              *(undefined4 *)(iVar7 + 0x44) = 1;
              if (*(int *)(iVar4 + 0x34 + local_38[0x19]) != 0) {
                local_8 = FUN_006e5fe0(local_38,(undefined4 *)(iVar4 + local_38[0x19] + 0x24));
              }
            }
          }
          piVar6 = (int *)local_38[0x19];
          iVar4 = iVar4 + 0x70;
        } while (*(int *)(iVar4 + (int)piVar6) != 0);
      }
      break;
    case 0x2b:
      *(short *)(param_1 + 5) = (short)local_38[0x1b];
      break;
    case 0x60:
      piVar12 = (int *)(uint)*(ushort *)(param_1 + 6);
      local_10 = (uint)*(ushort *)((int)param_1 + 0x1a);
      piVar6 = (int *)local_38[0x19];
      local_38[0x1b] = 0;
      local_c = piVar12;
      if (*piVar6 != 0) {
        iVar4 = 0;
        do {
          iVar7 = *(int *)((int)piVar6 + iVar4 + 0xc);
          if ((((((int)piVar12 < iVar7) ||
                (*(int *)((int)piVar6 + iVar4 + 0x14) + iVar7 <= (int)piVar12)) ||
               (iVar7 = *(int *)((int)piVar6 + iVar4 + 0x10), (int)local_10 < iVar7)) ||
              (*(int *)((int)piVar6 + iVar4 + 0x18) + iVar7 <= (int)local_10)) ||
             (((iVar1 = *(int *)((int)piVar6 + iVar4 + 0x1c), iVar1 != 0 && (iVar1 != -1)) &&
              (bVar3 = FUN_006b55c0(iVar1,*(int *)((int)piVar6 + iVar4 + 0x20),
                                    (int)local_c - *(int *)((int)piVar6 + iVar4 + 0xc),
                                    local_10 - iVar7), piVar12 = local_c,
              CONCAT31(extraout_var_01,bVar3) == 0)))) {
            if (*(int *)(local_38[0x19] + 0x44 + iVar4) != 0) {
              *(undefined4 *)(local_38[0x19] + 0x44 + iVar4) = 0;
              if (*(int *)(local_38[0x19] + iVar4 + 0x60) != 0) {
                local_8 = FUN_006e5fe0(local_38,(undefined4 *)(local_38[0x19] + iVar4 + 0x50));
              }
            }
            *(undefined4 *)(local_38[0x19] + 0x4c + iVar4) = 0;
            if ((local_38[0x1c] != 0) &&
               (piVar6 = (int *)(local_38[0x19] + iVar4), *(int *)(local_38[0x19] + 4 + iVar4) == 3)
               ) {
              piVar6[1] = (uint)(*piVar6 == local_38[0x1a]);
              iVar7 = (**(code **)(*local_38 + 4))(local_38[0x19] + iVar4);
joined_r0x00723f55:
              if (iVar7 != 0) goto LAB_00724056;
            }
          }
          else {
            local_38[0x1b] = 1;
            iVar7 = local_38[0x19] + iVar4;
            if (*(int *)(local_38[0x19] + 4 + iVar4) != 2) {
              if (*(int *)(iVar7 + 0x34) != 0) {
                if (*(int *)(iVar7 + 0x48) == 0) {
                  *(undefined4 *)(iVar7 + 0x44) = 1;
                  local_8 = FUN_006e5fe0(local_38,(undefined4 *)(local_38[0x19] + 0x24 + iVar4));
                }
                else {
                  if (*(int *)(iVar7 + 0x4c) == 0) {
                    *(undefined4 *)(iVar7 + 0x44) = 0;
                  }
                  DVar8 = timeGetTime();
                  *(DWORD *)(local_38[0x19] + 0x4c + iVar4) = DVar8;
                }
              }
              if (local_38[0x1c] != 0) {
                *(uint *)(local_38[0x19] + iVar4 + 8) =
                     (uint)(*(int *)(local_38[0x19] + iVar4) == local_38[0x1a]);
                *(undefined4 *)(local_38[0x19] + 4 + iVar4) = 3;
                iVar7 = (**(code **)(*local_38 + 4))(local_38[0x19] + iVar4);
                goto joined_r0x00723f55;
              }
            }
          }
          piVar6 = (int *)local_38[0x19];
          iVar4 = iVar4 + 0x70;
        } while (*(int *)((int)piVar6 + iVar4) != 0);
      }
      break;
    case 0x61:
      local_34 = 0;
      piVar12 = (int *)(uint)*(ushort *)(param_1 + 6);
      local_10 = (uint)*(ushort *)((int)param_1 + 0x1a);
      piVar6 = (int *)local_38[0x19];
      local_c = piVar12;
      if (*piVar6 != 0) {
        iVar4 = 0;
        do {
          iVar7 = *(int *)(iVar4 + 0xc + (int)piVar6);
          if (((((iVar7 <= (int)piVar12) &&
                ((int)piVar12 < *(int *)(iVar4 + 0x14 + (int)piVar6) + iVar7)) &&
               (iVar7 = *(int *)(iVar4 + 0x10 + (int)piVar6), iVar7 <= (int)local_10)) &&
              ((int)local_10 < *(int *)(iVar4 + 0x18 + (int)piVar6) + iVar7)) &&
             ((((iVar1 = *(int *)(iVar4 + 0x1c + (int)piVar6), iVar1 == 0 || (iVar1 == -1)) ||
               (bVar3 = FUN_006b55c0(iVar1,*(int *)(iVar4 + 0x20 + (int)piVar6),
                                     (int)local_c - *(int *)(iVar4 + 0xc + (int)piVar6),
                                     local_10 - iVar7), piVar12 = local_c,
               CONCAT31(extraout_var_02,bVar3) != 0)) &&
              ((local_38[0x1a] != *(int *)(local_38[0x19] + iVar4) &&
               (*(int *)(local_38[0x19] + iVar4 + 4) != 2)))))) {
            iVar4 = FUN_007233f0((int)local_38);
            if (-1 < iVar4) {
              *(undefined4 *)(iVar4 * 0x70 + 4 + local_38[0x19]) = 0;
              iVar4 = (**(code **)(*local_38 + 4))(iVar4 * 0x70 + local_38[0x19]);
              if (iVar4 != 0) goto LAB_00724056;
              iVar7 = local_34 * 0x70;
              local_38[0x1a] = *(int *)(local_38[0x19] + iVar7);
              ((int *)(local_38[0x19] + iVar7))[1] = 1;
              iVar4 = (**(code **)(*local_38 + 4))(local_38[0x19] + iVar7);
              if (iVar4 == 0) {
                local_38[0xe] = local_38[0x19] + iVar7;
                iVar4 = FUN_006e6020(local_38,local_38 + 9);
                if (iVar4 != 0) {
                  local_8 = 0xffff;
                }
              }
              else {
                local_8 = 0xffff;
              }
            }
            break;
          }
          iVar4 = iVar4 + 0x70;
          local_34 = local_34 + 1;
          piVar6 = (int *)local_38[0x19];
        } while (*(int *)(iVar4 + (int)piVar6) != 0);
      }
    }
  }
switchD_00723db1_caseD_1:
  if (local_8 != 0) {
    FUN_006a5e40(local_8,DAT_007ed77c,0x7f0bac,0x15f);
  }
  iVar4 = FUN_006e5fd0();
  if (iVar4 != 0) {
    local_8 = iVar4;
    FUN_006a5e40(iVar4,DAT_007ed77c,0x7f0bac,0x161);
  }
  DAT_00858df8 = (undefined4 *)local_bc;
  return iVar4;
}

