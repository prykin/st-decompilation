
void __thiscall STAllPlayersC::_MakeMDPairs(STAllPlayersC *this,char param_1)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  int iVar7;
  undefined4 *puVar8;
  void *unaff_EDI;
  uint uVar9;
  undefined4 *puVar10;
  InternalExceptionFrame IStack_e8;
  undefined4 uStack_a4;
  undefined2 uStack_9e;
  undefined2 uStack_96;
  int aiStack_80 [5];
  uint uStack_6c;
  int iStack_68;
  uint uStack_64;
  int aiStack_60 [4];
  STAllPlayersC *pSStack_50;
  undefined1 auStack_4c [4];
  short sStack_48;
  short sStack_46;
  short sStack_44;
  undefined2 uStack_42;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  undefined2 uStack_3a;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_24;
  int iStack_20;
  int *piStack_1c;
  uint uStack_18;
  undefined4 *puStack_14;
  uint *puStack_10;
  uint uStack_c;
  int *piStack_8;
  
  uStack_24 = 4;
  aiStack_80[0] = 0x38;
  aiStack_80[1] = 0x39;
  aiStack_80[2] = 0x4f;
  aiStack_80[3] = 0x5e;
  IStack_e8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_e8;
  pSStack_50 = this;
  iVar3 = __setjmp3(IStack_e8.jumpBuffer,0,unaff_EDI,unaff_ESI);
  uVar6 = uStack_24;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_e8.previous;
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x23c5,0,iVar3,&DAT_007a4ccc
                               ,s_STAllPlayersC___MakeMDPairs_007a8098);
    if (iVar7 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x23c6);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (0 < (int)uStack_24) {
    uStack_c = uStack_24;
    puVar8 = (undefined4 *)((int)&DAT_007f4e2f + param_1 * 0xa62);
    do {
      if ((byte *)*puVar8 != (byte *)0x0) {
        FUN_006ae110((byte *)*puVar8);
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
      uStack_c = uStack_c - 1;
    } while (uStack_c != 0);
  }
  aiStack_60[3] = 0;
  aiStack_60[2] = 0;
  aiStack_60[1] = 0;
  aiStack_60[0] = 0;
  puStack_10 = (uint *)0x0;
  iStack_20 = param_1 * 0xa62;
  if ((&DAT_007f4e20)[iStack_20] != '\0') {
    if (0 < (int)uVar6) {
      puVar8 = (undefined4 *)((int)&DAT_007f4e2f + iStack_20);
      uVar9 = uVar6;
      do {
        puVar4 = FUN_006ae290((uint *)0x0,0,0x24,1);
        *puVar8 = puVar4;
        puVar8 = puVar8 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    uStack_18 = *(uint *)((int)&DAT_007f4e29 + iStack_20);
    if ((uStack_18 != 0) && (uStack_c = *(uint *)(uStack_18 + 0xc), uStack_c != 0)) {
      puStack_10 = FUN_006ae290((uint *)0x0,0,4,1);
      if (0 < (int)uVar6) {
        piVar5 = aiStack_60;
        uVar9 = uVar6;
        do {
          puVar4 = FUN_006ae290((uint *)0x0,0,4,1);
          *piVar5 = (int)puVar4;
          piVar5 = piVar5 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar9 = 0;
      if (0 < (int)uStack_c) {
        do {
          FUN_006acc70(uStack_18,uVar9,&piStack_8);
          if (piStack_8 != (int *)0x0) {
            iVar3 = (**(code **)(*piStack_8 + 0x2c))();
            puVar4 = puStack_10;
            if ((iVar3 == 0x3b) || (iVar3 == 0x60)) {
LAB_00441e92:
              FUN_006ae1c0(puVar4,&piStack_8);
            }
            else {
              iVar7 = 0;
              if (0 < (int)uVar6) {
                piVar5 = aiStack_80;
                do {
                  if (iVar3 == *piVar5) {
                    iVar3 = (**(code **)(*piStack_8 + 0x88))(auStack_4c);
                    if (0 < iVar3) {
                      puVar4 = (uint *)aiStack_60[iVar7];
                      goto LAB_00441e92;
                    }
                    break;
                  }
                  iVar7 = iVar7 + 1;
                  piVar5 = piVar5 + 1;
                } while (iVar7 < (int)uVar6);
              }
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < (int)uStack_c);
      }
    }
    if ((puStack_10 == (uint *)0x0) || (uStack_64 = puStack_10[3], uStack_64 == 0)) {
      uStack_3a = 0xffff;
      uStack_42 = 0xffff;
      if (0 < (int)uVar6) {
        puVar8 = (undefined4 *)((int)&DAT_007f4e2f + iStack_20);
        uVar9 = uVar6;
        do {
          FUN_006ae1c0((uint *)*puVar8,(undefined4 *)&sStack_48);
          puVar8 = puVar8 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else {
      uStack_c = 0;
      if (0 < (int)uStack_64) {
        do {
          FUN_006acc70((int)puStack_10,uStack_c,&piStack_8);
          thunk_FUN_004162b0(piStack_8,&sStack_40,&sStack_3e,&sStack_3c);
          uStack_3a = *(undefined2 *)((int)piStack_8 + 0x32);
          uVar6 = (int)DAT_007fb27c * (int)DAT_007fb27a * (int)DAT_007fb278;
          puVar8 = DAT_007fb280;
          puVar10 = DAT_007fb238;
          for (uVar9 = (uVar6 & 0x7fffffff) >> 1; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar10 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar6 * 2 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          FUN_006ab090((int)DAT_007fb238,(int)DAT_007fb278,(int)DAT_007fb27a,(int)DAT_007fb27c,
                       (int)sStack_40,(int)sStack_3e,(int)sStack_3c,-1,-1,-1);
          if (0 < (int)uStack_24) {
            piStack_1c = aiStack_60;
            uStack_18 = uStack_24;
            puStack_14 = (undefined4 *)((int)&DAT_007f4e2f + iStack_20);
            do {
              iVar3 = *piStack_1c;
              iStack_68 = iVar3;
              if ((iVar3 == 0) || (aiStack_80[4] = *(int *)(iVar3 + 0xc), aiStack_80[4] == 0)) {
                if (((uint *)*puStack_14)[3] == 0) {
                  uStack_96 = 0xffff;
                  uStack_9e = 0xffff;
                  FUN_006ae1c0((uint *)*puStack_14,&uStack_a4);
                }
              }
              else {
                uVar6 = 0;
                if (0 < aiStack_80[4]) {
                  do {
                    FUN_006acc70(iVar3,uVar6,&piStack_8);
                    thunk_FUN_004162b0(piStack_8,&sStack_48,&sStack_46,&sStack_44);
                    uStack_42 = *(undefined2 *)((int)piStack_8 + 0x32);
                    iStack_38 = (int)*(short *)((int)DAT_007fb238 +
                                               ((sStack_44 + 1) * (int)DAT_007fb27e +
                                                (int)sStack_46 * (int)DAT_007fb278 + (int)sStack_48)
                                               * 2);
                    if (iStack_38 == 0) {
                      iStack_38 = 1000000;
                      uStack_30 = 100;
                    }
                    else {
                      bVar2 = thunk_FUN_00430750(8);
                      uStack_6c = (uint)bVar2;
                      iStack_38 = ((((iStack_38 * 0xc9) / 3) / (int)uStack_6c) * 0xc) / 10 + 800;
                      uStack_30 = (undefined4)(40000 / (longlong)iStack_38);
                      iVar3 = iStack_68;
                    }
                    uStack_34 = uStack_30;
                    FUN_006ae1c0((uint *)*puStack_14,(undefined4 *)&sStack_48);
                    uVar6 = uVar6 + 1;
                  } while ((int)uVar6 < aiStack_80[4]);
                }
              }
              piStack_1c = piStack_1c + 1;
              puStack_14 = puStack_14 + 1;
              uStack_18 = uStack_18 - 1;
            } while (uStack_18 != 0);
          }
          uStack_c = uStack_c + 1;
          uVar6 = uStack_24;
        } while ((int)uStack_c < (int)uStack_64);
      }
    }
    FUN_006ae110((byte *)puStack_10);
    if (0 < (int)uVar6) {
      piVar5 = aiStack_60;
      do {
        FUN_006ae110((byte *)*piVar5);
        piVar5 = piVar5 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  g_currentExceptionFrame = IStack_e8.previous;
  return;
}

