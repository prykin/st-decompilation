
undefined4 __fastcall thunk_FUN_004d9c20(int param_1)

{
  if (*(int *)(param_1 + 0x4d0) == 0) {
    *(undefined4 *)(param_1 + 0x4d0) = 1;
    TLOBaseTy::AddSprInit((TLOBaseTy *)param_1);
    TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
  }
  return 1;
}

