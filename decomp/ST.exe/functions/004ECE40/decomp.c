
undefined4 __fastcall FUN_004ece40(int param_1)

{
  if (*(int *)(param_1 + 0x4d0) == 0) {
    *(undefined4 *)(param_1 + 0x4d0) = 1;
    TLOBaseTy::AddSprInit((TLOBaseTy *)param_1);
    TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
  }
  return 1;
}

