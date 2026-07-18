
undefined4 __cdecl FUN_006b0fd0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)&stack0x00000008;
  while( true ) {
    iVar1 = *piVar2;
    if (iVar1 < 0) {
      return 1;
    }
    if ((*(uint *)(param_1 + ((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4) &
        1 << ((byte)iVar1 & 0x1f)) == 0) break;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (0x7f < iVar3) {
      return 1;
    }
  }
  return 0;
}

