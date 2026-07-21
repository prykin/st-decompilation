
undefined4 * __fastcall FUN_00609950(STGroupBoatC *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  STGameObjC::STGameObjC((STGameObjC *)param_1);
  param_1->vtable = (STGroupBoatCVTable *)&VTable_0079CC28;
  if (param_1 == (STGroupBoatC *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)((int)&param_1->field_01D2 + 3);
  }
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined1 *)((int)puVar2 + 2) = 0;
  *(undefined1 *)((int)&param_1->field_0222 + 3) = 1;
  return &param_1->vtable;
}

