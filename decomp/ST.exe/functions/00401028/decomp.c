
void thunk_FUN_00446520(uint param_1,short param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  uint uVar7;
  void *unaff_EDI;
  undefined4 uStack_68;
  undefined4 auStack_64 [16];
  byte *pbStack_24;
  byte *pbStack_20;
  byte *pbStack_1c;
  int iStack_18;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  uStack_68 = DAT_00858df8;
  iStack_18 = *(int *)((int)&DAT_007f5816 + (char)param_1 * 0xa62);
  DAT_00858df8 = &uStack_68;
  iVar2 = __setjmp3(auStack_64,0,unaff_EDI,unaff_ESI);
  iVar4 = iStack_18;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_68;
    if (iVar2 != -0x5001fff7) {
      iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x296d,0,0,&DAT_007a4ccc);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FUN_006a5e40(iVar2,0,0x7a6004,0x296e);
    }
    return;
  }
  if (iStack_18 == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x291d);
  }
  iStack_c = *(int *)(iVar4 + 0xc);
  if (param_3 == 1) {
    uVar5 = 0;
    if (0 < iStack_c) {
      do {
        FUN_006acc70(iVar4,uVar5,&pbStack_24);
        uVar6 = 0;
        uVar7 = *(uint *)(pbStack_20 + 0xc);
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)pbStack_20,uVar6,&uStack_8);
            if ((short)uStack_8 == param_2) {
              FUN_006b0c70((int)pbStack_20,uVar6);
              pvVar3 = (void *)thunk_FUN_0042b620(param_1,uStack_8,1);
              uStack_10 = *(undefined4 *)(DAT_00802a38 + 0xe4);
              thunk_FUN_0045ef00(pvVar3,0x21,&uStack_10);
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar7);
        }
        if (uVar6 != uVar7) {
          if (uVar7 == 1) {
            FUN_006ae110(pbStack_24);
            FUN_006ae110(pbStack_20);
            FUN_006ae110(pbStack_1c);
            FUN_006b0c70(iStack_18,uVar5);
            iStack_c = iStack_c + -1;
          }
          break;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iStack_18;
      } while ((int)uVar5 < iStack_c);
    }
    if (iStack_c == 0) {
      thunk_FUN_00446910((char)param_1);
      DAT_00858df8 = (undefined4 *)uStack_68;
      return;
    }
  }
  else {
    uVar5 = 0;
    if (0 < iStack_c) {
      do {
        FUN_006acc70(iVar4,uVar5,&pbStack_24);
        uVar6 = 0;
        uVar7 = *(uint *)(pbStack_24 + 0xc);
        if (0 < (int)uVar7) {
          do {
            FUN_006acc70((int)pbStack_24,uVar6,&uStack_8);
            if ((short)uStack_8 == param_2) {
              FUN_006b0c70((int)pbStack_24,uVar6);
              break;
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar7);
        }
        if ((uVar6 != uVar7) && (uVar7 == 1)) {
          uVar7 = 0;
          iVar4 = *(int *)(pbStack_20 + 0xc);
          if (0 < iVar4) {
            do {
              FUN_006acc70((int)pbStack_20,uVar7,&uStack_8);
              pvVar3 = (void *)thunk_FUN_0042b620(param_1,uStack_8,1);
              if (pvVar3 == (void *)0x0) {
                iVar2 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2955,0,0,
                                     &DAT_007a4ccc);
                if (iVar2 != 0) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
              }
              else {
                uStack_10 = *(undefined4 *)(DAT_00802a38 + 0xe4);
                thunk_FUN_0045ef00(pvVar3,0x21,&uStack_10);
              }
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < iVar4);
          }
          FUN_006ae110(pbStack_24);
          FUN_006ae110(pbStack_20);
          FUN_006ae110(pbStack_1c);
          FUN_006b0c70(iStack_18,uVar5);
          iStack_c = iStack_c + -1;
          uVar5 = uVar5 - 1;
        }
        uVar5 = uVar5 + 1;
        iVar4 = iStack_18;
      } while ((int)uVar5 < iStack_c);
    }
    if (iStack_c == 0) {
      thunk_FUN_00446910((char)param_1);
      DAT_00858df8 = (undefined4 *)uStack_68;
      return;
    }
  }
  thunk_FUN_00446aa0((char)param_1);
  thunk_FUN_00446f80(param_1);
  DAT_00858df8 = (undefined4 *)uStack_68;
  return;
}

