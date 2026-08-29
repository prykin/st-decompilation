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
   load: MOV EDX,dword ptr [EBP + 0x14]

   [STDiscriminatedPayloadApplier] Case-local payload view: param_4 == 1 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00632650_00632650_Case_1.
   carrier=param_5; The carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_4 == 2 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00632650_00632650_Case_2.
   carrier=param_5; The carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_4 == 3 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00632650_00632650_Case_3.
   carrier=param_5; The carrier ABI remains pointer:/void.

   [STDiscriminatedPayloadApplier] Case-local payload view: param_4 == 4 uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/Global_FUN_00632650_00632650_Case_4.
   carrier=param_5; The carrier ABI remains pointer:/void. */

undefined4 __thiscall
FUN_00632650(void *this,uint param_1,int param_2,undefined4 param_3,
            Global_sub_00632650_param_4Enum param_4,void *param_5)

{
  DArrayTy *pDVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_40 [15];
  if (*(int *)this != 0) {
    thunk_FUN_00635fd0(this);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (param_2 == 0) {
    param_2 = 1;
  }
  memset(local_40, 0, 0x39); /* compiler bulk-zero initialization */
  uVar5 = 0;
  switch(param_4) {
  case CASE_0:
  case CASE_2:
  case CASE_4:
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,param_1 * param_2,0x39,10);
    *(DArrayTy **)this = pDVar1;
    uVar5 = param_1 * param_2;
    break;
  case CASE_1:
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,param_1 + param_2,0x39,10);
    *(DArrayTy **)this = pDVar1;
    uVar5 = param_1;
    break;
  case CASE_3:
    pDVar1 = Library::DKW::TBL::DArrayCreate(nullptr,(param_1 + 4) * param_2 + 1,0x39,10);
    *(DArrayTy **)this = pDVar1;
    uVar5 = param_1 * param_2;
  }
  pDVar1 = *(DArrayTy **)this;
  if (pDVar1 == nullptr) {
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
      STField<undefined4>(this,0xd) = param_3;
      STField<undefined1>(this,4) = 1;
      STField<uint>(this,0x19) = param_1;
      STField<int>(this,0x1d) = param_2;
      STField<Global_sub_00632650_param_4Enum>(this,0x11) = param_4;
      STField<undefined4>(this,0xa1) = STField<undefined4>(param_5,0x10);
      STField<undefined4>(this,0xa5) = STField<undefined4>(param_5,0x14);
      STField<undefined4>(this,0xa9) = STField<undefined4>(param_5,0x18);
      STField<undefined4>(this,0x15) = STField<undefined4>(param_5,0x48);
      break;
    case CASE_2:

      Library::DKW::TBL::DArrayPut(pDVar1,param_1 * param_2 - 1,local_40);
      uVar5 = *(uint *)(*(int *)this + 0xc);
      STField<int>(this,0x1d) = param_2;
      STField<undefined1>(this,4) = 1;
      STField<uint>(this,0x19) = param_1;
      STField<undefined4>(this,0x11) = 2;
      STField<undefined4>(this,0xd) = param_3;
      STField<undefined4>(this,0xa1) = STField<undefined4>(param_5,0x10);
      STField<undefined4>(this,0xa5) = STField<undefined4>(param_5,0x14);
      STField<undefined4>(this,0xa9) = STField<undefined4>(param_5,0x18);
      STField<undefined4>(this,0xad) = STField<undefined4>(param_5,0x4c);
      STField<undefined4>(this,0x15) = STField<undefined4>(param_5,0x48);
      break;
    case CASE_3:
      uVar5 = (param_1 + 4) * param_2 + 1;
      STField<uint>(this,0x21) = uVar5;
      STField<undefined4>(this,0x11) = 3;

      Library::DKW::TBL::DArrayPut(pDVar1,uVar5,local_40);
      STField<undefined1>(this,4) = 1;
      STField<undefined4>(this,0x19) = *(undefined4 *)param_5;
      STField<undefined4>(this,0x1d) = STField<undefined4>(param_5,4);
      STField<undefined4>(this,0x9d) = STField<undefined4>(param_5,0x10);
      STField<undefined4>(this,0xa1) = STField<undefined4>(param_5,0x14);
      STField<undefined4>(this,0xa5) = STField<undefined4>(param_5,0x18);
      STField<undefined4>(this,0x25) = STField<undefined4>(param_5,8);
      STField<undefined4>(this,0x29) = STField<undefined4>(param_5,0xc);
      STField<undefined4>(this,0x41) = 0;
      STField<undefined4>(this,0x45) = 0x3f490fdb;
      STField<float>(this,0x6d) = STField<float>(param_5,0x30) * _DAT_0079d1a4;
      STField<float>(this,0x69) = STField<float>(param_5,0x2c) * _DAT_0079d1a4;
      STField<undefined4>(this,0x81) = STField<undefined4>(param_5,0x24);
      STField<undefined4>(this,0x85) = STField<undefined4>(param_5,0x28);
      STField<undefined4>(this,0x89) = 0x3f860a92;
      STField<undefined4>(this,0x61) = STField<undefined4>(param_5,0x1c);
      STField<undefined4>(this,0x65) = STField<undefined4>(param_5,0x20);
      break;
    case CASE_4:

      Library::DKW::TBL::DArrayPut(pDVar1,param_1 * param_2 - 1,local_40);
      uVar5 = *(uint *)(*(int *)this + 0xc);
      STField<int>(this,0x1d) = param_2;
      STField<undefined1>(this,4) = 1;
      STField<uint>(this,0x19) = param_1;
      STField<undefined4>(this,0x11) = 4;
      STField<undefined4>(this,0xd) = param_3;
      STField<undefined4>(this,0xa1) = STField<undefined4>(param_5,0x10);
      STField<undefined4>(this,0xa5) = STField<undefined4>(param_5,0x14);
      STField<undefined4>(this,0xa9) = STField<undefined4>(param_5,0x18);
      STField<undefined4>(this,0x15) = STField<undefined4>(param_5,0x48);
    }

    thunk_FUN_00632e30(this);
    /* ST_CALLSITE[006328BE]: CALL 0x004035c1; direct=004035C1 STTeamLissagC::InitVisibelSystem */
    STTeamLissagC::InitVisibelSystem(this);
    uVar2 = 1;
    if (STField<char>(this,4) == '\0') {
      uVar4 = 0;
      if (0 < (int)uVar5) {
        do {
          iVar3 = *(int *)this;
          if (uVar4 < STField<uint>(iVar3,0xC)) {
            iVar3 = STField<int>(iVar3,0x8) * uVar4 + STField<int>(iVar3,0x1C);
          }
          else {
            iVar3 = 0;
          }
          uVar4 = uVar4 + 1;
          STField<undefined4>(iVar3,0x4) = 0xffffffff;
        } while ((int)uVar4 < (int)uVar5);
      }
      return 1;
    }
  }
  return uVar2;
}

