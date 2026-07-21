
void __fastcall FUN_005f0d90(AnonShape_005F0D00_68DA5B8B *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  ushort local_c;
  undefined2 local_a;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_e = param_1->field_0032;
    if ((param_1->field_030D == '\0') || (param_1->field_030E == 0xff)) {
      local_c = 0xff;
    }
    else {
      local_a = param_1->field_030F;
      local_c = (ushort)param_1->field_030E;
    }
    local_14 = 0x5dd7;
    (**(code **)*DAT_008117bc)(local_24);
  }
  return;
}

