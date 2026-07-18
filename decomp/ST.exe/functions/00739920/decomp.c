
undefined4 FUN_00739920(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (DAT_00857214 == 0) {
    PTR_DAT_007f2700 = *(undefined **)PTR_PTR_007f2730;
    PTR_DAT_007f2704 = *(undefined **)(PTR_PTR_007f2730 + 4);
    PTR_DAT_007f2708 = *(undefined **)(PTR_PTR_007f2730 + 8);
    PTR_PTR_007f2730 = (undefined *)&PTR_DAT_007f2700;
    FUN_00739ce0((int)DAT_00857244);
    thunk_FUN_006a49c0(DAT_00857244,2);
    DAT_00857244 = (undefined4 *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = thunk_FUN_006a40c0(1,0x30,2,"initmon.c",0x4a);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar3 = FUN_00739a50((int)puVar1);
      if (uVar3 == 0) {
        *puVar1 = *(undefined4 *)PTR_PTR_007f2730;
        puVar1[1] = *(undefined4 *)(PTR_PTR_007f2730 + 4);
        puVar1[2] = *(undefined4 *)(PTR_PTR_007f2730 + 8);
        PTR_PTR_007f2730 = (undefined *)puVar1;
        FUN_00739ce0((int)DAT_00857244);
        thunk_FUN_006a49c0(DAT_00857244,2);
        uVar2 = 0;
        DAT_00857244 = puVar1;
      }
      else {
        FUN_00739ce0((int)puVar1);
        thunk_FUN_006a49c0(puVar1,2);
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

