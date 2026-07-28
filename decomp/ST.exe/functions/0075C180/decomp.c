
undefined4 FUN_0075c180(AnonShape_0075C180_8EED234B *param_1,undefined4 *param_2)

{
  AnonShape_0075C180_8EED234B *pAVar1;
  AnonShape_0075C180_8EED234B *pAVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  AnonShape_0075C180_73A43719 *pAVar8;
  int *piVar9;
  int *piVar10;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  AnonShape_0075C180_8EED234B *local_40;
  int local_3c;
  AnonShape_0075C180_8EED234B *local_38;
  AnonShape_0075C180_73A43719 *local_34;
  int local_30 [5];
  int *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  AnonShape_0075C180_73A43719 *local_c;
  int *local_8;

  pAVar2 = param_1;
  local_18 = param_1->field_018A;
  local_c = (AnonShape_0075C180_73A43719 *)param_1->field_01AA;
  if (((param_1->field_010C != 0) &&
      (((AnonShape_0075C180_73A43719 *)param_1->field_01AA)[2].field_0008 ==
       (AnonShape_0075C180_8EED234B *)0x0)) &&
     (iVar3 = FUN_0075c3b0((AnonShape_0075BE40_B9FD5FDF *)param_1), iVar3 == 0)) {
    return 0;
  }
  pAVar8 = local_c;
  local_38 = param_1;
  local_4c = *param_1->field_0010;
  local_10 = 0;
  local_48 = param_1->field_0010[1];
  local_44 = param_1->field_018E;
  pAVar1 = local_c->field_0008;
  iVar3 = local_c->field_000C;
  local_34 = local_c + 1;
  piVar9 = (int *)&local_c[1].field_0x4;
  piVar10 = local_30;
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar10 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 1;
  }
  if (0 < param_1->field_0152) {
    local_8 = (int *)&param_1->field_0x156;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = pAVar1;
    do {
      local_1c = (int *)*param_2;
      local_14 = *local_8;
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar5 = (&pAVar8[2].field_000C)
              [*(int *)(*(int *)(&pAVar2->field_0x13a + *local_8 * 4) + 0x14)];
      if (iVar3 < 8) {
        iVar3 = FUN_0075b720(&local_4c,param_1,iVar3,0);
        if (iVar3 == 0) {
          return 0;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = local_40;
        iVar3 = local_3c;
        if (7 < local_3c) goto LAB_0075c271;
        iVar6 = 1;
LAB_0075c29e:
        uVar4 = FUN_0075b800(&local_4c,param_1,iVar3,iVar5,iVar6);
        if ((int)uVar4 < 0) {
          return 0;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = local_40;
        iVar3 = local_3c;
      }
      else {
LAB_0075c271:
        uVar4 = (int)param_1 >> ((char)iVar3 - 8U & 0x1f) & 0xff;
        iVar6 = *(int *)(iVar5 + 0xd4 + uVar4 * 4);
        if (iVar6 == 0) {
          iVar6 = 9;
          goto LAB_0075c29e;
        }
        iVar3 = iVar3 - iVar6;
        uVar4 = (uint)*(byte *)(uVar4 + 0x4d4 + iVar5);
      }
      uVar7 = 0;
      if (uVar4 != 0) {
        if (iVar3 < (int)uVar4) {
          iVar3 = FUN_0075b720(&local_4c,param_1,iVar3,uVar4);
          if (iVar3 == 0) {
            return 0;
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = local_40;
          iVar3 = local_3c;
        }
        iVar3 = iVar3 - uVar4;
        uVar7 = (1 << ((byte)uVar4 & 0x1f)) - 1U & (int)param_1 >> ((byte)iVar3 & 0x1f);
        if ((int)uVar7 < *(int *)(&DAT_007a2054 + uVar4 * 4)) {
          uVar7 = *(int *)(&DAT_007a2094 + uVar4 * 4) + uVar7;
        }
      }
      iVar5 = local_30[local_14 + 1];
      local_30[local_14 + 1] = uVar7 + iVar5;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + 1;
      *local_1c = uVar7 + iVar5 << ((byte)local_18 & 0x1f);
      local_10 = local_10 + 1;
      local_8 = local_8 + 1;
      pAVar8 = local_c;
      pAVar1 = param_1;
    } while (local_10 < pAVar2->field_0152);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = pAVar1;
  *pAVar2->field_0010 = local_4c;
  pAVar2->field_0010[1] = local_48;
  pAVar2->field_018E = local_44;
  pAVar8->field_0008 = param_1;
  pAVar8->field_000C = iVar3;
  pAVar2 = pAVar8[2].field_0008;
  piVar9 = local_30;
  piVar10 = (int *)&pAVar8[1].field_0x4;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar10 = *piVar9;
    piVar9 = piVar9 + 1;
    piVar10 = piVar10 + 1;
  }
  pAVar8[2].field_0008 = (AnonShape_0075C180_8EED234B *)&pAVar2[-1].field_0x1af;
  return 1;
}

