
undefined4 * __fastcall FUN_005f3440(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)param_1);
  *param_1 = &PTR_LAB_0079c584;
  puVar2 = (undefined4 *)((int)param_1 + 0x4d);
  for (iVar1 = 0x4a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

