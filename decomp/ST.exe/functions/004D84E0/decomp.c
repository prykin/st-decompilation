
uint FUN_004d84e0(int param_1)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    if (DAT_007fa150 == (uint *)0x0) {
      DAT_007fa150 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,4,0x14);
    }
    uVar1 = Library::DKW::TBL::FUN_006ae1c0(DAT_007fa150,&param_1);
  }
  return uVar1;
}

