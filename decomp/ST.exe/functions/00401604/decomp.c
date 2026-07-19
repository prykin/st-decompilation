
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * thunk_FUN_0064a970(char *param_1,int param_2,int *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  float fVar9;
  char *pcVar10;
  undefined4 uVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  undefined4 unaff_ESI;
  float *pfVar15;
  void *unaff_EDI;
  float *pfVar16;
  bool bVar17;
  float10 fVar18;
  longlong lVar19;
  InternalExceptionFrame IStack_c0;
  undefined4 uStack_7c;
  char *pcStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *piStack_38;
  float fStack_34;
  int iStack_30;
  int iStack_2c;
  char *pcStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 *puStack_1c;
  byte *pbStack_18;
  float fStack_14;
  char *pcStack_10;
  int *piStack_c;
  float *pfStack_8;
  
  pfStack_8 = (float *)0x0;
  puStack_1c = (undefined4 *)0x0;
  IStack_c0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_c0;
  iVar5 = __setjmp3(IStack_c0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar5 != 0) {
    g_currentExceptionFrame = IStack_c0.previous;
    if (puStack_1c != (undefined4 *)0x0) {
      FUN_006ab060(&puStack_1c);
    }
    if (pfStack_8 != (float *)0x0) {
      FUN_006ab060(&pfStack_8);
    }
    if (0 < iVar5) {
      iVar5 = -0x6b;
    }
    if (param_3 != (int *)0x0) {
      *param_3 = iVar5;
    }
    return (float *)0x0;
  }
  _strncpy((char *)(piStack_38 + 1),&DAT_008016a0,0x7f);
  piStack_38[0x21] = -1;
  cVar3 = *param_1;
  pcVar12 = param_1;
  for (iVar5 = 0; (cVar3 != '\a' && (iVar5 < param_2)); iVar5 = iVar5 + 1) {
    cVar3 = pcVar12[5];
    pcVar12 = pcVar12 + 5;
  }
  if (iVar5 != param_2) {
    RaiseInternalException(-0x69,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x81);
  }
  pcStack_10 = param_1 + param_2 * 5;
  if (*(short *)(param_1 + param_2 * 5 + 3) != param_2) {
    RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x82);
  }
  iVar5 = (int)*(short *)(pcStack_10 + 1);
  if (iVar5 < 0x3e) {
    if (iVar5 == 0x3d) {
switchD_0064aa67_caseD_1:
      if (param_2 != 2) {
        RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x8a);
      }
      sVar4 = *(short *)(pcStack_10 + 1);
      if ((sVar4 == 1) && ((*param_1 == '\x06' || (*param_1 == '\x03')))) {
        if ((param_1[5] == '\x06') || (param_1[5] == '\x03')) {
          pcVar12 = (char *)(**(code **)(*piStack_38 + 8))(param_1);
          pbVar7 = (byte *)(**(code **)(*piStack_38 + 8))(param_1 + 5);
          pbStack_18 = pbVar7;
          if ((pcVar12 == (char *)0x0) || (pbVar7 == (byte *)0x0)) {
            RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x8e);
          }
          uVar13 = 0xffffffff;
          pbVar6 = pbVar7;
          do {
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            bVar2 = *pbVar6;
            pbVar6 = pbVar6 + 1;
          } while (bVar2 != 0);
          uVar14 = 0xffffffff;
          pcVar10 = pcVar12;
          do {
            if (uVar14 == 0) break;
            uVar14 = uVar14 - 1;
            cVar3 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar3 != '\0');
          pfStack_8 = (float *)FUN_006aac10(~uVar13 + ~uVar14 + 2);
          if ((pfStack_8 != (float *)0x0) && (pcVar12 != (char *)0x0)) {
            uVar13 = 0xffffffff;
            do {
              pcVar10 = pcVar12;
              if (uVar13 == 0) break;
              uVar13 = uVar13 - 1;
              pcVar10 = pcVar12 + 1;
              cVar3 = *pcVar12;
              pcVar12 = pcVar10;
            } while (cVar3 != '\0');
            uVar13 = ~uVar13;
            pfVar15 = (float *)(pcVar10 + -uVar13);
            pfVar16 = pfStack_8;
            for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
              *pfVar16 = *pfVar15;
              pfVar15 = pfVar15 + 1;
              pfVar16 = pfVar16 + 1;
            }
            for (uVar13 = uVar13 & 3; pbVar7 = pbStack_18, uVar13 != 0; uVar13 = uVar13 - 1) {
              *(undefined1 *)pfVar16 = *(undefined1 *)pfVar15;
              pfVar15 = (float *)((int)pfVar15 + 1);
              pfVar16 = (float *)((int)pfVar16 + 1);
            }
          }
          uVar13 = 0xffffffff;
          do {
            pbVar6 = pbVar7;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            pbVar6 = pbVar7 + 1;
            bVar2 = *pbVar7;
            pbVar7 = pbVar6;
          } while (bVar2 != 0);
          uVar13 = ~uVar13;
          iVar5 = -1;
          pfVar15 = pfStack_8;
          do {
            pfVar16 = pfVar15;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pfVar16 = (float *)((int)pfVar15 + 1);
            cVar3 = *(char *)pfVar15;
            pfVar15 = pfVar16;
          } while (cVar3 != '\0');
          pbVar7 = pbVar6 + -uVar13;
          pbVar6 = (byte *)((int)pfVar16 + -1);
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *(undefined4 *)pbVar6 = *(undefined4 *)pbVar7;
            pbVar7 = pbVar7 + 4;
            pbVar6 = pbVar6 + 4;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *pbVar6 = *pbVar7;
            pbVar7 = pbVar7 + 1;
            pbVar6 = pbVar6 + 1;
          }
