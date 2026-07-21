
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_005FF430_param_1Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14;CASE_F=15;CASE_10=16
    */

undefined4 __thiscall
FUN_005ff430(void *this,Global_sub_005FF430_param_1Enum param_1,int param_2,undefined4 param_3,
            undefined4 param_4,undefined4 param_5,short *param_6,short *param_7,undefined2 *param_8)

{
  undefined2 *puVar1;
  short sVar2;
  STAllPlayersC_GetObjPtr_param_3Enum SVar3;
  STGameObjC *this_00;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  uint uVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  if (param_2 != 30000) {
    puVar1 = (undefined2 *)
             (*(int *)((int)this + 0x23b) +
             *(int *)(*(int *)((int)this + 0x23f) + param_2 * 4) * 0x18);
    SVar3 = thunk_FUN_00601db0(*(Global_sub_00601DB0_param_1Enum *)
                                (*(int *)((int)this + 0x23b) + 4 +
                                *(int *)(*(int *)((int)this + 0x23f) + param_2 * 4) * 0x18));
    this_00 = STAllPlayersC::GetObjPtr
                        (g_sTAllPlayers_007FA174,
                         CONCAT31((int3)((uint)extraout_ECX >> 8),*(undefined1 *)(puVar1 + 4)),
                         CONCAT22((short)(SVar3 >> 0x10),*puVar1),SVar3);
    if (this_00 == (STGameObjC *)0x0) {
      return 0;
    }
    thunk_FUN_00416270(this_00,(undefined2 *)&param_3,&param_4,(int *)((int)&param_5 + 2));
    iVar4 = (*this_00->vtable->vfunc_78)();
    if (iVar4 < 1) {
      return 0;
    }
    uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x1f) + (short)param_3;
    uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    *param_7 = (short)((ulonglong)(uVar5 >> 0x10) % 0x1f) + (short)param_4;
    *param_8 = param_5._2_2_;
    return 1;
  }
  if (*(int *)((int)this + 0x22e) < 5) {
switchD_005ff553_default:
    if ((short)param_5 < 0) {
      iVar4 = (short)param_5 / 200 + -1;
    }
    else {
      iVar4 = (int)((short)param_5 / 200);
    }
    sVar2 = (short)param_3;
    switch(iVar4) {
    case 0:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x65) + sVar2;
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      uVar6 = 0x65;
      *(uint *)((int)this + 0x1c) = uVar5;
      uVar5 = uVar5 >> 0x10;
      break;
    case 1:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x12e) + sVar2;
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      uVar6 = 0x12e;
      *(uint *)((int)this + 0x1c) = uVar5;
      uVar5 = uVar5 >> 0x10;
      break;
    case 2:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x1f7) + sVar2;
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      uVar6 = 0x1f7;
      *(uint *)((int)this + 0x1c) = uVar5;
      uVar5 = uVar5 >> 0x10;
      break;
    case 3:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x2c0) + sVar2;
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      uVar6 = 0x2c0;
      *(uint *)((int)this + 0x1c) = uVar5;
      uVar5 = uVar5 >> 0x10;
      break;
    case 4:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x389) + sVar2;
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      uVar6 = 0x389;
      *(uint *)((int)this + 0x1c) = uVar5;
      uVar5 = uVar5 >> 0x10;
      break;
    default:
      goto switchD_005ffb0e_default;
    }
    uVar7 = 1;
    *param_7 = (short)(uVar5 % uVar6) + (short)param_4;
    *param_8 = 0;
