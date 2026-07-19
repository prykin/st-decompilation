
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::NoneWait */

void __thiscall WaitTy::NoneWait(WaitTy *this,int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  byte bVar3;
  MMsgTy *this_00;
  undefined4 uVar4;
  code *pcVar5;
  WaitTy *this_01;
  DWORD DVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  LPCSTR pCVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar17;
  UINT UVar18;
  undefined4 uVar19;
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
  DVar6 = timeGetTime();
  this->field_0061 = DVar6;
  local_ec.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ec;
  iVar7 = Library::MSVCRT::__setjmp3(local_ec.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_01 = local_50;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_ec.previous;
    iVar13 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2a6,0,iVar7,
                                &DAT_007a4ccc,s_WaitTy__NoneWait_007cddf4);
    if (iVar13 != 0) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2a6);
    return;
  }
  if ((*(int *)&local_50[0x43].field_0x18 != 0) &&
     (0xf9 < (uint)(local_50->field_0061 - *(int *)&local_50[0x43].field_0x1c))) {
    ShowDescription(local_50);
    *(undefined4 *)&this_01[0x43].field_0x18 = 0;
  }
  cVar2 = *(char *)(this_01 + 1);
  if (cVar2 == '\x01') {
    if (this_01[0x43].field_0x6 == '\0') {
      local_14 = (int *)0x0;
      piVar9 = local_4c;
      for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar9 = 0;
        piVar9 = piVar9 + 1;
      }
      if (*(int *)&this_01[0x43].field_0x1 == 0) {
        pcVar17 = local_114;
        for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
          pcVar17[0] = '\0';
          pcVar17[1] = '\0';
          pcVar17[2] = '\0';
          pcVar17[3] = '\0';
          pcVar17 = pcVar17 + 4;
        }
        pcVar17[0] = '\0';
        pcVar17[1] = '\0';
        local_112 = 4;
        FUN_00715360(DAT_00811764,1,'\x1a',local_114,0x26,1,0xffffffff);
      }
      iVar7 = *(int *)&this_01[0x43].field_0x1 + 1;
      *(int *)&this_01[0x43].field_0x1 = iVar7;
      if (iVar7 == 10) {
        *(undefined4 *)&this_01[0x43].field_0x1 = 0;
      }
      if (DAT_008067a0 != '\0') {
        CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
      }
      Library::DKW::DDX::FUN_006b7510(DAT_00811764,-1,&local_24,-1,0);
      local_1c = 0;
      if (0 < local_24) {
        do {
          iVar7 = FUN_00715630(DAT_00811764,-1,&local_2c,&local_6c,&local_14,&local_28,-1,0);
          piVar9 = local_14;
          if (iVar7 == -0x4d) {
LAB_005e9233:
            this_01[0x43].field_0x5 = 0;
            this_01[0x43].field_0x6 = 1;
            local_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
            if (*(int *)(*(int *)&this_01[0x42].field_0x51 + 0x2e6) == 0) {
              (*(code *)**(undefined4 **)this_01)(local_4c);
            }
            else {
              local_4c[2] = *(int *)&this_01->field_0x8;
              local_4c[3] = 2;
              MMsgTy::SetMessage(*(MMsgTy **)(*(int *)&this_01[0x42].field_0x51 + 0x2e6),0x2525,'\0'
                                 ,local_4c,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          else if (iVar7 == 0) {
            if (30000 < (uint)(this_01->field_0061 - *(int *)((int)&this_01[0x42].field_0061 + 1)))
            goto LAB_005e9233;
          }
          else if (iVar7 == 1) {
            switch(local_2c) {
            case 0x10:
              if (*(char *)(this_01 + 1) == '\x01') {
                local_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                if (*(int *)(*(int *)&this_01[0x42].field_0x51 + 0x2e6) == 0) goto LAB_005e91f7;
                local_4c[2] = *(int *)&this_01->field_0x8;
                local_4c[3] = 2;
                MMsgTy::SetMessage(*(MMsgTy **)(*(int *)&this_01[0x42].field_0x51 + 0x2e6),0x2524,
                                   '\0',local_4c,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
              break;
            case 0x1a:
              local_5 = '\0';
              if ((short)*local_14 == (short)((uint)DAT_00807dd5 >> 0x10)) {
                local_10 = (int *)((int)local_14 + 2);
                if (*(char *)local_10 == '\x01') {
                  pcVar17 = (char *)((int)local_14 + 0xb);
                  switch(*pcVar17) {
                  case '\x01':
                    if (this_01[0x43].field_0x7 != '\0') {
                      piVar8 = (int *)(*(int *)&this_01[0x42].field_0x51 + 0x69a);
                      if (*piVar8 != 0) {
                        FUN_006ab060(piVar8);
                      }
                      this_01[0x43].field_0x7 = 0;
                    }
                    local_5 = '\x01';
                    this_01[0x42].field_0x55 = 0xe;
                    break;
                  case '\x02':
                  case '\x03':
                  case '\x04':
                    if (this_01[0x43].field_0x7 != '\0') {
                      if (*(int *)&this_01[0x43].field_0x8 != *(int *)((int)local_14 + 3)) {
                        piVar8 = (int *)(*(int *)&this_01[0x42].field_0x51 + 0x69a);
                        if (*piVar8 != 0) {
                          FUN_006ab060(piVar8);
                        }
                        this_01[0x43].field_0x7 = 0;
                      }
                      if (this_01[0x43].field_0x7 != '\0') break;
                    }
                    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,
                              PTR_s_CUSTOM__0079c244);
                    local_5c = *pcVar17;
                    local_5b = *(undefined4 *)((int)piVar9 + 3);
                    local_57 = 0;
                    iVar7 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                         &local_5c,0);
                    if (iVar7 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_01[0x42].field_0x55 = ((*pcVar17 == '\x03') - 1U & 0xfe) + 0xf;
                    break;
                  case '\x05':
                    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__007cce38,&DAT_00807680,
                              PTR_s_SAVEGAME__0079c240,&DAT_00807ddd);
                    local_68 = *pcVar17;
                    local_67 = *(undefined4 *)((int)piVar9 + 3);
                    local_63 = *(undefined4 *)((int)piVar9 + 7);
                    iVar7 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                         &local_68,0);
                    if (iVar7 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_01[0x42].field_0x55 = 0x10;
                  }
                  if (local_5 == '\0') {
                    if (this_01[0x43].field_0x7 == '\0') {
                      if ((*(char *)((int)piVar9 + 0xd) == '\0') ||
                         (((char)*local_10 == '\x01' && (*pcVar17 == '\x05')))) {
                        this_01[0x43].field_0x5 = 0;
                        thunk_FUN_005dac60();
                        piVar9 = (int *)0x0;
                        this_01[0x43].field_0x6 = 1;
                        UVar18 = 0x2523;
                        goto LAB_005e8ee0;
                      }
                      uVar19 = this_01->field_0061;
                      this_01[0x43].field_0x7 = 1;
                      uVar4 = *(undefined4 *)((int)piVar9 + 3);
                      *(undefined4 *)&this_01[0x43].field_0xc = uVar19;
                      iVar7 = *(int *)&this_01[0x42].field_0x51;
                      *(undefined4 *)&this_01[0x43].field_0x8 = uVar4;
                      piVar9 = (int *)(iVar7 + 0x69a);
                      if (*piVar9 != 0) {
                        FUN_006ab060(piVar9);
                      }
                      local_18 = -1;
                      FUN_006b6500((int)DAT_00811764,1);
                      FUN_00715360(DAT_00811764,1,'%',(char *)&local_18,4,0,0xffffffff);
                      FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                    }
                  }
                  else {
                    thunk_FUN_005b6350(this_01,0x6121,(uint)(byte)this_01[0x42].field_0x55,0x12);
                    DAT_0080877e = 0;
                    if (*pcVar17 == '\x01') {
                      DAT_008087be = 0;
                    }
                    iVar7 = *(int *)this_01;
                    *(undefined4 *)&this_01[0x42].field_0x5a = 1;
                    (**(code **)(iVar7 + 8))();
                    this_00 = *(MMsgTy **)(*(int *)&this_01[0x42].field_0x51 + 0x2e6);
                    if (this_00 != (MMsgTy *)0x0) {
                      MMsgTy::HidePanel(this_00,1,0,1);
                    }
                  }
                }
                else if (*(char *)local_10 == '\x03') {
                  if (this_01[0x43].field_0x7 == '\0') {
                    if (*(int *)((int)local_14 + 3) != DAT_008087be) {
                      *(int *)&this_01[0x43].field_0x20 = *(int *)((int)local_14 + 3);
                      this_01[0x43].field_0x24 = *(undefined1 *)((int)local_14 + 0xb);
                      *(undefined4 *)&this_01[0x43].field_0x18 = 1;
                      DVar6 = timeGetTime();
                      *(DWORD *)&this_01[0x43].field_0x1c = DVar6;
                    }
                  }
                  else if (5000 < (uint)(this_01->field_0061 - *(int *)&this_01[0x43].field_0xc)) {
                    this_01[0x43].field_0x7 = 0;
                  }
                }
              }
              else {
                this_01[0x43].field_0x5 = 0;
                piVar9 = local_8c;
                for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
                  *piVar9 = 0;
                  piVar9 = piVar9 + 1;
                }
                this_01[0x43].field_0x6 = 1;
                local_8c[2] = *(int *)&this_01->field_0x8;
                piVar9 = local_8c;
                local_8c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                local_8c[3] = 2;
                UVar18 = 0x2526;
LAB_005e8ee0:
                MMsgTy::SetMessage(*(MMsgTy **)(*(int *)&this_01[0x42].field_0x51 + 0x2e6),UVar18,
                                   '\0',piVar9,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
              break;
            case 0x1b:
              StartSystemTy::AddToChat(*(StartSystemTy **)&this_01[0x42].field_0x51,(int)local_14);
              break;
            case 0x26:
              if ((((this_01[0x43].field_0x7 != '\0') && (local_14 != (int *)0x0)) &&
                  (*local_14 == *(int *)&this_01[0x43].field_0x8)) &&
                 ((local_10 = local_14 + 6, (int)local_28 <= local_14[6] + 0x1c &&
                  (0x1c < (int)local_28)))) {
                if (*(int *)(*(int *)&this_01[0x42].field_0x51 + 0x69a) == 0) {
                  piVar8 = local_14 + 3;
                  iVar7 = Library::DKW::LIB::FUN_006aac70(local_14[3]);
                  *(int *)(*(int *)&this_01[0x42].field_0x51 + 0x69a) = iVar7;
                  puVar1 = &this_01[0x43].field_0x14;
                  *(int *)(*(int *)&this_01[0x42].field_0x51 + 0x69e) = *piVar8;
                  *(int *)(*(int *)&this_01[0x42].field_0x51 + 0x6ae) = piVar9[4];
                  *(int *)(*(int *)&this_01[0x42].field_0x51 + 0x6b2) = piVar9[5];
                  *(int *)(*(int *)&this_01[0x42].field_0x51 + 0x6a2) = *local_10;
                  *(int *)(*(int *)&this_01[0x42].field_0x51 + 0x6a6) = piVar9[2];
                  if (*(int *)puVar1 != 0) {
                    FUN_006ab060((undefined4 *)puVar1);
                  }
                  uVar14 = *(uint *)(*(int *)&this_01[0x42].field_0x51 + 0x6a6);
                  this_01[0x43].field_0010 = uVar14;
                  puVar10 = Library::DKW::LIB::FUN_006aac10(uVar14);
                  *(undefined4 **)puVar1 = puVar10;
                  uVar19 = 0;
                  pCVar11 = (LPCSTR)FUN_006b0140(0x252f,DAT_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,pCVar11,uVar19);
                  AddStr(this_01,&DAT_0080f33a,0);
                }
                iVar7 = piVar9[1];
                if ((uint)(iVar7 * *local_10) < (uint)piVar9[3] ||
                    iVar7 * *local_10 - piVar9[3] == 0) {
                  local_10 = (int *)(*(int *)&this_01[0x43].field_0x14 + iVar7);
                  if ((char)*local_10 == '\0') {
                    piVar9 = piVar9 + 7;
                    piVar8 = (int *)(*(int *)(*(int *)&this_01[0x42].field_0x51 + 0x6a2) * iVar7 +
                                    *(int *)(*(int *)&this_01[0x42].field_0x51 + 0x69a));
                    for (uVar14 = local_28 - 0x1c >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                      *piVar8 = *piVar9;
                      piVar9 = piVar9 + 1;
                      piVar8 = piVar8 + 1;
                    }
                    for (uVar14 = local_28 - 0x1c & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
                      *(char *)piVar8 = (char)*piVar9;
                      piVar9 = (int *)((int)piVar9 + 1);
                      piVar8 = (int *)((int)piVar8 + 1);
                    }
                    *(char *)local_10 = '\x01';
                    iVar7 = *(int *)&this_01[0x42].field_0x51;
                    *(undefined4 *)&this_01[0x43].field_0xc = this_01->field_0061;
                    this_01[0x43].field_0010 = this_01[0x43].field_0010 + -1;
                    uVar14 = *(uint *)(iVar7 + 0x6a6);
                    uVar14 = (uVar14 * 100 + this_01[0x43].field_0010 * -100) / uVar14;
                    pCVar11 = (LPCSTR)FUN_006b0140(0x252f,DAT_00807618);
                    wsprintfA((LPSTR)&DAT_0080f33a,pCVar11,uVar14);
                    AddStr(this_01,&DAT_0080f33a,1);
                  }
                  if (this_01[0x43].field_0010 == 0) {
                    iVar7 = thunk_FUN_005deb90(*(int *)&this_01[0x42].field_0x51);
                    if (iVar7 == 0) {
                      this_01[0x43].field_0x5 = 0;
                      thunk_FUN_005dac60();
                      iVar7 = *(int *)&this_01[0x42].field_0x51;
                      this_01[0x43].field_0x6 = 1;
                      MMsgTy::SetMessage(*(MMsgTy **)(iVar7 + 0x2e6),0x252e,'\0',(undefined4 *)0x0,
                                         (undefined4 *)0x0,(undefined4 *)0x0,0,0);
                    }
                    this_01[0x43].field_0x7 = 0;
                  }
                }
              }
              break;
            case 0x31:
            case 0x33:
            case 0x35:
              this_01[0x43].field_0x6 = 1;
              local_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (*(int *)(*(int *)&this_01[0x42].field_0x51 + 0x2e6) == 0) {
LAB_005e91f7:
                (*(code *)**(undefined4 **)this_01)(local_4c);
              }
              else {
                local_4c[2] = *(int *)&this_01->field_0x8;
                local_4c[3] = 2;
                MMsgTy::SetMessage(*(MMsgTy **)(*(int *)&this_01[0x42].field_0x51 + 0x2e6),0x2522,
                                   '\0',local_4c,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
            }
            *(undefined4 *)((int)&this_01[0x42].field_0061 + 1) = this_01->field_0061;
            if (local_14 != (int *)0x0) {
              FUN_006ab060(&local_14);
            }
          }
          local_1c = local_1c + 1;
        } while (local_1c < local_24);
      }
      if ((((this_01[0x43].field_0x7 != '\0') &&
           (3000 < (uint)(this_01->field_0061 - *(int *)&this_01[0x43].field_0xc))) &&
          (this_01[0x43].field_0010 != 0)) && (*(int *)&this_01[0x43].field_0x14 != 0)) {
        uVar14 = this_01[0x43].field_0010 * 4 + 4;
        local_20 = (char *)Library::DKW::LIB::FUN_006aac70(uVar14);
        local_18 = *(int *)&this_01[0x43].field_0x14;
        *(undefined4 *)local_20 = this_01[0x43].field_0010;
        puVar15 = (uint *)(local_20 + 4);
        uVar12 = 0;
        uVar16 = 0;
        if (*(int *)(*(int *)&this_01[0x42].field_0x51 + 0x6a6) != 0) {
          do {
            if (*(char *)(uVar12 + local_18) == '\0') {
              *puVar15 = uVar12;
              puVar15 = puVar15 + 1;
              uVar16 = uVar16 + 1;
              if ((uint)this_01[0x43].field_0010 <= uVar16) break;
            }
            uVar12 = uVar12 + 1;
          } while (uVar12 < *(uint *)(*(int *)&this_01[0x42].field_0x51 + 0x6a6));
        }
        FUN_006b6500((int)DAT_00811764,1);
        FUN_00715360(DAT_00811764,1,'%',local_20,uVar14,1,0xffffffff);
        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
        FUN_006ab060(&local_20);
        *(undefined4 *)&this_01[0x43].field_0xc = this_01->field_0061;
      }
    }
  }
  else if (cVar2 == '\x03') {
    if ((*(int *)&this_01[0x42].field_0x5a == 0) &&
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
    if ((*(HoloTy **)&this_01[0x44].field_0x24 != (HoloTy *)0x0) &&
       (iVar7 = HoloTy::NextFas(*(HoloTy **)&this_01[0x44].field_0x24), iVar7 != 0)) {
      local_c = 0;
    }
    if ((((*(int *)&this_01[0x42].field_0x5a == 0) || (*(int *)&this_01[0x42].field_0x5e != 0)) &&
        (*(HoloTy **)&this_01[0x44].field_0x2c != (HoloTy *)0x0)) &&
       (iVar7 = HoloTy::NextFas(*(HoloTy **)&this_01[0x44].field_0x2c), iVar7 != 0)) {
      local_c = 0;
    }
    if (((*(int *)&this_01[0x42].field_0x5a == 0) &&
        (*(HoloTy **)&this_01[0x44].field_0x28 != (HoloTy *)0x0)) &&
       (iVar7 = HoloTy::NextFas(*(HoloTy **)&this_01[0x44].field_0x28), iVar7 != 0)) {
      local_c = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      local_c = 0;
    }
    if (local_c != 0) {
      if (*(HoloTy **)&this_01[0x44].field_0x24 != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_01[0x44].field_0x24);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_01[0x44].field_0x24);
        *(undefined4 *)&this_01[0x44].field_0x24 = 0;
      }
      if (*(HoloTy **)&this_01[0x44].field_0x2c != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_01[0x44].field_0x2c);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_01[0x44].field_0x2c);
        *(undefined4 *)&this_01[0x44].field_0x2c = 0;
      }
      if (*(HoloTy **)&this_01[0x44].field_0x28 != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_01[0x44].field_0x28);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_01[0x44].field_0x28);
        *(undefined4 *)&this_01[0x44].field_0x28 = 0;
      }
      iVar7 = *(int *)&this_01[0x42].field_0x5a;
      *(undefined1 *)(this_01 + 1) = 1;
      *(undefined4 *)((int)&this_01[0x42].field_0061 + 1) = this_01->field_0061;
      if (iVar7 == 0) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
        if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc));
        }
      }
      thunk_FUN_00540dc0(1,*(undefined4 *)&this_01->field_0x8,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
      iVar7 = *(int *)&this_01[0x42].field_0x51;
      if (*(int *)(iVar7 + 0x2e6) != 0) {
        puVar10 = local_a8;
        for (iVar13 = 6; iVar13 != 0; iVar13 = iVar13 + -1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        *(undefined2 *)puVar10 = 0;
        local_9c = 1;
        local_9e = 1;
        MMsgTy::StatePanel(*(MMsgTy **)(iVar7 + 0x2e6),(int)local_a8);
      }
      thunk_FUN_005e9970((int)this_01);
      puVar15 = (uint *)&this_01[0x43].field_0x25;
      iVar7 = 0x16;
      do {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar15);
        puVar15 = puVar15 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
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
  else if (cVar2 == '\x04') {
    if ((*(int *)&this_01[0x42].field_0x5a == 0) && (0 < *(int *)(DAT_0081176c + 0x300))) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + -1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                   *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                   *(uint *)(DAT_0081176c + 0x318));
      }
      local_c = 0;
    }
    if (*(HoloTy **)&this_01[0x44].field_0x24 != (HoloTy *)0x0) {
      iVar7 = HoloTy::NextFas(*(HoloTy **)&this_01[0x44].field_0x24);
      if (iVar7 == 0) {
        uVar14 = *(uint *)(*(int *)&this_01[0x44].field_0x24 + 3);
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_c = 0;
      }
    }
    if (((*(int *)&this_01[0x42].field_0x5a == 0) || (this_01[0x42].field_0x55 == '\x0e')) &&
       (*(HoloTy **)&this_01[0x44].field_0x2c != (HoloTy *)0x0)) {
      iVar7 = HoloTy::NextFas(*(HoloTy **)&this_01[0x44].field_0x2c);
      if (iVar7 == 0) {
        uVar14 = *(uint *)(*(int *)&this_01[0x44].field_0x2c + 3);
        if (-1 < (int)uVar14) {
          FUN_006b3af0(DAT_008075a8,uVar14);
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((*(int *)&this_01[0x42].field_0x5a == 0) &&
       (*(HoloTy **)&this_01[0x44].field_0x28 != (HoloTy *)0x0)) {
      iVar7 = HoloTy::NextFas(*(HoloTy **)&this_01[0x44].field_0x28);
      if (iVar7 == 0) {
        uVar14 = *(uint *)(*(int *)&this_01[0x44].field_0x28 + 3);
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
      bVar3 = this_01[0x42].field_0x50;
      *(undefined1 *)(this_01 + 1) = 2;
      if ((bVar3 != 0xff) && (*(int *)((int)this_01 + (uint)bVar3 * 0x1fb + 0xd1) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)((int)this_01 + (uint)bVar3 * 0x1fb + 0xc1));
        g_currentExceptionFrame = local_ec.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_ec.previous;
  return;
}

