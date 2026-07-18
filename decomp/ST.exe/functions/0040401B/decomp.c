
void __fastcall thunk_FUN_0061e770(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0xa3);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (0 < *(int *)(iVar1 + 0xc)) {
      bVar3 = *(int *)(iVar1 + 0xc) != 0;
      do {
        if (bVar3) {
          iVar1 = *(int *)(iVar1 + 8) * uVar2 + *(int *)(iVar1 + 0x1c);
        }
        else {
          iVar1 = 0;
        }
        uVar2 = uVar2 + 1;
        *(undefined4 *)(iVar1 + 0x2a) = *(undefined4 *)(DAT_00802a38 + 0xe4);
        iVar1 = *(int *)(param_1 + 0xa3);
        bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    }
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  return;
}

