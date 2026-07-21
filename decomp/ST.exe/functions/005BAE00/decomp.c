#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::NonePrivider

   [STSwitchEnumApplier] Switch target field_0065 uses
   /SubmarineTitans/Recovered/Enums/PrividerTy_field_0065State. Cases:
   CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5 */

void __thiscall PrividerTy::NonePrivider(PrividerTy *this,undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  MMsgTy *this_00;
  StartSystemTy *pSVar3;
  code *pcVar4;
  CursorClassTy *pCVar5;
  PrividerTy *this_01;
  short *psVar6;
  DWORD DVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  char *pcVar11;
  undefined4 *puVar12;
  UINT UVar13;
  char local_c8 [2];
  undefined1 local_c6;
  InternalExceptionFrame local_a0;
  undefined4 local_5c [8];
  int local_3c;
  char local_38;
  undefined4 local_37;
  undefined4 local_33;
  char local_2c;
  undefined4 local_2b;
  undefined4 local_27;
  PrividerTy *local_20;
  uint local_1c;
  short *local_18;
  int local_14;
  short *local_10;
  uint local_c;
  int local_8;

  local_8 = 1;
  local_20 = this;
  DVar7 = timeGetTime();
  this->field_0061 = DVar7;
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;
  iVar8 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
  this_01 = local_20;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0x1bc,0,iVar8,"%s"
                               ,"PrividerTy::NonePrivider");
    if (iVar9 == 0) {
      RaiseInternalException(iVar8,0,"E:\\__titans\\Start\\prov_obj.cpp",0x1bc);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(local_20->field_0065) {
  case CASE_1:
    if (local_20->field_1A71 == '\0') {
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    local_10 = (short *)0x0;
    if (local_20->field_1A6D == 0) {
      pcVar11 = local_c8;
      for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar11[0] = '\0';
        pcVar11[1] = '\0';
        pcVar11[2] = '\0';
        pcVar11[3] = '\0';
        pcVar11 = pcVar11 + 4;
      }
      pcVar11[0] = '\0';
      pcVar11[1] = '\0';
      local_c6 = 4;
      FUN_00715360(g_int_00811764,1,'\x1a',local_c8,0x26,1,0xffffffff);
    }
    iVar8 = this_01->field_1A6D + 1;
    this_01->field_1A6D = iVar8;
    if (iVar8 == 0xf) {
      this_01->field_1A6D = 0;
    }
    iVar8 = Library::Ourlib::CONNECT::FUN_00715630
                      (g_int_00811764,-1,&local_1c,&local_3c,&local_10,(uint *)0x0,-1,0);
    psVar6 = local_10;
    pCVar5 = PTR_00802a30;
    if (iVar8 != -0x4d) {
      if (iVar8 != 0) {
        if (iVar8 != 1) {
          g_currentExceptionFrame = local_a0.previous;
          return;
        }
        if (local_1c == 0x1a) {
          uVar2 = local_c >> 8;
          local_c = local_c & 0xffffff00;
          if (*local_10 == (short)((uint)DAT_00807dd5 >> 0x10)) {
            local_18 = local_10 + 1;
            if ((char)*local_18 == '\x01') {
              pcVar11 = (char *)((int)local_10 + 0xb);
              switch(*pcVar11) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              case '\x01':
                local_c = CONCAT31((int3)uVar2,1);
                local_14 = 0xe;
                break;
              case '\x02':
              case '\x03':
                wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&DAT_00807680,PTR_s_CUSTOM__0079c0bc);
                local_2c = *pcVar11;
                local_2b = *(undefined4 *)((int)psVar6 + 3);
                local_27 = 0;
                iVar8 = FUN_00725910(&DAT_0080f33a,"*.DKD",0,&LAB_00404e49,&local_2c,0);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = CONCAT31(local_c._1_3_,(iVar8 != -0x70) + '\x01');
                local_14 = (-(uint)(*pcVar11 != '\x02') & 2) + 0xd;
                break;
              case '\x05':
                wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s\\",&DAT_00807680,
                          PTR_s_SAVEGAME__0079c0b8,&DAT_00807ddd);
                local_38 = *pcVar11;
                local_37 = *(undefined4 *)((int)psVar6 + 3);
                local_33 = *(undefined4 *)((int)psVar6 + 7);
                iVar8 = FUN_00725910(&DAT_0080f33a,"*.DKD",0,&LAB_00404e49,&local_38,0);
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = CONCAT31(local_c._1_3_,iVar8 == -0x70);
                local_14 = 0x10;
              }
            }
            else if ((char)*local_18 != '\x03') goto LAB_005bb532;
            pCVar5 = PTR_00802a30;
            if ((char)*local_18 == '\x03') {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_c = CONCAT31(local_c._1_3_,2);
            }
            while ((local_c & 0xff) != 1) {
              if ((local_c & 0xff) == 2) {
                thunk_FUN_005b6350(this_01,0x6109,0,1);
                DAT_0080877e = 0;
                DAT_008087be = 0;
                CloseButtons(this_01,'\x01');
                this_00 = this_01->field_1A5B->field_02E6;
                goto joined_r0x005bb4e0;
              }
              /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
              if ((*(char *)((int)psVar6 + 0xd) == '\0') ||
                 (((char)*local_18 == '\x01' && (*(char *)((int)psVar6 + 0xb) == '\x05')))) {
                if (PTR_00802a30 != (CursorClassTy *)0x0) {
                  iVar8 = PTR_00802a30->field_00C9;
                  iVar9 = PTR_00802a30->field_00C5;
                  PTR_00802a30->field_0493 = 1;
                  pCVar5->field_0494 = 0xffff;
                  CursorClassTy::SetGCType(pCVar5,CASE_0,iVar9,iVar8);
                  CursorClassTy::DrawSprite(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
                  pCVar5->field_00D2 = 0;
                  pCVar5->field_04DF = 0xffffffff;
                }
                this_01->field_1A71 = 0;
                thunk_FUN_005dac60();
                UVar13 = 0x2523;
                goto LAB_005bb2c6;
              }
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_c = CONCAT31(local_c._1_3_,2);
            }
            thunk_FUN_005b6350(this_01,0x6121,local_14,0x11);
            DAT_0080877e = 0;
            if (*(char *)((int)psVar6 + 0xb) == '\x01') {
              DAT_008087be = 0;
            }
            CloseButtons(this_01,'\x01');
            this_00 = this_01->field_1A5B->field_02E6;
joined_r0x005bb4e0:
            if (this_00 != (MMsgTy *)0x0) {
              MMsgTy::HidePanel(this_00,1,0,1);
            }
          }
          else {
            if (PTR_00802a30 != (CursorClassTy *)0x0) {
              iVar8 = PTR_00802a30->field_00C9;
              iVar9 = PTR_00802a30->field_00C5;
              PTR_00802a30->field_0493 = 1;
              pCVar5->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar5,CASE_0,iVar9,iVar8);
              CursorClassTy::DrawSprite(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
              pCVar5->field_00D2 = 0;
              pCVar5->field_04DF = 0xffffffff;
            }
            this_01->field_1A71 = 0;
            thunk_FUN_005dac60();
            UVar13 = 0x2526;
LAB_005bb2c6:
            MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,UVar13,'\0',(undefined4 *)0x0,
                               (undefined4 *)0x0,(undefined4 *)0x0,0,0);
          }
        }
LAB_005bb532:
        this_01->field_1A69 = this_01->field_0061;
        if (local_10 != (short *)0x0) {
          FreeAndNull(&local_10);
          g_currentExceptionFrame = local_a0.previous;
          return;
        }
        g_currentExceptionFrame = local_a0.previous;
        return;
      }
      if (this_01->field_0061 - this_01->field_1A69 < 0x7531) {
        g_currentExceptionFrame = local_a0.previous;
        return;
      }
    }
    pSVar3 = this_01->field_1A5B;
    puVar12 = local_5c;
    for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + 1;
    }
    this_01->field_1A71 = 0;
    this_01->field_1A72 = 1;
    pCVar5 = PTR_00802a30;
    local_5c[4] = 0x6952;
    if (pSVar3->field_02E6 != (MMsgTy *)0x0) {
      if (PTR_00802a30 != (CursorClassTy *)0x0) {
        iVar8 = PTR_00802a30->field_00C9;
        iVar9 = PTR_00802a30->field_00C5;
        PTR_00802a30->field_0493 = 1;
        pCVar5->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar5,CASE_0,iVar9,iVar8);
        CursorClassTy::DrawSprite(pCVar5,pCVar5->field_00C5,pCVar5->field_00C9);
        pCVar5->field_00D2 = 0;
        pCVar5->field_04DF = 0xffffffff;
      }
      local_5c[2] = this_01->field_0008;
      local_5c[3] = 2;
      MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x2525,'\0',local_5c,(undefined4 *)0x0,
                         (undefined4 *)0x0,0,0);
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    (*this_01->vtable->GetMessage)(this_01,(int)local_5c);
    break;
  case CASE_3:
    if ((local_20->field_1C96 != (HoloTy *)0x0) &&
       (iVar8 = HoloTy::NextFas(local_20->field_1C96), iVar8 != 0)) {
      local_8 = 0;
    }
    if ((this_01->field_1C9A != (HoloTy *)0x0) &&
       (iVar8 = HoloTy::NextFas(this_01->field_1C9A), iVar8 != 0)) {
      local_8 = 0;
    }
    if ((PTR_0081176c->field_02E6 != (MMsgTy *)0x0) &&
       (PTR_0081176c->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_01->field_1C96 != (HoloTy *)0x0) {
        HoloTy::Done(this_01->field_1C96);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1C96);
        this_01->field_1C96 = (HoloTy *)0x0;
      }
      if (this_01->field_1C9A != (HoloTy *)0x0) {
        HoloTy::Done(this_01->field_1C9A);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1C9A);
        this_01->field_1C9A = (HoloTy *)0x0;
      }
      if (this_01->field_1A7B != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_01->field_1ABF,this_01->field_1A7B,0xfffffffe,this_01->field_1A93,
                   this_01->field_1A97);
      }
      if (this_01->field_1B0C != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_01->field_1B50,this_01->field_1B0C,0xfffffffe,this_01->field_1B24,
                   this_01->field_1B28);
      }
      if (this_01->field_1B9D != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_01->field_1BE1,this_01->field_1B9D,0xfffffffe,this_01->field_1BB5,
                   this_01->field_1BB9);
      }
      puVar10 = &this_01->field_1C2A;
      iVar8 = 0x16;
      do {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar10);
        puVar10 = puVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      if (this_01->field_1A5F == '\0') {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_01->field_1C8A);
      }
      this_01->field_0065 = CASE_1;
      CreateCtrls(this_01,'\0');
      PaintPrivider(this_01,'\0');
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    break;
  case CASE_4:
    if (local_20->field_1C96 != (HoloTy *)0x0) {
      iVar8 = HoloTy::NextFas(local_20->field_1C96);
      if (iVar8 == 0) {
        uVar2 = this_01->field_1C96->field_0003;
        if (-1 < (int)uVar2) {
          FUN_006b3af0(DAT_008075a8,uVar2);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_01->field_1C9A != (HoloTy *)0x0) {
      iVar8 = HoloTy::NextFas(this_01->field_1C9A);
      if (iVar8 == 0) {
        uVar2 = this_01->field_1C9A->field_0003;
        if (-1 < (int)uVar2) {
          FUN_006b3af0(DAT_008075a8,uVar2);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((PTR_0081176c->field_02E6 != (MMsgTy *)0x0) &&
       (PTR_0081176c->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      bVar1 = this_01->field_1A5A;
      this_01->field_0065 = 2;
      if ((bVar1 != 0xff) && (*(int *)(&this_01->field_0xd1 + (uint)bVar1 * 0x1fb) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_01->field_0xc1 + (uint)bVar1 * 0x1fb));
        g_currentExceptionFrame = local_a0.previous;
        return;
      }
    }
    break;
  case CASE_5:
    if (local_20->field_1C9A != (HoloTy *)0x0) {
      iVar8 = HoloTy::NextFas(local_20->field_1C9A);
      if (iVar8 == 0) {
        if ((this_01->field_1A60 == '\x01') &&
           (uVar2 = this_01->field_1C9A->field_0003, -1 < (int)uVar2)) {
          FUN_006b3af0(DAT_008075a8,uVar2);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((PTR_0081176c->field_02E6 != (MMsgTy *)0x0) &&
       (PTR_0081176c->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_01->field_1C9A != (HoloTy *)0x0) {
        HoloTy::Done(this_01->field_1C9A);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1C9A);
        this_01->field_1C9A = (HoloTy *)0x0;
      }
      if (this_01->field_1A60 == '\0') {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_01->field_1C8A);
      }
      SetMode(this_01,this_01->field_1A60,'\0');
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_a0.previous;
  return;
}

