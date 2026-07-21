
void __fastcall FUN_00423e00(void *param_1)

{
  DArrayTy *array;
  int unaff_EDI;
  
  array = (DArrayTy *)STGroupC::GetGroupContent(param_1,unaff_EDI);
  thunk_FUN_00423d80(param_1,(uint *)array);
  DArrayDestroy(array);
  return;
}

