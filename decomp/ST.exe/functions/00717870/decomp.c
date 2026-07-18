
void __fastcall FUN_00717870(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x4ba) = 0;
  *(undefined4 *)(param_1 + 0x4a2) = 0;
  do {
    FUN_006a5e90(*(undefined4 **)(*(int *)(param_1 + 0x472) + iVar1));
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x140);
  FUN_006ab060((int *)(param_1 + 0x472));
  FUN_006ab060((undefined4 *)(param_1 + 0x46e));
  *(undefined4 *)(param_1 + 0x466) = 0;
  return;
}

