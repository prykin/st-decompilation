
void FUN_0073a900(void)

{
  size_t sVar1;
  int local_8;
  
  sVar1 = _strlen(DAT_00857284);
  DAT_00857280 = (uint)(sVar1 == 3);
  sVar1 = _strlen(DAT_00857288);
  DAT_00857278 = (uint)(sVar1 == 3);
  DAT_00857274 = 0;
  if (DAT_00857280 == 0) {
    local_8 = _GetPrimaryLen(DAT_00857284);
  }
  else {
    local_8 = 2;
  }
  DAT_0085727c = local_8;
  EnumSystemLocalesA(FUN_0073a9c0,1);
  if ((((DAT_0085728c & 0x100) == 0) || ((DAT_0085728c & 0x200) == 0)) || ((DAT_0085728c & 7) == 0))
  {
    DAT_0085728c = 0;
  }
  return;
}

