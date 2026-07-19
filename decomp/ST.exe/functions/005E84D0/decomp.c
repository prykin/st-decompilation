
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::NoneWait */

void __thiscall WaitTy::NoneWait(WaitTy *this,int *param_1)

{
  WaitTy WVar1;
  code *pcVar2;
  WaitTy *this_00;
  DWORD DVar3;
  int iVar4;
  undefined4 *puVar5;
  LPCSTR pCVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  WaitTy *pWVar12;
  char *pcVar13;
  int *piVar14;
  UINT UVar15;
  int *piVar16;
  undefined4 uVar17;
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
  DVar3 = timeGetTime();
  *(DWORD *)(this + 0x61) = DVar3;
  local_ec.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_ec;
  iVar4 = Library::MSVCRT::__setjmp3(local_ec.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_50;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_ec.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2a6,0,iVar4,&DAT_007a4ccc
                               ,s_WaitTy__NoneWait_007cddf4);
    if (iVar8 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2a6);
    return;
  }
  if ((*(int *)(local_50 + 0x1a87) != 0) &&
     (0xf9 < (uint)(*(int *)(local_50 + 0x61) - *(int *)(local_50 + 0x1a8b)))) {
    ShowDescription(local_50);
    *(undefined4 *)(this_00 + 0x1a87) = 0;
  }
  WVar1 = this_00[0x65];
  if (WVar1 == (WaitTy)0x1) {
    if (this_00[0x1a75] == (WaitTy)0x0) {
      local_14 = (int *)0x0;
      piVar16 = local_4c;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar16 = 0;
        piVar16 = piVar16 + 1;
      }
      if (*(int *)(this_00 + 0x1a70) == 0) {
        pcVar13 = local_114;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          pcVar13[0] = '\0';
          pcVar13[1] = '\0';
          pcVar13[2] = '\0';
          pcVar13[3] = '\0';
          pcVar13 = pcVar13 + 4;
        }
        pcVar13[0] = '\0';
        pcVar13[1] = '\0';
        local_112 = 4;
        FUN_00715360(DAT_00811764,1,'\x1a',local_114,0x26,1,0xffffffff);
      }
      iVar4 = *(int *)(this_00 + 0x1a70);
      *(int *)(this_00 + 0x1a70) = iVar4 + 1;
      if (iVar4 + 1 == 10) {
        *(undefined4 *)(this_00 + 0x1a70) = 0;
      }
      if (DAT_008067a0 != '\0') {
        CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
      }
      Library::DKW::DDX::FUN_006b7510(DAT_00811764,-1,&local_24,-1,0);
      local_1c = 0;
      if (0 < local_24) {
        do {
          iVar4 = FUN_00715630(DAT_00811764,-1,&local_2c,&local_6c,&local_14,&local_28,-1,0);
          piVar16 = local_14;
          if (iVar4 == -0x4d) {
LAB_005e9233:
            this_00[0x1a74] = (WaitTy)0x0;
            this_00[0x1a75] = (WaitTy)0x1;
            local_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
            if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) == 0) {
              (*(code *)**(undefined4 **)this_00)(local_4c);
            }
            else {
              local_4c[2] = *(int *)(this_00 + 8);
              local_4c[3] = 2;
              MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),0x2525,'\0',
                                 local_4c,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          else if (iVar4 == 0) {
            if (30000 < (uint)(*(int *)(this_00 + 0x61) - *(int *)(this_00 + 0x1a6c)))
            goto LAB_005e9233;
          }
          else if (iVar4 == 1) {
            switch(local_2c) {
            case 0x10:
              if (this_00[0x65] == (WaitTy)0x1) {
                local_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) == 0) goto LAB_005e91f7;
                local_4c[2] = *(int *)(this_00 + 8);
                local_4c[3] = 2;
                MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),0x2524,'\0',
                                   local_4c,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
              break;
            case 0x1a:
              local_5 = '\0';
              if ((short)*local_14 == (short)((uint)DAT_00807dd5 >> 0x10)) {
                local_10 = (int *)((int)local_14 + 2);
                if (*(char *)local_10 == '\x01') {
                  pcVar13 = (char *)((int)local_14 + 0xb);
                  switch(*pcVar13) {
                  case '\x01':
                    if (this_00[0x1a76] != (WaitTy)0x0) {
                      if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x69a) != 0) {
                        FUN_006ab060((int *)(*(int *)(this_00 + 0x1a5b) + 0x69a));
                      }
                      this_00[0x1a76] = (WaitTy)0x0;
                    }
                    local_5 = '\x01';
                    this_00[0x1a5f] = (WaitTy)0xe;
                    break;
                  case '\x02':
                  case '\x03':
                  case '\x04':
                    if (this_00[0x1a76] != (WaitTy)0x0) {
                      if (*(int *)(this_00 + 0x1a77) != *(int *)((int)local_14 + 3)) {
                        if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x69a) != 0) {
                          FUN_006ab060((int *)(*(int *)(this_00 + 0x1a5b) + 0x69a));
                        }
                        this_00[0x1a76] = (WaitTy)0x0;
                      }
                      if (this_00[0x1a76] != (WaitTy)0x0) break;
                    }
                    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,
                              PTR_s_CUSTOM__0079c244);
                    local_5c = *pcVar13;
                    local_5b = *(undefined4 *)((int)piVar16 + 3);
                    local_57 = 0;
                    iVar4 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                         &local_5c,0);
                    if (iVar4 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_00[0x1a5f] = (WaitTy)(((*pcVar13 == '\x03') - 1U & 0xfe) + 0xf);
                    break;
                  case '\x05':
                    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__007cce38,&DAT_00807680,
                              PTR_s_SAVEGAME__0079c240,&DAT_00807ddd);
                    local_68 = *pcVar13;
                    local_67 = *(undefined4 *)((int)piVar16 + 3);
                    local_63 = *(undefined4 *)((int)piVar16 + 7);
                    iVar4 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                         &local_68,0);
                    if (iVar4 == -0x70) {
                      local_5 = '\x01';
                    }
                    this_00[0x1a5f] = (WaitTy)0x10;
                  }
                  if (local_5 == '\0') {
                    if (this_00[0x1a76] == (WaitTy)0x0) {
                      if ((*(char *)((int)piVar16 + 0xd) == '\0') ||
                         (((char)*local_10 == '\x01' && (*pcVar13 == '\x05')))) {
                        this_00[0x1a74] = (WaitTy)0x0;
                        thunk_FUN_005dac60();
                        piVar16 = (int *)0x0;
                        this_00[0x1a75] = (WaitTy)0x1;
                        UVar15 = 0x2523;
                        goto LAB_005e8ee0;
                      }
                      this_00[0x1a76] = (WaitTy)0x1;
                      uVar17 = *(undefined4 *)((int)piVar16 + 3);
                      *(undefined4 *)(this_00 + 0x1a7b) = *(undefined4 *)(this_00 + 0x61);
                      *(undefined4 *)(this_00 + 0x1a77) = uVar17;
                      if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x69a) != 0) {
                        FUN_006ab060((int *)(*(int *)(this_00 + 0x1a5b) + 0x69a));
                      }
                      local_18 = -1;
                      FUN_006b6500((int)DAT_00811764,1);
                      FUN_00715360(DAT_00811764,1,'%',(char *)&local_18,4,0,0xffffffff);
                      FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                    }
                  }
                  else {
                    thunk_FUN_005b6350(this_00,0x6121,(uint)(byte)this_00[0x1a5f],0x12);
                    DAT_0080877e = 0;
                    if (*pcVar13 == '\x01') {
                      DAT_008087be = 0;
                    }
                    *(undefined4 *)(this_00 + 0x1a64) = 1;
                    (**(code **)(*(int *)this_00 + 8))();
                    if (*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6) != (MMsgTy *)0x0) {
                      MMsgTy::HidePanel(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),1,0,1);
                    }
                  }
                }
                else if (*(char *)local_10 == '\x03') {
                  if (this_00[0x1a76] == (WaitTy)0x0) {
                    if (*(int *)((int)local_14 + 3) != DAT_008087be) {
                      *(int *)(this_00 + 0x1a8f) = *(int *)((int)local_14 + 3);
                      this_00[0x1a93] = *(WaitTy *)((int)local_14 + 0xb);
                      *(undefined4 *)(this_00 + 0x1a87) = 1;
                      DVar3 = timeGetTime();
                      *(DWORD *)(this_00 + 0x1a8b) = DVar3;
                    }
                  }
                  else if (5000 < (uint)(*(int *)(this_00 + 0x61) - *(int *)(this_00 + 0x1a7b))) {
                    this_00[0x1a76] = (WaitTy)0x0;
                  }
                }
              }
              else {
                this_00[0x1a74] = (WaitTy)0x0;
                piVar16 = local_8c;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar16 = 0;
                  piVar16 = piVar16 + 1;
                }
                this_00[0x1a75] = (WaitTy)0x1;
                local_8c[2] = *(int *)(this_00 + 8);
                piVar16 = local_8c;
                local_8c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                local_8c[3] = 2;
                UVar15 = 0x2526;
