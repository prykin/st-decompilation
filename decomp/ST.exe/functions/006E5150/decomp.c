
undefined4 __thiscall FUN_006e5150(void *this,AnonShape_006E5150_51076593 *param_1)

{
  if (param_1->field_0010 == 4) {
    DAT_00856d74 = param_1->field_0014;
    if ((DAT_00856d74 != 0) && (*(int *)((int)this + 0x24) != 0)) {
      FUN_006e4290(0xf,5,0xf,0);
      return 0;
    }
    FUN_006e4340(this,0xf,5,0xf,0);
  }
  else if (param_1->field_0010 == 0xf) {
    *(undefined4 *)((int)this + 0x1c) = 1;
    return 0;
  }
  return 0;
}

