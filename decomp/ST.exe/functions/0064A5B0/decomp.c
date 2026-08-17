#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 0064A5B0 -> EXTERNAL:00000059 @ 0064A60A */

void __cdecl FUN_0064a5b0(LPDWORD lpNumberOfBytesWritten)

{
  char cVar1;
  DWORD DVar2;
  uint uVar3;
  LPDWORD pDVar4;
  char *pcVar5;

  if ((HANDLE_008118f8 != (HANDLE)0x0) && (DAT_0080734a != '\0')) {
    uVar3 = 0xffffffff;
    pDVar4 = lpNumberOfBytesWritten;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      DVar2 = *pDVar4;
      pDVar4 = (LPDWORD)((int)pDVar4 + 1);
    } while ((char)DVar2 != '\0');
    /* ST_CALLSITE[0064A5E6]: CALL ESI */
    WriteFile(HANDLE_008118f8,lpNumberOfBytesWritten,~uVar3 - 1,(LPDWORD)&lpNumberOfBytesWritten,
              (LPOVERLAPPED)0x0);
    uVar3 = 0xffffffff;
    pcVar5 = &CHAR_0Dh_007d2a00;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    /* ST_CALLSITE[0064A60A]: CALL ESI */
    WriteFile(HANDLE_008118f8,&CHAR_0Dh_007d2a00,~uVar3 - 1,(LPDWORD)&lpNumberOfBytesWritten,
              (LPOVERLAPPED)0x0);
  }
  return;
}

