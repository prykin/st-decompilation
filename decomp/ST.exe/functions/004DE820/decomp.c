
undefined4 __fastcall FUN_004de820(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined2 extraout_var_01;
  STGroupBoatC *this;
  DArrayTy *array;
  TLOBaseTy *this_00;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 extraout_ECX;
  uint local_8;
  
  iVar3 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\f');
  if (iVar3 != *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x1c4)) {
    return 0;
  }
  iVar3 = 3;
  (**(code **)(*param_1 + 0x90))(3,0x273);
  bVar2 = false;
  this = thunk_FUN_0042b760(CONCAT31((int3)((uint)extraout_ECX >> 8),(char)param_1[9]),
                            CONCAT22(extraout_var_01,(short)param_1[0xc]));
  if (((this != (STGroupBoatC *)0x0) &&
      (array = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)this,iVar3),
      array != (DArrayTy *)0x0)) && (array->count != 0)) {
    array->iteratorIndex = 0;
    iVar3 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)array,&local_8);
    while (-1 < iVar3) {
      this_00 = (TLOBaseTy *)
                STAllPlayersC::GetObjPtr
                          (g_sTAllPlayers_007FA174,
                           CONCAT31((int3)((uint)iVar3 >> 8),(char)param_1[9]),local_8,CASE_1);
      if (((this_00 != (TLOBaseTy *)0x0) && (iVar3 = (*this_00->vtable->vfunc_2C)(), iVar3 == 0x45))
         && ((this_00->field_04D0 == CASE_0 &&
             ((iVar3 = thunk_FUN_004c7860(this_00,3,0,1,1,1), iVar3 != 0 &&
              (bVar1 = thunk_FUN_004c7c20((int)this_00), CONCAT31(extraout_var,bVar1) != 0)))))) {
        iVar3 = thunk_FUN_004c7860(this_00,3,0,1,1,1);
        if ((iVar3 != 0) &&
           (bVar2 = thunk_FUN_004c7c20((int)this_00), CONCAT31(extraout_var_00,bVar2) != 0)) {
          thunk_FUN_004c7cc0(this_00,3,0,1,0,0xffffffff,0,0xff,(char *)0x0);
          this_00->field_04D0 = CASE_2;
          TLOBaseTy::RotateSpr(this_00,0);
        }
        bVar2 = true;
      }
      iVar3 = FUN_006b1190((AnonShape_006B1190_EDB2B5FD *)array,&local_8);
    }
    DArrayDestroy(array);
    if (bVar2) {
      return 1;
    }
  }
  param_1[0x134] = param_1[0x134] + 1;
  g_playerRuntime[param_1[9]].field1705_0x7d6 = g_playerRuntime[param_1[9]].field1705_0x7d6 + 1;
  return 1;
}

