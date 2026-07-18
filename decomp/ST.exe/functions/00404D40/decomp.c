
void __thiscall
STAllPlayersC::FramePick
          (STAllPlayersC *this,uint param_1,int param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 extraout_ECX_04;
  undefined4 extraout_ECX_05;
  undefined4 extraout_ECX_06;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char cVar7;
  undefined4 uStack_90;
  undefined4 auStack_8c [16];
  int iStack_4c;
  byte *pbStack_48;
  byte *pbStack_44;
  uint *puStack_40;
  uint *puStack_3c;
  uint *puStack_38;
  uint *puStack_34;
  uint *puStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  byte *pbStack_24;
  uint *puStack_20;
  uint *puStack_1c;
  uint *puStack_18;
  uint *puStack_14;
  uint *puStack_10;
  uint uStack_c;
  uint uStack_8;
  
  puStack_10 = (uint *)0x0;
  puStack_18 = (uint *)0x0;
  puStack_3c = (uint *)0x0;
  puStack_14 = (uint *)0x0;
  puStack_1c = (uint *)0x0;
  puStack_40 = (uint *)0x0;
  puStack_34 = (uint *)0x0;
  puStack_2c = (uint *)0x0;
  puStack_20 = (uint *)0x0;
  puStack_28 = (uint *)0x0;
  puStack_30 = (uint *)0x0;
  puStack_38 = (uint *)0x0;
  pbStack_24 = (byte *)0x0;
  pbStack_44 = (byte *)0x0;
  pbStack_48 = (byte *)0x0;
  uStack_90 = DAT_00858df8;
  DAT_00858df8 = &uStack_90;
  iVar2 = __setjmp3(auStack_8c,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_90;
    if (iVar2 == -0x5001fff7) {
      if (puStack_10 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_10);
      }
      if (puStack_18 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_18);
      }
      if (puStack_3c != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_3c);
      }
      if (puStack_14 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_14);
      }
      if (puStack_1c != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_1c);
      }
      if (puStack_40 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_40);
      }
      if (puStack_34 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_34);
      }
      if (puStack_2c != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_2c);
      }
      if (puStack_20 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_20);
      }
      if (puStack_28 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_28);
      }
      if (puStack_30 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_30);
      }
      if (puStack_38 != (uint *)0x0) {
        FUN_006ae110((byte *)puStack_38);
      }
      thunk_FUN_00435060();
      return;
    }
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xdd1,0,iVar2,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar2,0,0x7a6004,0xdd2);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  cVar7 = (char)param_1;
  GetGObjFromZone2(this,cVar7,param_2,param_3,param_4,param_5,(int *)&puStack_10,(int *)&puStack_18,
                   (int *)&puStack_3c,(int *)&puStack_14,(int *)&puStack_1c,(int *)&puStack_40,
                   (int *)&puStack_34,(int *)&puStack_2c,(int *)&puStack_20,(int *)&puStack_28,
                   (int *)&puStack_30,(int *)&puStack_38);
  if (puStack_10[3] != 0) {
    iVar2 = cVar7 * 0xa62;
    if (*(int *)((int)&DAT_007f5023 + iVar2) == 0) {
      iVar5 = *(int *)((int)&DAT_007f4f83 + iVar2);
      if (iVar5 == 0) {
LAB_00431886:
        iVar5 = thunk_FUN_0044ab90(param_1,0,0x3c,cVar7,puStack_10,0);
        if (iVar5 < 1) goto LAB_004318a9;
        thunk_FUN_0044b030(cVar7,0,iVar5);
LAB_004318b5:
        *(undefined4 *)((int)&DAT_007f4f83 + iVar2) = 0x3c;
      }
      else if (iVar5 == 0x3c) {
        if (param_6 == 1) {
          if (*(int *)((int)&DAT_007f4f87 + iVar2) == (int)cVar7) {
            CalibrateTmp(this,cVar7,0,0,puStack_10,(int *)0x0,(int *)&pbStack_44,(int *)&pbStack_48)
            ;
            thunk_FUN_0042d190(param_1,0x3c,(int)pbStack_44,0,0);
            DelObjsFromTmp(this,param_1,0,0,(int)pbStack_44);
            AddObjsToTmp(this,param_1,0,0,(int)pbStack_48);
            FUN_006ae110(pbStack_44);
            FUN_006ae110(pbStack_48);
          }
        }
        else {
          iVar5 = thunk_FUN_0044ab90(param_1,0,0x3c,cVar7,puStack_10,0);
          if (iVar5 < 1) {
            if (iVar5 < 0) {
              PushTV(cVar7,0);
              if (*(int *)((int)&DAT_007f4f97 + iVar2) == (int)cVar7) {
                CalibrateTmp(this,cVar7,0,1,puStack_10,(int *)&pbStack_24,(int *)0x0,(int *)0x0);
                thunk_FUN_0042d190(param_1,0x3c,(int)pbStack_24,0,0);
                FUN_006ae110(pbStack_24);
              }
              else {
                thunk_FUN_0042d4f0(cVar7,0,1,0);
              }
              goto LAB_004318a9;
            }
          }
          else {
            thunk_FUN_0044b030(cVar7,0,iVar5);
          }
        }
      }
      else if (iVar5 == 0x1ae) {
        if (param_6 != 1) {
          iVar5 = thunk_FUN_0044ab90(param_1,0,0x3c,cVar7,puStack_10,0);
          if (iVar5 < 1) {
            PushTV(cVar7,0);
            thunk_FUN_0042d4f0(cVar7,0,1,0);
            goto LAB_004318a9;
          }
          thunk_FUN_0044b030(cVar7,0,iVar5);
        }
      }
      else {
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xa60,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (*(int *)((int)&DAT_007f5023 + iVar2) == 1) {
      if (param_6 != 1) {
        *(undefined4 *)((int)&DAT_007f5023 + iVar2) = 0;
        thunk_FUN_0042d4f0(cVar7,1,0,0);
        iVar5 = *(int *)((int)&DAT_007f4f83 + iVar2);
        if (iVar5 == 0) goto LAB_00431886;
        if (iVar5 == 0x3c) {
          iVar5 = thunk_FUN_0044ab90(param_1,0,0x3c,cVar7,puStack_10,0);
          if (iVar5 < 0) {
            PushTV(cVar7,0);
LAB_004318a9:
            AddObjsToTmp(this,param_1,0,0,(int)puStack_10);
            goto LAB_004318b5;
          }
          thunk_FUN_0044b030(cVar7,0,iVar5);
        }
        else if (iVar5 == 0x1ae) {
          iVar5 = thunk_FUN_0044ab90(param_1,0,0x3c,cVar7,puStack_10,0);
          if (iVar5 < 1) {
            PushTV(cVar7,0);
            goto LAB_004318a9;
          }
          thunk_FUN_0044b030(cVar7,0,iVar5);
        }
        else {
          iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xa88,0,0,&DAT_007a4ccc);
          if (iVar2 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
    }
    else {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xa8c,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xa8e);
  }
  if (puStack_34[3] != 0) {
    if (param_6 == 1) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xa92);
    }
    FUN_006acc70((int)puStack_34,0,&uStack_8);
    puStack_34[3] = 0;
    FUN_006ae1c0(puStack_34,&uStack_8);
    uVar3 = thunk_FUN_0042b620(0,uStack_8,3);
    if (uVar3 == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xa95);
    }
    iStack_4c = cVar7 * 0xa62;
    if (*(int *)((int)&DAT_007f5023 + iStack_4c) == 0) {
      iVar2 = *(int *)((int)&DAT_007f4f83 + iStack_4c);
      if (iVar2 == 0) {
        iVar2 = thunk_FUN_0044ab90(param_1,0,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
LAB_00431a49:
          AddObjToTmp2(this,cVar7,0,0,*(int *)(uVar3 + 0x20),
                       CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(uVar3 + 0x24)),uStack_8);
        }
        else {
          thunk_FUN_0044b030(cVar7,0,iVar2);
        }
      }
      else if (iVar2 == 0x3c) {
        iVar2 = thunk_FUN_0044ab90(param_1,0,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
LAB_00431c38:
          PushTV(cVar7,0);
          iVar2 = thunk_FUN_0042d4f0(cVar7,0,1,0);
          goto LAB_00431a49;
        }
        thunk_FUN_0044b030(cVar7,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = thunk_FUN_0044ab90(param_1,0,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00431c38;
        }
        else {
          thunk_FUN_0044b030(cVar7,0,iVar2);
        }
      }
      else {
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xaba,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (*(int *)((int)&DAT_007f5023 + iStack_4c) == 1) {
      *(undefined4 *)((int)&DAT_007f5023 + iStack_4c) = 0;
      thunk_FUN_0042d4f0(cVar7,1,0,0);
      iVar2 = *(int *)((int)&DAT_007f4f83 + iStack_4c);
      if (iVar2 == 0) {
        iVar2 = thunk_FUN_0044ab90(param_1,0,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) goto LAB_00431a49;
        thunk_FUN_0044b030(cVar7,0,iVar2);
      }
      else if (iVar2 == 0x3c) {
        iVar2 = thunk_FUN_0044ab90(param_1,0,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
LAB_00431a3f:
          iVar2 = PushTV(cVar7,0);
          goto LAB_00431a49;
        }
        thunk_FUN_0044b030(cVar7,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = thunk_FUN_0044ab90(param_1,0,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 0) goto LAB_00431a3f;
        thunk_FUN_0044b030(cVar7,0,iVar2);
      }
      else {
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xade,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xae2,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xae4);
  }
  if (puStack_28[3] != 0) {
    if (param_6 == 1) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xae8);
    }
    FUN_006acc70((int)puStack_28,0,&uStack_8);
    puStack_28[3] = 0;
    FUN_006ae1c0(puStack_28,&uStack_8);
    uVar3 = thunk_FUN_0042b620(0xffffffff,uStack_8,2);
    if (uVar3 == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xaeb);
    }
    iStack_4c = cVar7 * 0xa62;
    if (*(int *)((int)&DAT_007f5023 + iStack_4c) == 0) {
      *(undefined4 *)((int)&DAT_007f5023 + iStack_4c) = 1;
      thunk_FUN_0042d4f0(cVar7,0,0,0);
      iVar2 = *(int *)((int)&DAT_007f4fd3 + iStack_4c);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          if (iVar2 < 1) goto LAB_00431ec7;
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00431e9e;
            goto LAB_00431e77;
          }
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          uVar6 = extraout_ECX;
          if (iVar2 < 1) goto LAB_00431ed1;
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00431e9e:
        iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 0) {
LAB_00431ec7:
          PushTV(cVar7,1);
          uVar6 = extraout_ECX_00;
LAB_00431ed1:
          uVar4 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(uVar3 + 0x24));
          iVar2 = *(int *)(uVar3 + 0x20);
LAB_00431edd:
          AddObjToTmp2(this,cVar7,1,0,iVar2,uVar4,uStack_8);
        }
        else {
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else {
LAB_00431e77:
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xb3a,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (*(int *)((int)&DAT_007f5023 + iStack_4c) == 1) {
      iVar2 = *(int *)((int)&DAT_007f4fd3 + iStack_4c);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          if (iVar2 < 1) {
LAB_00431da2:
            PushTV(cVar7,1);
            thunk_FUN_0042d4f0(cVar7,1,1,0);
            uVar6 = extraout_EDX_00;
LAB_00431dba:
            uVar4 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(uVar3 + 0x24));
            iVar2 = *(int *)(uVar3 + 0x20);
            goto LAB_00431edd;
          }
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00431d70;
            goto LAB_00431d42;
          }
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          uVar6 = extraout_EDX;
          if (iVar2 < 1) goto LAB_00431dba;
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00431d70:
        iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00431da2;
        }
        else {
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else {
LAB_00431d42:
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xb13,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xb3e,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xb40);
  }
  if (puStack_30[3] != 0) {
    if (param_6 == 1) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xb44);
    }
    FUN_006acc70((int)puStack_30,0,&uStack_8);
    puStack_30[3] = 0;
    FUN_006ae1c0(puStack_30,&uStack_8);
    uVar3 = thunk_FUN_0042b620(0xffffffff,uStack_8,5);
    if (uVar3 == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xb47);
    }
    iStack_4c = cVar7 * 0xa62;
    if (*(int *)((int)&DAT_007f5023 + iStack_4c) == 0) {
      *(undefined4 *)((int)&DAT_007f5023 + iStack_4c) = 1;
      thunk_FUN_0042d4f0(cVar7,0,0,0);
      iVar2 = *(int *)((int)&DAT_007f4fd3 + iStack_4c);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          if (iVar2 < 1) goto LAB_004321f3;
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_004321ca;
            goto LAB_004321a3;
          }
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          if (iVar2 < 1) goto LAB_004321fd;
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_004321ca:
        iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 0) {
LAB_004321f3:
          iVar2 = PushTV(cVar7,1);
LAB_004321fd:
          uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(uVar3 + 0x24));
          iVar2 = *(int *)(uVar3 + 0x20);
