
void __thiscall FUN_004a0ee0(void *this,ushort param_1)

{
  DArrayTy *array;
  uint index;
  undefined4 local_1c;
  ushort local_18;

  thunk_FUN_0040cdb0(this,(uint)param_1);
  if (((*(int *)((int)this + 0x1e6) == 6) &&
      (array = *(DArrayTy **)((int)this + 0x22e), array != (DArrayTy *)0x0)) &&
     (index = 0, 0 < (int)array->count)) {
    do {
      DArrayGetElement(array,index,&local_1c);
      if (local_18 == param_1) {
        local_18 = 0xffff;
        local_1c = 0;
        Library::DKW::TBL::FUN_006ae140(*(uint **)((int)this + 0x22e),index,&local_1c);
      }
      array = *(DArrayTy **)((int)this + 0x22e);
      index = index + 1;
    } while ((int)index < (int)array->count);
  }
  thunk_FUN_00423c70(this,param_1);
  return;
}

