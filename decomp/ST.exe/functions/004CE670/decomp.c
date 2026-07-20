
undefined4 __fastcall FUN_004ce670(AnonShape_004CE670_5D83C685 *param_1)

{
  int iVar1;
  void *local_8;
  
  local_8 = (void *)0x0;
  if ((param_1->field_04D4 != 0) && (param_1->field_05D3 != 0)) {
    iVar1 = FUN_006e62d0(PTR_00802a38,param_1->field_05D3,(int *)&local_8);
    if (iVar1 == 0) {
      thunk_FUN_004cdef0(local_8,param_1->field_0018);
    }
  }
  param_1->field_04D4 = 0;
  return 0;
}

