
undefined4 * __fastcall FUN_0062cf00(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)param_1);
  *param_1 = &PTR_LAB_0079d084;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_1 + 7;
    for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    return param_1;
  }
  puVar2 = (undefined4 *)0x0;
  for (iVar1 = 0x26; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return (undefined4 *)0x0;
}

