
void __fastcall FUN_0065e6c0(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  uint *groupContent;
  
  groupContent = thunk_FUN_0065da10(param_1,param_2);
  if (groupContent != (uint *)0x0) {
    if (groupContent[3] != 0) {
      thunk_FUN_00675dc0(*(uint *)&param_1->field_0024,groupContent);
    }
    FUN_006ae110((byte *)groupContent);
  }
  return;
}

