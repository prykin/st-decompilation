
void __fastcall FUN_00423e00(void *param_1)

{
  DArrayTy *array;

  array = (DArrayTy *)STGroupC::GetGroupContent(param_1);
  thunk_FUN_00423d80(param_1,(uint *)array);
  DArrayDestroy(array);
  return;
}

