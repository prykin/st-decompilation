
int __fastcall FUN_00661800(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  DArrayTy *array;
  undefined2 *puVar1;
  STGameObjC *this;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  int local_8;
  
  local_8 = 0;
  array = (DArrayTy *)thunk_FUN_0065da10(param_1,param_2);
  if (array != (DArrayTy *)0x0) {
    uVar4 = 0;
    iVar2 = 0;
    if (0 < (int)array->count) {
      bVar5 = array->count != 0;
      uVar3 = extraout_EDX;
      do {
        if (bVar5) {
          puVar1 = (undefined2 *)(array->elementSize * uVar4 + (int)array->data);
        }
        else {
          puVar1 = (undefined2 *)0x0;
        }
        this = STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,
                          CONCAT31((int3)((uint)uVar3 >> 8),param_1->field_0024),
                          CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1),CASE_1);
        uVar3 = extraout_EDX_00;
        if (this != (STGameObjC *)0x0) {
          uVar6 = (*this->vtable->vfunc_2C)();
          uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
          if ((((0x31 < (int)uVar6) && ((int)uVar6 < 0x74)) && (*(short *)&param_1->field_0x39 != 3)
              ) && ((*(int *)((int)&this[1].field_018D + 3) == 5 ||
                    (iVar2 = thunk_FUN_004c93e0(this,5), uVar3 = extraout_EDX_01, 0 < iVar2)))) {
            local_8 = local_8 + 1;
          }
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < array->count;
        iVar2 = local_8;
      } while ((int)uVar4 < (int)array->count);
    }
    DArrayDestroy(array);
    return iVar2;
  }
  return 0;
}

