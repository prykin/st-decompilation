#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::HidePanel */

void __thiscall MMsgTy::HidePanel(MMsgTy *this,int param_1,int param_2,int param_3)

{
  uint uVar1;
  MMsgTy *this_00;
  int iVar3;
  int iVar4;
  uint uVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
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
      iVar8 = 0xd;
      puVar9 = local_c->field_0066;
      do {
        if (*puVar9 != 0) {
          StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar9);
        }
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      if (param_2 == 0) {
        this_00->field_1CAA = 0;
        this_00->field_1CA9 = 0;
        this_00->array_00BC[0xc].field_01DA = 0xff;
      }
      if (this_00->field_1D8C != 0xffffffff) {
        FUN_006b3af0((int *)this_00->field_1DD0,this_00->field_1D8C);
      }
      iVar8 = this_00->field_1CAB;
      if (iVar8 != 0) {
        memset(local_2c, 0, 0x20); /* compiler bulk-zero initialization */
        local_2c[3] = 2;
        local_2c[4] = 0x6940;
        local_2c[2] = iVar8;
        (*this_00->field_000C->vtable->vfunc_18)((short)local_2c);
      }
      if (param_1 == 0) {
        this_00->field_0065 = 2;
        HideSprites(this_00);
        g_currentExceptionFrame = local_70.previous;
        return;
      }
      if (param_3 == 0) {
        bVar7 = 0;
        local_8 = (uint)STPiece<1,3>(local_8) << 8;
        if (this_00->field_009A != 0) {
          do {
            uVar6 = local_8 & 0xff;
            if (*(char *)((int)&this_00->field_1C9C + uVar6) != '\0') {
              uVar1 = this_00->array_00BC[uVar6].field_00B8.field_0004;
              if (uVar1 != 0xffffffff) {
                FUN_006b3af0((int *)this_00->array_00BC[uVar6].field_00B8.field_0048,uVar1);
              }
            }
            bVar7 = bVar7 + 1;
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
          } while (bVar7 < this_00->field_009A);
        }
      }
      else {
        bVar7 = 0;
        this_00->field_1C9C = 0x1010101;
        local_8 = (uint)STPiece<1,3>(local_8) << 8;
        this_00->field_1CA0 = 0x1010101;
        this_00->field_1CA4 = 0x1010101;
        this_00->field_1CA8 = 1;
        if (this_00->field_009A != 0) {
          do {
            uVar6 = this_00->array_00BC[local_8 & 0xff].field_00B8.field_0004;
            if (uVar6 != 0xffffffff) {
              FUN_006b3af0((int *)this_00->array_00BC[local_8 & 0xff].field_00B8.field_0048,uVar6);
            }
            bVar7 = bVar7 + 1;
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar7));
          } while (bVar7 < this_00->field_009A);
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

