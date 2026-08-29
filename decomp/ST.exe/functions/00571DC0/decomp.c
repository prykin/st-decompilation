#include "../../pseudocode_runtime.h"


uint FUN_00571dc0(void)

{
  UINT UVar1;
  int iVar2;
  uint local_14;
  uint local_10;
  ushort local_c;
  uint local_8;

  /* ST_CALLSITE[00571DC8]: CALL dword ptr [0x0085bc48] */
  UVar1 = GetLogicalDrives();
  local_10 = 0;
  local_14 = DAT_007ca690;
  local_c = 0;
  iVar2 = 0;
  do {
    local_8 = UVar1;
    if ((UVar1 & 1) != 0) {
      local_14 = STReplaceLowByte((uint32_t)(local_14), (uint8_t)((char)iVar2 + 'A'));
      /* ST_CALLSITE[00571DFA]: CALL ESI */
      UVar1 = GetDriveTypeA((LPCSTR)&local_14);
      if (UVar1 == 5) break;
    }
    UVar1 = local_8 >> 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  return STReplaceLowByte((uint32_t)(UVar1), (uint8_t)((CHAR)local_14));
}

