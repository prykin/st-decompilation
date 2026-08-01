
undefined4 __fastcall FUN_004df100(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)&g_playerRuntime[*(int *)(param_1 + 0x24)].field_0x9ee == 0) {
    local_8 = param_1;
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,10,4,10);
    *(DArrayTy **)&g_playerRuntime[*(int *)(param_1 + 0x24)].field_0x9ee = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  Library::DKW::TBL::DArrayAppend
            (*(DArrayTy **)&g_playerRuntime[*(int *)(param_1 + 0x24)].field_0x9ee,&local_8);
  return 0;
}