LAB_0064bbb1:
          if (param_3 == (int *)0x0) {
            g_currentExceptionFrame = IStack_c0.previous;
            return pfStack_8;
          }
          *param_3 = 3;
          g_currentExceptionFrame = IStack_c0.previous;
          return pfStack_8;
        }
      }
      switch(*param_1) {
      case '\x01':
      case '\x04':
        cVar3 = param_1[5];
        if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
          iVar5 = (**(code **)*piStack_38)(param_1);
          iVar8 = (**(code **)*piStack_38)(param_1 + 5);
          pfStack_8 = (float *)FUN_006aac10(4);
          switch(*(undefined2 *)(pcStack_10 + 1)) {
          case 1:
            *pfStack_8 = (float)(iVar8 + iVar5);
            break;
          default:
            iVar5 = 0xa1;
            goto LAB_0064b368;
          case 0x16:
            if (iVar8 == 0) {
              RaiseInternalException(-0x67,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x9f);
            }
            *pfStack_8 = (float)(iVar5 / iVar8);
            break;
          case 0x2c:
            if (iVar8 == 0) {
              RaiseInternalException(-0x67,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0xa0);
            }
            *pfStack_8 = (float)(iVar5 % iVar8);
            break;
          case 0x30:
            *pfStack_8 = (float)(iVar8 * iVar5);
            break;
          case 0x3d:
            *pfStack_8 = (float)(iVar5 - iVar8);
          }
          goto LAB_0064b36f;
        }
        if ((cVar3 != '\x05') && (cVar3 != '\x02')) {
          pcVar12 = thunk_FUN_00674af0((int)sVar4);
          if (pcVar12 != (char *)0x0) {
            _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
            piStack_38[0x21] = -1;
            iVar5 = -0x76;
            goto LAB_0064c2a4;
          }
          goto LAB_0064b714;
        }
        pbStack_18 = (byte *)(**(code **)*piStack_38)(param_1);
        piStack_c = (int *)(float)(int)pbStack_18;
        fVar18 = (float10)(**(code **)(*piStack_38 + 4))(param_1 + 5);
        fStack_14 = (float)fVar18;
        pfStack_8 = (float *)FUN_006aac10(4);
        switch((int)*(short *)(pcStack_10 + 1)) {
        case 1:
          *pfStack_8 = fStack_14 + (float)piStack_c;
          break;
        default:
          pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
          goto joined_r0x0064b49a;
        case 0x16:
          if (fStack_14 == (float)_DAT_0079d670) {
            RaiseInternalException(-0x67,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0xad);
          }
          *pfStack_8 = (float)piStack_c / fStack_14;
          break;
        case 0x30:
          *pfStack_8 = fStack_14 * (float)piStack_c;
          break;
        case 0x3d:
          *pfStack_8 = (float)piStack_c - fStack_14;
        }
        break;
      case '\x02':
      case '\x05':
        cVar3 = param_1[5];
        if ((cVar3 != '\x04') && (cVar3 != '\x01')) {
          if ((cVar3 != '\x05') && (cVar3 != '\x02')) {
            pcVar12 = thunk_FUN_00674af0((int)sVar4);
            if (pcVar12 != (char *)0x0) {
              _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
              piStack_38[0x21] = -1;
              iVar5 = -0x76;
              goto LAB_0064c2a4;
            }
            goto LAB_0064b714;
          }
          fVar18 = (float10)(**(code **)(*piStack_38 + 4))(param_1);
          piStack_c = (int *)(float)fVar18;
          fVar18 = (float10)(**(code **)(*piStack_38 + 4))(param_1 + 5);
          fStack_14 = (float)fVar18;
          pfStack_8 = (float *)FUN_006aac10(4);
          iVar5 = (int)*(short *)(pcStack_10 + 1);
          switch(iVar5) {
          case 1:
            *pfStack_8 = fStack_14 + (float)piStack_c;
            break;
          default:
            goto switchD_0064b42d_caseD_2;
          case 0x16:
            if (fStack_14 == (float)_DAT_0079d670) {
              RaiseInternalException(-0x67,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0xcd);
            }
            *pfStack_8 = (float)piStack_c / fStack_14;
            break;
          case 0x30:
            *pfStack_8 = fStack_14 * (float)piStack_c;
            break;
          case 0x3d:
            *pfStack_8 = (float)piStack_c - fStack_14;
          }
          break;
        }
        fVar18 = (float10)(**(code **)(*piStack_38 + 4))(param_1);
        piStack_c = (int *)(float)fVar18;
        pbStack_18 = (byte *)(**(code **)*piStack_38)(param_1 + 5);
        fStack_14 = (float)(int)pbStack_18;
        pfStack_8 = (float *)FUN_006aac10(4);
        iVar5 = (int)*(short *)(pcStack_10 + 1);
        switch(iVar5) {
        case 1:
          *pfStack_8 = fStack_14 + (float)piStack_c;
          break;
        default:
switchD_0064b42d_caseD_2:
          pcVar12 = thunk_FUN_00674af0(iVar5);
joined_r0x0064b49a:
          if (pcVar12 != (char *)0x0) {
            _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
          }
          piStack_38[0x21] = -1;
          RaiseInternalException(-0x76,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
          break;
        case 0x16:
          if (fStack_14 == (float)_DAT_0079d670) {
            RaiseInternalException(-0x67,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0xc0);
          }
          *pfStack_8 = (float)piStack_c / fStack_14;
          break;
        case 0x30:
          *pfStack_8 = fStack_14 * (float)piStack_c;
          break;
        case 0x3d:
          *pfStack_8 = (float)piStack_c - fStack_14;
        }
        break;
      default:
        pcVar12 = thunk_FUN_00674af0((int)sVar4);
        if (pcVar12 != (char *)0x0) {
          _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
          piStack_38[0x21] = -1;
          iVar5 = -0x76;
          goto LAB_0064c2a4;
        }
        goto LAB_0064b80a;
      }
