
void __fastcall FUN_0061f530(int param_1)

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
        if (-1 < (int)*(uint *)(iVar1 + 0x26)) {
          FUN_006e8ba0(PTR_00807598,*(uint *)(iVar1 + 0x26));
          *(undefined4 *)(iVar1 + 0x26) = 0xffffffff;
        }
        iVar1 = *(int *)(param_1 + 0xa3);
        uVar2 = uVar2 + 1;
        bVar3 = uVar2 < *(uint *)(iVar1 + 0xc);
      } while ((int)uVar2 < (int)*(uint *)(iVar1 + 0xc));
    }
    FUN_006ae110(*(byte **)(param_1 + 0xa3));
    *(undefined4 *)(param_1 + 0xa3) = 0;
  }
  return;
}

