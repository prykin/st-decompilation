
/* [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=0060EF40 @ 0060F544 -> read as EAX on
   every CFG path | 0060EF40 @ 0060F604 -> read as EAX on every CFG path | 00614C80 @ 00614D06 ->
   read as EAX on every CFG path */

int FUN_0060f940(int param_1,int param_2,RecoveredRecordView_0060F940_8057A92D *param_3,int param_4,
                int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,
                int param_11,int param_12,int param_13,int *param_14,int *param_15)

{
  short *psVar1;
  short *psVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int local_EAX_433;
  int iVar6;
  int iVar7;
  int local_EAX_1611;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_8;

  local_8 = -1;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_4 == 0) {

    iVar6 = FUN_006acf0d(param_5,param_6,param_7,param_8,param_9,param_10);

    iVar7 = FUN_006acf0d(param_8,param_9,param_10,param_11,param_12,param_13);
    if ((iVar6 != 0) && (iVar7 != 0)) {
      iVar8 = (param_13 - param_10) * (param_10 - param_7) +
              (param_12 - param_9) * (param_9 - param_6) +
              (param_11 - param_8) * (param_8 - param_5);
      if (iVar6 < iVar7) {
        iVar8 = ((iVar8 / iVar6) * 10000) / iVar7;
      }
      else {
        iVar8 = ((iVar8 / iVar7) * 10000) / iVar6;
      }
      *param_14 = iVar8;
      *param_15 = iVar7;
      param_3->field_0008 = iVar6;
      if (iVar8 != 0) {
        iVar8 = (iVar6 * 10000) / iVar8;
        param_3->field_000C = (param_8 - param_5) * 10 - ((param_11 - param_8) * iVar8 * 10) / iVar7
        ;
        param_3->field_0010 = (param_9 - param_6) * 10 - ((param_12 - param_9) * iVar8 * 10) / iVar7
        ;
        param_3->field_0014 =
             (param_10 - param_7) * 10 - ((param_13 - param_10) * iVar8 * 10) / iVar7;
      }

      local_EAX_1611 =
           FUN_006acf0d(param_3->field_000C,param_3->field_0010,param_3->field_0014,0,0,0);
      if (local_EAX_1611 != 0) {
        local_8 = 8;
        param_3->field_000C = (param_3->field_000C * 10000) / local_EAX_1611;
        param_3->field_0010 = (param_3->field_0010 * 10000) / local_EAX_1611;
        param_3->field_0014 = (param_3->field_0014 * 10000) / local_EAX_1611;
      }
      return local_8;
    }
    return -1;
  }
  if (param_1 == param_2) {
    return 0;
  }
  psVar1 = &SHORT_007ed574 + param_1 * 4;
  psVar2 = &SHORT_007ed572 + param_1 * 4;
  psVar3 = &SHORT_007ed570 + param_1 * 4;
  iVar8 = *(int *)(&DAT_007cfe74 + param_1 * 4);
  iVar5 = (((((int)*psVar1 * (int)(&SHORT_007ed574)[param_2 * 4] +
              (int)*psVar2 * (int)(&SHORT_007ed572)[param_2 * 4] +
             (int)*psVar3 * (int)(&SHORT_007ed570)[param_2 * 4]) * 1000000) / iVar8) * 10000) /
          *(int *)(&DAT_007cfe74 + param_2 * 4);
  if ((iVar5 < 0) && (iVar5 < -0xdac)) {
    return -1;
  }
  iVar4 = iVar5 >> 0x1f;
  iVar9 = iVar5 / 10 + iVar4;
  iVar10 = iVar9 - iVar4;
  if (iVar10 < 0x1f5) {
    if (iVar10 == 500) {
      local_8 = 4;
    }
    else {
      if (iVar10 == -0x14d) {
        local_8 = 7;
        param_3->field_0008 = (iVar8 * 0xc9) / 1000;
        iVar5 = (*(int *)(&DAT_007cfe74 + param_1 * 4) * 10000) / iVar5;
        param_3->field_000C =
             *psVar3 * 1000 -
             ((&SHORT_007ed570)[param_2 * 4] * iVar5 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
        param_3->field_0010 =
             *psVar2 * 1000 -
             ((&SHORT_007ed572)[param_2 * 4] * iVar5 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
        iVar8 = *psVar1 * 1000 -
                ((&SHORT_007ed574)[param_2 * 4] * iVar5 * 1000) /
                *(int *)(&DAT_007cfe74 + param_2 * 4);
        param_3->field_0014 = iVar8;

        iVar5 = FUN_006acf0d(param_3->field_000C,param_3->field_0010,iVar8,0,0,0);
        param_3->field_000C = (param_3->field_000C * -10000) / iVar5;
        param_3->field_0010 = (param_3->field_0010 * -10000) / iVar5;
        iVar8 = param_3->field_0014 * -5;
        goto LAB_0060fe02;
      }
      if (iVar9 == iVar4) {
        param_3->field_0008 = (iVar8 * 0xc9) / 1000;
        param_3->field_000C = (&SHORT_007ed570)[param_2 * 4] * -10000;
        param_3->field_0010 = (&SHORT_007ed572)[param_2 * 4] * -10000;
        iVar8 = (&SHORT_007ed574)[param_2 * 4] * -10000;
        param_3->field_0014 = iVar8;

        local_EAX_433 = FUN_006acf0d(param_3->field_000C,param_3->field_0010,iVar8,0,0,0);
        param_3->field_000C = (param_3->field_000C * 10000) / local_EAX_433;
        param_3->field_0010 = (param_3->field_0010 * 10000) / local_EAX_433;
        param_3->field_0014 = (param_3->field_0014 * 10000) / local_EAX_433;
        return 6;
      }
      if (iVar10 != 0x14d) {
        return -1;
      }
      local_8 = 5;
    }
  }
  else if (iVar10 == 0x241) {
    local_8 = 3;
  }
  else if (iVar10 == 0x2c3) {
    local_8 = 2;
  }
  else {
    if (iVar10 != 0x330) {
      return -1;
    }
    local_8 = 1;
  }
  param_3->field_0008 = (iVar8 * 0xc9) / 1000;
  iVar5 = (*(int *)(&DAT_007cfe74 + param_1 * 4) * 10000) / iVar5;
  param_3->field_000C =
       *psVar3 * 1000 -
       ((&SHORT_007ed570)[param_2 * 4] * iVar5 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
  param_3->field_0010 =
       *psVar2 * 1000 -
       ((&SHORT_007ed572)[param_2 * 4] * iVar5 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
  iVar8 = *psVar1 * 1000 -
          ((&SHORT_007ed574)[param_2 * 4] * iVar5 * 1000) / *(int *)(&DAT_007cfe74 + param_2 * 4);
  param_3->field_0014 = iVar8;

  iVar5 = FUN_006acf0d(param_3->field_000C,param_3->field_0010,iVar8,0,0,0);
  param_3->field_000C = (param_3->field_000C * 10000) / iVar5;
  param_3->field_0010 = (param_3->field_0010 * 10000) / iVar5;
  iVar8 = param_3->field_0014 * 5;
LAB_0060fe02:
  param_3->field_0014 = (iVar8 * 2000) / iVar5;
  return local_8;
}

