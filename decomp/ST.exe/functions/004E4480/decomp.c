
undefined4 __fastcall FUN_004e4480(int param_1)

{
  uint *puVar1;
  int local_8;
  
  if (*(int *)(&DAT_007f57f6 + *(int *)(param_1 + 0x24) * 0xa62) == 0) {
    local_8 = param_1;
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
    *(uint **)(&DAT_007f57f6 + *(int *)(param_1 + 0x24) * 0xa62) = puVar1;
  }
  local_8 = param_1;
  Library::DKW::TBL::FUN_006ae1c0
            (*(uint **)(&DAT_007f57f6 + *(int *)(param_1 + 0x24) * 0xa62),&local_8);
  return 0;
}

