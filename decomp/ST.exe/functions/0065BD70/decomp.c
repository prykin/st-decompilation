
int __thiscall FUN_0065bd70(void *this,int param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar4;
  int *piVar2;
  undefined4 uVar3;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int extraout_EDX_01;
  undefined2 uVar11;
  uint uVar9;
  char *pcVar10;
  uint uVar12;
  char local_1c [16];
  int local_c;
  short local_6;
  
  iVar6 = param_1;
  uVar12 = *(uint *)(param_1 + 0x10);
  if (uVar12 < 0x5ddd) {
    if (uVar12 == 0x5ddc) {
      iVar8 = 0x464;
    }
    else if (uVar12 < 0x5dd5) {
      if (uVar12 == 0x5dd4) {
        iVar8 = 0x45d;
      }
      else if (uVar12 < 0x5dd1) {
        if (uVar12 == 0x5dd0) {
          iVar8 = 0x459;
        }
        else if (uVar12 == 0) {
          iVar8 = 0x456;
        }
        else if (uVar12 == 0x5dc5) {
          iVar8 = 0x457;
        }
        else {
          if (uVar12 != 0x5dc6) {
            return -1;
          }
          iVar8 = 0x458;
        }
      }
      else if (uVar12 == 0x5dd1) {
        iVar8 = 0x45a;
      }
      else if (uVar12 == 0x5dd2) {
        iVar8 = 0x45b;
      }
      else {
        if (uVar12 != 0x5dd3) {
          return -1;
        }
        iVar8 = 0x45c;
      }
    }
    else {
      switch(uVar12) {
      case 0x5dd5:
        iVar8 = 0x474;
        break;
      case 0x5dd6:
        iVar8 = 0x45e;
        break;
      case 0x5dd7:
        iVar8 = 0x45f;
        break;
      case 0x5dd8:
        iVar8 = 0x460;
        break;
      case 0x5dd9:
        iVar8 = 0x461;
        break;
      case 0x5dda:
        iVar8 = 0x462;
        break;
      case 0x5ddb:
        iVar8 = 0x463;
        break;
      default:
        return -1;
      }
    }
  }
  else {
    switch(uVar12) {
    case 0x5ddd:
      iVar8 = 0x465;
      break;
    case 0x5dde:
      iVar8 = 0x466;
      break;
    case 0x5ddf:
      iVar8 = 0x467;
      break;
    case 0x5de0:
      iVar8 = 0x468;
      break;
    case 0x5de1:
      iVar8 = 0x469;
      break;
    case 0x5de2:
      iVar8 = 0x46a;
      break;
    case 0x5de3:
      iVar8 = 0x46b;
      break;
    case 0x5de4:
      iVar8 = 0x46c;
      break;
    case 0x5de5:
      iVar8 = 0x471;
      break;
    case 0x5de6:
      iVar8 = 0x46d;
      break;
    case 0x5de7:
    case 0x5de8:
      iVar8 = 0x46e;
      break;
    case 0x5de9:
      iVar8 = 0x46f;
      break;
    case 0x5dea:
      iVar8 = 0x470;
      break;
    case 0x5deb:
      iVar8 = 0x472;
      break;
    case 0x5dec:
      iVar8 = 0x473;
      break;
    default:
      return -1;
    }
  }
  if (param_2 == 0) {
    return iVar8;
  }
  uVar11 = (undefined2)((uint)param_1 >> 0x10);
  uVar4 = (undefined2)(uVar12 - 0x5dc5 >> 0x10);
  local_c = iVar8;
  switch(uVar12) {
  case 0x5dc5:
    *(undefined4 *)((int)this + 0x52f) = *(undefined4 *)(param_1 + 0x14);
    goto switchD_0065bf29_caseD_5dc7;
  case 0x5dc6:
    pcVar10 = *(char **)(param_1 + 0x14);
    iVar6 = *(int *)((int)this + 0x5b3);
    uVar12 = 0;
    break;
  default:
    goto switchD_0065bf29_caseD_5dc7;
  case 0x5dd0:
  case 0x5dd1:
  case 0x5dd2:
  case 0x5dd3:
  case 0x5dd4:
  case 0x5dd5:
    uVar1 = *(ushort *)(param_1 + 0x14);
    if ((-1 < (short)uVar1) && ((short)uVar1 < 8)) {
      iVar8 = (int)(short)uVar1;
      if ((&DAT_008087e9)[iVar8 * 0x51] != -1) {
        *(int *)((int)this + 0x52f) = iVar8;
        *(uint *)((int)this + 0x533) = (uint)(byte)(&DAT_008087e8)[iVar8 * 0x51];
        *(uint *)((int)this + 0x537) = (uint)(byte)(&DAT_008087ea)[iVar8 * 0x51];
        piVar2 = (int *)thunk_FUN_0042b620((uint)uVar1,
                                           CONCAT22((short)((uint)(iVar8 * 9) >> 0x10),
                                                    *(undefined2 *)(param_1 + 0x16)),1);
        iVar8 = extraout_EDX;
        if (piVar2 != (int *)0x0) {
          uVar3 = (**(code **)(*piVar2 + 0x2c))();
          *(undefined4 *)((int)this + 0x53b) = uVar3;
          uVar3 = (**(code **)(*piVar2 + 0x6c))();
          *(undefined4 *)((int)this + 0x53f) = uVar3;
          thunk_FUN_004162b0(piVar2,(undefined2 *)((int)&param_1 + 2),
                             (undefined2 *)((int)&param_2 + 2),&local_6);
          *(int *)((int)this + 0x543) = (int)param_1._2_2_;
          *(int *)((int)this + 0x547) = (int)param_2._2_2_;
          *(int *)((int)this + 0x54b) = (int)local_6;
          if (*(ushort *)(piVar2 + 0xc) == 0xffff) {
            uVar12 = 0xffffffff;
          }
          else {
            uVar12 = (uint)*(ushort *)(piVar2 + 0xc);
          }
          *(uint *)((int)this + 0x54f) = uVar12;
LAB_0065c021:
          (**(code **)(*piVar2 + 0x74))(local_1c);
          FUN_006b6020(*(int *)((int)this + 0x5b3),0,local_1c);
          iVar8 = extraout_EDX_00;
        }
      }
    }
    goto LAB_0065c03e;
  case 0x5dd6:
  case 0x5dd7:
  case 0x5dd8:
  case 0x5dd9:
  case 0x5dda:
    piVar2 = (int *)thunk_FUN_0042b620(0,CONCAT22(uVar4,*(undefined2 *)(param_1 + 0x16)),5);
    uVar4 = extraout_var;
    if (piVar2 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar2 + 300))();
      *(undefined4 *)((int)this + 0x52f) = uVar3;
      uVar3 = (**(code **)(*piVar2 + 0xc))();
      *(undefined4 *)((int)this + 0x533) = uVar3;
      *(uint *)((int)this + 0x537) = (uint)(byte)(&DAT_008087ea)[*(int *)((int)this + 0x52f) * 0x51]
      ;
      uVar3 = (**(code **)(*piVar2 + 0x130))();
      *(undefined4 *)((int)this + 0x53b) = uVar3;
      *(undefined4 *)((int)this + 0x53f) = 0;
      thunk_FUN_004162f0(piVar2,(undefined2 *)((int)&param_1 + 2),(undefined2 *)((int)&param_2 + 2),
                         &local_6);
      *(int *)((int)this + 0x543) = (int)param_1._2_2_;
      *(int *)((int)this + 0x547) = (int)param_2._2_2_;
      *(int *)((int)this + 0x54b) = (int)local_6;
      uVar3 = (**(code **)(*piVar2 + 0x138))();
      *(undefined4 *)((int)this + 0x54f) = uVar3;
      (**(code **)(*piVar2 + 0x74))(local_1c);
      FUN_006b6020(*(int *)((int)this + 0x5b3),0,local_1c);
      uVar4 = extraout_var_00;
    }
    sVar7 = *(short *)(iVar6 + 0x18);
    uVar12 = CONCAT22(uVar4,sVar7);
    if (((-1 < sVar7) && (sVar7 < 8)) && (iVar8 = (int)sVar7, (&DAT_008087e9)[iVar8 * 0x51] != -1))
    {
      *(int *)((int)this + 0x557) = iVar8;
      *(uint *)((int)this + 0x55b) = (uint)(byte)(&DAT_008087e8)[iVar8 * 0x51];
      *(uint *)((int)this + 0x55f) = (uint)(byte)(&DAT_008087ea)[iVar8 * 0x51];
      uVar9 = CONCAT22(uVar11,*(undefined2 *)(iVar6 + 0x1a));
      goto LAB_0065c4bb;
    }
    goto LAB_0065c570;
  case 0x5ddb:
  case 0x5ddc:
  case 0x5ddd:
  case 0x5dde:
    piVar2 = (int *)thunk_FUN_0042b620(0,CONCAT22(uVar4,*(undefined2 *)(param_1 + 0x16)),2);
    uVar4 = extraout_var_01;
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)((int)this + 0x52f) = 0;
      uVar3 = (**(code **)(*piVar2 + 0xc))();
      *(undefined4 *)((int)this + 0x533) = uVar3;
      *(undefined4 *)((int)this + 0x537) = 0;
      uVar3 = *(undefined4 *)((int)piVar2 + 0x342);
      *(undefined4 *)((int)this + 0x53f) = 0;
      *(undefined4 *)((int)this + 0x53b) = uVar3;
      thunk_FUN_004162f0(piVar2,(undefined2 *)((int)&param_1 + 2),(undefined2 *)((int)&param_2 + 2),
                         &local_6);
      *(int *)((int)this + 0x547) = (int)param_2._2_2_;
      *(int *)((int)this + 0x543) = (int)param_1._2_2_;
      *(int *)((int)this + 0x54b) = (int)local_6;
      (**(code **)(*piVar2 + 0x74))(local_1c);
      FUN_006b6020(*(int *)((int)this + 0x5b3),0,local_1c);
      uVar4 = extraout_var_02;
    }
    sVar7 = *(short *)(iVar6 + 0x18);
    uVar12 = CONCAT22(uVar4,sVar7);
    if (((sVar7 < 0) || (7 < sVar7)) || (iVar8 = (int)sVar7, (&DAT_008087e9)[iVar8 * 0x51] == -1))
    goto LAB_0065c570;
    *(int *)((int)this + 0x557) = iVar8;
    *(uint *)((int)this + 0x55b) = (uint)(byte)(&DAT_008087e8)[iVar8 * 0x51];
    *(uint *)((int)this + 0x55f) = (uint)(byte)(&DAT_008087ea)[iVar8 * 0x51];
    uVar9 = CONCAT22(uVar11,*(undefined2 *)(iVar6 + 0x1a));
    goto LAB_0065c4bb;
  case 0x5ddf:
  case 0x5de0:
  case 0x5de1:
  case 0x5de2:
    piVar2 = *(int **)(param_1 + 0x14);
    if (piVar2 != (int *)0x0) {
      *(undefined4 *)((int)this + 0x52f) = 0;
      *(undefined4 *)((int)this + 0x533) = 0;
      *(undefined4 *)((int)this + 0x537) = 0;
      uVar3 = (**(code **)(*piVar2 + 0x2c))();
      *(undefined4 *)((int)this + 0x53b) = uVar3;
      *(undefined4 *)((int)this + 0x53f) = 0;
      thunk_FUN_004162b0(piVar2,(undefined2 *)((int)&param_1 + 2),(undefined2 *)((int)&param_2 + 2),
                         &local_6);
      iVar8 = (int)param_2._2_2_;
      *(int *)((int)this + 0x543) = (int)param_1._2_2_;
      *(int *)((int)this + 0x547) = iVar8;
      *(int *)((int)this + 0x54b) = (int)local_6;
    }
    uVar12 = CONCAT22((short)((uint)iVar8 >> 0x10),*(undefined2 *)(iVar6 + 0x18));
    if (*(int *)(iVar6 + 0x10) != 0x5de1) goto LAB_0065c570;
    goto LAB_0065c042;
  case 0x5de3:
  case 0x5de4:
    sVar7 = *(short *)(param_1 + 0x14);
    if ((-1 < sVar7) && (sVar7 < 8)) {
      iVar5 = (int)sVar7;
      if ((&DAT_008087e9)[iVar5 * 0x51] != -1) {
        *(int *)((int)this + 0x52f) = iVar5;
        *(uint *)((int)this + 0x533) = (uint)(byte)(&DAT_008087e8)[iVar5 * 0x51];
        *(uint *)((int)this + 0x537) = (uint)(byte)(&DAT_008087ea)[iVar5 * 0x51];
        piVar2 = (int *)thunk_FUN_0042b620(0,CONCAT22((short)((uint)(iVar5 * 9) >> 0x10),
                                                      *(undefined2 *)(param_1 + 0x16)),3);
        iVar8 = extraout_EDX_01;
        if (piVar2 != (int *)0x0) {
          uVar3 = (**(code **)(*piVar2 + 0x2c))();
          *(undefined4 *)((int)this + 0x53b) = uVar3;
          uVar3 = (**(code **)(*piVar2 + 0x6c))();
          *(undefined4 *)((int)this + 0x53f) = uVar3;
          thunk_FUN_004162b0(piVar2,(undefined2 *)((int)&param_1 + 2),
                             (undefined2 *)((int)&param_2 + 2),&local_6);
          *(int *)((int)this + 0x543) = (int)param_1._2_2_;
          *(int *)((int)this + 0x547) = (int)param_2._2_2_;
          *(int *)((int)this + 0x54b) = (int)local_6;
          goto LAB_0065c021;
        }
      }
    }
