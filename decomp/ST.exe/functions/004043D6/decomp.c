
void __cdecl thunk_FUN_0067d0a0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  
  piVar2 = (int *)(param_1 + 0xc2);
  iVar4 = *(int *)(param_1 + 0xc2);
  if (iVar4 != 0) {
    uVar3 = 0;
    if (0 < *(int *)(iVar4 + 0xc)) {
      bVar5 = *(int *)(iVar4 + 0xc) != 0;
      do {
        if (bVar5) {
          piVar1 = (int *)(*(int *)(iVar4 + 8) * uVar3 + *(int *)(iVar4 + 0x1c));
        }
        else {
          piVar1 = (int *)0x0;
        }
        if ((*piVar1 != 0) && (piVar1[1] == 0)) {
          param_1 = *piVar1;
          thunk_FUN_00691540(&param_1);
          *piVar1 = 0;
        }
        iVar4 = *piVar2;
        uVar3 = uVar3 + 1;
        bVar5 = uVar3 < *(uint *)(iVar4 + 0xc);
      } while ((int)uVar3 < (int)*(uint *)(iVar4 + 0xc));
    }
  }
  iVar4 = 5;
  do {
    if ((byte *)*piVar2 != (byte *)0x0) {
      FUN_006ae110((byte *)*piVar2);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

