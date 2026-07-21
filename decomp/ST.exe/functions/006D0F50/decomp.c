
void FUN_006d0f50(AnonShape_006D0F50_D22E7C78 *param_1,int param_2,uint *param_3,int param_4,
                 uint param_5,int param_6,int param_7,byte param_8,uint param_9)

{
  int iVar1;
  AnonShape_006D0F50_D22E7C78 AVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;

  if (0 < (int)param_5) {
    if (param_9 != 0xffffffff) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      _param_8 = CONCAT13(param_8,CONCAT12(param_8,CONCAT11(param_8,param_8)));
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      param_9 = CONCAT13((byte)param_9,CONCAT12((byte)param_9,CONCAT11((byte)param_9,(byte)param_9))
                        );
      do {
        uVar7 = param_5 >> 2;
        if (param_5 >> 2 != 0) {
          do {
            while( true ) {
              uVar6 = *param_3;
              param_3 = param_3 + 1;
              if (uVar6 == _param_8) break;
              if (uVar6 == param_9) {
                param_1 = param_1 + 1;
                uVar6 = uVar7 - 1;
                bVar3 = (int)uVar7 < 1;
                uVar7 = uVar6;
                if (uVar6 == 0 || bVar3) goto LAB_006d105f;
              }
              else {
                if ((byte)uVar6 != (byte)param_9) {
                  if ((byte)uVar6 == param_8) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar6 = CONCAT31((int3)(uVar6 >> 8),
                                     *(undefined1 *)(param_7 + (uint)*(byte *)param_1));
                  }
                  *(byte *)param_1 = (byte)uVar6;
                }
                uVar5 = uVar6 >> 8;
                bVar4 = (byte)(uVar6 >> 8);
                if (bVar4 != (byte)param_9) {
                  if (bVar4 == param_8) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar5 = (uint)CONCAT21((short)(uVar6 >> 0x10),
                                           *(undefined1 *)(param_7 + (uint)param_1->field_0001));
                  }
                  param_1->field_0001 = (byte)uVar5;
                }
                uVar6 = uVar5 >> 8;
                bVar4 = (byte)(uVar5 >> 8);
                if (bVar4 != (byte)param_9) {
                  if (bVar4 == param_8) {
                    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                    uVar6 = (uint)CONCAT21((short)(uVar5 >> 0x10),
                                           *(undefined1 *)(param_7 + (uint)param_1->field_0002));
                  }
                  param_1->field_0002 = (byte)uVar6;
                }
                bVar4 = (byte)(uVar6 >> 8);
                if (bVar4 != (byte)param_9) {
                  if (bVar4 == param_8) {
                    bVar4 = *(byte *)(param_7 + (uint)param_1->field_0003);
                  }
                  param_1->field_0003 = bVar4;
                }
                param_1 = param_1 + 1;
                uVar6 = uVar7 - 1;
                bVar3 = (int)uVar7 < 1;
                uVar7 = uVar6;
                if (uVar6 == 0 || bVar3) goto LAB_006d105f;
              }
            }
            AVar2 = *param_1;
            bVar4 = *(byte *)(param_7 + ((uint)AVar2 >> 8 & 0xff));
            *(byte *)param_1 = *(byte *)(param_7 + ((uint)AVar2 & 0xff));
            param_1->field_0001 = bVar4;
            bVar4 = *(byte *)(param_7 + ((uint)AVar2 >> 0x18));
            param_1->field_0002 = *(byte *)(param_7 + ((uint)AVar2 >> 0x10 & 0xff));
            param_1->field_0003 = bVar4;
            param_1 = param_1 + 1;
            uVar6 = uVar7 - 1;
            bVar3 = 0 < (int)uVar7;
            uVar7 = uVar6;
          } while (uVar6 != 0 && bVar3);
        }
LAB_006d105f:
        uVar7 = param_5 & 3;
        if ((param_5 & 3) != 0) {
          do {
            while( true ) {
              bVar4 = (byte)*param_3;
              param_3 = (uint *)((int)param_3 + 1);
              if (bVar4 != param_8) break;
              *(byte *)param_1 = *(byte *)(param_7 + (uint)*(byte *)param_1);
              param_1 = (AnonShape_006D0F50_D22E7C78 *)&param_1->field_0001;
              uVar6 = uVar7 - 1;
              bVar3 = (int)uVar7 < 1;
              uVar7 = uVar6;
              if (uVar6 == 0 || bVar3) goto LAB_006d1089;
            }
            if (bVar4 != (byte)param_9) {
              *(byte *)param_1 = bVar4;
            }
            param_1 = (AnonShape_006D0F50_D22E7C78 *)&param_1->field_0001;
            uVar6 = uVar7 - 1;
            bVar3 = 0 < (int)uVar7;
            uVar7 = uVar6;
          } while (uVar6 != 0 && bVar3);
        }
LAB_006d1089:
        param_3 = (uint *)((int)param_3 + (param_4 - param_5));
        param_1 = (AnonShape_006D0F50_D22E7C78 *)((int)param_1 + (param_2 - param_5));
        iVar1 = param_6 + -1;
        bVar3 = param_6 < 1;
        param_6 = iVar1;
        if (iVar1 == 0 || bVar3) {
          return;
        }
      } while( true );
    }
    if (0 < param_6) {
      param_9 = param_6;
      do {
        uVar7 = param_5;
        if (0 < (int)param_5) {
          do {
            uVar6 = *param_3;
            param_3 = (uint *)((int)param_3 + 1);
            if ((byte)uVar6 == param_8) {
              *(byte *)param_1 = *(byte *)((uint)*(byte *)param_1 + param_7);
            }
            else {
              *(byte *)param_1 = (byte)uVar6;
            }
            param_1 = (AnonShape_006D0F50_D22E7C78 *)&param_1->field_0001;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        param_3 = (uint *)((int)param_3 + (param_4 - param_5));
        param_1 = (AnonShape_006D0F50_D22E7C78 *)((int)param_1 + (param_2 - param_5));
        param_9 = param_9 - 1;
      } while (param_9 != 0);
    }
  }
  return;
}

