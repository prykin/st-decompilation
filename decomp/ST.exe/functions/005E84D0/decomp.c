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
  byte *puVar1;
  byte **slotStorage;
  char cVar2;
  byte bVar3;
  WaitTyVTable *pWVar4;
  MMsgTy *this_00;
  WaitTy *this_01;
  AnonShape_005E84D0_1273B60D *pAVar6;
  DWORD DVar7;
  int local_EAX_66;
  int iVar10;
  int local_EAX_2136;
  int iVar8;
  int *piVar11;
  void *pvVar12;
  byte *pbVar13;
  char *pcVar14_mg1;
  char *pcVar14_mg2;
  uint uVar14;
  int iVar9;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  AnonShape_005E84D0_1273B60D *pAVar19;
  uint *puVar20;
  STMessage *pSVar21;
  char *pcVar22;
  uint *puVar23;
  UINT UVar24;
  uint uVar25;
  char local_114 [2];
  byte local_112;
  InternalExceptionFrame local_ec;
  uint local_a8 [2];
  ushort local_9e;
  ushort local_9c;
  int local_8c [8];
  int local_6c;
  char local_68;
  int local_67;
  uint local_63;
  char local_5c;
  int local_5b;
  uint local_57;
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
  /* ST_CALLSITE[005E84E8]: CALL dword ptr [0x0085bedc] */
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
    /* ST_CALLSITE[005E8543]: CALL 0x004059fc; direct=004059FC WaitTy::ShowDescription */
    ShowDescription(local_50);
    this_01->field_1A87 = 0;
  }
  cVar2 = this_01->field_0065;
  if (cVar2 == '\x01') {
    if (this_01->array_00BC[0xc].field_01F5 == '\0') {
      local_14 = nullptr;
      pSVar21 = &local_4c;
      for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
        pSVar21->unknown_00 = 0;
        pSVar21 = (STMessage *)&pSVar21->unknown_04;
      }
      if (this_01->array_00BC[0xc].field_01F0 == 0) {
        pcVar22 = local_114;
        for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
          pcVar22[0] = '\0';
          pcVar22[1] = '\0';
          pcVar22[2] = '\0';
          pcVar22[3] = '\0';
          pcVar22 = pcVar22 + 4;
        }
        pcVar22[0] = '\0';
        pcVar22[1] = '\0';
        local_112 = 4;

        FUN_00715360(g_int_00811764,1,'\x1a',local_114,0x26,1,0xffffffff);
      }
      iVar10 = this_01->array_00BC[0xc].field_01F0 + 1;
      this_01->array_00BC[0xc].field_01F0 = iVar10;
      if (iVar10 == 10) {
        this_01->array_00BC[0xc].field_01F0 = 0;
      }
      if (DAT_008067a0 != '\0') {
        /* ST_CALLSITE[005E8AD1]: CALL dword ptr [0x0085c05c] */
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
            this_01->array_00BC[0xc].field_01F4 = 0;
            this_01->array_00BC[0xc].field_01F5 = 1;
            iVar10 = this_01->array_00BC[0xc].field_01DB;
            local_4c.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
            if (STField<int>(iVar10,0x2E6) == 0) {
              /* ST_CALLSITE[005E9293]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/WaitTy;pointer:/SubmarineTitans/Recovered/STMessage */
              this_01->GetMessage(&local_4c);
            }
            else {
              local_4c.unknown_08 = this_01->field_0008;
              local_4c.unknown_0c = 2;
              /* ST_CALLSITE[005E9284]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
              MMsgTy::SetMessage(*(MMsgTy **)(iVar10 + 0x2e6),0x2525,'\0',&local_4c.unknown_00,
                                 nullptr,nullptr,0,0);
            }
          }
          else if (iVar10 == 0) {
            if (30000 < this_01->field_0061 - this_01->array_00BC[0xc].field_01EC)
            goto LAB_005e9233;
          }
          else if (iVar10 == 1) {
            switch(local_2c) {
            case 0x10:
              if (this_01->field_0065 == '\x01') {
                iVar10 = this_01->array_00BC[0xc].field_01DB;
                local_4c.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
                if (STField<int>(iVar10,0x2E6) == 0) goto LAB_005e91f7;
                local_4c.unknown_08 = this_01->field_0008;
                local_4c.unknown_0c = 2;
                /* ST_CALLSITE[005E9192]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
                MMsgTy::SetMessage(*(MMsgTy **)(iVar10 + 0x2e6),0x2524,'\0',&local_4c.unknown_00,
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
                    if (this_01->array_00BC[0xc].field_01F6 != '\0') {
                      piVar11 = (int *)(this_01->array_00BC[0xc].field_01DB + 0x69a);
                      if (*piVar11 != 0) {
                        FreeAndNull(piVar11);
                      }
                      this_01->array_00BC[0xc].field_01F6 = 0;
                    }
                    local_5 = '\x01';
                    this_01->array_00BC[0xc].field_01DF = 0xe;
                    break;
                  case 2:
                  case 3:
                  case 4:
                    if (this_01->array_00BC[0xc].field_01F6 != '\0') {
                      if (this_01->array_00BC[0xc].field_01F7 != local_14->field_0003) {
                        piVar11 = (int *)(this_01->array_00BC[0xc].field_01DB + 0x69a);
                        if (*piVar11 != 0) {
                          FreeAndNull(piVar11);
                        }
                        this_01->array_00BC[0xc].field_01F6 = 0;
                      }
                      if (this_01->array_00BC[0xc].field_01F6 != '\0') break;
                    }
                    /* ST_CALLSITE[005E8CF9]: CALL dword ptr [0x0085bde8] */
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
                    this_01->array_00BC[0xc].field_01DF = ((*puVar1 == '\x03') - 1U & 0xfe) + 0xf;
                    break;
                  case 5:
                    /* ST_CALLSITE[005E8D68]: CALL dword ptr [0x0085bde8] */
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
                    this_01->array_00BC[0xc].field_01DF = 0x10;
                  }
                  if (local_5 == '\0') {
                    if (this_01->array_00BC[0xc].field_01F6 == '\0') {
                      if ((pAVar6[1].field_0x1 == '\0') ||
                         ((*(byte *)local_10 == 1 && (*puVar1 == '\x05')))) {
                        this_01->array_00BC[0xc].field_01F4 = 0;
                        thunk_FUN_005dac60();
                        piVar11 = nullptr;
                        this_01->array_00BC[0xc].field_01F5 = 1;
                        UVar24 = 0x2523;
                        goto LAB_005e8ee0;
                      }
                      DVar7 = this_01->field_0061;
                      this_01->array_00BC[0xc].field_01F6 = 1;
                      iVar10 = pAVar6->field_0003;
                      this_01->field_1A7B = DVar7;
                      iVar15 = this_01->array_00BC[0xc].field_01DB;
                      this_01->array_00BC[0xc].field_01F7 = iVar10;
                      piVar11 = (int *)(iVar15 + 0x69a);
                      if (*piVar11 != 0) {
                        FreeAndNull(piVar11);
                      }
                      local_18 = (byte *)0xffffffff;

                      FUN_006b6500(g_int_00811764,1);

                      FUN_00715360(g_int_00811764,1,'%',(char *)&local_18,4,0,0xffffffff);

                      FUN_006b6500(g_int_00811764,DAT_0080733c);
                    }
                  }
                  else {
                    thunk_FUN_005b6350(this_01,0x6121,
                                       (uint)(byte)this_01->array_00BC[0xc].field_01DF,0x12);
                    DAT_0080877e = 0;
                    if (*puVar1 == '\x01') {
                      DAT_008087be = 0;
                    }
                    pWVar4 = this_01->vtable;
                    this_01->array_00BC[0xc].field_01E4 = 1;
                    /* ST_CALLSITE[005E8DF1]: CALL dword ptr [EDX + 0x8] */
                    (*pWVar4->CloseButtons)(this_01);
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    this_00 = *(MMsgTy **)(this_01->array_00BC[0xc].field_01DB + 0x2e6);
                    if (this_00 != nullptr) {
                      /* ST_CALLSITE[005E8E0E]: CALL 0x00401fa5; direct=00401FA5 MMsgTy::HidePanel */
                      MMsgTy::HidePanel(this_00,1,0,1);
                    }
                  }
                }
                else if (*(char *)local_10 == '\x03') {
                  if (this_01->array_00BC[0xc].field_01F6 == '\0') {
                    if (local_14->field_0003 != DAT_008087be) {
                      this_01->field_1A8F = local_14->field_0003;
                      this_01->field_1A93 = local_14->field_000B;
                      this_01->field_1A87 = 1;
                      /* ST_CALLSITE[005E8C41]: CALL dword ptr [0x0085bedc] */
                      DVar7 = timeGetTime();
                      this_01->field_1A8B = DVar7;
                    }
                  }
                  else if (5000 < this_01->field_0061 - this_01->field_1A7B) {
                    this_01->array_00BC[0xc].field_01F6 = 0;
                  }
                }
              }
              else {
                this_01->array_00BC[0xc].field_01F4 = 0;
                memset(local_8c, 0, 0x20); /* compiler bulk-zero initialization */
                this_01->array_00BC[0xc].field_01F5 = 1;
                local_8c[2] = this_01->field_0008;
                piVar11 = local_8c;
                local_8c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                local_8c[3] = 2;
                UVar24 = 0x2526;
LAB_005e8ee0:
                /* ST_CALLSITE[005E8EEC]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                MMsgTy::SetMessage(*(MMsgTy **)(this_01->array_00BC[0xc].field_01DB + 0x2e6),UVar24,
                                   '\0',piVar11,nullptr,nullptr,0,0);
              }
              break;
            case 0x1b:
              /* ST_CALLSITE[005E91A3]: CALL 0x00402bbc; direct=00402BBC StartSystemTy::AddToChat */
              StartSystemTy::AddToChat
                        ((StartSystemTy *)this_01->array_00BC[0xc].field_01DB,(int)local_14);
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0x26:
              if ((((this_01->array_00BC[0xc].field_01F6 != '\0') &&
                   (local_14 != nullptr)) &&
                  (*(int *)local_14 == this_01->array_00BC[0xc].field_01F7)) &&
                 ((local_10 = local_14 + 2, (int)local_28 <= *(int *)(local_14 + 2) + 0x1c &&
                  (0x1c < (int)local_28)))) {
                /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                if (*(int *)(this_01->array_00BC[0xc].field_01DB + 0x69a) == 0) {
                  pAVar19 = local_14 + 1;

                  pvVar12 = Library::DKW::LIB::MemAlloc(*(uint *)(local_14 + 1));
                  *(void **)(this_01->array_00BC[0xc].field_01DB + 0x69a) = pvVar12;
                  slotStorage = &this_01->field_1A83;
                  *(undefined4 *)(this_01->array_00BC[0xc].field_01DB + 0x69e) =
                       *(undefined4 *)pAVar19;
                  *(undefined4 *)(this_01->array_00BC[0xc].field_01DB + 0x6ae) =
                       *(undefined4 *)((int)&pAVar6[1].field_0003 + 1);
                  *(undefined4 *)(this_01->array_00BC[0xc].field_01DB + 0x6b2) =
                       *(undefined4 *)&pAVar6[1].field_0x8;
                  *(int *)(this_01->array_00BC[0xc].field_01DB + 0x6a2) = *(int *)local_10;
                  *(undefined4 *)(this_01->array_00BC[0xc].field_01DB + 0x6a6) =
                       *(undefined4 *)&pAVar6->field_0x8;
                  if (*slotStorage != nullptr) {
                    FreeAndNull(slotStorage);
                  }
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  uVar16 = *(uint *)(this_01->array_00BC[0xc].field_01DB + 0x6a6);
                  this_01->field_1A7F = uVar16;

                  pbVar13 = Library::DKW::LIB::MemAllocClear(uVar16);
                  *slotStorage = pbVar13;
                  uVar25 = 0;
                  pcVar14_mg1 = LoadResourceString(0x252f,g_hINSTANCE_00807618);
                  /* ST_CALLSITE[005E8FFD]: CALL dword ptr [0x0085bde8] */
                  wsprintfA((LPSTR)&DAT_0080f33a,pcVar14_mg1,uVar25);
                  /* ST_CALLSITE[005E900F]: CALL 0x0040245a; direct=0040245A WaitTy::AddStr */
                  AddStr(this_01,&DAT_0080f33a,0);
                }
                iVar10 = STField<int>(pAVar6,0x4);
                if ((uint)(iVar10 * *(int *)local_10) < *(uint *)(pAVar6 + 1) ||
                    iVar10 * *(int *)local_10 - *(uint *)(pAVar6 + 1) == 0) {
                  local_10 = (AnonShape_005E84D0_1273B60D *)(this_01->field_1A83 + iVar10);
                  if (*(byte *)local_10 == 0) {
                    iVar15 = this_01->array_00BC[0xc].field_01DB;
                    puVar20 = (undefined4 *)((int)&pAVar6[2].field_0003 + 1);
                    puVar23 = (undefined4 *)
                              (STField<int>(iVar15,0x6A2) * iVar10 + STField<int>(iVar15,0x69A));
                    for (uVar16 = local_28 - 0x1c >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                      *puVar23 = *puVar20;
                      puVar20 = puVar20 + 1;
                      puVar23 = puVar23 + 1;
                    }
                    for (uVar16 = local_28 - 0x1c & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                      *(undefined1 *)puVar23 = *(undefined1 *)puVar20;
                      puVar20 = (undefined4 *)((int)puVar20 + 1);
                      puVar23 = (undefined4 *)((int)puVar23 + 1);
                    }
                    *(byte *)local_10 = 1;
                    iVar10 = this_01->array_00BC[0xc].field_01DB;
                    this_01->field_1A7B = this_01->field_0061;
                    this_01->field_1A7F = this_01->field_1A7F - 1;
                    uVar16 = STField<uint>(iVar10,0x6A6);
                    uVar16 = (uVar16 * 100 + this_01->field_1A7F * -100) / uVar16;
                    pcVar14_mg2 = LoadResourceString(0x252f,g_hINSTANCE_00807618);
                    /* ST_CALLSITE[005E90C7]: CALL dword ptr [0x0085bde8] */
                    wsprintfA((LPSTR)&DAT_0080f33a,pcVar14_mg2,uVar16);
                    /* ST_CALLSITE[005E90D9]: CALL 0x0040245a; direct=0040245A WaitTy::AddStr */
                    AddStr(this_01,&DAT_0080f33a,1);
                  }
                  if (this_01->field_1A7F == 0) {

                    iVar10 = thunk_FUN_005deb90((RecoveredRecordView_005DEB90_D3D89167 *)
                                                this_01->array_00BC[0xc].field_01DB);
                    if (iVar10 == 0) {
                      this_01->array_00BC[0xc].field_01F4 = 0;
                      thunk_FUN_005dac60();
                      iVar10 = this_01->array_00BC[0xc].field_01DB;
                      this_01->array_00BC[0xc].field_01F5 = 1;
                      /* ST_CALLSITE[005E9130]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
                      MMsgTy::SetMessage(*(MMsgTy **)(iVar10 + 0x2e6),0x252e,'\0',nullptr,
                                         nullptr,nullptr,0,0);
                    }
                    this_01->array_00BC[0xc].field_01F6 = 0;
                  }
                }
              }
              break;
            case 0x31:
            case 0x33:
            case 0x35:
              this_01->array_00BC[0xc].field_01F5 = 1;
              local_4c.id = (-(uint)(DAT_008067a0 != '\0') & 4) + MESS_WAITTY_694D;
              iVar10 = this_01->array_00BC[0xc].field_01DB;
              if (STField<int>(iVar10,0x2E6) == 0) {
LAB_005e91f7:
                /* ST_CALLSITE[005E91FF]: CALL dword ptr [EAX]; [STIndirectCallsiteApplier] exact slot 0x0; mode=dispatch; signature=__thiscall;/int;pointer:/WaitTy;pointer:/SubmarineTitans/Recovered/STMessage */
                this_01->GetMessage(&local_4c);
              }
              else {
                local_4c.unknown_08 = this_01->field_0008;
                local_4c.unknown_0c = 2;
                /* ST_CALLSITE[005E91F0]: CALL 0x00403fa8; direct=00403FA8 MMsgTy::SetMessage */
                MMsgTy::SetMessage(*(MMsgTy **)(iVar10 + 0x2e6),0x2522,'\0',&local_4c.unknown_00,
                                   nullptr,nullptr,0,0);
              }
            }
            this_01->array_00BC[0xc].field_01EC = this_01->field_0061;
            if (local_14 != nullptr) {
              FreeAndNull(&local_14);
            }
          }
          local_1c = local_1c + 1;
        } while (local_1c < local_24);
      }
      if ((((this_01->array_00BC[0xc].field_01F6 != '\0') &&
           (3000 < this_01->field_0061 - this_01->field_1A7B)) && (this_01->field_1A7F != 0)) &&
         (this_01->field_1A83 != nullptr)) {
        uVar16 = this_01->field_1A7F * 4 + 4;

        local_20 = Library::DKW::LIB::MemAlloc(uVar16);
        local_18 = this_01->field_1A83;
        *local_20 = this_01->field_1A7F;
        puVar17 = local_20 + 1;
        uVar14 = 0;
        uVar18 = 0;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if (*(int *)(this_01->array_00BC[0xc].field_01DB + 0x6a6) != 0) {
          do {
            if (local_18[uVar14] == 0) {
              *puVar17 = uVar14;
              puVar17 = puVar17 + 1;
              uVar18 = uVar18 + 1;
              if (this_01->field_1A7F <= uVar18) break;
            }
            uVar14 = uVar14 + 1;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          } while (uVar14 < *(uint *)(this_01->array_00BC[0xc].field_01DB + 0x6a6));
        }

        FUN_006b6500(g_int_00811764,1);

        FUN_00715360(g_int_00811764,1,'%',(char *)local_20,uVar16,1,0xffffffff);

        FUN_006b6500(g_int_00811764,DAT_0080733c);
        FreeAndNull(&local_20);
        this_01->field_1A7B = this_01->field_0061;
      }
    }
  }
  else if (cVar2 == '\x03') {
    if ((this_01->array_00BC[0xc].field_01E4 == 0) &&
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
       /* ST_CALLSITE[005E8751]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar10 = HoloTy::NextFas(this_01->field_1AF8), iVar10 != 0)) {
      local_c = 0;
    }
    if ((((this_01->array_00BC[0xc].field_01E4 == 0) || (this_01->array_00BC[0xc].field_01E8 != 0))
        && (this_01->field_1B00 != nullptr)) &&
       /* ST_CALLSITE[005E8777]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar10 = HoloTy::NextFas(this_01->field_1B00), iVar10 != 0)) {
      local_c = 0;
    }
    if (((this_01->array_00BC[0xc].field_01E4 == 0) && (this_01->field_1AFC != nullptr)) &&
       /* ST_CALLSITE[005E8795]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
       (iVar10 = HoloTy::NextFas(this_01->field_1AFC), iVar10 != 0)) {
      local_c = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != nullptr) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_c = 0;
    }
    if (local_c != 0) {
      if (this_01->field_1AF8 != nullptr) {
        /* ST_CALLSITE[005E87CD]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_01->field_1AF8);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1AF8);
        this_01->field_1AF8 = nullptr;
      }
      if (this_01->field_1B00 != nullptr) {
        /* ST_CALLSITE[005E87F1]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_01->field_1B00);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1B00);
        this_01->field_1B00 = nullptr;
      }
      if (this_01->field_1AFC != nullptr) {
        /* ST_CALLSITE[005E8815]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
        HoloTy::Done(this_01->field_1AFC);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1AFC);
        this_01->field_1AFC = nullptr;
      }
      iVar10 = this_01->array_00BC[0xc].field_01E4;
      this_01->field_0065 = 1;
      this_01->array_00BC[0xc].field_01EC = this_01->field_0061;
      if (iVar10 == 0) {

        Library::DKW::DDX::FUN_006b3430
                  ((int *)g_ddxContext_008075A8,g_startSystem_0081176C->field_02EC);
        if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
          FUN_006b3af0((int *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC);
        }
      }
      /* ST_CALLSITE[005E8897]: CALL 0x00402dbf; direct=00402DBF SetAccelerator */
      SetAccelerator(1,this_01->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
      iVar10 = this_01->array_00BC[0xc].field_01DB;
      if (STField<int>(iVar10,0x2E6) != 0) {
        memset(local_a8, 0, 0x1a); /* compiler bulk-zero initialization */
        local_9c = 1;
        local_9e = 1;
        /* ST_CALLSITE[005E88DB]: CALL 0x00404b51; direct=00404B51 MMsgTy::StatePanel */
        MMsgTy::StatePanel(*(MMsgTy **)(iVar10 + 0x2e6),(int)local_a8);
      }
      /* ST_CALLSITE[005E88E2]: CALL 0x004036b1; direct=004036B1 WaitTy::sub_005E9970 */
      sub_005E9970(this_01);
      puVar17 = this_01->field_1A94;
      iVar10 = 0x16;
      do {

        Library::DKW::DDX::FUN_006b3430((int *)g_ddxContext_008075A8,*puVar17);
        puVar17 = puVar17 + 1;
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
      /* ST_CALLSITE[005E8A34]: CALL 0x004043f4; direct=004043F4 WaitTy::PaintWait */
      PaintWait(this_01,'\0');
      g_currentExceptionFrame = local_ec.previous;
      return;
    }
  }
  else if (cVar2 == '\x04') {
    if ((this_01->array_00BC[0xc].field_01E4 == 0) && (0 < g_startSystem_0081176C->field_0300)) {
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
      /* ST_CALLSITE[005E85C9]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar10 = HoloTy::NextFas(this_01->field_1AF8);
      if (iVar10 == 0) {
        uVar16 = *(uint *)&this_01->field_1AF8->field_0x3;
        if (-1 < (int)uVar16) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar16);
        }
      }
      else {
        local_c = 0;
      }
    }
    if (((this_01->array_00BC[0xc].field_01E4 == 0) ||
        (this_01->array_00BC[0xc].field_01DF == '\x0e')) && (this_01->field_1B00 != nullptr))
    {
      /* ST_CALLSITE[005E860C]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar10 = HoloTy::NextFas(this_01->field_1B00);
      if (iVar10 == 0) {
        uVar16 = *(uint *)&this_01->field_1B00->field_0x3;
        if (-1 < (int)uVar16) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar16);
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((this_01->array_00BC[0xc].field_01E4 == 0) && (this_01->field_1AFC != nullptr)) {
      /* ST_CALLSITE[005E8646]: CALL 0x004055f1; direct=004055F1 HoloTy::NextFas */
      iVar10 = HoloTy::NextFas(this_01->field_1AFC);
      if (iVar10 == 0) {
        uVar16 = *(uint *)&this_01->field_1AFC->field_0x3;
        if (-1 < (int)uVar16) {
          FUN_006b3af0((int *)g_ddxContext_008075A8,uVar16);
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
      bVar3 = this_01->array_00BC[0xc].field_01DA;
      this_01->field_0065 = 2;
      if ((bVar3 != 0xff) && (*(int *)&this_01->array_00BC[bVar3].field_0x15 != 0)) {

        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_01->array_00BC[bVar3].field_0x5);
        g_currentExceptionFrame = local_ec.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_ec.previous;
  return;
}

