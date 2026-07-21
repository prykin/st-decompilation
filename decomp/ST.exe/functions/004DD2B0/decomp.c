
undefined4 __fastcall FUN_004dd2b0(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (g_playerRuntime[*(int *)(param_1 + 0x24)].field2168_0x9de == (DArrayTy *)0x0) {
    local_8 = param_1;
    pDVar1 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    g_playerRuntime[*(int *)(param_1 + 0x24)].field2168_0x9de = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  Library::DKW::TBL::FUN_006ae1c0
            (&(g_playerRuntime[*(int *)(param_1 + 0x24)].field2168_0x9de)->flags,&local_8);
  return 0;
}

