
void __fastcall FUN_006ddb70(int param_1)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x174)) {
    *(undefined4 *)(param_1 + 0x144) = 1;
    *(undefined4 *)(param_1 + 0x2d8) = 1;
    iVar1 = Library::DKW::LIB::FUN_006acf50
                      (*(undefined4 **)(param_1 + 0x1c),
                       *(int *)(param_1 + 0x28) * *(int *)(param_1 + 0x174));
    *(int *)(param_1 + 0x1c) = iVar1;
  }
  return;
}

