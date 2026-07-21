
int __fastcall FUN_0065e3b0(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  DArrayTy *array;
  undefined2 *puVar1;
  STGameObjC *this;
  int iVar2;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *pvVar3;
  AnonShape_0041AF40_F59F8577 *unaff_EDI;
  uint uVar4;
  bool bVar5;
  int local_8;
  
  uVar4 = 0;
  local_8 = 0;
  array = (DArrayTy *)thunk_FUN_0065da10(param_1,param_2);
  if (array != (DArrayTy *)0x0) {
    if (0 < (int)array->count) {
      bVar5 = array->count != 0;
      pvVar3 = extraout_ECX;
      do {
        if (bVar5) {
          pvVar3 = array->data;
          puVar1 = (undefined2 *)(array->elementSize * uVar4 + (int)pvVar3);
        }
        else {
          puVar1 = (undefined2 *)0x0;
        }
        this = STAllPlayersC::GetObjPtr
                         (g_sTAllPlayers_007FA174,
                          CONCAT31((int3)((uint)pvVar3 >> 8),param_1->field_0024),
                          CONCAT22((short)((uint)puVar1 >> 0x10),*puVar1),CASE_1);
        pvVar3 = extraout_ECX_00;
        if (this != (STGameObjC *)0x0) {
          iVar2 = (*this->vtable[1].GetMessage)(this,unaff_EDI);
          local_8 = local_8 + iVar2;
          pvVar3 = extraout_ECX_01;
        }
        uVar4 = uVar4 + 1;
        bVar5 = uVar4 < array->count;
      } while ((int)uVar4 < (int)array->count);
    }
    DArrayDestroy(array);
    return local_8;
  }
  return 0;
}

