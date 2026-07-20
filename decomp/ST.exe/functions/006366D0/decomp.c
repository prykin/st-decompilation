
void __fastcall FUN_006366d0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0xc);
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *(int *)(param_1 + 0x2c);
        if (((uVar4 < *(uint *)(iVar3 + 0xc)) &&
            (iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c), iVar3 != 0)) &&
           (uVar2 = *(uint *)(iVar3 + 4), -1 < (int)uVar2)) {
          FUN_006e8ba0(PTR_00807598,uVar2);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
    FUN_006ae110(*(byte **)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

