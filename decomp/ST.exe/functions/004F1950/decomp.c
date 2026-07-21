
void __fastcall FUN_004f1950(AnonShape_004F1950_0C1561B7 *param_1)

{
  byte *pbVar1;

  pbVar1 = FUN_0070b650(param_1->field_025B,(uint)param_1->field_025F);
  DibPut(param_1->field_01B4,0xb,9,'\x06',pbVar1);
  Library::DKW::DDX::FUN_006b3640
            ((int *)PTR_008075a8,param_1->field_017C,0xffffffff,param_1->field_010C,
             param_1->field_0110);
  return;
}

