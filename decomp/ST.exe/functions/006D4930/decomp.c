#include "../../pseudocode_runtime.h"


/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 006D4930 -> EXTERNAL:0000004F @ 006D496E

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 006D4930 -> EXTERNAL:0000004F @ 006D496E
   [STAbiConsistencyApplier] full_eax_return target=return:-1: return=/int Evidence: all observed
   callers consume full EAX (3), none consume AL/AX, and every RET path defines full EAX; generic
   void/unsized transport requires at least two callers; sites=006C08E0 @ 006C0D11 -> read as EAX on
   every CFG path | 006C2460 @ 006C24B1 -> read as EAX on every CFG path | 006D49F0 @ 006D4A04 ->
   read as EAX on every CFG path */

int FUN_006d4930(AnonShape_006D4930_676532DD *param_1,LPDWORD lpNumberOfBytesRead,
                undefined4 *param_3,DWORD nNumberOfBytesToRead)

{
  DWORD DVar1;
  BOOL BVar2;
  byte *puVar4;

  puVar4 = (byte *)(param_3);
  if ((param_1->field_0008 & 0x100000) == 0) {
    if (param_1->field_0034 == 0) {
      return -0x51;
    }
    if ((int)lpNumberOfBytesRead + nNumberOfBytesToRead <= param_1->field_0038) {
      if (param_3 != nullptr) {
        puVar4 = (byte *)(param_1->field_0034 + (int)lpNumberOfBytesRead);
        memmove(param_3, puVar4, nNumberOfBytesToRead); /* compiler REP MOVS byte copy */
      }
      return 0;
    }
  }
  else {
    if (param_3 == nullptr) {
      return 0;
    }
    /* ST_CALLSITE[006D4955]: CALL dword ptr [0x0085bc74] */
    DVar1 = SetFilePointer(param_1->field_000C,(LONG)lpNumberOfBytesRead,(PLONG)0x0,0);
    if ((DVar1 == 0xffffffff) ||
       /* ST_CALLSITE[006D496E]: CALL dword ptr [0x0085bc68] */
       (BVar2 = ReadFile(param_1->field_000C,puVar4,nNumberOfBytesToRead,
                         (LPDWORD)&lpNumberOfBytesRead,(LPOVERLAPPED)0x0), BVar2 == 0)) {
      /* ST_CALLSITE[006D4978]: CALL dword ptr [0x0085bbcc] */
      DVar1 = GetLastError();
      if (DVar1 != 0) {
        return DVar1;
      }
      return -0xfd;
    }
    if (lpNumberOfBytesRead == (LPDWORD)nNumberOfBytesToRead) {
      return 0;
    }
  }
  return -0xe;
}

