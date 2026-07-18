
void FUN_006d0f50(uint *param_1,int param_2,uint *param_3,int param_4,uint param_5,int param_6,
                 int param_7,byte param_8,uint param_9)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (0 < (int)param_5) {
    if (param_9 != 0xffffffff) {
      _param_8 = CONCAT13(param_8,CONCAT12(param_8,CONCAT11(param_8,param_8)));
      param_9 = CONCAT13((byte)param_9,CONCAT12((byte)param_9,CONCAT11((byte)param_9,(byte)param_9))
                        );
      do {
        uVar6 = param_5 >> 2;
        if (param_5 >> 2 != 0) {
          do {
            while( true ) {
              uVar5 = *param_3;
              param_3 = param_3 + 1;
              if (uVar5 == _param_8) break;
              if (uVar5 == param_9) {
                param_1 = param_1 + 1;
                uVar5 = uVar6 - 1;
                bVar2 = (int)uVar6 < 1;
                uVar6 = uVar5;
                if (uVar5 == 0 || bVar2) goto LAB_006d105f;
              }
              else {
                if ((byte)uVar5 != (byte)param_9) {
                  if ((byte)uVar5 == param_8) {
                    uVar5 = CONCAT31((int3)(uVar5 >> 8),
                                     *(undefined1 *)(param_7 + (uint)(byte)*param_1));
                  }
                  *(byte *)param_1 = (byte)uVar5;
                }
                uVar4 = uVar5 >> 8;
                bVar3 = (byte)(uVar5 >> 8);
                if (bVar3 != (byte)param_9) {
                  if (bVar3 == param_8) {
                    uVar4 = (uint)CONCAT21((short)(uVar5 >> 0x10),
                                           *(undefined1 *)
                                            (param_7 + (uint)*(byte *)((int)param_1 + 1)));
                  }
                  *(byte *)((int)param_1 + 1) = (byte)uVar4;
                }
                uVar5 = uVar4 >> 8;
                bVar3 = (byte)(uVar4 >> 8);
                if (bVar3 != (byte)param_9) {
                  if (bVar3 == param_8) {
                    uVar5 = (uint)CONCAT21((short)(uVar4 >> 0x10),
                                           *(undefined1 *)
                                            (param_7 + (uint)*(byte *)((int)param_1 + 2)));
                  }
                  *(byte *)((int)param_1 + 2) = (byte)uVar5;
                }
                bVar3 = (byte)(uVar5 >> 8);
                if (bVar3 != (byte)param_9) {
                  if (bVar3 == param_8) {
                    bVar3 = *(byte *)(param_7 + (uint)*(byte *)((int)param_1 + 3));
                  }
                  *(byte *)((int)param_1 + 3) = bVar3;
                }
                param_1 = param_1 + 1;
                uVar5 = uVar6 - 1;
                bVar2 = (int)uVar6 < 1;
                uVar6 = uVar5;
                if (uVar5 == 0 || bVar2) goto LAB_006d105f;
              }
            }
            uVar5 = *param_1;
            bVar3 = *(byte *)(param_7 + (uVar5 >> 8 & 0xff));
            *(byte *)param_1 = *(byte *)(param_7 + (uVar5 & 0xff));
            *(byte *)((int)param_1 + 1) = bVar3;
            bVar3 = *(byte *)(param_7 + (uVar5 >> 0x18));
            *(byte *)((int)param_1 + 2) = *(byte *)(param_7 + (uVar5 >> 0x10 & 0xff));
            *(byte *)((int)param_1 + 3) = bVar3;
            param_1 = param_1 + 1;
            uVar5 = uVar6 - 1;
            bVar2 = 0 < (int)uVar6;
            uVar6 = uVar5;
          } while (uVar5 != 0 && bVar2);
        }
LAB_006d105f:
        uVar6 = param_5 & 3;
        if ((param_5 & 3) != 0) {
          do {
            while( true ) {
              bVar3 = (byte)*param_3;
              param_3 = (uint *)((int)param_3 + 1);
              if (bVar3 != param_8) break;
              *(byte *)param_1 = *(byte *)(param_7 + (uint)(byte)*param_1);
              param_1 = (uint *)((int)param_1 + 1);
              uVar5 = uVar6 - 1;
              bVar2 = (int)uVar6 < 1;
              uVar6 = uVar5;
              if (uVar5 == 0 || bVar2) goto LAB_006d1089;
            }
            if (bVar3 != (byte)param_9) {
              *(byte *)param_1 = bVar3;
            }
            param_1 = (uint *)((int)param_1 + 1);
            uVar5 = uVar6 - 1;
            bVar2 = 0 < (int)uVar6;
            uVar6 = uVar5;
          } while (uVar5 != 0 && bVar2);
        }
LAB_006d1089:
        param_3 = (uint *)((int)param_3 + (param_4 - param_5));
        param_1 = (uint *)((int)param_1 + (param_2 - param_5));
        iVar1 = param_6 + -1;
        bVar2 = param_6 < 1;
        param_6 = iVar1;
        if (iVar1 == 0 || bVar2) {
          return;
        }
      } while( true );
    }
    if (0 < param_6) {
      param_9 = param_6;
      do {
        uVar6 = param_5;
        if (0 < (int)param_5) {
          do {
            uVar5 = *param_3;
            param_3 = (uint *)((int)param_3 + 1);
            if ((byte)uVar5 == param_8) {
              *(byte *)param_1 = *(byte *)((uint)(byte)*param_1 + param_7);
            }
            else {
              *(byte *)param_1 = (byte)uVar5;
            }
            param_1 = (uint *)((int)param_1 + 1);
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        param_3 = (uint *)((int)param_3 + (param_4 - param_5));
        param_1 = (uint *)((int)param_1 + (param_2 - param_5));
        param_9 = param_9 - 1;
      } while (param_9 != 0);
    }
  }
  return;
}

