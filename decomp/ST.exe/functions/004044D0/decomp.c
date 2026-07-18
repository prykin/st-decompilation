
void __fastcall thunk_FUN_005e84d0(int *param_1)

{
  char cVar1;
  byte bVar2;
  void *this;
  code *pcVar3;
  int *this_00;
  DWORD DVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  LPCSTR pCVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 unaff_ESI;
  int *piVar15;
  void *unaff_EDI;
  char *pcVar16;
  UINT UVar17;
  undefined4 uVar18;
  char acStack_114 [2];
  undefined1 uStack_112;
  undefined4 *puStack_ec;
  undefined4 auStack_e8 [16];
  undefined4 auStack_a8 [2];
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  int aiStack_8c [8];
  int iStack_6c;
  char cStack_68;
  undefined4 uStack_67;
  undefined4 uStack_63;
  char cStack_5c;
  undefined4 uStack_5b;
  undefined4 uStack_57;
  int *piStack_50;
  int aiStack_4c [8];
  uint uStack_2c;
  uint uStack_28;
  int iStack_24;
  char *pcStack_20;
  int iStack_1c;
  int iStack_18;
  int *piStack_14;
  int *piStack_10;
  int iStack_c;
  char cStack_5;
  
  iStack_c = 1;
  piStack_50 = param_1;
  DVar4 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x61) = DVar4;
  puStack_ec = DAT_00858df8;
  DAT_00858df8 = &puStack_ec;
  iVar5 = __setjmp3(auStack_e8,0,unaff_EDI,unaff_ESI);
  this_00 = piStack_50;
  if (iVar5 != 0) {
    DAT_00858df8 = puStack_ec;
    iVar11 = FUN_006ad4d0(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x2a6,0,iVar5,&DAT_007a4ccc);
    if (iVar11 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FUN_006a5e40(iVar5,0,0x7cdd5c,0x2a6);
    return;
  }
  if ((*(int *)((int)piStack_50 + 0x1a87) != 0) &&
     (0xf9 < (uint)(*(int *)((int)piStack_50 + 0x61) - *(int *)((int)piStack_50 + 0x1a8b)))) {
    thunk_FUN_005e7fe0();
    *(undefined4 *)((int)this_00 + 0x1a87) = 0;
  }
  cVar1 = *(char *)((int)this_00 + 0x65);
  if (cVar1 == '\x01') {
    if (*(char *)((int)this_00 + 0x1a75) == '\0') {
      piStack_14 = (int *)0x0;
      piVar7 = aiStack_4c;
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *piVar7 = 0;
        piVar7 = piVar7 + 1;
      }
      if (this_00[0x69c] == 0) {
        pcVar16 = acStack_114;
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          pcVar16[0] = '\0';
          pcVar16[1] = '\0';
          pcVar16[2] = '\0';
          pcVar16[3] = '\0';
          pcVar16 = pcVar16 + 4;
        }
        pcVar16[0] = '\0';
        pcVar16[1] = '\0';
        uStack_112 = 4;
        FUN_00715360(DAT_00811764,1,'\x1a',acStack_114,0x26,1,0xffffffff);
      }
      iVar5 = this_00[0x69c];
      this_00[0x69c] = iVar5 + 1;
      if (iVar5 + 1 == 10) {
        this_00[0x69c] = 0;
      }
      if (DAT_008067a0 != '\0') {
        CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
      }
      FUN_006b7510(DAT_00811764,-1,&iStack_24,-1,0);
      iStack_1c = 0;
      if (0 < iStack_24) {
        do {
          iVar5 = FUN_00715630(DAT_00811764,-1,&uStack_2c,&iStack_6c,&piStack_14,&uStack_28,-1,0);
          piVar7 = piStack_14;
          if (iVar5 == -0x4d) {
LAB_005e9233:
            *(undefined1 *)(this_00 + 0x69d) = 0;
            *(undefined1 *)((int)this_00 + 0x1a75) = 1;
            aiStack_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
            if (*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6) == 0) {
              (**(code **)*this_00)(aiStack_4c);
            }
            else {
              aiStack_4c[2] = this_00[2];
              aiStack_4c[3] = 2;
              thunk_FUN_005b7ef0(*(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6),0x2525,'\0',
                                 aiStack_4c,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
            }
          }
          else if (iVar5 == 0) {
            if (30000 < (uint)(*(int *)((int)this_00 + 0x61) - this_00[0x69b])) goto LAB_005e9233;
          }
          else if (iVar5 == 1) {
            switch(uStack_2c) {
            case 0x10:
              if (*(char *)((int)this_00 + 0x65) == '\x01') {
                aiStack_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                if (*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6) == 0) goto LAB_005e91f7;
                aiStack_4c[2] = this_00[2];
                aiStack_4c[3] = 2;
                thunk_FUN_005b7ef0(*(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6),0x2524,'\0',
                                   aiStack_4c,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
              break;
            case 0x1a:
              cStack_5 = '\0';
              if ((short)*piStack_14 == (short)((uint)DAT_00807dd5 >> 0x10)) {
                piStack_10 = (int *)((int)piStack_14 + 2);
                if (*(char *)piStack_10 == '\x01') {
                  pcVar16 = (char *)((int)piStack_14 + 0xb);
                  switch(*pcVar16) {
                  case '\x01':
                    if (*(char *)((int)this_00 + 0x1a76) != '\0') {
                      piVar6 = (int *)(*(int *)((int)this_00 + 0x1a5b) + 0x69a);
                      if (*piVar6 != 0) {
                        FUN_006ab060(piVar6);
                      }
                      *(undefined1 *)((int)this_00 + 0x1a76) = 0;
                    }
                    cStack_5 = '\x01';
                    *(undefined1 *)((int)this_00 + 0x1a5f) = 0xe;
                    break;
                  case '\x02':
                  case '\x03':
                  case '\x04':
                    if (*(char *)((int)this_00 + 0x1a76) != '\0') {
                      if (*(int *)((int)this_00 + 0x1a77) != *(int *)((int)piStack_14 + 3)) {
                        piVar6 = (int *)(*(int *)((int)this_00 + 0x1a5b) + 0x69a);
                        if (*piVar6 != 0) {
                          FUN_006ab060(piVar6);
                        }
                        *(undefined1 *)((int)this_00 + 0x1a76) = 0;
                      }
                      if (*(char *)((int)this_00 + 0x1a76) != '\0') break;
                    }
                    wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,
                              PTR_s_CUSTOM__0079c244);
                    cStack_5c = *pcVar16;
                    uStack_5b = *(undefined4 *)((int)piVar7 + 3);
                    uStack_57 = 0;
                    iVar5 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                         &cStack_5c,0);
                    if (iVar5 == -0x70) {
                      cStack_5 = '\x01';
                    }
                    *(byte *)((int)this_00 + 0x1a5f) = ((*pcVar16 == '\x03') - 1U & 0xfe) + 0xf;
                    break;
                  case '\x05':
                    wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__007cce38,&DAT_00807680,
                              PTR_s_SAVEGAME__0079c240,&DAT_00807ddd);
                    cStack_68 = *pcVar16;
                    uStack_67 = *(undefined4 *)((int)piVar7 + 3);
                    uStack_63 = *(undefined4 *)((int)piVar7 + 7);
                    iVar5 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                         &cStack_68,0);
                    if (iVar5 == -0x70) {
                      cStack_5 = '\x01';
                    }
                    *(undefined1 *)((int)this_00 + 0x1a5f) = 0x10;
                  }
                  if (cStack_5 == '\0') {
                    if (*(char *)((int)this_00 + 0x1a76) == '\0') {
                      if ((*(char *)((int)piVar7 + 0xd) == '\0') ||
                         (((char)*piStack_10 == '\x01' && (*pcVar16 == '\x05')))) {
                        *(undefined1 *)(this_00 + 0x69d) = 0;
                        thunk_FUN_005dac60();
                        piVar7 = (int *)0x0;
                        *(undefined1 *)((int)this_00 + 0x1a75) = 1;
                        UVar17 = 0x2523;
                        goto LAB_005e8ee0;
                      }
                      *(undefined1 *)((int)this_00 + 0x1a76) = 1;
                      uVar18 = *(undefined4 *)((int)piVar7 + 3);
                      *(undefined4 *)((int)this_00 + 0x1a7b) = *(undefined4 *)((int)this_00 + 0x61);
                      *(undefined4 *)((int)this_00 + 0x1a77) = uVar18;
                      piVar7 = (int *)(*(int *)((int)this_00 + 0x1a5b) + 0x69a);
                      if (*piVar7 != 0) {
                        FUN_006ab060(piVar7);
                      }
                      iStack_18 = -1;
                      FUN_006b6500((int)DAT_00811764,1);
                      FUN_00715360(DAT_00811764,1,'%',(char *)&iStack_18,4,0,0xffffffff);
                      FUN_006b6500((int)DAT_00811764,DAT_0080733c);
                    }
                  }
                  else {
                    thunk_FUN_005b6350(this_00,0x6121,(uint)*(byte *)((int)this_00 + 0x1a5f),0x12);
                    DAT_0080877e = 0;
                    if (*pcVar16 == '\x01') {
                      DAT_008087be = 0;
                    }
                    this_00[0x699] = 1;
                    (**(code **)(*this_00 + 8))();
                    this = *(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6);
                    if (this != (void *)0x0) {
                      thunk_FUN_005b8c70(this,1,0,1);
                    }
                  }
                }
                else if (*(char *)piStack_10 == '\x03') {
                  if (*(char *)((int)this_00 + 0x1a76) == '\0') {
                    if (*(int *)((int)piStack_14 + 3) != DAT_008087be) {
                      *(int *)((int)this_00 + 0x1a8f) = *(int *)((int)piStack_14 + 3);
                      *(undefined1 *)((int)this_00 + 0x1a93) =
                           *(undefined1 *)((int)piStack_14 + 0xb);
                      *(undefined4 *)((int)this_00 + 0x1a87) = 1;
                      DVar4 = timeGetTime();
                      *(DWORD *)((int)this_00 + 0x1a8b) = DVar4;
                    }
                  }
                  else if (5000 < (uint)(*(int *)((int)this_00 + 0x61) -
                                        *(int *)((int)this_00 + 0x1a7b))) {
                    *(undefined1 *)((int)this_00 + 0x1a76) = 0;
                  }
                }
              }
              else {
                *(undefined1 *)(this_00 + 0x69d) = 0;
                piVar7 = aiStack_8c;
                for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
                  *piVar7 = 0;
                  piVar7 = piVar7 + 1;
                }
                *(undefined1 *)((int)this_00 + 0x1a75) = 1;
                aiStack_8c[2] = this_00[2];
                piVar7 = aiStack_8c;
                aiStack_8c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
                aiStack_8c[3] = 2;
                UVar17 = 0x2526;
LAB_005e8ee0:
                thunk_FUN_005b7ef0(*(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6),UVar17,'\0',
                                   piVar7,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
              break;
            case 0x1b:
              thunk_FUN_005dd850((int)piStack_14);
              break;
            case 0x26:
              if ((((*(char *)((int)this_00 + 0x1a76) != '\0') && (piStack_14 != (int *)0x0)) &&
                  (*piStack_14 == *(int *)((int)this_00 + 0x1a77))) &&
                 ((piStack_10 = piStack_14 + 6, (int)uStack_28 <= piStack_14[6] + 0x1c &&
                  (0x1c < (int)uStack_28)))) {
                if (*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x69a) == 0) {
                  piVar15 = piStack_14 + 3;
                  iVar5 = FUN_006aac70(piStack_14[3]);
                  *(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x69a) = iVar5;
                  piVar6 = (int *)((int)this_00 + 0x1a83);
                  *(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x69e) = *piVar15;
                  *(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x6ae) = piVar7[4];
                  *(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x6b2) = piVar7[5];
                  *(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x6a2) = *piStack_10;
                  *(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x6a6) = piVar7[2];
                  if (*piVar6 != 0) {
                    FUN_006ab060(piVar6);
                  }
                  uVar12 = *(uint *)(*(int *)((int)this_00 + 0x1a5b) + 0x6a6);
                  *(uint *)((int)this_00 + 0x1a7f) = uVar12;
                  puVar8 = FUN_006aac10(uVar12);
                  *piVar6 = (int)puVar8;
                  uVar18 = 0;
                  pCVar9 = (LPCSTR)FUN_006b0140(0x252f,DAT_00807618);
                  wsprintfA((LPSTR)&DAT_0080f33a,pCVar9,uVar18);
                  thunk_FUN_005e7c00(&DAT_0080f33a,0);
                }
                iVar5 = piVar7[1];
                if ((uint)(iVar5 * *piStack_10) < (uint)piVar7[3] ||
                    iVar5 * *piStack_10 - piVar7[3] == 0) {
                  piStack_10 = (int *)(*(int *)((int)this_00 + 0x1a83) + iVar5);
                  if ((char)*piStack_10 == '\0') {
                    piVar7 = piVar7 + 7;
                    piVar6 = (int *)(*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x6a2) * iVar5 +
                                    *(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x69a));
                    for (uVar12 = uStack_28 - 0x1c >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                      *piVar6 = *piVar7;
                      piVar7 = piVar7 + 1;
                      piVar6 = piVar6 + 1;
                    }
                    for (uVar12 = uStack_28 - 0x1c & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
                      *(char *)piVar6 = (char)*piVar7;
                      piVar7 = (int *)((int)piVar7 + 1);
                      piVar6 = (int *)((int)piVar6 + 1);
                    }
                    *(char *)piStack_10 = '\x01';
                    *(undefined4 *)((int)this_00 + 0x1a7b) = *(undefined4 *)((int)this_00 + 0x61);
                    *(int *)((int)this_00 + 0x1a7f) = *(int *)((int)this_00 + 0x1a7f) + -1;
                    uVar12 = *(uint *)(*(int *)((int)this_00 + 0x1a5b) + 0x6a6);
                    uVar12 = (uVar12 * 100 + *(int *)((int)this_00 + 0x1a7f) * -100) / uVar12;
                    pCVar9 = (LPCSTR)FUN_006b0140(0x252f,DAT_00807618);
                    wsprintfA((LPSTR)&DAT_0080f33a,pCVar9,uVar12);
                    thunk_FUN_005e7c00(&DAT_0080f33a,1);
                  }
                  if (*(int *)((int)this_00 + 0x1a7f) == 0) {
                    iVar5 = thunk_FUN_005deb90(*(int *)((int)this_00 + 0x1a5b));
                    if (iVar5 == 0) {
                      *(undefined1 *)(this_00 + 0x69d) = 0;
                      thunk_FUN_005dac60();
                      *(undefined1 *)((int)this_00 + 0x1a75) = 1;
                      thunk_FUN_005b7ef0(*(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6),0x252e,
                                         '\0',(undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,
                                         0,0);
                    }
                    *(undefined1 *)((int)this_00 + 0x1a76) = 0;
                  }
                }
              }
              break;
            case 0x31:
            case 0x33:
            case 0x35:
              *(undefined1 *)((int)this_00 + 0x1a75) = 1;
              aiStack_4c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6) == 0) {
LAB_005e91f7:
                (**(code **)*this_00)(aiStack_4c);
              }
              else {
                aiStack_4c[2] = this_00[2];
                aiStack_4c[3] = 2;
                thunk_FUN_005b7ef0(*(void **)(*(int *)((int)this_00 + 0x1a5b) + 0x2e6),0x2522,'\0',
                                   aiStack_4c,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
            }
            this_00[0x69b] = *(int *)((int)this_00 + 0x61);
            if (piStack_14 != (int *)0x0) {
              FUN_006ab060(&piStack_14);
            }
          }
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < iStack_24);
      }
      if ((((*(char *)((int)this_00 + 0x1a76) != '\0') &&
           (3000 < (uint)(*(int *)((int)this_00 + 0x61) - *(int *)((int)this_00 + 0x1a7b)))) &&
          (*(int *)((int)this_00 + 0x1a7f) != 0)) && (*(int *)((int)this_00 + 0x1a83) != 0)) {
        uVar12 = *(int *)((int)this_00 + 0x1a7f) * 4 + 4;
        pcStack_20 = (char *)FUN_006aac70(uVar12);
        iStack_18 = *(int *)((int)this_00 + 0x1a83);
        *(undefined4 *)pcStack_20 = *(undefined4 *)((int)this_00 + 0x1a7f);
        puVar13 = (uint *)(pcStack_20 + 4);
        uVar10 = 0;
        uVar14 = 0;
        if (*(int *)(*(int *)((int)this_00 + 0x1a5b) + 0x6a6) != 0) {
          do {
            if (*(char *)(uVar10 + iStack_18) == '\0') {
              *puVar13 = uVar10;
              puVar13 = puVar13 + 1;
              uVar14 = uVar14 + 1;
              if (*(uint *)((int)this_00 + 0x1a7f) <= uVar14) break;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < *(uint *)(*(int *)((int)this_00 + 0x1a5b) + 0x6a6));
        }
        FUN_006b6500((int)DAT_00811764,1);
        FUN_00715360(DAT_00811764,1,'%',pcStack_20,uVar12,1,0xffffffff);
        FUN_006b6500((int)DAT_00811764,DAT_0080733c);
        FUN_006ab060(&pcStack_20);
        *(undefined4 *)((int)this_00 + 0x1a7b) = *(undefined4 *)((int)this_00 + 0x61);
      }
    }
  }
  else if (cVar1 == '\x03') {
    if ((this_00[0x699] == 0) &&
       (*(int *)(DAT_0081176c + 0x300) < *(int *)(DAT_0081176c + 0x304) + -1)) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + 1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        FUN_006b3730(*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                     *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                     *(uint *)(DAT_0081176c + 0x318));
      }
      iStack_c = 0;
    }
    if ((this_00[0x6be] != 0) && (iVar5 = thunk_FUN_005ab0a0(), iVar5 != 0)) {
      iStack_c = 0;
    }
    if ((((this_00[0x699] == 0) || (this_00[0x69a] != 0)) && (this_00[0x6c0] != 0)) &&
       (iVar5 = thunk_FUN_005ab0a0(), iVar5 != 0)) {
      iStack_c = 0;
    }
    if (((this_00[0x699] == 0) && (this_00[0x6bf] != 0)) &&
       (iVar5 = thunk_FUN_005ab0a0(), iVar5 != 0)) {
      iStack_c = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      iStack_c = 0;
    }
    if (iStack_c != 0) {
      if (this_00[0x6be] != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0((undefined4 *)this_00[0x6be]);
        this_00[0x6be] = 0;
      }
      if (this_00[0x6c0] != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0((undefined4 *)this_00[0x6c0]);
        this_00[0x6c0] = 0;
      }
      if (this_00[0x6bf] != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0((undefined4 *)this_00[0x6bf]);
        this_00[0x6bf] = 0;
      }
      *(undefined1 *)((int)this_00 + 0x65) = 1;
      this_00[0x69b] = *(int *)((int)this_00 + 0x61);
      if (this_00[0x699] == 0) {
        FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
        if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc));
        }
      }
      thunk_FUN_00540dc0(1,this_00[2],2,0xc0a1,2,0x1c,0,0,0,0,0,0);
      iVar5 = *(int *)((int)this_00 + 0x1a5b);
      if (*(int *)(iVar5 + 0x2e6) != 0) {
        puVar8 = auStack_a8;
        for (iVar11 = 6; iVar11 != 0; iVar11 = iVar11 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        *(undefined2 *)puVar8 = 0;
        uStack_9c = 1;
        uStack_9e = 1;
        thunk_FUN_005b9010(*(void **)(iVar5 + 0x2e6),(int)auStack_a8);
      }
      thunk_FUN_005e9970((int)this_00);
      puVar13 = (uint *)(this_00 + 0x6a5);
      iVar5 = 0x16;
      do {
        FUN_006b3430(DAT_008075a8,*puVar13);
        puVar13 = puVar13 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x3a9),*(uint *)(DAT_0081176c + 0x3ad));
      }
      if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x43a),*(uint *)(DAT_0081176c + 0x43e));
      }
      if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x4cb),*(uint *)(DAT_0081176c + 0x4cf));
      }
      FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
      if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
      }
      if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
        FUN_006b34d0(*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
      }
      FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
      FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
      thunk_FUN_005e79b0('\0');
      DAT_00858df8 = puStack_ec;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if ((this_00[0x699] == 0) && (0 < *(int *)(DAT_0081176c + 0x300))) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + -1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        FUN_006b3730(*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                     *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                     *(uint *)(DAT_0081176c + 0x318));
      }
      iStack_c = 0;
    }
    if (this_00[0x6be] != 0) {
      iVar5 = thunk_FUN_005ab0a0();
      if (iVar5 == 0) {
        if (-1 < (int)*(uint *)(this_00[0x6be] + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(this_00[0x6be] + 3));
        }
      }
      else {
        iStack_c = 0;
      }
    }
    if (((this_00[0x699] == 0) || (*(char *)((int)this_00 + 0x1a5f) == '\x0e')) &&
       (this_00[0x6c0] != 0)) {
      iVar5 = thunk_FUN_005ab0a0();
      if (iVar5 == 0) {
        if (-1 < (int)*(uint *)(this_00[0x6c0] + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(this_00[0x6c0] + 3));
        }
      }
      else {
        iStack_c = 0;
      }
    }
    if ((this_00[0x699] == 0) && (this_00[0x6bf] != 0)) {
      iVar5 = thunk_FUN_005ab0a0();
      if (iVar5 == 0) {
        if (-1 < (int)*(uint *)(this_00[0x6bf] + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(this_00[0x6bf] + 3));
        }
      }
      else {
        iStack_c = 0;
      }
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      iStack_c = 0;
    }
    if (iStack_c != 0) {
      bVar2 = *(byte *)((int)this_00 + 0x1a5a);
      *(undefined1 *)((int)this_00 + 0x65) = 2;
      if ((bVar2 != 0xff) && (*(int *)((int)this_00 + (uint)bVar2 * 0x1fb + 0xd1) != 0)) {
        FUN_006e3b50((undefined4 *)((int)this_00 + (uint)bVar2 * 0x1fb + 0xc1));
        DAT_00858df8 = puStack_ec;
        return;
      }
    }
  }
  DAT_00858df8 = puStack_ec;
  return;
}

