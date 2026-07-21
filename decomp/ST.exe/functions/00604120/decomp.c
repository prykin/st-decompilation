
void __fastcall FUN_00604120(int param_1)

{
  if (*(DArrayTy **)(param_1 + 0x215) != (DArrayTy *)0x0) {
    DArrayDestroy(*(DArrayTy **)(param_1 + 0x215));
  }
  if (*(int *)(param_1 + 0x2b3) != 0) {
    FreeAndNull((void **)(param_1 + 0x2b3));
  }
  return;
}

