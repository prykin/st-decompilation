
void FUN_006c5a10(AnonShape_006C5A10_DB2339A4 *param_1,ushort *param_2,uint param_3,uint param_4,
                 uint param_5,ushort param_6,int param_7)

{
  if ((param_1->field_049C & 1) == 0) {
    if (param_1->field_0498 != 7) {
      FUN_006ce6c0(param_2,param_3,param_6);
      return;
    }
    if (param_3 != 0) {
      do {
        *param_2 = *param_2 ^ param_6;
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
  }
  else if (param_1->field_0498 == 7) {
    if (param_3 != 0) {
      do {
        if ((param_5 & param_4) == 0) {
          if (param_7 != -1) {
            *param_2 = *param_2 ^ (ushort)param_7;
          }
        }
        else {
          *param_2 = *param_2 ^ param_6;
        }
        param_2 = param_2 + 1;
        param_5 = param_5 >> 1;
        if (param_5 == 0) {
          param_5 = 0x80000000;
        }
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if ((param_5 & param_4) == 0) {
        if (param_7 != -1) {
          *param_2 = (ushort)param_7;
        }
      }
      else {
        *param_2 = param_6;
      }
      param_2 = param_2 + 1;
      param_5 = param_5 >> 1;
      if (param_5 == 0) {
        param_5 = 0x80000000;
      }
    }
  }
  return;
}

