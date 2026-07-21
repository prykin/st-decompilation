
void __thiscall FUN_0071c9f0(void *this,int param_1)

{
  DArrayTy *array;
  uint index;
  byte local_10 [8];
  int local_8;

  index = 0;
  if (param_1 != 0) {
    array = *(DArrayTy **)((int)this + 0x28);
    *(undefined4 *)((int)this + 0x58) = 0;
    if (0 < (int)array->count) {
      do {
        DArrayGetElement(array,index,local_10);
        if (*(int *)(local_8 + 8) == param_1) {
          FUN_006b0c70(*(DArrayTy **)((int)this + 0x28),index);
        }
        else {
          if ((local_10[0] & 2) != 0) {
            *(undefined4 *)((int)this + 0x58) = 1;
          }
          index = index + 1;
        }
        array = *(DArrayTy **)((int)this + 0x28);
      } while ((int)index < (int)array->count);
    }
  }
  return;
}

