
void __fastcall FUN_006a00b0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_006f07e0((int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_006efb70((int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x56ff) != 0) {
    FUN_006ab060((undefined4 *)(param_1 + 0x56ff));
  }
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    FUN_006f1170(*(undefined4 **)(param_1 + 0x18));
  }
  *(undefined4 *)(param_1 + 0x56ff) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(int *)(param_1 + 0xc) = 0;
  *(int *)(param_1 + 8) = 0;
  return;
}

