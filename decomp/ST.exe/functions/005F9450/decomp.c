
void __fastcall FUN_005f9450(int param_1)

{
  if ((DAT_008117a4 != (void *)0x0) && (*(char *)(param_1 + 0x29e) == '\x01')) {
    thunk_FUN_0062d120(DAT_008117a4,*(int *)(param_1 + 0x235),*(int *)(param_1 + 0x27d),
                       *(int *)(param_1 + 0x281),*(int *)(param_1 + 0x285),*(int *)(param_1 + 0x289)
                       ,0xffffffff,0);
  }
  *(undefined1 *)(param_1 + 0x29e) = 0;
  return;
}

