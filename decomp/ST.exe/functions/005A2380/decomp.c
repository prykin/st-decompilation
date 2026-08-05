#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::AddPlayer */

void __thiscall FSGSTy::AddPlayer(FSGSTy *this,undefined4 *param_1)

{
  byte bVar1;
  DArrayTy *array;
  FSGSTy *this_00;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  byte *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  byte local_b0 [48];
  InternalExceptionFrame local_80;
  undefined4 local_3c [11];
  undefined1 local_f;
  FSGSTy *local_c;
  undefined4 *local_8;

  if ((this->field_1A5F == CASE_6) && (this->field_1A60 == '\0')) {
    local_80.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_80;
    local_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
    this_00 = local_c;
    if (iVar3 == 0) {
      local_c->field_002D = 0x26;
      FUN_006e6080(local_c,2,local_c->field_1B20,(undefined4 *)&local_c->field_0x1d);
      array = this_00->field_1EA6;
      if ((uint)*(ushort *)&this_00->field_0x31 < array->count) {
        local_8 = DArrayAt<undefined4>(array, (uint)*(ushort *)&this_00->field_0x31);
      }
      else {
        local_8 = nullptr;
      }
      if (local_8 != nullptr) {
        puVar7 = (byte *)(local_8);
        pbVar8 = local_b0;
        memmove(pbVar8, puVar7, 0x2e); /* compiler REP MOVS byte copy */
        iVar3 = 0;
      }
      puVar7 = (byte *)(local_3c);
      memmove(puVar7, param_1, 0x2d); /* compiler REP MOVS byte copy */
      local_f = 0;
      Library::DKW::TBL::DArrayAppend(array,local_3c);
      FUN_006b5f80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      PutDDXClip(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',this_00->field_1E9A);
      this_00->field_002D = 0x28;
      *(dword *)&this_00->field_0x31 = this_00->field_1EA6->count;
      *(undefined2 *)&this_00->field_0x35 = 1;
      FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      this_00->field_002D = 0x20;
      if ((this_00->field_1EA6->count == 0) || (this_00->field_1A6B == 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      *(undefined4 *)&this_00->field_0x31 = uVar4;
      FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      if (local_8 != nullptr) {
        uVar6 = 0;
        local_8 = (undefined4 *)this_00->field_1EA6->count;
        if (local_8 != nullptr) {
          if (local_8 == nullptr) {
            pbVar8 = nullptr;
            goto LAB_005a252f;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pbVar8 = (byte *)(this_00->field_1EA6->elementSize * uVar6 +
                             (int)this_00->field_1EA6->data);
LAB_005a252f:
            if (pbVar8 != nullptr) {
              pbVar9 = local_b0;
              do {
                bVar1 = *pbVar8;
                bVar10 = bVar1 < *pbVar9;
                if (bVar1 != *pbVar9) {
LAB_005a255d:
                  iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_005a2562;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar8[1];
                bVar10 = bVar1 < pbVar9[1];
                if (bVar1 != pbVar9[1]) goto LAB_005a255d;
                pbVar8 = pbVar8 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar1 != 0);
              iVar3 = 0;
LAB_005a2562:
              if (iVar3 == 0) {
                *(short *)&this_00->field_0x31 = (short)uVar6;
                *(undefined2 *)&this_00->field_0x37 = 1;
                *(undefined2 *)&this_00->field_0x35 = 1;
                this_00->field_002D = 0x22;
                FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
                g_currentExceptionFrame = local_80.previous;
                return;
              }
            }
            uVar6 = uVar6 + 1;
            if (local_8 <= uVar6) {
              g_currentExceptionFrame = local_80.previous;
              return;
            }
          } while( true );
        }
      }
      g_currentExceptionFrame = local_80.previous;
      return;
    }
    g_currentExceptionFrame = local_80.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xa12,0,iVar3,"%s"
                               ,"FSGSTy::AddPlayer");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa12);
  }
  return;
}

