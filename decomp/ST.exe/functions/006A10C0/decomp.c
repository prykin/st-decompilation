
int __cdecl FUN_006a10c0(short param_1)

{
  int iVar1;

  iVar1 = 0;
  do {
    if (param_1 == (&DAT_007df808)[(short)iVar1]) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while ((short)iVar1 < 0xf);
  return STReplaceLowWord((uint32_t)(iVar1), (uint16_t)(0xffff));
}

