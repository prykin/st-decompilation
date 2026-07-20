
undefined4 __fastcall FUN_004df950(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;
  
  if (g_playerRuntime[*(int *)(param_1 + 0x24)].field2165_0x9d2 == (DArrayTy *)0x0) {
    local_8 = param_1;
    pDVar1 = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,4,10);
    g_playerRuntime[*(int *)(param_1 + 0x24)].field2165_0x9d2 = pDVar1;
  }
  local_8 = param_1;
  Library::DKW::TBL::FUN_006ae1c0
            (&(g_playerRuntime[*(int *)(param_1 + 0x24)].field2165_0x9d2)->flags,&local_8);
  return 0;
}