LAB_00432209:
          AddObjToTmp2(this,cVar7,1,0,iVar2,uVar4,uStack_8);
        }
        else {
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else {
LAB_004321a3:
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xb96,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (*(int *)((int)&DAT_007f5023 + iStack_4c) == 1) {
      iVar2 = *(int *)((int)&DAT_007f4fd3 + iStack_4c);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          if (iVar2 < 1) {
LAB_004320ce:
            PushTV(cVar7,1);
            thunk_FUN_0042d4f0(cVar7,1,1,0);
            uVar6 = extraout_ECX_02;
LAB_004320e6:
            uVar4 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(uVar3 + 0x24));
            iVar2 = *(int *)(uVar3 + 0x20);
            goto LAB_00432209;
          }
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_0043209c;
            goto LAB_0043206e;
          }
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          uVar6 = extraout_ECX_01;
          if (iVar2 < 1) goto LAB_004320e6;
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_0043209c:
        iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_004320ce;
        }
        else {
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else {
LAB_0043206e:
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xb6f,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xb9a,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xb9c);
  }
  if (puStack_14[3] != 0) {
    if (param_6 == 1) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xba0);
    }
    FUN_006acc70((int)puStack_14,0,&uStack_8);
    puStack_14[3] = 0;
    FUN_006ae1c0(puStack_14,&uStack_8);
    iVar2 = cVar7 * 0xa62;
    if (*(int *)((int)&DAT_007f5023 + iVar2) == 0) {
      *(undefined4 *)((int)&DAT_007f5023 + iVar2) = 1;
      thunk_FUN_0042d4f0(cVar7,0,0,0);
      iVar5 = *(int *)((int)&DAT_007f4fd3 + iVar2);
      if (iVar5 < 0x19b) {
        if (iVar5 == 0x19a) {
          iVar5 = thunk_FUN_0044ab90(param_1,1,0x19a,cVar7,puStack_14,0);
          if (-1 < iVar5) {
            thunk_FUN_0044b030(cVar7,1,iVar5);
            goto LAB_00432582;
          }
          PushTV(cVar7,1);
LAB_0043256b:
          AddObjToTmp(this,cVar7,1,0,param_1,uStack_8);
        }
        else {
          if (iVar5 != 0) {
            if ((iVar5 == 0x5a) || (iVar5 == 0x172)) goto LAB_00432536;
            goto LAB_0043250f;
          }
          iVar5 = thunk_FUN_0044ab90(param_1,1,0x19a,cVar7,puStack_14,0);
          if (iVar5 < 1) goto LAB_0043256b;
          thunk_FUN_0044b030(cVar7,1,iVar5);
        }
LAB_00432578:
        *(undefined4 *)((int)&DAT_007f4fd3 + iVar2) = 0x19a;
      }
      else if ((iVar5 == 0x1a4) || (iVar5 == 0x1b8)) {
LAB_00432536:
        iVar5 = thunk_FUN_0044ab90(param_1,1,0x19a,cVar7,puStack_14,0);
        if (iVar5 < 1) {
          PushTV(cVar7,1);
          goto LAB_0043256b;
        }
        thunk_FUN_0044b030(cVar7,1,iVar5);
      }
      else {
LAB_0043250f:
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xbfb,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (*(int *)((int)&DAT_007f5023 + iVar2) == 1) {
      iVar5 = *(int *)((int)&DAT_007f4fd3 + iVar2);
      if (iVar5 < 0x19b) {
        if (iVar5 == 0x19a) {
          iVar5 = thunk_FUN_0044ab90(param_1,1,0x19a,cVar7,puStack_14,0);
          if (iVar5 < 1) {
            if (iVar5 < 0) {
              PushTV(cVar7,1);
              if (*(int *)((int)&DAT_007f4fe7 + iVar2) == (int)cVar7) {
                CalibrateTmp(this,cVar7,1,1,puStack_14,(int *)&pbStack_24,(int *)0x0,(int *)0x0);
                thunk_FUN_0042d190(param_1,0x19a,(int)pbStack_24,0,0);
                FUN_006ae110(pbStack_24);
              }
              else {
                thunk_FUN_0042d4f0(cVar7,1,1,0);
              }
              goto LAB_0043256b;
            }
          }
          else {
            thunk_FUN_0044b030(cVar7,1,iVar5);
          }
        }
        else {
          if (iVar5 == 0) {
            iVar5 = thunk_FUN_0044ab90(param_1,1,0x19a,cVar7,puStack_14,0);
            if (0 < iVar5) {
              thunk_FUN_0044b030(cVar7,1,iVar5);
              goto LAB_00432578;
            }
            goto LAB_0043256b;
          }
          if ((iVar5 == 0x5a) || (iVar5 == 0x172)) goto LAB_0043240a;
LAB_004323dc:
          iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xbd1,0,0,&DAT_007a4ccc);
          if (iVar2 != 0) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      else {
        if ((iVar5 != 0x1a4) && (iVar5 != 0x1b8)) goto LAB_004323dc;
LAB_0043240a:
        iVar5 = thunk_FUN_0044ab90(param_1,1,0x19a,cVar7,puStack_14,0);
        if (iVar5 < 1) {
          PushTV(cVar7,1);
          thunk_FUN_0042d4f0(cVar7,1,1,0);
          goto LAB_0043256b;
        }
        thunk_FUN_0044b030(cVar7,1,iVar5);
      }
    }
    else {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xbff,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
LAB_00432582:
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xc01);
  }
  if (puStack_20[3] != 0) {
    if (param_6 == 1) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xc05);
    }
    FUN_006acc70((int)puStack_20,0,&uStack_8);
    puStack_20[3] = 0;
    FUN_006ae1c0(puStack_20,&uStack_8);
    uVar3 = thunk_FUN_0042b620(0xffffffff,uStack_8,4);
    if (uVar3 == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xc08);
    }
    iStack_4c = cVar7 * 0xa62;
    if (*(int *)((int)&DAT_007f5023 + iStack_4c) == 0) {
      *(undefined4 *)((int)&DAT_007f5023 + iStack_4c) = 1;
      thunk_FUN_0042d4f0(cVar7,0,0,0);
      iVar2 = *(int *)((int)&DAT_007f4fd3 + iStack_4c);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          if (iVar2 < 1) goto LAB_0043288b;
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432862;
            goto LAB_0043283b;
          }
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          uVar6 = extraout_ECX_03;
          if (iVar2 < 1) goto LAB_00432895;
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432862:
        iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 0) {
LAB_0043288b:
          PushTV(cVar7,1);
          uVar6 = extraout_ECX_04;
LAB_00432895:
          uVar4 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(uVar3 + 0x24));
          iVar2 = *(int *)(uVar3 + 0x20);
