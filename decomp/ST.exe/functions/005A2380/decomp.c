#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::AddPlayer */

void __thiscall FSGSTy::AddPlayer(FSGSTy *this,undefined4 *param_1)

{
  byte bVar1;
  FSGSTy_field_1EA6DArray *array;
  FSGSTy *this_00;
  int iVar3;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  byte *puVar8;
  byte *pbVar9;
  bool bVar10;
  byte local_b0 [48];
  InternalExceptionFrame local_80;
  undefined4 local_3c [11];
  undefined1 local_f;
  FSGSTy *local_c;
  char *local_8;
  FSGSTy_field_1EA6Element *element_1ea6;

  if ((this->array_00BC[0xc].field_01DF == '\x06') && (this->array_00BC[0xc].field_01E0 == '\0')) {
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
        element_1ea6 = DArrayAt<FSGSTy_field_1EA6Element>(array, (uint)*(ushort *)&this_00->field_0x31);
      }
      else {
        element_1ea6 = nullptr;
      }
      if (element_1ea6 != nullptr) {
        pcVar7 = element_1ea6;
        pbVar9 = local_b0;
        memmove(pbVar9, pcVar7, 0x2e); /* compiler REP MOVS byte copy */
        iVar5 = 0;
      }
      puVar8 = (byte *)(local_3c);
      memmove(puVar8, param_1, 0x2d); /* compiler REP MOVS byte copy */
      local_f = 0;
      Library::DKW::TBL::DArrayAppend((DArrayTy *)array,local_3c);
      FUN_006b5f80((int *)g_ddxContext_008075A8,0x1e9,0x5e,0x124,0xf3);
      PutDDXClip(0x1e9,0x5e,0,0,0x124,(byte *)0xf3,'\x01',this_00->field_1E9A);
      this_00->field_002D = 0x28;
      *(dword *)&this_00->field_0x31 = this_00->field_1EA6->count;
      this_00->field_0035 = 1;
      FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      this_00->field_002D = 0x20;
      if ((this_00->field_1EA6->count == 0) || (this_00->array_00BC[0xc].field_01EB == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(undefined4 *)&this_00->field_0x31 = uVar3;
      FUN_006e6080(this_00,2,this_00->field_1B20,(undefined4 *)&this_00->field_0x1d);
      if (element_1ea6 != nullptr) {
        uVar6 = 0;
        local_8 = (char *)this_00->field_1EA6->count;
        if (local_8 != nullptr) {
          if (local_8 == nullptr) {
            pcVar7 = nullptr;
            goto LAB_005a252f;
          }
          do {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pcVar7 = &this_00->field_1EA6->data->field_0000 +
                     this_00->field_1EA6->elementSize * uVar6;
LAB_005a252f:
            if (pcVar7 != nullptr) {
              pbVar9 = local_b0;
              do {
                bVar1 = *pcVar7;
                bVar10 = bVar1 < *pbVar9;
                if (bVar1 != *pbVar9) {
LAB_005a255d:
                  iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                  goto LAB_005a2562;
                }
                if (bVar1 == 0) break;
                bVar1 = pcVar7[1];
                bVar10 = bVar1 < pbVar9[1];
                if (bVar1 != pbVar9[1]) goto LAB_005a255d;
                pcVar7 = pcVar7 + 2;
                pbVar9 = pbVar9 + 2;
              } while (bVar1 != 0);
              iVar5 = 0;
LAB_005a2562:
              if (iVar5 == 0) {
                *(short *)&this_00->field_0x31 = (short)uVar6;
                this_00->field_0037 = 1;
                this_00->field_0035 = 1;
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
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xa12,0,iVar3,"%s"
                               ,"FSGSTy::AddPlayer");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xa12);
  }
  return;
}

