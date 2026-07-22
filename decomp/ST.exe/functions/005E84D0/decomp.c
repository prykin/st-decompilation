#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::NoneWait */

void __thiscall WaitTy::NoneWait(WaitTy *this,int *param_1)

{
  undefined1 *puVar1;
  byte **value;
  char cVar2;
  byte bVar3;
  StartSystemTy *pSVar4;
  MMsgTy *this_00;
  code *pcVar5;
  WaitTy *this_01;
  AnonShape_005E84D0_1273B60D *pAVar6;
  DWORD DVar7;
  int iVar8;
  byte *pbVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  AnonShape_005E84D0_1273B60D *pAVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  UINT UVar19;
  int *piVar20;
  undefined4 uVar21;
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
  int local_4c [8];
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
  iVar8 = Library::MSVCRT::__setjmp3(local_ec.jumpBuffer,0);
  this_01 = local_50;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_ec.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x2a6,0,iVar8,
                                "%s","WaitTy::NoneWait");
    if (iVar12 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar8,0,"E:\\__titans\\Start\\wait_obj.cpp",0x2a6);
    return;
  }
  if ((local_50->field_1A87 != 0) && (0xf9 < local_50->field_0061 - local_50->field_1A8B)) {
    ShowDescription(local_50);
    this_01->field_1A87 = 0;
  }
  cVar2 = this_01->field_0065;
  if (cVar2 == '\x01') {
    if (this_01->field_1A75 == '\0') {
      local_14 = (AnonShape_005E84D0_1273B60D *)0x0;
      memset(local_4c, 0, 0x20); /* compiler bulk-zero initialization */
      iVar8 = 0;
      if (this_01->field_1A70 == 0) {
        pcVar10 = local_114;
        for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
          pcVar10[0] = '\0';
          pcVar10[1] = '\0';
          pcVar10[2] = '\0';
          pcVar10[3] = '\0';
          pcVar10 = pcVar10 + 4;
        }
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        local_112 = 4;
        FUN_00715360(g_int_00811764,1,'\x1a',local_114,0x26,1,0xffffffff);
      }
      iVar8 = this_01->field_1A70 + 1;
      this_01->field_1A70 = iVar8;
      if (iVar8 == 10) {
        this_01->field_1A70 = 0;
      }
      if (DAT_008067a0 != '\0') {
        CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
      }
      Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_24,-1,0);
      local_1c = 0;
      if (0 < local_24) {
        do {
          iVar8 = Library::Ourlib::CONNECT::FUN_00715630
                            (g_int_00811764,-1,&local_2c,&local_6c,&local_14,&local_28,-1,0);
          pAVar6 = local_14;
          if (iVar8 == -0x4d) {
LAB_005e9233:
            this_01->field_1A74 = 0;
            this_01->field_1A75 = 1;
            local_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
            if (this_01->field_1A5B->field_02E6 == (MMsgTy *)0x0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (*(code *)this_01->field_0000->field_0000)(local_4c);
            }
            else {
              local_4c[2] = this_01->field_0008;
              local_4c[3] = 2;
              MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x2525,'\0',local_4c,
                                 (undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          else if (iVar8 == 0) {
            if (30000 < this_01->field_0061 - this_01->field_1A6C) goto LAB_005e9233;
          }
          else if (iVar8 == 1) {
            switch(local_2c) {
            case 0x10:
              if (this_01->field_0065 == '\x01') {
                local_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                if (this_01->field_1A5B->field_02E6 == (MMsgTy *)0x0) goto LAB_005e91f7;
                local_4c[2] = this_01->field_0008;
                local_4c[3] = 2;
                MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x2524,'\0',local_4c,
                                   (undefined4 *)0x0,(undefined4 *)0x0,0,0);
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
                      puVar17 = &this_01->field_1A5B->field_069A;
                      if (*puVar17 != 0) {
                        FreeAndNull((void **)puVar17);
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
                        puVar17 = &this_01->field_1A5B->field_069A;
                        if (*puVar17 != 0) {
                          FreeAndNull((void **)puVar17);
                        }
                        this_01->field_1A76 = 0;
                      }
                      if (this_01->field_1A76 != '\0') break;
                    }
                    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s",&DAT_00807680,
                              PTR_s_CUSTOM__0079c244);
                    local_5c = *puVar1;
                    local_5b = pAVar6->field_0003;
                    local_57 = 0;
                    iVar8 = FUN_00725910(&DAT_0080f33a,"*.DKD",0,thunk_FUN_005db030,
                                         &local_5c,0);
                    if (iVar8 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_01->field_1A5F = ((*puVar1 == '\x03') - 1U & 0xfe) + 0xf;
                    break;
                  case 5:
                    wsprintfA((LPSTR)&DAT_0080f33a,"%s%s%s\\",&DAT_00807680,
                              PTR_s_SAVEGAME__0079c240,&DAT_00807ddd);
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
                        piVar20 = (int *)0x0;
                        this_01->field_1A75 = 1;
                        UVar19 = 0x2523;
                        goto LAB_005e8ee0;
                      }
                      this_01->field_1A76 = 1;
                      iVar8 = pAVar6->field_0003;
                      this_01->field_1A7B = this_01->field_0061;
                      this_01->field_1A77 = iVar8;
                      puVar17 = &this_01->field_1A5B->field_069A;
                      if (*puVar17 != 0) {
                        FreeAndNull((void **)puVar17);
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
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                    (*(code *)this_01->field_0000->field_0008)();
                    this_00 = this_01->field_1A5B->field_02E6;
                    if (this_00 != (MMsgTy *)0x0) {
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
                piVar20 = local_8c;
                local_8c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                local_8c[3] = 2;
                UVar19 = 0x2526;
LAB_005e8ee0:
                MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,UVar19,'\0',piVar20,
                                   (undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
              break;
            case 0x1b:
              StartSystemTy::AddToChat(this_01->field_1A5B,(int)local_14);
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0x26:
              if ((((this_01->field_1A76 != '\0') &&
                   (local_14 != (AnonShape_005E84D0_1273B60D *)0x0)) &&
                  (*(int *)local_14 == this_01->field_1A77)) &&
                 ((local_10 = local_14 + 2, (int)local_28 <= *(int *)(local_14 + 2) + 0x1c &&
                  (0x1c < (int)local_28)))) {
                if (this_01->field_1A5B->field_069A == 0) {
                  pAVar16 = local_14 + 1;
                  iVar8 = Library::DKW::LIB::FUN_006aac70(*(int *)(local_14 + 1));
                  this_01->field_1A5B->field_069A = iVar8;
                  value = &this_01->field_1A83;
                  this_01->field_1A5B->field_069E = *(uint *)pAVar16;
                  this_01->field_1A5B->field_06AE = *(undefined4 *)((int)&pAVar6[1].field_0003 + 1);
                  this_01->field_1A5B->field_06B2 = *(undefined4 *)&pAVar6[1].field_0x8;
                  this_01->field_1A5B->field_06A2 = *(uint *)local_10;
                  this_01->field_1A5B->field_06A6 = *(uint *)&pAVar6->field_0x8;
                  if (*value != (byte *)0x0) {
                    FreeAndNull(value);
                  }
                  uVar13 = this_01->field_1A5B->field_06A6;
                  this_01->field_1A7F = uVar13;
                  pbVar9 = (byte *)Library::DKW::LIB::FUN_006aac10(uVar13);
                  *value = pbVar9;
                  uVar21 = 0;
                  pcVar10 = LoadResourceString(0x252f,g_module_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,pcVar10,uVar21);
                  AddStr(this_01,&DAT_0080f33a,0);
                }
                iVar8 = *(int *)((int)&pAVar6->field_0003 + 1);
                if (iVar8 * *(uint *)local_10 < *(uint *)(pAVar6 + 1) ||
                    iVar8 * *(uint *)local_10 - *(uint *)(pAVar6 + 1) == 0) {
                  local_10 = (AnonShape_005E84D0_1273B60D *)(this_01->field_1A83 + iVar8);
                  if (*(char *)local_10 == '\0') {
                    puVar17 = (undefined4 *)((int)&pAVar6[2].field_0003 + 1);
                    puVar18 = (undefined4 *)
                              (this_01->field_1A5B->field_06A2 * iVar8 +
                              this_01->field_1A5B->field_069A);
                    for (uVar13 = local_28 - 0x1c >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                      *puVar18 = *puVar17;
                      puVar17 = puVar17 + 1;
                      puVar18 = puVar18 + 1;
                    }
                    for (uVar13 = local_28 - 0x1c & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
                      *(undefined1 *)puVar18 = *(undefined1 *)puVar17;
                      puVar17 = (undefined4 *)((int)puVar17 + 1);
                      puVar18 = (undefined4 *)((int)puVar18 + 1);
                    }
                    *(char *)local_10 = '\x01';
                    this_01->field_1A7B = this_01->field_0061;
                    this_01->field_1A7F = this_01->field_1A7F - 1;
                    uVar13 = this_01->field_1A5B->field_06A6;
                    uVar13 = (uVar13 * 100 + this_01->field_1A7F * -100) / uVar13;
                    pcVar10 = LoadResourceString(0x252f,g_module_00807618);
                    wsprintfA((LPSTR)&DAT_0080f33a,pcVar10,uVar13);
                    AddStr(this_01,&DAT_0080f33a,1);
                  }
                  if (this_01->field_1A7F == 0) {
                    iVar8 = thunk_FUN_005deb90((AnonShape_005DEB90_CA287120 *)this_01->field_1A5B);
                    if (iVar8 == 0) {
                      this_01->field_1A74 = 0;
                      thunk_FUN_005dac60();
                      this_01->field_1A75 = 1;
                      MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x252e,'\0',
                                         (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
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
              local_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (this_01->field_1A5B->field_02E6 == (MMsgTy *)0x0) {
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_005e91f7:
                (*(code *)this_01->field_0000->field_0000)(local_4c);
              }
              else {
                local_4c[2] = this_01->field_0008;
                local_4c[3] = 2;
                MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x2522,'\0',local_4c,
                                   (undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
            }
            this_01->field_1A6C = this_01->field_0061;
            if (local_14 != (AnonShape_005E84D0_1273B60D *)0x0) {
              FreeAndNull(&local_14);
            }
          }
          local_1c = local_1c + 1;
        } while (local_1c < local_24);
      }
      if ((((this_01->field_1A76 != '\0') && (3000 < this_01->field_0061 - this_01->field_1A7B)) &&
          (this_01->field_1A7F != 0)) && (this_01->field_1A83 != (byte *)0x0)) {
        uVar13 = this_01->field_1A7F * 4 + 4;
        local_20 = (uint *)Library::DKW::LIB::FUN_006aac70(uVar13);
        local_18 = this_01->field_1A83;
        *local_20 = this_01->field_1A7F;
        puVar14 = local_20 + 1;
        uVar11 = 0;
        uVar15 = 0;
        if (this_01->field_1A5B->field_06A6 != 0) {
          do {
            if (local_18[uVar11] == 0) {
              *puVar14 = uVar11;
              puVar14 = puVar14 + 1;
              uVar15 = uVar15 + 1;
              if (this_01->field_1A7F <= uVar15) break;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < this_01->field_1A5B->field_06A6);
        }
        FUN_006b6500(g_int_00811764,1);
        FUN_00715360(g_int_00811764,1,'%',(char *)local_20,uVar13,1,0xffffffff);
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
    if ((this_01->field_1AF8 != (HoloTy *)0x0) &&
       (iVar8 = HoloTy::NextFas(this_01->field_1AF8), iVar8 != 0)) {
      local_c = 0;
    }
    if ((((this_01->field_1A64 == 0) || (this_01->field_1A68 != 0)) &&
        (this_01->field_1B00 != (HoloTy *)0x0)) &&
       (iVar8 = HoloTy::NextFas(this_01->field_1B00), iVar8 != 0)) {
      local_c = 0;
    }
    if (((this_01->field_1A64 == 0) && (this_01->field_1AFC != (HoloTy *)0x0)) &&
       (iVar8 = HoloTy::NextFas(this_01->field_1AFC), iVar8 != 0)) {
      local_c = 0;
    }
    if ((g_startSystem_0081176C->field_02E6 != (MMsgTy *)0x0) &&
       (g_startSystem_0081176C->field_02E6->field_0065 != '\x01')) {
      local_c = 0;
    }
    if (local_c != 0) {
      if (this_01->field_1AF8 != (HoloTy *)0x0) {
        HoloTy::Done(this_01->field_1AF8);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1AF8);
        this_01->field_1AF8 = (HoloTy *)0x0;
      }
      if (this_01->field_1B00 != (HoloTy *)0x0) {
        HoloTy::Done(this_01->field_1B00);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1B00);
        this_01->field_1B00 = (HoloTy *)0x0;
      }
      if (this_01->field_1AFC != (HoloTy *)0x0) {
        HoloTy::Done(this_01->field_1AFC);
        Library::MSVCRT::FUN_0072e2b0(this_01->field_1AFC);
        this_01->field_1AFC = (HoloTy *)0x0;
      }
      this_01->field_0065 = 1;
      this_01->field_1A6C = this_01->field_0061;
      if (this_01->field_1A64 == 0) {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,g_startSystem_0081176C->field_02EC);
        if (g_startSystem_0081176C->field_02FC != 0xffffffff) {
          FUN_006b3af0((int *)g_startSystem_0081176C->field_0340,g_startSystem_0081176C->field_02FC)
          ;
        }
      }
      SetAccelerator(1,this_01->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
      pSVar4 = this_01->field_1A5B;
      if (pSVar4->field_02E6 != (MMsgTy *)0x0) {
        memset(local_a8, 0, 0x1a); /* compiler bulk-zero initialization */
        local_9c = 1;
        local_9e = 1;
        MMsgTy::StatePanel(pSVar4->field_02E6,(int)local_a8);
      }
      sub_005E9970(this_01);
      puVar14 = &this_01->field_1A94;
      iVar8 = 0x16;
      do {
        Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,*puVar14);
        puVar14 = puVar14 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      if (g_startSystem_0081176C->field_0391 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_03D5,g_startSystem_0081176C->field_0391,
                   0xfffffffe,g_startSystem_0081176C->field_03A9,g_startSystem_0081176C->field_03AD)
        ;
      }
      if (g_startSystem_0081176C->field_0422 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_0466,g_startSystem_0081176C->field_0422,
                   0xfffffffe,g_startSystem_0081176C->field_043A,g_startSystem_0081176C->field_043E)
        ;
      }
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3,
                   0xfffffffe,g_startSystem_0081176C->field_04CB,g_startSystem_0081176C->field_04CF)
        ;
      }
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,g_startSystem_0081176C->field_0540);
      if (g_startSystem_0081176C->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_05A4,g_startSystem_0081176C->field_0560,
                   0xfffffffe,g_startSystem_0081176C->field_0578,g_startSystem_0081176C->field_057C)
        ;
      }
      if (g_startSystem_0081176C->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)g_startSystem_0081176C->field_0635,g_startSystem_0081176C->field_05F1,
                   0xfffffffe,g_startSystem_0081176C->field_0609,g_startSystem_0081176C->field_060D)
        ;
      }
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,g_startSystem_0081176C->field_0558);
      Library::DKW::DDX::FUN_006b3430((int *)PTR_008075a8,g_startSystem_0081176C->field_0554);
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
    if (this_01->field_1AF8 != (HoloTy *)0x0) {
      iVar8 = HoloTy::NextFas(this_01->field_1AF8);
      if (iVar8 == 0) {
        uVar13 = this_01->field_1AF8->field_0003;
        if (-1 < (int)uVar13) {
          FUN_006b3af0((int *)PTR_008075a8,uVar13);
        }
      }
      else {
        local_c = 0;
      }
    }
    if (((this_01->field_1A64 == 0) || (this_01->field_1A5F == '\x0e')) &&
       (this_01->field_1B00 != (HoloTy *)0x0)) {
      iVar8 = HoloTy::NextFas(this_01->field_1B00);
      if (iVar8 == 0) {
        uVar13 = this_01->field_1B00->field_0003;
        if (-1 < (int)uVar13) {
          FUN_006b3af0((int *)PTR_008075a8,uVar13);
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((this_01->field_1A64 == 0) && (this_01->field_1AFC != (HoloTy *)0x0)) {
      iVar8 = HoloTy::NextFas(this_01->field_1AFC);
      if (iVar8 == 0) {
        uVar13 = this_01->field_1AFC->field_0003;
        if (-1 < (int)uVar13) {
          FUN_006b3af0((int *)PTR_008075a8,uVar13);
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((g_startSystem_0081176C->field_02E6 != (MMsgTy *)0x0) &&
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