LAB_004328a1:
          AddObjToTmp2(this,cVar7,1,0,iVar2,uVar4,uStack_8);
        }
        else {
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else {
LAB_0043283b:
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xc57,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (*(int *)((int)&DAT_007f5023 + iStack_4c) == 1) {
      iVar2 = *(int *)((int)&DAT_007f4fd3 + iStack_4c);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          if (iVar2 < 1) {
LAB_00432766:
            PushTV(cVar7,1);
            thunk_FUN_0042d4f0(cVar7,1,1,0);
            uVar6 = extraout_EDX_02;
LAB_0043277e:
            uVar4 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(uVar3 + 0x24));
            iVar2 = *(int *)(uVar3 + 0x20);
            goto LAB_004328a1;
          }
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432734;
            goto LAB_00432706;
          }
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          uVar6 = extraout_EDX_01;
          if (iVar2 < 1) goto LAB_0043277e;
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432734:
        iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00432766;
        }
        else {
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else {
LAB_00432706:
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xc30,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xc5b,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xc5d);
  }
  if (puStack_38[3] != 0) {
    if (param_6 == 1) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xc61);
    }
    FUN_006acc70((int)puStack_38,0,&uStack_8);
    puStack_38[3] = 0;
    FUN_006ae1c0(puStack_38,&uStack_8);
    uVar3 = thunk_FUN_0042b620(0xffffffff,uStack_8,6);
    if (uVar3 == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xc64);
    }
    iStack_4c = cVar7 * 0xa62;
    if (*(int *)((int)&DAT_007f5023 + iStack_4c) == 0) {
      *(undefined4 *)((int)&DAT_007f5023 + iStack_4c) = 1;
      thunk_FUN_0042d4f0(cVar7,0,0,0);
      iVar2 = *(int *)((int)&DAT_007f4fd3 + iStack_4c);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          if (iVar2 < 1) goto LAB_00432bb7;
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432b8e;
            goto LAB_00432b67;
          }
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          if (iVar2 < 1) goto LAB_00432bc1;
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432b8e:
        iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 0) {
LAB_00432bb7:
          iVar2 = PushTV(cVar7,1);
LAB_00432bc1:
          uVar4 = CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(uVar3 + 0x24));
          iVar2 = *(int *)(uVar3 + 0x20);
