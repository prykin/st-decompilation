
undefined4 __fastcall thunk_FUN_004ea870(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar3;
  int *piStack_8;
  
  if ((param_1[0x134] == 0) && (param_1[0x13b] + 0x19U <= *(uint *)(DAT_00802a38 + 0xe4))) {
    param_1[0x13b] = *(uint *)(DAT_00802a38 + 0xe4);
    piStack_8 = param_1;
    iVar2 = thunk_FUN_004c7860(param_1,3,0,1,1,1);
    if ((iVar2 != 0) &&
       ((bVar1 = thunk_FUN_004c7c20((int)param_1), CONCAT31(extraout_var,bVar1) != 0 &&
        (*(int *)((int)&DAT_007f55f6 + param_1[9] * 0xa62) != 0)))) {
      iVar2 = *(int *)((int)&DAT_007f4e29 + param_1[9] * 0xa62);
      uVar3 = 0;
      if (*(int *)(iVar2 + 0xc) != 0) {
        while (((FUN_006acc70(iVar2,uVar3,&piStack_8), piStack_8 == (int *)0x0 ||
                (iVar2 = (**(code **)(*piStack_8 + 0x2c))(), iVar2 != 0x44)) ||
               (piStack_8[0x134] == 0))) {
          uVar3 = uVar3 + 1;
          iVar2 = *(int *)((int)&DAT_007f4e29 + param_1[9] * 0xa62);
          if (*(uint *)(iVar2 + 0xc) <= uVar3) {
            return 0;
          }
        }
        iVar2 = thunk_FUN_004c7860(param_1,3,0,1,1,1);
        if ((iVar2 != 0) &&
           (bVar1 = thunk_FUN_004c7c20((int)param_1), CONCAT31(extraout_var_00,bVar1) != 0)) {
          thunk_FUN_004c7cc0(param_1,3,0,1,0,0xffffffff,0,0xff,(char *)0x0);
          param_1[0x134] = 2;
          TLOBaseTy::RotateSpr((TLOBaseTy *)param_1,0);
        }
        thunk_FUN_004dea40((int)piStack_8);
        return 0;
      }
    }
  }
  return 0;
}