LAB_0065c03e:
    uVar12 = CONCAT22((short)((uint)iVar8 >> 0x10),*(undefined2 *)(iVar6 + 0x18));
LAB_0065c042:
    sVar7 = (short)uVar12;
    if (((sVar7 < 0) || (7 < sVar7)) || (iVar8 = (int)sVar7, (&DAT_008087e9)[iVar8 * 0x51] == -1)) {
LAB_0065c570:
      *(undefined4 *)((int)this + 0x557) = 0xff;
      goto switchD_0065bf29_caseD_5dc7;
    }
    *(int *)((int)this + 0x557) = iVar8;
    *(uint *)((int)this + 0x55b) = (uint)(byte)(&DAT_008087e8)[iVar8 * 0x51];
    *(uint *)((int)this + 0x55f) = (uint)(byte)(&DAT_008087ea)[iVar8 * 0x51];
    uVar9 = CONCAT22(uVar11,*(undefined2 *)(iVar6 + 0x1a));
    goto LAB_0065c4bb;
  case 0x5de5:
    sVar7 = *(short *)(param_1 + 0x14);
    if (((sVar7 < 0) || (7 < sVar7)) || (iVar6 = (int)sVar7, (&DAT_008087e9)[iVar6 * 0x51] == -1))
    goto switchD_0065bf29_caseD_5dc7;
    *(int *)((int)this + 0x52f) = iVar6;
    *(uint *)((int)this + 0x533) = (uint)(byte)(&DAT_008087e8)[iVar6 * 0x51];
    *(uint *)((int)this + 0x537) = (uint)(byte)(&DAT_008087ea)[iVar6 * 0x51];
    *(uint *)((int)this + 0x53b) = (uint)*(ushort *)(param_1 + 0x16);
    *(uint *)((int)this + 0x53f) = (uint)*(ushort *)(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x18) == 0) goto switchD_0065bf29_caseD_5dc7;
    iVar6 = *(int *)((int)this + 0x5b3);
    pcVar10 = (char *)(*(int *)(param_1 + 0x18) + 0x3b);
    uVar12 = 0;
    break;
  case 0x5de6:
  case 0x5de7:
  case 0x5de8:
  case 0x5de9:
  case 0x5dea:
    sVar7 = *(short *)(param_1 + 0x14);
    if (((-1 < sVar7) && (sVar7 < 8)) && (iVar6 = (int)sVar7, (&DAT_008087e9)[iVar6 * 0x51] != -1))
    {
      *(int *)((int)this + 0x52f) = iVar6;
      *(uint *)((int)this + 0x533) = (uint)(byte)(&DAT_008087e8)[iVar6 * 0x51];
      *(uint *)((int)this + 0x537) = (uint)(byte)(&DAT_008087ea)[iVar6 * 0x51];
      *(uint *)((int)this + 0x53b) = (uint)*(ushort *)(param_1 + 0x18);
      *(uint *)((int)this + 0x53f) = (uint)*(ushort *)(param_1 + 0x1a);
      *(uint *)((int)this + 0x543) = (uint)(*(int *)(param_1 + 0x10) == 0x5de7);
    }
    if ((*(uint *)(param_1 + 0x10) < 0x5de6) || (0x5de8 < *(uint *)(param_1 + 0x10)))
    goto switchD_0065bf29_caseD_5dc7;
    uVar1 = *(ushort *)(param_1 + 0x14);
    uVar12 = (uint)uVar1;
    if (((short)uVar1 < 0) ||
       ((7 < (short)uVar1 || (iVar6 = (int)(short)uVar1, (&DAT_008087e9)[iVar6 * 0x51] == -1))))
    goto LAB_0065c570;
    *(int *)((int)this + 0x557) = iVar6;
    *(uint *)((int)this + 0x55b) = (uint)(byte)(&DAT_008087e8)[iVar6 * 0x51];
    *(uint *)((int)this + 0x55f) = (uint)(byte)(&DAT_008087ea)[iVar6 * 0x51];
    uVar9 = CONCAT22(uVar11,*(undefined2 *)(param_1 + 0x16));
