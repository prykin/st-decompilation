#include "../../pseudocode_runtime.h"


void __thiscall FUN_006473e0(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 local_44 [5];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;

  memset(local_44, 0, 0x40); /* compiler bulk-zero initialization */
  local_28 = *(undefined4 *)((int)this + 0x3c);
  local_24 = *(undefined4 *)((int)this + 0x40);
  iVar1 = *(int *)((int)this + 0x50);
  local_44[0] = 0xd2;
  local_2c = 4;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      local_20 = *(int *)((int)this + 0x44) + 0x96;
      goto cf_common_exit_00647445;
    }
    if (iVar1 == 2) {
      local_20 = *(int *)((int)this + 0x44) + 0xfa;
      goto cf_common_exit_00647445;
    }
  }
  local_20 = *(int *)((int)this + 0x44) + 0x96;
cf_common_exit_00647445:
  local_1c = param_1;
  local_30 = 0;
  (*g_playSystem_00802A38->vtable->vfunc_08)(0x124,0,0,local_44,0);
  thunk_FUN_00647a60(this,0x4b5);
  return;
}

