
undefined4 FUN_0053afb0(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  LPSTR pCVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar12;
  int iVar13;
  char *pcVar14;
  int *piVar15;
  code *pcVar16;
  int iVar17;
  UINT UVar18;
  undefined4 *local_64;
  undefined4 local_60 [16];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  void *local_14;
  uint local_10;
  ushort *local_c;
  uint local_8;
  
  local_64 = DAT_00858df8;
  DAT_00858df8 = &local_64;
  iVar4 = __setjmp3(local_60,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = local_64;
    iVar10 = FUN_006ad4d0(s_E____titans_Andrey_playpan_cpp_007c7574,500,0,iVar4,&DAT_007a4ccc);
    if (iVar10 == 0) {
      FUN_006a5e40(iVar4,0,0x7c7574,500);
      return 0xffff;
    }
    pcVar16 = (code *)swi(3);
    uVar7 = (*pcVar16)();
    return uVar7;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)((int)local_14 + 0x4c));
    *(undefined4 *)((int)local_14 + 0x3c) = *(undefined4 *)((int)local_14 + 0x4c);
    *(int *)((int)local_14 + 0x44) = *(int *)((int)local_14 + 0x50) - *(int *)((int)local_14 + 0x48)
    ;
    *(int *)((int)local_14 + 0x174) =
         *(int *)((int)local_14 + 0x48) + *(int *)((int)local_14 + 0x50);
  }
  thunk_FUN_005384a0(local_14,param_1);
  uVar5 = *(uint *)(param_1 + 0x10);
  if (uVar5 < 0xb20a) {
    if (uVar5 == 0xb209) {
      iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
      local_10 = *(int *)(*(int *)(param_1 + 0x14) + 0xc) - *(int *)((int)local_14 + 0x3c);
      if (*(int *)((int)local_14 + 0x5c) == 0) {
        iVar10 = *(int *)((int)local_14 + 0x48);
      }
      else {
        iVar10 = -*(int *)((int)local_14 + 0x44);
      }
      iVar17 = 1;
      piVar15 = (int *)0x0;
      uVar7 = thunk_FUN_0052a4d0(param_1);
      iVar13 = 1;
      pCVar6 = thunk_FUN_00571240(s_BUT_SWITCH_007c71d0,0);
      pCVar6 = FUN_006f2c00(pCVar6,iVar13,uVar7);
      local_c = FUN_006f1ce0(1,pCVar6,piVar15,iVar17);
      thunk_FUN_00540760(*(undefined4 **)((int)local_14 + 0x68),local_10,iVar4 + iVar10,'\x01',
                         (byte *)local_c);
      FUN_006f20e0((uint *)&local_c);
      DAT_00858df8 = local_64;
      return 0;
    }
    if (0x6200 < uVar5) {
      if (uVar5 == 0x6201) {
        pcVar14 = s_BUT_SLUP_007c3e40;
      }
      else {
        if (uVar5 != 0x6202) {
          if (uVar5 != 0xb208) {
            DAT_00858df8 = local_64;
            return 0;
          }
          iVar4 = **(int **)(param_1 + 0x14);
          if (iVar4 == 1) {
            bVar11 = 0;
            local_8 = (uint)local_8._1_3_ << 8;
            if (DAT_00808aaf != 0) {
              do {
                uVar5 = local_8 & 0xff;
                bVar11 = bVar11 + 1;
                local_8 = CONCAT31(local_8._1_3_,bVar11);
                (&DAT_00808af7)[uVar5 * 0x9c] = 1;
              } while (bVar11 < DAT_00808aaf);
            }
            *(undefined4 *)((int)local_14 + 0x28) = 5;
            piVar15 = (int *)((int)local_14 + 0x1a1);
            iVar4 = 8;
            do {
              if (*piVar15 != 0) {
                FUN_006e6080(local_14,2,*piVar15,(undefined4 *)((int)local_14 + 0x18));
              }
              piVar15 = piVar15 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            DAT_00858df8 = local_64;
            return 0;
          }
          if (iVar4 == 2) {
            if (DAT_0080874d < 8) {
              bVar11 = 0;
              local_8 = (uint)local_8._1_3_ << 8;
              if (DAT_00808aaf != 0) {
                do {
                  iVar4 = (local_8 & 0xff) * 0x9c;
                  bVar2 = (&DAT_00808af4)[iVar4];
                  local_c = (ushort *)CONCAT31(local_c._1_3_,bVar2);
                  if (DAT_00808a8f == '\0') {
                    if (bVar2 == DAT_0080874d) {
LAB_0053b42f:
                      iVar10 = 0;
                    }
                    else {
                      uVar5 = (uint)bVar2;
                      uVar9 = (uint)DAT_0080874d;
                      cVar3 = *(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9);
                      if ((cVar3 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5) == '\0')) {
                        iVar10 = -2;
                      }
                      else if ((cVar3 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5) == '\0')) {
                        iVar10 = -1;
                      }
                      else if ((cVar3 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5) == '\x01')) {
                        iVar10 = 1;
                      }
                      else {
                        if ((cVar3 != '\x01') ||
                           (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5) != '\x01'))
                        goto LAB_0053b42f;
                        iVar10 = 2;
                      }
                    }
                    bVar12 = iVar10 < 0;
                  }
                  else {
                    bVar12 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar2 * 0x51];
                  }
                  (&DAT_00808af7)[iVar4] = bVar12;
                  bVar11 = bVar11 + 1;
                  local_8 = CONCAT31(local_8._1_3_,bVar11);
                } while (bVar11 < DAT_00808aaf);
              }
            }
            *(undefined4 *)((int)local_14 + 0x28) = 5;
            piVar15 = (int *)((int)local_14 + 0x1a1);
            iVar4 = 8;
            do {
              if (*piVar15 != 0) {
                FUN_006e6080(local_14,2,*piVar15,(undefined4 *)((int)local_14 + 0x18));
              }
              piVar15 = piVar15 + 1;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            DAT_00858df8 = local_64;
            return 0;
          }
          if (iVar4 != 3) {
            DAT_00858df8 = local_64;
            return 0;
          }
          if (DAT_0080874d < 8) {
            bVar11 = 0;
            local_8 = local_8 & 0xffffff00;
            if (DAT_00808aaf != 0) {
              do {
                iVar4 = (local_8 & 0xff) * 0x9c;
                bVar2 = (&DAT_00808af4)[iVar4];
                local_c = (ushort *)CONCAT31(local_c._1_3_,bVar2);
                if (DAT_00808a8f == '\0') {
                  if (bVar2 == DAT_0080874d) {
LAB_0053b2ea:
                    iVar10 = 0;
                  }
                  else {
                    uVar5 = (uint)bVar2;
                    uVar9 = (uint)DAT_0080874d;
                    cVar3 = *(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9);
                    if ((cVar3 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5) == '\0')) {
                      iVar10 = -2;
                    }
                    else if ((cVar3 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5) == '\0')) {
                      iVar10 = -1;
                    }
                    else if ((cVar3 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5) == '\x01')) {
                      iVar10 = 1;
                    }
                    else {
                      if ((cVar3 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5) != '\x01'))
                      goto LAB_0053b2ea;
                      iVar10 = 2;
                    }
                  }
                  bVar12 = iVar10 < 0;
                }
                else {
                  bVar12 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar2 * 0x51];
                }
                bVar11 = bVar11 + 1;
                (&DAT_00808af7)[iVar4] = '\x01' - bVar12;
                local_8 = CONCAT31(local_8._1_3_,bVar11);
              } while (bVar11 < DAT_00808aaf);
            }
          }
          *(undefined4 *)((int)local_14 + 0x28) = 5;
          piVar15 = (int *)((int)local_14 + 0x1a1);
          iVar4 = 8;
          do {
            if (*piVar15 != 0) {
              FUN_006e6080(local_14,2,*piVar15,(undefined4 *)((int)local_14 + 0x18));
            }
            piVar15 = piVar15 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          DAT_00858df8 = local_64;
          return 0;
        }
        pcVar14 = s_BUT_SLDN_007c3e34;
      }
      pcVar16 = thunk_FUN_00529fe0;
      pCVar6 = thunk_FUN_00571240(pcVar14,0);
      thunk_FUN_0053d7a0(local_14,param_1,6,pCVar6,pcVar16);
      DAT_00858df8 = local_64;
      return 0;
    }
    if (uVar5 == 0x6200) {
      *(undefined4 *)((int)local_14 + 0x1c9) = *(undefined4 *)(param_1 + 0x14);
      thunk_FUN_0053ac00();
      *(undefined4 *)((int)local_14 + 0x28) = 5;
      piVar15 = (int *)((int)local_14 + 0x1a1);
      iVar4 = 8;
      do {
        if (*piVar15 != 0) {
          FUN_006e6080(local_14,2,*piVar15,(undefined4 *)((int)local_14 + 0x18));
        }
        piVar15 = piVar15 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(undefined4 *)((int)local_14 + 0x28) = 5;
      piVar15 = (int *)((int)local_14 + 0x181);
      iVar4 = 8;
      do {
        if (*piVar15 != 0) {
          FUN_006e6080(local_14,2,*piVar15,(undefined4 *)((int)local_14 + 0x18));
        }
        piVar15 = piVar15 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      DAT_00858df8 = local_64;
      return 0;
    }
    if (uVar5 == 0) {
      if (*(short *)((int)local_14 + 0x172) == 3) {
        iVar4 = *(int *)((int)local_14 + 0x50);
        if (*(int *)((int)local_14 + 0x44) < iVar4) {
          *(int *)((int)local_14 + 0x44) = *(int *)((int)local_14 + 0x44) + 0x1e;
        }
        if (iVar4 <= *(int *)((int)local_14 + 0x44)) {
          *(int *)((int)local_14 + 0x44) = iVar4;
          *(undefined2 *)((int)local_14 + 0x172) = 1;
          thunk_FUN_0053aa50(local_14,1);
        }
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_14 + 0x60),0xffffffff,
                     *(uint *)((int)local_14 + 0x3c),*(uint *)((int)local_14 + 0x44));
        DAT_00858df8 = local_64;
        return 0;
      }
      if (*(short *)((int)local_14 + 0x172) == 4) {
        iVar4 = *(int *)((int)local_14 + 0x50) - *(int *)((int)local_14 + 0x48);
        if (iVar4 < *(int *)((int)local_14 + 0x44)) {
          *(int *)((int)local_14 + 0x44) = *(int *)((int)local_14 + 0x44) + -0x1e;
        }
        if (*(int *)((int)local_14 + 0x44) <= iVar4) {
          *(int *)((int)local_14 + 0x44) = iVar4;
          *(undefined2 *)((int)local_14 + 0x172) = 2;
        }
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_14 + 0x60),0xffffffff,
                     *(uint *)((int)local_14 + 0x3c),*(uint *)((int)local_14 + 0x44));
        DAT_00858df8 = local_64;
        return 0;
      }
    }
    else {
      if (uVar5 == 2) {
        thunk_FUN_00539b90();
        DAT_00858df8 = local_64;
        return 0;
      }
      if (uVar5 == 3) {
        thunk_FUN_0053a380();
        DAT_00858df8 = local_64;
        return 0;
      }
    }
  }
  else if (uVar5 < 0xb537) {
    if (0xb52e < uVar5) {
      iVar4 = (*(int **)(param_1 + 0x18))[1];
      local_10 = **(int **)(param_1 + 0x18) - *(int *)((int)local_14 + 0x3c);
      if (*(int *)((int)local_14 + 0x5c) == 0) {
        iVar10 = *(int *)((int)local_14 + 0x48);
      }
      else {
        iVar10 = -*(int *)((int)local_14 + 0x44);
      }
      if (*(short *)(param_1 + 0x14) == 0) {
        uVar5 = 1;
      }
      else {
        bVar11 = *(char *)(param_1 + 0x10) - 0x2f;
        local_c = (ushort *)CONCAT31(local_c._1_3_,bVar11);
        uVar5 = (uint)((&DAT_00808af7)[(*(int *)((int)local_14 + 0x1c9) + (uint)bVar11) * 0x9c] ==
                      '\0');
      }
      pbVar8 = (byte *)FUN_0070b3a0(*(int *)((int)local_14 + 0x1d9),uVar5);
      thunk_FUN_00540760(*(undefined4 **)((int)local_14 + 0x68),local_10,iVar4 + iVar10,'\x01',
                         pbVar8);
      FUN_006b3640(DAT_008075a8,*(uint *)((int)local_14 + 0x60),0xffffffff,
                   *(uint *)((int)local_14 + 0x3c),*(uint *)((int)local_14 + 0x44));
      DAT_00858df8 = local_64;
      return 0;
    }
    switch(uVar5) {
    case 0xb4ff:
    case 0xb500:
    case 0xb501:
    case 0xb502:
    case 0xb503:
    case 0xb504:
    case 0xb505:
    case 0xb506:
      uVar5 = (uint)DAT_0080874d;
      if ((*(char *)((int)&DAT_008087c4 + uVar5 * 0x51 + 3) == '\0') && (DAT_0080874f == '\0')) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if ((bVar12) && (DAT_00808783 != '\x01')) {
        iVar4 = (*(int *)((int)local_14 + 0x1c9) + (uint)(byte)(*(char *)(param_1 + 0x10) + 1)) *
                0x9c;
        bVar11 = (&DAT_00808af4)[iVar4];
        local_10 = CONCAT31(local_10._1_3_,bVar11);
        if ((DAT_00808a8f == '\0') &&
           (((((&DAT_00808af5)[iVar4] != '\0' && (DAT_0080874d != 0xff)) && (bVar11 != 0xff)) &&
            (DAT_0080874d != bVar11)))) {
          uVar9 = (uint)bVar11;
          local_1c = 0;
          local_18 = 0;
          if (*(char *)((int)&DAT_008087c4 + uVar9 * 0x51 + 3) == '\x01') {
            cVar3 = *(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9);
            local_20 = 6;
            if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5) == '\0')) {
              uVar7 = 0xfffffffe;
            }
            else if ((cVar3 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5) == '\0')) {
              uVar7 = 0xffffffff;
            }
            else if ((cVar3 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5) == '\x01')) {
              uVar7 = 1;
            }
            else if ((cVar3 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5) == '\x01')) {
              uVar7 = 2;
            }
            else {
              uVar7 = 0;
            }
            switch(uVar7) {
            case 1:
              local_1c = uVar9 << 0x10 | uVar5;
              local_18 = 0;
              break;
            case 2:
              local_1c = uVar5 << 0x10 | uVar9;
              local_18 = 0;
              break;
            case 0xfffffffe:
              local_1c = uVar5 << 0x10 | uVar9;
              local_18 = 1;
              break;
            case 0xffffffff:
              local_1c = uVar9 << 0x10 | uVar5;
              local_18 = 1;
            }
          }
          else {
            local_1c = uVar5 << 0x10 | uVar9;
            local_20 = 7;
          }
          if (DAT_00802a38 != 0) {
            thunk_FUN_0054edf0((undefined4 *)0x5,&local_20,1,0xffffffff);
            DAT_00858df8 = local_64;
            return 0;
          }
        }
      }
      break;
    case 0xb50f:
    case 0xb510:
    case 0xb511:
    case 0xb512:
    case 0xb513:
    case 0xb514:
    case 0xb515:
    case 0xb516:
      piVar15 = *(int **)(param_1 + 0x18);
      local_10 = CONCAT31(local_10._1_3_,*(char *)(param_1 + 0x10) + -0xf);
      local_c = (ushort *)(*piVar15 - *(int *)((int)local_14 + 0x3c));
      if (*(int *)((int)local_14 + 0x5c) == 0) {
        iVar4 = *(int *)((int)local_14 + 0x48);
      }
      else {
        iVar4 = -*(int *)((int)local_14 + 0x44);
      }
      local_8 = piVar15[1] + iVar4;
      if (DAT_0080874e == '\x03') {
        cVar3 = 's';
      }
      else {
        cVar3 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      FUN_006b4170(*(int *)((int)local_14 + 0x68),0,(int)local_c,local_8,piVar15[2],piVar15[3],cVar3
                  );
      if (*(short *)(param_1 + 0x14) != 0) {
        iVar4 = (*(int *)((int)local_14 + 0x1c9) + (local_10 & 0xff)) * 0x9c;
        bVar11 = (&DAT_00808af4)[iVar4];
        local_10 = CONCAT31(local_10._1_3_,bVar11);
        if (((DAT_0080874d != 0xff) && (bVar11 != 0xff)) && (DAT_0080874d != bVar11)) {
          iVar10 = -1;
          uVar9 = (uint)DAT_0080874d;
          uVar5 = (uint)bVar11;
          cVar3 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar5);
          if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9) == '\0')) {
            uVar7 = 0xfffffffe;
          }
          else if ((cVar3 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9) == '\0'))
          {
            uVar7 = 0xffffffff;
          }
          else if ((cVar3 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9) == '\x01'))
          {
            uVar7 = 1;
          }
          else if ((cVar3 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar5 * 8 + uVar9) == '\x01')) {
            uVar7 = 2;
          }
          else {
            uVar7 = 0;
          }
          switch(uVar7) {
          case 1:
            iVar10 = 0;
            break;
          case 2:
            iVar10 = 2;
            break;
          case 0xfffffffe:
            iVar10 = 3;
            break;
          case 0xffffffff:
            iVar10 = 1;
          }
          if ((-1 < iVar10) && ((&DAT_00808af5)[iVar4] != '\0')) {
            pbVar8 = (byte *)FUN_0070b3a0(*(int *)((int)local_14 + 0x1d5),iVar10);
            thunk_FUN_00540760(*(undefined4 **)((int)local_14 + 0x68),(int)local_c,local_8,'\x06',
                               pbVar8);
          }
        }
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_14 + 0x60),0xffffffff,
                     *(uint *)((int)local_14 + 0x3c),*(uint *)((int)local_14 + 0x44));
        DAT_00858df8 = local_64;
        return 0;
      }
      if ((DAT_00808a8f != '\0') &&
         (iVar4 = (*(int *)((int)local_14 + 0x1c9) + (local_10 & 0xff)) * 0x9c,
         (&DAT_00808af5)[iVar4] != '\0')) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c3f90,
                  (byte)(&DAT_008087ea)[(uint)(byte)(&DAT_00808af4)[iVar4] * 0x51] + 0x41);
        FUN_00710a90(*(int *)((int)local_14 + 0x68),0,local_c,local_8,piVar15[2],piVar15[3]);
        FUN_007119c0(&DAT_0080f33a,-1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        FUN_006b3640(DAT_008075a8,*(uint *)((int)local_14 + 0x60),0xffffffff,
                     *(uint *)((int)local_14 + 0x3c),*(uint *)((int)local_14 + 0x44));
        DAT_00858df8 = local_64;
        return 0;
      }
      break;
    case 0xb51f:
    case 0xb520:
    case 0xb521:
    case 0xb522:
    case 0xb523:
    case 0xb524:
    case 0xb525:
    case 0xb526:
      puVar1 = (undefined4 *)((int)local_14 + 0x18);
      bVar11 = *(char *)(param_1 + 0x10) - 0x1f;
      local_10 = CONCAT31(local_10._1_3_,bVar11);
      iVar4 = *(int *)((int)local_14 + 0x1c9) + (uint)bVar11;
      (&DAT_00808af7)[iVar4 * 0x9c] = (&DAT_00808af7)[iVar4 * 0x9c] == '\0';
      *(undefined4 *)((int)local_14 + 0x28) = 5;
      FUN_006e6080(local_14,2,*(undefined4 *)((int)local_14 + (uint)bVar11 * 4 + 0x1a1),puVar1);
      if (*(int *)((int)local_14 + 0x1c1) != 0) {
        *(undefined4 *)((int)local_14 + 0x28) = 0x25;
        FUN_006e6080(local_14,2,*(int *)((int)local_14 + 0x1c1),puVar1);
        if (*(int *)((int)local_14 + 0x2c) != 4) {
          *(undefined4 *)((int)local_14 + 0x28) = 0x22;
          *(undefined2 *)((int)local_14 + 0x2c) = 4;
          FUN_006e6080(local_14,2,*(undefined4 *)((int)local_14 + 0x1c1),puVar1);
          DAT_00858df8 = local_64;
          return 0;
        }
      }
    }
  }
  else if (uVar5 == 0xbfff) {
    thunk_FUN_0053a820(local_14,'\0');
    thunk_FUN_005252c0(0xae);
  }
  else if (uVar5 == 0xc000) {
    UVar18 = 0x274e;
    pCVar6 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    thunk_FUN_0053daf0(local_14,param_1,pCVar6,UVar18);
    DAT_00858df8 = local_64;
    return 0;
  }
  DAT_00858df8 = local_64;
  return 0;
}

