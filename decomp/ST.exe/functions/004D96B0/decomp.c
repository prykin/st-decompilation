
undefined4 FUN_004d96b0(void)

{
  undefined1 local_8 [4];

  if (g_array_007FA16C == (DArrayTy *)0x0) {
    g_array_007FA16C = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,4,10);
  }
  Library::DKW::TBL::DArrayAppend(g_array_007FA16C,local_8);
  return 0;
}

