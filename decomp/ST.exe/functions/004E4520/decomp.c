
undefined4 __fastcall FUN_004e4520(int param_1)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int local_8;
  
  pDVar1 = g_playerRuntime[*(int *)(param_1 + 0x24)].field2166_0x9d6;
  if (pDVar1 != (DArrayTy *)0x0) {
    uVar2 = 0;
    local_8 = param_1;
    if (0 < (int)pDVar1->count) {
      do {
        FUN_006acc70((AnonShape_006ACC70_C8641025 *)pDVar1,uVar2,&local_8);
        if (local_8 == param_1) {
          FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)
                       g_playerRuntime[*(int *)(param_1 + 0x24)].field2166_0x9d6,uVar2);
          break;
        }
        uVar2 = uVar2 + 1;
        pDVar1 = g_playerRuntime[*(int *)(param_1 + 0x24)].field2166_0x9d6;
      } while ((int)uVar2 < (int)pDVar1->count);
    }
    if ((g_playerRuntime[*(int *)(param_1 + 0x24)].field2166_0x9d6)->count == 0) {
      FUN_006ae110((byte *)g_playerRuntime[*(int *)(param_1 + 0x24)].field2166_0x9d6);
      g_playerRuntime[*(int *)(param_1 + 0x24)].field2166_0x9d6 = (DArrayTy *)0x0;
    }
  }
  return 0;
}

