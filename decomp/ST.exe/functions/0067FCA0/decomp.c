
int __cdecl FUN_0067fca0(uint param_1)

{
  int *piVar1;
  int iVar2;

  if ((((uint)PTR_00848a38->field_000C <= param_1) ||
      (piVar1 = (int *)(PTR_00848a38->field_0008 * param_1 + PTR_00848a38->field_001C),
      piVar1 == (int *)0x0)) || (iVar2 = *piVar1, iVar2 == 0)) {
    iVar2 = 0;
  }
  return iVar2;
}

