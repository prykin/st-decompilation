
void __cdecl FUN_006b0d60(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;

  iVar3 = 0;
  piVar2 = (int *)&stack0x00000008;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  do {
    iVar1 = *piVar2;
    if (iVar1 < 0) {
      return;
    }
    piVar2 = piVar2 + 1;
    iVar3 = iVar3 + 1;
    param_1[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5] =
         param_1[(int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5] | 1 << ((byte)iVar1 & 0x1f);
  } while (iVar3 < 0x80);
  return;
}