LAB_0065c4bb:
    if (((short)uVar9 == -1) ||
       (piVar2 = (int *)thunk_FUN_0042b620(uVar12,uVar9,1), piVar2 == (int *)0x0)) {
      *(undefined4 *)((int)this + 0x563) = 0;
      goto switchD_0065bf29_caseD_5dc7;
    }
    uVar3 = (**(code **)(*piVar2 + 0x2c))();
    *(undefined4 *)((int)this + 0x563) = uVar3;
    uVar3 = (**(code **)(*piVar2 + 0x6c))();
    *(undefined4 *)((int)this + 0x567) = uVar3;
    thunk_FUN_004162b0(piVar2,(undefined2 *)((int)&param_1 + 2),(undefined2 *)((int)&param_2 + 2),
                       &local_6);
    *(int *)((int)this + 0x56b) = (int)param_1._2_2_;
    *(int *)((int)this + 0x56f) = (int)param_2._2_2_;
    *(int *)((int)this + 0x573) = (int)local_6;
    if (*(ushort *)(piVar2 + 0xc) == 0xffff) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(piVar2 + 0xc);
    }
    *(uint *)((int)this + 0x577) = uVar12;
    (**(code **)(*piVar2 + 0x74))(local_1c);
    iVar6 = *(int *)((int)this + 0x5b3);
    pcVar10 = local_1c;
    uVar12 = 1;
    break;
  case 0x5deb:
  case 0x5dec:
    sVar7 = *(short *)(param_1 + 0x14);
    if (((sVar7 < 0) || (7 < sVar7)) || (iVar6 = (int)sVar7, (&DAT_008087e9)[iVar6 * 0x51] == -1))
    goto switchD_0065bf29_caseD_5dc7;
    *(int *)((int)this + 0x52f) = iVar6;
    *(uint *)((int)this + 0x533) = (uint)(byte)(&DAT_008087e8)[iVar6 * 0x51];
    *(uint *)((int)this + 0x537) = (uint)(byte)(&DAT_008087ea)[iVar6 * 0x51];
    if (*(int *)(param_1 + 0x18) == 0) goto switchD_0065bf29_caseD_5dc7;
    iVar6 = *(int *)((int)this + 0x5b3);
    pcVar10 = (char *)(*(int *)(param_1 + 0x18) + 0x92);
    uVar12 = 0;
  }
  FUN_006b6020(iVar6,uVar12,pcVar10);
switchD_0065bf29_caseD_5dc7:
  *(uint *)((int)this + 0x5a7) = *(uint *)(DAT_00802a38 + 0xe4) / 0x19;
  *(undefined4 *)((int)this + 0x5ab) = *(undefined4 *)(DAT_00802a38 + 0xe4);
  uVar3 = (**(code **)(*(int *)this + 0x14))();
  *(undefined4 *)((int)this + 0x5af) = uVar3;
  return local_c;
}

