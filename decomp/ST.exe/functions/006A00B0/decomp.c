
void __fastcall FUN_006a00b0(int param_1)

{
  cMf32 *extraout_ECX;
  cMf32 *extraout_ECX_00;
  cMf32 *extraout_ECX_01;
  cMf32 *this;
  
  this = (cMf32 *)0x0;
  if (*(int *)(param_1 + 8) != 0) {
    FUN_006f07e0((int *)(param_1 + 8));
    this = extraout_ECX;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    Library::Ourlib::MFSTMAP::mfTMapErase((int *)(param_1 + 0xc));
    this = extraout_ECX_00;
  }
  if (*(int *)(param_1 + 0x56ff) != 0) {
    FUN_006ab060((undefined4 *)(param_1 + 0x56ff));
    this = extraout_ECX_01;
  }
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    cMf32::delete(this,*(undefined4 **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x56ff) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 8) = 0;
  return;
}

