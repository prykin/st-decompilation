#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::AddPlayer */

void __thiscall FSGSTy::AddPlayer(FSGSTy *this,undefined4 *param_1)

{
  byte bVar1;
  DArrayTy *pDVar2;
  code *pcVar3;
  FSGSTy *this_00;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
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
    iVar4 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0);
    this_00 = local_c;
    if (iVar4 == 0) {
      local_c->field_002D = 0x26;
      FUN_006e6080(local_c,2,local_c->field_1B20,(undefined4 *)&local_c->field_0x1d);
      pDVar2 = this_00->field_1EA6;
      if ((uint)*(ushort *)&this_00->field_0x31 < pDVar2->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, (uint)*(ushort *)&this_00->field_0x31) (runtime stride) */
        local_8 = (undefined4 *)
                  (pDVar2->elementSize * (uint)*(ushort *)&this_00->field_0x31 + (int)pDVar2->data);
      }
      else {
        local_8 = (undefined4 *)0x0;
      }
      if (local_8 != (undefined4 *)0x0) {
        puVar8 = local_8;
        pbVar9 = local_b0;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pbVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          pbVar9 = pbVar9 + 4;
        }
        *(undefined2 *)pbVar9 = *(undefined2 *)puVar8;
      }
      puVar8 = local_3c;
      for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *param_1;
        param_1 = param_1 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined1 *)puVar8 = *(undefined1 *)param_1;
      local_f = 0;
      Library::DKW::TBL::FUN_006ae1c0(&pDVar2->flags,local_3c);
      FUN_006b5f80(DAT_008075a8,0x1e9,0x5e,0x124,0xf3);
      PutDDXClip(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',(BITMAPINFO *)this_00->field_1E9A);
      this_00->field_002D = 0x28;
      *(dword *)&this_00->field_0x31 = this_00->field_1EA6->count;
      *(undefined2 *)&this_00->field_0x35 = 1;
      FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      this_00->field_002D = 0x20;
      if ((this_00->field_1EA6->count == 0) || (this_00->field_1A6B == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      *(undefined4 *)&this_00->field_0x31 = uVar5;
      FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      if (local_8 != (undefined4 *)0x0) {
        uVar7 = 0;
        local_8 = (undefined4 *)this_00->field_1EA6->count;
        if (local_8 != (undefined4 *)0x0) {
          if (local_8 == (undefined4 *)0x0) {
            pbVar9 = (byte *)0x0;
            goto LAB_005a252f;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pbVar9 = (byte *)(this_00->field_1EA6->elementSize * uVar7 +
                             (int)this_00->field_1EA6->data);
LAB_005a252f:
            if (pbVar9 != (byte *)0x0) {
              pbVar10 = local_b0;
              do {
                bVar1 = *pbVar9;
                bVar11 = bVar1 < *pbVar10;
                if (bVar1 != *pbVar10) {
LAB_005a255d:
                  iVar4 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                  goto LAB_005a2562;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar11 = bVar1 < pbVar10[1];
                if (bVar1 != pbVar10[1]) goto LAB_005a255d;
                pbVar9 = pbVar9 + 2;
                pbVar10 = pbVar10 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_005a2562:
              if (iVar4 == 0) {
                *(short *)&this_00->field_0x31 = (short)uVar7;
                *(undefined2 *)&this_00->field_0x37 = 1;
                *(undefined2 *)&this_00->field_0x35 = 1;
                this_00->field_002D = 0x22;
                FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
                g_currentExceptionFrame = local_80.previous;
                return;
              }
            }
            uVar7 = uVar7 + 1;
            if (local_8 <= uVar7) {
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
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xa12,0,iVar4,"%s"
                               ,"FSGSTy::AddPlayer");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa12);
  }
  return;
}

