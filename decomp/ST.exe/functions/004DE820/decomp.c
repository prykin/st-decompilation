
undefined4 __fastcall FUN_004de820(int *param_1)

{
  bool bVar1;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  STGroupBoatC *this;
  DArrayTy *groupContent;
  STGameObjC *this_00;
  uint local_8;

  iVar2 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\f');
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (iVar2 != *(int *)(*(int *)((int)param_1 + 0x1f5) + 0x1c4)) {
    return 0;
  }
  iVar2 = 3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*param_1 + 0x90))(3,0x273);
  bVar1 = false;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  this = thunk_FUN_0042b760((char)param_1[9],CONCAT22(extraout_var,(short)param_1[0xc]));
  if (((this != (STGroupBoatC *)0x0) &&
      (groupContent = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)this,iVar2),
      groupContent != (DArrayTy *)0x0)) && (groupContent->count != 0)) {
    groupContent->iteratorIndex = 0;
    iVar2 = FUN_006b1190(groupContent,&local_8);
    while (-1 < iVar2) {
      this_00 = STAllPlayersC::GetObjPtr(g_allPlayers_007FA174,(char)param_1[9],local_8,CASE_1);
      if (((this_00 != (STGameObjC *)0x0) && (iVar2 = (*this_00->vtable->vfunc_2C)(), iVar2 == 0x45)
          ) && ((this_00->field_04D0 == 0 &&
                ((iVar2 = thunk_FUN_004c7860(this_00,3,0,1,1,1), iVar2 != 0 &&
                 (iVar2 = thunk_FUN_004c7c20((int)this_00), iVar2 != 0)))))) {
        iVar2 = thunk_FUN_004c7860(this_00,3,0,1,1,1);
        if ((iVar2 != 0) && (iVar2 = thunk_FUN_004c7c20((int)this_00), iVar2 != 0)) {
          thunk_FUN_004c7cc0(this_00,3,0,1,0,0xffffffff,0,0xff,(char *)0x0);
          this_00->field_04D0 = 2;
          TLOBaseTy::RotateSpr((TLOBaseTy *)this_00,0);
        }
        bVar1 = true;
      }
      iVar2 = FUN_006b1190(groupContent,&local_8);
    }
    DArrayDestroy(groupContent);
    if (bVar1) {
      return 1;
    }
  }
  param_1[0x134] = param_1[0x134] + 1;
  g_playerRuntime[param_1[9]].field1705_0x7d6 = g_playerRuntime[param_1[9]].field1705_0x7d6 + 1;
  return 1;
}

