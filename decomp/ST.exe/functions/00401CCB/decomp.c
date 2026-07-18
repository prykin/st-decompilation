
int __cdecl thunk_FUN_006a10c0(short param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (param_1 == (&DAT_007df808)[(short)iVar1]) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while ((short)iVar1 < 0xf);
  return CONCAT22((short)((uint)iVar1 >> 0x10),0xffff);
}