switchD_005ffb0e_default:
    return uVar7;
  }
  if (*(int *)((int)this + 0x22e) != 5) {
    switch(param_1) {
    case CASE_0:
      goto switchD_005ff553_caseD_0;
    case CASE_1:
      goto switchD_005ff553_caseD_1;
    case CASE_2:
      goto switchD_005ff553_caseD_2;
    case CASE_3:
      goto switchD_005ff553_caseD_3;
    case CASE_4:
      goto switchD_005ff553_caseD_4;
    case CASE_5:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      sVar2 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0xab;
      goto LAB_005ff625;
    case CASE_6:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0xab;
      iVar4 = *(int *)((int)this + 0x1c);
      goto LAB_005ff63a;
    case CASE_7:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0xab;
      iVar4 = *(int *)((int)this + 0x1c);
      goto LAB_005ff5fd;
    case CASE_8:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      sVar2 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0xab;
      goto LAB_005ff5e8;
    case CASE_9:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      sVar2 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0x174;
      goto LAB_005ff8c9;
    case CASE_A:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      *param_6 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) +
                 -0x174;
      sVar2 = *(short *)((int)this + 0x21c);
      goto cf_common_exit_005FFA34;
    case CASE_B:
      sVar2 = *(short *)((int)this + 0x21a);
      break;
    case CASE_C:
      sVar2 = *(short *)((int)this + 0x21a);
      goto LAB_005ff95e;
    case CASE_D:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      sVar2 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0x174;
LAB_005ff95e:
      *param_6 = sVar2;
      iVar4 = *(int *)((int)this + 0x1c);
LAB_005ffa94:
      uVar5 = iVar4 * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      sVar2 = (*(short *)((int)this + 0x21c) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0x174;
      goto cf_common_exit_005FFAB2;
    case CASE_E:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      sVar2 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0x174;
      break;
    case CASE_F:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0x174;
      iVar4 = *(int *)((int)this + 0x1c);
      goto LAB_005ffa18;
    case CASE_10:
      uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
      *(uint *)((int)this + 0x1c) = uVar5;
      *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0x174;
      iVar4 = *(int *)((int)this + 0x1c);
      goto LAB_005ffa94;
    default:
      goto switchD_005ff553_default;
    }
    *param_6 = sVar2;
    iVar4 = *(int *)((int)this + 0x1c);
LAB_005ffa18:
    uVar5 = iVar4 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    sVar2 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21c) + 0x174;
    goto cf_common_exit_005FFA34;
  }
  switch(param_1) {
  case CASE_0:
switchD_005ff553_caseD_0:
    *param_6 = *(short *)((int)this + 0x21a);
    sVar2 = *(short *)((int)this + 0x21c);
    goto cf_common_exit_005FFA34;
  case CASE_1:
switchD_005ff553_caseD_1:
    uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    sVar2 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0xab;
LAB_005ff8c9:
    *param_6 = sVar2;
    *param_7 = *(short *)((int)this + 0x21c);
    *param_8 = *(undefined2 *)((int)this + 0x21e);
    return 1;
  case CASE_2:
switchD_005ff553_caseD_2:
    uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    *param_6 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0xab;
    sVar2 = *(short *)((int)this + 0x21c);
    goto cf_common_exit_005FFA34;
  case CASE_3:
switchD_005ff553_caseD_3:
    sVar2 = *(short *)((int)this + 0x21a);
LAB_005ff5e8:
    *param_6 = sVar2;
    iVar4 = *(int *)((int)this + 0x1c);
LAB_005ff5fd:
    uVar5 = iVar4 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    sVar2 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21c) + 0xab;
    goto cf_common_exit_005FFA34;
  case CASE_4:
switchD_005ff553_caseD_4:
    sVar2 = *(short *)((int)this + 0x21a);
LAB_005ff625:
    *param_6 = sVar2;
    iVar4 = *(int *)((int)this + 0x1c);
LAB_005ff63a:
    uVar5 = iVar4 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    sVar2 = (*(short *)((int)this + 0x21c) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0xab;
    goto cf_common_exit_005FFAB2;
  case CASE_5:
    uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    *param_6 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0x7e;
    iVar4 = *(int *)((int)this + 0x1c);
    break;
  case CASE_6:
    uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0x7e;
    iVar4 = *(int *)((int)this + 0x1c);
    break;
  case CASE_7:
    uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    *param_6 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21a) + 0x7e;
    iVar4 = *(int *)((int)this + 0x1c);
    goto LAB_005ff73a;
  case CASE_8:
    uVar5 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    *param_6 = (*(short *)((int)this + 0x21a) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0x7e;
    iVar4 = *(int *)((int)this + 0x1c);
LAB_005ff73a:
    uVar5 = iVar4 * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar5;
    sVar2 = (short)((ulonglong)(uVar5 >> 0x10) % 0x3d) + *(short *)((int)this + 0x21c) + 0x7e;
cf_common_exit_005FFA34:
    *param_7 = sVar2;
    *param_8 = *(undefined2 *)((int)this + 0x21e);
    return 1;
  default:
    goto switchD_005ff553_default;
  }
  uVar5 = iVar4 * 0x41c64e6d + 0x3039;
  *(uint *)((int)this + 0x1c) = uVar5;
  sVar2 = (*(short *)((int)this + 0x21c) - (short)((ulonglong)(uVar5 >> 0x10) % 0x3d)) + -0x7e;
cf_common_exit_005FFAB2:
  *param_7 = sVar2;
  *param_8 = *(undefined2 *)((int)this + 0x21e);
  return 1;
}

