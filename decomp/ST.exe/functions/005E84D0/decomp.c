#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::NoneWait
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall NoneWait(WaitTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=005E86EA RET | 005E8A4B RET | 005E93A5 RET | 005E93EC RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall WaitTy::NoneWait(WaitTy *this)

{
  undefined1 *puVar1;
  byte **slotStorage;
  char cVar2;
  byte bVar3;
  StartSystemTy *pSVar4;
  MMsgTy *this_00;
  WaitTy *this_01;
  AnonShape_005E84D0_1273B60D *pAVar6;
  DWORD DVar7;
  int local_EAX_66;
  int iVar10;
  void **ppvVar11;
  int local_EAX_2136;
  int iVar8;
  void *pvVar12;
  byte *pbVar13;
  char *pcVar14_mg1;
  char *pcVar14_mg2;
  uint uVar14;
  int iVar9;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  AnonShape_005E84D0_1273B60D *pAVar18;
  undefined4 *puVar19;
  STMessage *pSVar20;
  char *pcVar21;
  undefined4 *puVar22;
  UINT UVar23;
  int *piVar24;
  undefined4 uVar25;
  char local_114 [2];
  undefined1 local_112;
  InternalExceptionFrame local_ec;
  undefined4 local_a8 [2];
  undefined2 local_9e;
  undefined2 local_9c;
  int local_8c [8];
  int local_6c;
  char local_68;
  int local_67;
  undefined4 local_63;
  char local_5c;
  int local_5b;
  undefined4 local_57;
  WaitTy *local_50;
  STMessage local_4c;
  uint local_2c;
  uint local_28;
  int local_24;
  uint *local_20;
  int local_1c;
  byte *local_18;
  AnonShape_005E84D0_1273B60D *local_14;
  AnonShape_005E84D0_1273B60D *local_10;
  int local_c;
  char local_5;

  local_c = 1;
  local_50 = this;
  DVar7 = timeGetTime();
  this->field_0061 = DVar7;
  local_ec.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ec;
  local_EAX_66 = Library::MSVCRT::__setjmp3(local_ec.jumpBuffer,0);
  this_01 = local_50;
  if (local_EAX_66 != 0) {
    g_currentExceptionFrame = local_ec.previous;
    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x2a6,0,local_EAX_66,
                               "%s","WaitTy::NoneWait");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_66,0,"E:\\__titans\\Start\\wait_obj.cpp",0x2a6);
    return;
  }
  if ((local_50->field_1A87 != 0) && (0xf9 < local_50->field_0061 - local_50->field_1A8B)) {
    ShowDescription(local_50);
    this_01->field_1A87 = 0;
  }
  cVar2 = this_01->field_0065;
  if (cVar2 == '\x01') {
    if (this_01->field_1A75 == '\0') {
      local_14 = nullptr;
      pSVar20 = &local_4c;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        pSVar20->unknown_00 = 0;
        pSVar20 = (STMessage *)&pSVar20->unknown_04;
      }
      if (this_01->field_1A70 == 0) {
        pcVar21 = local_114;
        for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
          pcVar21[0] = '\0';
          pcVar21[1] = '\0';
          pcVar21[2] = '\0';
          pcVar21[3] = '\0';
          pcVar21 = pcVar21 + 4;
        }
        pcVar21[0] = '\0';
        pcVar21[1] = '\0';
        local_112 = 4;
        FUN_00715360(g_int_00811764,1,'\x1a',local_114,0x26,1,0xffffffff);
      }
      iVar10 = this_01->field_1A70 + 1;
      this_01->field_1A70 = iVar10;
      if (iVar10 == 10) {
        this_01->field_1A70 = 0;
      }
      if (DAT_008067a0 != '\0') {
        CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
      }
      Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_24,-1,0);
      local_1c = 0;
      if (0 < local_24) {
        do {
          iVar10 = Library::Ourlib::CONNECT::FUN_00715630
                             (g_int_00811764,-1,&local_2c,&local_6c,&local_14,&local_28,-1,0);
          pAVar6 = local_14;
          if (iVar10 == -0x4d) {
LAB_005e9233:
            this_01->field_1A74 = 0;
            this_01->field_1A75 = 1;
            local_4c.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
            if (this_01->field_1A5B->field_02E6 == nullptr) {
              this_01->GetMessage(&local_4c);
            }
            else {
              local_4c.unknown_08 = this_01->field_0008;
              local_4c.unknown_0c = 2;
              MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x2525,'\0',&local_4c.unknown_00,
                                 nullptr,nullptr,0,0);
            }
          }
          else if (iVar10 == 0) {
            if (30000 < this_01->field_0061 - this_01->field_1A6C) goto LAB_005e9233;
          }
          else if (iVar10 == 1) {
            switch(local_2c) {
            case 0x10:
              if (this_01->field_0065 == '\x01') {
                local_4c.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
                if (this_01->field_1A5B->field_02E6 == nullptr) goto LAB_005e91f7;
                local_4c.unknown_08 = this_01->field_0008;
                local_4c.unknown_0c = 2;
                MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x2524,'\0',&local_4c.unknown_00,
                                   nullptr,nullptr,0,0);
              }
              break;
            case 0x1a:
              local_5 = '\0';
              if (*(short *)local_14 == (short)((uint)DAT_00807dd5 >> 0x10)) {
                local_10 = (AnonShape_005E84D0_1273B60D *)&local_14->field_0x2;
                if (*(char *)local_10 == '\x01') {
                  puVar1 = &local_14->field_000B;
                  switch(*puVar1) {
                  case 1:
                    if (this_01->field_1A76 != '\0') {
                      ppvVar11 = &this_01->field_1A5B->field_069A;
                      if (*ppvVar11 != nullptr) {
                        FreeAndNull(ppvVar11);
                      }
                      this_01->field_1A76 = 0;
                    }
                    local_5 = '\x01';
                    this_01->field_1A5F = 0xe;
                    break;
                  case 2:
                  case 3:
                  case 4:
                    if (this_01->field_1A76 != '\0') {
                      if (this_01->field_1A77 != local_14->field_0003) {
                        ppvVar11 = &this_01->field_1A5B->field_069A;
                        if (*ppvVar11 != nullptr) {
                          FreeAndNull(ppvVar11);
                        }
                        this_01->field_1A76 = 0;
                      }
                      if (this_01->field_1A76 != '\0') break;
                    }
                    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&CHAR_00h_00807680,
                              PTR_s_CUSTOM__0079c244);
                    local_5c = *puVar1;
                    local_5b = pAVar6->field_0003;
                    local_57 = 0;
                    local_EAX_2136 =
                         FUN_00725910(&DAT_0080f33a,"*.DKD",0,thunk_FUN_005db030,&local_5c,
                                      0);
                    if (local_EAX_2136 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_01->field_1A5F = ((*puVar1 == '\x03') - 1U & 0xfe) + 0xf;
                    break;
                  case 5:
                    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s\\",&CHAR_00h_00807680,
                              PTR_s_SAVEGAME__0079c240,&CHAR_00h_00807ddd);
                    local_68 = *puVar1;
                    local_67 = pAVar6->field_0003;
                    local_63 = *(undefined4 *)&pAVar6->field_0x7;
                    iVar8 = FUN_00725910(&DAT_0080f33a,"*.DKD",0,thunk_FUN_005db030,
                                         &local_68,0);
                    if (iVar8 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_01->field_1A5F = 0x10;
                  }
                  if (local_5 == '\0') {
                    if (this_01->field_1A76 == '\0') {
                      if ((pAVar6[1].field_0x1 == '\0') ||
                         ((*(char *)local_10 == '\x01' && (*puVar1 == '\x05')))) {
                        this_01->field_1A74 = 0;
                        thunk_FUN_005dac60();
                        piVar24 = nullptr;
                        this_01->field_1A75 = 1;
                        UVar23 = 0x2523;
                        goto LAB_005e8ee0;
                      }
                      this_01->field_1A76 = 1;
                      iVar10 = pAVar6->field_0003;
                      this_01->field_1A7B = this_01->field_0061;
                      this_01->field_1A77 = iVar10;
                      ppvVar11 = &this_01->field_1A5B->field_069A;
                      if (*ppvVar11 != nullptr) {
                        FreeAndNull(ppvVar11);
                      }
                      local_18 = (byte *)0xffffffff;
                      FUN_006b6500(g_int_00811764,1);
                      FUN_00715360(g_int_00811764,1,'%',(char *)&local_18,4,0,0xffffffff);
                      FUN_006b6500(g_int_00811764,DAT_0080733c);
                    }
                  }
                  else {
                    thunk_FUN_005b6350(this_01,0x6121,(uint)(byte)this_01->field_1A5F,0x12);
                    DAT_0080877e = 0;
                    if (*puVar1 == '\x01') {
                      DAT_008087be = 0;
                    }
                    this_01->field_1A64 = 1;
                    this_01->CloseButtons();
                    this_00 = this_01->field_1A5B->field_02E6;
                    if (this_00 != nullptr) {
                      MMsgTy::HidePanel(this_00,1,0,1);
                    }
                  }
                }
                else if (*(char *)local_10 == '\x03') {
                  if (this_01->field_1A76 == '\0') {
                    if (local_14->field_0003 != DAT_008087be) {
                      this_01->field_1A8F = local_14->field_0003;
                      this_01->field_1A93 = local_14->field_000B;
                      this_01->field_1A87 = 1;
                      DVar7 = timeGetTime();
                      this_01->field_1A8B = DVar7;
                    }
                  }
                  else if (5000 < this_01->field_0061 - this_01->field_1A7B) {
                    this_01->field_1A76 = 0;
                  }
                }
              }
              else {
                this_01->field_1A74 = 0;
                memset(local_8c, 0, 0x20); /* compiler bulk-zero initialization */
                this_01->field_1A75 = 1;
                local_8c[2] = this_01->field_0008;
                piVar24 = local_8c;
                local_8c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                local_8c[3] = 2;
                UVar23 = 0x2526;
LAB_005e8ee0:
                MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,UVar23,'\0',piVar24,
                                   nullptr,nullptr,0,0);
              }
              break;
            case 0x1b:
              StartSystemTy::AddToChat(this_01->field_1A5B,(int)local_14);
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0x26:
              if ((((this_01->field_1A76 != '\0') &&
                   (local_14 != nullptr)) &&
                  (*(int *)local_14 == this_01->field_1A77)) &&
                 ((local_10 = local_14 + 2, (int)local_28 <= *(int *)(local_14 + 2) + 0x1c &&
                  (0x1c < (int)local_28)))) {
                if (this_01->field_1A5B->field_069A == nullptr) {
                  pAVar18 = local_14 + 1;
                  pvVar12 = Library::DKW::LIB::MemAlloc(*(uint *)(local_14 + 1));
                  this_01->field_1A5B->field_069A = pvVar12;
                  slotStorage = &this_01->field_1A83;
                  this_01->field_1A5B->field_069E = *(uint *)pAVar18;
                  this_01->field_1A5B->field_06AE = *(undefined4 *)((int)&pAVar6[1].field_0003 + 1);
                  this_01->field_1A5B->field_06B2 = *(undefined4 *)&pAVar6[1].field_0x8;
                  this_01->field_1A5B->field_06A2 = *(uint *)local_10;
                  this_01->field_1A5B->field_06A6 = *(uint *)&pAVar6->field_0x8;
                  if (*slotStorage != nullptr) {
                    FreeAndNull(slotStorage);
                  }
                  uVar15 = this_01->field_1A5B->field_06A6;
                  this_01->field_1A7F = uVar15;
                  pbVar13 = Library::DKW::LIB::MemAllocClear(uVar15);
                  *slotStorage = pbVar13;
                  uVar25 = 0;
                  pcVar14_mg1 = LoadResourceString(0x252f,g_hINSTANCE_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,pcVar14_mg1,uVar25);
                  AddStr(this_01,&DAT_0080f33a,0);
                }
                iVar10 = *(int *)((int)&pAVar6->field_0003 + 1);
                if (iVar10 * *(uint *)local_10 < *(uint *)(pAVar6 + 1) ||
                    iVar10 * *(uint *)local_10 - *(uint *)(pAVar6 + 1) == 0) {
                  local_10 = (AnonShape_005E84D0_1273B60D *)(this_01->field_1A83 + iVar10);
                  if (*(char *)local_10 == '\0') {
                    puVar19 = (undefined4 *)((int)&pAVar6[2].field_0003 + 1);
                    puVar22 = (undefined4 *)
                              (this_01->field_1A5B->field_06A2 * iVar10 +
                              (int)this_01->field_1A5B->field_069A);
                    for (uVar15 = local_28 - 0x1c >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                      *puVar22 = *puVar19;
                      puVar19 = puVar19 + 1;
                      puVar22 = puVar22 + 1;
                    }
                    for (uVar15 = local_28 - 0x1c & 3; uVar15 != 0; uVar15 = uVar15 - 1) {
                      *(undefined1 *)puVar22 = *(undefined1 *)puVar19;
                      puVar19 = (undefined4 *)((int)puVar19 + 1);
                      puVar22 = (undefined4 *)((int)puVar22 + 1);
                    }
                    *(char *)local_10 = '\x01';
                    this_01->field_1A7B = this_01->field_0061;
                    this_01->field_1A7F = this_01->field_1A7F - 1;
                    uVar15 = this_01->field_1A5B->field_06A6;
                    uVar15 = (uVar15 * 100 + this_01->field_1A7F * -100) / uVar15;
                    pcVar14_mg2 = LoadResourceString(0x252f,g_hINSTANCE_00807618);
                    wsprintfA((LPSTR)&DAT_0080f33a,pcVar14_mg2,uVar15);
                    AddStr(this_01,&DAT_0080f33a,1);
                  }
                  if (this_01->field_1A7F == 0) {
                    iVar10 = thunk_FUN_005deb90((AnonShape_005DEB90_CA287120 *)this_01->field_1A5B);
                    if (iVar10 == 0) {
                      this_01->field_1A74 = 0;
                      thunk_FUN_005dac60();
                      this_01->field_1A75 = 1;
                      MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x252e,'\0',
                                         nullptr,nullptr,nullptr,0,0);
                    }
                    this_01->field_1A76 = 0;
                  }
                }
              }
              break;
            case 0x31:
            case 0x33:
            case 0x35:
              this_01->field_1A75 = 1;
              local_4c.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
              if (this_01->field_1A5B->field_02E6 == nullptr) {
LAB_005e91f7:
                this_01->GetMessage(&local_4c);
              }
              else {
                local_4c.unknown_08 = this_01->field_0008;
                local_4c.unknown_0c = 2;
                MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x2522,'\0',&local_4c.unknown_00,
                                   nullptr,nullptr,0,0);
              }
            }
            this_01->field_1A6C = this_01->field_0061;
            if (local_14 != nullptr) {
              FreeAndNull(&local_14);
            }
          }
          local_1c = local_1c + 1;
        } while (local_1c < local_24);
      }
      if ((((this_01->field_1A76 != '\0') && (3000 < this_01->field_0061 - this_01->field_1A7B)) &&
          (this_01->field_1A7F != 0)) && (this_01->field_1A83 != nullptr)) {
        uVar15 = this_01->field_1A7F * 4 + 4;
        local_20 = Library::DKW::LIB::MemAlloc(uVar15);
        local_18 = this_01->field_1A83;
        *local_20 = this_01->field_1A7F;
        puVar16 = local_20 + 1;
        uVar14 = 0;
        uVar17 = 0;
        if (this_01->field_1A5B->field_06A6 != 0) {
          do {
            if (local_18[uVar14] == 0) {
              *puVar16 = uVar14;
              puVar16 = puVar16 + 1;
              uVar17 = uVar17 + 1;
              if (this_01->field_1A7F <= uVar17) break;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < this_01->field_1A5B->field_06A6);
        }
        FUN_006b6500(g_int_00811764,1);
        FUN_00715360(g_int_00811764,1,'%',(char *)local_20,uVar15,1,0xffffffff);
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        FreeAndNull(&local_20);
        this_01->field_1A7B = this_01->field_0061;
      }
    }
  }
  else if (cVar2 == '\x03') {
    if ((this_01->field_1A64 == 0) &&
       (g_startSystem_0081176C->field_0300 < g_startSystem_0081176C->field_0304 + -1)) {
      g_startSystem_0081176C->field_0300 = g_startSystem_0081176C->field_0300 + 1;
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   g_startSystem_0081176C->field_0300,g_startSystem_0081176C->field_0314,
                   g_startSystem_0081176C->field_0318);
      }
      local_c = 0;
    }
    if ((this_01->field_1AF8 != nullptr) &&
       (iVar10 = HoloTy::NextFas(this_01->field_1AF8), iVar10 != 0)) {
      local_c = 0;
    }
    if ((((this_01->field_1A64 == 0) || (this_01->field_1A68 != 0)) &&
        (this_01->field_1B00 != nullptr)) &&
       (iVar10 = HoloTy::NextFas(this_01->field_1B00), iVar10 != 0)) {
      local_c = 0;
    }
    if (((this_01->field_1A64 == 0) && (this_01->field_1AFC != nullptr)) &&
       (iVar10 = HoloTy::NextFas(this_01->field_1AFC), iVar10 != 0)) {
      local_c = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_c = 0;
    }
    if (local_c != 0) {
      if (this_01->field_1AF8 != nullptr) {
        HoloTy::Done(this_01->field_1AF8);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1AF8);
        this_01->field_1AF8 = nullptr;
      }
      if (this_01->field_1B00 != nullptr) {
        HoloTy::Done(this_01->field_1B00);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1B00);
        this_01->field_1B00 = nullptr;
      }
      if (this_01->field_1AFC != nullptr) {
        HoloTy::Done(this_01->field_1AFC);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1AFC);
        this_01->field_1AFC = nullptr;
      }
      this_01->field_0065 = 1;
      this_01->field_1A6C = this_01->field_0061;
      if (this_01->field_1A64 == 0) {
        Library::DKW::DDX::FUN_006b3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
        if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
          FUN_006b3af0((int *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC);
        }
      }
      SetAccelerator(1,this_01->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
      pSVar4 = this_01->field_1A5B;
      if (pSVar4->field_02E6 != nullptr) {
        memset(local_a8, 0, 0x1a); /* compiler bulk-zero initialization */
        local_9c = 1;
        local_9e = 1;
        MMsgTy::StatePanel(pSVar4->field_02E6,(int)local_a8);
      }
      sub_005E9970(this_01);
      puVar16 = this_01->field_1A94;
      iVar10 = 0x16;
      do {
        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar16);
        puVar16 = puVar16 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391,
                   0xfffffffe,g_startSystem_0081176C->field_03A9,g_startSystem_0081176C->field_03AD);
      }
      if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422,
                   0xfffffffe,g_startSystem_0081176C->field_043A,g_startSystem_0081176C->field_043E);
      }
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3,
                   0xfffffffe,g_startSystem_0081176C->field_04CB,g_startSystem_0081176C->field_04CF);
      }
      Library::DKW::DDX::FUN_006b3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0540);
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                   0xfffffffe,g_startSystem_0081176C->field_0578,g_startSystem_0081176C->field_057C);
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                   0xfffffffe,g_startSystem_0081176C->field_0609,g_startSystem_0081176C->field_060D);
      }
      Library::DKW::DDX::FUN_006b3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0558);
      Library::DKW::DDX::FUN_006b3430
                ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_0554);
      PaintWait(this_01,'\0');
      g_currentExceptionFrame = local_ec.previous;
      return;
    }
  }
  else if (cVar2 == '\x04') {
    if ((this_01->field_1A64 == 0) && (0 < g_startSystem_0081176C->field_0300)) {
      g_startSystem_0081176C->field_0300 = g_startSystem_0081176C->field_0300 + -1;
      if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC,
                   g_startSystem_0081176C->field_0300,g_startSystem_0081176C->field_0314,
                   g_startSystem_0081176C->field_0318);
      }
      local_c = 0;
    }
    if (this_01->field_1AF8 != nullptr) {
      iVar10 = HoloTy::NextFas(this_01->field_1AF8);
      if (iVar10 == 0) {
        uVar15 = *(uint *)&this_01->field_1AF8->field_0x3;
        if (-1 < (int)uVar15) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar15);
        }
      }
      else {
        local_c = 0;
      }
    }
    if (((this_01->field_1A64 == 0) || (this_01->field_1A5F == '\x0e')) &&
       (this_01->field_1B00 != nullptr)) {
      iVar10 = HoloTy::NextFas(this_01->field_1B00);
      if (iVar10 == 0) {
        uVar15 = *(uint *)&this_01->field_1B00->field_0x3;
        if (-1 < (int)uVar15) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar15);
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((this_01->field_1A64 == 0) && (this_01->field_1AFC != nullptr)) {
      iVar10 = HoloTy::NextFas(this_01->field_1AFC);
      if (iVar10 == 0) {
        uVar15 = *(uint *)&this_01->field_1AFC->field_0x3;
        if (-1 < (int)uVar15) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar15);
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x02')) {
      local_c = 0;
    }
    if (local_c != 0) {
      bVar3 = this_01->field_1A5A;
      this_01->field_0065 = 2;
      if ((bVar3 != 0xff) && (*(int *)(&this_01->field_0xd1 + (uint)bVar3 * 0x1fb) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_01->field_0xc1 + (uint)bVar3 * 0x1fb));
        g_currentExceptionFrame = local_ec.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_ec.previous;
  return;
}

