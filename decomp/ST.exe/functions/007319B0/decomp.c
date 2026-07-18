
void FUN_007319b0(void)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = DAT_0085a5c0;
  for (local_8 = 0; local_8 < DAT_0085a5bc; local_8 = local_8 + 1) {
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0x100000,0x4000);
    VirtualFree(*(LPVOID *)((int)local_c + 0xc),0,0x8000);
    HeapFree(DAT_0085a5c4,0,*(LPVOID *)((int)local_c + 0x10));
    local_c = (LPVOID)((int)local_c + 0x14);
  }
  HeapFree(DAT_0085a5c4,0,DAT_0085a5c0);
  HeapDestroy(DAT_0085a5c4);
  return;
}

