#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 0.
   Evidence: 006C2A00 -> EXTERNAL:0000004F @ 006C2A3F */

undefined4 FUN_006c2a00(LPVOID lpBuffer)

{
  HANDLE hFile;
  BOOL BVar1;
  uint uVar2;
  DWORD local_8;

  uVar2 = 0;
  /* ST_CALLSITE[006C2A1B]: CALL dword ptr [0x0085bc80] */
  hFile = CreateFileA(lpBuffer,0x80000000,0,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    return 0;
  }
  /* ST_CALLSITE[006C2A3F]: CALL dword ptr [0x0085bc68] */
  BVar1 = ReadFile(hFile,&lpBuffer,4,&local_8,(LPOVERLAPPED)0x0);
  if ((((BVar1 != 0) && (local_8 == 4)) && ((char)lpBuffer == 'B')) &&
     (((char)((uint)lpBuffer >> 8) == 'I' && (STPiece<2,1>(lpBuffer) == 'K')))) {
    uVar2 = 1;
  }
  /* ST_CALLSITE[006C2A67]: CALL dword ptr [0x0085bbc8] */
  CloseHandle(hFile);
  return uVar2;
}

