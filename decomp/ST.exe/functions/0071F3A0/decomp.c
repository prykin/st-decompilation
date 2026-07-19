
int FUN_0071f3a0(int *param_1)

{
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  int *piVar7;
  int *piVar8;
  void *unaff_EDI;
  int *piVar9;
  int iVar10;
  undefined4 uVar11;
  InternalExceptionFrame local_9c;
  int local_58 [8];
  int local_38;
  int *local_34;
  int local_30;
  int local_2c [5];
  int *local_18;
  uint local_14;
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_9c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_9c;
  iVar3 = __setjmp3(local_9c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_9c.previous;
    iVar3 = ReportDebugMessage(s_E__Ourlib__slist_cpp_007f0ae4,0x239,0,iVar3,&DAT_007a4ccc,
                               s_ListClassTy__GetMessage_Error___007f0ac4);
    if (iVar3 != 0) {
      pcVar2 = (code *)swi(3);
      iVar3 = (*pcVar2)();
      return iVar3;
    }
    RaiseInternalException(0xffff,0,s_E__Ourlib__slist_cpp_007f0ae4,0x23a);
    return 0xffff;
  }
  switch(param_1[4]) {
  case 2:
    piVar8 = (int *)param_1[5];
    local_8 = piVar8;
    if (piVar8 != (int *)0x0) {
      local_34[0x4d] = piVar8[1];
      local_34[7] = *piVar8;
      local_34[9] = piVar8[2];
      local_34[10] = piVar8[3];
      local_34[0xb] = piVar8[4];
      local_34[0xc] = piVar8[5];
      local_34[0x81] = piVar8[6];
      local_34[0x82] = piVar8[7];
      iVar3 = piVar8[0x134];
      local_34[0x7b] = iVar3;
      local_34[0x7c] = iVar3;
      piVar7 = piVar8 + 8;
      piVar9 = local_34 + 0x50;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_34[0x57] = (int)local_34;
      piVar7 = piVar8 + 0x10;
      piVar9 = local_34 + 0x58;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_34[0x67] = (int)local_34;
      piVar7 = piVar8 + 0x18;
      piVar9 = local_34 + 0x60;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_34[0x5f] = (int)local_34;
      piVar7 = piVar8 + 0x28;
      piVar9 = local_34 + 0xf;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_34[0x16] = (int)local_34;
      piVar7 = piVar8 + 0x20;
      piVar9 = local_34 + 0x68;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_34[0x6f] = (int)local_34;
      piVar7 = piVar8 + 0x30;
      piVar9 = local_34 + 0x70;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_34[0x77] = (int)local_34;
      piVar7 = piVar8 + 0x38;
      piVar9 = local_34 + 0x37;
      for (iVar3 = 0x13; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar9 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar9 = piVar9 + 1;
      }
      local_34[0x4f] = 0;
      local_34[0x4e] = 0;
      local_34[0xd] = (uint)(piVar8[0x132] == 0);
      local_34[0xe] = (uint)(piVar8[0x133] == 0);
      if (piVar8[0x4b] != 0) {
        piVar8[0x4c] = 0;
        piVar8[0x54] = local_34[2];
        piVar8[0x55] = 2;
        piVar8[0x56] = 0x2f;
        iVar3 = (**(code **)(*(int *)local_34[3] + 8))
                          (piVar8[0x4b],local_34 + 0x78,0,piVar8 + 0x4c,0);
        if (iVar3 != 0) goto LAB_0071fe89;
      }
      if (piVar8[0xab] != 0) {
        piVar8[0xb4] = local_34[2];
        piVar8[0xb5] = 2;
        piVar8[0xb6] = 0x30;
        iVar3 = (**(code **)(*(int *)local_34[3] + 8))
                          (piVar8[0xab],local_34 + 0x79,0,piVar8 + 0xac,0);
        if (iVar3 != 0) goto LAB_0071fe89;
      }
      if (piVar8[0x10b] != 0) {
        iVar3 = local_34[2];
        piVar8[0x119] = 2;
        piVar8[0x118] = iVar3;
        piVar8[0x11a] = 0x2c;
        piVar8[0x12e] = local_34[0x81];
        piVar8[0x12f] = local_34[0x4e];
        iVar3 = (**(code **)(*(int *)local_34[3] + 8))
                          (piVar8[0x10b],local_34 + 0x7a,0,piVar8 + 0x10c,0);
        if (iVar3 != 0) goto LAB_0071fe89;
      }
      if ((local_34[7] == 0) || (local_34[0x81] == 0)) {
        local_2c[4] = 0x20;
        local_18 = (int *)0x0;
        (**(code **)*local_34)(local_2c);
      }
      break;
    }
    goto LAB_0071fe89;
  case 3:
    if (local_34[0x78] != 0) {
      FUN_006e56b0((void *)local_34[3],local_34[0x78]);
    }
    if (local_34[0x79] != 0) {
      FUN_006e56b0((void *)local_34[3],local_34[0x79]);
    }
    if (local_34[0x7a] != 0) {
      FUN_006e56b0((void *)local_34[3],local_34[0x7a]);
    }
    break;
  case 8:
    if ((local_34[7] & 0x70000000U) != 0) {
      local_18 = (int *)local_34[2];
      local_14 = -(uint)(local_34[0x7b] != 0) & 2;
      local_2c[2] = 1;
      local_2c[3] = 3;
      local_2c[4] = 0x13;
      iVar3 = FUN_006e5fe0(local_34,local_2c);
      if (iVar3 != 0) goto LAB_0071fe89;
      if ((((*(byte *)(local_34 + 0x37) & 8) != 0) && (local_34[0x38] != 0)) ||
         ((char)local_34[0x38] != '\0')) {
        local_34[0x3c] = local_34[2];
        local_34[0x3d] = 2;
        local_34[0x3e] = 0x2d;
        local_2c[4] = 0x10;
        local_18 = local_34 + 0x37;
        iVar3 = FUN_006e5fe0(local_34,local_2c);
        if (iVar3 != 0) goto LAB_0071fe89;
        local_34[0x4a] = 1;
      }
      if (((local_34[7] & 0xffffffU) == 1) && (local_34[0x6c] != 0)) {
        local_34[0x6d] = local_34[0x4e];
        FUN_006e5fe0(local_34,local_34 + 0x68);
      }
    }
    break;
  case 9:
    if ((local_34[7] & 0x70000000U) == 0) {
      local_18 = (int *)local_34[2];
      local_14 = -(uint)(local_34[0x7b] != 0) & 2;
      local_2c[2] = 1;
      local_2c[3] = 3;
      local_2c[4] = 0x14;
      iVar3 = FUN_006e5fe0(local_34,local_2c);
      if (iVar3 != 0) goto LAB_0071fe89;
      if ((((*(byte *)(local_34 + 0x37) & 8) != 0) && (local_34[0x38] != 0)) ||
         ((char)local_34[0x38] != '\0')) {
        local_2c[4] = 0x11;
        local_18 = local_34 + 0x37;
        iVar3 = FUN_006e5fe0(local_34,local_2c);
        if (iVar3 != 0) goto LAB_0071fe89;
        local_34[0x4a] = 0;
      }
    }
    break;
  case 0x20:
    local_2c[4] = 0x20;
    local_18 = (int *)(local_34[7] & 0xff000000U | param_1[5]);
    local_34[7] = (int)local_18;
    if (local_34[0x7a] != 0) {
      FUN_006e6080(local_34,0x80000002,local_34[0x7a],local_2c);
    }
    if ((local_34[7] & 0xffffffU) == 0) {
      local_18 = (int *)0x0;
      if (local_34[0x78] != 0) {
        FUN_006e6080(local_34,0x80000002,local_34[0x78],local_2c);
      }
      iVar3 = local_34[0x79];
      if (iVar3 != 0) {
        piVar8 = local_2c;
        uVar11 = 0x80000002;
LAB_0071fe77:
        FUN_006e6080(local_34,uVar11,iVar3,piVar8);
      }
    }
    else {
      if (local_34[0x78] != 0) {
        local_18 = (int *)(uint)(local_34[0x4e] != 0);
        FUN_006e6080(local_34,0x80000002,local_34[0x78],local_2c);
      }
      iVar3 = local_34[0x79];
      if (iVar3 != 0) {
        piVar8 = local_2c;
        local_18 = (int *)(uint)(local_34[0x4e] < local_34[0x81] + -1);
        uVar11 = 0x80000002;
        goto LAB_0071fe77;
      }
    }
    goto LAB_0071fe7e;
  case 0x22:
    iVar3 = param_1[5];
    if (iVar3 < local_34[0x81]) {
      piVar8 = param_1;
      piVar7 = local_58;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar7 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar7 = piVar7 + 1;
      }
      local_34[0x4e] = iVar3;
      if (local_34[0x6c] != 0) {
        local_34[0x6d] = iVar3;
        FUN_006e5fe0(local_34,local_34 + 0x68);
      }
      if (*(short *)((int)param_1 + 0x1a) != 0) {
        iVar5 = 0;
        iVar3 = 0;
        if (0 < local_34[0x81]) {
          do {
            iVar10 = (**(code **)(*local_34 + 8))(iVar3,iVar3 == local_34[0x4e]);
            if (local_34[0xc] < iVar10 + iVar5) break;
            iVar5 = iVar5 + local_34[0x82] + iVar10;
            iVar3 = iVar3 + 1;
          } while (iVar3 < local_34[0x81]);
        }
        iVar5 = local_34[0x4e] - iVar3 / 2;
        local_34[0x4f] = iVar5;
        if (local_34[0x81] < iVar5 + iVar3) {
          local_34[0x4f] = local_34[0x81] - iVar3;
        }
        if (local_34[0x4f] < 0) {
          local_34[0x4f] = 0;
        }
      }
      if (local_34[0x4e] < local_34[0x4f]) {
        local_34[0x4f] = local_34[0x4e];
      }
      do {
        iVar3 = local_34[0x4f];
        iVar5 = local_34[0x4e];
        iVar10 = 0;
        local_8 = (int *)0x0;
        if (iVar3 <= iVar5) {
          do {
            iVar4 = (**(code **)(*local_34 + 8))(iVar3,iVar3 == iVar5);
            if (local_34[0xc] < iVar4 + iVar10) {
              local_8 = (int *)0x1;
              local_34[0x4f] = local_34[0x4f] + 1;
              break;
            }
            iVar5 = local_34[0x4e];
            iVar10 = iVar10 + local_34[0x82] + iVar4;
            iVar3 = iVar3 + 1;
          } while (iVar3 <= iVar5);
        }
      } while (local_8 != (int *)0x0);
      if ((local_34[7] & 0xffffffU) != 0) {
        if (local_34[0x78] != 0) {
          local_2c[4] = 0x20;
          local_18 = (int *)(uint)(local_34[0x4e] != 0);
          FUN_006e6080(local_34,2,local_34[0x78],local_2c);
        }
        if (local_34[0x79] != 0) {
          local_18 = (int *)(uint)(local_34[0x4e] < local_34[0x81] + -1);
          local_2c[4] = 0x20;
          FUN_006e6080(local_34,2,local_34[0x79],local_2c);
        }
      }
      iVar3 = local_34[0x7a];
      if (iVar3 != 0) {
        piVar8 = local_58;
        uVar11 = 2;
        goto LAB_0071fe77;
      }
      goto LAB_0071fe7e;
    }
    break;
  case 0x24:
    iVar3 = local_34[0x78];
    piVar8 = param_1;
    piVar7 = local_2c;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *piVar7 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar7 = piVar7 + 1;
    }
    if (iVar3 != 0) {
      FUN_006e6080(local_34,2,iVar3,local_2c);
    }
    if (local_34[0x79] != 0) {
      FUN_006e6080(local_34,2,local_34[0x79],local_2c);
    }
    if (local_34[0x7a] != 0) {
      FUN_006e6080(local_34,2,local_34[0x7a],local_2c);
    }
    break;
  case 0x26:
    param_1[5] = local_34[0x4e];
    break;
  case 0x27:
    param_1[5] = local_34[0x4f];
    break;
  case 0x28:
    local_38 = local_34[0x81];
    local_30 = local_34[0x4f];
    piVar8 = (int *)local_34[0x4e];
    piVar7 = param_1;
    piVar9 = local_2c;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar9 = *piVar7;
      piVar7 = piVar7 + 1;
      piVar9 = piVar9 + 1;
    }
    local_34[0x81] = param_1[5];
    local_34[0x4e] = 0;
    local_34[0x4f] = 0;
    local_8 = piVar8;
    if (local_34[0x6c] != 0) {
      local_34[0x6d] = 0;
      FUN_006e5fe0(local_34,local_34 + 0x68);
    }
    if (local_34[0x7a] != 0) {
      FUN_006e6080(local_34,2,local_34[0x7a],local_2c);
    }
    iVar3 = local_34[0x81];
    if (iVar3 == 0) {
      local_2c[4] = 0x20;
      local_18 = (int *)0x0;
      (**(code **)*local_34)(local_2c);
      iVar3 = (**(code **)(*local_34 + 4))();
    }
    else {
      if ((short)param_1[6] != 0) {
        if ((int)local_8 < 0) {
          local_34[0x4e] = 0;
        }
        else if ((int)local_8 < iVar3) {
          local_34[0x4e] = (int)local_8;
        }
        else {
          local_34[0x4e] = iVar3 + -1;
        }
        if (((local_30 < 0) || (iVar3 <= local_30)) || (local_8 == (int *)(local_38 + -1))) {
          local_34[0x4f] = 0;
        }
        else {
          local_34[0x4f] = local_30;
        }
        if (local_34[0x4e] < local_34[0x4f]) {
          local_34[0x4f] = local_34[0x4e];
        }
        do {
          iVar3 = local_34[0x4f];
          iVar5 = local_34[0x4e];
          iVar10 = 0;
          local_8 = (int *)0x0;
          if (iVar3 <= iVar5) {
            do {
              iVar4 = (**(code **)(*local_34 + 8))(iVar3,iVar3 == iVar5);
              if (local_34[0xc] < iVar4 + iVar10) {
                local_8 = (int *)0x1;
                local_34[0x4f] = local_34[0x4f] + 1;
                break;
              }
              iVar5 = local_34[0x4e];
              iVar10 = iVar10 + local_34[0x82] + iVar4;
              iVar3 = iVar3 + 1;
            } while (iVar3 <= iVar5);
          }
        } while (local_8 != (int *)0x0);
        piVar8 = local_2c;
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
        local_2c[4] = 0x22;
        local_18 = (int *)(uint)*(ushort *)(local_34 + 0x4e);
        if (local_34[0x7a] != 0) {
          FUN_006e6080(local_34,2,local_34[0x7a],local_2c);
        }
        if (local_34[0x6c] != 0) {
          local_34[0x6d] = local_34[0x4e];
          FUN_006e5fe0(local_34,local_34 + 0x68);
        }
      }
      if ((local_34[7] & 0xffffffU) != 0) {
        if (local_34[0x7a] != 0) {
          local_18 = (int *)(uint)(1 < local_34[0x81]);
          local_2c[4] = 0x20;
          FUN_006e6080(local_34,0x80000002,local_34[0x7a],local_2c);
        }
        if (local_34[0x78] != 0) {
          local_2c[4] = 0x20;
          local_18 = (int *)(uint)(local_34[0x4e] != 0);
          FUN_006e6080(local_34,0x80000002,local_34[0x78],local_2c);
        }
        if (local_34[0x79] != 0) {
          local_18 = (int *)(uint)(local_34[0x4e] < local_34[0x81] + -1);
          local_2c[4] = 0x20;
          FUN_006e6080(local_34,0x80000002,local_34[0x79],local_2c);
        }
      }
      iVar3 = (**(code **)(*local_34 + 4))();
    }
    goto LAB_0071fe85;
  case 0x55:
    local_34[0x7c] = 1;
    break;
  case 0x56:
    local_34[0x7c] = 0;
    break;
  case 0x5a:
    local_34[0x3e] = 0x2c;
    local_34[0x44] = local_34[2];
    local_34[0x3c] = local_34[2];
    local_34[0x46] = 0x2e;
    local_34[0x45] = 2;
    local_34[0x3d] = 2;
    break;
  case 0x5c:
    uVar1 = *(ushort *)(param_1 + 5);
    local_34[0x4f] = (uint)uVar1;
    if (local_34[0x4e] < (int)(uint)uVar1) {
      local_34[0x4f] = local_34[0x4e];
    }
    do {
      iVar3 = local_34[0x4f];
      iVar5 = local_34[0x4e];
      iVar10 = 0;
      local_8 = (int *)0x0;
      if (iVar3 <= iVar5) {
        do {
          iVar4 = (**(code **)(*local_34 + 8))(iVar3,iVar3 == iVar5);
          if (local_34[0xc] < iVar4 + iVar10) {
            local_8 = (int *)0x1;
            local_34[0x4f] = local_34[0x4f] + 1;
            break;
          }
          iVar5 = local_34[0x4e];
          iVar10 = iVar10 + local_34[0x82] + iVar4;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= iVar5);
      }
    } while (local_8 != (int *)0x0);
