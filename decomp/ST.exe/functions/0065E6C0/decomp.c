
void __fastcall FUN_0065e6c0(AnonShape_0065DA10_8B0AA883 *param_1,undefined4 param_2)

{
  DArrayTy *array;

  array = (DArrayTy *)thunk_FUN_0065da10(param_1,param_2);
  if (array != (DArrayTy *)0x0) {
    if (array->count != 0) {
      thunk_FUN_00675dc0(*(uint *)&param_1->field_0024,(uint *)array);
    }
    DArrayDestroy(array);
  }
  return;
}

