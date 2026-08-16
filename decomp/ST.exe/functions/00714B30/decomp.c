#include "../../pseudocode_runtime.h"


undefined4 __thiscall FUN_00714b30(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  RecoveredSourceFamily_dibcopy *pRVar4;
  int iVar5;
  AnonShape_007109F0_BD33A2FF local_54;
  int local_c;
  RecoveredSourceFamily_dibcopy *local_8;

  iVar2 = param_1;
  iVar5 = 0;
  local_8 = nullptr;
  local_c = 0;
  if (((STField<int>(this,0x58) == 0) || (*(ccFntTy **)this == nullptr)) ||
     (STField<int>(this,8) <= param_1)) {
    return 0xffffffcc;
  }
  ccFntTy::Save(*(ccFntTy **)this,(undefined4 *)&local_54);
  FUN_007109f0(*(void **)this,(AnonShape_007109F0_BD33A2FF *)((int)this + 0x10));
  STField<undefined4>(this,0x90) = STField<undefined4>(this,0x58);
  STField<undefined4>(this,0x8c) = STField<undefined4>(this,0x58);
  iVar1 = *(int *)this;
  STField<undefined4>(this,0xc) = 0;
  STField<undefined4>(this,4) = 0;
  STField<undefined4>(this,0x7c) = 0xffffffff;
  STField<undefined4>(this,0x84) = 0;
  STField<undefined4>(this,0x80) = 0;
  STField<undefined4>(this,0xb0) = 0;
  STField<undefined4>(this,0xac) = 0;
  STField<undefined4>(this,0xa4) = STField<undefined4>(this,0x70);
  pRVar4 = local_8;
  if (&stack0x00000000 != (undefined1 *)0x8) {
    pRVar4 = *(RecoveredSourceFamily_dibcopy **)(iVar1 + 0x72);
  }
  iVar3 = local_c;
  if (&stack0x00000000 != &DAT_0000000c) {
    iVar3 = *(int *)(iVar1 + 0x76);
  }
  if (*(int *)(iVar1 + 0x7a) == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    if (0 < iVar2) {
      do {
        iVar5 = FUN_007140e0(this,0,'\0');
        if (iVar5 == 0) {
          return 0xfffffffc;
        }
        param_1 = param_1 + 1;
      } while (param_1 < iVar2);
    }
  }
  else {
    FUN_006b4170(pRVar4,iVar3,0,0,STField<int>(this,0x5c),STField<int>(this,0x60),
                 (byte)STField<undefined4>(this,0xa0));
    if (0 < param_1) {
      if (0 < param_1 + -1) {
        do {
          iVar2 = FUN_007140e0(this,0,'\0');
          if (iVar2 == 0) {
            return 0xfffffffc;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_1 + -1);
      }
      iVar2 = FUN_007140e0(this,1,'\x01');
      if (iVar2 == 0) {
        return 0xfffffffc;
      }
    }
  }
  FUN_007109f0(*(void **)this,&local_54);
  return 0;
}

