#include "../../pseudocode_runtime.h"


int __thiscall FUN_0074bfbf(void *this,int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  void *local_10;
  int *local_c;
  int *local_8;

  iVar5 = STField<int>(this,0x8c);
  bVar6 = STField<int>(this,0x54) != 0;
  uVar3 = *(uint *)(iVar5 + 0xb0);
  if ((uVar3 & 1) == 0) {
    bVar6 = bVar6 | 2;
  }
  puVar1 = (undefined4 *)(iVar5 + 0xc0);
  local_c = *(int **)(STField<int>(this,0x90) + 0x98);
  puVar2 = (undefined4 *)(iVar5 + 0xb8);
  local_10 = this;
  /* ST_CALLSITE[0074C020]: CALL dword ptr [ECX + 0x1c] */
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
  iVar4 = (**(code **)(*local_c + 0x1c))
                    (local_c,&local_8,-(uint)((uVar3 & 0x10) != 0) & (uint)puVar2,
                     -(uint)((uVar3 & 0x100) != 0) & (uint)puVar1,bVar6);
  *param_2 = local_8;
  if (-1 < iVar4) {
    /* ST_CALLSITE[0074C03F]: CALL dword ptr [EAX] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    iVar4 = (**(code **)*local_8)(local_8,&DAT_007a1b70,&local_c);
    if (iVar4 < 0) {
      if ((((byte *)iVar5)[0xb0] & 0x10) != 0) {
        /* ST_CALLSITE[0074C0BA]: CALL dword ptr [ECX + 0x18] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*local_8 + 0x18))(local_8,puVar2,puVar1);
      }
      if ((((byte *)iVar5)[0xb0] & 1) != 0) {
        /* ST_CALLSITE[0074C0CB]: CALL dword ptr [ECX + 0x20] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*local_8 + 0x20))(local_8,1);
      }
      if ((((byte *)iVar5)[0xb0] & 4) != 0) {
        /* ST_CALLSITE[0074C0DC]: CALL dword ptr [ECX + 0x40] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*local_8 + 0x40))(local_8,1);
        STField<undefined4>(local_10,0x54) = 0;
      }
      /* ST_CALLSITE[0074C0F4]: CALL dword ptr [ECX + 0x44] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      iVar5 = (**(code **)(*param_1 + 0x44))(param_1,local_20,local_18);
      if (iVar5 == 0) {
        /* ST_CALLSITE[0074C109]: CALL dword ptr [ECX + 0x48] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(*local_8 + 0x48))(local_8,local_20,local_18);
      }
    }
    else {
      /* ST_CALLSITE[0074C051]: CALL dword ptr [ECX + 0x4c] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*local_c + 0x4c))(local_c,0x10,&local_50);
      local_4c = *(undefined4 *)(iVar5 + 0xac);
      local_48 = (local_48 ^ *(uint *)(iVar5 + 0xb0)) & 8 ^ *(uint *)(iVar5 + 0xb0);
      local_40 = *puVar2;
      local_3c = *(undefined4 *)(iVar5 + 0xbc);
      local_38 = *puVar1;
      local_34 = *(undefined4 *)(iVar5 + 0xc4);
      local_50 = 0x20;
      /* ST_CALLSITE[0074C091]: CALL dword ptr [EDX + 0x50] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*local_c + 0x50))(local_c,0x20,&local_50);
      if ((((byte *)iVar5)[0xb0] & 4) != 0) {
        STField<undefined4>(local_10,0x54) = 0;
      }
      /* ST_CALLSITE[0074C0A7]: CALL dword ptr [ECX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*local_c + 8))(local_c);
    }
    iVar4 = 0;
  }
  return iVar4;
}

