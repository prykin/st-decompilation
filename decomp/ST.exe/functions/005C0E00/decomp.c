#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::SetCtrl */

void __thiscall MReportTy::SetCtrl(MReportTy *this)

{
  undefined1 *puVar1;
  DArrayTy *pDVar2;
  code *pcVar3;
  short sVar4;
  int iVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  undefined4 uVar8;
  int iVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  cMf32 *extraout_ECX;
  cMf32 *this_00;
  MReportTy *this_01;
  cMf32 *this_02;
  int *piVar10;
  undefined4 *puVar11;
  InternalExceptionFrame local_98;
  InternalExceptionFrame local_54;
  undefined4 *local_10;
  MReportTy *local_c;
  cMf32 *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
  this_01 = local_c;
  if (iVar5 == 0) {
    if (local_c->field_008F != 0) {
      StartSystemTy::sub_006E56B0(local_c->field_000C,local_c->field_008F);
      this_01->field_008F = 0;
      FUN_006b5f80(DAT_008075a8,0x262,0x226,0x91,0x28);
      PutDDXClip(0x262,0x226,0x262,0x226,0x91,(byte *)0x28,'\x01',(BITMAPINFO *)this_01->field_005D)
      ;
    }
    if (this_01->field_009B != 0) {
      StartSystemTy::sub_006E56B0(this_01->field_000C,this_01->field_009B);
      this_01->field_009B = 0;
      FUN_006b5f80(DAT_008075a8,0x1e,0x1ea,300,0x1e);
      PutDDXClip(0x1e,0x1ea,0x1e,0x1ea,300,(byte *)0x1e,'\x01',(BITMAPINFO *)this_01->field_005D);
    }
    FUN_006b5f80(DAT_008075a8,0x174,0x1a9,400,0x32);
    PutDDXClip(0x174,0x1a9,0x174,0x1a9,400,(byte *)0x32,'\x01',(BITMAPINFO *)this_01->field_005D);
    if ((this_01->field_0066 == '\x01') &&
       (this_01->field_0067 = 0, (&this_01->field_0347)[(byte)this_01->field_006A]->count != 0)) {
      local_8 = (cMf32 *)0x0;
      wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s\\%s",&DAT_00807680,PTR_s_SAVEGAME__0079c0d4,
                &DAT_00807ddd,PTR_s_PL_LOG_0079c0d8);
      local_98.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_98;
      iVar5 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0);
      if (iVar5 == 0) {
        local_8 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0)
        ;
      }
      this_02 = local_8;
      this_01 = local_c;
      g_currentExceptionFrame = local_98.previous;
      if (local_8 != (cMf32 *)0x0) {
        local_10 = &DAT_0080c522;
        pDVar2 = (&local_c->field_0347)[(byte)local_c->field_006A];
        if (local_c->field_006B < pDVar2->count) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar2, local_c->field_006B) (runtime stride) */
          puVar6 = (undefined4 *)(pDVar2->elementSize * local_c->field_006B + (int)pDVar2->data);
        }
        else {
          puVar6 = (undefined4 *)0x0;
        }
        wsprintfA((LPSTR)&DAT_0080f33a,"%s%01d%02d",PTR_DAT_0079c0dc,
                  (byte)local_c->field_006A + 1,*puVar6);
        puVar7 = cMf32::RecGet(this_02,0xc,(char *)&DAT_0080f33a,(int *)&local_10,0);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        this_00 = extraout_ECX;
        if (puVar7 != (ushort *)0x0) {
          this_01->field_0067 = 1;
          puVar6 = &DAT_0080c967;
          puVar11 = &DAT_008087b6;
          for (iVar5 = 0x666; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar11 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar11 = puVar11 + 1;
          }
          *(undefined1 *)puVar11 = *(undefined1 *)puVar6;
          this_00 = (cMf32 *)0x0;
          this_02 = local_8;
        }
        cMf32::delete(this_00,this_02);
      }
    }
    puVar1 = &this_01->field_0x1d;
    puVar6 = (undefined4 *)puVar1;
    for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    this_01->field_002D = 0x23;
    iVar5 = 0;
    do {
      *(short *)&this_01->field_0x31 = (short)iVar5 + 1;
      if (iVar5 == 0) {
        sVar4 = 1;
      }
      else if (this_01->field_0067 == '\0') {
        sVar4 = 2;
      }
      else {
        sVar4 = (((int)(DAT_0080c83e + 2) <= iVar5) - 1 & 0xfffe) + 2;
      }
      *(short *)&this_01->field_0x33 = sVar4;
      FUN_006e6080(this_01,2,this_01->field_009F,(undefined4 *)puVar1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 9);
    if (this_01->field_0067 == '\0') {
      this_01->field_002D = 0x20;
      *(undefined4 *)&this_01->field_0x31 = 0;
      FUN_006e6080(this_01,2,this_01->field_008F,(undefined4 *)puVar1);
    }
    else {
      iVar5 = 0;
      this_01->field_0069 = 0;
      this_01->field_02A3 = 0;
      if (DAT_0080c83e != 0) {
        piVar10 = &DAT_0080c947;
        do {
          if (this_01->field_02A3 < *piVar10) {
            this_01->field_02A3 = *piVar10;
          }
          iVar5 = iVar5 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar5 < (int)(uint)DAT_0080c83e);
      }
      if (this_01->field_02A3 < DAT_0080c963) {
        this_01->field_02A3 = DAT_0080c963;
      }
      uVar8 = CreateBut(this_01,1,1,0x262,0x226,0x91,0x28,0x6200,0x6212);
      this_01->field_008F = uVar8;
      if (this_01->field_0066 == '\x01') {
        uVar8 = CreateBut(this_01,1,1,0x1e,0x1ea,300,0x1e,0x6203,0x6215);
        this_01->field_009B = uVar8;
      }
    }
    this_01->field_0068 = 1;
    SetCtrl(this_01,1);
    this_01->field_002D = 5;
    FUN_006e6080(this_01,0xf,0,(undefined4 *)&this_01->field_0x1d);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar9 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x30e,0,iVar5,"%s",
                             "MReportTy::SetCtrl");
  if (iVar9 == 0) {
    RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x30e);
    return;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

