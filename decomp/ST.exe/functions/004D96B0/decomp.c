
undefined4 FUN_004d96b0(void)

{
  undefined4 local_8;

  if (g_dArray_007FA16C == (DArrayTy *)0x0) {
    g_dArray_007FA16C = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,4,10);
  }
  Library::DKW::TBL::FUN_006ae1c0(&g_dArray_007FA16C->flags,&local_8);
  return 0;
}

