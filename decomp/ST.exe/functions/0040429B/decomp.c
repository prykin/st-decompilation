
void __fastcall thunk_FUN_005bae00(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  code *pcVar6;
  undefined4 *this;
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
  char acStack_c8 [2];
  undefined1 uStack_c6;
  undefined4 *puStack_a0;
  undefined4 auStack_9c [16];
  undefined4 auStack_5c [8];
  int iStack_3c;
  char cStack_38;
  undefined4 uStack_37;
  undefined4 uStack_33;
  char cStack_2c;
  undefined4 uStack_2b;
  undefined4 uStack_27;
  undefined4 *puStack_20;
  uint uStack_1c;
  short *psStack_18;
  int iStack_14;
  short *psStack_10;
  uint uStack_c;
  int iStack_8;
  
  iStack_8 = 1;
  puStack_20 = param_1;
  DVar8 = timeGetTime();
  *(DWORD *)((int)param_1 + 0x61) = DVar8;
  puStack_a0 = DAT_00858df8;
  DAT_00858df8 = &puStack_a0;
  iVar9 = __setjmp3(auStack_9c,0,unaff_EDI,unaff_ESI);
  this = puStack_20;
  if (iVar9 != 0) {
    DAT_00858df8 = puStack_a0;
    iVar10 = FUN_006ad4d0(s_E____titans_Start_prov_obj_cpp_007ccd28,0x1bc,0,iVar9,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar9,0,0x7ccd28,0x1bc);
      return;
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  switch(*(undefined1 *)((int)puStack_20 + 0x65)) {
  case 1:
    if (*(char *)((int)puStack_20 + 0x1a71) == '\0') {
      DAT_00858df8 = puStack_a0;
      return;
    }
    psStack_10 = (short *)0x0;
    if (*(int *)((int)puStack_20 + 0x1a6d) == 0) {
      pcVar12 = acStack_c8;
      for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
        pcVar12[0] = '\0';
        pcVar12[1] = '\0';
        pcVar12[2] = '\0';
        pcVar12[3] = '\0';
        pcVar12 = pcVar12 + 4;
      }
      pcVar12[0] = '\0';
      pcVar12[1] = '\0';
      uStack_c6 = 4;
      FUN_00715360(DAT_00811764,1,'\x1a',acStack_c8,0x26,1,0xffffffff);
    }
    iVar9 = *(int *)((int)this + 0x1a6d) + 1;
    *(int *)((int)this + 0x1a6d) = iVar9;
    if (iVar9 == 0xf) {
      *(undefined4 *)((int)this + 0x1a6d) = 0;
    }
    iVar9 = FUN_00715630(DAT_00811764,-1,&uStack_1c,&iStack_3c,&psStack_10,(uint *)0x0,-1,0);
    psVar7 = psStack_10;
    pvVar5 = DAT_00802a30;
    if (iVar9 != -0x4d) {
      if (iVar9 != 0) {
        if (iVar9 != 1) {
          DAT_00858df8 = puStack_a0;
          return;
        }
        if (uStack_1c == 0x1a) {
          uVar2 = uStack_c >> 8;
          uStack_c = uStack_c & 0xffffff00;
          if (*psStack_10 == (short)((uint)DAT_00807dd5 >> 0x10)) {
            psStack_18 = psStack_10 + 1;
            if ((char)*psStack_18 == '\x01') {
              pcVar12 = (char *)((int)psStack_10 + 0xb);
              switch(*pcVar12) {
              case '\x01':
                uStack_c = CONCAT31((int3)uVar2,1);
                iStack_14 = 0xe;
                break;
              case '\x02':
              case '\x03':
                wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c6ee4,&DAT_00807680,PTR_s_CUSTOM__0079c0bc);
                cStack_2c = *pcVar12;
                uStack_2b = *(undefined4 *)((int)psVar7 + 3);
                uStack_27 = 0;
                iVar9 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                     &cStack_2c,0);
                uStack_c = CONCAT31(uStack_c._1_3_,(iVar9 != -0x70) + '\x01');
                iStack_14 = (-(uint)(*pcVar12 != '\x02') & 2) + 0xd;
                break;
              case '\x05':
                wsprintfA((LPSTR)&DAT_0080f33a,s__s_s_s__007cce38,&DAT_00807680,
                          PTR_s_SAVEGAME__0079c0b8,&DAT_00807ddd);
                cStack_38 = *pcVar12;
                uStack_37 = *(undefined4 *)((int)psVar7 + 3);
                uStack_33 = *(undefined4 *)((int)psVar7 + 7);
                iVar9 = FUN_00725910((char *)&DAT_0080f33a,s___DKD_007cce44,0,&LAB_00404e49,
                                     &cStack_38,0);
                uStack_c = CONCAT31(uStack_c._1_3_,iVar9 == -0x70);
                iStack_14 = 0x10;
              }
            }
            else if ((char)*psStack_18 != '\x03') goto LAB_005bb532;
            pvVar5 = DAT_00802a30;
            if ((char)*psStack_18 == '\x03') {
              uStack_c = CONCAT31(uStack_c._1_3_,2);
            }
            while ((uStack_c & 0xff) != 1) {
              if ((uStack_c & 0xff) == 2) {
                thunk_FUN_005b6350(this,0x6109,0,1);
                DAT_0080877e = 0;
                DAT_008087be = 0;
                thunk_FUN_005bb910('\x01');
                pvVar5 = *(void **)(*(int *)((int)this + 0x1a5b) + 0x2e6);
                goto joined_r0x005bb4e0;
              }
              if ((*(char *)((int)psVar7 + 0xd) == '\0') ||
                 (((char)*psStack_18 == '\x01' && (*(char *)((int)psVar7 + 0xb) == '\x05')))) {
                if (DAT_00802a30 != (void *)0x0) {
                  uVar3 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
                  uVar4 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
                  *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
                  *(undefined2 *)((int)pvVar5 + 0x494) = 0xffff;
                  thunk_FUN_0054bf40(0,uVar4,uVar3);
                  thunk_FUN_00543c90(pvVar5,*(int *)((int)pvVar5 + 0xc5),
                                     *(int *)((int)pvVar5 + 0xc9));
                  *(undefined1 *)((int)pvVar5 + 0xd2) = 0;
                  *(undefined4 *)((int)pvVar5 + 0x4df) = 0xffffffff;
                }
                *(undefined1 *)((int)this + 0x1a71) = 0;
                thunk_FUN_005dac60();
                UVar14 = 0x2523;
                goto LAB_005bb2c6;
              }
              uStack_c = CONCAT31(uStack_c._1_3_,2);
            }
            thunk_FUN_005b6350(this,0x6121,iStack_14,0x11);
            DAT_0080877e = 0;
            if (*(char *)((int)psVar7 + 0xb) == '\x01') {
              DAT_008087be = 0;
            }
            thunk_FUN_005bb910('\x01');
            pvVar5 = *(void **)(*(int *)((int)this + 0x1a5b) + 0x2e6);
joined_r0x005bb4e0:
            if (pvVar5 != (void *)0x0) {
              thunk_FUN_005b8c70(pvVar5,1,0,1);
            }
          }
          else {
            if (DAT_00802a30 != (void *)0x0) {
              uVar3 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
              uVar4 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
              *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
              *(undefined2 *)((int)pvVar5 + 0x494) = 0xffff;
              thunk_FUN_0054bf40(0,uVar4,uVar3);
              thunk_FUN_00543c90(pvVar5,*(int *)((int)pvVar5 + 0xc5),*(int *)((int)pvVar5 + 0xc9));
              *(undefined1 *)((int)pvVar5 + 0xd2) = 0;
              *(undefined4 *)((int)pvVar5 + 0x4df) = 0xffffffff;
            }
            *(undefined1 *)((int)this + 0x1a71) = 0;
            thunk_FUN_005dac60();
            UVar14 = 0x2526;
LAB_005bb2c6:
            thunk_FUN_005b7ef0(*(void **)(*(int *)((int)this + 0x1a5b) + 0x2e6),UVar14,'\0',
                               (undefined4 *)0x0,(undefined4 *)0x0,(undefined4 *)0x0,0,0);
          }
        }
LAB_005bb532:
        *(undefined4 *)((int)this + 0x1a69) = *(undefined4 *)((int)this + 0x61);
        if (psStack_10 != (short *)0x0) {
          FUN_006ab060(&psStack_10);
          DAT_00858df8 = puStack_a0;
          return;
        }
        DAT_00858df8 = puStack_a0;
        return;
      }
      if ((uint)(*(int *)((int)this + 0x61) - *(int *)((int)this + 0x1a69)) < 0x7531) {
        DAT_00858df8 = puStack_a0;
        return;
      }
    }
    iVar9 = *(int *)((int)this + 0x1a5b);
    puVar13 = auStack_5c;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar13 = 0;
      puVar13 = puVar13 + 1;
    }
    *(undefined1 *)((int)this + 0x1a71) = 0;
    *(undefined1 *)((int)this + 0x1a72) = 1;
    pvVar5 = DAT_00802a30;
    auStack_5c[4] = 0x6952;
    if (*(int *)(iVar9 + 0x2e6) != 0) {
      if (DAT_00802a30 != (void *)0x0) {
        uVar3 = *(undefined4 *)((int)DAT_00802a30 + 0xc9);
        uVar4 = *(undefined4 *)((int)DAT_00802a30 + 0xc5);
        *(undefined1 *)((int)DAT_00802a30 + 0x493) = 1;
        *(undefined2 *)((int)pvVar5 + 0x494) = 0xffff;
        thunk_FUN_0054bf40(0,uVar4,uVar3);
        thunk_FUN_00543c90(pvVar5,*(int *)((int)pvVar5 + 0xc5),*(int *)((int)pvVar5 + 0xc9));
        *(undefined1 *)((int)pvVar5 + 0xd2) = 0;
        *(undefined4 *)((int)pvVar5 + 0x4df) = 0xffffffff;
      }
      auStack_5c[2] = this[2];
      auStack_5c[3] = 2;
      thunk_FUN_005b7ef0(*(void **)(*(int *)((int)this + 0x1a5b) + 0x2e6),0x2525,'\0',auStack_5c,
                         (undefined4 *)0x0,(undefined4 *)0x0,0,0);
      DAT_00858df8 = puStack_a0;
      return;
    }
    (**(code **)*this)(auStack_5c);
    break;
  case 3:
    if ((*(int *)((int)puStack_20 + 0x1c96) != 0) && (iVar9 = thunk_FUN_005ab0a0(), iVar9 != 0)) {
      iStack_8 = 0;
    }
    if ((*(int *)((int)this + 0x1c9a) != 0) && (iVar9 = thunk_FUN_005ab0a0(), iVar9 != 0)) {
      iStack_8 = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      if (*(int *)((int)this + 0x1c96) != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0(*(undefined4 **)((int)this + 0x1c96));
        *(undefined4 *)((int)this + 0x1c96) = 0;
      }
      if (*(int *)((int)this + 0x1c9a) != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0(*(undefined4 **)((int)this + 0x1c9a));
        *(undefined4 *)((int)this + 0x1c9a) = 0;
      }
      if (*(uint *)((int)this + 0x1a7b) != 0xffffffff) {
        FUN_006b34d0(*(uint **)((int)this + 0x1abf),*(uint *)((int)this + 0x1a7b),0xfffffffe,
                     *(uint *)((int)this + 0x1a93),*(uint *)((int)this + 0x1a97));
      }
      if (this[0x6c3] != 0xffffffff) {
        FUN_006b34d0((uint *)this[0x6d4],this[0x6c3],0xfffffffe,this[0x6c9],this[0x6ca]);
      }
      if (*(uint *)((int)this + 0x1b9d) != 0xffffffff) {
        FUN_006b34d0(*(uint **)((int)this + 0x1be1),*(uint *)((int)this + 0x1b9d),0xfffffffe,
                     *(uint *)((int)this + 0x1bb5),*(uint *)((int)this + 0x1bb9));
      }
      puVar11 = (uint *)((int)this + 0x1c2a);
      iVar9 = 0x16;
      do {
        FUN_006b3430(DAT_008075a8,*puVar11);
        puVar11 = puVar11 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (*(char *)((int)this + 0x1a5f) == '\0') {
        FUN_006b3430(DAT_008075a8,*(uint *)((int)this + 0x1c8a));
      }
      *(undefined1 *)((int)this + 0x65) = 1;
      thunk_FUN_005bba90('\0');
      thunk_FUN_005ba8b0('\0');
      DAT_00858df8 = puStack_a0;
      return;
    }
    break;
  case 4:
    if (*(int *)((int)puStack_20 + 0x1c96) != 0) {
      iVar9 = thunk_FUN_005ab0a0();
      if (iVar9 == 0) {
        uVar2 = *(uint *)(*(int *)((int)this + 0x1c96) + 3);
        if (-1 < (int)uVar2) {
          FUN_006b3af0(DAT_008075a8,uVar2);
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if (*(int *)((int)this + 0x1c9a) != 0) {
      iVar9 = thunk_FUN_005ab0a0();
      if (iVar9 == 0) {
        uVar2 = *(uint *)(*(int *)((int)this + 0x1c9a) + 3);
        if (-1 < (int)uVar2) {
          FUN_006b3af0(DAT_008075a8,uVar2);
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      bVar1 = *(byte *)((int)this + 0x1a5a);
      *(undefined1 *)((int)this + 0x65) = 2;
      if ((bVar1 != 0xff) && (*(int *)((int)this + (uint)bVar1 * 0x1fb + 0xd1) != 0)) {
        FUN_006e3b50((undefined4 *)((int)this + (uint)bVar1 * 0x1fb + 0xc1));
        DAT_00858df8 = puStack_a0;
        return;
      }
    }
    break;
  case 5:
    if (*(int *)((int)puStack_20 + 0x1c9a) != 0) {
      iVar9 = thunk_FUN_005ab0a0();
      if (iVar9 == 0) {
        if ((*(char *)(this + 0x698) == '\x01') &&
           (uVar2 = *(uint *)(*(int *)((int)this + 0x1c9a) + 3), -1 < (int)uVar2)) {
          FUN_006b3af0(DAT_008075a8,uVar2);
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      if (*(int *)((int)this + 0x1c9a) != 0) {
        thunk_FUN_005aafb0();
        FUN_0072e2b0(*(undefined4 **)((int)this + 0x1c9a));
        *(undefined4 *)((int)this + 0x1c9a) = 0;
      }
      if (*(char *)(this + 0x698) == '\0') {
        FUN_006b3430(DAT_008075a8,*(uint *)((int)this + 0x1c8a));
      }
      thunk_FUN_005baac0(*(char *)(this + 0x698),'\0');
      DAT_00858df8 = puStack_a0;
      return;
    }
  }
  DAT_00858df8 = puStack_a0;
  return;
}

