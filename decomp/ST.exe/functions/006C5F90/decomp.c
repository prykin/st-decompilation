
void FUN_006c5f90(AnonShape_006C5F90_8AFC020B *param_1,byte *param_2,int param_3,int param_4,
                 int param_5,int param_6,int param_7,int param_8,int param_9,int param_10,
                 uint param_11,uint param_12,byte param_13,uint param_14)

{
  uint uVar1;
  
  if ((param_1->field_049C & 1) == 0) {
    if (param_1->field_0498 == 7) {
      if (param_4 <= param_6) {
        while (param_5 <= param_7) {
          *param_2 = *param_2 ^ param_13;
          if (-1 < param_8) {
            param_8 = param_8 - param_10;
            param_2 = param_2 + param_3;
            param_5 = param_5 + 1;
          }
          param_2 = param_2 + 1;
          param_8 = param_8 + param_9;
          param_4 = param_4 + 1;
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
          param_8 = param_8 - param_10;
          param_2 = param_2 + param_3;
          param_5 = param_5 + 1;
        }
        param_2 = param_2 + 1;
        param_8 = param_8 + param_9;
        param_4 = param_4 + 1;
        if (param_6 < param_4) {
          return;
        }
      }
    }
  }
  else if (param_1->field_0498 == 7) {
    if (param_4 <= param_6) {
      while (param_5 <= param_7) {
        if ((param_11 & param_12) == 0) {
          uVar1 = param_14;
          if (param_14 != 0xffffffff) goto LAB_006c6077;
        }
        else {
          uVar1 = (uint)param_13;
LAB_006c6077:
          *param_2 = *param_2 ^ (byte)uVar1;
        }
        param_12 = param_12 >> 1;
        if (param_12 == 0) {
          param_12 = 0x80000000;
        }
        if (-1 < param_8) {
          param_2 = param_2 + param_3;
          param_8 = param_8 - param_10;
          param_5 = param_5 + 1;
        }
        param_2 = param_2 + 1;
        param_8 = param_8 + param_9;
        param_4 = param_4 + 1;
        if (param_6 < param_4) {
          return;
        }
      }
    }
  }
  else {
    while ((param_4 <= param_6 && (param_5 <= param_7))) {
      if ((param_11 & param_12) == 0) {
        uVar1 = param_14;
        if (param_14 != 0xffffffff) goto LAB_006c60cd;
      }
      else {
        uVar1 = (uint)param_13;
LAB_006c60cd:
        *param_2 = (byte)uVar1;
      }
      param_12 = param_12 >> 1;
      if (param_12 == 0) {
        param_12 = 0x80000000;
      }
      if (-1 < param_8) {
        param_2 = param_2 + param_3;
        param_8 = param_8 - param_10;
        param_5 = param_5 + 1;
      }
      param_2 = param_2 + 1;
      param_8 = param_8 + param_9;
      param_4 = param_4 + 1;
    }
  }
  return;
}

