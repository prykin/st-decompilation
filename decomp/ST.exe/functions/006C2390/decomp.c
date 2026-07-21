
void FUN_006c2390(AnonShape_006C2390_A203A467 *param_1)

{
  uint local_8;

  if (param_1 != (AnonShape_006C2390_A203A467 *)0x0) {
    if ((-1 < param_1->field_0046) &&
       (FUN_006c1f00(param_1->field_0046,&local_8,(uint *)0x0), local_8 != 0)) {
      FUN_006c1ba0(param_1->field_0046);
    }
    if ((*(uint *)param_1 & 0x8000) != 0) {
      FUN_006d46a0(param_1->field_0042,0);
    }
    FreeAndNull(&param_1);
  }
  return;
}

