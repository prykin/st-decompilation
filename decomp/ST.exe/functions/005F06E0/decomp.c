
void __fastcall FUN_005f06e0(AnonShape_005F0620_60AA17CE *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_24 [4];
  undefined4 local_14;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  if (DAT_008117bc != (undefined4 *)0x0) {
    puVar2 = local_24;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    switch(param_1->field_02B1) {
    case 0:
    case 1:
    case 2:
      local_e = param_1->field_0032;
      local_14 = 0x5dd9;
      break;
    case 3:
    case 4:
    case 5:
      local_e = param_1->field_0032;
      local_14 = 0x5dde;
      break;
    default:
      goto switchD_005f070c_default;
    }
    local_a = param_1->field_02AB;
    local_c = param_1->field_02A3;
    (**(code **)*DAT_008117bc)(local_24);
  }
switchD_005f070c_default:
  return;
}