LAB_00432bcd:
          AddObjToTmp2(this,cVar7,1,0,iVar2,uVar4,uStack_8);
        }
        else {
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else {
LAB_00432b67:
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xcb3,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (*(int *)((int)&DAT_007f5023 + iStack_4c) == 1) {
      iVar2 = *(int *)((int)&DAT_007f4fd3 + iStack_4c);
      if (iVar2 < 0x19b) {
        if (iVar2 == 0x19a) {
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          if (iVar2 < 1) {
LAB_00432a92:
            PushTV(cVar7,1);
            thunk_FUN_0042d4f0(cVar7,1,1,0);
            uVar6 = extraout_ECX_06;
LAB_00432aaa:
            uVar4 = CONCAT31((int3)((uint)uVar6 >> 8),*(undefined1 *)(uVar3 + 0x24));
            iVar2 = *(int *)(uVar3 + 0x20);
            goto LAB_00432bcd;
          }
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
        else {
          if (iVar2 != 0) {
            if ((iVar2 == 0x5a) || (iVar2 == 0x172)) goto LAB_00432a60;
            goto LAB_00432a32;
          }
          iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                     (uint *)0x0,uStack_8);
          uVar6 = extraout_ECX_05;
          if (iVar2 < 1) goto LAB_00432aaa;
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else if ((iVar2 == 0x1a4) || (iVar2 == 0x1b8)) {
LAB_00432a60:
        iVar2 = thunk_FUN_0044ab90(param_1,1,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00432a92;
        }
        else {
          thunk_FUN_0044b030(cVar7,1,iVar2);
        }
      }
      else {
LAB_00432a32:
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xc8c,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xcb7,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xcb9);
  }
  if (puStack_18[3] != 0) {
    if (param_6 == 1) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xcbd);
    }
    FUN_006acc70((int)puStack_18,0,&uStack_8);
    puStack_18[3] = 0;
    FUN_006ae1c0(puStack_18,&uStack_8);
    FUN_006acc70((int)puStack_3c,0,&uStack_c);
    puStack_3c[3] = 0;
    FUN_006ae1c0(puStack_3c,&uStack_c);
    iVar2 = cVar7 * 0xa62;
    if (*(int *)((int)&DAT_007f5023 + iVar2) == 0) {
      iVar5 = *(int *)((int)&DAT_007f4f83 + iVar2);
      if (iVar5 == 0) {
LAB_00432e7f:
        iVar5 = thunk_FUN_0044ab90(param_1,0,0x3c,(char)uStack_c,puStack_18,0);
        if (iVar5 < 1) {
LAB_00432eae:
          AddObjToTmp(this,cVar7,0,0,uStack_c,uStack_8);
        }
        else {
          thunk_FUN_0044b030(cVar7,0,iVar5);
        }
        *(undefined4 *)((int)&DAT_007f4f83 + iVar2) = 0x3c;
      }
      else if (iVar5 == 0x3c) {
        iVar5 = thunk_FUN_0044ab90(param_1,0,0x3c,(char)uStack_c,puStack_18,0);
        if (iVar5 < 1) {
          if (iVar5 < 0) {
            PushTV(cVar7,0);
            thunk_FUN_0042d4f0(cVar7,0,1,0);
            goto LAB_00432eae;
          }
        }
        else {
          thunk_FUN_0044b030(cVar7,0,iVar5);
        }
      }
      else if (iVar5 == 0x1ae) {
        iVar5 = thunk_FUN_0044ab90(param_1,0,0x3c,(char)uStack_c,puStack_18,0);
        if (iVar5 < 1) {
          PushTV(cVar7,0);
          thunk_FUN_0042d4f0(cVar7,0,1,0);
          goto LAB_00432eae;
        }
        thunk_FUN_0044b030(cVar7,0,iVar5);
      }
      else {
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xce7,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (*(int *)((int)&DAT_007f5023 + iVar2) == 1) {
      *(undefined4 *)((int)&DAT_007f5023 + iVar2) = 0;
      thunk_FUN_0042d4f0(cVar7,1,0,0);
      iVar5 = *(int *)((int)&DAT_007f4f83 + iVar2);
      if (iVar5 == 0) goto LAB_00432e7f;
      if (iVar5 == 0x3c) {
        iVar5 = thunk_FUN_0044ab90(param_1,0,0x3c,(char)uStack_c,puStack_18,0);
        if (iVar5 < 0) {
          PushTV(cVar7,0);
          goto LAB_00432eae;
        }
        thunk_FUN_0044b030(cVar7,0,iVar5);
      }
      else if (iVar5 == 0x1ae) {
        iVar5 = thunk_FUN_0044ab90(param_1,0,0x3c,(char)uStack_c,puStack_18,0);
        if (iVar5 < 1) {
          PushTV(cVar7,0);
          goto LAB_00432eae;
        }
        thunk_FUN_0044b030(cVar7,0,iVar5);
      }
      else {
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xd0e,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xd12,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xd14);
  }
  if (puStack_2c[3] != 0) {
    if (param_6 == 1) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xd18);
    }
    FUN_006acc70((int)puStack_2c,0,&uStack_8);
    puStack_2c[3] = 0;
    FUN_006ae1c0(puStack_2c,&uStack_8);
    uVar3 = thunk_FUN_0042b620(0,uStack_8,3);
    if (uVar3 == 0) {
      FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xd1b);
    }
    iStack_4c = cVar7 * 0xa62;
    if (*(int *)((int)&DAT_007f5023 + iStack_4c) == 0) {
      iVar2 = *(int *)((int)&DAT_007f4f83 + iStack_4c);
      if (iVar2 == 0) {
        iVar2 = thunk_FUN_0044ab90(param_1,0,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
LAB_00433050:
          AddObjToTmp2(this,cVar7,0,0,*(int *)(uVar3 + 0x20),
                       CONCAT31((int3)((uint)iVar2 >> 8),*(undefined1 *)(uVar3 + 0x24)),uStack_8);
        }
        else {
          thunk_FUN_0044b030(cVar7,0,iVar2);
        }
      }
      else if (iVar2 == 0x3c) {
        iVar2 = thunk_FUN_0044ab90(param_1,0,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
LAB_0043322b:
          PushTV(cVar7,0);
          iVar2 = thunk_FUN_0042d4f0(cVar7,0,1,0);
          goto LAB_00433050;
        }
        thunk_FUN_0044b030(cVar7,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = thunk_FUN_0044ab90(param_1,0,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_0043322b;
        }
        else {
          thunk_FUN_0044b030(cVar7,0,iVar2);
        }
      }
      else {
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xd40,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else if (*(int *)((int)&DAT_007f5023 + iStack_4c) == 1) {
      *(undefined4 *)((int)&DAT_007f5023 + iStack_4c) = 0;
      thunk_FUN_0042d4f0(cVar7,1,0,0);
      iVar2 = *(int *)((int)&DAT_007f4f83 + iStack_4c);
      if (iVar2 == 0) {
        iVar2 = thunk_FUN_0044ab90(param_1,0,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) goto LAB_00433050;
        thunk_FUN_0044b030(cVar7,0,iVar2);
      }
      else if (iVar2 == 0x3c) {
        iVar2 = thunk_FUN_0044ab90(param_1,0,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
LAB_00433046:
          iVar2 = PushTV(cVar7,0);
          goto LAB_00433050;
        }
        thunk_FUN_0044b030(cVar7,0,iVar2);
      }
      else if (iVar2 == 0x1ae) {
        iVar2 = thunk_FUN_0044ab90(param_1,0,*(int *)(uVar3 + 0x20),*(char *)(uVar3 + 0x24),
                                   (uint *)0x0,uStack_8);
        if (iVar2 < 1) {
          if (iVar2 < 0) goto LAB_00433046;
        }
        else {
          thunk_FUN_0044b030(cVar7,0,iVar2);
        }
      }
      else {
        iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xd66,0,0,&DAT_007a4ccc);
        if (iVar2 != 0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
    else {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xd6a,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xd6c);
  }
  if (puStack_1c[3] == 0) goto LAB_004334f5;
  if (param_6 == 1) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xd70);
  }
  FUN_006acc70((int)puStack_1c,0,&uStack_8);
  puStack_1c[3] = 0;
  FUN_006ae1c0(puStack_1c,&uStack_8);
  FUN_006acc70((int)puStack_40,0,&uStack_c);
  puStack_40[3] = 0;
  FUN_006ae1c0(puStack_40,&uStack_c);
  iVar2 = cVar7 * 0xa62;
  if (*(int *)((int)&DAT_007f5023 + iVar2) != 0) {
    if (*(int *)((int)&DAT_007f5023 + iVar2) != 1) {
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xdcb,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_004334f5;
    }
    iVar5 = *(int *)((int)&DAT_007f4fd3 + iVar2);
    if (iVar5 < 0x19b) {
      if (iVar5 == 0x19a) {
        iVar5 = thunk_FUN_0044ab90(param_1,1,0x19a,(char)uStack_c,puStack_1c,0);
        if (0 < iVar5) {
          thunk_FUN_0044b030(cVar7,1,iVar5);
          goto LAB_004334f5;
        }
        if (-1 < iVar5) goto LAB_004334f5;
        PushTV(cVar7,1);
        thunk_FUN_0042d4f0(cVar7,1,1,0);
        goto LAB_004334df;
      }
      if (iVar5 == 0) goto LAB_004333f5;
      if ((iVar5 == 0x5a) || (iVar5 == 0x172)) goto LAB_00433363;
    }
    else if ((iVar5 == 0x1a4) || (iVar5 == 0x1b8)) {
LAB_00433363:
      iVar5 = thunk_FUN_0044ab90(param_1,1,0x19a,(char)uStack_c,puStack_1c,0);
      if (0 < iVar5) {
        thunk_FUN_0044b030(cVar7,1,iVar5);
        goto LAB_004334f5;
      }
      PushTV(cVar7,1);
      thunk_FUN_0042d4f0(cVar7,1,1,0);
      goto LAB_004334df;
    }
    iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xd9d,0,0,&DAT_007a4ccc);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_004334f5;
  }
  *(undefined4 *)((int)&DAT_007f5023 + iVar2) = 1;
  thunk_FUN_0042d4f0(cVar7,0,0,0);
  iVar5 = *(int *)((int)&DAT_007f4fd3 + iVar2);
  if (iVar5 < 0x19b) {
    if (iVar5 == 0x19a) {
      iVar5 = thunk_FUN_0044ab90(param_1,1,0x19a,(char)uStack_c,puStack_1c,0);
      if (-1 < iVar5) {
        thunk_FUN_0044b030(cVar7,1,iVar5);
        goto LAB_004334f5;
      }
      PushTV(cVar7,1);
      goto LAB_004334df;
    }
    if (iVar5 != 0) {
      if ((iVar5 == 0x5a) || (iVar5 == 0x172)) goto LAB_004334a3;
      goto LAB_0043347c;
    }
LAB_004333f5:
    iVar5 = thunk_FUN_0044ab90(param_1,1,0x19a,(char)uStack_c,puStack_1c,0);
    if (iVar5 < 1) goto LAB_004334df;
    thunk_FUN_0044b030(cVar7,1,iVar5);
  }
  else {
    if ((iVar5 != 0x1a4) && (iVar5 != 0x1b8)) {
LAB_0043347c:
      iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0xdc7,0,0,&DAT_007a4ccc);
      if (iVar2 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      goto LAB_004334f5;
    }
LAB_004334a3:
    iVar5 = thunk_FUN_0044ab90(param_1,1,0x19a,(char)uStack_c,puStack_1c,0);
    if (0 < iVar5) {
      thunk_FUN_0044b030(cVar7,1,iVar5);
      goto LAB_004334f5;
    }
    PushTV(cVar7,1);
LAB_004334df:
    AddObjToTmp(this,cVar7,1,0,uStack_c,uStack_8);
  }
  *(undefined4 *)((int)&DAT_007f4fd3 + iVar2) = 0x19a;
LAB_004334f5:
  FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0xdce);
  DAT_00858df8 = (undefined4 *)uStack_90;
  return;
}

