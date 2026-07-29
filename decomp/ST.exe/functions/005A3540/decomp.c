#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetGameList */

void __thiscall FSGSTy::SetGameList(FSGSTy *this,int param_1,int *param_2)

{
  byte bVar1;
  code *pcVar2;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar3;
  undefined4 uVar4;
  FSGSTy_field_1EBEElement *puVar5;
  int iVar5;
  uint uVar6;
  FSGSTy_field_1EBEElement *pFVar7;
  byte *pbVar8;
  uint *puVar9;
  byte *pbVar10;
  bool bVar11;
  FSGSTy_field_1EBEDArray *pFVar12;
  uint local_2bc [11];
  byte local_290 [560];
  InternalExceptionFrame local_60;
  char local_1c [8];
  undefined1 local_14;
  FSGSTy *local_10;
  FSGSTy_field_1EBEElement *element_1ebe;
  uint local_8;

  if ((this->field_1A5F == CASE_8) && (this->field_1EBE != (FSGSTy_field_1EBEDArray *)0x0)) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_10 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
    this_00 = g_cursorClass_00802A30;
    if (iVar3 == 0) {
      if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
        iVar3 = g_cursorClass_00802A30->field_00C9;
        iVar5 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        this_00->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_00,CASE_0,iVar5,iVar3);
        CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_00D2 = 0;
        this_00->field_04DF = -1;
      }
      this_01 = local_10;
      local_10->field_002D = 0x26;
      FUN_006e6080(local_10,2,local_10->field_1B20,(undefined4 *)&local_10->field_0x1d);
      pFVar12 = this_01->field_1EBE;
      if ((uint)*(ushort *)&this_01->field_0x31 < pFVar12->count) {
        element_1ebe = DArrayAt<FSGSTy_field_1EBEElement>(pFVar12, (uint)*(ushort *)&this_01->field_0x31);
      }
      else {
        element_1ebe = (FSGSTy_field_1EBEElement *)0x0;
      }
      if (element_1ebe != (FSGSTy_field_1EBEElement *)0x0) {
        pFVar7 = element_1ebe;
        puVar9 = local_2bc;
        for (iVar3 = 0x97; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar9 = pFVar7->field_0000;
          pFVar7 = (FSGSTy_field_1EBEElement *)&pFVar7->field_0004;
          puVar9 = puVar9 + 1;
        }
      }
      pFVar12->count = 0;
      do {
        if (param_1 == 0) {
          FUN_006b5f80((int *)g_ddxContext_008075A8,0x13,0x5e,0x174,0x175);
          PutDDXClip(0x13,0x5e,0,0,0x174,(byte *)0x175,'\x01',this_01->field_1E9A);
          this_01->field_002D = 0x28;
          *(dword *)&this_01->field_0x31 = this_01->field_1EBE->count;
          *(undefined2 *)&this_01->field_0x35 = 1;
          FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
          this_01->field_002D = 0x20;
          if ((this_01->field_1EBE->count == 0) || (this_01->field_1A6B == 0)) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
          *(undefined4 *)&this_01->field_0x31 = uVar4;
          FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
          if (element_1ebe != (FSGSTy_field_1EBEElement *)0x0) {
            uVar6 = 0;
            local_8 = this_01->field_1EBE->count;
            if (local_8 != 0) {
              if (local_8 == 0) {
                puVar5 = (FSGSTy_field_1EBEElement *)0x0;
                goto LAB_005a37da;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                puVar5 = (FSGSTy_field_1EBEElement *)
                         ((int)&this_01->field_1EBE->data->field_0000 +
                         this_01->field_1EBE->elementSize * uVar6);
LAB_005a37da:
                if (puVar5 != (FSGSTy_field_1EBEElement *)0x0) {
                  pbVar10 = local_290;
                  pbVar8 = (byte *)&puVar5->field_002C;
                  do {
                    bVar1 = *pbVar8;
                    bVar11 = bVar1 < *pbVar10;
                    if (bVar1 != *pbVar10) {
LAB_005a380b:
                      iVar3 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
                      goto LAB_005a3810;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar8[1];
                    bVar11 = bVar1 < pbVar10[1];
                    if (bVar1 != pbVar10[1]) goto LAB_005a380b;
                    pbVar8 = pbVar8 + 2;
                    pbVar10 = pbVar10 + 2;
                  } while (bVar1 != 0);
                  iVar3 = 0;
LAB_005a3810:
                  if (iVar3 == 0) {
                    *(short *)&this_01->field_0x31 = (short)uVar6;
                    *(undefined2 *)&this_01->field_0x37 = 1;
                    *(undefined2 *)&this_01->field_0x35 = 1;
                    this_01->field_002D = 0x22;
                    FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
                    g_currentExceptionFrame = local_60.previous;
                    return;
                  }
                }
                uVar6 = uVar6 + 1;
                if (local_8 <= uVar6) {
                  g_currentExceptionFrame = local_60.previous;
                  return;
                }
              } while( true );
            }
          }
          g_currentExceptionFrame = local_60.previous;
          return;
        }
        uVar6 = this_01->field_1EC2;
        if (uVar6 == 0) {
          if (*param_2 == 4) {
            pFVar12 = this_01->field_1EBE;
            goto LAB_005a36e9;
          }
        }
        else if ((param_2[2] == uVar6) && (*param_2 == 4)) {
          if (uVar6 == 0x100) {
            if (this_01->field_1EC6 != -1) {
              if ((char)param_2[0x1f] != '\0') {
                Library::MSVCRT::_strncpy(local_1c,(char *)((int)param_2 + 0x7f),8);
                local_14 = 0;
                Library::MSVCRT::FUN_0072ee80(local_1c,"%08x");
                if (local_8 == this_01->field_1EC6) {
                  pFVar12 = this_01->field_1EBE;
                  goto LAB_005a36e9;
                }
              }
              goto LAB_005a36ee;
            }
            pFVar12 = this_01->field_1EBE;
          }
          else {
            pFVar12 = this_01->field_1EBE;
          }
LAB_005a36e9:
          Library::DKW::TBL::FUN_006ae1c0(&pFVar12->flags,param_2);
        }
LAB_005a36ee:
        param_2 = param_2 + 0x97;
        param_1 = param_1 + -1;
      } while( true );
    }
    g_currentExceptionFrame = local_60.previous;
    iVar5 = ReportDebugMessage("E:\\__titans\\Start\\fsgs_obj.cpp",0xaf6,0,iVar3,"%s"
                               ,"FSGSTy::SetGameList");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\fsgs_obj.cpp",0xaf6);
  }
  return;
}

