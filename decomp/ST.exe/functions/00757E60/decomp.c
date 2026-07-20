
void FUN_00757e60(AnonShape_00759190_45B6ED67 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)param_1)(param_1,0,0x60);
  param_1->field_01A6 = (int)puVar1;
  *puVar1 = FUN_00759190;
  *(code **)(param_1->field_01A6 + 4) = Library::DKW::JPG::FUN_00758170;
  *(code **)(param_1->field_01A6 + 8) = FUN_00759120;
  *(code **)(param_1->field_01A6 + 0xc) = FUN_00758100;
  iVar2 = 0x10;
  do {
    iVar3 = iVar2 + 4;
    *(code **)(iVar2 + param_1->field_01A6) = FUN_00758100;
    iVar2 = iVar3;
  } while (iVar3 < 0x50);
  *(code **)(param_1->field_01A6 + 0x10) = FUN_00757ef0;
  *(code **)(param_1->field_01A6 + 0x48) = FUN_00758010;
  FUN_00759190(param_1);
  return;
}

