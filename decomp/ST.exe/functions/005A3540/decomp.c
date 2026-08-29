#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetGameList */

void __thiscall FSGSTy::SetGameList(FSGSTy *this,int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  FSGSTy_field_1EBEDArray *pFVar13;
  uint local_2bc [11];
  byte local_290 [560];
  InternalExceptionFrame local_60;
  char local_1c [8];
  byte local_14;
  FSGSTy *local_10;
  FSGSTy_field_1EBEElement *element_1ebe;
  uint local_8;

  if ((this->array_00BC[0xc].field_01DF == '\b') &&
     (this->field_1EBE != nullptr)) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_10 = this;

    iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
    this_00 = g_cursorClass_00802A30;
    if (iVar3 == 0) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar7 = g_cursorClass_00802A30->field_00C9;
        iVar2 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_00->field_0494 = 0xffff;
        /* ST_CALLSITE[005A35C0]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        CursorClassTy::SetGCType(this_00,CASE_0,iVar2,iVar7);
        /* ST_CALLSITE[005A35D5]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_00D2 = 0;
        this_00->field_04DF = -1;
      }
      this_01 = local_10;
      local_10->field_002D = 0x26;
      FUN_006e6080(local_10,2,local_10->field_1B20,(undefined4 *)&local_10->field_0x1d);
      pFVar13 = this_01->field_1EBE;
      if ((uint)*(ushort *)&this_01->field_0x31 < pFVar13->count) {
        element_1ebe = DArrayAt<FSGSTy_field_1EBEElement>(pFVar13, (uint)*(ushort *)&this_01->field_0x31);
      }
      else {
        element_1ebe = nullptr;
      }
      if (element_1ebe != nullptr) {
        puVar9 = element_1ebe;
        puVar5 = local_2bc;
        memmove(puVar5, puVar9, 0x25c); /* compiler REP MOVS byte copy */
      }
      pFVar13->count = 0;
      do {
        if (param_1 == 0) {
          FUN_006b5f80((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
          /* ST_CALLSITE[005A3730]: CALL 0x00402298; direct=00402298 PutDDXClip */
          PutDDXClip(0x13,0x5e,0,0,0x174,(byte *)0x175,'\x01',this_01->field_1E9A);
          this_01->field_002D = 0x28;
          *(dword *)&this_01->field_0x31 = this_01->field_1EBE->count;
          this_01->field_0035 = 1;
          FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
          this_01->field_002D = 0x20;
          if ((this_01->field_1EBE->count == 0) || (this_01->array_00BC[0xc].field_01EB == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          *(undefined4 *)&this_01->field_0x31 = uVar4;
          FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
          if (element_1ebe != nullptr) {
            uVar8 = 0;
            local_8 = this_01->field_1EBE->count;
            if (local_8 != 0) {
              if (local_8 == 0) {
                puVar5 = nullptr;
                goto LAB_005a37da;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                puVar5 = (uint *)((int)&this_01->field_1EBE->data->field_0000 +
                                 this_01->field_1EBE->elementSize * uVar8);
LAB_005a37da:
                if (puVar5 != nullptr) {
                  pbVar11 = local_290;
                  pbVar10 = (byte *)(puVar5 + 0xb);
                  do {
                    bVar1 = *pbVar10;
                    bVar12 = bVar1 < *pbVar11;
                    if (bVar1 != *pbVar11) {
LAB_005a380b:
                      iVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                      goto LAB_005a3810;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar10[1];
                    bVar12 = bVar1 < pbVar11[1];
                    if (bVar1 != pbVar11[1]) goto LAB_005a380b;
                    pbVar10 = pbVar10 + 2;
                    pbVar11 = pbVar11 + 2;
                  } while (bVar1 != 0);
                  iVar7 = 0;
LAB_005a3810:
                  if (iVar7 == 0) {
                    *(short *)&this_01->field_0x31 = (short)uVar8;
                    this_01->field_0037 = 1;
                    this_01->field_0035 = 1;
                    this_01->field_002D = 0x22;
                    FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
                    g_currentExceptionFrame = local_60.previous;
                    return;
                  }
                }
                uVar8 = uVar8 + 1;
                if (local_8 <= uVar8) {
                  g_currentExceptionFrame = local_60.previous;
                  return;
                }
              } while( true );
            }
          }
          g_currentExceptionFrame = local_60.previous;
          return;
        }
        uVar8 = this_01->field_1EC2;
        if (uVar8 == 0) {
          if (*param_2 == 4) {
            pFVar13 = this_01->field_1EBE;
            goto LAB_005a36e9;
          }
        }
        else if ((param_2[2] == uVar8) && (*param_2 == 4)) {
          if (uVar8 == 0x100) {
            if (this_01->field_1EC6 != -1) {
              if ((char)param_2[0x1f] != '\0') {
                Library::MSVCRT::_strncpy(local_1c,(char *)((int)param_2 + 0x7f),8);
                local_14 = 0;

                Library::MSVCRT::FUN_0072ee80(local_1c,"%08x");
                if (local_8 == this_01->field_1EC6) {
                  pFVar13 = this_01->field_1EBE;
                  goto LAB_005a36e9;
                }
              }
              goto LAB_005a36ee;
            }
            pFVar13 = this_01->field_1EBE;
          }
          else {
            pFVar13 = this_01->field_1EBE;
          }
LAB_005a36e9:

          Library::DKW::TBL::DArrayAppend((DArrayTy *)pFVar13,param_2);
        }
LAB_005a36ee:
        param_2 = param_2 + 0x97;
        param_1 = param_1 + -1;
      } while( true );
    }
    g_currentExceptionFrame = local_60.previous;

    iVar6 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xaf6,0,iVar3,"%s"
                               ,"FSGSTy::SetGameList");
    if (iVar6 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xaf6);
  }
  return;
}

