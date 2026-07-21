
undefined4 FUN_0075ba30(AnonShape_0075BA30_FEA40A39 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  AnonShape_0075C180_8EED234B *pAVar8;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  AnonShape_0075C180_8EED234B *local_44;
  int local_40;
  AnonShape_0075BA30_FEA40A39 *local_3c;
  int local_38;
  int local_34 [4];
  int local_24;
  int local_20;
  int local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int *local_c;
  undefined4 *local_8;
  
  iVar7 = param_1->field_01AA;
  local_20 = iVar7;
  if (((param_1->field_010C != 0) && (*(int *)(iVar7 + 0x24) == 0)) &&
     (iVar2 = FUN_0075be40((AnonShape_0075BE40_B9FD5FDF *)param_1), iVar2 == 0)) {
    return 0;
  }
  local_3c = param_1;
  local_1c = 0;
  local_50 = *(undefined4 *)param_1->field_0010;
  local_4c = ((undefined4 *)param_1->field_0010)[1];
  local_48 = param_1->field_018E;
  pAVar8 = *(AnonShape_0075C180_8EED234B **)(iVar7 + 8);
  iVar2 = *(int *)(iVar7 + 0xc);
  local_38 = iVar7 + 0x10;
  local_34[0] = *(int *)(iVar7 + 0x14);
  local_34[1] = *(undefined4 *)(iVar7 + 0x18);
  local_34[2] = *(undefined4 *)(iVar7 + 0x1c);
  local_34[3] = *(undefined4 *)(iVar7 + 0x20);
  if (0 < param_1->field_0152) {
    local_8 = param_2;
    local_c = (int *)&param_1->field_0x156;
    do {
      local_18 = (int *)*local_8;
      local_24 = *local_c;
      iVar4 = *(int *)(&param_1->field_0x13a + *local_c * 4);
      local_14 = iVar4;
      local_10 = *(int *)(iVar7 + 0x28 + *(int *)(iVar4 + 0x14) * 4);
      iVar7 = *(int *)(iVar7 + 0x38 + *(int *)(iVar4 + 0x18) * 4);
      if (iVar2 < 8) {
        iVar2 = FUN_0075b720(&local_50,(uint)pAVar8,iVar2,0);
        if (iVar2 == 0) {
          return 0;
        }
        iVar2 = local_40;
        pAVar8 = local_44;
        if (7 < local_40) goto LAB_0075bb2d;
        iVar5 = 1;
LAB_0075bb5c:
        uVar3 = FUN_0075b800(&local_50,pAVar8,iVar2,local_10,iVar5);
        iVar2 = local_40;
        pAVar8 = local_44;
        if ((int)uVar3 < 0) {
          return 0;
        }
      }
      else {
LAB_0075bb2d:
        uVar3 = (int)pAVar8 >> ((char)iVar2 - 8U & 0x1f) & 0xff;
        iVar5 = *(int *)(local_10 + 0xd4 + uVar3 * 4);
        if (iVar5 == 0) {
          iVar5 = 9;
          goto LAB_0075bb5c;
        }
        uVar3 = (uint)*(byte *)(uVar3 + 0x4d4 + local_10);
        iVar2 = iVar2 - iVar5;
      }
      uVar6 = 0;
      if (uVar3 != 0) {
        if ((iVar2 < (int)uVar3) &&
           (iVar4 = FUN_0075b720(&local_50,(uint)pAVar8,iVar2,uVar3), iVar2 = local_40,
           pAVar8 = local_44, iVar4 == 0)) {
          return 0;
        }
        iVar2 = iVar2 - uVar3;
        uVar6 = (1 << ((byte)uVar3 & 0x1f)) - 1U & (int)pAVar8 >> ((byte)iVar2 & 0x1f);
        iVar4 = local_14;
        if ((int)uVar6 < *(int *)(&DAT_007a1fd4 + uVar3 * 4)) {
          uVar6 = *(int *)(&DAT_007a2014 + uVar3 * 4) + uVar6;
        }
      }
      piVar1 = local_18;
      if (*(int *)(iVar4 + 0x30) == 0) {
LAB_0075bcfa:
        iVar4 = 1;
        do {
          if (iVar2 < 8) {
            iVar2 = FUN_0075b720(&local_50,(uint)pAVar8,iVar2,0);
            if (iVar2 == 0) {
              return 0;
            }
            iVar2 = local_40;
            pAVar8 = local_44;
            if (7 < local_40) goto LAB_0075bd2e;
            iVar5 = 1;
LAB_0075bd5d:
            uVar3 = FUN_0075b800(&local_50,pAVar8,iVar2,iVar7,iVar5);
            iVar2 = local_40;
            pAVar8 = local_44;
            if ((int)uVar3 < 0) {
              return 0;
            }
          }
          else {
LAB_0075bd2e:
            uVar3 = (int)pAVar8 >> ((char)iVar2 - 8U & 0x1f) & 0xff;
            iVar5 = *(int *)(iVar7 + 0xd4 + uVar3 * 4);
            if (iVar5 == 0) {
              iVar5 = 9;
              goto LAB_0075bd5d;
            }
            uVar3 = (uint)*(byte *)(uVar3 + 0x4d4 + iVar7);
            iVar2 = iVar2 - iVar5;
          }
          uVar6 = uVar3 & 0xf;
          if (uVar6 == 0) {
            if ((int)uVar3 >> 4 != 0xf) break;
          }
          else {
            if ((iVar2 < (int)uVar6) &&
               (iVar5 = FUN_0075b720(&local_50,(uint)pAVar8,iVar2,uVar6), iVar2 = local_40,
               pAVar8 = local_44, iVar5 == 0)) {
              return 0;
            }
            iVar2 = iVar2 - uVar6;
          }
          iVar4 = iVar4 + ((int)uVar3 >> 4) + 1;
        } while (iVar4 < 0x40);
      }
      else {
        iVar5 = local_34[local_24];
        local_34[local_24] = uVar6 + iVar5;
        *piVar1 = uVar6 + iVar5;
        if (*(int *)(iVar4 + 0x24) < 2) goto LAB_0075bcfa;
        iVar4 = 1;
        do {
          if (iVar2 < 8) {
            iVar2 = FUN_0075b720(&local_50,(uint)pAVar8,iVar2,0);
            if (iVar2 == 0) {
              return 0;
            }
            iVar2 = local_40;
            pAVar8 = local_44;
            if (7 < local_40) goto LAB_0075bc29;
            iVar5 = 1;
LAB_0075bc58:
            uVar3 = FUN_0075b800(&local_50,pAVar8,iVar2,iVar7,iVar5);
            iVar2 = local_40;
            pAVar8 = local_44;
            if ((int)uVar3 < 0) {
              return 0;
            }
          }
          else {
LAB_0075bc29:
            uVar3 = (int)pAVar8 >> ((char)iVar2 - 8U & 0x1f) & 0xff;
            iVar5 = *(int *)(iVar7 + 0xd4 + uVar3 * 4);
            if (iVar5 == 0) {
              iVar5 = 9;
              goto LAB_0075bc58;
            }
            uVar3 = (uint)*(byte *)(uVar3 + 0x4d4 + iVar7);
            iVar2 = iVar2 - iVar5;
          }
          uVar6 = uVar3 & 0xf;
          if (uVar6 == 0) {
            if ((int)uVar3 >> 4 != 0xf) break;
            iVar4 = iVar4 + 0xf;
          }
          else {
            local_24 = iVar4 + ((int)uVar3 >> 4);
            if ((iVar2 < (int)uVar6) &&
               (iVar4 = FUN_0075b720(&local_50,(uint)pAVar8,iVar2,uVar6), iVar2 = local_40,
               pAVar8 = local_44, iVar4 == 0)) {
              return 0;
            }
            iVar2 = iVar2 - uVar6;
            uVar3 = (1 << (sbyte)uVar6) - 1U & (int)pAVar8 >> ((byte)iVar2 & 0x1f);
            if ((int)uVar3 < *(int *)(&DAT_007a1fd4 + uVar6 * 4)) {
              uVar3 = *(int *)(&DAT_007a2014 + uVar6 * 4) + uVar3;
            }
            local_18[(&DAT_007a1e94)[local_24]] = uVar3;
            iVar4 = local_24;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 0x40);
      }
      local_8 = local_8 + 1;
      local_1c = local_1c + 1;
      local_c = local_c + 1;
      iVar7 = local_20;
    } while (local_1c < param_1->field_0152);
  }
  *(undefined4 *)param_1->field_0010 = local_50;
  *(undefined4 *)(param_1->field_0010 + 4) = local_4c;
  param_1->field_018E = local_48;
  *(int *)(iVar7 + 0xc) = iVar2;
  *(int *)(iVar7 + 0x14) = local_34[0];
  *(int *)(iVar7 + 0x18) = local_34[1];
  *(AnonShape_0075C180_8EED234B **)(iVar7 + 8) = pAVar8;
  *(int *)(iVar7 + 0x1c) = local_34[2];
  *(int *)(iVar7 + 0x20) = local_34[3];
  *(int *)(iVar7 + 0x24) = *(int *)(iVar7 + 0x24) + -1;
  return 1;
}

