
void __fastcall FUN_004ad310(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      STT3DSprC::UnLoadSequence((STT3DSprC *)param_1,(byte)iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x14));
  }
  FUN_006e8ba0(*(void **)(param_1 + 0x3c),*(uint *)(param_1 + 0x18));
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_006ab060((LPVOID *)(param_1 + 0x20));
  }
  return;
}

