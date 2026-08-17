#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::DelPlayer */

void __thiscall FSGSTy::DelPlayer(FSGSTy *this,byte *param_1)

{
  byte bVar1;
  FSGSTy_field_1EA6DArray *pFVar2;
  FSGSTy *this_00;
  int iVar4;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint index;
  uint uVar7;
  char *pcVar8;
  byte *pbVar9;
  bool bVar10;
  InternalExceptionFrame local_84;
  byte local_40 [48];
  FSGSTy *local_10;
  uint local_c;
  char *local_8;
  byte *pbVar10;

  if ((this->array_00BC[0xc].field_01DF == '\x06') && (this->array_00BC[0xc].field_01E0 == '\0')) {
    local_84.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_84;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_84.jumpBuffer,0);
    this_00 = local_10;
    if (iVar4 == 0) {
      local_10->field_002D = 0x26;
      FUN_006e6080(local_10,2,local_10->field_1B20,(undefined4 *)&local_10->field_0x1d);
      pFVar2 = this_00->field_1EA6;
      uVar7 = pFVar2->count;
      if (*(ushort *)&this_00->field_0x31 < uVar7) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
        local_8 = &pFVar2->data->field_0000 +
                  pFVar2->elementSize * (uint)*(ushort *)&this_00->field_0x31;
      }
      else {
        local_8 = nullptr;
      }
      local_c = uVar7;
      if (local_8 != nullptr) {
        pcVar8 = local_8;
        pbVar9 = local_40;
        memmove(pbVar9, pcVar8, 0x2e); /* compiler REP MOVS byte copy */
      }
      index = 0;
      if (uVar7 != 0) {
        if (uVar7 == 0) {
          pcVar8 = nullptr;
          goto LAB_005a278f;
        }
        do {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          pcVar8 = &this_00->field_1EA6->data->field_0000 + this_00->field_1EA6->elementSize * index
          ;
LAB_005a278f:
          pbVar10 = param_1;
          if (pcVar8 != nullptr) {
            do {
              bVar1 = *pcVar8;
              bVar10 = bVar1 < *pbVar10;
              if (bVar1 != *pbVar10) {
LAB_005a27ba:
                iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                goto LAB_005a27bf;
              }
              if (bVar1 == 0) break;
              bVar1 = pcVar8[1];
              bVar10 = bVar1 < pbVar10[1];
              if (bVar1 != pbVar10[1]) goto LAB_005a27ba;
              pcVar8 = pcVar8 + 2;
              pbVar10 = pbVar10 + 2;
            } while (bVar1 != 0);
            iVar6 = 0;
LAB_005a27bf:
            uVar7 = local_c;
            if (iVar6 == 0) {
              DArrayRemoveAt((DArrayTy *)this_00->field_1EA6,index);
              break;
            }
          }
          index = index + 1;
        } while (index < uVar7);
      }
      FUN_006b5f80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      /* ST_CALLSITE[005A2814]: CALL 0x00402298; direct=00402298 PutDDXClip */
      PutDDXClip(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',this_00->field_1E9A);
      this_00->field_002D = 0x28;
      *(dword *)&this_00->field_0x31 = this_00->field_1EA6->count;
      this_00->field_0035 = 1;
      FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      this_00->field_002D = 0x20;
      if ((this_00->field_1EA6->count == 0) || (this_00->array_00BC[0xc].field_01EB == 0)) {
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
            pcVar8 = nullptr;
            goto LAB_005a28be;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar8 = &this_00->field_1EA6->data->field_0000 +
                     this_00->field_1EA6->elementSize * uVar7;
LAB_005a28be:
            if (pcVar8 != nullptr) {
              pbVar9 = local_40;
              do {
                bVar1 = *pcVar8;
                bVar10 = bVar1 < *pbVar9;
                if (bVar1 != *pbVar9) {
LAB_005a28e9:
                  iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_005a28ee;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar8[1];
                bVar10 = bVar1 < pbVar9[1];
                if (bVar1 != pbVar9[1]) goto LAB_005a28e9;
                pcVar8 = pcVar8 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar1 != 0);
              iVar6 = 0;
LAB_005a28ee:
              if (iVar6 == 0) {
                *(short *)&this_00->field_0x31 = (short)uVar7;
                this_00->field_0037 = 1;
                this_00->field_0035 = 1;
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

