
void __fastcall FUN_00423e00(void *param_1)

{
  uint *groupContent;
  int unaff_EDI;
  
  groupContent = STGroupC::GetGroupContent(param_1,unaff_EDI);
  thunk_FUN_00423d80(param_1,groupContent);
  FUN_006ae110((byte *)groupContent);
  return;
}

