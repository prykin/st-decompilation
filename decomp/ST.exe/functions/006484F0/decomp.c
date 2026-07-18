
void __cdecl FUN_006484f0(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if ((*(char *)(iVar1 + 5) == '\x02') && (*(int *)(iVar1 + 0x4e) != 0)) {
      thunk_FUN_0065d0f0((int *)(iVar1 + 0x4e));
    }
    FUN_006ab060(param_1);
  }
  return;
}

