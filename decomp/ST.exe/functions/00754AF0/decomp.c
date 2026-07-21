
void FUN_00754af0(AnonShape_00754AF0_86EFDBFA *param_1,int param_2,uint param_3)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(short *)(param_2 + 0xe) == 8) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(param_2 + 0x20) == 0) {
      param_1->field_0058 = 0x100;
    }
    else {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      param_1->field_0058 = *(int *)(param_2 + 0x20);
    }
    param_1->field_004C = 1;
  }
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      if ((param_3 & 0x10) != 0) {
        param_1->field_0040 = 2;
      }
    }
    else {
      param_1->field_0040 = 1;
    }
  }
  else {
    param_1->field_0040 = 0;
  }
  if ((param_3 & 0x80) == 0) {
    if ((param_3 & 0x20) == 0) {
      if ((param_3 & 0x40) != 0) {
        param_1->field_0050 = 1;
      }
    }
    else {
      param_1->field_0050 = 0;
    }
  }
  else {
    param_1->field_0050 = 2;
  }
  if ((param_3 & 2) != 0) {
    param_1->field_0024 = 1;
    param_1->field_004C = 1;
  }
  if ((param_3 & 0x100) != 0) {
    param_1->field_0044 = 0;
  }
  return;
}

