
undefined4
FUN_0071b760(uint param_1,byte param_2,AnonShape_0071B760_B33E06ED *param_3,
            AnonShape_0071B760_D695FB3E *param_4,uint *param_5,undefined4 *param_6)

{
  byte bVar1;
  uint uVar2;

  switch(param_1 & 0xfffff) {
  case 0xfb:
    uVar2 = (uint)param_4->field_000F;
    break;
  case 0xfc:
    uVar2 = (uint)param_4->field_000E;
    break;
  case 0xfd:
    uVar2 = (uint)param_4->field_000D;
    break;
  case 0xfe:
    uVar2 = (uint)param_4->field_000C;
    break;
  default:
    uVar2 = (uint)(byte)(&param_3->field_0x0)[param_1 & 0xfffff];
  }
  *param_5 = uVar2 & 0x80;
  *param_6 = 1;
  if ((param_2 & 0x10) == 0) {
    bVar1 = (byte)(param_1 >> 0x18);
    if (((((param_1 & 0x40000000) != 0) && ((param_3->field_0038 & 0x80) == 0)) &&
        ((param_3->field_00B8 & 0x80) == 0)) ||
       (((param_1 & 0x40000000) == 0 &&
        (((bVar1 >> 5 & 1) != param_3->field_0038 >> 7 ||
         ((bVar1 >> 4 & 1) != param_3->field_00B8 >> 7)))))) {
      *param_6 = 0;
    }
    if (((((param_1 & 0x8000000) != 0) && ((param_3->field_001D & 0x80) == 0)) &&
        ((param_3->field_009D & 0x80) == 0)) ||
       (((param_1 & 0x8000000) == 0 &&
        (((bVar1 >> 2 & 1) != param_3->field_001D >> 7 ||
         ((bVar1 >> 1 & 1) != param_3->field_009D >> 7)))))) {
      *param_6 = 0;
    }
    if ((((param_1 & 0x1000000) == 0) || ((param_3->field_002A & 0x80) != 0)) ||
       ((param_3->field_0036 & 0x80) != 0)) {
      if ((param_1 & 0x1000000) != 0) {
        return 0;
      }
      if (((byte)(param_1 >> 0x17) & 1) == param_3->field_002A >> 7) {
        if (((byte)(param_1 >> 0x16) & 1) == param_3->field_0036 >> 7) {
          return 0;
        }
        *param_6 = 0;
        return 0;
      }
    }
  }
  else if (((((((param_1 & 0x40000000) == 0) || ((param_3->field_0038 & 0x80) != 0)) ||
             ((param_3->field_00B8 & 0x80) != 0)) &&
            (((param_1 & 0x20000000) == 0 || ((param_3->field_0038 & 0x80) != 0)))) &&
           ((((((param_1 & 0x10000000) == 0 || ((param_3->field_00B8 & 0x80) != 0)) &&
              ((((param_1 & 0x8000000) == 0 || ((param_3->field_001D & 0x80) != 0)) ||
               ((param_3->field_009D & 0x80) != 0)))) &&
             ((((param_1 & 0x4000000) == 0 || ((param_3->field_001D & 0x80) != 0)) &&
              (((param_1 & 0x2000000) == 0 || ((param_3->field_009D & 0x80) != 0)))))) &&
            ((((param_1 & 0x1000000) == 0 || ((param_3->field_002A & 0x80) != 0)) ||
             ((param_3->field_0036 & 0x80) != 0)))))) &&
          (((param_1 & 0x800000) == 0 || ((param_3->field_002A & 0x80) != 0)))) {
    if ((param_1 & 0x400000) == 0) {
      return 0;
    }
    if ((param_3->field_0036 & 0x80) != 0) {
      return 0;
    }
  }
  *param_6 = 0;
  return 0;
}

