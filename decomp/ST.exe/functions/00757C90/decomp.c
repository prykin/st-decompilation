
void FUN_00757c90(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x1a2);
  *puVar1 = Library::DKW::JPG::FUN_007579c0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 1;
  (*(code *)**(undefined4 **)(param_1 + 0x1a6))(param_1);
  *(undefined4 *)(param_1 + 0x98) = 0;
  return;
}

