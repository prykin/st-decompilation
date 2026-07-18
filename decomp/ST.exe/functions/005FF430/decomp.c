
undefined4 __thiscall
FUN_005ff430(void *this,undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,short *param_6,short *param_7,undefined2 *param_8)

{
  undefined2 *puVar1;
  short sVar2;
  int *this_00;
  int iVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  if (param_2 != 30000) {
    puVar1 = (undefined2 *)
             (*(int *)((int)this + 0x23b) +
             *(int *)(*(int *)((int)this + 0x23f) + param_2 * 4) * 0x18);
    uVar6 = thunk_FUN_00601db0(*(undefined4 *)
                                (*(int *)((int)this + 0x23b) + 4 +
                                *(int *)(*(int *)((int)this + 0x23f) + param_2 * 4) * 0x18));
    this_00 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_ECX >> 8),
                                                 *(undefined1 *)(puVar1 + 4)),
                                        CONCAT22((short)((uint)uVar6 >> 0x10),*puVar1),uVar6);
    if (this_00 == (int *)0x0) {
      return 0;
    }
    thunk_FUN_00416270(this_00,(undefined2 *)&param_3,(undefined2 *)&param_4,
                       (undefined2 *)((int)&param_5 + 2));
    iVar3 = (**(code **)(*this_00 + 0x78))();
    if (iVar3 < 1) {
      return 0;
    }
    uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    *param_6 = (short)((ulonglong)(uVar4 >> 0x10) % 0x1f) + (short)param_3;
    uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    *param_7 = (short)((ulonglong)(uVar4 >> 0x10) % 0x1f) + (short)param_4;
    *param_8 = param_5._2_2_;
    return 1;
  }
  if (*(int *)((int)this + 0x22e) < 5) {
switchD_005ff553_default:
    if ((short)param_5 < 0) {
      iVar3 = (short)param_5 / 200 + -1;
    }
    else {
      iVar3 = (int)((short)param_5 / 200);
    }
    sVar2 = (short)param_3;
    switch(iVar3) {
    case 0:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      *param_6 = (short)((ulonglong)(uVar4 >> 0x10) % 0x65) + sVar2;
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      uVar5 = 0x65;
      *(uint *)((int)this + 0x1c) = uVar4;
      uVar4 = uVar4 >> 0x10;
      break;
    case 1:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      *param_6 = (short)((ulonglong)(uVar4 >> 0x10) % 0x12e) + sVar2;
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      uVar5 = 0x12e;
      *(uint *)((int)this + 0x1c) = uVar4;
      uVar4 = uVar4 >> 0x10;
      break;
    case 2:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      *param_6 = (short)((ulonglong)(uVar4 >> 0x10) % 0x1f7) + sVar2;
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      uVar5 = 0x1f7;
      *(uint *)((int)this + 0x1c) = uVar4;
      uVar4 = uVar4 >> 0x10;
      break;
    case 3:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      *param_6 = (short)((ulonglong)(uVar4 >> 0x10) % 0x2c0) + sVar2;
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      uVar5 = 0x2c0;
      *(uint *)((int)this + 0x1c) = uVar4;
      uVar4 = uVar4 >> 0x10;
      break;
    case 4:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      *param_6 = (short)((ulonglong)(uVar4 >> 0x10) % 0x389) + sVar2;
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      uVar5 = 0x389;
      *(uint *)((int)this + 0x1c) = uVar4;
      uVar4 = uVar4 >> 0x10;
      break;
    default:
      goto switchD_005ffb0e_default;
    }
    uVar6 = 1;
    *param_7 = (short)(uVar4 % uVar5) + (short)param_4;
    *param_8 = 0;
switchD_005ffb0e_default:
    return uVar6;
  }
  if (*(int *)((int)this + 0x22e) != 5) {
    switch(param_1) {
    case 0:
      goto switchD_005ff553_caseD_0;
    case 1:
      goto switchD_005ff553_caseD_1;
    case 2:
      goto switchD_005ff553_caseD_2;
    case 3:
      goto switchD_005ff553_caseD_3;
    case 4:
      goto switchD_005ff553_caseD_4;
    case 5:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      sVar2 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar4 >> 0x10) % 0x3d)) + -0xab;
      goto LAB_005ff625;
    case 6:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      *param_6 = (short)((ulonglong)(uVar4 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0xab;
      iVar3 = *(int *)((int)this + 0x1c);
      goto LAB_005ff63a;
    case 7:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      *param_6 = (short)((ulonglong)(uVar4 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0xab;
      iVar3 = *(int *)((int)this + 0x1c);
      goto LAB_005ff5fd;
    case 8:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      sVar2 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar4 >> 0x10) % 0x3d)) + -0xab;
      goto LAB_005ff5e8;
    case 9:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      sVar2 = (short)((ulonglong)(uVar4 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0x174;
      goto LAB_005ff8c9;
    case 10:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      *param_6 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar4 >> 0x10) % 0x3d)) +
                 -0x174;
      sVar2 = *(short *)((int)this + 0x21c);
      goto LAB_005ffa34;
    case 0xb:
      sVar2 = *(short *)((int)this + 0x21a);
      break;
    case 0xc:
      sVar2 = *(short *)((int)this + 0x21a);
      goto LAB_005ff95e;
    case 0xd:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      sVar2 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar4 >> 0x10) % 0x3d)) + -0x174;
