#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_4 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00632650_param_4Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4
   [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:5: parameter=/uint
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0x14, direct_reads=3, scalar_operations=2, signed_comparisons=0, unsigned_bounds=2,
   pointer_dereferences=0, slot_reused=false; sites=00632685 incoming load: MOV EAX,dword ptr [EBP +
   0x14] | 00632699 scalar operation: LEA EAX,[EDI + EDX*0x1] | 006326E9 incoming load: MOV
   ECX,dword ptr [EBP + 0x14] | 006326FF scalar operation: LEA ECX,[EBP + -0x3c] | 00632718 incoming
   load: MOV EDX,dword ptr [EBP + 0x14] */

undefined4 __thiscall
FUN_00632650(void *this,uint param_1,int param_2,undefined4 param_3,
            Global_sub_00632650_param_4Enum param_4,uint param_5)

{
  DArrayTy *pDVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_40 [15];

  if (*(int *)this != 0) {
    thunk_FUN_00635fd0(this);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == 0) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 1;
  }
  memset(local_40, 0, 0x39); /* compiler bulk-zero initialization */
  uVar5 = 0;
  switch(param_4) {
  case CASE_0:
  case CASE_2:
  case CASE_4:
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,param_1 * param_2,0x39,10);
    *(DArrayTy **)this = pDVar1;
    uVar5 = param_1 * param_2;
    break;
  case CASE_1:
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,param_1 + param_2,0x39,10);
    *(DArrayTy **)this = pDVar1;
    uVar5 = param_1;
    break;
  case CASE_3:
    pDVar1 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,(param_1 + 4) * param_2 + 1,0x39,10);
    *(DArrayTy **)this = pDVar1;
    uVar5 = param_1 * param_2;
  }
  pDVar1 = *(DArrayTy **)this;
  if (pDVar1 == (DArrayTy *)0x0) {
    uVar2 = 0;
  }
  else {
    switch(param_4) {
    case CASE_0:
    case CASE_1:
      uVar5 = (param_1 - 1) + param_2;
      if (param_4 != CASE_1) {
        uVar5 = param_1 - 1;
      }
      Library::DKW::TBL::DArrayPut(pDVar1,uVar5,local_40);
      uVar5 = *(uint *)(*(int *)this + 0xc);
      *(undefined4 *)((int)this + 0xd) = param_3;
      *(undefined1 *)((int)this + 4) = 1;
      *(uint *)((int)this + 0x19) = param_1;
      *(int *)((int)this + 0x1d) = param_2;
      *(Global_sub_00632650_param_4Enum *)((int)this + 0x11) = param_4;
      *(undefined4 *)((int)this + 0xa1) = *(undefined4 *)(param_5 + 0x10);
      *(undefined4 *)((int)this + 0xa5) = *(undefined4 *)(param_5 + 0x14);
      *(undefined4 *)((int)this + 0xa9) = *(undefined4 *)(param_5 + 0x18);
      *(undefined4 *)((int)this + 0x15) = *(undefined4 *)(param_5 + 0x48);
      break;
    case CASE_2:
      Library::DKW::TBL::DArrayPut(pDVar1,param_1 * param_2 - 1,local_40);
      uVar5 = *(uint *)(*(int *)this + 0xc);
      *(int *)((int)this + 0x1d) = param_2;
      *(undefined1 *)((int)this + 4) = 1;
      *(uint *)((int)this + 0x19) = param_1;
      *(undefined4 *)((int)this + 0x11) = 2;
      *(undefined4 *)((int)this + 0xd) = param_3;
      *(undefined4 *)((int)this + 0xa1) = *(undefined4 *)(param_5 + 0x10);
      *(undefined4 *)((int)this + 0xa5) = *(undefined4 *)(param_5 + 0x14);
      *(undefined4 *)((int)this + 0xa9) = *(undefined4 *)(param_5 + 0x18);
      *(undefined4 *)((int)this + 0xad) = *(undefined4 *)(param_5 + 0x4c);
      *(undefined4 *)((int)this + 0x15) = *(undefined4 *)(param_5 + 0x48);
      break;
    case CASE_3:
      uVar5 = (param_1 + 4) * param_2 + 1;
      *(uint *)((int)this + 0x21) = uVar5;
      *(undefined4 *)((int)this + 0x11) = 3;
      Library::DKW::TBL::DArrayPut(pDVar1,uVar5,local_40);
      *(undefined1 *)((int)this + 4) = 1;
      *(undefined4 *)((int)this + 0x19) = *(undefined4 *)param_5;
      *(undefined4 *)((int)this + 0x1d) = *(undefined4 *)(param_5 + 4);
      *(undefined4 *)((int)this + 0x9d) = *(undefined4 *)(param_5 + 0x10);
      *(undefined4 *)((int)this + 0xa1) = *(undefined4 *)(param_5 + 0x14);
      *(undefined4 *)((int)this + 0xa5) = *(undefined4 *)(param_5 + 0x18);
      *(undefined4 *)((int)this + 0x25) = *(undefined4 *)(param_5 + 8);
      *(undefined4 *)((int)this + 0x29) = *(undefined4 *)(param_5 + 0xc);
      *(undefined4 *)((int)this + 0x41) = 0;
      *(undefined4 *)((int)this + 0x45) = 0x3f490fdb;
      *(float *)((int)this + 0x6d) = *(float *)(param_5 + 0x30) * _DAT_0079d1a4;
      *(float *)((int)this + 0x69) = *(float *)(param_5 + 0x2c) * _DAT_0079d1a4;
      *(undefined4 *)((int)this + 0x81) = *(undefined4 *)(param_5 + 0x24);
      *(undefined4 *)((int)this + 0x85) = *(undefined4 *)(param_5 + 0x28);
      *(undefined4 *)((int)this + 0x89) = 0x3f860a92;
      *(undefined4 *)((int)this + 0x61) = *(undefined4 *)(param_5 + 0x1c);
      *(undefined4 *)((int)this + 0x65) = *(undefined4 *)(param_5 + 0x20);
      break;
    case CASE_4:
      Library::DKW::TBL::DArrayPut(pDVar1,param_1 * param_2 - 1,local_40);
      uVar5 = *(uint *)(*(int *)this + 0xc);
      *(int *)((int)this + 0x1d) = param_2;
      *(undefined1 *)((int)this + 4) = 1;
      *(uint *)((int)this + 0x19) = param_1;
      *(undefined4 *)((int)this + 0x11) = 4;
      *(undefined4 *)((int)this + 0xd) = param_3;
      *(undefined4 *)((int)this + 0xa1) = *(undefined4 *)(param_5 + 0x10);
      *(undefined4 *)((int)this + 0xa5) = *(undefined4 *)(param_5 + 0x14);
      *(undefined4 *)((int)this + 0xa9) = *(undefined4 *)(param_5 + 0x18);
      *(undefined4 *)((int)this + 0x15) = *(undefined4 *)(param_5 + 0x48);
    }
    thunk_FUN_00632e30(this);
    STTeamLissagC::InitVisibelSystem(this);
    uVar2 = 1;
    if (*(char *)((int)this + 4) == '\0') {
      uVar4 = 0;
      if (0 < (int)uVar5) {
        do {
          iVar3 = *(int *)this;
          if (uVar4 < *(uint *)(iVar3 + 0xc)) {
            iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          uVar4 = uVar4 + 1;
          *(undefined4 *)(iVar3 + 4) = 0xffffffff;
        } while ((int)uVar4 < (int)uVar5);
      }
      return 1;
    }
  }
  return uVar2;
}

