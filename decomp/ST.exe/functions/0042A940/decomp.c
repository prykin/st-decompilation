
undefined4 * __fastcall FUN_0042a940(undefined4 *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)param_1);
  *param_1 = &PTR_LAB_0079059c;
  puVar3 = (undefined4 *)&DAT_007f4e20;
  for (iVar2 = 0x14d5; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar1 = &DAT_007f4e20;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0xa62;
  } while ((int)puVar1 < 0x7fa130);
  return param_1;
}