LAB_0064b291:
      if (param_3 == (int *)0x0) {
        g_currentExceptionFrame = IStack_c0.previous;
        return pfStack_8;
      }
      *param_3 = 2;
      g_currentExceptionFrame = IStack_c0.previous;
      return pfStack_8;
    }
    switch(iVar5) {
    case 1:
    case 0x16:
    case 0x2c:
    case 0x30:
      goto switchD_0064aa67_caseD_1;
    default:
      goto switchD_0064aa67_caseD_2;
    case 3:
    case 0x34:
switchD_0064aa67_caseD_3:
      if (param_2 != 2) {
        RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x131);
      }
      if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
        if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
          iVar5 = (**(code **)*piStack_38)(param_1);
          iVar8 = (**(code **)*piStack_38)(param_1 + 5);
          pfStack_8 = (float *)FUN_006aac10(4);
          sVar4 = *(short *)(pcStack_10 + 1);
          if (sVar4 == 3) {
            if ((iVar5 != 0) && (iVar8 != 0)) {
              *pfStack_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
          }
          else {
            if (sVar4 == 0x34) {
              if (iVar5 == 0) {
joined_r0x0064b781:
                if (iVar8 == 0) goto LAB_0064b79f;
              }
LAB_0064b78b:
              *pfStack_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
            if (sVar4 != 0x43) {
              iVar5 = 0x139;
              goto LAB_0064b368;
            }
            if (iVar5 == 0) goto joined_r0x0064b781;
            if (iVar8 == 0) goto LAB_0064b78b;
          }
          goto LAB_0064b79f;
        }
      }
      pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
      if (pcVar12 != (char *)0x0) {
        _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
      }
LAB_0064b714:
      piStack_38[0x21] = -1;
      iVar5 = -0x76;
      goto LAB_0064c2a4;
    case 8:
    case 10:
    case 0xb:
      if (param_2 != 2) {
        RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x152);
      }
      if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
LAB_0064ae25:
        pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
        if (pcVar12 != (char *)0x0) {
          _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
        }
        piStack_38[0x21] = -1;
        iVar5 = -0x76;
        goto LAB_0064c2a4;
      }
      if ((param_1[5] != '\x04') && (param_1[5] != '\x01')) goto LAB_0064ae25;
      uVar13 = (**(code **)*piStack_38)(param_1);
      uVar14 = (**(code **)*piStack_38)(param_1 + 5);
      pfStack_8 = (float *)FUN_006aac10(4);
      sVar4 = *(short *)(pcStack_10 + 1);
      if (sVar4 == 8) {
        *pfStack_8 = (float)(uVar14 & uVar13);
        goto LAB_0064b36f;
      }
      if (sVar4 == 10) {
        *pfStack_8 = (float)(uVar14 | uVar13);
        goto LAB_0064b36f;
      }
      if (sVar4 == 0xb) {
        *pfStack_8 = (float)(uVar14 ^ uVar13);
        goto LAB_0064b36f;
      }
      iVar5 = 0x15a;
