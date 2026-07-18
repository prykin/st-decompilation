
undefined4 FUN_00497e00(int param_1)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  void *unaff_EDI;
  byte *pbVar9;
  bool bVar10;
  undefined4 ***local_84;
  undefined4 local_80 [16];
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int *local_20;
  byte *local_1c;
  byte *local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  byte *local_8;
  
  local_84 = DAT_00858df8;
  DAT_00858df8 = &local_84;
  iVar2 = __setjmp3(local_80,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 ****)local_84;
    iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_grpb_cpp_007abe3c,0x3b4,0,iVar2,&DAT_007a4ccc);
    if (iVar4 == 0) {
      FUN_006a5e40(iVar2,0,0x7abe3c,0x3b5);
      return 0xffff;
    }
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  if (*(int *)(param_1 + 0x10) != 3) {
    thunk_FUN_00423ec0(param_1);
  }
  uVar6 = *(uint *)(param_1 + 0x10);
  if (3 < uVar6) {
    if (uVar6 != 0x10f) {
      DAT_00858df8 = (undefined4 ****)local_84;
      return 0;
    }
    local_1c = (byte *)thunk_FUN_004240f0((int *)&local_c);
    local_1c[0] = 0x3c;
    local_1c[1] = 0;
    local_1c[2] = 0;
    local_1c[3] = 0;
    local_18 = (byte *)thunk_FUN_004a4f10((int *)&local_10);
    local_8 = (byte *)FUN_006aac70(local_10 + local_c);
    pbVar8 = local_1c;
    pbVar9 = local_8;
    for (uVar6 = local_c >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar6 = local_c & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar9 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    }
    pbVar8 = local_18;
    pbVar9 = local_8 + local_c;
    for (uVar6 = local_10 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pbVar9 = *(undefined4 *)pbVar8;
      pbVar8 = pbVar8 + 4;
      pbVar9 = pbVar9 + 4;
    }
    for (uVar6 = local_10 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar9 = *pbVar8;
      pbVar8 = pbVar8 + 1;
      pbVar9 = pbVar9 + 1;
    }
    *(uint *)(local_8 + 0x38) = local_c;
    *(uint *)(local_8 + 0x3c) = local_10;
    thunk_FUN_0054d430(DAT_00802a38,local_20[6],local_8,local_10 + local_c);
    FUN_006ab060(&local_1c);
    FUN_006ab060(&local_18);
    FUN_006ab060(&local_8);
    DAT_00858df8 = (undefined4 ****)local_84;
    return 0;
  }
  if (uVar6 == 3) {
    if (*(byte **)((int)local_20 + 0xef) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0xef));
      *(undefined4 *)((int)local_20 + 0xef) = 0;
    }
    if (*(byte **)((int)local_20 + 0x103) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x103));
      *(undefined4 *)((int)local_20 + 0x103) = 0;
    }
    if (*(byte **)((int)local_20 + 0x10f) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x10f));
      *(undefined4 *)((int)local_20 + 0x10f) = 0;
    }
    if (*(byte **)((int)local_20 + 0x127) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x127));
      *(undefined4 *)((int)local_20 + 0x127) = 0;
    }
    if ((byte *)local_20[0x58] != (byte *)0x0) {
      FUN_006ae110((byte *)local_20[0x58]);
      local_20[0x58] = 0;
    }
    if ((byte *)local_20[0x5a] != (byte *)0x0) {
      FUN_006ae110((byte *)local_20[0x5a]);
      local_20[0x5a] = 0;
    }
    if (*(byte **)((int)local_20 + 0x1ca) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x1ca));
      *(undefined4 *)((int)local_20 + 0x1ca) = 0;
    }
    if (*(byte **)((int)local_20 + 0x1ce) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x1ce));
      *(undefined4 *)((int)local_20 + 0x1ce) = 0;
    }
    if (*(byte **)((int)local_20 + 0x1d2) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x1d2));
      *(undefined4 *)((int)local_20 + 0x1d2) = 0;
    }
    if (*(byte **)((int)local_20 + 0x1d6) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x1d6));
      *(undefined4 *)((int)local_20 + 0x1d6) = 0;
    }
    if (*(byte **)((int)local_20 + 0x1da) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x1da));
      *(undefined4 *)((int)local_20 + 0x1da) = 0;
    }
    if (*(byte **)((int)local_20 + 0x1de) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x1de));
      *(undefined4 *)((int)local_20 + 0x1de) = 0;
    }
    uVar6 = *(uint *)(*(int *)((int)local_20 + 0x29) + 0xc);
    if ((uVar6 != 0) && (uVar7 = 0, uVar6 != 0)) {
      do {
        FUN_006acc70(*(int *)((int)local_20 + 0x29),uVar7,&local_14);
        if ((short)local_14 != -1) {
          thunk_FUN_0040cdb0(local_20,local_14 & 0xffff);
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xffff) < uVar6);
    }
    if (*(int *)((int)local_20 + 0x21e) != 0) {
      FUN_006ab060((undefined4 *)((int)local_20 + 0x21e));
    }
    if (*(byte **)((int)local_20 + 0x20e) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x20e));
      *(undefined4 *)((int)local_20 + 0x20e) = 0;
    }
    if (*(byte **)((int)local_20 + 0x226) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x226));
      *(undefined4 *)((int)local_20 + 0x226) = 0;
    }
    if (*(byte **)((int)local_20 + 0x22a) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x22a));
      *(undefined4 *)((int)local_20 + 0x22a) = 0;
    }
    if (*(byte **)((int)local_20 + 0x22e) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x22e));
      *(undefined4 *)((int)local_20 + 0x22e) = 0;
    }
    if (*(byte **)((int)local_20 + 0x24e) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x24e));
      *(undefined4 *)((int)local_20 + 0x24e) = 0;
    }
    if (*(byte **)((int)local_20 + 0x266) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x266));
      *(undefined4 *)((int)local_20 + 0x266) = 0;
    }
    if (*(byte **)((int)local_20 + 0x29f) != (byte *)0x0) {
      FUN_006ae110(*(byte **)((int)local_20 + 0x29f));
      *(undefined4 *)((int)local_20 + 0x29f) = 0;
    }
    (**(code **)(*local_20 + 0x18))(local_20,0,0,0);
    thunk_FUN_00423ec0(param_1);
    DAT_00858df8 = (undefined4 ****)local_84;
    return 0;
  }
  if (uVar6 != 0) {
    if (uVar6 != 2) {
      DAT_00858df8 = (undefined4 ****)local_84;
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if (1 < *(uint *)(iVar2 + 0xc)) {
      if (*(uint *)(iVar2 + 0xc) != 2) {
        DAT_00858df8 = (undefined4 ****)local_84;
        return 0;
      }
      thunk_FUN_004a67a0((undefined4 *)(*(int *)(iVar2 + 0x38) + iVar2));
      DAT_00858df8 = (undefined4 ****)local_84;
      return 0;
    }
    *(undefined4 *)((int)local_20 + 0x1e6) = 3;
    DAT_00858df8 = (undefined4 ****)local_84;
    return 0;
  }
  if (*(int *)((int)local_20 + 0x5d) == 1) {
    local_2c = local_20[2];
    local_30 = 10;
    local_34 = 0;
    local_38 = *(undefined4 *)((int)DAT_00802a38 + 0x14);
    FUN_006e5810(local_40);
    DAT_00858df8 = (undefined4 ****)local_84;
    return 0;
  }
  if (*(int *)((int)local_20 + 0x61) == 1) {
    uVar6 = 0;
    *(undefined4 *)((int)local_20 + 0x61) = 0;
    if (*(int *)((int)local_20 + 0x81) == 1) {
      iVar2 = *(int *)((int)local_20 + 0x1da);
      *(undefined4 *)((int)local_20 + 0x81) = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        do {
          FUN_006acc70(iVar2,uVar6,&local_14);
          (**(code **)(*local_20 + 4))(local_14);
          iVar2 = *(int *)((int)local_20 + 0x1da);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < *(int *)(iVar2 + 0xc));
      }
      if (*(int *)((int)local_20 + 0x1e6) == 6) {
        thunk_FUN_004a7490((int)local_20);
        thunk_FUN_004a7e30(local_20,1);
      }
      if ((*(short *)((int)local_20 + 0x27) == 0) && (local_20[8] == 0)) {
        *(undefined4 *)((int)local_20 + 0x5d) = 1;
      }
      FUN_006ae110(*(byte **)((int)local_20 + 0x1da));
      *(undefined4 *)((int)local_20 + 0x1da) = 0;
    }
    if ((*(int *)((int)local_20 + 0x6d) == 1) &&
       (*(undefined4 *)((int)local_20 + 0x6d) = 0, *(int *)((int)local_20 + 0x2d) != 0)) {
      thunk_FUN_004a0fa0(local_20);
      FUN_006ae110(*(byte **)((int)local_20 + 0x2d));
      *(undefined4 *)((int)local_20 + 0x2d) = 0;
    }
    if (*(int *)((int)local_20 + 0x71) == 1) {
      *(undefined4 *)((int)local_20 + 0x71) = 0;
      FUN_006ae110(*(byte **)((int)local_20 + 0x1ca));
      *(undefined4 *)((int)local_20 + 0x1ca) = 0;
    }
    if (*(int *)((int)local_20 + 0x75) == 1) {
      *(undefined4 *)((int)local_20 + 0x75) = 0;
      thunk_FUN_00499750(*(int *)((int)local_20 + 0x1ce));
      thunk_FUN_00499de0(*(uint **)((int)local_20 + 0x1ce));
      FUN_006ae110(*(byte **)((int)local_20 + 0x1ce));
      *(undefined4 *)((int)local_20 + 0x1ce) = 0;
    }
    if (*(int *)((int)local_20 + 0x79) == 1) {
      *(undefined4 *)((int)local_20 + 0x79) = 0;
      FUN_006ae110(*(byte **)((int)local_20 + 0x1d2));
      *(undefined4 *)((int)local_20 + 0x1d2) = 0;
    }
    if (*(int *)((int)local_20 + 0x7d) == 1) {
      *(undefined4 *)((int)local_20 + 0x7d) = 0;
      FUN_006ae110(*(byte **)((int)local_20 + 0x1d6));
      *(undefined4 *)((int)local_20 + 0x1d6) = 0;
    }
  }
  if (*(int *)((int)local_20 + 0x65) != 1) {
LAB_004984d0:
    switch(*(undefined4 *)((int)local_20 + 0x1e6)) {
    case 1:
      iVar2 = 2;
LAB_004984e9:
      puVar3 = (uint *)thunk_FUN_0049a620(local_20,iVar2);
      break;
    case 2:
      puVar3 = (uint *)thunk_FUN_0049aaf0(2);
      break;
    case 3:
      thunk_FUN_0049a940(local_20,2);
      DAT_00858df8 = (undefined4 ****)local_84;
      return 0;
    case 4:
      puVar3 = (uint *)thunk_FUN_0049d750(2);
      break;
    case 5:
      puVar3 = (uint *)thunk_FUN_0049db40(local_20,2);
      break;
    case 6:
      puVar3 = (uint *)thunk_FUN_0049b7d0(local_20,2);
      break;
    case 7:
      puVar3 = (uint *)thunk_FUN_0049b4c0(local_20,2);
      break;
    case 8:
      puVar3 = (uint *)thunk_FUN_0049c210(2);
      break;
    case 9:
      iVar2 = thunk_FUN_0049cd30(local_20,2);
      if (iVar2 != 0) {
        DAT_00858df8 = (undefined4 ****)local_84;
        return 0;
      }
      *(undefined4 *)((int)local_20 + 0x1e6) = 3;
      iVar2 = 2;
      goto LAB_00498503;
    case 10:
      puVar3 = (uint *)thunk_FUN_0049d230(local_20,2);
      break;
    case 0xb:
      puVar3 = (uint *)thunk_FUN_0049dfa0(local_20,2);
      break;
    case 0xc:
      puVar3 = thunk_FUN_0049e510(local_20,2);
      break;
    case 0xd:
      puVar3 = (uint *)thunk_FUN_0049ea00(local_20,2);
      break;
    case 0xe:
      puVar3 = (uint *)thunk_FUN_0049ed40(local_20,2);
      break;
    case 0xf:
      puVar3 = (uint *)thunk_FUN_0049f100(local_20,2);
      break;
    case 0x10:
      puVar3 = (uint *)thunk_FUN_0049f900(local_20,2);
      break;
    case 0x11:
      puVar3 = (uint *)thunk_FUN_0049f640(local_20,2);
      break;
    case 0x12:
      puVar3 = thunk_FUN_0049fbf0(local_20,2);
      break;
    case 0x13:
      puVar3 = (uint *)thunk_FUN_004a0040(local_20,2);
      break;
    case 0x14:
      puVar3 = (uint *)thunk_FUN_004a0590(local_20,2);
      break;
    case 0x15:
      puVar3 = (uint *)thunk_FUN_004a0990(local_20,2);
      break;
    default:
      goto switchD_004984e0_default;
    }
    goto LAB_004984f2;
  }
  if (*(int *)((int)local_20 + 0x89) == 1) {
    if (*(int *)((int)local_20 + 0x1e6) == 1) {
      iVar2 = 1;
    }
    else {
      *(undefined4 *)((int)local_20 + 0x1e6) = 1;
      iVar2 = 0;
    }
    goto LAB_004984e9;
  }
  if (*(int *)((int)local_20 + 0x91) == 1) {
    if (*(int *)((int)local_20 + 0x1e6) != 3) {
      *(undefined4 *)((int)local_20 + 0x1e6) = 3;
      thunk_FUN_0049a940(local_20,0);
      DAT_00858df8 = (undefined4 ****)local_84;
      return 0;
    }
    thunk_FUN_0049a940(local_20,1);
    DAT_00858df8 = (undefined4 ****)local_84;
    return 0;
  }
  if (*(int *)((int)local_20 + 0x8d) == 1) {
    if (*(int *)((int)local_20 + 0x1e6) == 2) {
      puVar3 = (uint *)thunk_FUN_0049aaf0(1);
    }
    else {
      *(undefined4 *)((int)local_20 + 0x1e6) = 2;
      puVar3 = (uint *)thunk_FUN_0049aaf0(0);
    }
LAB_004984f2:
    if (puVar3 != (uint *)0x0) {
switchD_004984e0_default:
      DAT_00858df8 = (undefined4 ****)local_84;
      return 0;
    }
    *(undefined4 *)((int)local_20 + 0x1e6) = 3;
  }
  else {
    if (*(int *)((int)local_20 + 0xa1) == 1) {
      if (*(int *)((int)local_20 + 0x1e6) == 7) {
        puVar3 = (uint *)thunk_FUN_0049b4c0(local_20,1);
      }
      else {
        *(undefined4 *)((int)local_20 + 0x1e6) = 7;
        puVar3 = (uint *)thunk_FUN_0049b4c0(local_20,0);
      }
      goto LAB_004984f2;
    }
    if (*(int *)((int)local_20 + 0x9d) == 1) {
      bVar10 = *(int *)((int)local_20 + 0x1e6) == 6;
      if (!bVar10) {
        *(undefined4 *)((int)local_20 + 0x1e6) = 6;
      }
      puVar3 = (uint *)thunk_FUN_0049b7d0(local_20,(uint)bVar10);
      if (puVar3 == (uint *)0xffffffff) {
        return 0xffff;
      }
      goto LAB_004984f2;
    }
    if (*(int *)((int)local_20 + 0xa5) == 1) {
      bVar10 = *(int *)((int)local_20 + 0x1e6) == 8;
      if (!bVar10) {
        *(undefined4 *)((int)local_20 + 0x1e6) = 8;
      }
      puVar3 = (uint *)thunk_FUN_0049c210((uint)bVar10);
    }
    else {
      if (*(int *)((int)local_20 + 0xa9) == 1) {
        if (*(int *)((int)local_20 + 0x1e6) == 9) {
          puVar3 = (uint *)thunk_FUN_0049cd30(local_20,1);
        }
        else {
          *(undefined4 *)((int)local_20 + 0x1e6) = 9;
          puVar3 = (uint *)thunk_FUN_0049cd30(local_20,0);
        }
        goto LAB_004984f2;
      }
      if (*(int *)((int)local_20 + 0xad) == 1) {
        if (*(int *)((int)local_20 + 0x1e6) == 10) {
          puVar3 = (uint *)thunk_FUN_0049d230(local_20,1);
        }
        else {
          *(undefined4 *)((int)local_20 + 0x1e6) = 10;
          puVar3 = (uint *)thunk_FUN_0049d230(local_20,0);
        }
      }
      else if (*(int *)((int)local_20 + 0x95) == 1) {
        if (*(int *)((int)local_20 + 0x1e6) == 4) {
          puVar3 = (uint *)thunk_FUN_0049d750(1);
        }
        else {
          *(undefined4 *)((int)local_20 + 0x1e6) = 4;
          puVar3 = (uint *)thunk_FUN_0049d750(0);
        }
      }
      else if (*(int *)((int)local_20 + 0x99) == 1) {
        if (*(int *)((int)local_20 + 0x1e6) == 5) {
          puVar3 = (uint *)thunk_FUN_0049db40(local_20,1);
        }
        else {
          *(undefined4 *)((int)local_20 + 0x1e6) = 5;
          puVar3 = (uint *)thunk_FUN_0049db40(local_20,0);
        }
      }
      else if (*(int *)((int)local_20 + 0xb1) == 1) {
        if (*(int *)((int)local_20 + 0x1e6) == 0xb) {
          puVar3 = (uint *)thunk_FUN_0049dfa0(local_20,1);
        }
        else {
          *(undefined4 *)((int)local_20 + 0x1e6) = 0xb;
          puVar3 = (uint *)thunk_FUN_0049dfa0(local_20,0);
        }
      }
      else {
        if (*(int *)((int)local_20 + 0xb5) != 1) {
          if (*(int *)((int)local_20 + 0xb9) == 1) {
            if (*(int *)((int)local_20 + 0x1e6) == 0xd) {
              puVar3 = (uint *)thunk_FUN_0049ea00(local_20,1);
            }
            else {
              *(undefined4 *)((int)local_20 + 0x1e6) = 0xd;
              puVar3 = (uint *)thunk_FUN_0049ea00(local_20,0);
            }
          }
          else if (*(int *)((int)local_20 + 0xbd) == 1) {
            if (*(int *)((int)local_20 + 0x1e6) == 0xe) {
              puVar3 = (uint *)thunk_FUN_0049ed40(local_20,1);
            }
            else {
              *(undefined4 *)((int)local_20 + 0x1e6) = 0xe;
              puVar3 = (uint *)thunk_FUN_0049ed40(local_20,0);
            }
          }
          else if (*(int *)((int)local_20 + 0xc1) == 1) {
            if (*(int *)((int)local_20 + 0x1e6) == 0xf) {
              puVar3 = (uint *)thunk_FUN_0049f100(local_20,1);
            }
            else {
              *(undefined4 *)((int)local_20 + 0x1e6) = 0xf;
              puVar3 = (uint *)thunk_FUN_0049f100(local_20,0);
            }
          }
          else if (*(int *)((int)local_20 + 0xc9) == 1) {
            if (*(int *)((int)local_20 + 0x1e6) == 0x11) {
              puVar3 = (uint *)thunk_FUN_0049f640(local_20,1);
            }
            else {
              *(undefined4 *)((int)local_20 + 0x1e6) = 0x11;
              puVar3 = (uint *)thunk_FUN_0049f640(local_20,0);
            }
          }
          else if (*(int *)((int)local_20 + 0xc5) == 1) {
            if (*(int *)((int)local_20 + 0x1e6) == 0x10) {
              puVar3 = (uint *)thunk_FUN_0049f900(local_20,1);
            }
            else {
              *(undefined4 *)((int)local_20 + 0x1e6) = 0x10;
              puVar3 = (uint *)thunk_FUN_0049f900(local_20,0);
            }
          }
          else if (*(int *)((int)local_20 + 0xcd) == 1) {
            if (*(int *)((int)local_20 + 0x1e6) == 0x12) {
              puVar3 = thunk_FUN_0049fbf0(local_20,1);
            }
            else {
              *(undefined4 *)((int)local_20 + 0x1e6) = 0x12;
              puVar3 = thunk_FUN_0049fbf0(local_20,0);
            }
          }
          else if (*(int *)((int)local_20 + 0xd1) == 1) {
            if (*(int *)((int)local_20 + 0x1e6) == 0x13) {
              puVar3 = (uint *)thunk_FUN_004a0040(local_20,1);
            }
            else {
              *(undefined4 *)((int)local_20 + 0x1e6) = 0x13;
              puVar3 = (uint *)thunk_FUN_004a0040(local_20,0);
            }
          }
          else {
            if (*(int *)((int)local_20 + 0xd5) != 1) {
              if (*(int *)((int)local_20 + 0xd9) != 1) goto LAB_004984d0;
              if (*(int *)((int)local_20 + 0x1e6) == 0x15) {
                puVar3 = (uint *)thunk_FUN_004a0990(local_20,1);
              }
              else {
                *(undefined4 *)((int)local_20 + 0x1e6) = 0x15;
                puVar3 = (uint *)thunk_FUN_004a0990(local_20,0);
              }
              goto LAB_0049818d;
            }
            if (*(int *)((int)local_20 + 0x1e6) == 0x14) {
              puVar3 = (uint *)thunk_FUN_004a0590(local_20,1);
            }
            else {
              *(undefined4 *)((int)local_20 + 0x1e6) = 0x14;
              puVar3 = (uint *)thunk_FUN_004a0590(local_20,0);
            }
          }
          goto LAB_004984f2;
        }
        if (*(int *)((int)local_20 + 0x1e6) == 0xc) {
          puVar3 = thunk_FUN_0049e510(local_20,1);
        }
        else {
          *(undefined4 *)((int)local_20 + 0x1e6) = 0xc;
          puVar3 = thunk_FUN_0049e510(local_20,0);
        }
      }
    }
LAB_0049818d:
    if (puVar3 == (uint *)0xffffffff) {
      return 0xffff;
    }
    if (puVar3 != (uint *)0x0) {
      DAT_00858df8 = (undefined4 ****)local_84;
      return 0;
    }
  }
  iVar2 = 0;
LAB_00498503:
  thunk_FUN_0049a940(local_20,iVar2);
  thunk_FUN_00423320(local_20,0x5d95);
  DAT_00858df8 = (undefined4 ****)local_84;
  return 0;
}

