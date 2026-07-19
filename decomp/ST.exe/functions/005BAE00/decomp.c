
/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::NonePrivider */

void __thiscall PrividerTy::NonePrivider(PrividerTy *this,undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  MMsgTy *this_00;
  StartSystemTy *pSVar5;
  code *pcVar6;
  CursorClassTy *pCVar7;
  PrividerTy *this_01;
  short *psVar8;
  DWORD DVar9;
  int iVar10;
  int iVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar12;
  char *pcVar13;
  undefined4 *puVar14;
  UINT UVar15;
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
  DVar9 = timeGetTime();
  this->field_0061 = DVar9;
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;
  iVar10 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_20;
  if (iVar10 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0x1bc,0,iVar10,
                                &DAT_007a4ccc,s_PrividerTy__NonePrivider_007cce18);
    if (iVar11 == 0) {
      RaiseInternalException(iVar10,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0x1bc);
      return;
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  switch(local_20->field_0065) {
  case 1:
    if (local_20->field_1A71 == '\0') {
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    local_10 = (short *)0x0;
    if (local_20->field_1A6D == 0) {
      pcVar13 = local_c8;
      for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
        pcVar13[0] = '\0';
        pcVar13[1] = '\0';
        pcVar13[2] = '\0';
        pcVar13[3] = '\0';
        pcVar13 = pcVar13 + 4;
      }
      pcVar13[0] = '\0';
      pcVar13[1] = '\0';
      local_c6 = 4;
      FUN_00715360(DAT_00811764,1,'\x1a',local_c8,0x26,1,0xffffffff);
    }
    iVar10 = this_01->field_1A6D + 1;
    this_01->field_1A6D = iVar10;
    if (iVar10 == 0xf) {
      this_01->field_1A6D = 0;
    }
    iVar10 = Library::Ourlib::CONNECT::FUN_00715630
                       (DAT_00811764,-1,&local_1c,&local_3c,&local_10,(uint *)0x0,-1,0);
    psVar8 = local_10;
    pCVar7 = DAT_00802a30;
    if (iVar10 != -0x4d) {
      if (iVar10 != 0) {
        if (iVar10 != 1) {
          g_currentExceptionFrame = local_a0.previous;
          return;
        }
        if (local_1c == 0x1a) {
          uVar2 = local_c >> 8;
          local_c = local_c & 0xffffff00;
          if (*local_10 == (short)((uint)DAT_00807dd5 >> 0x10)) {
            local_18 = local_10 + 1;
            if ((char)*local_18 == '\x01') {
              pcVar13 = (char *)((int)local_10 + 0xb);
              switch(*pcVar13) {
              case '\x01':
                local_c = CONCAT31((int3)uVar2,1);
                local_14 = 0xe;
                break;
              case '\x02':
              case '\x03':
                wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,PTR_s_CUSTOM__0079c0bc);
                local_2c = *pcVar13;
                local_2b = *(undefined4 *)((int)psVar8 + 3);
                local_27 = 0;
                iVar10 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                      &local_2c,0);
                local_c = CONCAT31(local_c._1_3_,(iVar10 != -0x70) + '\x01');
                local_14 = (-(uint)(*pcVar13 != '\x02') & 2) + 0xd;
                break;
              case '\x05':
                wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__007cce38,&DAT_00807680,
                          PTR_s_SAVEGAME__0079c0b8,&DAT_00807ddd);
                local_38 = *pcVar13;
                local_37 = *(undefined4 *)((int)psVar8 + 3);
                local_33 = *(undefined4 *)((int)psVar8 + 7);
                iVar10 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                      &local_38,0);
                local_c = CONCAT31(local_c._1_3_,iVar10 == -0x70);
                local_14 = 0x10;
              }
            }
            else if ((char)*local_18 != '\x03') goto LAB_005bb532;
            pCVar7 = DAT_00802a30;
            if ((char)*local_18 == '\x03') {
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
              if ((*(char *)((int)psVar8 + 0xd) == '\0') ||
                 (((char)*local_18 == '\x01' && (*(char *)((int)psVar8 + 0xb) == '\x05')))) {
                if (DAT_00802a30 != (CursorClassTy *)0x0) {
                  uVar3 = DAT_00802a30->field_00C9;
                  uVar4 = DAT_00802a30->field_00C5;
                  DAT_00802a30->field_0493 = 1;
                  pCVar7->field_0494 = 0xffff;
                  CursorClassTy::SetGCType(pCVar7,CASE_0,uVar4,uVar3);
                  CursorClassTy::DrawSprite(pCVar7,pCVar7->field_00C5,pCVar7->field_00C9);
                  pCVar7->field_0xd2 = 0;
                  *(undefined4 *)&pCVar7->field_0x4df = 0xffffffff;
                }
                this_01->field_1A71 = 0;
                thunk_FUN_005dac60();
                UVar15 = 0x2523;
                goto LAB_005bb2c6;
              }
              local_c = CONCAT31(local_c._1_3_,2);
            }
            thunk_FUN_005b6350(this_01,0x6121,local_14,0x11);
            DAT_0080877e = 0;
            if (*(char *)((int)psVar8 + 0xb) == '\x01') {
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
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar3 = DAT_00802a30->field_00C9;
              uVar4 = DAT_00802a30->field_00C5;
              DAT_00802a30->field_0493 = 1;
              pCVar7->field_0494 = 0xffff;
              CursorClassTy::SetGCType(pCVar7,CASE_0,uVar4,uVar3);
              CursorClassTy::DrawSprite(pCVar7,pCVar7->field_00C5,pCVar7->field_00C9);
              pCVar7->field_0xd2 = 0;
              *(undefined4 *)&pCVar7->field_0x4df = 0xffffffff;
            }
            this_01->field_1A71 = 0;
            thunk_FUN_005dac60();
            UVar15 = 0x2526;
LAB_005bb2c6:
            MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,UVar15,'\0',(undefined4 *)0x0,
                               (undefined4 *)0x0,(undefined4 *)0x0,0,0);
          }
        }
