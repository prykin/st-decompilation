
undefined4 * __fastcall FUN_005fd710(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;

  STGameObjC::STGameObjC((STGameObjC *)param_1);
  *param_1 = &VTable_0079C8A0;
  puVar2 = (undefined4 *)((int)param_1 + 0x206);
  for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined1 *)puVar2 = 0;
  return param_1;
}

