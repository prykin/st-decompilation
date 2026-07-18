
undefined4 thunk_FUN_00442300(uint param_1,uint param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  undefined4 *puVar10;
  void *unaff_EDI;
  undefined4 *puVar11;
  undefined4 uStack_d4;
  undefined4 auStack_d0 [16];
  undefined4 uStack_90;
  short sStack_8a;
  short sStack_82;
  int aiStack_6c [5];
  int iStack_58;
  undefined1 auStack_54 [4];
  uint uStack_50;
  int iStack_4c;
  uint uStack_48;
  int *piStack_44;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  undefined2 uStack_3a;
  short sStack_38;
  short sStack_36;
  short sStack_34;
  undefined2 uStack_32;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint uStack_1c;
  uint uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  uint *puStack_c;
  uint *puStack_8;
  
  iStack_4c = 4;
  aiStack_6c[0] = 0x38;
  aiStack_6c[1] = 0x39;
  aiStack_6c[2] = 0x4f;
  aiStack_6c[3] = 0x5e;
  piStack_44 = (int *)thunk_FUN_0042b620(param_1,param_2,1);
  iStack_58 = (**(code **)(*piStack_44 + 0x2c))();
  uStack_10 = 0;
  uStack_d4 = DAT_00858df8;
  DAT_00858df8 = &uStack_d4;
  iVar3 = __setjmp3(auStack_d0,0,unaff_EDI,unaff_ESI);
  iVar6 = iStack_4c;
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_d4;
    if (iVar3 != -0x5001fff7) {
      iVar6 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2454,0,iVar3,&DAT_007a4ccc);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      FUN_006a5e40(iVar3,0,0x7a6004,0x2455);
    }
    return uStack_10;
  }
  if (0 < iStack_4c) {
    piVar5 = (int *)((int)&DAT_007f4e2f + (char)param_1 * 0xa62);
    iVar3 = iStack_4c;
    do {
      if (*piVar5 == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x23dd);
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  piVar5 = piStack_44;
  if ((iStack_58 == 0x3b) || (iStack_58 == 0x60)) {
    thunk_FUN_004162b0(piStack_44,&sStack_38,&sStack_36,&sStack_34);
    uStack_32 = *(undefined2 *)((int)piVar5 + 0x32);
    uVar8 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
    puVar10 = DAT_007fb280;
    puVar11 = DAT_007fb238;
    for (uVar9 = (uVar8 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
    for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      puVar11 = (undefined4 *)((int)puVar11 + 1);
    }
    FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                 (int)sStack_38,(int)sStack_36,(int)sStack_34,-1,-1,-1);
    iStack_14 = 0;
    if (0 < iVar6) {
      do {
        iVar6 = iStack_14 * 4;
        puStack_c = thunk_FUN_0043e780((char)param_1,aiStack_6c[iStack_14],0,-1);
        uStack_48 = puStack_c[3];
        if (uStack_48 != 0) {
          puStack_8 = *(uint **)((int)&DAT_007f4e2f + (char)param_1 * 0xa62 + iVar6);
          uStack_18 = 0;
          if (0 < (int)uStack_48) {
            do {
              FUN_006acc70((int)puStack_c,uStack_18,&uStack_1c);
              piVar5 = (int *)thunk_FUN_0042b620(param_1,uStack_1c,1);
              piStack_44 = piVar5;
              iVar6 = (**(code **)(*piVar5 + 0x88))(auStack_54);
              if (0 < iVar6) {
                thunk_FUN_004162b0(piVar5,&sStack_40,&sStack_3e,&sStack_3c);
                uStack_3a = *(undefined2 *)((int)piVar5 + 0x32);
                iStack_30 = (int)*(short *)((int)DAT_007fb238 +
                                           ((sStack_3c + 1) * (int)DAT_007fb27e +
                                            (int)sStack_3e * (int)DAT_007fb278 + (int)sStack_40) * 2
                                           );
                if (iStack_30 == 0) {
                  iStack_30 = 1000000;
                  uStack_28 = 100;
                }
                else {
                  bVar2 = thunk_FUN_00430750(8);
                  uStack_50 = (uint)bVar2;
                  iStack_30 = ((((iStack_30 * 0xc9) / 3) / (int)uStack_50) * 0xc) / 10 + 800;
                  uStack_28 = (undefined4)(40000 / (longlong)iStack_30);
                }
                uVar9 = 0;
                uVar8 = puStack_8[3];
                uStack_2c = uStack_28;
                if (0 < (int)uVar8) {
                  do {
                    FUN_006acc70((int)puStack_8,uVar9,&uStack_90);
                    if ((sStack_8a == -1) && (sStack_82 == -1)) {
                      FUN_006ae140(puStack_8,uVar9,(undefined4 *)&sStack_40);
                      uStack_10 = 1;
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar8);
                }
                if (uVar9 == uVar8) {
                  FUN_006ae1c0(puStack_8,(undefined4 *)&sStack_40);
                  uStack_10 = 1;
                }
              }
              uStack_18 = uStack_18 + 1;
            } while ((int)uStack_18 < (int)uStack_48);
          }
        }
        FUN_006ae110((byte *)puStack_c);
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < iStack_4c);
    }
  }
  else {
    iStack_14 = 0;
    iVar3 = iStack_58;
    if (0 < iVar6) {
      do {
        iVar6 = iStack_14;
        if (iVar3 == aiStack_6c[iStack_14]) {
          iVar4 = thunk_FUN_004406c0((char)param_1);
          if ((char)iVar4 == '\x03') {
            iVar4 = 0x60;
          }
          else {
            iVar4 = 0x3b;
          }
          puStack_c = thunk_FUN_0043e780((char)param_1,iVar4,0,-1);
          piVar5 = piStack_44;
          uStack_48 = puStack_c[3];
          if (uStack_48 != 0) {
            thunk_FUN_004162b0(piStack_44,&sStack_40,&sStack_3e,&sStack_3c);
            uStack_3a = *(undefined2 *)((int)piVar5 + 0x32);
            uVar8 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
            puVar10 = DAT_007fb280;
            puVar11 = DAT_007fb238;
            for (uVar9 = (uVar8 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
              *puVar11 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar11 = puVar11 + 1;
            }
            for (uVar8 = uVar8 * 2 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
              *(undefined1 *)puVar11 = *(undefined1 *)puVar10;
              puVar10 = (undefined4 *)((int)puVar10 + 1);
              puVar11 = (undefined4 *)((int)puVar11 + 1);
            }
            FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                         (int)sStack_40,(int)sStack_3e,(int)sStack_3c,-1,-1,-1);
            uStack_18 = 0;
            puStack_8 = *(uint **)((int)&DAT_007f4e2f + (char)param_1 * 0xa62 + iStack_14 * 4);
            iVar6 = iStack_14;
            iVar3 = iStack_58;
            if (0 < (int)uStack_48) {
              do {
                FUN_006acc70((int)puStack_c,uStack_18,&uStack_1c);
                piVar5 = (int *)thunk_FUN_0042b620(param_1,uStack_1c,1);
                piStack_44 = piVar5;
                thunk_FUN_004162b0(piVar5,&sStack_38,&sStack_36,&sStack_34);
                uStack_32 = *(undefined2 *)((int)piVar5 + 0x32);
                iStack_30 = (int)*(short *)((int)DAT_007fb238 +
                                           ((sStack_34 + 1) * (int)DAT_007fb27e +
                                            (int)DAT_007fb278 * (int)sStack_36 + (int)sStack_38) * 2
                                           );
                if (iStack_30 == 0) {
                  iStack_30 = 1000000;
                  uStack_28 = 100;
                }
                else {
                  bVar2 = thunk_FUN_00430750(8);
                  uStack_50 = (uint)bVar2;
                  iStack_30 = ((((iStack_30 * 0xc9) / 3) / (int)uStack_50) * 0xc) / 10 + 800;
                  uStack_28 = (undefined4)(40000 / (longlong)iStack_30);
                }
                uVar9 = 0;
                uVar8 = puStack_8[3];
                uStack_2c = uStack_28;
                if (0 < (int)uVar8) {
                  do {
                    FUN_006acc70((int)puStack_8,uVar9,&uStack_90);
                    if ((sStack_8a == -1) && (sStack_82 == -1)) {
                      FUN_006ae140(puStack_8,uVar9,(undefined4 *)&sStack_40);
                      uStack_10 = 1;
                      break;
                    }
                    uVar9 = uVar9 + 1;
                  } while ((int)uVar9 < (int)uVar8);
                }
                if (uVar9 == uVar8) {
                  FUN_006ae1c0(puStack_8,(undefined4 *)&sStack_40);
                  uStack_10 = 1;
                }
                uStack_18 = uStack_18 + 1;
                iVar6 = iStack_14;
                iVar3 = iStack_58;
              } while ((int)uStack_18 < (int)uStack_48);
            }
          }
          FUN_006ae110((byte *)puStack_c);
        }
        iStack_14 = iVar6 + 1;
        if (iStack_4c <= iVar6 + 1) {
          DAT_00858df8 = (undefined4 *)uStack_d4;
          return uStack_10;
        }
      } while( true );
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_d4;
  return uStack_10;
}

