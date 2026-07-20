
undefined4 __fastcall FUN_004c2c10(AnonShape_004C2C10_59B6D93C *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_58 [5];
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  int local_8;
  
  if (param_1->field_0408 == 0) {
    puVar3 = local_58;
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    local_58[1] = param_1->field_0024;
    iVar2 = param_1->field_0235 * 4;
    local_58[3] = 1;
    local_58[2] = 1;
    local_38 = *(undefined4 *)(&DAT_00794fa4 + iVar2);
    local_34 = *(undefined4 *)(&DAT_007950ac + iVar2);
    local_44 = (int)param_1->field_0041;
    local_40 = (int)param_1->field_0043;
    local_28 = (uint)param_1->field_0032;
    local_3c = (int)param_1->field_0045;
    local_2c = param_1->field_0018;
    local_58[0] = 0xdc;
    local_30 = 100;
    if (param_1->field_05AC == 0x4d) {
      local_24 = param_1->field_04D4;
    }
    else if (param_1->field_05AC == 0x73) {
      local_24 = param_1->field_04D0;
    }
    STPlaySystemC::CreateGameObject(PTR_00802a38,0xdc,0,&local_8,local_58,0);
    uVar1 = *(undefined4 *)(local_8 + 0x18);
    param_1->field_0408 = 1;
    param_1->field_040C = uVar1;
    return 0;
  }
  return 0;
}

