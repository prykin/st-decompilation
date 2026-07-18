
undefined4 __fastcall thunk_FUN_004da9c0(undefined4 param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  byte bVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  int *piVar12;
  bool bVar13;
  int aiStack_2bc [155];
  undefined4 auStack_50 [4];
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_38;
  short sStack_36;
  int iStack_30;
  byte bStack_2c;
  undefined3 uStack_2b;
  uint uStack_28;
  int iStack_24;
  uint *puStack_20;
  int *piStack_1c;
  undefined4 uStack_18;
  uint uStack_14;
  int *piStack_10;
  byte *pbStack_c;
  int *piStack_8;
  
  uStack_28 = 0;
  uStack_14 = 0;
  piStack_1c = &DAT_007f582e;
  uStack_18 = param_1;
  do {
    uVar6 = uStack_14;
    piVar12 = piStack_1c;
    bVar9 = (byte)uStack_14;
    if (*piStack_1c == 1) {
      uVar3 = thunk_FUN_004406c0(bVar9);
      uVar3 = uVar3 & 0xff;
      if (uVar3 == 1) {
        iVar4 = 0x3d;
      }
      else if (uVar3 == 2) {
        iVar4 = 0x8d;
      }
      else if (uVar3 == 3) {
        iVar4 = 0x49;
      }
      else {
        iVar4 = 0;
      }
      iVar5 = thunk_FUN_004e60d0(uVar6,iVar4);
      iVar4 = DAT_00798f74;
      if ((uint)(*(int *)(&DAT_00798f6c + iVar5 * 4) + piVar12[3]) <= *(uint *)(DAT_00802a38 + 0xe4)
         ) {
        if ((uint)piVar12[1] % 3 == 1) {
          *piVar12 = 0;
          piVar12[2] = 1;
        }
        else {
          uVar3 = (uint)DAT_0080874d;
          *piVar12 = 2;
          piVar12[4] = iVar4;
          if (uVar6 == uVar3) {
            uVar3 = thunk_FUN_004406c0(bVar9);
            uVar3 = uVar3 & 0xff;
            if (uVar3 == 1) {
              thunk_FUN_00568dd0(&DAT_00807658,6,(char *)0x0,0x71,(int *)0x0,0);
            }
            else if (uVar3 == 2) {
              thunk_FUN_00568dd0(&DAT_00807658,6,(char *)0x0,0x72,(int *)0x0,0);
            }
            else if (uVar3 == 3) {
              thunk_FUN_00568dd0(&DAT_00807658,6,(char *)0x0,0x73,(int *)0x0,0);
            }
          }
        }
      }
    }
    else if (*piStack_1c == 3) {
      pbStack_c = &DAT_008087e9;
      piStack_10 = (int *)0x0;
      piStack_8 = (int *)0x0;
      do {
        uVar3 = thunk_FUN_004406c0(bVar9);
        uVar3 = uVar3 & 0xff;
        if (uVar3 == 1) {
          iVar4 = 0x3f;
        }
        else if (uVar3 == 2) {
          iVar4 = 0x8e;
        }
        else if (uVar3 == 3) {
          iVar4 = 0x47;
        }
        else {
          iVar4 = 0;
        }
        if (((piStack_8 != (int *)uVar6) && (bVar1 = *pbStack_c, bVar1 != 0xff)) &&
           (pbStack_c[-1] != 0)) {
          _bStack_2c = CONCAT31(uStack_2b,bVar1);
          if (DAT_00808a8f == '\0') {
            if (bVar1 == bVar9) {
LAB_004dabff:
              iVar5 = 0;
            }
            else {
              uVar3 = (uint)bVar1;
              uVar8 = uVar6 & 0xff;
              cVar2 = *(char *)((int)&DAT_00808a4f + uVar3 * 8 + uVar8);
              if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3) == '\0')) {
                iVar5 = -2;
              }
              else if ((cVar2 == '\x01') &&
                      (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3) == '\0')) {
                iVar5 = -1;
              }
              else if ((cVar2 == '\0') &&
                      (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3) == '\x01')) {
                iVar5 = 1;
              }
              else {
                if ((cVar2 != '\x01') ||
                   (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar3) != '\x01')) goto LAB_004dabff;
                iVar5 = 2;
              }
            }
            bVar13 = iVar5 < 0;
          }
          else {
            bVar13 = (&DAT_008087ea)[(uVar6 & 0xff) * 0x51] != (&DAT_008087ea)[(uint)bVar1 * 0x51];
          }
          if (bVar13) {
            iVar4 = thunk_FUN_004e60d0((int)piStack_8,iVar4);
            uVar3 = (&DAT_00798f74)[iVar4];
            if ((*(uint *)(DAT_00802a38 + 0xe4) < piVar12[3] + uVar3) &&
               (piStack_10 = (int *)0x1, uStack_28 < uVar3)) {
              uStack_28 = uVar3;
            }
          }
        }
        pbStack_c = pbStack_c + 0x51;
        piStack_8 = (int *)((int)piStack_8 + 1);
      } while ((int)pbStack_c < 0x808a71);
      if (piStack_10 == (int *)0x0) {
        *piVar12 = 0;
      }
      else {
        piVar12[4] = (piVar12[3] - *(int *)(DAT_00802a38 + 0xe4)) + uStack_28;
      }
    }
    piStack_8 = piVar12 + 0xd;
    pbStack_c = (byte *)0x0;
    do {
      if (((pbStack_c != (byte *)uVar6) && (*(int *)(DAT_00802a38 + 0xe4) == piStack_8[-8])) &&
         (*piStack_8 == 0)) {
        if (uVar6 == DAT_0080874d) {
          *piStack_8 = 1;
          uVar6 = thunk_FUN_004406c0((char)uVar6);
          uVar6 = uVar6 & 0xff;
          if (uVar6 == 1) {
            iVar4 = 0x77;
          }
          else if (uVar6 == 2) {
            iVar4 = 0x78;
          }
          else {
            if (uVar6 != 3) goto LAB_004dad15;
            iVar4 = 0x79;
          }
          thunk_FUN_00568dd0(&DAT_00807658,6,(char *)0x0,iVar4,(int *)0x0,0);
        }
LAB_004dad15:
        iVar4 = 0;
        iStack_24 = 0;
        piVar12 = aiStack_2bc;
        for (iVar5 = 0x9b; piStack_10 = aiStack_2bc, iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar12 = 0;
          piVar12 = piVar12 + 1;
        }
        do {
          uVar6 = thunk_FUN_004406c0((char)uStack_14);
          if ((*(char *)(*(int *)(&DAT_007bfc00 + (uVar6 & 0xff) * 4) + iVar4) == '\0') &&
             ((&DAT_007e53bc)[iVar4] != '\0')) {
            uVar6 = 0;
            puStack_20 = (uint *)(piStack_1c + 5);
            pbVar10 = &DAT_008087e9;
            do {
              if (((pbStack_c != (byte *)uVar6) && (uStack_14 != uVar6)) &&
                 (((int)pbVar10 < 0x808a71 &&
                  (((DAT_00802a38 == 0 || (*pbVar10 < 8)) &&
                   (*(uint *)(DAT_00802a38 + 0xe4) <= *puStack_20)))))) {
                iStack_30 = thunk_FUN_004e60d0(uStack_14,iVar4);
                iStack_30 = iStack_30 + 1;
                iVar5 = thunk_FUN_004e60d0(uVar6,iVar4);
                iVar4 = iStack_24;
                if (iStack_30 <= iVar5) {
                  *piStack_10 = 1;
                  break;
                }
              }
              pbVar10 = pbVar10 + 0x51;
              uVar6 = uVar6 + 1;
              puStack_20 = puStack_20 + 1;
            } while ((int)pbVar10 < 0x808a71);
          }
          uVar3 = uStack_14;
          iVar4 = iVar4 + 1;
          piStack_10 = piStack_10 + 1;
          iStack_24 = iVar4;
        } while (iVar4 < 0x9b);
        uVar6 = uStack_14;
        if (DAT_008117bc != (undefined4 *)0x0) {
          puVar11 = auStack_50;
          for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar11 = 0;
            puVar11 = puVar11 + 1;
          }
          uStack_40 = 0x5dea;
          uStack_3c = (undefined2)uVar3;
          iVar4 = 0;
          piVar12 = aiStack_2bc;
          do {
            uVar6 = thunk_FUN_004406c0((char)pbStack_c);
            if ((*(char *)(*(int *)(&DAT_007bfc00 + (uVar6 & 0xff) * 4) + iVar4) == '\0') &&
               (*piVar12 == 0)) {
              uStack_38 = (undefined2)iVar4;
              uVar7 = thunk_FUN_004e60d0(uVar3,iVar4);
              sStack_36 = (short)uVar7 + 1;
              (**(code **)*DAT_008117bc)(auStack_50);
            }
            iVar4 = iVar4 + 1;
            piVar12 = piVar12 + 1;
            uVar6 = uStack_14;
          } while (iVar4 < 0x9b);
        }
      }
      pbStack_c = (byte *)((int)pbStack_c + 1);
      piStack_8 = piStack_8 + 1;
    } while ((int)pbStack_c < 8);
    uStack_14 = uVar6 + 1;
    piStack_1c = (int *)((int)piStack_1c + 0xa62);
    if (0x7fab3d < (int)piStack_1c) {
      return 0;
    }
  } while( true );
}

