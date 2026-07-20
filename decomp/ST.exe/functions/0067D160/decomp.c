
void __cdecl FUN_0067d160(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x18) != '\0') {
      thunk_FUN_0067d0a0(iVar1);
    }
    iVar1 = *param_1;
    if ((*(char *)(iVar1 + 0x18) == '\x02') && (*(int *)(iVar1 + 0x106) != 0)) {
      thunk_FUN_0065d0f0((int *)(iVar1 + 0x106));
    }
    FUN_006ab060((LPVOID *)param_1);
  }
  return;
}

