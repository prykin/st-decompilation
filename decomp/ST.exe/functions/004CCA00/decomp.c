#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=004845E0 @ 004850BA
   -> DEC DEC EAX */

int __thiscall FUN_004cca00(void *this,int param_1)

{
  byte bVar1;

  if ((param_1 != STField<int>(this,0x24)) &&
     ((STField<int>(this,0x245) == 0 || (STField<int>(this,0x245) == 5)))) {
    if ((STField<int>(this,0x24) == STField<int>(this,0x23d)) &&
       (*(int *)(&DAT_007e1218 + (STField<int>(this,0x235) * 3 + STField<int>(this,0x239)) * 4
                ) != 0)) {
      return 3;
    }
    /* ST_CALLSITE[004CCA55]: CALL 0x004049b7; direct=004049B7 LookupRecordByte */
    bVar1 = LookupRecordByte((char)param_1);
    return ((&DAT_007e1987)
            [(STField<int>(this,0x235) * 3 + STField<int>(this,0x239)) * 3 + (uint)bVar1] !=
           '\0') + 1;
  }
  return 0;
}