LAB_0064b368:
      RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,iVar5);
      goto LAB_0064b36f;
    case 9:
      if (param_2 != 1) {
        RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x164);
      }
      if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
        pfStack_8 = (float *)FUN_006aac10(4);
        uVar13 = (**(code **)*piStack_38)(param_1);
        *pfStack_8 = (float)~uVar13;
        goto LAB_0064b36f;
      }
      break;
    case 0x13:
      if (param_2 != 3) {
        RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x171);
      }
      if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
        iVar5 = (**(code **)*piStack_38)(param_1);
        iVar5 = 2 - (uint)(iVar5 != 0);
        pcVar12 = param_1 + iVar5 * 5;
        cVar3 = param_1[iVar5 * 5];
        if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
          pfStack_8 = (float *)FUN_006aac10(4);
          fVar9 = (float)(**(code **)*piStack_38)(pcVar12);
          *pfStack_8 = fVar9;
          goto LAB_0064b36f;
        }
        if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
          pfStack_8 = (float *)FUN_006aac10(4);
          fVar18 = (float10)(**(code **)(*piStack_38 + 4))(pcVar12);
          *pfStack_8 = (float)fVar18;
          goto LAB_0064b291;
        }
        if ((cVar3 == '\x06') || (cVar3 == '\x03')) {
          pcVar12 = (char *)(**(code **)(*piStack_38 + 8))(pcVar12);
          if (pcVar12 == (char *)0x0) {
            RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x182);
          }
          uVar13 = 0xffffffff;
          pcVar10 = pcVar12;
          do {
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            cVar3 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar3 != '\0');
          pfStack_8 = (float *)FUN_006aac10(~uVar13 + 1);
          uVar13 = 0xffffffff;
          do {
            pcVar10 = pcVar12;
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            pcVar10 = pcVar12 + 1;
            cVar3 = *pcVar12;
            pcVar12 = pcVar10;
          } while (cVar3 != '\0');
          uVar13 = ~uVar13;
          pfVar15 = (float *)(pcVar10 + -uVar13);
          pfVar16 = pfStack_8;
          for (uVar14 = uVar13 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
            *pfVar16 = *pfVar15;
            pfVar15 = pfVar15 + 1;
            pfVar16 = pfVar16 + 1;
          }
          for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
            *(undefined1 *)pfVar16 = *(undefined1 *)pfVar15;
            pfVar15 = (float *)((int)pfVar15 + 1);
            pfVar16 = (float *)((int)pfVar16 + 1);
          }
          goto LAB_0064bbb1;
        }
      }
      pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
      if (pcVar12 != (char *)0x0) {
        _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
      }
      piStack_38[0x21] = -1;
      iVar5 = -0x76;
      goto LAB_0064c2a4;
    case 0x1e:
    case 0x27:
    case 0x28:
    case 0x2e:
    case 0x2f:
    case 0x33:
      if (param_2 != 2) {
        RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0xf8);
      }
      cVar3 = *param_1;
      if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
        if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
          iVar5 = (**(code **)*piStack_38)(param_1);
          iVar8 = (**(code **)*piStack_38)(param_1 + 5);
          pfStack_8 = (float *)FUN_006aac10(4);
          switch(*(undefined2 *)(pcStack_10 + 1)) {
          case 0x1e:
            *pfStack_8 = (float)(uint)(iVar5 == iVar8);
            break;
          default:
            iVar5 = 0x104;
            goto LAB_0064b368;
          case 0x27:
            *pfStack_8 = (float)(uint)(iVar5 < iVar8);
            break;
          case 0x28:
            *pfStack_8 = (float)(uint)(iVar5 <= iVar8);
            break;
          case 0x2e:
            *pfStack_8 = (float)(uint)(iVar8 < iVar5);
            break;
          case 0x2f:
            *pfStack_8 = (float)(uint)(iVar8 <= iVar5);
            break;
          case 0x33:
            *pfStack_8 = (float)(uint)(iVar5 != iVar8);
          }
          goto LAB_0064b36f;
        }
      }
      if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
        if ((param_1[5] == '\x05') || (param_1[5] == '\x02')) {
          fVar18 = (float10)(**(code **)(*piStack_38 + 4))(param_1);
          fStack_20 = (float)fVar18;
          fVar18 = (float10)(**(code **)(*piStack_38 + 4))(param_1 + 5);
          fStack_24 = (float)fVar18;
          pfStack_8 = (float *)FUN_006aac10(4);
          switch(*(undefined2 *)(pcStack_10 + 1)) {
          case 0x1e:
            if (fStack_20 == fStack_24) {
              *pfStack_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
            break;
          default:
            iVar5 = 0x114;
            goto LAB_0064b368;
          case 0x27:
            if (fStack_20 < fStack_24) {
              *pfStack_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
            break;
          case 0x28:
            if (fStack_20 <= fStack_24) {
              *pfStack_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
            break;
          case 0x2e:
            if (fStack_24 < fStack_20) {
              *pfStack_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
            break;
          case 0x2f:
            if (fStack_24 <= fStack_20) {
              *pfStack_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
            break;
          case 0x33:
            if (fStack_20 != fStack_24) {
              *pfStack_8 = 1.4013e-45;
              goto LAB_0064b36f;
            }
          }
          *pfStack_8 = 0.0;
          goto LAB_0064b36f;
        }
      }
      if ((cVar3 == '\x06') || (cVar3 == '\x03')) {
        if ((param_1[5] == '\x06') || (param_1[5] == '\x03')) {
          pbVar7 = (byte *)(**(code **)(*piStack_38 + 8))(param_1);
          pbVar6 = (byte *)(**(code **)(*piStack_38 + 8))(param_1 + 5);
          if ((pbVar7 == (byte *)0x0) || (pbVar6 == (byte *)0x0)) {
            RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x11c);
          }
          pfStack_8 = (float *)FUN_006aac10(4);
          do {
            bVar2 = *pbVar7;
            bVar17 = bVar2 < *pbVar6;
            if (bVar2 != *pbVar6) {
LAB_0064ab54:
              iVar5 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
              goto LAB_0064ab59;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar7[1];
            bVar17 = bVar2 < pbVar6[1];
            if (bVar2 != pbVar6[1]) goto LAB_0064ab54;
            pbVar7 = pbVar7 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          iVar5 = 0;
LAB_0064ab59:
          switch(*(undefined2 *)(pcStack_10 + 1)) {
          case 0x1e:
            *pfStack_8 = (float)(uint)(iVar5 == 0);
            break;
          default:
            iVar5 = 0x126;
            goto LAB_0064b368;
          case 0x27:
            *pfStack_8 = (float)(uint)(iVar5 < 0);
            break;
          case 0x28:
            *pfStack_8 = (float)(uint)(iVar5 < 1);
            break;
          case 0x2e:
            *pfStack_8 = (float)(uint)(0 < iVar5);
            break;
          case 0x2f:
            *pfStack_8 = (float)(uint)(-1 < iVar5);
            break;
          case 0x33:
            *pfStack_8 = (float)(uint)(iVar5 != 0);
          }
          goto LAB_0064b36f;
        }
      }
      break;
    case 0x32:
      if (param_2 != 1) {
        RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x143);
      }
      if ((*param_1 != '\x04') && (*param_1 != '\x01')) {
        pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
        if (pcVar12 != (char *)0x0) {
          _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
        }
        piStack_38[0x21] = -1;
        iVar5 = -0x76;
        goto LAB_0064c2a4;
      }
      pfStack_8 = (float *)FUN_006aac10(4);
      iVar5 = (**(code **)*piStack_38)(param_1);
      *pfStack_8 = (float)(uint)(iVar5 == 0);
      goto LAB_0064b36f;
    }
LAB_0064b7ea:
    pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
    if (pcVar12 != (char *)0x0) {
      _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
    }
LAB_0064b80a:
    piStack_38[0x21] = -1;
    iVar5 = -0x76;
    goto LAB_0064c2a4;
  }
  if (iVar5 < 0x38a) {
    if (iVar5 != 0x389) {
      if (0x385 < iVar5) {
        if (iVar5 == 0x386) {
          if (param_2 != 1) {
            RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,399);
          }
          if ((*param_1 == '\x06') || (*param_1 == '\x03')) {
            pbVar7 = (byte *)(**(code **)(*piStack_38 + 8))(param_1);
            if (pbVar7 == (byte *)0x0) {
              RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x192);
            }
            pfStack_8 = (float *)FUN_006aac10(4);
            fVar9 = (float)FUN_0072ff00(pbVar7);
            *pfStack_8 = fVar9;
            goto LAB_0064b36f;
          }
        }
        else {
          if (iVar5 == 0x387) {
            if (param_2 != 1) {
              RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x19d);
            }
            if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
              pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
              if (pcVar12 != (char *)0x0) {
                _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
              }
              piStack_38[0x21] = -1;
              iVar5 = -0x78;
              goto LAB_0064c2a4;
            }
            pbVar7 = (byte *)(**(code **)(*piStack_38 + 8))(param_1);
            if (pbVar7 == (byte *)0x0) {
              RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x1a0);
            }
            pbStack_18 = (byte *)0x0;
            pfStack_8 = (float *)FUN_006aac10(4);
            fVar18 = FUN_00730310(pbVar7,(int *)&pbStack_18);
            *pfStack_8 = (float)fVar18;
            goto LAB_0064b291;
          }
          if (iVar5 != 0x388) goto switchD_0064aa67_caseD_2;
          if (param_2 != 2) {
            RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x1ac);
          }
          if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
            if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
              iVar5 = (**(code **)*piStack_38)(param_1);
              iVar8 = (**(code **)*piStack_38)(param_1 + 5);
              if (iVar8 < 2) {
                iVar8 = 2;
              }
              if (0x24 < iVar8) {
                iVar8 = 0x24;
              }
              pfStack_8 = (float *)FUN_006aac10(0x40);
              __itoa(iVar5,(char *)pfStack_8,iVar8);
              goto LAB_0064bbb1;
            }
          }
        }
        pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
        if (pcVar12 != (char *)0x0) {
          _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
        }
        piStack_38[0x21] = -1;
        iVar5 = -0x78;
        goto LAB_0064c2a4;
      }
      if (iVar5 == 0x385) {
        if (param_2 < 1) {
          RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x206);
        }
        pcStack_28 = (char *)0x0;
        iVar5 = param_2;
        if (0 < param_2) {
          do {
            cVar3 = *param_1;
            piStack_c = (int *)0x0;
            if (cVar3 == '\x04') {
LAB_0064b8f1:
              pbStack_18 = (byte *)(**(code **)*piStack_38)(param_1);
              piStack_c = (int *)(float)(int)pbStack_18;
LAB_0064b901:
              if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
                fVar18 = (float10)(**(code **)(*piStack_38 + 4))(param_1);
                piStack_c = (int *)(float)fVar18;
              }
            }
            else {
              if (((cVar3 == '\x01') || (cVar3 == '\x05')) || (cVar3 == '\x02')) {
                if ((cVar3 == '\x04') || (cVar3 == '\x01')) goto LAB_0064b8f1;
                goto LAB_0064b901;
              }
              pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
              if (pcVar12 != (char *)0x0) {
                _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
              }
              piStack_38[0x21] = -1;
              RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
            }
            pcStack_28 = (char *)((float)piStack_c + (float)pcStack_28);
            param_1 = param_1 + 5;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        pfStack_8 = (float *)FUN_006aac10(4);
        *pfStack_8 = (float)pcStack_28 / (float)param_2;
        goto LAB_0064b291;
      }
      if (iVar5 == 0x41) {
        if (param_2 != 1) {
          RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0xdf);
        }
        cVar3 = *param_1;
        if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
          pfStack_8 = (float *)FUN_006aac10(4);
          iVar5 = (**(code **)*piStack_38)(param_1);
          *pfStack_8 = (float)-iVar5;
          goto LAB_0064b36f;
        }
        if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
          pfStack_8 = (float *)FUN_006aac10(4);
          fVar18 = (float10)(**(code **)(*piStack_38 + 4))(param_1);
          *pfStack_8 = (float)-fVar18;
          goto LAB_0064b36f;
        }
        goto LAB_0064b7ea;
      }
      if (iVar5 == 0x43) goto switchD_0064aa67_caseD_3;
      if (iVar5 == 900) {
        if (param_2 < 1) {
          RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,500);
        }
        pcStack_28 = (char *)0x0;
        if (0 < param_2) {
          fStack_14 = (float)param_2;
          do {
            cVar3 = *param_1;
            piStack_c = (int *)0x0;
            if (cVar3 == '\x04') {
LAB_0064b659:
              piStack_c = (int *)(**(code **)*piStack_38)(param_1);
LAB_0064b663:
              if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
                fVar18 = (float10)(**(code **)(*piStack_38 + 4))(param_1);
                FUN_00730450(SUB84((double)fVar18,0),(uint)((ulonglong)(double)fVar18 >> 0x20));
                lVar19 = __ftol();
                piStack_c = (int *)lVar19;
              }
            }
            else {
              if (((cVar3 == '\x01') || (cVar3 == '\x05')) || (cVar3 == '\x02')) {
                if ((cVar3 == '\x04') || (cVar3 == '\x01')) goto LAB_0064b659;
                goto LAB_0064b663;
              }
              pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
              if (pcVar12 != (char *)0x0) {
                _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
              }
              piStack_38[0x21] = -1;
              RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
            }
            pcStack_28 = pcStack_28 + (int)piStack_c;
            param_1 = param_1 + 5;
            fStack_14 = (float)((int)fStack_14 + -1);
          } while (fStack_14 != 0.0);
        }
        pfStack_8 = (float *)FUN_006aac10(4);
        *pfStack_8 = (float)((int)pcStack_28 / param_2);
        goto LAB_0064b36f;
      }
      goto switchD_0064aa67_caseD_2;
    }
    if (param_2 != 2) {
      RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x1bb);
    }
    if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
      if ((param_1[5] == '\x04') || (param_1[5] == '\x01')) {
        fVar18 = (float10)(**(code **)(*piStack_38 + 4))(param_1);
        pbStack_18 = (byte *)(float)fVar18;
        iVar5 = (**(code **)*piStack_38)(param_1 + 5);
        if (iVar5 < 2) {
          iVar5 = 2;
        }
        if (0x40 < iVar5) {
          iVar5 = 0x40;
        }
        pfStack_8 = (float *)FUN_006aac10(iVar5 + 10);
        FUN_007301e0(SUB84((double)(float)pbStack_18,0),
                     (int)((ulonglong)(double)(float)pbStack_18 >> 0x20),iVar5,(char *)pfStack_8);
        goto LAB_0064bbb1;
      }
    }
