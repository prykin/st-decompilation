
undefined4 * __fastcall FUN_00646c90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGroupBoatC::sub_006E60E0((STGroupBoatC *)param_1);
  *param_1 = &PTR_LAB_0079d610;
  if (param_1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = param_1 + 7;
  }
  for (iVar1 = 0x25; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x5d) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x7a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x86) = 0xffffffff;
  return param_1;
}

