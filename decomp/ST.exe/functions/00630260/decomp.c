#include "../../pseudocode_runtime.h"


void __thiscall FUN_00630260(void *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int local_24 [4];
  undefined4 local_14;
  int local_10;
  undefined4 local_c;

  if (DAT_008117a4 != (STManRub3C *)0x0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    puVar1 = *(undefined4 **)((int)this + param_1 * 4 + 0x1e5);
    if ((puVar1 != (undefined4 *)0x0) && ((puVar1[1] == 3 || (puVar1[1] == 6)))) {
      memset(local_24, 0, 0x20); /* compiler bulk-zero initialization */
      local_24[0] = puVar1[3];
      local_24[1] = *(undefined4 *)((int)this + 0x1d5);
      local_24[2] = *(undefined4 *)((int)this + 0x1d9);
      local_24[3] = *(undefined4 *)((int)this + 0x1dd);
      local_14 = *puVar1;
      local_10 = param_1;
      local_c = puVar1[2];
      if (param_2 != 0) {
        STManRub3C::AddNewRub3(DAT_008117a4,local_24);
        return;
      }
      thunk_FUN_0062d230(DAT_008117a4,local_24);
    }
  }
  return;
}

