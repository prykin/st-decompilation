
void FUN_00756e50(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)*param_1)(param_1,1,0x1c);
  *(undefined4 **)((int)param_1 + 0x192) = puVar1;
  *puVar1 = Library::DKW::JPG::FUN_007570f0;
  puVar1[1] = FUN_00757250;
  puVar1[2] = 0;
  Library::DKW::JPG::FUN_00756e90(param_1);
  return;
}

