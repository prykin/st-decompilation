#include "../../pseudocode_runtime.h"


/* [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:1: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x8, direct_reads=1, scalar_operations=2, signed_comparisons=1, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=true; sites=00614C86 incoming load: MOV EAX,dword ptr [EBP +
   0x8] | 00614C9A scalar operation: LEA ECX,[EAX*0x8 + 0x0] | 00614CA1 scalar operation: SUB
   ECX,EAX | 00614CAF first slot write: MOV dword ptr [EBP + 0x8],ESI */

uint __thiscall
FUN_00614c80(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,uint param_8,uint param_9,int param_10)

{
  int iVar1;
  uint uVar2;
  int iVar5_mg2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 local_24;
  int local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  iVar5 = param_1;
  if (param_1 < 1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_9;
    iVar3 = param_10;
    uVar4 = param_8;
  }
  else {
    iVar1 = STField<int>(this,0x2dd) + param_1 * 0x1c;
    iVar3 = (int)*(short *)(iVar1 + -0x18);
    uVar4 = (int)*(short *)(iVar1 + -0x1c);
    param_1 = (int)*(short *)(STField<int>(this,0x2dd) + -0x1a + param_1 * 0x1c);
  }
  iVar5 = iVar5 * 0x1c;
  uVar2 = thunk_FUN_0060f940(0,0,(AnonShape_0060F940_1CCED7C8 *)
                                 (iVar5 + STField<int>(this,0x2dd)),0,uVar4,param_1,iVar3,param_2
                             ,param_3,param_4,param_5,param_6,param_7,&param_10,(int *)&param_8);
  *(undefined4 *)(iVar5 + 0x18 + STField<int>(this,0x2dd)) = uVar2;
  if (*(int *)(iVar5 + 0x18 + STField<int>(this,0x2dd)) == 8) {
    uVar4 = param_8;
    if (STField<int>(this,0x288) != 0) {
      uVar4 = (int)param_8 / STField<int>(this,0x288);
    }
    local_24 = 0;
    local_14 = 0;
    local_c = 0;
    local_20 = (int)(param_8 * 0x1e) / 100;
    local_8 = 0;
    local_1c = (int)(param_8 * 0x46) / 100;
    local_18 = param_8;
    uint param_9_after_write = uVar4; /* compiler stack-slot lifetime split */
    local_10 = local_20;
    param_1 = (int)Library::DKW::LIB::MemAlloc(uVar4 * 4);
    iVar5_mg2 = thunk_FUN_0060e210(&local_24,&local_14,4,param_1,uVar4);
    if (iVar5_mg2 == 0) {
      if (STField<undefined4 *>(this,0x2e5) == nullptr) {
        STField<uint>(this,0x2e1) = uVar4;
        STField<int>(this,0x2e5) = param_1;
        return param_8;
      }
      if (STField<int>(this,0x2e1) < (int)uVar4) {
        FreeAndNull((int *)((int)this + 0x2e5));
        STField<uint>(this,0x2e1) = uVar4;
        STField<int>(this,0x2e5) = param_1;
        return param_8;
      }
      puVar6 = (undefined4 *)param_1;
      puVar7 = STField<undefined4 *>(this,0x2e5);
      for (uVar4 = uVar4 & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      STField<uint>(this,0x2e1) = param_9_after_write;
      FreeAndNull(&param_1);
      return param_8;
    }
    if (param_1 != 0) {
      FreeAndNull(&param_1);
    }
  }
  return 0;
}

