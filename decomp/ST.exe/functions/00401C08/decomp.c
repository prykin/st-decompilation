
undefined4 __fastcall thunk_FUN_004de820(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined2 extraout_var_01;
  STGroupC *this;
  uint *puVar4;
  TLOBaseTy *this_00;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 extraout_ECX;
  uint uStack_8;
  
  iVar3 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\f');
  if (iVar3 != *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x1c4)) {
    return 0;
  }
  iVar3 = 3;
  (**(code **)(*param_1 + 0x90))(3,0x273);
  bVar2 = false;
  this = (STGroupC *)
         thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX >> 8),(char)param_1[9]),
                            CONCAT22(extraout_var_01,(short)param_1[0xc]));
  if (((this != (STGroupC *)0x0) &&
      (puVar4 = STGroupC::GetGroupContent(this,iVar3), puVar4 != (uint *)0x0)) && (puVar4[3] != 0))
  {
    puVar4[1] = 0;
    iVar3 = FUN_006b1190((int)puVar4,&uStack_8);
    while (-1 < iVar3) {
      this_00 = (TLOBaseTy *)
                STAllPlayersC::GetObjPtr
                          (DAT_007fa174,CONCAT31((int3)((uint)iVar3 >> 8),(char)param_1[9]),uStack_8
                           ,1);
      if (((this_00 != (TLOBaseTy *)0x0) &&
          (iVar3 = (**(code **)(*(int *)this_00 + 0x2c))(), iVar3 == 0x45)) &&
         ((*(int *)(this_00 + 0x4d0) == 0 &&
          ((iVar3 = thunk_FUN_004c7860(this_00,3,0,1,1,1), iVar3 != 0 &&
           (bVar1 = thunk_FUN_004c7c20((int)this_00), CONCAT31(extraout_var,bVar1) != 0)))))) {
        iVar3 = thunk_FUN_004c7860(this_00,3,0,1,1,1);
        if ((iVar3 != 0) &&
           (bVar2 = thunk_FUN_004c7c20((int)this_00), CONCAT31(extraout_var_00,bVar2) != 0)) {
          thunk_FUN_004c7cc0(this_00,3,0,1,0,0xffffffff,0,0xff,(char *)0x0);
          *(undefined4 *)(this_00 + 0x4d0) = 2;
          TLOBaseTy::RotateSpr(this_00,0);
        }
        bVar2 = true;
      }
      iVar3 = FUN_006b1190((int)puVar4,&uStack_8);
    }
    FUN_006ae110((byte *)puVar4);
    if (bVar2) {
      return 1;
    }
  }
  param_1[0x134] = param_1[0x134] + 1;
  *(int *)((int)&DAT_007f55f6 + param_1[9] * 0xa62) =
       *(int *)((int)&DAT_007f55f6 + param_1[9] * 0xa62) + 1;
  return 1;
}

