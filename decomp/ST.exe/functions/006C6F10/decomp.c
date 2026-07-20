
uint FUN_006c6f10(AnonShape_006C6F10_68E82598 *param_1,undefined *param_2,undefined *param_3)

{
  byte bVar1;
  uint uVar2;
  
  while( true ) {
    if ((0 < (int)param_1->field_006A) && (0 < (int)param_1->field_006E)) {
      (*(code *)param_3)(param_1);
    }
    uVar2 = Library::DKW::GPC::FUN_006d80c0((int)param_1);
    if (uVar2 != 0) {
      return uVar2;
    }
    bVar1 = param_1->field_005E & 0x1c;
    if (bVar1 == 8) {
      param_1->field_0062 = param_1->field_001A;
      param_1->field_0066 = param_1->field_001E;
      param_1->field_006A = param_1->field_0022;
      param_1->field_006E = param_1->field_0026;
    }
    else if (bVar1 == 0xc) {
      param_1->field_0062 = param_1->field_001A;
      param_1->field_0066 = param_1->field_001E;
      param_1->field_006A = param_1->field_0022;
      param_1->field_006E = param_1->field_0026;
      (*(code *)param_2)(param_1);
    }
    else {
      param_1->field_006A = 0xffffffff;
    }
    uVar2 = FUN_006d7d9a((AnonShape_006D7D9A_A5401417 *)param_1);
    if (uVar2 != 0) break;
    param_1->field_0056 = param_1->field_0056 & 0xfffffffb;
    if (param_1->field_005F != 0) {
      return 0;
    }
  }
  if (uVar2 != 0xffffffff) {
    return uVar2;
  }
  return 0;
}

