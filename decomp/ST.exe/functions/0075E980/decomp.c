
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0075E890 -> 0075E980 @ 0075E8E3; FUN_0075e890 parameter param_1

   [STReturnSemanticsApplier] machine_count_return.
   Evidence: every reachable RET carries EAX from an exact zero initializer; the only subsequent
   accumulator definitions are INC EAX and at least one reachable path increments the count; machine
   CFG audit: used=1, ignored=0, unknown=0 */

uint FUN_0075e980(AnonShape_0075E890_C23EB446 *param_1,int param_2,int *param_3,int param_4,
                 int param_5)

{
  AnonNested_0075EB40_0080_454B432A *pAVar1;
  AnonShape_0075E890_C23EB446 *pAVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int local_428 [256];
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int *piVar7;

  piVar7 = param_3;
  pAVar2 = param_1;
  local_c = *(int *)&param_1->field_0x7c;
  local_20 = (int)param_3 * 2 + 0x1c >> 1;
  local_8 = 0x7fffffff;
  AnonShape_0075E890_C23EB446 * param_1_after_write = nullptr; /* compiler stack-slot lifetime split */
  local_28 = param_2 * 2 + 0x18 >> 1;
  local_24 = param_4 * 2 + 0x18 >> 1;
  if (0 < local_c) {
    pAVar1 = pAVar2->field_0080;
    auto param_3_after_write = local_428; /* compiler stack-slot lifetime split */
    local_18 = pAVar1->field_0000;
    local_10 = pAVar1->field_0004;
    local_14 = pAVar1->field_0008;
    do {
      uVar4 = (uint)(byte)(&param_1_after_write->field_0x0)[local_18];
      if ((int)uVar4 < param_2) {
        iVar7 = (uVar4 - param_2) * (uVar4 - param_2);
        iVar6 = param_2 + 0x18;
LAB_0075ea13:
        iVar3 = iVar6;
      }
      else {
        iVar3 = param_2 + 0x18;
        iVar6 = param_2;
        if (iVar3 < (int)uVar4) {
          iVar7 = (uVar4 - iVar3) * (uVar4 - iVar3);
          goto LAB_0075ea13;
        }
        iVar7 = 0;
        if (local_28 < (int)uVar4) goto LAB_0075ea13;
      }
      uVar5 = (uint)(byte)(&param_1_after_write->field_0x0)[local_10];
      if ((int)uVar5 < (int)piVar7) {
        iVar6 = (uVar5 - (int)piVar7) * 3;
        iVar7 = iVar7 + iVar6 * iVar6;
        iVar6 = uVar5 - (int)(piVar7 + 7);
      }
      else {
        piVar8 = piVar7 + 7;
        if ((int)piVar8 < (int)uVar5) {
          iVar6 = (uVar5 - (int)piVar8) * 3;
          iVar7 = iVar7 + iVar6 * iVar6;
        }
        else if ((int)uVar5 <= local_20) {
          iVar6 = uVar5 - (int)piVar8;
          goto LAB_0075ea6d;
        }
        iVar6 = uVar5 - (int)piVar7;
      }
LAB_0075ea6d:
      uVar5 = (uint)(byte)(&param_1_after_write->field_0x0)[local_14];
      if ((int)uVar5 < param_4) {
        iVar9 = (uVar5 - param_4) * 2;
        iVar7 = iVar7 + iVar9 * iVar9;
        local_1c = uVar5 - (param_4 + 0x18);
      }
      else {
        local_1c = param_4 + 0x18;
        if (local_1c < (int)uVar5) {
          iVar9 = (uVar5 - local_1c) * 2;
          iVar7 = iVar7 + iVar9 * iVar9;
        }
        else if ((int)uVar5 <= local_24) {
          local_1c = uVar5 - local_1c;
          goto LAB_0075eac8;
        }
        local_1c = uVar5 - param_4;
      }
LAB_0075eac8:
      iVar3 = (uVar4 - iVar3) * (uVar4 - iVar3) + iVar6 * 3 * iVar6 * 3 +
              local_1c * 2 * local_1c * 2;
      *param_3_after_write = iVar7;
      if (iVar3 < local_8) {
        local_8 = iVar3;
      }
      param_1_after_write = (AnonShape_0075E890_C23EB446 *)&param_1_after_write->field_0x1;
      param_3_after_write = param_3_after_write + 1;
    } while ((int)param_1_after_write < local_c);
  }
  uVar4 = 0;
  iVar3 = 0;
  if (0 < local_c) {
    piVar8 = local_428;
    do {
      if (*piVar8 <= local_8) {
        *(char *)(uVar4 + param_5) = (char)iVar3;
        uVar4 = uVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar3 < local_c);
  }
  return uVar4;
}