LAB_005bb532:
        this_01->field_1A69 = this_01->field_0061;
        if (local_10 != (short *)0x0) {
          FUN_006ab060(&local_10);
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
    pSVar5 = this_01->field_1A5B;
    puVar14 = local_5c;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    this_01->field_1A71 = 0;
    this_01->field_1A72 = 1;
    pCVar7 = DAT_00802a30;
    local_5c[4] = 0x6952;
    if (pSVar5->field_02E6 != (MMsgTy *)0x0) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar3 = DAT_00802a30->field_00C9;
        uVar4 = DAT_00802a30->field_00C5;
        DAT_00802a30->field_0493 = 1;
        pCVar7->field_0494 = 0xffff;
        CursorClassTy::SetGCType(pCVar7,CASE_0,uVar4,uVar3);
        CursorClassTy::DrawSprite(pCVar7,pCVar7->field_00C5,pCVar7->field_00C9);
        pCVar7->field_0xd2 = 0;
        *(undefined4 *)&pCVar7->field_0x4df = 0xffffffff;
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
  case 3:
    if ((local_20->field_1C96 != (HoloTy *)0x0) &&
       (iVar10 = HoloTy::NextFas(local_20->field_1C96), iVar10 != 0)) {
      local_8 = 0;
    }
    if ((this_01->field_1C9A != (HoloTy *)0x0) &&
       (iVar10 = HoloTy::NextFas(this_01->field_1C9A), iVar10 != 0)) {
      local_8 = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_01->field_1C96 != (HoloTy *)0x0) {
        HoloTy::Done(this_01->field_1C96);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_01->field_1C96);
        this_01->field_1C96 = (HoloTy *)0x0;
      }
      if (this_01->field_1C9A != (HoloTy *)0x0) {
        HoloTy::Done(this_01->field_1C9A);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_01->field_1C9A);
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
      puVar12 = &this_01->field_1C2A;
      iVar10 = 0x16;
      do {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar12);
        puVar12 = puVar12 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (this_01->field_1A5F == '\0') {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_01->field_1C8A);
      }
      this_01->field_0065 = 1;
      CreateCtrls(this_01,'\0');
      PaintPrivider(this_01,'\0');
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    break;
  case 4:
    if (local_20->field_1C96 != (HoloTy *)0x0) {
      iVar10 = HoloTy::NextFas(local_20->field_1C96);
      if (iVar10 == 0) {
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
      iVar10 = HoloTy::NextFas(this_01->field_1C9A);
      if (iVar10 == 0) {
        uVar2 = this_01->field_1C9A->field_0003;
        if (-1 < (int)uVar2) {
          FUN_006b3af0(DAT_008075a8,uVar2);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
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
  case 5:
    if (local_20->field_1C9A != (HoloTy *)0x0) {
      iVar10 = HoloTy::NextFas(local_20->field_1C9A);
      if (iVar10 == 0) {
        if ((this_01->field_1A60 == '\x01') &&
           (uVar2 = this_01->field_1C9A->field_0003, -1 < (int)uVar2)) {
          FUN_006b3af0(DAT_008075a8,uVar2);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_01->field_1C9A != (HoloTy *)0x0) {
        HoloTy::Done(this_01->field_1C9A);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_01->field_1C9A);
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

