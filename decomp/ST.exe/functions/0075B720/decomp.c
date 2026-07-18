
undefined4 FUN_0075b720(undefined4 *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  pbVar2 = (byte *)*param_1;
  iVar1 = param_1[1];
  for (; param_3 < 0x19; param_3 = param_3 + 8) {
    if (param_1[2] == 0) {
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*(int *)(param_1[5] + 0x10) + 0xc))(param_1[5]);
        if (iVar1 == 0) {
          return 0;
        }
        pbVar2 = (byte *)**(undefined4 **)(param_1[5] + 0x10);
        iVar1 = (*(undefined4 **)(param_1[5] + 0x10))[1];
      }
      iVar1 = iVar1 + -1;
      uVar3 = (uint)*pbVar2;
      pbVar2 = pbVar2 + 1;
      if (uVar3 == 0xff) {
        do {
          if (iVar1 == 0) {
            iVar1 = (**(code **)(*(int *)(param_1[5] + 0x10) + 0xc))(param_1[5]);
            if (iVar1 == 0) {
              return 0;
            }
            pbVar2 = (byte *)**(undefined4 **)(param_1[5] + 0x10);
            iVar1 = (*(undefined4 **)(param_1[5] + 0x10))[1];
          }
          iVar1 = iVar1 + -1;
          uVar3 = (uint)*pbVar2;
          pbVar2 = pbVar2 + 1;
        } while (uVar3 == 0xff);
        if (uVar3 != 0) {
          param_1[2] = uVar3;
          goto LAB_0075b7ac;
        }
        uVar3 = 0xff;
      }
    }
    else {
LAB_0075b7ac:
      if (param_4 <= param_3) break;
      if (*(int *)param_1[6] == 0) {
        *(int *)param_1[6] = 1;
      }
      uVar3 = 0;
    }
    param_2 = param_2 << 8 | uVar3;
  }
  param_1[4] = param_3;
  *param_1 = pbVar2;
  param_1[1] = iVar1;
  param_1[3] = param_2;
  return 1;
}

