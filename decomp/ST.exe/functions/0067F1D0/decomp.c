
void FUN_0067f1d0(void)

{
  int iVar1;

  DAT_00848a20 = 0;
  DAT_00848a24 = 0;
  g_dArray_00848A1C = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
  g_dArray_00848A18 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
  iVar1 = thunk_FUN_0067ef60(PTR_s___EMPTY___0079d734,nullptr);
  if (iVar1 == 0) {
    RaiseInternalException(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0xa6);
  }
  return;
}

