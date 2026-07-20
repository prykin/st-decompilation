
undefined4 __thiscall FUN_0075019f(void *this,AnonShape_0075019F_4BD22E12 *param_1)

{
  AnonShape_0075019F_4BD22E12 *pAVar1;
  int *this_00;
  undefined4 local_c;
  int *local_8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  local_c = 0;
  this_00 = (int *)((int)this + 0x38);
  if (param_1->field_0030 == 0) {
    this_00 = (int *)((int)this + 0x20);
  }
  local_8 = (int *)*this_00;
  while ((local_8 != (int *)0x0 &&
         (pAVar1 = (AnonShape_0075019F_4BD22E12 *)FUN_0074ded7((int)local_8), pAVar1 != param_1))) {
    FUN_0074dec2((int *)&local_8);
  }
  if (local_8 == (int *)0x0) {
    local_c = 0x80040216;
  }
  else {
    FUN_0074df2b(this_00,local_8);
    (**(code **)(param_1->field_000C + 8))(&param_1->field_000C);
    FUN_00750287(this);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return local_c;
}

