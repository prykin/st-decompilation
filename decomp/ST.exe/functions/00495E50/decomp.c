
void FUN_00495e50(void)

{
  short *psVar1;

  if (((DAT_008087a0 == '\x06') || (DAT_008087a0 == '\a')) || (DAT_008087a0 == '\x0e')) {
    psVar1 = (short *)0x1;
  }
  else {
    psVar1 = (short *)0x0;
  }
  thunk_FUN_00575640(DAT_00806750,(undefined4 *)g_pathingGrid.cells,psVar1);
  return;
}

