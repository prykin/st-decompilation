#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DelPlayer */

void __thiscall FSGSTy::DelPlayer(FSGSTy *this,byte *param_1)

{
  byte bVar1;
  DArrayTy *pDVar2;
  code *pcVar3;
  FSGSTy *this_00;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  InternalExceptionFrame local_84;
  byte local_40 [48];
  FSGSTy *local_10;
  uint local_c;
  undefined4 *local_8;

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
      uVar8 = pDVar2->count;
      if (*(ushort *)&this_00->field_0x31 < uVar8) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, (uint)*(ushort *)&this_00->field_0x31) (runtime stride) */
        local_8 = (undefined4 *)
                  (pDVar2->elementSize * (uint)*(ushort *)&this_00->field_0x31 + (int)pDVar2->data);
      }
      else {
        local_8 = (undefined4 *)0x0;
      }
      local_c = uVar8;
      if (local_8 != (undefined4 *)0x0) {
        puVar9 = local_8;
        pbVar10 = local_40;
        for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(undefined4 *)pbVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          pbVar10 = pbVar10 + 4;
        }
        *(undefined2 *)pbVar10 = *(undefined2 *)puVar9;
      }
      uVar7 = 0;
      if (uVar8 != 0) {
        if (uVar8 == 0) {
          pbVar10 = (byte *)0x0;
          goto LAB_005a278f;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pbVar10 = (byte *)(this_00->field_1EA6->elementSize * uVar7 +
                            (int)this_00->field_1EA6->data);
LAB_005a278f:
          pbVar11 = param_1;
          if (pbVar10 != (byte *)0x0) {
            do {
              bVar1 = *pbVar10;
              bVar12 = bVar1 < *pbVar11;
              if (bVar1 != *pbVar11) {
LAB_005a27ba:
                iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_005a27bf;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar10[1];
              bVar12 = bVar1 < pbVar11[1];
              if (bVar1 != pbVar11[1]) goto LAB_005a27ba;
              pbVar10 = pbVar10 + 2;
              pbVar11 = pbVar11 + 2;
            } while (bVar1 != 0);
            iVar4 = 0;
LAB_005a27bf:
            uVar8 = local_c;
            if (iVar4 == 0) {
              FUN_006b0c70(this_00->field_1EA6,uVar7);
              break;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar8);
      }
      FUN_006b5f80((int *)PTR_008075a8,0x1e9,0x5e,0x124,0xf3);
      PutDDXClip(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',this_00->field_1E9A);
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
        uVar8 = 0;
        local_c = this_00->field_1EA6->count;
        if (local_c != 0) {
          if (local_c == 0) {
            pbVar10 = (byte *)0x0;
            goto LAB_005a28be;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pbVar10 = (byte *)(this_00->field_1EA6->elementSize * uVar8 +
                              (int)this_00->field_1EA6->data);
LAB_005a28be:
            if (pbVar10 != (byte *)0x0) {
              pbVar11 = local_40;
              do {
                bVar1 = *pbVar10;
                bVar12 = bVar1 < *pbVar11;
                if (bVar1 != *pbVar11) {
LAB_005a28e9:
                  iVar4 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                  goto LAB_005a28ee;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar10[1];
                bVar12 = bVar1 < pbVar11[1];
                if (bVar1 != pbVar11[1]) goto LAB_005a28e9;
                pbVar10 = pbVar10 + 2;
                pbVar11 = pbVar11 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_005a28ee:
              if (iVar4 == 0) {
                *(short *)&this_00->field_0x31 = (short)uVar8;
                *(undefined2 *)&this_00->field_0x37 = 1;
                *(undefined2 *)&this_00->field_0x35 = 1;
                this_00->field_002D = 0x22;
                FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
                g_currentExceptionFrame = local_84.previous;
                return;
              }
            }
            uVar8 = uVar8 + 1;
            if (local_c <= uVar8) {
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
    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xa3c,0,iVar4,"%s"
                               ,"FSGSTy::DelPlayer");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa3c);
  }
  return;
}