LAB_005ff95e:
      *param_6 = sVar2;
      iVar3 = *(int *)((int)this + 0x1c);
LAB_005ffa94:
      uVar4 = iVar3 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      sVar2 = (*(short *)((int)this + 0x21c) - (short)((ulonglong)(uVar4 >> 0x10) % 0x3d)) + -0x174;
      goto LAB_005ffab2;
    case 0xe:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      sVar2 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar4 >> 0x10) % 0x3d)) + -0x174;
      break;
    case 0xf:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      *param_6 = (short)((ulonglong)(uVar4 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0x174;
      iVar3 = *(int *)((int)this + 0x1c);
      goto LAB_005ffa18;
    case 0x10:
      uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar4;
      *param_6 = (short)((ulonglong)(uVar4 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0x174;
      iVar3 = *(int *)((int)this + 0x1c);
      goto LAB_005ffa94;
    default:
      goto switchD_005ff553_default;
    }
    *param_6 = sVar2;
    iVar3 = *(int *)((int)this + 0x1c);
LAB_005ffa18:
    uVar4 = iVar3 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    sVar2 = (short)((ulonglong)(uVar4 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21c) + 0x174;
    goto LAB_005ffa34;
  }
  switch(param_1) {
  case 0:
switchD_005ff553_caseD_0:
    *param_6 = *(short *)((int)this + 0x21a);
    sVar2 = *(short *)((int)this + 0x21c);
    goto LAB_005ffa34;
  case 1:
switchD_005ff553_caseD_1:
    uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    sVar2 = (short)((ulonglong)(uVar4 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0xab;
LAB_005ff8c9:
    *param_6 = sVar2;
    *param_7 = *(short *)((int)this + 0x21c);
    *param_8 = *(undefined2 *)((int)this + 0x21e);
    return 1;
  case 2:
switchD_005ff553_caseD_2:
    uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    *param_6 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar4 >> 0x10) % 0x3d)) + -0xab;
    sVar2 = *(short *)((int)this + 0x21c);
    goto LAB_005ffa34;
  case 3:
switchD_005ff553_caseD_3:
    sVar2 = *(short *)((int)this + 0x21a);
LAB_005ff5e8:
    *param_6 = sVar2;
    iVar3 = *(int *)((int)this + 0x1c);
LAB_005ff5fd:
    uVar4 = iVar3 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    sVar2 = (short)((ulonglong)(uVar4 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21c) + 0xab;
    goto LAB_005ffa34;
  case 4:
switchD_005ff553_caseD_4:
    sVar2 = *(short *)((int)this + 0x21a);
LAB_005ff625:
    *param_6 = sVar2;
    iVar3 = *(int *)((int)this + 0x1c);
LAB_005ff63a:
    uVar4 = iVar3 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    sVar2 = (*(short *)((int)this + 0x21c) - (short)((ulonglong)(uVar4 >> 0x10) % 0x3d)) + -0xab;
    goto LAB_005ffab2;
  case 5:
    uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    *param_6 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar4 >> 0x10) % 0x3d)) + -0x7e;
    iVar3 = *(int *)((int)this + 0x1c);
    break;
  case 6:
    uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    *param_6 = (short)((ulonglong)(uVar4 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0x7e;
    iVar3 = *(int *)((int)this + 0x1c);
    break;
  case 7:
    uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    *param_6 = (short)((ulonglong)(uVar4 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0x7e;
    iVar3 = *(int *)((int)this + 0x1c);
    goto LAB_005ff73a;
  case 8:
    uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    *param_6 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar4 >> 0x10) % 0x3d)) + -0x7e;
    iVar3 = *(int *)((int)this + 0x1c);
LAB_005ff73a:
    uVar4 = iVar3 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar4;
    sVar2 = (short)((ulonglong)(uVar4 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21c) + 0x7e;
LAB_005ffa34:
    *param_7 = sVar2;
    *param_8 = *(undefined2 *)((int)this + 0x21e);
    return 1;
  default:
    goto switchD_005ff553_default;
  }
  uVar4 = iVar3 * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar4;
  sVar2 = (*(short *)((int)this + 0x21c) - (short)((ulonglong)(uVar4 >> 0x10) % 0x3d)) + -0x7e;
LAB_005ffab2:
  *param_7 = sVar2;
  *param_8 = *(undefined2 *)((int)this + 0x21e);
  return 1;
}

