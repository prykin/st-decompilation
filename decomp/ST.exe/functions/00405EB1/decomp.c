
void __fastcall thunk_FUN_005fea50(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 0x226)) {
    iVar3 = 0;
    uVar4 = 0;
    do {
      *(undefined4 *)(iVar3 + 0x39 + *(int *)(param_1 + 0x233)) = 2;
      iVar1 = *(int *)(param_1 + 0x22e);
      if ((iVar1 == 5) || (iVar1 == 6)) {
        if (uVar4 < 0x51) {
          uVar2 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)(param_1 + 0x1c) = uVar2;
          uVar2 = uVar2 >> 0x10 & 7;
        }
        else if (iVar1 == 5) {
          uVar2 = *(int *)(DAT_00802a38 + 0xe4) + -0x4a + uVar4;
        }
        else if (uVar4 < 0x99) {
          uVar2 = *(int *)(param_1 + 0x1c) * 0x41c64e6d + 0x3039;
          *(uint *)(param_1 + 0x1c) = uVar2;
          uVar2 = uVar2 >> 0x10 & 7;
        }
        else {
          uVar2 = *(int *)(DAT_00802a38 + 0xe4) + -0x94 + uVar4;
        }
      }
      else {
        uVar2 = *(int *)(DAT_00802a38 + 0xe4) + uVar4;
      }
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 + 9;
      *(uint *)(iVar3 + 0x3d + *(int *)(param_1 + 0x233)) = uVar2;
      iVar3 = iVar3 + 0x52;
    } while (iVar5 < *(int *)(param_1 + 0x226));
  }
  return;
}