LAB_0071fe7e:
    iVar3 = (**(code **)(*local_34 + 4))();
LAB_0071fe85:
    if (iVar3 != 0) {
LAB_0071fe89:
      local_c = 0xffff;
    }
  }
  if (local_34[7] != 1) goto switchD_0071feee_caseD_2e;
  switch(param_1[4]) {
  case 0x2b:
    *(undefined2 *)(param_1 + 5) = 0;
    if (local_34[0x7d] != 0) {
      *(short *)(param_1 + 5) = (short)local_34[0x7d];
      break;
    }
    local_2c[3] = 2;
    local_2c[4] = 0x2b;
    if (local_34[0x78] == 0) {
LAB_00720766:
      if (local_34[0x79] != 0) {
        local_2c[2] = local_34[0x79];
        FUN_006e6060(local_34,local_2c);
        if ((short)local_18 != 0) goto LAB_007207a4;
      }
      if (local_34[0x7a] == 0) break;
      local_2c[2] = local_34[0x7a];
      FUN_006e6060(local_34,local_2c);
      if ((short)local_18 == 0) break;
    }
    else {
      local_2c[2] = local_34[0x78];
      FUN_006e6060(local_34,local_2c);
      if ((short)local_18 == 0) goto LAB_00720766;
    }
LAB_007207a4:
    *(undefined2 *)(param_1 + 5) = 1;
    break;
  case 0x2c:
    iVar3 = param_1[5];
    local_34[0x4e] = iVar3;
    if (local_34[0x6c] != 0) {
      local_34[0x6d] = iVar3;
      FUN_006e5fe0(local_34,local_34 + 0x68);
    }
    if (local_34[0x78] != 0) {
      local_2c[4] = 0x20;
      local_18 = (int *)(uint)(local_34[0x4e] != 0);
      FUN_006e6080(local_34,2,local_34[0x78],local_2c);
    }
    if (local_34[0x79] != 0) {
      local_18 = (int *)(uint)(local_34[0x4e] < local_34[0x81] + -1);
      local_2c[4] = 0x20;
      FUN_006e6080(local_34,2,local_34[0x79],local_2c);
    }
    if (local_34[0x4e] < local_34[0x4f]) {
      local_34[0x4f] = local_34[0x4e];
    }
    do {
      iVar3 = local_34[0x4f];
      iVar5 = local_34[0x4e];
      iVar10 = 0;
      local_8 = (int *)0x0;
      if (iVar3 <= iVar5) {
        do {
          iVar4 = (**(code **)(*local_34 + 8))(iVar3,iVar3 == iVar5);
          if (local_34[0xc] < iVar4 + iVar10) {
            local_8 = (int *)0x1;
            local_34[0x4f] = local_34[0x4f] + 1;
            break;
          }
          iVar5 = local_34[0x4e];
          iVar10 = iVar10 + local_34[0x82] + iVar4;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= iVar5);
      }
    } while (local_8 != (int *)0x0);
    goto LAB_00720240;
  case 0x2d:
    local_34[0x65] = local_34[0x4e];
    iVar3 = FUN_006e6020(local_34,local_34 + 0x60);
    if (iVar3 != 0) {
      local_c = 0xffff;
    }
    break;
  case 0x30:
    goto switchD_0071feee_caseD_30;
  case 0x60:
    local_8 = (int *)(uint)*(ushort *)((int)param_1 + 0x1a);
    if ((((int)(uint)*(ushort *)(param_1 + 6) < local_34[9]) ||
        (local_34[0xb] + local_34[9] <= (int)(uint)*(ushort *)(param_1 + 6))) ||
       (((int)local_8 < local_34[10] || (local_34[0xc] + local_34[10] <= (int)local_8)))) {
      local_34[0x7d] = 0;
    }
    else if ((((*(byte *)(local_34 + 0x4d) & 1) != 0) && (local_34[0x7e] != 0)) &&
            ((*(byte *)(param_1 + 5) & 1) != 0)) {
      iVar3 = local_34[0x4f];
      iVar5 = 0;
      if (iVar3 < local_34[0x81]) {
        do {
          iVar10 = (**(code **)(*local_34 + 8))(iVar3,iVar3 == local_34[0x4e]);
          if ((local_34[10] + iVar5 <= (int)local_8) &&
             ((int)local_8 <= local_34[10] + iVar10 + local_34[0x82] + iVar5)) {
            iVar5 = local_34[0x4e];
            if ((local_34[0x7f] == iVar5) &&
               (uVar6 = iVar3 - iVar5 >> 0x1f, (iVar3 - iVar5 ^ uVar6) - uVar6 == 1)) {
              local_34[0x80] = 1;
              *(short *)(local_34 + 0x75) = (short)iVar3;
              *(short *)((int)local_34 + 0x1d6) = (short)iVar5;
              FUN_006e5fe0(local_34,local_34 + 0x70);
              local_34[0x7f] = iVar3;
              local_34[0x4e] = iVar3;
              if (local_34[0x6c] != 0) {
                local_34[0x6d] = iVar3;
                FUN_006e5fe0(local_34,local_34 + 0x68);
              }
              if (local_34[0x78] != 0) {
                local_2c[4] = 0x20;
                local_18 = (int *)(uint)(local_34[0x4e] != 0);
                FUN_006e6080(local_34,2,local_34[0x78],local_2c);
              }
              if (local_34[0x79] != 0) {
                local_18 = (int *)(uint)(local_34[0x4e] < local_34[0x81] + -1);
                local_2c[4] = 0x20;
                FUN_006e6080(local_34,2,local_34[0x79],local_2c);
              }
              if (local_34[0x7a] != 0) {
                local_18 = (int *)local_34[0x4e];
                local_2c[4] = 0x22;
                FUN_006e6080(local_34,2,local_34[0x7a],local_2c);
              }
              iVar3 = (**(code **)(*local_34 + 4))();
              if (iVar3 != 0) {
                local_c = 0xffff;
              }
            }
            break;
          }
          iVar5 = iVar5 + iVar10 + local_34[0x82];
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_34[0x81]);
      }
    }
    break;
  case 0x61:
    local_8 = (int *)(uint)*(ushort *)((int)param_1 + 0x1a);
    if ((((local_34[9] <= (int)(uint)*(ushort *)(param_1 + 6)) &&
         ((int)(uint)*(ushort *)(param_1 + 6) < local_34[0xb] + local_34[9])) &&
        (local_34[10] <= (int)local_8)) && ((int)local_8 < local_34[0xc] + local_34[10])) {
      iVar3 = local_34[0x4f];
      iVar5 = 0;
      if (iVar3 < local_34[0x81]) {
        do {
          iVar10 = (**(code **)(*local_34 + 8))(iVar3,iVar3 == local_34[0x4e]);
          if ((local_34[10] + iVar5 <= (int)local_8) &&
             ((int)local_8 <= local_34[10] + iVar10 + local_34[0x82] + iVar5)) {
            local_34[0x7f] = iVar3;
            local_34[0x7e] = 1;
            local_34[0x80] = 0;
            break;
          }
          iVar5 = iVar5 + iVar10 + local_34[0x82];
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_34[0x81]);
      }
    }
    break;
  case 0x62:
    local_8 = (int *)(uint)*(ushort *)((int)param_1 + 0x1a);
    if (((((local_34[9] <= (int)(uint)*(ushort *)(param_1 + 6)) &&
          ((int)(uint)*(ushort *)(param_1 + 6) < local_34[0xb] + local_34[9])) &&
         (local_34[10] <= (int)local_8)) &&
        (((int)local_8 < local_34[0xc] + local_34[10] && (local_34[0x7e] != 0)))) &&
       (local_34[0x80] == 0)) {
      iVar3 = local_34[0x4f];
      iVar5 = 0;
      if (iVar3 < local_34[0x81]) {
        do {
          iVar10 = (**(code **)(*local_34 + 8))(iVar3,iVar3 == local_34[0x4e]);
          if ((local_34[10] + iVar5 <= (int)local_8) &&
             ((int)local_8 <= local_34[10] + iVar10 + local_34[0x82] + iVar5)) {
            if (iVar3 != local_34[0x7f]) goto LAB_007204f7;
            if (iVar3 == local_34[0x4e]) {
              local_34[0x65] = local_34[0x4e];
              iVar3 = FUN_006e6020(local_34,local_34 + 0x60);
              if (iVar3 == 0) goto LAB_007204e5;
            }
            else {
              local_34[0x4e] = iVar3;
              if (local_34[0x6c] != 0) {
                local_34[0x6d] = iVar3;
                FUN_006e5fe0(local_34,local_34 + 0x68);
              }
              if (local_34[0x78] != 0) {
                local_2c[4] = 0x20;
                local_18 = (int *)(uint)(local_34[0x4e] != 0);
                FUN_006e6080(local_34,2,local_34[0x78],local_2c);
              }
              if (local_34[0x79] != 0) {
                local_18 = (int *)(uint)(local_34[0x4e] < local_34[0x81] + -1);
                local_2c[4] = 0x20;
                FUN_006e6080(local_34,2,local_34[0x79],local_2c);
              }
              if (local_34[0x7a] != 0) {
                local_18 = (int *)local_34[0x4e];
                local_2c[4] = 0x22;
                FUN_006e6080(local_34,2,local_34[0x7a],local_2c);
              }
              if ((*(byte *)(local_34 + 0x4d) & 3) != 0) {
                local_34[0x65] = local_34[0x4e];
                iVar3 = FUN_006e6020(local_34,local_34 + 0x60);
                if (iVar3 != 0) goto LAB_007204f0;
              }
LAB_007204e5:
              iVar3 = (**(code **)(*local_34 + 4))();
              if (iVar3 == 0) goto LAB_007204f7;
            }
LAB_007204f0:
            local_c = 0xffff;
            goto LAB_007204f7;
          }
          iVar5 = iVar5 + iVar10 + local_34[0x82];
          iVar3 = iVar3 + 1;
        } while (iVar3 < local_34[0x81]);
        local_34[0x7e] = 0;
        break;
      }
    }
LAB_007204f7:
    local_34[0x7e] = 0;
    break;
  case 0x67:
    if ((local_34[0x7b] == 0) || (local_34[0x7c] == 0)) break;
  case 0x2f:
    if ((local_34[0x4e] == local_34[0x81] + -1) && (local_34[0x79] != 0)) {
      local_2c[4] = 0x20;
      local_18 = (int *)0x1;
      FUN_006e6080(local_34,2,local_34[0x79],local_2c);
    }
    if (0 < local_34[0x4e]) {
      local_34[0x4e] = local_34[0x4e] + -1;
    }
    if (local_34[0x6c] != 0) {
      local_34[0x6d] = local_34[0x4e];
      FUN_006e5fe0(local_34,local_34 + 0x68);
    }
    if ((local_34[0x4e] == 0) && (local_34[0x78] != 0)) {
      local_2c[4] = 0x20;
      local_18 = (int *)0x0;
      FUN_006e6080(local_34,2,local_34[0x78],local_2c);
    }
    if (local_34[0x7a] != 0) {
      local_18 = (int *)local_34[0x4e];
      local_2c[4] = 0x22;
      FUN_006e6080(local_34,2,local_34[0x7a],local_2c);
    }
    if (local_34[0x4e] < local_34[0x4f]) {
      local_34[0x4f] = local_34[0x4e];
    }
LAB_00720240:
    iVar3 = (**(code **)(*local_34 + 4))();
    if (iVar3 != 0) {
      local_c = 0xffff;
    }
    break;
  case 0x68:
    if ((local_34[0x7b] == 0) || (local_34[0x7c] == 0)) break;
    goto switchD_0071feee_caseD_30;
  }
