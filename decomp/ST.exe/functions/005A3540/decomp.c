#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetGameList */

void __thiscall FSGSTy::SetGameList(FSGSTy *this,int param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  code *pcVar3;
  CursorClassTy *this_00;
  FSGSTy *this_01;
  int iVar4;
  undefined4 uVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  bool bVar13;
  DArrayTy *pDVar14;
  undefined4 local_2bc [11];
  byte local_290 [560];
  InternalExceptionFrame local_60;
  char local_1c [8];
  undefined1 local_14;
  FSGSTy *local_10;
  undefined4 *local_c;
  uint local_8;

  if ((this->field_1A5F == CASE_8) && (this->field_1EBE != (DArrayTy *)0x0)) {
    local_60.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_60;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_60.jumpBuffer,0);
    this_00 = PTR_00802a30;
    if (iVar4 == 0) {
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        uVar5 = PTR_00802a30->field_00C9;
        uVar2 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 1;
        this_00->field_0494 = 0xffff;
        CursorClassTy::SetGCType(this_00,CASE_0,uVar2,uVar5);
        CursorClassTy::DrawSprite(this_00,this_00->field_00C5,this_00->field_00C9);
        this_00->field_0xd2 = 0;
        *(undefined4 *)&this_00->field_0x4df = 0xffffffff;
      }
      this_01 = local_10;
      local_10->field_002D = 0x26;
      FUN_006e6080(local_10,2,local_10->field_1B20,(undefined4 *)&local_10->field_0x1d);
      pDVar14 = this_01->field_1EBE;
      if ((uint)*(ushort *)&this_01->field_0x31 < pDVar14->count) {
        /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar14, (uint)*(ushort *)&this_01->field_0x31) (runtime stride) */
        local_c = (undefined4 *)
                  (pDVar14->elementSize * (uint)*(ushort *)&this_01->field_0x31 + (int)pDVar14->data
                  );
      }
      else {
        local_c = (undefined4 *)0x0;
      }
      if (local_c != (undefined4 *)0x0) {
        puVar9 = local_c;
        puVar11 = local_2bc;
        for (iVar4 = 0x97; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      pDVar14->count = 0;
      do {
        if (param_1 == 0) {
          FUN_006b5f80(DAT_008075a8,0x13,0x5e,0x174,0x175);
          PutDDXClip(0x13,0x5e,0,0,0x174,(byte *)0x175,'\x01',(BITMAPINFO *)this_01->field_1E9A);
          this_01->field_002D = 0x28;
          *(dword *)&this_01->field_0x31 = this_01->field_1EBE->count;
          *(undefined2 *)&this_01->field_0x35 = 1;
          FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
          this_01->field_002D = 0x20;
          if ((this_01->field_1EBE->count == 0) || (this_01->field_1A6B == 0)) {
            uVar5 = 0;
          }
          else {
            uVar5 = 1;
          }
          *(undefined4 *)&this_01->field_0x31 = uVar5;
          FUN_006e6080(this_01,2,this_01->field_1B20,(undefined4 *)&this_01->field_0x1d);
          if (local_c != (undefined4 *)0x0) {
            uVar8 = 0;
            local_8 = this_01->field_1EBE->count;
            if (local_8 != 0) {
              if (local_8 == 0) {
                pvVar6 = (void *)0x0;
                goto LAB_005a37da;
              }
              do {
                /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
                pvVar6 = (void *)(this_01->field_1EBE->elementSize * uVar8 +
                                 (int)this_01->field_1EBE->data);
LAB_005a37da:
                if (pvVar6 != (void *)0x0) {
                  pbVar12 = local_290;
                  pbVar10 = (byte *)((int)pvVar6 + 0x2c);
                  do {
                    bVar1 = *pbVar10;
                    bVar13 = bVar1 < *pbVar12;
                    if (bVar1 != *pbVar12) {
LAB_005a380b:
                      iVar4 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                      goto LAB_005a3810;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar10[1];
                    bVar13 = bVar1 < pbVar12[1];
                    if (bVar1 != pbVar12[1]) goto LAB_005a380b;
                    pbVar10 = pbVar10 + 2;
                    pbVar12 = pbVar12 + 2;
                  } while (bVar1 != 0);
                  iVar4 = 0;
LAB_005a3810:
                  if (iVar4 == 0) {
                    *(short *)&this_01->field_0x31 = (short)uVar8;
                    *(undefined2 *)&this_01->field_0x37 = 1;
                    *(undefined2 *)&this_01->field_0x35 = 1;
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
        iVar4 = this_01->field_1EC2;
        if (iVar4 == 0) {
          if (*param_2 == 4) {
            pDVar14 = this_01->field_1EBE;
            goto LAB_005a36e9;
          }
        }
        else if ((param_2[2] == iVar4) && (*param_2 == 4)) {
          if (iVar4 == 0x100) {
            if (this_01->field_1EC6 != -1) {
              if ((char)param_2[0x1f] != '\0') {
                Library::MSVCRT::_strncpy(local_1c,(char *)((int)param_2 + 0x7f),8);
                local_14 = 0;
                Library::MSVCRT::FUN_0072ee80(local_1c,&DAT_007cc584);
                if (local_8 == this_01->field_1EC6) {
                  pDVar14 = this_01->field_1EBE;
                  goto LAB_005a36e9;
                }
              }
              goto LAB_005a36ee;
            }
            pDVar14 = this_01->field_1EBE;
          }
          else {
            pDVar14 = this_01->field_1EBE;
          }
LAB_005a36e9:
          Library::DKW::TBL::FUN_006ae1c0(&pDVar14->flags,param_2);
        }
LAB_005a36ee:
        param_2 = param_2 + 0x97;
        param_1 = param_1 + -1;
      } while( true );
    }
    g_currentExceptionFrame = local_60.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xaf6,0,iVar4,&DAT_007a4ccc
                               ,s_FSGSTy__SetGameList_007cc56c);
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0xaf6);
  }
  return;
}

