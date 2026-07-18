
void __cdecl FUN_007318a0(LPVOID param_1)

{
  uint *puVar1;
  
  if (param_1 != (LPVOID)0x0) {
    puVar1 = (uint *)FUN_00731ae0((int)param_1);
    if (puVar1 == (uint *)0x0) {
      HeapFree(DAT_0085a5c4,0,param_1);
    }
    else {
      FUN_00731ba0(puVar1,(int)param_1);
    }
  }
  return;
}