switchD_0071feee_caseD_2e:
  if (local_c != 0) {
    RaiseInternalException(local_c,DAT_007ed77c,s_E__Ourlib__slist_cpp_007f0ae4,0x235);
  }
  iVar3 = FUN_0072b780(param_1);
  if (iVar3 != 0) {
    local_c = iVar3;
    RaiseInternalException(iVar3,DAT_007ed77c,s_E__Ourlib__slist_cpp_007f0ae4,0x237);
  }
  g_currentExceptionFrame = local_9c.previous;
  return iVar3;
switchD_0071feee_caseD_30:
  if ((local_34[0x4e] == 0) && (local_34[0x78] != 0)) {
    local_2c[4] = 0x20;
    local_18 = (int *)0x1;
    FUN_006e6080(local_34,2,local_34[0x78],local_2c);
  }
  if (local_34[0x4e] < local_34[0x81] + -1) {
    local_34[0x4e] = local_34[0x4e] + 1;
  }
  if (local_34[0x6c] != 0) {
    local_34[0x6d] = local_34[0x4e];
    FUN_006e5fe0(local_34,local_34 + 0x68);
  }
  if ((local_34[0x4e] == local_34[0x81] + -1) && (local_34[0x79] != 0)) {
    local_2c[4] = 0x20;
    local_18 = (int *)0x0;
    FUN_006e6080(local_34,2,local_34[0x79],local_2c);
  }
  if (local_34[0x7a] != 0) {
    local_18 = (int *)local_34[0x4e];
    local_2c[4] = 0x22;
    FUN_006e6080(local_34,2,local_34[0x7a],local_2c);
  }
  do {
    iVar3 = local_34[0x4f];
    iVar5 = local_34[0x4e];
    iVar10 = 0;
    local_8 = (int *)0x0;
    if (iVar3 <= iVar5) {
      do {
        iVar4 = (**(code **)(*local_34 + 8))(iVar3,iVar3 == iVar5);
        if (local_34[0xc] < iVar4 + iVar10) {
          local_8 = (int *)0x1;
          local_34[0x4f] = local_34[0x4f] + 1;
          break;
        }
        iVar5 = local_34[0x4e];
        iVar10 = iVar10 + local_34[0x82] + iVar4;
        iVar3 = iVar3 + 1;
      } while (iVar3 <= iVar5);
    }
  } while (local_8 != (int *)0x0);
  goto LAB_00720240;
}

