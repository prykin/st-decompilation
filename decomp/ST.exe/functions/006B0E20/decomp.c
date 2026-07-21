
void __cdecl FUN_006b0e20(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;

  iVar3 = 0;
  piVar4 = (int *)&stack0x00000008;
  do {
    iVar2 = *piVar4;
    if (iVar2 < 0) {
      return;
    }
    puVar1 = (uint *)(param_1 + ((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + 1;
    *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
  } while (iVar3 < 0x80);
  return;
}

