
undefined4 __fastcall FUN_004de820(AnonShape_004DE820_615D04DD *param_1)

{
  bool bVar1;
  int iVar2;
  STGroupBoatC *this;
  DArrayTy *array;
  STGameObjC *this_00;
  undefined4 local_8;

  iVar2 = thunk_FUN_004ac910(&param_1->field_0x1d5,'\f');
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (iVar2 != *(int *)(param_1->field_01F5 + 0x1c4)) {
    return 0;
  }
  iVar2 = 3;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(*(int *)param_1 + 0x90))(3,0x273);
  bVar1 = false;
  this = thunk_FUN_0042b760(param_1->field_0x24,*(ushort *)&param_1->field_0x30);
  if (((this != (STGroupBoatC *)0x0) &&
      (array = (DArrayTy *)STGroupC::GetGroupContent((STGroupC *)this,iVar2),
      array != (DArrayTy *)0x0)) && (array->count != 0)) {
    array->iteratorIndex = 0;
    iVar2 = DArrayGetNext(array,(byte *)&local_8);
    while (-1 < iVar2) {
      this_00 = STAllPlayersC::GetObjPtr
                          (g_allPlayers_007FA174,param_1->field_0x24,(ushort)local_8,CASE_1);
      if (((this_00 != (STGameObjC *)0x0) && (iVar2 = (*this_00->vtable->vfunc_2C)(), iVar2 == 0x45)
          ) && ((this_00->field_04D0 == 0 &&
                ((iVar2 = TLOBaseTy::sub_004C7860((TLOBaseTy *)this_00,3,0,1,1,1), iVar2 != 0 &&
                 (iVar2 = thunk_FUN_004c7c20((TLOBaseTy *)this_00), iVar2 != 0)))))) {
        iVar2 = TLOBaseTy::sub_004C7860((TLOBaseTy *)this_00,3,0,1,1,1);
        if ((iVar2 != 0) && (iVar2 = thunk_FUN_004c7c20((TLOBaseTy *)this_00), iVar2 != 0)) {
          TLOBaseTy::thunk_FUN_004c7cc0((TLOBaseTy *)this_00,3,0,1,0,0xffffffff,0,0xff,(char *)0x0);
          this_00->field_04D0 = 2;
          TLOBaseTy::RotateSpr((TLOBaseTy *)this_00,0);
        }
        bVar1 = true;
      }
      iVar2 = DArrayGetNext(array,(byte *)&local_8);
    }
    DArrayDestroy(array);
    if (bVar1) {
      return 1;
    }
  }
  iVar2 = *(int *)&param_1->field_0x24;
  *(int *)&param_1[2].field_0xde = *(int *)&param_1[2].field_0xde + 1;
  g_playerRuntime[iVar2].field1705_0x7d6 = g_playerRuntime[iVar2].field1705_0x7d6 + 1;
  return 1;
}

