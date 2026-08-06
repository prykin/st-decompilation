#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DelPlayer */

void __thiscall FSGSTy::DelPlayer(FSGSTy *this,byte *param_1)

{
  byte bVar1;
  DArrayTy *pDVar2;
  FSGSTy *this_00;
  int iVar4;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint index;
  uint uVar7;
  byte *puVar8;
  byte *pbVar9;
  byte *pbVar11;
  bool bVar12;
  InternalExceptionFrame local_84;
  byte local_40 [48];
  FSGSTy *local_10;
  uint local_c;
  undefined4 *local_8;
  byte *pbVar10;

  if ((this->field_1A5F == CASE_6) && (this->field_1A60 == '\0')) {
    local_84.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_84;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
    this_00 = local_10;
    if (iVar4 == 0) {
      local_10->field_002D = 0x26;
      FUN_006e6080(local_10,2,local_10->field_1B20,(undefined4 *)&local_10->field_0x1d);
      pDVar2 = this_00->field_1EA6;
      uVar7 = pDVar2->count;
      if (*(ushort *)&this_00->field_0x31 < uVar7) {
        local_8 = DArrayAt<undefined4>(pDVar2, (uint)*(ushort *)&this_00->field_0x31);
      }
      else {
        local_8 = nullptr;
      }
      local_c = uVar7;
      if (local_8 != nullptr) {
        puVar8 = (byte *)(local_8);
        pbVar9 = local_40;
        memmove(pbVar9, puVar8, 0x2e); /* compiler REP MOVS byte copy */
      }
      index = 0;
      if (uVar7 != 0) {
        if (uVar7 == 0) {
          pbVar9 = nullptr;
          goto LAB_005a278f;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pbVar9 = (byte *)(this_00->field_1EA6->elementSize * index +
                           (int)this_00->field_1EA6->data);
LAB_005a278f:
          pbVar10 = param_1;
          if (pbVar9 != nullptr) {
            do {
              bVar1 = *pbVar9;
              bVar12 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_005a27ba:
                iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_005a27bf;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar9[1];
              bVar12 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_005a27ba;
              pbVar9 = pbVar9 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_005a27bf:
            uVar7 = local_c;
            if (iVar6 == 0) {
              DArrayRemoveAt(this_00->field_1EA6,index);
              break;
            }
          }
          index = index + 1;
        } while (index < uVar7);
      }
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
        uVar7 = 0;
        local_c = this_00->field_1EA6->count;
        if (local_c != 0) {
          if (local_c == 0) {
            pbVar9 = nullptr;
            goto LAB_005a28be;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pbVar9 = (byte *)(this_00->field_1EA6->elementSize * uVar7 +
                             (int)this_00->field_1EA6->data);
LAB_005a28be:
            if (pbVar9 != nullptr) {
              pbVar11 = local_40;
              do {
                bVar1 = *pbVar9;
                bVar12 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_005a28e9:
                  iVar6 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_005a28ee;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar9[1];
                bVar12 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_005a28e9;
                pbVar9 = pbVar9 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_005a28ee:
              if (iVar6 == 0) {
                *(short *)&this_00->field_0x31 = (short)uVar7;
                *(undefined2 *)&this_00->field_0x37 = 1;
                *(undefined2 *)&this_00->field_0x35 = 1;
                this_00->field_002D = 0x22;
                FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
                g_currentExceptionFrame = local_84.previous;
                return;
              }
            }
            uVar7 = uVar7 + 1;
            if (local_c <= uVar7) {
              g_currentExceptionFrame = local_84.previous;
              return;
            }
          } while( true );
        }
      }
      g_currentExceptionFrame = local_84.previous;
      return;
    }
    g_currentExceptionFrame = local_84.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xa3c,0,iVar4,"%s"
                               ,"FSGSTy::DelPlayer");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa3c);
  }
  return;
}

