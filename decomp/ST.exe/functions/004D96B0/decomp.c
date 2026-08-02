
undefined4 FUN_004d96b0(void)

{
  undefined1 local_8 [4];

  if (g_array_007FA16C == nullptr) {
    g_array_007FA16C = Library::DKW::TBL::DArrayCreate(nullptr,10,4,10);
  }
  Library::DKW::TBL::DArrayAppend(g_array_007FA16C,local_8);
  return 0;
}

