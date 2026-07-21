
void __fastcall FUN_0056ee90(AnonShape_0056EE90_04DD57E6 *param_1)

{
  byte bVar1;
  uint local_8;

  if (param_1->field_112D == -1) {
    bVar1 = 0;
    param_1->field_112D = 0;
    param_1->field_112E = 1;
    local_8 = 0;
    while( true ) {
      if (((&param_1[1].field_0x99)[local_8 * 0x51] != -1) &&
         ((&param_1[1].field_0x98)[local_8 * 0x51] != '\0')) break;
      bVar1 = bVar1 + 1;
      local_8 = (uint)bVar1;
      if (7 < bVar1) {
        return;
      }
    }
    param_1->field_112D = (&param_1[1].field_0x99)[local_8 * 0x51];
    param_1->field_112E = (&param_1[1].field_0x98)[local_8 * 0x51];
    param_1->field_112F = 1;
  }
  return;
}

