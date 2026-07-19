
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
  code *pcVar5;
  CursorClassTy *pCVar6;
  PrividerTy *this_01;
  short *psVar7;
  DWORD DVar8;
  int iVar9;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar11;
  char *pcVar12;
  undefined4 *puVar13;
  UINT UVar14;
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
  DVar8 = timeGetTime();
  this->field_0061 = DVar8;
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;
  iVar9 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_20;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_a0.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Start_prov_obj_cpp_007ccd28,0x1bc,0,iVar9,
                                &DAT_007a4ccc,s_PrividerTy__NonePrivider_007cce18);
    if (iVar10 == 0) {
      RaiseInternalException(iVar9,0,s_E____titans_Start_prov_obj_cpp_007ccd28,0x1bc);
      return;
    }
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  switch(local_20->field_0x65) {
  case 1:
    if (local_20->field_0x1a71 == '\0') {
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    local_10 = (short *)0x0;
    if (*(int *)&local_20->field_0x1a6d == 0) {
      pcVar12 = local_c8;
      for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
        pcVar12[0] = '\0';
        pcVar12[1] = '\0';
        pcVar12[2] = '\0';
        pcVar12[3] = '\0';
        pcVar12 = pcVar12 + 4;
      }
      pcVar12[0] = '\0';
      pcVar12[1] = '\0';
      local_c6 = 4;
      FUN_00715360(DAT_00811764,1,'\x1a',local_c8,0x26,1,0xffffffff);
    }
    iVar9 = *(int *)&this_01->field_0x1a6d + 1;
    *(int *)&this_01->field_0x1a6d = iVar9;
    if (iVar9 == 0xf) {
      *(undefined4 *)&this_01->field_0x1a6d = 0;
    }
    iVar9 = FUN_00715630(DAT_00811764,-1,&local_1c,&local_3c,&local_10,(uint *)0x0,-1,0);
    psVar7 = local_10;
    pCVar6 = DAT_00802a30;
    if (iVar9 != -0x4d) {
      if (iVar9 != 0) {
        if (iVar9 != 1) {
          g_currentExceptionFrame = local_a0.previous;
          return;
        }
        if (local_1c == 0x1a) {
          uVar2 = local_c >> 8;
          local_c = local_c & 0xffffff00;
          if (*local_10 == (short)((uint)DAT_00807dd5 >> 0x10)) {
            local_18 = local_10 + 1;
            if ((char)*local_18 == '\x01') {
              pcVar12 = (char *)((int)local_10 + 0xb);
              switch(*pcVar12) {
              case '\x01':
                local_c = CONCAT31((int3)uVar2,1);
                local_14 = 0xe;
                break;
              case '\x02':
              case '\x03':
                wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,PTR_s_CUSTOM__0079c0bc);
                local_2c = *pcVar12;
                local_2b = *(undefined4 *)((int)psVar7 + 3);
                local_27 = 0;
                iVar9 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                     &local_2c,0);
                local_c = CONCAT31(local_c._1_3_,(iVar9 != -0x70) + '\x01');
                local_14 = (-(uint)(*pcVar12 != '\x02') & 2) + 0xd;
                break;
              case '\x05':
                wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__007cce38,&DAT_00807680,
                          PTR_s_SAVEGAME__0079c0b8,&DAT_00807ddd);
                local_38 = *pcVar12;
                local_37 = *(undefined4 *)((int)psVar7 + 3);
                local_33 = *(undefined4 *)((int)psVar7 + 7);
                iVar9 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                     &local_38,0);
                local_c = CONCAT31(local_c._1_3_,iVar9 == -0x70);
                local_14 = 0x10;
              }
            }
            else if ((char)*local_18 != '\x03') goto LAB_005bb532;
            pCVar6 = DAT_00802a30;
            if ((char)*local_18 == '\x03') {
              local_c = CONCAT31(local_c._1_3_,2);
            }
            while ((local_c & 0xff) != 1) {
              if ((local_c & 0xff) == 2) {
                thunk_FUN_005b6350(this_01,0x6109,0,1);
                DAT_0080877e = 0;
                DAT_008087be = 0;
                CloseButtons(this_01,'\x01');
                this_00 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
                goto joined_r0x005bb4e0;
              }
              if ((*(char *)((int)psVar7 + 0xd) == '\0') ||
                 (((char)*local_18 == '\x01' && (*(char *)((int)psVar7 + 0xb) == '\x05')))) {
                if (DAT_00802a30 != (CursorClassTy *)0x0) {
                  uVar3 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
                  uVar4 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
                  DAT_00802a30[0xb].field_0x47 = 1;
                  *(undefined2 *)&pCVar6[0xb].field_0x48 = 0xffff;
                  CursorClassTy::SetGCType(pCVar6,CASE_0,uVar4,uVar3);
                  CursorClassTy::DrawSprite
                            (pCVar6,*(int *)((int)&pCVar6[1].field_0060 + 1),
                             *(int *)&pCVar6[2].field_0x1);
                  pCVar6[2].field_0xa = 0;
                  *(undefined4 *)&pCVar6[0xc].field_0x2f = 0xffffffff;
                }
                this_01->field_0x1a71 = 0;
                thunk_FUN_005dac60();
                UVar14 = 0x2523;
                goto LAB_005bb2c6;
              }
              local_c = CONCAT31(local_c._1_3_,2);
            }
            thunk_FUN_005b6350(this_01,0x6121,local_14,0x11);
            DAT_0080877e = 0;
            if (*(char *)((int)psVar7 + 0xb) == '\x01') {
              DAT_008087be = 0;
            }
            CloseButtons(this_01,'\x01');
            this_00 = *(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6);
joined_r0x005bb4e0:
            if (this_00 != (MMsgTy *)0x0) {
              MMsgTy::HidePanel(this_00,1,0,1);
            }
          }
          else {
            if (DAT_00802a30 != (CursorClassTy *)0x0) {
              uVar3 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
              uVar4 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
              DAT_00802a30[0xb].field_0x47 = 1;
              *(undefined2 *)&pCVar6[0xb].field_0x48 = 0xffff;
              CursorClassTy::SetGCType(pCVar6,CASE_0,uVar4,uVar3);
              CursorClassTy::DrawSprite
                        (pCVar6,*(int *)((int)&pCVar6[1].field_0060 + 1),
                         *(int *)&pCVar6[2].field_0x1);
              pCVar6[2].field_0xa = 0;
              *(undefined4 *)&pCVar6[0xc].field_0x2f = 0xffffffff;
            }
            this_01->field_0x1a71 = 0;
            thunk_FUN_005dac60();
            UVar14 = 0x2526;
LAB_005bb2c6:
            MMsgTy::SetMessage(*(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6),UVar14,'\0',
                               (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
          }
        }
LAB_005bb532:
        *(undefined4 *)&this_01->field_0x1a69 = this_01->field_0061;
        if (local_10 != (short *)0x0) {
          FUN_006ab060(&local_10);
          g_currentExceptionFrame = local_a0.previous;
          return;
        }
        g_currentExceptionFrame = local_a0.previous;
        return;
      }
      if ((uint)(this_01->field_0061 - *(int *)&this_01->field_0x1a69) < 0x7531) {
        g_currentExceptionFrame = local_a0.previous;
        return;
      }
    }
    iVar9 = *(int *)&this_01->field_0x1a5b;
    puVar13 = local_5c;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    this_01->field_0x1a71 = 0;
    this_01->field_0x1a72 = 1;
    pCVar6 = DAT_00802a30;
    local_5c[4] = 0x6952;
    if (*(int *)(iVar9 + 0x2e6) != 0) {
      if (DAT_00802a30 != (CursorClassTy *)0x0) {
        uVar3 = *(undefined4 *)&DAT_00802a30[2].field_0x1;
        uVar4 = *(undefined4 *)((int)&DAT_00802a30[1].field_0060 + 1);
        DAT_00802a30[0xb].field_0x47 = 1;
        *(undefined2 *)&pCVar6[0xb].field_0x48 = 0xffff;
        CursorClassTy::SetGCType(pCVar6,CASE_0,uVar4,uVar3);
        CursorClassTy::DrawSprite
                  (pCVar6,*(int *)((int)&pCVar6[1].field_0060 + 1),*(int *)&pCVar6[2].field_0x1);
        pCVar6[2].field_0xa = 0;
        *(undefined4 *)&pCVar6[0xc].field_0x2f = 0xffffffff;
      }
      local_5c[2] = *(undefined4 *)&this_01->field_0x8;
      local_5c[3] = 2;
      MMsgTy::SetMessage(*(MMsgTy **)(*(int *)&this_01->field_0x1a5b + 0x2e6),0x2525,'\0',local_5c,
                         (undefined4 *)0x0,(undefined4 *)0x0,0,0);
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    (*this_01->vtable->GetMessage)(this_01,(int)local_5c);
    break;
  case 3:
    if ((*(HoloTy **)&local_20->field_0x1c96 != (HoloTy *)0x0) &&
       (iVar9 = HoloTy::NextFas(*(HoloTy **)&local_20->field_0x1c96), iVar9 != 0)) {
      local_8 = 0;
    }
    if ((*(HoloTy **)&this_01->field_0x1c9a != (HoloTy *)0x0) &&
       (iVar9 = HoloTy::NextFas(*(HoloTy **)&this_01->field_0x1c9a), iVar9 != 0)) {
      local_8 = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (*(HoloTy **)&this_01->field_0x1c96 != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_01->field_0x1c96);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_01->field_0x1c96);
        *(undefined4 *)&this_01->field_0x1c96 = 0;
      }
      if (*(HoloTy **)&this_01->field_0x1c9a != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_01->field_0x1c9a);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_01->field_0x1c9a);
        *(undefined4 *)&this_01->field_0x1c9a = 0;
      }
      if (*(uint *)&this_01->field_0x1a7b != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&this_01->field_0x1abf,*(uint *)&this_01->field_0x1a7b,0xfffffffe,
                   *(uint *)&this_01->field_0x1a93,*(uint *)&this_01->field_0x1a97);
      }
      if (*(uint *)&this_01->field_0x1b0c != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&this_01->field_0x1b50,*(uint *)&this_01->field_0x1b0c,0xfffffffe,
                   *(uint *)&this_01->field_0x1b24,*(uint *)&this_01->field_0x1b28);
      }
      if (*(uint *)&this_01->field_0x1b9d != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&this_01->field_0x1be1,*(uint *)&this_01->field_0x1b9d,0xfffffffe,
                   *(uint *)&this_01->field_0x1bb5,*(uint *)&this_01->field_0x1bb9);
      }
      puVar11 = (uint *)&this_01->field_0x1c2a;
      iVar9 = 0x16;
      do {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar11);
        puVar11 = puVar11 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (this_01->field_0x1a5f == '\0') {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)&this_01->field_0x1c8a);
      }
      this_01->field_0x65 = 1;
      CreateCtrls(this_01,'\0');
      PaintPrivider(this_01,'\0');
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    break;
  case 4:
    if (*(HoloTy **)&local_20->field_0x1c96 != (HoloTy *)0x0) {
      iVar9 = HoloTy::NextFas(*(HoloTy **)&local_20->field_0x1c96);
      if (iVar9 == 0) {
        uVar2 = *(uint *)(*(int *)&this_01->field_0x1c96 + 3);
        if (-1 < (int)uVar2) {
          FUN_006b3af0(DAT_008075a8,uVar2);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (*(HoloTy **)&this_01->field_0x1c9a != (HoloTy *)0x0) {
      iVar9 = HoloTy::NextFas(*(HoloTy **)&this_01->field_0x1c9a);
      if (iVar9 == 0) {
        uVar2 = *(uint *)(*(int *)&this_01->field_0x1c9a + 3);
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
      bVar1 = this_01->field_0x1a5a;
      this_01->field_0x65 = 2;
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
    if (*(HoloTy **)&local_20->field_0x1c9a != (HoloTy *)0x0) {
      iVar9 = HoloTy::NextFas(*(HoloTy **)&local_20->field_0x1c9a);
      if (iVar9 == 0) {
        if ((this_01->field_0x1a60 == '\x01') &&
           (uVar2 = *(uint *)(*(int *)&this_01->field_0x1c9a + 3), -1 < (int)uVar2)) {
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
      if (*(HoloTy **)&this_01->field_0x1c9a != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_01->field_0x1c9a);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_01->field_0x1c9a);
        *(undefined4 *)&this_01->field_0x1c9a = 0;
      }
      if (this_01->field_0x1a60 == '\0') {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)&this_01->field_0x1c8a);
      }
      SetMode(this_01,this_01->field_0x1a60,'\0');
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_a0.previous;
  return;
}

