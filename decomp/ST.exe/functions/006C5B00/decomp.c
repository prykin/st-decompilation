
void FUN_006c5b00(AnonShape_006C5B00_75F2A72F *param_1,byte *param_2,uint param_3,uint param_4,
                 uint param_5,byte param_6,int param_7)

{
  uint uVar1;
  
  if ((param_1->field_049C & 1) == 0) {
    if (param_1->field_0498 != 7) {
      for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
        *(uint *)param_2 = CONCAT22(CONCAT11(param_6,param_6),CONCAT11(param_6,param_6));
        param_2 = param_2 + 4;
      }
      for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *param_2 = param_6;
        param_2 = param_2 + 1;
      }
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
            *param_2 = *param_2 ^ (byte)param_7;
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
          *param_2 = (byte)param_7;
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

