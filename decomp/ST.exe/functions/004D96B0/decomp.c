
undefined4 FUN_004d96b0(void)

{
  undefined4 local_8;

  if (PTR_007fa16c == (DArrayTy *)0x0) {
    PTR_007fa16c = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,4,10);
  }
  Library::DKW::TBL::FUN_006ae1c0(&PTR_007fa16c->flags,&local_8);
  return 0;
}

