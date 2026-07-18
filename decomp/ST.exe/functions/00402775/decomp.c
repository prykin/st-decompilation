
void __fastcall thunk_FUN_004f96a0(int param_1)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  uint *puVar4;
  byte *pbVar5;
  char *pcVar6;
  short *psVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined1 *puVar12;
  byte bVar13;
  byte bVar14;
  size_t _Count;
  undefined4 uStack_54;
  undefined4 auStack_50 [16];
  int iStack_10;
  char *pcStack_c;
  uint *puStack_8;
  
  if ((DAT_0080c4f7 == 1) && (*(int *)(param_1 + 0x24b) != 0)) {
    uStack_54 = DAT_00858df8;
    DAT_00858df8 = &uStack_54;
    iStack_10 = param_1;
    iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
    iVar9 = iStack_10;
    if (iVar3 == 0) {
      iVar3 = *(int *)(iStack_10 + 0x24b);
      uVar10 = *(uint *)(iVar3 + 0xc);
      if (*(uint *)(iStack_10 + 0x24f) < uVar10) {
        do {
          if (*(uint *)(iVar9 + 0x24f) < uVar10) {
            puVar12 = (undefined1 *)
                      (*(int *)(iVar3 + 8) * *(uint *)(iVar9 + 0x24f) + *(int *)(iVar3 + 0x1c));
          }
          else {
            puVar12 = (undefined1 *)0x0;
          }
          if ((uint)(*(int *)(iVar9 + 0x253) - *(int *)(iVar9 + 599)) < *(uint *)(puVar12 + 1)) {
            DAT_00858df8 = (undefined4 *)uStack_54;
            return;
          }
          switch(*puVar12) {
          case 1:
            thunk_FUN_00568dd0(&DAT_00807658,0xc,puVar12 + 9,*(int *)(puVar12 + 5),(int *)0x0,0);
            break;
          case 2:
            if (*(int **)(iVar9 + 0x1d8) != (int *)0x0) {
              FUN_00714060(*(int **)(iVar9 + 0x1d8));
              FUN_0072e2b0(*(undefined4 **)(iVar9 + 0x1d8));
              *(undefined4 *)(iVar9 + 0x1d8) = 0;
            }
            FUN_006b4170(*(int *)(iVar9 + 0x1b4),0,100,5,0x226,0x55,0);
            puStack_8 = FUN_006b54f0((uint *)0x0,10,10);
            if (*(int *)(puVar12 + 10) < 1) {
              pcStack_c = *(char **)(DAT_0080c4c7 + 8);
            }
            else {
              pcStack_c = (char *)(*(int *)(puVar12 + 6) + *(int *)(puVar12 + 10));
            }
            iVar3 = *(int *)(puVar12 + 6);
            if (iVar3 < (int)pcStack_c) {
              do {
                if (iVar3 < *(int *)(DAT_0080c4c7 + 8)) {
                  pcVar6 = *(char **)(*(int *)(DAT_0080c4c7 + 0x14) + iVar3 * 4);
                }
                else {
                  pcVar6 = (char *)0x0;
                }
                thunk_FUN_005411a0((int)puStack_8,pcVar6,&DAT_007c2260);
                iVar3 = iVar3 + 1;
              } while (iVar3 < (int)pcStack_c);
            }
            puVar4 = FUN_007126e0((int)puStack_8,(uint *)s________________007c21d8,
                                  (uint *)&DAT_007c21ec,0x226,0,0xffffffff,(char *)0x0,1);
            if (puStack_8 != (uint *)0x0) {
              FUN_006b5570((byte *)puStack_8);
            }
            if (puVar4 == (uint *)0x0) {
              puVar4 = FUN_006b54f0((uint *)0x0,1,1);
            }
            puStack_8 = puVar4;
            if (puVar12[5] == '\0') {
              pbVar5 = (byte *)FUN_00710ba0(*(int *)(iVar9 + 0x1b4),0,100,5,0x226,0x55,0);
              if (pbVar5 != (byte *)0x0) {
                FUN_00711f70((int)puStack_8,0,-1,0,0,0);
                thunk_FUN_00540760(*(undefined4 **)(iVar9 + 0x1b4),100,5,'\x01',pbVar5);
                FUN_00710f00();
                if (puVar12[0xe] != '\0') {
                  thunk_FUN_005252c0(0x1e);
                }
              }
              FUN_006b5570((byte *)puStack_8);
            }
            else {
              FUN_00710a90(*(int *)(iVar9 + 0x1b4),0,100,5,0x226,0x55);
              iVar3 = FUN_0072e530(0xb4);
              if (iVar3 == 0) {
                iVar3 = 0;
              }
              else {
                *(undefined4 *)(iVar3 + 0x58) = 0;
                *(undefined4 *)(iVar3 + 0x88) = 0;
              }
              *(int *)(iVar9 + 0x1d8) = iVar3;
              iVar3 = FUN_00713f30((int)puStack_8,*(void **)(iVar9 + 0x1d4),0,0,0,0x226,0x55,0,0,0,1
                                   ,2,0xff);
              *(int *)(iVar9 + 0x1dc) = iVar3;
              *(undefined1 *)(iVar9 + 0x1e0) = puVar12[0xe];
              FUN_006b5570((byte *)puStack_8);
            }
            break;
          case 3:
            piVar1 = (int *)(iVar9 + 0x25b);
            if (*(int *)(iVar9 + 0x25b) != 0) {
              FUN_0070b600(piVar1);
            }
            if (DAT_0080731a == 0) {
              pcStack_c = puVar12 + 10;
              if (puVar12[10] == '\0') {
                iVar3 = 1;
                bVar13 = 0;
                bVar14 = 6;
                pcVar6 = (char *)thunk_FUN_005260b0(*(int *)(puVar12 + 5),puVar12[9],0);
                uVar8 = DAT_00806790;
LAB_004f9a8a:
                psVar7 = FUN_0070b430(uVar8,pcVar6,bVar14,bVar13,iVar3);
                *piVar1 = (int)psVar7;
              }
              else {
                psVar7 = FUN_0070b430(DAT_00806758,pcStack_c,6,0,0);
                *piVar1 = (int)psVar7;
                if (psVar7 == (short *)0x0) {
                  bVar14 = 6;
                  bVar13 = 0;
                  iVar3 = 0;
                  uVar8 = DAT_00806798;
                  pcVar6 = pcStack_c;
                  goto LAB_004f9a8a;
                }
              }
              if (*piVar1 == 0) {
                iVar3 = 1;
                bVar14 = 0;
                bVar13 = 6;
                pcVar6 = (char *)thunk_FUN_005260b0(0,0,0);
                psVar7 = FUN_0070b430(DAT_00806790,pcVar6,bVar13,bVar14,iVar3);
                *piVar1 = (int)psVar7;
              }
              *(undefined1 *)(iVar9 + 0x25f) = 0;
              thunk_FUN_004f1950(iVar9);
            }
            else {
              iVar3 = 1;
              bVar14 = 0;
              bVar13 = 6;
              pcVar6 = (char *)thunk_FUN_005260b0(0,0,1);
              psVar7 = FUN_0070b430(DAT_00806790,pcVar6,bVar13,bVar14,iVar3);
              *piVar1 = (int)psVar7;
              *(undefined1 *)(iVar9 + 0x260) = 5;
              *(undefined1 *)(iVar9 + 0x25f) = 0;
              _Count = 0x1f;
              if (puVar12[10] == '\0') {
                pcVar6 = (char *)thunk_FUN_005260b0(*(int *)(puVar12 + 5),puVar12[9],0);
                _strncpy((char *)(iVar9 + 0x265),pcVar6,_Count);
                *(undefined1 *)(iVar9 + 0x285) = 1;
              }
              else {
                _strncpy((char *)(iVar9 + 0x265),puVar12 + 10,0x1f);
                *(undefined1 *)(iVar9 + 0x285) = 0;
              }
              *(undefined1 *)(iVar9 + 0x284) = 0;
              thunk_FUN_005252c0(0xb3);
            }
            break;
          case 4:
            *(undefined4 *)(iVar9 + 0x28) = 0x5dc6;
            *(undefined **)(iVar9 + 0x2c) = &DAT_0080c4d7;
            if (DAT_008117bc != (undefined4 *)0x0) {
              (**(code **)*DAT_008117bc)(iVar9 + 0x18);
            }
            *(undefined1 *)(iVar9 + 0x260) = 4;
            DAT_0080c4f7 = 4;
          }
          iVar3 = *(int *)(iVar9 + 0x24b);
          uVar11 = *(int *)(iVar9 + 0x24f) + 1;
          *(uint *)(iVar9 + 0x24f) = uVar11;
          uVar10 = *(uint *)(iVar3 + 0xc);
        } while (uVar11 < uVar10);
      }
      DAT_00858df8 = (undefined4 *)uStack_54;
      return;
    }
    DAT_00858df8 = (undefined4 *)uStack_54;
    iVar9 = FUN_006ad4d0(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x3b0,0,iVar3,&DAT_007a4ccc);
    if (iVar9 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FUN_006a5e40(iVar3,0,0x7c1bd8,0x3b0);
  }
  return;
}

