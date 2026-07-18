
void FUN_006c5bf0(int param_1,ushort *param_2,int param_3,int param_4,uint param_5,uint param_6,
                 ushort param_7,int param_8)

{
  if ((*(byte *)(param_1 + 0x49c) & 1) == 0) {
    if (*(int *)(param_1 + 0x498) == 7) {
      if (param_4 != 0) {
        do {
          *param_2 = *param_2 ^ param_7;
          param_2 = (ushort *)((int)param_2 + param_3);
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return;
      }
    }
    else if (param_4 != 0) {
      do {
        *param_2 = param_7;
        param_2 = (ushort *)((int)param_2 + param_3);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x498) == 7) {
    if (param_4 != 0) {
      do {
        if ((param_5 & param_6) == 0) {
          if (param_8 != -1) {
            *param_2 = *param_2 ^ (ushort)param_8;
          }
        }
        else {
          *param_2 = *param_2 ^ param_7;
        }
        param_2 = (ushort *)((int)param_2 + param_3);
        param_6 = param_6 >> 1;
        if (param_6 == 0) {
          param_6 = 0x80000000;
        }
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else {
    for (; param_4 != 0; param_4 = param_4 + -1) {
      if ((param_5 & param_6) == 0) {
        if (param_8 != -1) {
          *param_2 = (ushort)param_8;
        }
      }
      else {
        *param_2 = param_7;
      }
      param_2 = (ushort *)((int)param_2 + param_3);
      param_6 = param_6 >> 1;
      if (param_6 == 0) {
        param_6 = 0x80000000;
      }
    }
  }
  return;
}

