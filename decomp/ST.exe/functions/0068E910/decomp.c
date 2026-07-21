
void __fastcall FUN_0068e910(int param_1)

{
  uint *puVar1;
  
  if (*(DArrayTy **)(param_1 + 0xbd) != (DArrayTy *)0x0) {
    DArrayDestroy(*(DArrayTy **)(param_1 + 0xbd));
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x4a,10);
    *(uint **)(param_1 + 0xbd) = puVar1;
  }
  return;
}

