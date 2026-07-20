
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::NoneWait */

void __thiscall WaitTy::NoneWait(WaitTy *this,int *param_1)

{
  char cVar1;
  byte bVar2;
  StartSystemTy *pSVar3;
  MMsgTy *this_00;
  code *pcVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  WaitTy *this_01;
  DWORD DVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar17;
  int *piVar18;
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
  undefined4 local_67;
  undefined4 local_63;
  char local_5c;
  undefined4 local_5b;
  undefined4 local_57;
  WaitTy *local_50;
  int local_4c [8];
  uint local_2c;
  uint local_28;
  int local_24;
  char *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  int local_c;
  char local_5;
  
  local_c = 1;
  local_50 = this;
  DVar8 = timeGetTime();
  this->field_0061 = DVar8;
  local_ec.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ec;
  iVar9 = Library::MSVCRT::__setjmp3(local_ec.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_50;
  if (iVar9 != 0) {
    g_currentExceptionFrame = local_ec.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2a6,0,iVar9,
                                &DAT_007a4ccc,s_WaitTy__NoneWait_007cddf4);
    if (iVar13 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar9,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2a6);
    return;
  }
  if ((local_50->field_1A87 != 0) && (0xf9 < local_50->field_0061 - local_50->field_1A8B)) {
    ShowDescription(local_50);
    this_01->field_1A87 = 0;
  }
  cVar1 = this_01->field_0065;
  if (cVar1 == '\x01') {
    if (this_01->field_0x1a75 == '\0') {
      local_14 = (int *)0x0;
      piVar20 = local_4c;
      for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
        *piVar20 = 0;
        piVar20 = piVar20 + 1;
      }
      if (*(int *)&this_01->field_0x1a70 == 0) {
        pcVar11 = local_114;
        for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
          pcVar11[0] = '\0';
          pcVar11[1] = '\0';
          pcVar11[2] = '\0';
          pcVar11[3] = '\0';
          pcVar11 = pcVar11 + 4;
        }
        pcVar11[0] = '\0';
        pcVar11[1] = '\0';
        local_112 = 4;
        FUN_00715360(g_int_00811764,1,'\x1a',local_114,0x26,1,0xffffffff);
      }
      iVar9 = *(int *)&this_01->field_0x1a70 + 1;
      *(int *)&this_01->field_0x1a70 = iVar9;
      if (iVar9 == 10) {
        *(undefined4 *)&this_01->field_0x1a70 = 0;
      }
      if (DAT_008067a0 != '\0') {
        CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
      }
      Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_24,-1,0);
      local_1c = 0;
      if (0 < local_24) {
        do {
          iVar9 = Library::Ourlib::CONNECT::FUN_00715630
                            (g_int_00811764,-1,&local_2c,&local_6c,&local_14,&local_28,-1,0);
          piVar20 = local_14;
          if (iVar9 == -0x4d) {
LAB_005e9233:
            this_01->field_0x1a74 = 0;
            this_01->field_0x1a75 = 1;
            local_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
            if (this_01->field_1A5B->field_02E6 == (MMsgTy *)0x0) {
              (**(code **)this_01->field_0000)(local_4c);
            }
            else {
              local_4c[2] = this_01->field_0008;
              local_4c[3] = 2;
              MMsgTy::SetMessage(this_01->field_1A5B->field_02E6,0x2525,'\0',local_4c,
                                 (undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          else if (iVar9 == 0) {
            if (30000 < this_01->field_0061 - *(int *)&this_01->field_0x1a6c) goto LAB_005e9233;
          }
          else if (iVar9 == 1) {
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
              if ((short)*local_14 == (short)((uint)DAT_00807dd5 >> 0x10)) {
                local_10 = (int *)((int)local_14 + 2);
                if (*(char *)local_10 == '\x01') {
                  pcVar11 = (char *)((int)local_14 + 0xb);
                  switch(*pcVar11) {
                  case '\x01':
                    if (this_01->field_0x1a76 != '\0') {
                      puVar17 = &this_01->field_1A5B->field_069A;
                      if (*puVar17 != 0) {
                        FUN_006ab060((LPVOID *)puVar17);
                      }
                      this_01->field_0x1a76 = 0;
                    }
                    local_5 = '\x01';
                    this_01->field_1A5F = 0xe;
                    break;
                  case '\x02':
                  case '\x03':
                  case '\x04':
                    if (this_01->field_0x1a76 != '\0') {
                      if (*(int *)&this_01->field_0x1a77 != *(int *)((int)local_14 + 3)) {
                        puVar17 = &this_01->field_1A5B->field_069A;
                        if (*puVar17 != 0) {
                          FUN_006ab060((LPVOID *)puVar17);
                        }
                        this_01->field_0x1a76 = 0;
                      }
                      if (this_01->field_0x1a76 != '\0') break;
                    }
                    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,
                              PTR_s_CUSTOM__0079c244);
                    local_5c = *pcVar11;
                    local_5b = *(undefined4 *)((int)piVar20 + 3);
                    local_57 = 0;
                    iVar9 = FUN_00725910(&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,&local_5c,0)
                    ;
                    if (iVar9 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_01->field_1A5F = ((*pcVar11 == '\x03') - 1U & 0xfe) + 0xf;
                    break;
                  case '\x05':
                    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__007cce38,&DAT_00807680,
                              PTR_s_SAVEGAME__0079c240,&DAT_00807ddd);
                    local_68 = *pcVar11;
                    local_67 = *(undefined4 *)((int)piVar20 + 3);
                    local_63 = *(undefined4 *)((int)piVar20 + 7);
                    iVar9 = FUN_00725910(&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,&local_68,0)
                    ;
                    if (iVar9 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_01->field_1A5F = 0x10;
                  }
                  if (local_5 == '\0') {
                    if (this_01->field_0x1a76 == '\0') {
                      if ((*(char *)((int)piVar20 + 0xd) == '\0') ||
                         (((char)*local_10 == '\x01' && (*pcVar11 == '\x05')))) {
                        this_01->field_0x1a74 = 0;
                        thunk_FUN_005dac60();
                        piVar20 = (int *)0x0;
                        this_01->field_0x1a75 = 1;
                        UVar19 = 0x2523;
                        goto LAB_005e8ee0;
                      }
                      this_01->field_0x1a76 = 1;
                      uVar21 = *(undefined4 *)((int)piVar20 + 3);
                      *(DWORD *)&this_01->field_0x1a7b = this_01->field_0061;
                      *(undefined4 *)&this_01->field_0x1a77 = uVar21;
                      puVar17 = &this_01->field_1A5B->field_069A;
                      if (*puVar17 != 0) {
                        FUN_006ab060((LPVOID *)puVar17);
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
                    if (*pcVar11 == '\x01') {
                      DAT_008087be = 0;
                    }
                    this_01->field_1A64 = 1;
                    (**(code **)(this_01->field_0000 + 8))();
                    this_00 = this_01->field_1A5B->field_02E6;
                    if (this_00 != (MMsgTy *)0x0) {
                      MMsgTy::HidePanel(this_00,1,0,1);
                    }
                  }
                }
                else if (*(char *)local_10 == '\x03') {
                  if (this_01->field_0x1a76 == '\0') {
                    if (*(int *)((int)local_14 + 3) != DAT_008087be) {
                      this_01->field_1A8F = *(int *)((int)local_14 + 3);
                      this_01->field_1A93 = *(undefined1 *)((int)local_14 + 0xb);
                      this_01->field_1A87 = 1;
                      DVar8 = timeGetTime();
                      this_01->field_1A8B = DVar8;
                    }
                  }
                  else if (5000 < this_01->field_0061 - *(int *)&this_01->field_0x1a7b) {
                    this_01->field_0x1a76 = 0;
                  }
                }
              }
              else {
                this_01->field_0x1a74 = 0;
                piVar20 = local_8c;
                for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
                  *piVar20 = 0;
                  piVar20 = piVar20 + 1;
                }
                this_01->field_0x1a75 = 1;
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
            case 0x26:
              if ((((this_01->field_0x1a76 != '\0') && (local_14 != (int *)0x0)) &&
                  (*local_14 == *(int *)&this_01->field_0x1a77)) &&
                 ((local_10 = local_14 + 6, (int)local_28 <= local_14[6] + 0x1c &&
                  (0x1c < (int)local_28)))) {
                if (this_01->field_1A5B->field_069A == 0) {
                  piVar18 = local_14 + 3;
                  iVar9 = Library::DKW::LIB::FUN_006aac70(local_14[3]);
                  this_01->field_1A5B->field_069A = iVar9;
                  puVar17 = &this_01->field_1A83;
                  this_01->field_1A5B->field_069E = *piVar18;
                  this_01->field_1A5B->field_06AE = piVar20[4];
                  this_01->field_1A5B->field_06B2 = piVar20[5];
                  *(int *)&this_01->field_1A5B->field_0x6a2 = *local_10;
                  *(int *)&this_01->field_1A5B->field_0x6a6 = piVar20[2];
                  if (*puVar17 != 0) {
                    FUN_006ab060((LPVOID *)puVar17);
                  }
                  uVar14 = *(uint *)&this_01->field_1A5B->field_0x6a6;
                  *(uint *)&this_01->field_0x1a7f = uVar14;
                  puVar10 = Library::DKW::LIB::FUN_006aac10(uVar14);
                  *puVar17 = puVar10;
                  uVar21 = 0;
                  pcVar11 = (char *)FUN_006b0140(0x252f,HINSTANCE_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,pcVar11,uVar21);
                  AddStr(this_01,&DAT_0080f33a,0);
                }
                iVar9 = piVar20[1];
                if ((uint)(iVar9 * *local_10) < (uint)piVar20[3] ||
                    iVar9 * *local_10 - piVar20[3] == 0) {
                  local_10 = (int *)(this_01->field_1A83 + iVar9);
                  if ((char)*local_10 == '\0') {
                    piVar20 = piVar20 + 7;
                    piVar18 = (int *)(*(int *)&this_01->field_1A5B->field_0x6a2 * iVar9 +
                                     this_01->field_1A5B->field_069A);
                    for (uVar14 = local_28 - 0x1c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                      *piVar18 = *piVar20;
                      piVar20 = piVar20 + 1;
                      piVar18 = piVar18 + 1;
                    }
                    for (uVar14 = local_28 - 0x1c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                      *(char *)piVar18 = (char)*piVar20;
                      piVar20 = (int *)((int)piVar20 + 1);
                      piVar18 = (int *)((int)piVar18 + 1);
                    }
                    *(char *)local_10 = '\x01';
                    *(DWORD *)&this_01->field_0x1a7b = this_01->field_0061;
                    *(int *)&this_01->field_0x1a7f = *(int *)&this_01->field_0x1a7f + -1;
                    uVar14 = *(uint *)&this_01->field_1A5B->field_0x6a6;
                    uVar14 = (uVar14 * 100 + *(int *)&this_01->field_0x1a7f * -100) / uVar14;
                    pcVar11 = (char *)FUN_006b0140(0x252f,HINSTANCE_00807618);
                    wsprintfA((LPSTR)&DAT_0080f33a,pcVar11,uVar14);
                    AddStr(this_01,&DAT_0080f33a,1);
                  }
                  if (*(int *)&this_01->field_0x1a7f == 0) {
                    iVar9 = thunk_FUN_005deb90((int)this_01->field_1A5B);
                    if (iVar9 == 0) {
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
            if (local_14 != (int *)0x0) {
              FUN_006ab060(&local_14);
            }
          }
          local_1c = local_1c + 1;
        } while (local_1c < local_24);
      }
      if ((((this_01->field_0x1a76 != '\0') &&
           (3000 < this_01->field_0061 - *(int *)&this_01->field_0x1a7b)) &&
          (*(int *)&this_01->field_0x1a7f != 0)) && (this_01->field_1A83 != 0)) {
        uVar14 = *(int *)&this_01->field_0x1a7f * 4 + 4;
        local_20 = (char *)Library::DKW::LIB::FUN_006aac70(uVar14);
        local_18 = this_01->field_1A83;
        uVar5 = this_01->field_0x1a80;
        uVar6 = this_01->field_0x1a81;
        uVar7 = this_01->field_0x1a82;
        local_20[0] = this_01->field_0x1a7f;
        local_20[1] = uVar5;
        local_20[2] = uVar6;
        local_20[3] = uVar7;
        puVar15 = (uint *)(local_20 + 4);
        uVar12 = 0;
        uVar16 = 0;
        if (*(int *)&this_01->field_1A5B->field_0x6a6 != 0) {
          do {
            if (*(char *)(uVar12 + local_18) == '\0') {
              *puVar15 = uVar12;
              puVar15 = puVar15 + 1;
              uVar16 = uVar16 + 1;
              if (*(uint *)&this_01->field_0x1a7f <= uVar16) break;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)&this_01->field_1A5B->field_0x6a6);
        }
        FUN_006b6500(g_int_00811764,1);
        FUN_00715360(g_int_00811764,1,'%',local_20,uVar14,1,0xffffffff);
        FUN_006b6500(g_int_00811764,DAT_0080733c);
        FUN_006ab060(&local_20);
        *(DWORD *)&this_01->field_0x1a7b = this_01->field_0061;
      }
    }
  }
  else if (cVar1 == '\x03') {
    if ((this_01->field_1A64 == 0) &&
       (*(int *)(DAT_0081176c + 0x300) < *(int *)(DAT_0081176c + 0x304) + -1)) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + 1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                   *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                   *(uint *)(DAT_0081176c + 0x318));
      }
      local_c = 0;
    }
    if ((this_01->field_1AF8 != (HoloTy *)0x0) &&
       (iVar9 = HoloTy::NextFas(this_01->field_1AF8), iVar9 != 0)) {
      local_c = 0;
    }
    if ((((this_01->field_1A64 == 0) || (this_01->field_1A68 != 0)) &&
        (this_01->field_1B00 != (HoloTy *)0x0)) &&
       (iVar9 = HoloTy::NextFas(this_01->field_1B00), iVar9 != 0)) {
      local_c = 0;
    }
    if (((this_01->field_1A64 == 0) && (this_01->field_1AFC != (HoloTy *)0x0)) &&
       (iVar9 = HoloTy::NextFas(this_01->field_1AFC), iVar9 != 0)) {
      local_c = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
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
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
        if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc));
        }
      }
      SetAccelerator(1,this_01->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
      pSVar3 = this_01->field_1A5B;
      if (pSVar3->field_02E6 != (MMsgTy *)0x0) {
        puVar17 = local_a8;
        for (iVar9 = 6; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar17 = 0;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = 0;
        local_9c = 1;
        local_9e = 1;
        MMsgTy::StatePanel(pSVar3->field_02E6,(int)local_a8);
      }
      thunk_FUN_005e9970((int)this_01);
      puVar15 = &this_01->field_1A94;
      iVar9 = 0x16;
      do {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar15);
        puVar15 = puVar15 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x3a9),*(uint *)(DAT_0081176c + 0x3ad));
      }
      if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x43a),*(uint *)(DAT_0081176c + 0x43e));
      }
      if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x4cb),*(uint *)(DAT_0081176c + 0x4cf));
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                   *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
      PaintWait(this_01,'\0');
      g_currentExceptionFrame = local_ec.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if ((this_01->field_1A64 == 0) && (0 < *(int *)(DAT_0081176c + 0x300))) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + -1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                   *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                   *(uint *)(DAT_0081176c + 0x318));
      }
      local_c = 0;
    }
    if (this_01->field_1AF8 != (HoloTy *)0x0) {
      iVar9 = HoloTy::NextFas(this_01->field_1AF8);
      if (iVar9 == 0) {
        uVar14 = this_01->field_1AF8->field_0003;
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_c = 0;
      }
    }
    if (((this_01->field_1A64 == 0) || (this_01->field_1A5F == '\x0e')) &&
       (this_01->field_1B00 != (HoloTy *)0x0)) {
      iVar9 = HoloTy::NextFas(this_01->field_1B00);
      if (iVar9 == 0) {
        uVar14 = this_01->field_1B00->field_0003;
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((this_01->field_1A64 == 0) && (this_01->field_1AFC != (HoloTy *)0x0)) {
      iVar9 = HoloTy::NextFas(this_01->field_1AFC);
      if (iVar9 == 0) {
        uVar14 = this_01->field_1AFC->field_0003;
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      local_c = 0;
    }
    if (local_c != 0) {
      bVar2 = this_01->field_1A5A;
      this_01->field_0065 = 2;
      if ((bVar2 != 0xff) && (*(int *)(&this_01->field_0xd1 + (uint)bVar2 * 0x1fb) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_01->field_0xc1 + (uint)bVar2 * 0x1fb));
        g_currentExceptionFrame = local_ec.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_ec.previous;
  return;
}

