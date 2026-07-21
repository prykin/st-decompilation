
uint FUN_004d84e0(int param_1)

{
  uint uVar1;

  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    if (PTR_007fa150 == (DArrayTy *)0x0) {
      PTR_007fa150 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,0x14,4,0x14);
    }
    uVar1 = Library::DKW::TBL::FUN_006ae1c0(&PTR_007fa150->flags,&param_1);
  }
  return uVar1;
}

