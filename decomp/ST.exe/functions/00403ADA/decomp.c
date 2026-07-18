
undefined4 __thiscall STAllPlayersC::_AddMDPairs(STAllPlayersC *this,uint param_1,uint param_2)

{
  code *pcVar1;
  STAllPlayersC *pSVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  undefined4 *puVar11;
  void *unaff_EDI;
  undefined4 *puVar12;
  undefined4 uStack_d4;
  undefined4 auStack_d0 [16];
  undefined4 uStack_90;
  short sStack_8a;
  short sStack_82;
  int aiStack_6c [4];
  STAllPlayersC *pSStack_5c;
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
  pSStack_5c = this;
  piStack_44 = (int *)thunk_FUN_0042b620(param_1,param_2,1);
  iStack_58 = (**(code **)(*piStack_44 + 0x2c))();
  uStack_10 = 0;
  uStack_d4 = DAT_00858df8;
  DAT_00858df8 = &uStack_d4;
  iVar4 = __setjmp3(auStack_d0,0,unaff_EDI,unaff_ESI);
  iVar7 = iStack_4c;
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)uStack_d4;
    if (iVar4 != -0x5001fff7) {
      iVar7 = FUN_006ad4d0(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2454,0,iVar4,&DAT_007a4ccc);
      if (iVar7 != 0) {
        pcVar1 = (code *)swi(3);
        uVar8 = (*pcVar1)();
        return uVar8;
      }
      FUN_006a5e40(iVar4,0,0x7a6004,0x2455);
    }
    return uStack_10;
  }
  if (0 < iStack_4c) {
    piVar6 = (int *)((int)&DAT_007f4e2f + (char)param_1 * 0xa62);
    iVar4 = iStack_4c;
    do {
      if (*piVar6 == 0) {
        FUN_006a5e40(-0x5001fff7,DAT_007ed77c,0x7a6004,0x23dd);
      }
      piVar6 = piVar6 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  piVar6 = piStack_44;
  pSVar2 = pSStack_5c;
  if ((iStack_58 == 0x3b) || (iStack_58 == 0x60)) {
    thunk_FUN_004162b0(piStack_44,&sStack_38,&sStack_36,&sStack_34);
    uStack_32 = *(undefined2 *)((int)piVar6 + 0x32);
    uVar9 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
    puVar11 = DAT_007fb280;
    puVar12 = DAT_007fb238;
    for (uVar10 = (uVar9 & 0x7fffffff) >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    for (uVar9 = uVar9 * 2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar12 = (undefined4 *)((int)puVar12 + 1);
    }
    FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                 (int)sStack_38,(int)sStack_36,(int)sStack_34,-1,-1,-1);
    pSVar2 = pSStack_5c;
    iStack_14 = 0;
    if (0 < iVar7) {
      do {
        iVar7 = iStack_14 * 4;
        puStack_c = GetTOBJList(pSVar2,(char)param_1,aiStack_6c[iStack_14],0,-1);
        uStack_48 = puStack_c[3];
        if (uStack_48 != 0) {
          puStack_8 = *(uint **)((int)&DAT_007f4e2f + (char)param_1 * 0xa62 + iVar7);
          uStack_18 = 0;
          if (0 < (int)uStack_48) {
            do {
              FUN_006acc70((int)puStack_c,uStack_18,&uStack_1c);
              piVar6 = (int *)thunk_FUN_0042b620(param_1,uStack_1c,1);
              piStack_44 = piVar6;
              iVar7 = (**(code **)(*piVar6 + 0x88))(auStack_54);
              if (0 < iVar7) {
                thunk_FUN_004162b0(piVar6,&sStack_40,&sStack_3e,&sStack_3c);
                uStack_3a = *(undefined2 *)((int)piVar6 + 0x32);
                iStack_30 = (int)*(short *)((int)DAT_007fb238 +
                                           ((sStack_3c + 1) * (int)DAT_007fb27e +
                                            (int)sStack_3e * (int)DAT_007fb278 + (int)sStack_40) * 2
                                           );
                if (iStack_30 == 0) {
                  iStack_30 = 1000000;
                  uStack_28 = 100;
                }
                else {
                  bVar3 = thunk_FUN_00430750(8);
                  uStack_50 = (uint)bVar3;
                  iStack_30 = ((((iStack_30 * 0xc9) / 3) / (int)uStack_50) * 0xc) / 10 + 800;
                  uStack_28 = (undefined4)(40000 / (longlong)iStack_30);
                }
                uVar10 = 0;
                uVar9 = puStack_8[3];
                uStack_2c = uStack_28;
                if (0 < (int)uVar9) {
                  do {
                    FUN_006acc70((int)puStack_8,uVar10,&uStack_90);
                    if ((sStack_8a == -1) && (sStack_82 == -1)) {
                      FUN_006ae140(puStack_8,uVar10,(undefined4 *)&sStack_40);
                      uStack_10 = 1;
                      break;
                    }
                    uVar10 = uVar10 + 1;
                  } while ((int)uVar10 < (int)uVar9);
                }
                if (uVar10 == uVar9) {
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
    iVar4 = iStack_58;
    if (0 < iVar7) {
      do {
        iVar7 = iStack_14;
        if (iVar4 == aiStack_6c[iStack_14]) {
          iVar5 = thunk_FUN_004406c0((char)param_1);
          if ((char)iVar5 == '\x03') {
            iVar5 = 0x60;
          }
          else {
            iVar5 = 0x3b;
          }
          puStack_c = GetTOBJList(pSVar2,(char)param_1,iVar5,0,-1);
          piVar6 = piStack_44;
          uStack_48 = puStack_c[3];
          if (uStack_48 != 0) {
            thunk_FUN_004162b0(piStack_44,&sStack_40,&sStack_3e,&sStack_3c);
            uStack_3a = *(undefined2 *)((int)piVar6 + 0x32);
            uVar9 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
            puVar11 = DAT_007fb280;
            puVar12 = DAT_007fb238;
            for (uVar10 = (uVar9 & 0x7fffffff) >> 1; uVar10 != 0; uVar10 = uVar10 - 1) {
              *puVar12 = *puVar11;
              puVar11 = puVar11 + 1;
              puVar12 = puVar12 + 1;
            }
            for (uVar9 = uVar9 * 2 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined1 *)puVar12 = *(undefined1 *)puVar11;
              puVar11 = (undefined4 *)((int)puVar11 + 1);
              puVar12 = (undefined4 *)((int)puVar12 + 1);
            }
            FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                         (int)sStack_40,(int)sStack_3e,(int)sStack_3c,-1,-1,-1);
            uStack_18 = 0;
            puStack_8 = *(uint **)((int)&DAT_007f4e2f + (char)param_1 * 0xa62 + iStack_14 * 4);
            iVar7 = iStack_14;
            iVar4 = iStack_58;
            if (0 < (int)uStack_48) {
              do {
                FUN_006acc70((int)puStack_c,uStack_18,&uStack_1c);
                piVar6 = (int *)thunk_FUN_0042b620(param_1,uStack_1c,1);
                piStack_44 = piVar6;
                thunk_FUN_004162b0(piVar6,&sStack_38,&sStack_36,&sStack_34);
                uStack_32 = *(undefined2 *)((int)piVar6 + 0x32);
                iStack_30 = (int)*(short *)((int)DAT_007fb238 +
                                           ((sStack_34 + 1) * (int)DAT_007fb27e +
                                            (int)DAT_007fb278 * (int)sStack_36 + (int)sStack_38) * 2
                                           );
                if (iStack_30 == 0) {
                  iStack_30 = 1000000;
                  uStack_28 = 100;
                }
                else {
                  bVar3 = thunk_FUN_00430750(8);
                  uStack_50 = (uint)bVar3;
                  iStack_30 = ((((iStack_30 * 0xc9) / 3) / (int)uStack_50) * 0xc) / 10 + 800;
                  uStack_28 = (undefined4)(40000 / (longlong)iStack_30);
                }
                uVar10 = 0;
                uVar9 = puStack_8[3];
                uStack_2c = uStack_28;
                if (0 < (int)uVar9) {
                  do {
                    FUN_006acc70((int)puStack_8,uVar10,&uStack_90);
                    if ((sStack_8a == -1) && (sStack_82 == -1)) {
                      FUN_006ae140(puStack_8,uVar10,(undefined4 *)&sStack_40);
                      uStack_10 = 1;
                      break;
                    }
                    uVar10 = uVar10 + 1;
                  } while ((int)uVar10 < (int)uVar9);
                }
                if (uVar10 == uVar9) {
                  FUN_006ae1c0(puStack_8,(undefined4 *)&sStack_40);
                  uStack_10 = 1;
                }
                uStack_18 = uStack_18 + 1;
                iVar7 = iStack_14;
                iVar4 = iStack_58;
              } while ((int)uStack_18 < (int)uStack_48);
            }
          }
          FUN_006ae110((byte *)puStack_c);
        }
        iStack_14 = iVar7 + 1;
        if (iStack_4c <= iVar7 + 1) {
          DAT_00858df8 = (undefined4 *)uStack_d4;
          return uStack_10;
        }
      } while( true );
    }
  }
  DAT_00858df8 = (undefined4 *)uStack_d4;
  return uStack_10;
}

