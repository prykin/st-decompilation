#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::HidePanel */

void __thiscall MMsgTy::HidePanel(MMsgTy *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  MMsgTy *this_00;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint *puVar6;
  int *piVar7;
  InternalExceptionFrame local_70;
  int local_2c [8];
  MMsgTy *local_c;
  uint local_8;

  if (this->field_0065 != '\x02') {
    local_70.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_70;
    local_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0);
    this_00 = local_c;
    if (iVar3 == 0) {
      iVar3 = 0xd;
      puVar6 = &local_c->field_0066;
      do {
        if (*puVar6 != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar6);
        }
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (param_2 == 0) {
        this_00->field_1CAA = 0;
        this_00->field_1CA9 = 0;
        this_00->field_1A5A = 0xff;
      }
      if (this_00->field_1D8C != 0xffffffff) {
        FUN_006b3af0((int *)this_00->field_1DD0,this_00->field_1D8C);
      }
      iVar3 = this_00->field_1CAB;
      if (iVar3 != 0) {
        piVar7 = local_2c;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar7 = 0;
          piVar7 = piVar7 + 1;
        }
        local_2c[3] = 2;
        local_2c[4] = 0x6940;
        local_2c[2] = iVar3;
        (*this_00->field_000C->vtable->vfunc_18)(local_2c);
      }
      if (param_1 == 0) {
        this_00->field_0065 = 2;
        HideSprites(this_00);
        g_currentExceptionFrame = local_70.previous;
        return;
      }
      if (param_3 == 0) {
        bVar5 = 0;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = (uint)local_8._1_3_ << 8;
        if (this_00->field_009A != 0) {
          do {
            if (*(char *)((int)&this_00->field_1C9C + (local_8 & 0xff)) != '\0') {
              iVar3 = (local_8 & 0xff) * 0x1fb;
              uVar1 = *(uint *)((int)&this_00->field_0178 + iVar3);
              if (uVar1 != 0xffffffff) {
                FUN_006b3af0(*(int **)((int)&this_00->field_01BC + iVar3),uVar1);
              }
            }
            bVar5 = bVar5 + 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_8 = CONCAT31(local_8._1_3_,bVar5);
          } while (bVar5 < this_00->field_009A);
        }
      }
      else {
        bVar5 = 0;
        this_00->field_1C9C = 0x1010101;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = (uint)local_8._1_3_ << 8;
        this_00->field_1CA0 = 0x1010101;
        this_00->field_1CA4 = 0x1010101;
        this_00->field_1CA8 = 1;
        if (this_00->field_009A != 0) {
          do {
            uVar1 = *(uint *)((int)&this_00->field_0178 + (local_8 & 0xff) * 0x1fb);
            if (uVar1 != 0xffffffff) {
              FUN_006b3af0(*(int **)((int)&this_00->field_01BC + (local_8 & 0xff) * 0x1fb),uVar1);
            }
            bVar5 = bVar5 + 1;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_8 = CONCAT31(local_8._1_3_,bVar5);
          } while (bVar5 < this_00->field_009A);
        }
      }
      this_00->field_0065 = 4;
      thunk_FUN_005b6730(this_00,6,'\x01',-1);
      g_currentExceptionFrame = local_70.previous;
      return;
    }
    g_currentExceptionFrame = local_70.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x1a4,0,iVar3,"%s"
                               ,"MMsgTy::HidePanel");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x1a4);
  }
  return;
}

