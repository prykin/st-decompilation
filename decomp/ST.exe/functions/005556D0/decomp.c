
undefined4 * __fastcall FUN_005556d0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)param_1);
  *param_1 = &PTR_LAB_0079aec0;
  g_traksClass_00802A7C = (TraksClassTy *)param_1;
  param_1[9] = 0;
  param_1[0x20a] = 0xffffffff;
  puVar2 = param_1 + 10;
  for (iVar1 = 0x200; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}

