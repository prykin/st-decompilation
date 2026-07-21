
void FUN_0067f1d0(void)

{
  int iVar1;

  DAT_00848a20 = 0;
  DAT_00848a24 = 0;
  PTR_00848a1c = (AnonShape_GLOBAL_00848A1C_B6E50991 *)
                 Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
  PTR_00848a18 = (AnonShape_GLOBAL_00848A18_1B9B27FE *)
                 Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
  iVar1 = thunk_FUN_0067ef60(PTR_s___EMPTY___0079d734,(int *)0x0);
  if (iVar1 == 0) {
    RaiseInternalException(-2,g_overwriteContext_007ED77C,".\\ai\\ai_script_v.inl",0xa6);
  }
  return;
}

