
void __fastcall FUN_0060a940(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x234) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x234) + 0xc);
  }
  uVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(param_1 + 0x234);
      if (((uVar3 < *(uint *)(iVar2 + 0xc)) &&
          (iVar2 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c), iVar2 != 0)) &&
         (-1 < (int)*(uint *)(iVar2 + 0x3c))) {
        FUN_006e8ba0(DAT_00807598,*(uint *)(iVar2 + 0x3c));
        *(undefined4 *)(iVar2 + 0x3c) = 0xffffffff;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < iVar1);
  }
  return;
}

