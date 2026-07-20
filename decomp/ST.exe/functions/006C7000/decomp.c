
int FUN_006c7000(AnonShape_006C7000_4A8D1200 *param_1)

{
  if ((param_1->field_0056 & 8) != 0) {
    return 0;
  }
  if ((param_1->field_0056 & 1) != 0) {
    return -1;
  }
  return (uint)param_1->field_005F * 10;
}

