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
  int iVar2;
  int iVar5_mg2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  int local_10;
  uint local_c;
  uint local_8;
  iVar4 = param_1;
  if (param_1 < 1) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = param_9;
    iVar2 = param_10;
    uVar3 = param_8;
  }
  else {
    iVar1 = STField<int>(this,0x2dd) + param_1 * 0x1c;
    iVar2 = (int)*(short *)(iVar1 + -0x18);
    uVar3 = (int)*(short *)(iVar1 + -0x1c);
    param_1 = (int)*(short *)(STField<int>(this,0x2dd) + -0x1a + param_1 * 0x1c);
  }
  iVar4 = iVar4 * 0x1c;

  iVar2 = thunk_FUN_0060f940(0,0,(RecoveredRecordView_0060F940_8057A92D *)
                                 (iVar4 + STField<int>(this,0x2dd)),0,uVar3,param_1,iVar2,param_2
                             ,param_3,param_4,param_5,param_6,param_7,&param_10,(int *)&param_8);
  *(int *)(iVar4 + 0x18 + STField<int>(this,0x2dd)) = iVar2;
  if (*(int *)(iVar4 + 0x18 + STField<int>(this,0x2dd)) == 8) {
    uVar3 = param_8;
    if (STField<int>(this,0x288) != 0) {
      uVar3 = (int)param_8 / STField<int>(this,0x288);
    }
    local_24 = 0;
    local_14 = 0;
    local_c = 0;
    local_20 = (int)(param_8 * 0x1e) / 100;
    local_8 = 0;
    local_1c = (int)(param_8 * 0x46) / 100;
    local_18 = param_8;
    uint param_9_after_write = uVar3; /* compiler stack-slot lifetime split */
    local_10 = local_20;

    param_1 = (int)Library::DKW::LIB::MemAlloc(uVar3 * 4);

    iVar5_mg2 = thunk_FUN_0060e210(&local_24,&local_14,4,param_1,uVar3);
    if (iVar5_mg2 == 0) {
      if (STField<undefined4 *>(this,0x2e5) == nullptr) {
        STField<uint>(this,0x2e1) = uVar3;
        STField<int>(this,0x2e5) = param_1;
        return param_8;
      }
      if (STField<int>(this,0x2e1) < (int)uVar3) {
        FreeAndNull((int *)((int)this + 0x2e5));
        STField<uint>(this,0x2e1) = uVar3;
        STField<int>(this,0x2e5) = param_1;
        return param_8;
      }
      puVar5 = (undefined4 *)param_1;
      puVar6 = STField<undefined4 *>(this,0x2e5);
      for (uVar3 = uVar3 & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
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

