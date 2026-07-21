#include "../../pseudocode_runtime.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSwitchEnumApplier] Switch target param_4 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_00632650_param_4Enum. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4 */

undefined4 __thiscall
FUN_00632650(void *this,uint param_1,int param_2,undefined4 param_3,
            Global_sub_00632650_param_4Enum param_4,undefined4 *param_5)

{
  uint *puVar1;
  DArrayTy *pDVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_40 [15];

  if (*(int *)this != 0) {
    thunk_FUN_00635fd0(this);
  }
  if (param_2 == 0) {
    param_2 = 1;
  }
  memset(local_40, 0, 0x39); /* compiler bulk-zero initialization */
  uVar6 = 0;
  switch(param_4) {
  case CASE_0:
  case CASE_2:
  case CASE_4:
    pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,param_1 * param_2,0x39,10);
    *(DArrayTy **)this = pDVar2;
    uVar6 = param_1 * param_2;
    break;
  case CASE_1:
    pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,param_1 + param_2,0x39,10);
    *(DArrayTy **)this = pDVar2;
    uVar6 = param_1;
    break;
  case CASE_3:
    pDVar2 = Library::DKW::TBL::DArrayCreate((DArrayTy *)0x0,(param_1 + 4) * param_2 + 1,0x39,10);
    *(DArrayTy **)this = pDVar2;
    uVar6 = param_1 * param_2;
  }
  puVar1 = *(uint **)this;
  if (puVar1 == (uint *)0x0) {
    uVar3 = 0;
  }
  else {
    switch(param_4) {
    case CASE_0:
    case CASE_1:
      uVar6 = (param_1 - 1) + param_2;
      if (param_4 != CASE_1) {
        uVar6 = param_1 - 1;
      }
      Library::DKW::TBL::FUN_006ae140(puVar1,uVar6,local_40);
      uVar6 = *(uint *)(*(int *)this + 0xc);
      *(undefined4 *)((int)this + 0xd) = param_3;
      *(undefined1 *)((int)this + 4) = 1;
      *(uint *)((int)this + 0x19) = param_1;
      *(int *)((int)this + 0x1d) = param_2;
      *(Global_sub_00632650_param_4Enum *)((int)this + 0x11) = param_4;
      *(undefined4 *)((int)this + 0xa1) = param_5[4];
      *(undefined4 *)((int)this + 0xa5) = param_5[5];
      *(undefined4 *)((int)this + 0xa9) = param_5[6];
      *(undefined4 *)((int)this + 0x15) = param_5[0x12];
      break;
    case CASE_2:
      Library::DKW::TBL::FUN_006ae140(puVar1,param_1 * param_2 - 1,local_40);
      uVar6 = *(uint *)(*(int *)this + 0xc);
      *(int *)((int)this + 0x1d) = param_2;
      *(undefined1 *)((int)this + 4) = 1;
      *(uint *)((int)this + 0x19) = param_1;
      *(undefined4 *)((int)this + 0x11) = 2;
      *(undefined4 *)((int)this + 0xd) = param_3;
      *(undefined4 *)((int)this + 0xa1) = param_5[4];
      *(undefined4 *)((int)this + 0xa5) = param_5[5];
      *(undefined4 *)((int)this + 0xa9) = param_5[6];
      *(undefined4 *)((int)this + 0xad) = param_5[0x13];
      *(undefined4 *)((int)this + 0x15) = param_5[0x12];
      break;
    case CASE_3:
      uVar6 = (param_1 + 4) * param_2 + 1;
      *(uint *)((int)this + 0x21) = uVar6;
      *(undefined4 *)((int)this + 0x11) = 3;
      Library::DKW::TBL::FUN_006ae140(puVar1,uVar6,local_40);
      *(undefined1 *)((int)this + 4) = 1;
      *(undefined4 *)((int)this + 0x19) = *param_5;
      *(undefined4 *)((int)this + 0x1d) = param_5[1];
      *(undefined4 *)((int)this + 0x9d) = param_5[4];
      *(undefined4 *)((int)this + 0xa1) = param_5[5];
      *(undefined4 *)((int)this + 0xa5) = param_5[6];
      *(undefined4 *)((int)this + 0x25) = param_5[2];
      *(undefined4 *)((int)this + 0x29) = param_5[3];
      *(undefined4 *)((int)this + 0x41) = 0;
      *(undefined4 *)((int)this + 0x45) = 0x3f490fdb;
      *(float *)((int)this + 0x6d) = (float)param_5[0xc] * _DAT_0079d1a4;
      *(float *)((int)this + 0x69) = (float)param_5[0xb] * _DAT_0079d1a4;
      *(undefined4 *)((int)this + 0x81) = param_5[9];
      *(undefined4 *)((int)this + 0x85) = param_5[10];
      *(undefined4 *)((int)this + 0x89) = 0x3f860a92;
      *(undefined4 *)((int)this + 0x61) = param_5[7];
      *(undefined4 *)((int)this + 0x65) = param_5[8];
      break;
    case CASE_4:
      Library::DKW::TBL::FUN_006ae140(puVar1,param_1 * param_2 - 1,local_40);
      uVar6 = *(uint *)(*(int *)this + 0xc);
      *(int *)((int)this + 0x1d) = param_2;
      *(undefined1 *)((int)this + 4) = 1;
      *(uint *)((int)this + 0x19) = param_1;
      *(undefined4 *)((int)this + 0x11) = 4;
      *(undefined4 *)((int)this + 0xd) = param_3;
      *(undefined4 *)((int)this + 0xa1) = param_5[4];
      *(undefined4 *)((int)this + 0xa5) = param_5[5];
      *(undefined4 *)((int)this + 0xa9) = param_5[6];
      *(undefined4 *)((int)this + 0x15) = param_5[0x12];
    }
    thunk_FUN_00632e30(this);
    STTeamLissagC::InitVisibelSystem(this);
    uVar3 = 1;
    if (*(char *)((int)this + 4) == '\0') {
      uVar5 = 0;
      if (0 < (int)uVar6) {
        do {
          iVar4 = *(int *)this;
          if (uVar5 < *(uint *)(iVar4 + 0xc)) {
            iVar4 = *(int *)(iVar4 + 8) * uVar5 + *(int *)(iVar4 + 0x1c);
          }
          else {
            iVar4 = 0;
          }
          uVar5 = uVar5 + 1;
          *(undefined4 *)(iVar4 + 4) = 0xffffffff;
        } while ((int)uVar5 < (int)uVar6);
      }
      return 1;
    }
  }
  return uVar3;
}

