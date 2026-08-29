#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\prov_obj.cpp
   PrividerTy::NonePrivider

   [STSwitchEnumApplier] Switch target field_0065 uses
   /SubmarineTitans/Recovered/Enums/PrividerTy_field_0065State. Cases:
   CASE_1=1;CASE_3=3;CASE_4=4;CASE_5=5
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NonePrivider(PrividerTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005BAF4D RET | 005BB0C1 RET | 005BB17F RET | 005BB561 RET | 005BB641 RET |
   005BB65E RET | 005BB6A5 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall PrividerTy::NonePrivider(PrividerTy *this)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  MMsgTy *this_00;
  StartSystemTy *pSVar4;
  CursorClassTy *pCVar6;
  PrividerTy *this_01;
  short *psVar7;
  DWORD DVar8;
  int local_EAX_66;
  int iVar10;
  int local_EAX_1381;
  int iVar8;
  int iVar9;
  uint *puVar11;
  char *pcVar12;
  STMessage *pSVar13;
  UINT UVar14;
  char local_c8 [2];
  byte local_c6;
  InternalExceptionFrame local_a0;
  STMessage local_5c;
  int local_3c;
  char local_38;
  uint local_37;
  uint local_33;
  char local_2c;
  uint local_2b;
  uint local_27;
  PrividerTy *local_20;
  uint local_1c;
  short *local_18;
  uint local_14;
  short *local_10;
  uint local_c;
  int local_8;

  local_8 = 1;
  local_20 = this;
  /* ST_CALLSITE[005BAE18]: CALL dword ptr [0x0085bedc] */
  DVar8 = timeGetTime();
  this->field_0061 = DVar8;
  local_a0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a0;

  local_EAX_66 = Library::MSVCRT::__setjmp3(local_a0.jumpBuffer,0);
  this_01 = local_20;
  if (local_EAX_66 != 0) {
    g_currentExceptionFrame = local_a0.previous;

    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\prov_obj.cpp",0x1bc,0,local_EAX_66,
                               "%s","PrividerTy::NonePrivider");
    if (iVar9 == 0) {
      RaiseInternalException(local_EAX_66,0,"E:\\__titans\\Start\\prov_obj.cpp",0x1bc);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(local_20->field_0065) {
  case CASE_1:
    if (local_20->array_00BC[0xc].field_01F1 == '\0') {
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    local_10 = nullptr;
    if (local_20->array_00BC[0xc].field_01ED == 0) {
      pcVar12 = local_c8;
      for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
        pcVar12[0] = '\0';
        pcVar12[1] = '\0';
        pcVar12[2] = '\0';
        pcVar12[3] = '\0';
        pcVar12 = pcVar12 + 4;
      }
      pcVar12[0] = '\0';
      pcVar12[1] = '\0';
      local_c6 = 4;

      FUN_00715360(g_int_00811764,1,'\x1a',local_c8,0x26,1,0xffffffff);
    }
    iVar10 = this_01->array_00BC[0xc].field_01ED + 1;
    this_01->array_00BC[0xc].field_01ED = iVar10;
    if (iVar10 == 0xf) {
      this_01->array_00BC[0xc].field_01ED = 0;
    }

    iVar10 = Library::Ourlib::CONNECT::FUN_00715630
                       (g_int_00811764,-1,&local_1c,&local_3c,&local_10,nullptr,-1,0);
    psVar7 = local_10;
    pCVar6 = g_cursorClass_00802A30;
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
              pcVar12 = (char *)((int)local_10 + 0xb);
              switch(*pcVar12) {
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              case '\x01':
                local_c = CONCAT31((int3)uVar2,1);
                local_14 = 0xe;
                break;
              case '\x02':
              case '\x03':
                /* ST_CALLSITE[005BB336]: CALL dword ptr [0x0085bde8] */
                wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&CHAR_00h_00807680,
                          PTR_s_CUSTOM__0079c0bc);
                local_2c = *pcVar12;
                local_2b = STField<undefined4>(psVar7,3);
                local_27 = 0;

                local_EAX_1381 =
                     FUN_00725910(&DAT_0080f33a,"*.DKD",0,thunk_FUN_005db030,&local_2c,0);
                local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((local_EAX_1381 != -0x70) + '\x01'));
                local_14 = (-(uint)(*pcVar12 != '\x02') & 2) + 0xd;
                break;
              case '\x05':
                /* ST_CALLSITE[005BB3A6]: CALL dword ptr [0x0085bde8] */
                wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s\\",&CHAR_00h_00807680,
                          PTR_s_SAVEGAME__0079c0b8,&CHAR_00h_00807ddd);
                local_38 = *pcVar12;
                local_37 = STField<undefined4>(psVar7,3);
                local_33 = STField<undefined4>(psVar7,7);

                iVar8 = FUN_00725910(&DAT_0080f33a,"*.DKD",0,thunk_FUN_005db030,&local_38,0
                                    );
                local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(iVar8 == -0x70));
                local_14 = 0x10;
              }
            }
            else if ((char)*local_18 != '\x03') goto LAB_005bb532;
            pCVar6 = g_cursorClass_00802A30;
            if ((char)*local_18 == '\x03') {
              local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(2));
            }
            while ((local_c & 0xff) != 1) {
              if ((local_c & 0xff) == 2) {
                thunk_FUN_005b6350(this_01,0x6109,0,1);
                DAT_0080877e = 0;
                DAT_008087be = 0;
                /* ST_CALLSITE[005BB4CD]: CALL 0x00404c8c; direct=00404C8C PrividerTy::CloseButtons */
                CloseButtons(this_01,'\x01');
                this_00 = (this_01->array_00BC[0xc].field_01DB)->field_02E6;
                goto joined_r0x005bb4e0;
              }
              if ((STField<char>(psVar7,0xd) == '\0') ||
                 (((char)*local_18 == '\x01' && (STField<char>(psVar7,0xb) == '\x05')))) {
                if (g_cursorClass_00802A30 != nullptr) {
                  iVar10 = g_cursorClass_00802A30->field_00C9;
                  iVar3 = g_cursorClass_00802A30->field_00C5;
                  g_cursorClass_00802A30->field_0493 = CASE_1;
                  pCVar6->field_0494 = 0xffff;
                  /* ST_CALLSITE[005BB455]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
                  CursorClassTy::SetGCType(pCVar6,CASE_0,iVar3,iVar10);
                  /* ST_CALLSITE[005BB46A]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
                  CursorClassTy::DrawSprite(pCVar6,pCVar6->field_00C5,pCVar6->field_00C9);
                  pCVar6->field_00D2 = 0;
                  pCVar6->field_04DF = -1;
                }
                this_01->array_00BC[0xc].field_01F1 = 0;
                thunk_FUN_005dac60();
                UVar14 = 0x2523;
                goto LAB_005bb2c6;
              }
              local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(2));
            }
            thunk_FUN_005b6350(this_01,0x6121,local_14,0x11);
            DAT_0080877e = 0;
            if (STField<char>(psVar7,0xb) == '\x01') {
              DAT_008087be = 0;
            }
            /* ST_CALLSITE[005BB512]: CALL 0x00404c8c; direct=00404C8C PrividerTy::CloseButtons */
            CloseButtons(this_01,'\x01');
            this_00 = (this_01->array_00BC[0xc].field_01DB)->field_02E6;
joined_r0x005bb4e0:
            if (this_00 != nullptr) {
              /* ST_CALLSITE[005BB52D]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
              MMsgTy::HidePanel(this_00,1,0,1);
            }
          }
          else {
            if (g_cursorClass_00802A30 != nullptr) {
              iVar10 = g_cursorClass_00802A30->field_00C9;
              iVar3 = g_cursorClass_00802A30->field_00C5;
              g_cursorClass_00802A30->field_0493 = CASE_1;
              pCVar6->field_0494 = 0xffff;
              /* ST_CALLSITE[005BB278]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
              CursorClassTy::SetGCType(pCVar6,CASE_0,iVar3,iVar10);
              /* ST_CALLSITE[005BB28D]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
              CursorClassTy::DrawSprite(pCVar6,pCVar6->field_00C5,pCVar6->field_00C9);
              pCVar6->field_00D2 = 0;
              pCVar6->field_04DF = -1;
            }
            this_01->array_00BC[0xc].field_01F1 = 0;
            thunk_FUN_005dac60();
            UVar14 = 0x2526;
LAB_005bb2c6:
            /* ST_CALLSITE[005BB2D2]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
            MMsgTy::SetMessage((this_01->array_00BC[0xc].field_01DB)->field_02E6,UVar14,'\0',
                               nullptr,nullptr,nullptr,0,0);
          }
        }
LAB_005bb532:
        this_01->array_00BC[0xc].field_01E9 = this_01->field_0061;
        if (local_10 != nullptr) {
          FreeAndNull(&local_10);
          g_currentExceptionFrame = local_a0.previous;
          return;
        }
        g_currentExceptionFrame = local_a0.previous;
        return;
      }
      if (this_01->field_0061 - this_01->array_00BC[0xc].field_01E9 < 0x7531) {
        g_currentExceptionFrame = local_a0.previous;
        return;
      }
    }
    pSVar4 = this_01->array_00BC[0xc].field_01DB;
    pSVar13 = &local_5c;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      pSVar13->unknown_00 = 0;
      pSVar13 = (STMessage *)&pSVar13->unknown_04;
    }
    this_01->array_00BC[0xc].field_01F1 = 0;
    this_01->array_00BC[0xc].field_01F2 = 1;
    pCVar6 = g_cursorClass_00802A30;
    local_5c.id = MESS_PRIVIDERTY_6952;
    if (pSVar4->field_02E6 != nullptr) {
      if (g_cursorClass_00802A30 != nullptr) {
        iVar10 = g_cursorClass_00802A30->field_00C9;
        iVar3 = g_cursorClass_00802A30->field_00C5;
        g_cursorClass_00802A30->field_0493 = CASE_1;
        pCVar6->field_0494 = 0xffff;
        /* ST_CALLSITE[005BB5D8]: CALL 0x0040507e; direct=0040507E CursorClassTy::SetGCType */
        CursorClassTy::SetGCType(pCVar6,CASE_0,iVar3,iVar10);
        /* ST_CALLSITE[005BB5ED]: CALL 0x0040241e; direct=0040241E CursorClassTy::DrawSprite */
        CursorClassTy::DrawSprite(pCVar6,pCVar6->field_00C5,pCVar6->field_00C9);
        pCVar6->field_00D2 = 0;
        pCVar6->field_04DF = -1;
      }
      local_5c.unknown_08 = this_01->field_0008;
      local_5c.unknown_0c = 2;
      /* ST_CALLSITE[005BB62A]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
      MMsgTy::SetMessage((this_01->array_00BC[0xc].field_01DB)->field_02E6,0x2525,'\0',
                         &local_5c.unknown_00,nullptr,nullptr,0,0);
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    /* ST_CALLSITE[005BB64A]: CALL dword ptr [EDX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/PrividerTy;pointer:/SubmarineTitans/Recovered/STMessage */
    this_01->GetMessage(&local_5c);
    break;
  case CASE_3:
    if ((local_20->field_1C96 != nullptr) &&
       /* ST_CALLSITE[005BAF58]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar10 = HoloTy::NextFas(local_20->field_1C96), iVar10 != 0)) {
      local_8 = 0;
    }
    if ((this_01->field_1C9A != nullptr) &&
       /* ST_CALLSITE[005BAF6E]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar10 = HoloTy::NextFas(this_01->field_1C9A), iVar10 != 0)) {
      local_8 = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_01->field_1C96 != nullptr) {
        /* ST_CALLSITE[005BAFA6]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_01->field_1C96);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1C96);
        this_01->field_1C96 = nullptr;
      }
      if (this_01->field_1C9A != nullptr) {
        /* ST_CALLSITE[005BAFCA]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_01->field_1C9A);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1C9A);
        this_01->field_1C9A = nullptr;
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
      puVar11 = this_01->field_1C2A;
      iVar10 = 0x16;
      do {

        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar11);
        puVar11 = puVar11 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (this_01->array_00BC[0xc].field_01DF == '\0') {

        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_01->field_1C8A);
      }
      this_01->field_0065 = CASE_1;
      /* ST_CALLSITE[005BB0A1]: CALL 0x0040362f; direct=0040362F PrividerTy::CreateCtrls */
      CreateCtrls(this_01,'\0');
      /* ST_CALLSITE[005BB0AA]: CALL 0x00405e52; direct=00405E52 PrividerTy::PaintPrivider */
      PaintPrivider(this_01,'\0');
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
    break;
  case CASE_4:
    if (local_20->field_1C96 != nullptr) {
      /* ST_CALLSITE[005BAE77]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar10 = HoloTy::NextFas(local_20->field_1C96);
      if (iVar10 == 0) {
        uVar2 = *(uint *)&this_01->field_1C96->field_0x3;
        if (-1 < (int)uVar2) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar2);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if (this_01->field_1C9A != nullptr) {
      /* ST_CALLSITE[005BAEA8]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar10 = HoloTy::NextFas(this_01->field_1C9A);
      if (iVar10 == 0) {
        uVar2 = *(uint *)&this_01->field_1C9A->field_0x3;
        if (-1 < (int)uVar2) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar2);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      bVar1 = this_01->array_00BC[0xc].field_01DA;
      this_01->field_0065 = 2;
      if ((bVar1 != 0xff) && (*(int *)&this_01->array_00BC[bVar1].field_0x15 != 0)) {

        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_01->array_00BC[bVar1].field_0x5);
        g_currentExceptionFrame = local_a0.previous;
        return;
      }
    }
    break;
  case CASE_5:
    if (local_20->field_1C9A != nullptr) {
      /* ST_CALLSITE[005BB0CC]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar10 = HoloTy::NextFas(local_20->field_1C9A);
      if (iVar10 == 0) {
        if ((this_01->array_00BC[0xc].field_01E0 == '\x01') &&
           (uVar2 = *(uint *)&this_01->field_1C9A->field_0x3, -1 < (int)uVar2)) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar2);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (this_01->field_1C9A != nullptr) {
        /* ST_CALLSITE[005BB128]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_01->field_1C9A);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1C9A);
        this_01->field_1C9A = nullptr;
      }
      if (this_01->array_00BC[0xc].field_01E0 == '\0') {

        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,this_01->field_1C8A);
      }
      /* ST_CALLSITE[005BB168]: CALL 0x00403bc5; direct=00403BC5 PrividerTy::SetMode */
      SetMode(this_01,this_01->array_00BC[0xc].field_01E0,'\0');
      g_currentExceptionFrame = local_a0.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_a0.previous;
  return;
}