LAB_005e8ee0:
                MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),UVar15,'\0',
                                   piVar16,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
              break;
            case 0x1b:
              StartSystemTy::AddToChat(*(StartSystemTy **)(this_00 + 0x1a5b),(int)local_14);
              break;
            case 0x26:
              if ((((this_00[0x1a76] != (WaitTy)0x0) && (local_14 != (int *)0x0)) &&
                  (*local_14 == *(int *)(this_00 + 0x1a77))) &&
                 ((local_10 = local_14 + 6, (int)local_28 <= local_14[6] + 0x1c &&
                  (0x1c < (int)local_28)))) {
                if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x69a) == 0) {
                  piVar14 = local_14 + 3;
                  iVar4 = Library::DKW::LIB::FUN_006aac70(local_14[3]);
                  *(int *)(*(int *)(this_00 + 0x1a5b) + 0x69a) = iVar4;
                  pWVar12 = this_00 + 0x1a83;
                  *(int *)(*(int *)(this_00 + 0x1a5b) + 0x69e) = *piVar14;
                  *(int *)(*(int *)(this_00 + 0x1a5b) + 0x6ae) = piVar16[4];
                  *(int *)(*(int *)(this_00 + 0x1a5b) + 0x6b2) = piVar16[5];
                  *(int *)(*(int *)(this_00 + 0x1a5b) + 0x6a2) = *local_10;
                  *(int *)(*(int *)(this_00 + 0x1a5b) + 0x6a6) = piVar16[2];
                  if (*(int *)pWVar12 != 0) {
                    FUN_006ab060((undefined4 *)pWVar12);
                  }
                  uVar9 = *(uint *)(*(int *)(this_00 + 0x1a5b) + 0x6a6);
                  *(uint *)(this_00 + 0x1a7f) = uVar9;
                  puVar5 = Library::DKW::LIB::FUN_006aac10(uVar9);
                  *(undefined4 **)pWVar12 = puVar5;
                  uVar17 = 0;
                  pCVar6 = (LPCSTR)FUN_006b0140(0x252f,DAT_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,pCVar6,uVar17);
                  AddStr(this_00,&DAT_0080f33a,0);
                }
                iVar4 = piVar16[1];
                if ((uint)(iVar4 * *local_10) < (uint)piVar16[3] ||
                    iVar4 * *local_10 - piVar16[3] == 0) {
                  local_10 = (int *)(*(int *)(this_00 + 0x1a83) + iVar4);
                  if ((char)*local_10 == '\0') {
                    piVar16 = piVar16 + 7;
                    piVar14 = (int *)(*(int *)(*(int *)(this_00 + 0x1a5b) + 0x6a2) * iVar4 +
                                     *(int *)(*(int *)(this_00 + 0x1a5b) + 0x69a));
                    for (uVar9 = local_28 - 0x1c >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                      *piVar14 = *piVar16;
                      piVar16 = piVar16 + 1;
                      piVar14 = piVar14 + 1;
                    }
                    for (uVar9 = local_28 - 0x1c & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
                      *(char *)piVar14 = (char)*piVar16;
                      piVar16 = (int *)((int)piVar16 + 1);
                      piVar14 = (int *)((int)piVar14 + 1);
                    }
                    *(char *)local_10 = '\x01';
                    *(undefined4 *)(this_00 + 0x1a7b) = *(undefined4 *)(this_00 + 0x61);
                    *(int *)(this_00 + 0x1a7f) = *(int *)(this_00 + 0x1a7f) + -1;
                    uVar9 = (*(uint *)(*(int *)(this_00 + 0x1a5b) + 0x6a6) * 100 +
                            *(int *)(this_00 + 0x1a7f) * -100) /
                            *(uint *)(*(int *)(this_00 + 0x1a5b) + 0x6a6);
                    pCVar6 = (LPCSTR)FUN_006b0140(0x252f,DAT_00807618);
                    wsprintfA((LPSTR)&DAT_0080f33a,pCVar6,uVar9);
                    AddStr(this_00,&DAT_0080f33a,1);
                  }
                  if (*(int *)(this_00 + 0x1a7f) == 0) {
                    iVar4 = thunk_FUN_005deb90(*(int *)(this_00 + 0x1a5b));
                    if (iVar4 == 0) {
                      this_00[0x1a74] = (WaitTy)0x0;
                      thunk_FUN_005dac60();
                      this_00[0x1a75] = (WaitTy)0x1;
                      MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),0x252e,
                                         '\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,
                                         0,0);
                    }
                    this_00[0x1a76] = (WaitTy)0x0;
                  }
                }
              }
              break;
            case 0x31:
            case 0x33:
            case 0x35:
              this_00[0x1a75] = (WaitTy)0x1;
              local_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x2e6) == 0) {
LAB_005e91f7:
                (*(code *)**(undefined4 **)this_00)(local_4c);
              }
              else {
                local_4c[2] = *(int *)(this_00 + 8);
                local_4c[3] = 2;
                MMsgTy::SetMessage(*(MMsgTy **)(*(int *)(this_00 + 0x1a5b) + 0x2e6),0x2522,'\0',
                                   local_4c,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
            }
            *(undefined4 *)(this_00 + 0x1a6c) = *(undefined4 *)(this_00 + 0x61);
            if (local_14 != (int *)0x0) {
              FUN_006ab060(&local_14);
            }
          }
          local_1c = local_1c + 1;
        } while (local_1c < local_24);
      }
      if ((((this_00[0x1a76] != (WaitTy)0x0) &&
           (3000 < (uint)(*(int *)(this_00 + 0x61) - *(int *)(this_00 + 0x1a7b)))) &&
          (*(int *)(this_00 + 0x1a7f) != 0)) && (*(int *)(this_00 + 0x1a83) != 0)) {
        uVar9 = *(int *)(this_00 + 0x1a7f) * 4 + 4;
        local_20 = (char *)Library::DKW::LIB::FUN_006aac70(uVar9);
        local_18 = *(int *)(this_00 + 0x1a83);
        *(undefined4 *)local_20 = *(undefined4 *)(this_00 + 0x1a7f);
        puVar10 = (uint *)(local_20 + 4);
        uVar7 = 0;
        uVar11 = 0;
        if (*(int *)(*(int *)(this_00 + 0x1a5b) + 0x6a6) != 0) {
          do {
            if (*(char *)(uVar7 + local_18) == '\0') {
              *puVar10 = uVar7;
              puVar10 = puVar10 + 1;
              uVar11 = uVar11 + 1;
              if (*(uint *)(this_00 + 0x1a7f) <= uVar11) break;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < *(uint *)(*(int *)(this_00 + 0x1a5b) + 0x6a6));
        }
        FUN_006b6500((int)DAT_00811764,1);
        FUN_00715360(DAT_00811764,1,'%',local_20,uVar9,1,0xffffffff);
        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
        FUN_006ab060(&local_20);
        *(undefined4 *)(this_00 + 0x1a7b) = *(undefined4 *)(this_00 + 0x61);
      }
    }
  }
  else if (WVar1 == (WaitTy)0x3) {
    if ((*(int *)(this_00 + 0x1a64) == 0) &&
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
    if ((*(HoloTy **)(this_00 + 0x1af8) != (HoloTy *)0x0) &&
       (iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1af8)), iVar4 != 0)) {
      local_c = 0;
    }
    if ((((*(int *)(this_00 + 0x1a64) == 0) || (*(int *)(this_00 + 0x1a68) != 0)) &&
        (*(HoloTy **)(this_00 + 0x1b00) != (HoloTy *)0x0)) &&
       (iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1b00)), iVar4 != 0)) {
      local_c = 0;
    }
    if (((*(int *)(this_00 + 0x1a64) == 0) && (*(HoloTy **)(this_00 + 0x1afc) != (HoloTy *)0x0)) &&
       (iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1afc)), iVar4 != 0)) {
      local_c = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      local_c = 0;
    }
    if (local_c != 0) {
      if (*(HoloTy **)(this_00 + 0x1af8) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x1af8));
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_00 + 0x1af8));
        *(undefined4 *)(this_00 + 0x1af8) = 0;
      }
      if (*(HoloTy **)(this_00 + 0x1b00) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x1b00));
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_00 + 0x1b00));
        *(undefined4 *)(this_00 + 0x1b00) = 0;
      }
      if (*(HoloTy **)(this_00 + 0x1afc) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x1afc));
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(this_00 + 0x1afc));
        *(undefined4 *)(this_00 + 0x1afc) = 0;
      }
      this_00[0x65] = (WaitTy)0x1;
      *(undefined4 *)(this_00 + 0x1a6c) = *(undefined4 *)(this_00 + 0x61);
      if (*(int *)(this_00 + 0x1a64) == 0) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
        if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc));
        }
      }
      thunk_FUN_00540dc0(1,*(undefined4 *)(this_00 + 8),2,0xc0a1,2,0x1c,0,0,0,0,0,0);
      iVar4 = *(int *)(this_00 + 0x1a5b);
      if (*(int *)(iVar4 + 0x2e6) != 0) {
        puVar5 = local_a8;
        for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        *(undefined2 *)puVar5 = 0;
        local_9c = 1;
        local_9e = 1;
        MMsgTy::StatePanel(*(MMsgTy **)(iVar4 + 0x2e6),(int)local_a8);
      }
      thunk_FUN_005e9970((int)this_00);
      pWVar12 = this_00 + 0x1a94;
      iVar4 = 0x16;
      do {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)pWVar12);
        pWVar12 = pWVar12 + 4;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
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
      PaintWait(this_00,'\0');
      g_currentExceptionFrame = local_ec.previous;
      return;
    }
  }
  else if (WVar1 == (WaitTy)0x4) {
    if ((*(int *)(this_00 + 0x1a64) == 0) && (0 < *(int *)(DAT_0081176c + 0x300))) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + -1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                   *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                   *(uint *)(DAT_0081176c + 0x318));
      }
      local_c = 0;
    }
    if (*(HoloTy **)(this_00 + 0x1af8) != (HoloTy *)0x0) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1af8));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x1af8) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x1af8) + 3));
        }
      }
      else {
        local_c = 0;
      }
    }
    if (((*(int *)(this_00 + 0x1a64) == 0) || (this_00[0x1a5f] == (WaitTy)0xe)) &&
       (*(HoloTy **)(this_00 + 0x1b00) != (HoloTy *)0x0)) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1b00));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x1b00) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x1b00) + 3));
        }
      }
      else {
        local_c = 0;
      }
    }
    if ((*(int *)(this_00 + 0x1a64) == 0) && (*(HoloTy **)(this_00 + 0x1afc) != (HoloTy *)0x0)) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x1afc));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x1afc) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x1afc) + 3));
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
      WVar1 = this_00[0x1a5a];
      this_00[0x65] = (WaitTy)0x2;
      if ((WVar1 != (WaitTy)0xff) && (*(int *)(this_00 + (uint)(byte)WVar1 * 0x1fb + 0xd1) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(this_00 + (uint)(byte)WVar1 * 0x1fb + 0xc1));
        g_currentExceptionFrame = local_ec.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_ec.previous;
  return;
}

