
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::SetCtrl */

void __thiscall MReportTy::SetCtrl(MReportTy *this)

{
  undefined1 *puVar1;
  code *pcVar2;
  short sVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 uVar6;
  int iVar7;
  cMf32 *extraout_ECX;
  cMf32 *this_00;
  MReportTy *this_01;
  undefined4 unaff_ESI;
  cMf32 *this_02;
  int *piVar8;
  void *unaff_EDI;
  undefined4 *puVar9;
  undefined4 *puVar10;
  char *pcVar11;
  InternalExceptionFrame local_98;
  InternalExceptionFrame local_54;
  undefined4 *local_10;
  MReportTy *local_c;
  cMf32 *local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_c;
  if (iVar4 == 0) {
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
       (this_01->field_0067 = 0,
       *(int *)((&this_01->field_0347)[(byte)this_01->field_006A] + 0xc) != 0)) {
      pcVar11 = s__s_s_s__s_007ca1ec;
      puVar10 = &DAT_0080f33a;
      local_8 = (cMf32 *)0x0;
      wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__s_007ca1ec,&DAT_00807680,PTR_s_SAVEGAME__0079c0d4,
                &DAT_00807ddd,PTR_s_PL_LOG_0079c0d8);
      local_98.previous = g_currentExceptionFrame;
      g_currentExceptionFrame = &local_98;
      iVar4 = Library::MSVCRT::__setjmp3(local_98.jumpBuffer,0,puVar10,pcVar11);
      if (iVar4 == 0) {
        local_8 = (cMf32 *)Library::Ourlib::MF32INT::FUN_006f0ec0(0x345,(byte *)&DAT_0080f33a,0,0,0)
        ;
      }
      this_02 = local_8;
      this_01 = local_c;
      g_currentExceptionFrame = local_98.previous;
      if (local_8 != (cMf32 *)0x0) {
        local_10 = &DAT_0080c522;
        iVar4 = (&local_c->field_0347)[(byte)local_c->field_006A];
        if ((uint)local_c->field_006B < *(uint *)(iVar4 + 0xc)) {
          puVar10 = (undefined4 *)
                    (*(int *)(iVar4 + 8) * local_c->field_006B + *(int *)(iVar4 + 0x1c));
        }
        else {
          puVar10 = (undefined4 *)0x0;
        }
        wsprintfA((LPSTR)&DAT_0080f33a,s__s_01d_02d_007cd074,PTR_DAT_0079c0dc,
                  (byte)local_c->field_006A + 1,*puVar10);
        puVar5 = cMf32::RecGet(this_02,0xc,(char *)&DAT_0080f33a,(int *)&local_10,0);
        this_00 = extraout_ECX;
        if (puVar5 != (ushort *)0x0) {
          this_01->field_0067 = 1;
          puVar10 = &DAT_0080c967;
          puVar9 = &DAT_008087b6;
          for (iVar4 = 0x666; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar9 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar9 = puVar9 + 1;
          }
          *(undefined1 *)puVar9 = *(undefined1 *)puVar10;
          this_00 = (cMf32 *)0x0;
          this_02 = local_8;
        }
        cMf32::delete(this_00,this_02);
      }
    }
    puVar1 = &this_01->field_0x1d;
    puVar10 = (undefined4 *)puVar1;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    this_01->field_002D = 0x23;
    iVar4 = 0;
    do {
      *(short *)&this_01->field_0x31 = (short)iVar4 + 1;
      if (iVar4 == 0) {
        sVar3 = 1;
      }
      else if (this_01->field_0067 == '\0') {
        sVar3 = 2;
      }
      else {
        sVar3 = (((int)(DAT_0080c83e + 2) <= iVar4) - 1 & 0xfffe) + 2;
      }
      this_01->field_0033 = sVar3;
      FUN_006e6080(this_01,2,this_01->field_009F,(undefined4 *)puVar1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 9);
    if (this_01->field_0067 == '\0') {
      this_01->field_002D = 0x20;
      *(undefined4 *)&this_01->field_0x31 = 0;
      FUN_006e6080(this_01,2,this_01->field_008F,(undefined4 *)puVar1);
    }
    else {
      iVar4 = 0;
      this_01->field_0069 = 0;
      this_01->field_02A3 = 0;
      if (DAT_0080c83e != 0) {
        piVar8 = &DAT_0080c947;
        do {
          if ((int)this_01->field_02A3 < *piVar8) {
            this_01->field_02A3 = *piVar8;
          }
          iVar4 = iVar4 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar4 < (int)(uint)DAT_0080c83e);
      }
      if ((int)this_01->field_02A3 < DAT_0080c963) {
        this_01->field_02A3 = DAT_0080c963;
      }
      uVar6 = CreateBut(this_01,1,1,0x262,0x226,0x91,0x28,0x6200,0x6212);
      this_01->field_008F = uVar6;
      if (this_01->field_0066 == '\x01') {
        uVar6 = CreateBut(this_01,1,1,0x1e,0x1ea,300,0x1e,0x6203,0x6215);
        this_01->field_009B = uVar6;
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
  iVar7 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x30e,0,iVar4,&DAT_007a4ccc,
                             s_MReportTy__SetCtrl_007cd05c);
  if (iVar7 == 0) {
    RaiseInternalException(iVar4,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0x30e);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

