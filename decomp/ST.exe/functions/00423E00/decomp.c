
void __fastcall FUN_00423e00(void *param_1)

{
  DArrayTy *array;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_EDI;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  array = (DArrayTy *)STGroupC::GetGroupContent(param_1,unaff_EDI);
  thunk_FUN_00423d80(param_1,(uint *)array);
  DArrayDestroy(array);
  return;
}