LAB_0064bd33:
    pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
    if (pcVar12 != (char *)0x0) {
      _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
    }
    piStack_38[0x21] = -1;
    iVar5 = -0x78;
    goto LAB_0064c2a4;
  }
  switch(iVar5) {
  case 0x38a:
    if (param_2 != 1) {
      RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x1ca);
    }
    if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
      pbStack_18 = (byte *)(**(code **)*piStack_38)(param_1);
      pfStack_8 = (float *)FUN_006aac10(4);
      *pfStack_8 = (float)(int)pbStack_18;
      goto LAB_0064b291;
    }
    pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
    if (pcVar12 != (char *)0x0) {
      _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
    }
    piStack_38[0x21] = -1;
    iVar5 = -0x78;
    break;
  case 0x38b:
    if (param_2 != 1) {
      RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x1d8);
    }
    if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
      fVar18 = (float10)(**(code **)(*piStack_38 + 4))(param_1);
      pbStack_18 = (byte *)(float)fVar18;
      pfStack_8 = (float *)FUN_006aac10(4);
      FUN_0072e150(SUB84((double)(float)pbStack_18,0),
                   (uint)((ulonglong)(double)(float)pbStack_18 >> 0x20));
      lVar19 = __ftol();
      *pfStack_8 = (float)lVar19;
      goto LAB_0064b36f;
    }
    pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
    if (pcVar12 != (char *)0x0) {
      _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
    }
    piStack_38[0x21] = -1;
    iVar5 = -0x78;
    break;
  case 0x38c:
    if (param_2 != 1) {
      RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x1e6);
    }
    if ((*param_1 == '\x05') || (*param_1 == '\x02')) {
      fVar18 = (float10)(**(code **)(*piStack_38 + 4))(param_1);
      pbStack_18 = (byte *)(float)fVar18;
      pfStack_8 = (float *)FUN_006aac10(4);
      FUN_00730450(SUB84((double)(float)pbStack_18,0),
                   (uint)((ulonglong)(double)(float)pbStack_18 >> 0x20));
      lVar19 = __ftol();
      *pfStack_8 = (float)lVar19;
      goto LAB_0064b36f;
    }
    goto LAB_0064bd33;
  case 0x38d:
    if (param_2 < 2) {
      RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x218);
    }
    if ((*param_1 != '\x06') && (*param_1 != '\x03')) {
      pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
      if (pcVar12 != (char *)0x0) {
        _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
      }
      piStack_38[0x21] = -1;
      RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
    }
    pbStack_18 = (byte *)(**(code **)(*piStack_38 + 8))(param_1);
    if (pbStack_18 == (byte *)0x0) {
      RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x21a);
    }
    uVar13 = 0xffffffff;
    pbVar7 = pbStack_18;
    do {
      if (uVar13 == 0) break;
      uVar13 = uVar13 - 1;
      bVar2 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar2 != 0);
    fStack_20 = (float)(~uVar13 + 1);
    fStack_14 = 0.0;
    pcStack_28 = (char *)0x200;
    puStack_1c = (undefined4 *)FUN_006aac70(0x200);
    if (1 < param_2) {
      piStack_c = (int *)(param_1 + 5);
      iStack_30 = param_2 + -1;
      iStack_2c = 4;
      fStack_24 = 1.12104e-44;
      pcVar12 = pcStack_28;
      do {
        cVar3 = (char)*piStack_c;
        if ((cVar3 == '\x06') || (cVar3 == '\x03')) {
          pcVar10 = (char *)(**(code **)(*piStack_38 + 8))(piStack_c);
          pcStack_78 = pcVar10;
          if (pcVar10 == (char *)0x0) {
            RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x220);
          }
          if ((int)pcVar12 <= iStack_2c) {
            pcStack_28 = (char *)((int)pcVar12 + 0x200);
            puStack_1c = (undefined4 *)FUN_006acf50(puStack_1c,(uint)pcStack_28);
          }
          puVar1 = (undefined4 *)((int)fStack_14 + (int)puStack_1c);
          fStack_14 = (float)((int)fStack_14 + 4);
          iStack_2c = iStack_2c + 4;
          fStack_24 = (float)((int)fStack_24 + 4);
          uVar13 = 0xffffffff;
          *puVar1 = pcVar10;
          do {
            if (uVar13 == 0) break;
            uVar13 = uVar13 - 1;
            cVar3 = *pcVar10;
            pcVar10 = pcVar10 + 1;
          } while (cVar3 != '\0');
          fStack_20 = (float)((int)fStack_20 + ~uVar13 + 1);
          pcVar12 = pcStack_28;
        }
        else if ((cVar3 == '\x04') || (cVar3 == '\x01')) {
          uVar11 = (**(code **)*piStack_38)(piStack_c);
          uStack_7c = uVar11;
          if ((int)pcVar12 <= iStack_2c) {
            pcVar12 = (char *)((int)pcVar12 + 0x200);
            pcStack_28 = pcVar12;
            puStack_1c = (undefined4 *)FUN_006acf50(puStack_1c,(uint)pcVar12);
          }
          puVar1 = (undefined4 *)((int)fStack_14 + (int)puStack_1c);
          fStack_14 = (float)((int)fStack_14 + 4);
          *puVar1 = uVar11;
          fStack_24 = (float)((int)fStack_24 + 4);
          iStack_2c = iStack_2c + 4;
          fStack_20 = (float)((int)fStack_20 + 0xc);
        }
        else if ((cVar3 == '\x05') || (cVar3 == '\x02')) {
          fVar18 = (float10)(**(code **)(*piStack_38 + 4))(piStack_c);
          fStack_34 = (float)fVar18;
          if ((int)pcVar12 <= (int)fStack_24) {
            pcVar12 = (char *)((int)pcVar12 + 0x200);
            pcStack_28 = pcVar12;
            puStack_1c = (undefined4 *)FUN_006acf50(puStack_1c,(uint)pcVar12);
          }
          *(double *)((int)fStack_14 + (int)puStack_1c) = (double)fStack_34;
          fStack_14 = (float)((int)fStack_14 + 8);
          fStack_24 = (float)((int)fStack_24 + 8);
          iStack_2c = iStack_2c + 8;
          fStack_20 = (float)((int)fStack_20 + 0x20);
        }
        else {
          pcVar10 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
          if (pcVar10 != (char *)0x0) {
            _strncpy((char *)(piStack_38 + 1),pcVar10,0x7f);
          }
          piStack_38[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        piStack_c = (int *)((int)piStack_c + 5);
        iStack_30 = iStack_30 + -1;
      } while (iStack_30 != 0);
    }
    fVar9 = fStack_20;
    pfStack_8 = (float *)FUN_006aac10((uint)fStack_20);
    FUN_007300e0((undefined1 *)pfStack_8,(int)fVar9,pbStack_18,puStack_1c);
    if (param_3 != (int *)0x0) {
      *param_3 = 3;
    }
    if (puStack_1c == (undefined4 *)0x0) {
      g_currentExceptionFrame = IStack_c0.previous;
      return pfStack_8;
    }
    FUN_006ab060(&puStack_1c);
    g_currentExceptionFrame = IStack_c0.previous;
    return pfStack_8;
  case 0x38e:
    if (param_2 != 9) {
      RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x24f);
    }
    if (0 < param_2) {
      piStack_c = &iStack_74;
      do {
        if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
          iVar5 = (**(code **)*piStack_38)(param_1);
          *piStack_c = iVar5;
        }
        else {
          pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
          if (pcVar12 != (char *)0x0) {
            _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
          }
          piStack_38[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        param_1 = param_1 + 5;
        piStack_c = piStack_c + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    pfStack_8 = (float *)FUN_006aac10(4);
    if (((iStack_68 <= iStack_74) && (iStack_74 < iStack_5c + iStack_68)) &&
       ((iStack_64 <= iStack_70 &&
        (((iStack_70 < iStack_58 + iStack_64 && (iStack_60 <= iStack_6c)) &&
         (iStack_6c < iStack_54 + iStack_60)))))) {
      *pfStack_8 = 1.4013e-45;
      goto LAB_0064b36f;
    }
    goto LAB_0064b79f;
  case 0x38f:
    if (param_2 != 6) {
      RaiseInternalException(-0x6b,DAT_007ed77c,s_E____titans_ai_ai_erc_cpp_007d2a04,0x240);
    }
    if (0 < param_2) {
      piStack_c = &iStack_50;
      do {
        if ((*param_1 == '\x04') || (*param_1 == '\x01')) {
          iVar5 = (**(code **)*piStack_38)(param_1);
          *piStack_c = iVar5;
        }
        else {
          pcVar12 = thunk_FUN_00674af0((int)*(short *)(pcStack_10 + 1));
          if (pcVar12 != (char *)0x0) {
            _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
          }
          piStack_38[0x21] = -1;
          RaiseInternalException(-0x78,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
        }
        param_1 = param_1 + 5;
        piStack_c = piStack_c + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    pfStack_8 = (float *)FUN_006aac10(4);
    if ((((iStack_48 <= iStack_50) && (iStack_50 < iStack_40 + iStack_48)) &&
        (iStack_44 <= iStack_4c)) && (iStack_4c < iStack_3c + iStack_44)) {
      *pfStack_8 = 1.4013e-45;
      goto LAB_0064b36f;
    }
LAB_0064b79f:
    *pfStack_8 = 0.0;
LAB_0064b36f:
    if (param_3 == (int *)0x0) {
      g_currentExceptionFrame = IStack_c0.previous;
      return pfStack_8;
    }
    *param_3 = 1;
    g_currentExceptionFrame = IStack_c0.previous;
    return pfStack_8;
  default:
switchD_0064aa67_caseD_2:
    pcVar12 = thunk_FUN_00674af0(iVar5);
    if (pcVar12 != (char *)0x0) {
      _strncpy((char *)(piStack_38 + 1),pcVar12,0x7f);
    }
    piStack_38[0x21] = -1;
    iVar5 = -0x75;
  }
LAB_0064c2a4:
  RaiseInternalException(iVar5,DAT_007ed77c,s___ai_ai_erc_h_007d2a24,0x79);
  g_currentExceptionFrame = IStack_c0.previous;
  return pfStack_8;
}

