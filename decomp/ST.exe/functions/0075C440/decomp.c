
undefined4 FUN_0075c440(AnonShape_0075C440_EFE38C9F *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  AnonShape_0075C440_EFE38C9F *local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_c = param_1->field_0182;
  iVar2 = param_1->field_01AA;
  local_18 = param_1->field_018A;
  local_10 = iVar2;
  if (((param_1->field_010C != 0) && (*(int *)(iVar2 + 0x28) == 0)) &&
     (iVar1 = FUN_0075c3b0((AnonShape_0075C3B0_6803BA0D *)param_1), iVar1 == 0)) {
    return 0;
  }
  if (*(int *)(iVar2 + 0x14) == 0) {
    local_30 = param_1->field_018E;
    local_24 = param_1;
    local_38 = *(undefined4 *)param_1->field_0010;
    local_34 = ((undefined4 *)param_1->field_0010)[1];
    uVar7 = *(uint *)(iVar2 + 8);
    iVar1 = *(int *)(iVar2 + 0xc);
    local_20 = iVar2 + 0x10;
    local_1c = *param_2;
    local_8 = *(int *)(iVar2 + 0x3c);
    param_2 = param_1->field_017E;
    local_14 = 0;
    if ((int)param_2 <= local_c) {
      do {
        if (iVar1 < 8) {
          iVar2 = FUN_0075b720(&local_38,uVar7,iVar1,0);
          if (iVar2 == 0) {
            return 0;
          }
          iVar1 = local_28;
          uVar7 = local_2c;
          if (7 < local_28) goto LAB_0075c512;
          iVar2 = 1;
LAB_0075c541:
          uVar3 = FUN_0075b800(&local_38,uVar7,iVar1,local_8,iVar2);
          iVar1 = local_28;
          uVar7 = local_2c;
          if ((int)uVar3 < 0) {
            return 0;
          }
        }
        else {
LAB_0075c512:
          uVar3 = (int)uVar7 >> ((char)iVar1 - 8U & 0x1f) & 0xff;
          iVar2 = *(int *)(local_8 + 0xd4 + uVar3 * 4);
          if (iVar2 == 0) {
            iVar2 = 9;
            goto LAB_0075c541;
          }
          uVar3 = (uint)*(byte *)(uVar3 + 0x4d4 + local_8);
          iVar1 = iVar1 - iVar2;
        }
        iVar2 = (int)uVar3 >> 4;
        uVar3 = uVar3 & 0xf;
        if (uVar3 == 0) {
          if (iVar2 != 0xf) {
            iVar6 = 1 << ((byte)iVar2 & 0x1f);
            if (iVar2 != 0) {
              if ((iVar1 < iVar2) &&
                 (iVar4 = FUN_0075b720(&local_38,uVar7,iVar1,iVar2), iVar1 = local_28,
                 uVar7 = local_2c, iVar4 == 0)) {
                return 0;
              }
              iVar1 = iVar1 - iVar2;
              iVar6 = iVar6 + ((int)uVar7 >> ((byte)iVar1 & 0x1f) & iVar6 - 1U);
            }
            local_14 = iVar6 + -1;
            iVar2 = local_10;
            break;
          }
          param_2 = (int *)((int)param_2 + 0xf);
        }
        else {
          param_2 = (int *)((int)param_2 + iVar2);
          if ((iVar1 < (int)uVar3) &&
             (iVar2 = FUN_0075b720(&local_38,uVar7,iVar1,uVar3), iVar1 = local_28, uVar7 = local_2c,
             iVar2 == 0)) {
            return 0;
          }
          iVar1 = iVar1 - uVar3;
          uVar5 = (1 << (sbyte)uVar3) - 1U & (int)uVar7 >> ((byte)iVar1 & 0x1f);
          if ((int)uVar5 < *(int *)(&DAT_007a2054 + uVar3 * 4)) {
            uVar5 = *(int *)(&DAT_007a2094 + uVar3 * 4) + uVar5;
          }
          *(uint *)(local_1c + (&DAT_007a1e94)[(int)param_2] * 4) = uVar5 << ((byte)local_18 & 0x1f)
          ;
        }
        param_2 = (int *)((int)param_2 + 1);
        iVar2 = local_10;
      } while ((int)param_2 <= local_c);
    }
    *(undefined4 *)param_1->field_0010 = local_38;
    *(undefined4 *)(param_1->field_0010 + 4) = local_34;
    param_1->field_018E = local_30;
    *(int *)(iVar2 + 0xc) = iVar1;
    *(uint *)(iVar2 + 8) = uVar7;
  }
  else {
    local_14 = *(int *)(iVar2 + 0x14) + -1;
  }
  *(int *)(iVar2 + 0x14) = local_14;
  *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + -1;
  return 1;
}

