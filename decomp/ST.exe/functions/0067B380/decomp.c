
void __fastcall FUN_0067b380(int param_1)

{
  uint *puVar1;
  
  if (*(DArrayTy **)(param_1 + 0x6a1) != (DArrayTy *)0x0) {
    DArrayDestroy(*(DArrayTy **)(param_1 + 0x6a1));
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x12,10);
    *(uint **)(param_1 + 0x6a1) = puVar1;
  }
  return;
}

