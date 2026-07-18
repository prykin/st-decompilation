
void FUN_006c6100(int param_1,ushort *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9,int param_10,uint param_11,uint param_12,
                 ushort param_13,uint param_14)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x49c) & 1) == 0) {
    if (*(int *)(param_1 + 0x498) == 7) {
      if (param_4 <= param_6) {
        while (param_5 <= param_7) {
          *param_2 = *param_2 ^ param_13;
          if (-1 < param_8) {
            param_2 = param_2 + 1;
            param_8 = param_8 - param_9;
            param_4 = param_4 + 1;
          }
          param_8 = param_8 + param_10;
          param_2 = (ushort *)((int)param_2 + param_3);
          param_5 = param_5 + 1;
          if (param_6 < param_4) {
            return;
          }
        }
      }
    }
    else if (param_4 <= param_6) {
      while (param_5 <= param_7) {
        *param_2 = param_13;
        if (-1 < param_8) {
          param_2 = param_2 + 1;
          param_8 = param_8 - param_9;
          param_4 = param_4 + 1;
        }
        param_8 = param_8 + param_10;
        param_2 = (ushort *)((int)param_2 + param_3);
        param_5 = param_5 + 1;
        if (param_6 < param_4) {
          return;
        }
      }
    }
  }
  else if (*(int *)(param_1 + 0x498) == 7) {
    if (param_4 <= param_6) {
      while (param_5 <= param_7) {
        if ((param_11 & param_12) == 0) {
          uVar1 = param_14;
          if (param_14 != 0xffffffff) goto LAB_006c61f3;
        }
        else {
          uVar1 = (uint)param_13;
LAB_006c61f3:
          *param_2 = *param_2 ^ (ushort)uVar1;
        }
        param_12 = param_12 >> 1;
        if (param_12 == 0) {
          param_12 = 0x80000000;
        }
        if (-1 < param_8) {
          param_2 = param_2 + 1;
          param_8 = param_8 - param_9;
          param_4 = param_4 + 1;
        }
        param_8 = param_8 + param_10;
        param_2 = (ushort *)((int)param_2 + param_3);
        param_5 = param_5 + 1;
        if (param_6 < param_4) {
          return;
        }
      }
    }
  }
  else {
    for (; (param_4 <= param_6 && (param_5 <= param_7)); param_5 = param_5 + 1) {
      if ((param_11 & param_12) == 0) {
        uVar1 = param_14;
        if (param_14 != 0xffffffff) goto LAB_006c6255;
      }
      else {
        uVar1 = (uint)param_13;
LAB_006c6255:
        *param_2 = (ushort)uVar1;
      }
      param_12 = param_12 >> 1;
      if (param_12 == 0) {
        param_12 = 0x80000000;
      }
      if (-1 < param_8) {
        param_2 = param_2 + 1;
        param_8 = param_8 - param_9;
        param_4 = param_4 + 1;
      }
      param_8 = param_8 + param_10;
      param_2 = (ushort *)((int)param_2 + param_3);
    }
  }
  return;
}

