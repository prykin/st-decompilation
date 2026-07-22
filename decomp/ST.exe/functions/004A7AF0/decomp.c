#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::GetPatrolTask */

uint __thiscall
STGroupBoatC::GetPatrolTask(STGroupBoatC *this,int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  DArrayTy *pDVar4;
  undefined4 local_2c;
  int local_26;
  int local_22;
  int local_1e;
  int local_1a;
  short local_14;
  short local_12;
  short local_10;
  int local_e;
  int local_a;

  if (this->field_022A == (DArrayTy *)0x0) {
    return 1;
  }
  DArrayGetElement(this->field_022A,this->field_0232,&local_14);
  if (param_1 == 1) {
    local_1e = thunk_FUN_0040bc90(this,param_2 & 0xffff,(short *)(int)local_14,
                                  (short *)(int)local_12,(short *)(int)local_10,'\0');
    if (this->field_0242 < local_1e) {
      if ((1 < this->field_0027) &&
         (((this->field_0236 == 1 && (local_1e <= local_a / 2)) ||
          ((this->field_0236 == 0 && (local_1e <= local_e / 2)))))) {
        DArrayGetElement(this->field_022E,param_3,&local_2c);
        if (local_1a != 0) {
          if (local_1a == 1) {
            if (local_1e < local_26) {
              local_1a = 1;
              local_26 = local_1e;
              Library::DKW::TBL::FUN_006ae140(&this->field_022E->flags,param_3,&local_2c);
              return 0;
            }
            local_1a = 2;
            local_22 = local_1e;
            Library::DKW::TBL::FUN_006ae140(&this->field_022E->flags,param_3,&local_2c);
            return 0;
          }
          if (local_1a != 2) {
            iVar2 = ReportDebugMessage("E:\\__titans\\wlad\\to_grpb.cpp",0x164b,0,0,
                                       "%s","STGroupBoatC::GetPatrolTask incorrect data");
            if (iVar2 == 0) {
              return 0;
            }
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          if (local_22 <= local_1e) {
            if (this->field_023E == 0) {
              this->field_023E = 1;
            }
            local_1a = 3;
            local_2c = 1;
            Library::DKW::TBL::FUN_006ae140(&this->field_022E->flags,param_3,&local_2c);
            iVar2 = sub_004A7E30(this,1);
            return (uint)(iVar2 != 0);
          }
        }
        local_1a = 1;
        local_26 = local_1e;
        Library::DKW::TBL::FUN_006ae140(&this->field_022E->flags,param_3,&local_2c);
      }
      return 0;
    }
    if (this->field_023E == 0) {
      this->field_023E = 1;
    }
    DArrayGetElement(this->field_022E,param_3,&local_2c);
    pDVar4 = this->field_022E;
  }
  else {
    iVar2 = thunk_FUN_00423e70(this,param_2);
    if ((int)*(short *)(iVar2 + 0x47) != *(int *)(iVar2 + 199)) {
      return 0;
    }
    if ((int)*(short *)(iVar2 + 0x49) != *(int *)(iVar2 + 0xcb)) {
      return 0;
    }
    if ((int)*(short *)(iVar2 + 0x4b) != *(int *)(iVar2 + 0xcf)) {
      return 0;
    }
    if (this->field_023E == 0) {
      this->field_023E = 1;
    }
    DArrayGetElement(this->field_022E,param_3,&local_2c);
    pDVar4 = this->field_022E;
  }
  local_2c = 1;
  Library::DKW::TBL::FUN_006ae140(&pDVar4->flags,param_3,&local_2c);
  iVar2 = sub_004A7E30(this,1);
  return (uint)(iVar2 != 0);
}

