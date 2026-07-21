
void __cdecl FUN_0067d160(int *param_1)

{
  AnonShape_0067D0A0_8092D907 *pAVar1;
  int iVar2;

  pAVar1 = (AnonShape_0067D0A0_8092D907 *)*param_1;
  if (pAVar1 != (AnonShape_0067D0A0_8092D907 *)0x0) {
    if (pAVar1->field_0x18 != '\0') {
      thunk_FUN_0067d0a0(pAVar1);
    }
    iVar2 = *param_1;
    if ((*(char *)(iVar2 + 0x18) == '\x02') && (*(int *)(iVar2 + 0x106) != 0)) {
      thunk_FUN_0065d0f0((int *)(iVar2 + 0x106));
    }
    FreeAndNull((void **)param_1);
  }
  return;
}

