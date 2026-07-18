
undefined4 FUN_004461b0(uint param_1,short param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  uint uVar8;
  void *unaff_EDI;
  undefined4 local_6c;
  undefined4 local_68 [16];
  byte *local_28;
  byte *local_24;
  byte *local_20;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  int local_8;
  
  local_18 = 0xffffffff;
  local_6c = DAT_00858df8;
  local_10 = *(int *)((int)&DAT_007f5816 + (char)param_1 * 0xa62);
  DAT_00858df8 = &local_6c;
  iVar2 = __setjmp3(local_68,0,unaff_EDI,unaff_ESI);
  iVar4 = local_10;
  if (iVar2 != 0) {
    DAT_00858df8 = (undefined4 *)local_6c;
    if (iVar2 != -0x5001fff7) {
      iVar4 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2906,0,0,&DAT_007a4ccc);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      FUN_006a5e40(iVar2,0,0x7a6004,0x2907);
    }
    return local_18;
  }
  if (local_10 == 0) {
    FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x28ba);
  }
  local_8 = *(int *)(iVar4 + 0xc);
  if (param_3 == 1) {
    uVar6 = 0;
    if (0 < local_8) {
      do {
        FUN_006acc70(iVar4,uVar6,&local_28);
        uVar7 = 0;
        uVar8 = *(uint *)(local_24 + 0xc);
        if (0 < (int)uVar8) {
          do {
            FUN_006acc70((int)local_24,uVar7,&local_c);
            if ((short)local_c == param_2) {
              FUN_006b0c70((int)local_24,uVar7);
              pvVar3 = (void *)thunk_FUN_0042b620(param_1,local_c,1);
              local_14 = *(undefined4 *)(DAT_00802a38 + 0xe4);
              thunk_FUN_0045ef00(pvVar3,0x21,&local_14);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar8);
        }
        if (uVar7 != uVar8) {
          if (uVar8 == 1) {
            FUN_006ae110(local_28);
            FUN_006ae110(local_24);
            FUN_006ae110(local_20);
            FUN_006b0c70(local_10,uVar6);
            local_8 = local_8 + -1;
          }
          local_18 = 0;
          break;
        }
        uVar6 = uVar6 + 1;
        iVar4 = local_10;
      } while ((int)uVar6 < local_8);
    }
  }
  else {
    uVar6 = 0;
    if (0 < local_8) {
      do {
        FUN_006acc70(iVar4,uVar6,&local_28);
        uVar7 = 0;
        uVar8 = *(uint *)(local_28 + 0xc);
        if (0 < (int)uVar8) {
          do {
            FUN_006acc70((int)local_28,uVar7,&local_c);
            if ((short)local_c == param_2) {
              FUN_006b0c70((int)local_28,uVar7);
              break;
            }
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar8);
        }
        if (uVar7 != uVar8) {
          if (uVar8 == 1) {
            uVar8 = 0;
            iVar4 = *(int *)(local_24 + 0xc);
            if (0 < iVar4) {
              do {
                FUN_006acc70((int)local_24,uVar8,&local_c);
                pvVar3 = (void *)thunk_FUN_0042b620(param_1,local_c,1);
                local_14 = *(undefined4 *)(DAT_00802a38 + 0xe4);
                thunk_FUN_0045ef00(pvVar3,0x21,&local_14);
                uVar8 = uVar8 + 1;
              } while ((int)uVar8 < iVar4);
            }
            FUN_006ae110(local_28);
            FUN_006ae110(local_24);
            FUN_006ae110(local_20);
            FUN_006b0c70(local_10,uVar6);
            local_8 = local_8 + -1;
            uVar6 = uVar6 - 1;
          }
          local_18 = 0;
        }
        uVar6 = uVar6 + 1;
        iVar4 = local_10;
      } while ((int)uVar6 < local_8);
    }
  }
  if (local_8 == 0) {
    thunk_FUN_00446910((char)param_1);
  }
  DAT_00858df8 = (undefined4 *)local_6c;
  return local_18;
}

