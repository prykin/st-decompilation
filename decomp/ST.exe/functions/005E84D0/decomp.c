#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::NoneWait */

void __thiscall WaitTy::NoneWait(WaitTy *this,int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  StartSystemTy *pSVar4;
  MMsgTy *this_00;
  code *pcVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  WaitTy *this_01;
  AnonShape_005E84D0_1273B60D *pAVar9;
  DWORD DVar10;
  int iVar11;
  undefined4 *puVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  AnonShape_005E84D0_1273B60D *pAVar19;
  undefined4 *puVar20;
  UINT UVar21;
  int *piVar22;
  undefined4 uVar23;
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
  char *local_20;
  int local_1c;
  int local_18;
  AnonShape_005E84D0_1273B60D *local_14;
  AnonShape_005E84D0_1273B60D *local_10;
  int local_c;
  char local_5;

  local_c = 1;
  local_50 = this;
  DVar10 = timeGetTime();
  this->field_0061 = DVar10;
  local_ec.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ec;
  iVar11 = Library::MSVCRT::__setjmp3(local_ec.jumpBuffer,0);
  this_01 = local_50;
  if (iVar11 != 0) {
    g_currentExceptionFrame = local_ec.previous;
    iVar15 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2a6,0,iVar11,
                                &DAT_007a4ccc,s_WaitTy__NoneWait_007cddf4);
    if (iVar15 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar11,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2a6);
    return;
  }
  if ((local_50->field_1A87 != 0) && (0xf9 < local_50->field_0061 - local_50->field_1A8B)) {
    ShowDescription(local_50);
    this_01->field_1A87 = 0;
  }
  cVar2 = this_01->field_0065;
  if (cVar2 == '\x01') {
    if (this_01->field_0x1a75 == '\0') {
      local_14 = (AnonShape_005E84D0_1273B60D *)0x0;
      piVar22 = local_4c;
      for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
        *piVar22 = 0;
        piVar22 = piVar22 + 1;
      }
      if (*(int *)&this_01->field_0x1a70 == 0) {
        pcVar13 = local_114;
        for (iVar11 = 9; iVar11 != 0; iVar11 = iVar11 + -1) {
          pcVar13[0] = '\0';
          pcVar13[1] = '\0';
          pcVar13[2] = '\0';
          pcVar13[3] = '\0';
          pcVar13 = pcVar13 + 4;
        }
        pcVar13[0] = '\0';
        pcVar13[1] = '\0';
        local_112 = 4;
        FUN_00715360(g_int_00811764,1,'\x1a',local_114,0x26,1,0xffffffff);
      }
      iVar11 = *(int *)&this_01->field_0x1a70 + 1;
      *(int *)&this_01->field_0x1a70 = iVar11;
      if (iVar11 == 10) {
        *(undefined4 *)&this_01->field_0x1a70 = 0;
      }
      if (DAT_008067a0 != '\0') {
        CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
      }
      Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_24,-1,0);
      local_1c = 0;
      if (0 < local_24) {
        do {
          iVar11 = Library::Ourlib::CONNECT::FUN_00715630
                             (g_int_00811764,-1,&local_2c,&local_6c,&local_14,&local_28,-1,0);
          pAVar9 = local_14;
          if (iVar11 == -0x4d) {
LAB_005e9233:
            this_01->field_0x1a74 = 0;
            this_01->field_0x1a75 = 1;
            local_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
            if (this_01->field_1A5B->field_02E6 == (MMsgTy *)0x0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)this_01->field_0000)(local_4c);
            }
            else {
              local_4c[2] = this_01->field_0008;
              local_4c[3] = 2;
              MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x2525,'\0',local_4c,
                                 (undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          else if (iVar11 == 0) {
            if (30000 < this_01->field_0061 - *(int *)&this_01->field_0x1a6c) goto LAB_005e9233;
          }
          else if (iVar11 == 1) {
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
                    if (this_01->field_0x1a76 != '\0') {
                      puVar20 = &this_01->field_1A5B->field_069A;
                      if (*puVar20 != 0) {
                        FreeAndNull((void **)puVar20);
                      }
                      this_01->field_0x1a76 = 0;
                    }
                    local_5 = '\x01';
                    this_01->field_1A5F = 0xe;
                    break;
                  case 2:
                  case 3:
                  case 4:
                    if (this_01->field_0x1a76 != '\0') {
                      if (*(int *)&this_01->field_0x1a77 != local_14->field_0003) {
                        puVar20 = &this_01->field_1A5B->field_069A;
                        if (*puVar20 != 0) {
                          FreeAndNull((void **)puVar20);
                        }
                        this_01->field_0x1a76 = 0;
                      }
                      if (this_01->field_0x1a76 != '\0') break;
                    }
                    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,
                              PTR_s_CUSTOM__0079c244);
                    local_5c = *puVar1;
                    local_5b = pAVar9->field_0003;
                    local_57 = 0;
                    iVar11 = FUN_00725910(&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,&local_5c,0
                                         );
                    if (iVar11 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_01->field_1A5F = ((*puVar1 == '\x03') - 1U & 0xfe) + 0xf;
                    break;
                  case 5:
                    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__007cce38,&DAT_00807680,
                              PTR_s_SAVEGAME__0079c240,&DAT_00807ddd);
                    local_68 = *puVar1;
                    local_67 = pAVar9->field_0003;
                    local_63 = *(undefined4 *)&pAVar9->field_0x7;
                    iVar11 = FUN_00725910(&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,&local_68,0
                                         );
                    if (iVar11 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_01->field_1A5F = 0x10;
                  }
                  if (local_5 == '\0') {
                    if (this_01->field_0x1a76 == '\0') {
                      if ((pAVar9[1].field_0x1 == '\0') ||
                         ((*(char *)local_10 == '\x01' && (*puVar1 == '\x05')))) {
                        this_01->field_0x1a74 = 0;
                        thunk_FUN_005dac60();
                        piVar22 = (int *)0x0;
                        this_01->field_0x1a75 = 1;
                        UVar21 = 0x2523;
                        goto LAB_005e8ee0;
                      }
                      this_01->field_0x1a76 = 1;
                      iVar11 = pAVar9->field_0003;
                      *(DWORD *)&this_01->field_0x1a7b = this_01->field_0061;
                      *(int *)&this_01->field_0x1a77 = iVar11;
                      puVar20 = &this_01->field_1A5B->field_069A;
                      if (*puVar20 != 0) {
                        FreeAndNull((void **)puVar20);
                      }
                      local_18 = -1;
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
                    (**(code **)(this_01->field_0000 + 8))();
                    this_00 = this_01->field_1A5B->field_02E6;
                    if (this_00 != (MMsgTy *)0x0) {
                      MMsgTy::HidePanel(this_00,1,0,1);
                    }
                  }
                }
                else if (*(char *)local_10 == '\x03') {
                  if (this_01->field_0x1a76 == '\0') {
                    if (local_14->field_0003 != DAT_008087be) {
                      this_01->field_1A8F = local_14->field_0003;
                      this_01->field_1A93 = local_14->field_000B;
                      this_01->field_1A87 = 1;
                      DVar10 = timeGetTime();
                      this_01->field_1A8B = DVar10;
                    }
                  }
                  else if (5000 < this_01->field_0061 - *(int *)&this_01->field_0x1a7b) {
                    this_01->field_0x1a76 = 0;
                  }
                }
              }
              else {
                this_01->field_0x1a74 = 0;
                piVar22 = local_8c;
                for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
                  *piVar22 = 0;
                  piVar22 = piVar22 + 1;
                }
                this_01->field_0x1a75 = 1;
                local_8c[2] = this_01->field_0008;
                piVar22 = local_8c;
                local_8c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                local_8c[3] = 2;
                UVar21 = 0x2526;
LAB_005e8ee0:
                MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,UVar21,'\0',piVar22,
                                   (undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
              break;
            case 0x1b:
              StartSystemTy::AddToChat(this_01->field_1A5B,(int)local_14);
              break;
            /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
            case 0x26:
              if ((((this_01->field_0x1a76 != '\0') &&
                   (local_14 != (AnonShape_005E84D0_1273B60D *)0x0)) &&
                  (*(int *)local_14 == *(int *)&this_01->field_0x1a77)) &&
                 ((local_10 = local_14 + 2, (int)local_28 <= *(int *)(local_14 + 2) + 0x1c &&
                  (0x1c < (int)local_28)))) {
                if (this_01->field_1A5B->field_069A == 0) {
                  pAVar19 = local_14 + 1;
                  iVar11 = Library::DKW::LIB::FUN_006aac70(*(int *)(local_14 + 1));
                  this_01->field_1A5B->field_069A = iVar11;
                  puVar20 = &this_01->field_1A83;
                  this_01->field_1A5B->field_069E = *(undefined4 *)pAVar19;
                  this_01->field_1A5B->field_06AE = *(undefined4 *)((int)&pAVar9[1].field_0003 + 1);
                  this_01->field_1A5B->field_06B2 = *(undefined4 *)&pAVar9[1].field_0x8;
                  *(int *)&this_01->field_1A5B->field_0x6a2 = *(int *)local_10;
                  pSVar4 = this_01->field_1A5B;
                  uVar6 = pAVar9->field_000B;
                  *(undefined3 *)&pSVar4->field_0x6a6 = *(undefined3 *)&pAVar9->field_0x8;
                  pSVar4->field_0x6a9 = uVar6;
                  if (*puVar20 != 0) {
                    FreeAndNull((void **)puVar20);
                  }
                  uVar16 = *(uint *)&this_01->field_1A5B->field_0x6a6;
                  *(uint *)&this_01->field_0x1a7f = uVar16;
                  puVar12 = Library::DKW::LIB::FUN_006aac10(uVar16);
                  *puVar20 = puVar12;
                  uVar23 = 0;
                  pcVar13 = LoadResourceString(0x252f,HINSTANCE_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,pcVar13,uVar23);
                  AddStr(this_01,&DAT_0080f33a,0);
                }
                iVar11 = *(int *)((int)&pAVar9->field_0003 + 1);
                if ((uint)(iVar11 * *(int *)local_10) < *(uint *)(pAVar9 + 1) ||
                    iVar11 * *(int *)local_10 - *(uint *)(pAVar9 + 1) == 0) {
                  local_10 = (AnonShape_005E84D0_1273B60D *)(this_01->field_1A83 + iVar11);
                  if (*(char *)local_10 == '\0') {
                    puVar20 = (undefined4 *)((int)&pAVar9[2].field_0003 + 1);
                    puVar12 = (undefined4 *)
                              (*(int *)&this_01->field_1A5B->field_0x6a2 * iVar11 +
                              this_01->field_1A5B->field_069A);
                    for (uVar16 = local_28 - 0x1c >> 2; uVar16 != 0; uVar16 = uVar16 - 1) {
                      *puVar12 = *puVar20;
                      puVar20 = puVar20 + 1;
                      puVar12 = puVar12 + 1;
                    }
                    for (uVar16 = local_28 - 0x1c & 3; uVar16 != 0; uVar16 = uVar16 - 1) {
                      *(undefined1 *)puVar12 = *(undefined1 *)puVar20;
                      puVar20 = (undefined4 *)((int)puVar20 + 1);
                      puVar12 = (undefined4 *)((int)puVar12 + 1);
                    }
                    *(char *)local_10 = '\x01';
                    *(DWORD *)&this_01->field_0x1a7b = this_01->field_0061;
                    *(int *)&this_01->field_0x1a7f = *(int *)&this_01->field_0x1a7f + -1;
                    uVar16 = *(uint *)&this_01->field_1A5B->field_0x6a6;
                    uVar16 = (uVar16 * 100 + *(int *)&this_01->field_0x1a7f * -100) / uVar16;
                    pcVar13 = LoadResourceString(0x252f,HINSTANCE_00807618);
                    wsprintfA((LPSTR)&DAT_0080f33a,pcVar13,uVar16);
                    AddStr(this_01,&DAT_0080f33a,1);
                  }
                  if (*(int *)&this_01->field_0x1a7f == 0) {
                    iVar11 = thunk_FUN_005deb90((AnonShape_005DEB90_CA287120 *)this_01->field_1A5B);
                    if (iVar11 == 0) {
                      this_01->field_0x1a74 = 0;
                      thunk_FUN_005dac60();
                      this_01->field_0x1a75 = 1;
                      MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x252e,'\0',
                                         (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
                    }
                    this_01->field_0x1a76 = 0;
                  }
                }
              }
              break;
            case 0x31:
            case 0x33:
            case 0x35:
              this_01->field_0x1a75 = 1;
              local_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (this_01->field_1A5B->field_02E6 == (MMsgTy *)0x0) {
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_005e91f7:
                (**(code **)this_01->field_0000)(local_4c);
              }
              else {
                local_4c[2] = this_01->field_0008;
                local_4c[3] = 2;
                MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x2522,'\0',local_4c,
                                   (undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
            }
            *(DWORD *)&this_01->field_0x1a6c = this_01->field_0061;
            if (local_14 != (AnonShape_005E84D0_1273B60D *)0x0) {
              FreeAndNull(&local_14);
            }
          }
          local_1c = local_1c + 1;
        } while (local_1c < local_24);
      }
      if ((((this_01->field_0x1a76 != '\0') &&
           (3000 < this_01->field_0061 - *(int *)&this_01->field_0x1a7b)) &&
          (*(int *)&this_01->field_0x1a7f != 0)) && (this_01->field_1A83 != 0)) {
        uVar16 = *(int *)&this_01->field_0x1a7f * 4 + 4;
        local_20 = (char *)Library::DKW::LIB::FUN_006aac70(uVar16);
        local_18 = this_01->field_1A83;
        uVar6 = this_01->field_0x1a80;
        uVar7 = this_01->field_0x1a81;
        uVar8 = this_01->field_0x1a82;
        local_20[0] = this_01->field_0x1a7f;
        local_20[1] = uVar6;
        local_20[2] = uVar7;
        local_20[3] = uVar8;
        puVar17 = (uint *)(local_20 + 4);
        uVar14 = 0;
        uVar18 = 0;
        if (*(int *)&this_01->field_1A5B->field_0x6a6 != 0) {
          do {
            if (*(char *)(uVar14 + local_18) == '\0') {
              *puVar17 = uVar14;
              puVar17 = puVar17 + 1;
              uVar18 = uVar18 + 1;
              if (*(uint *)&this_01->field_0x1a7f <= uVar18) break;
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < *(uint *)&this_01->field_1A5B->field_0x6a6);
        }
        FUN_006b6500(g_int_00811764,1);
        FUN_00715360(g_int_00811764,1,'%',local_20,uVar16,1,0xffffffff);
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        FreeAndNull(&local_20);
        *(DWORD *)&this_01->field_0x1a7b = this_01->field_0061;
      }
    }
  }
  else if (cVar2 == '\x03') {
    if ((this_01->field_1A64 == 0) &&
       ((int)PTR_0081176c->field_0300 < *(int *)&PTR_0081176c->field_0x304 + -1)) {
      PTR_0081176c->field_0300 = PTR_0081176c->field_0300 + 1;
      if (*(uint *)&PTR_0081176c->field_0x2fc != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)&PTR_0081176c->field_0x340,*(uint *)&PTR_0081176c->field_0x2fc,
                   PTR_0081176c->field_0300,PTR_0081176c->field_0314,PTR_0081176c->field_0318);
      }
      local_c = 0;
    }
    if ((this_01->field_1AF8 != (HoloTy *)0x0) &&
       (iVar11 = HoloTy::NextFas(this_01->field_1AF8), iVar11 != 0)) {
      local_c = 0;
    }
    if ((((this_01->field_1A64 == 0) || (this_01->field_1A68 != 0)) &&
        (this_01->field_1B00 != (HoloTy *)0x0)) &&
       (iVar11 = HoloTy::NextFas(this_01->field_1B00), iVar11 != 0)) {
      local_c = 0;
    }
    if (((this_01->field_1A64 == 0) && (this_01->field_1AFC != (HoloTy *)0x0)) &&
       (iVar11 = HoloTy::NextFas(this_01->field_1AFC), iVar11 != 0)) {
      local_c = 0;
    }
    if ((PTR_0081176c->field_02E6 != (MMsgTy *)0x0) &&
       (PTR_0081176c->field_02E6->field_0065 != '\x01')) {
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
      *(DWORD *)&this_01->field_0x1a6c = this_01->field_0061;
      if (this_01->field_1A64 == 0) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_02EC);
        if (*(uint *)&PTR_0081176c->field_0x2fc != 0xffffffff) {
          FUN_006b3af0(*(int **)&PTR_0081176c->field_0x340,*(uint *)&PTR_0081176c->field_0x2fc);
        }
      }
      SetAccelerator(1,this_01->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
      pSVar4 = this_01->field_1A5B;
      if (pSVar4->field_02E6 != (MMsgTy *)0x0) {
        puVar20 = local_a8;
        for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar20 = 0;
          puVar20 = puVar20 + 1;
        }
        *(undefined2 *)puVar20 = 0;
        local_9c = 1;
        local_9e = 1;
        MMsgTy::StatePanel(pSVar4->field_02E6,(int)local_a8);
      }
      thunk_FUN_005e9970((AnonShape_005E9970_7C1AA6F1 *)this_01);
      puVar17 = &this_01->field_1A94;
      iVar11 = 0x16;
      do {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar17);
        puVar17 = puVar17 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if (PTR_0081176c->field_0391 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_03D5,PTR_0081176c->field_0391,0xfffffffe,
                   PTR_0081176c->field_03A9,PTR_0081176c->field_03AD);
      }
      if (PTR_0081176c->field_0422 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_0466,PTR_0081176c->field_0422,0xfffffffe,
                   PTR_0081176c->field_043A,PTR_0081176c->field_043E);
      }
      if (PTR_0081176c->field_04B3 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3,0xfffffffe,
                   PTR_0081176c->field_04CB,PTR_0081176c->field_04CF);
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0540);
      if (PTR_0081176c->field_0560 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                   PTR_0081176c->field_0578,PTR_0081176c->field_057C);
      }
      if (PTR_0081176c->field_05F1 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                   PTR_0081176c->field_0609,PTR_0081176c->field_060D);
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0558);
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0554);
      PaintWait(this_01,'\0');
      g_currentExceptionFrame = local_ec.previous;
      return;
    }
  }
  else if (cVar2 == '\x04') {
    if ((this_01->field_1A64 == 0) && (0 < (int)PTR_0081176c->field_0300)) {
      PTR_0081176c->field_0300 = PTR_0081176c->field_0300 + -1;
      if (*(uint *)&PTR_0081176c->field_0x2fc != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)&PTR_0081176c->field_0x340,*(uint *)&PTR_0081176c->field_0x2fc,
                   PTR_0081176c->field_0300,PTR_0081176c->field_0314,PTR_0081176c->field_0318);
      }
      local_c = 0;
    }
    if (this_01->field_1AF8 != (HoloTy *)0x0) {
      iVar11 = HoloTy::NextFas(this_01->field_1AF8);
      if (iVar11 == 0) {
        uVar16 = this_01->field_1AF8->field_0003;
        if (-1 < (int)uVar16) {
          FUN_006b3af0(DAT_008075a8,uVar16);
        }
      }
      else {
        local_c = 0;
      }
    }
    if (((this_01->field_1A64 == 0) || (this_01->field_1A5F == '\x0e')) &&
       (this_01->field_1B00 != (HoloTy *)0x0)) {
      iVar11 = HoloTy::NextFas(this_01->field_1B00);
      if (iVar11 == 0) {
        uVar16 = this_01->field_1B00->field_0003;
        if (-1 < (int)uVar16) {
          FUN_006b3af0(DAT_008075a8,uVar16);
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((this_01->field_1A64 == 0) && (this_01->field_1AFC != (HoloTy *)0x0)) {
      iVar11 = HoloTy::NextFas(this_01->field_1AFC);
      if (iVar11 == 0) {
        uVar16 = this_01->field_1AFC->field_0003;
        if (-1 < (int)uVar16) {
          FUN_006b3af0(DAT_008075a8,uVar16);
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((PTR_0081176c->field_02E6 != (MMsgTy *)0x0) &&
       (PTR_0081176c->field_02E6->field_0065 != '\x02')) {
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

