
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::GetMessage */

undefined4 __thiscall PlayPanelTy::GetMessage(PlayPanelTy *this,int param_1)

{
  byte bVar1;
  PanelTy *this_00;
  char cVar2;
  int iVar3;
  uint uVar4;
  LPSTR pCVar5;
  undefined4 uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  PanelTy *pPVar11;
  bool bVar12;
  int iVar13;
  char *pcVar14;
  int *piVar15;
  code *pcVar16;
  int iVar17;
  UINT UVar18;
  InternalExceptionFrame local_64;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  PanelTy *local_14;
  uint local_10;
  ushort *local_c;
  uint local_8;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_14 = (PanelTy *)this;
  iVar3 = __setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_playpan_cpp_007c7574,500,0,iVar3,&DAT_007a4ccc,
                               s_PlayPanelTy__GetMessage_007c76ac);
    if (iVar9 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_playpan_cpp_007c7574,500);
      return 0xffff;
    }
    pcVar16 = (code *)swi(3);
    uVar6 = (*pcVar16)();
    return uVar6;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    pPVar11 = local_14 + 0x4c;
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,(undefined4 *)pPVar11);
    *(undefined4 *)(this_00 + 0x3c) = *(undefined4 *)pPVar11;
    *(int *)(this_00 + 0x44) = *(int *)(this_00 + 0x50) - *(int *)(this_00 + 0x48);
    *(int *)(this_00 + 0x174) = *(int *)(this_00 + 0x48) + *(int *)(this_00 + 0x50);
  }
  PanelTy::GetMessage(this_00,param_1);
  uVar4 = *(uint *)(param_1 + 0x10);
  if (uVar4 < 0xb20a) {
    if (uVar4 == 0xb209) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
      local_10 = *(int *)(*(int *)(param_1 + 0x14) + 0xc) - *(int *)(this_00 + 0x3c);
      if (*(int *)(this_00 + 0x5c) == 0) {
        iVar9 = *(int *)(this_00 + 0x48);
      }
      else {
        iVar9 = -*(int *)(this_00 + 0x44);
      }
      iVar17 = 1;
      piVar15 = (int *)0x0;
      uVar6 = thunk_FUN_0052a4d0(param_1);
      iVar13 = 1;
      pCVar5 = thunk_FUN_00571240(s_BUT_SWITCH_007c71d0,0);
      pCVar5 = FUN_006f2c00(pCVar5,iVar13,uVar6);
      local_c = FUN_006f1ce0(1,pCVar5,piVar15,iVar17);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),local_10,iVar3 + iVar9,'\x01',
                         (byte *)local_c);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_c);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (0x6200 < uVar4) {
      if (uVar4 == 0x6201) {
        pcVar14 = s_BUT_SLUP_007c3e40;
      }
      else {
        if (uVar4 != 0x6202) {
          if (uVar4 != 0xb208) {
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          iVar3 = **(int **)(param_1 + 0x14);
          if (iVar3 == 1) {
            bVar10 = 0;
            local_8 = (uint)local_8._1_3_ << 8;
            if (DAT_00808aaf != 0) {
              do {
                uVar4 = local_8 & 0xff;
                bVar10 = bVar10 + 1;
                local_8 = CONCAT31(local_8._1_3_,bVar10);
                (&DAT_00808af7)[uVar4 * 0x9c] = 1;
              } while (bVar10 < DAT_00808aaf);
            }
            *(undefined4 *)(this_00 + 0x28) = 5;
            pPVar11 = this_00 + 0x1a1;
            iVar3 = 8;
            do {
              if (*(int *)pPVar11 != 0) {
                FUN_006e6080(this_00,2,*(int *)pPVar11,(undefined4 *)(this_00 + 0x18));
              }
              pPVar11 = pPVar11 + 4;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (iVar3 == 2) {
            if (DAT_0080874d < 8) {
              bVar10 = 0;
              local_8 = (uint)local_8._1_3_ << 8;
              if (DAT_00808aaf != 0) {
                do {
                  iVar3 = (local_8 & 0xff) * 0x9c;
                  bVar1 = (&DAT_00808af4)[iVar3];
                  local_c = (ushort *)CONCAT31(local_c._1_3_,bVar1);
                  if (DAT_00808a8f == '\0') {
                    if (bVar1 == DAT_0080874d) {
LAB_0053b42f:
                      iVar9 = 0;
                    }
                    else {
                      uVar4 = (uint)bVar1;
                      uVar8 = (uint)DAT_0080874d;
                      cVar2 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar8);
                      if ((cVar2 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4) == '\0')) {
                        iVar9 = -2;
                      }
                      else if ((cVar2 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4) == '\0')) {
                        iVar9 = -1;
                      }
                      else if ((cVar2 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4) == '\x01')) {
                        iVar9 = 1;
                      }
                      else {
                        if ((cVar2 != '\x01') ||
                           (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4) != '\x01'))
                        goto LAB_0053b42f;
                        iVar9 = 2;
                      }
                    }
                    bVar12 = iVar9 < 0;
                  }
                  else {
                    bVar12 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar1 * 0x51];
                  }
                  (&DAT_00808af7)[iVar3] = bVar12;
                  bVar10 = bVar10 + 1;
                  local_8 = CONCAT31(local_8._1_3_,bVar10);
                } while (bVar10 < DAT_00808aaf);
              }
            }
            *(undefined4 *)(this_00 + 0x28) = 5;
            pPVar11 = this_00 + 0x1a1;
            iVar3 = 8;
            do {
              if (*(int *)pPVar11 != 0) {
                FUN_006e6080(this_00,2,*(int *)pPVar11,(undefined4 *)(this_00 + 0x18));
              }
              pPVar11 = pPVar11 + 4;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (iVar3 != 3) {
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (DAT_0080874d < 8) {
            bVar10 = 0;
            local_8 = local_8 & 0xffffff00;
            if (DAT_00808aaf != 0) {
              do {
                iVar3 = (local_8 & 0xff) * 0x9c;
                bVar1 = (&DAT_00808af4)[iVar3];
                local_c = (ushort *)CONCAT31(local_c._1_3_,bVar1);
                if (DAT_00808a8f == '\0') {
                  if (bVar1 == DAT_0080874d) {
LAB_0053b2ea:
                    iVar9 = 0;
                  }
                  else {
                    uVar4 = (uint)bVar1;
                    uVar8 = (uint)DAT_0080874d;
                    cVar2 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar8);
                    if ((cVar2 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4) == '\0')) {
                      iVar9 = -2;
                    }
                    else if ((cVar2 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4) == '\0')) {
                      iVar9 = -1;
                    }
                    else if ((cVar2 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4) == '\x01')) {
                      iVar9 = 1;
                    }
                    else {
                      if ((cVar2 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4) != '\x01'))
                      goto LAB_0053b2ea;
                      iVar9 = 2;
                    }
                  }
                  bVar12 = iVar9 < 0;
                }
                else {
                  bVar12 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar1 * 0x51];
                }
                bVar10 = bVar10 + 1;
                (&DAT_00808af7)[iVar3] = '\x01' - bVar12;
                local_8 = CONCAT31(local_8._1_3_,bVar10);
              } while (bVar10 < DAT_00808aaf);
            }
          }
          *(undefined4 *)(this_00 + 0x28) = 5;
          pPVar11 = this_00 + 0x1a1;
          iVar3 = 8;
          do {
            if (*(int *)pPVar11 != 0) {
              FUN_006e6080(this_00,2,*(int *)pPVar11,(undefined4 *)(this_00 + 0x18));
            }
            pPVar11 = pPVar11 + 4;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
          g_currentExceptionFrame = local_64.previous;
          return 0;
        }
        pcVar14 = s_BUT_SLDN_007c3e34;
      }
      pcVar16 = thunk_FUN_00529fe0;
      pCVar5 = thunk_FUN_00571240(pcVar14,0);
      UPanelTy::PaintBut((UPanelTy *)this_00,param_1,6,pCVar5,pcVar16);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (uVar4 == 0x6200) {
      *(undefined4 *)(this_00 + 0x1c9) = *(undefined4 *)(param_1 + 0x14);
      PaintPlayPanel((PlayPanelTy *)this_00);
      *(undefined4 *)(this_00 + 0x28) = 5;
      pPVar11 = this_00 + 0x1a1;
      iVar3 = 8;
      do {
        if (*(int *)pPVar11 != 0) {
          FUN_006e6080(this_00,2,*(int *)pPVar11,(undefined4 *)(this_00 + 0x18));
        }
        pPVar11 = pPVar11 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(undefined4 *)(this_00 + 0x28) = 5;
      pPVar11 = this_00 + 0x181;
      iVar3 = 8;
      do {
        if (*(int *)pPVar11 != 0) {
          FUN_006e6080(this_00,2,*(int *)pPVar11,(undefined4 *)(this_00 + 0x18));
        }
        pPVar11 = pPVar11 + 4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (uVar4 == 0) {
      if (*(short *)(this_00 + 0x172) == 3) {
        iVar3 = *(int *)(this_00 + 0x50);
        if (*(int *)(this_00 + 0x44) < iVar3) {
          *(int *)(this_00 + 0x44) = *(int *)(this_00 + 0x44) + 0x1e;
        }
        if (iVar3 <= *(int *)(this_00 + 0x44)) {
          *(int *)(this_00 + 0x44) = iVar3;
          *(undefined2 *)(this_00 + 0x172) = 1;
          ShiftControls((PlayPanelTy *)this_00,1);
        }
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                     *(uint *)(this_00 + 0x44));
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if (*(short *)(this_00 + 0x172) == 4) {
        iVar3 = *(int *)(this_00 + 0x50) - *(int *)(this_00 + 0x48);
        if (iVar3 < *(int *)(this_00 + 0x44)) {
          *(int *)(this_00 + 0x44) = *(int *)(this_00 + 0x44) + -0x1e;
        }
        if (*(int *)(this_00 + 0x44) <= iVar3) {
          *(int *)(this_00 + 0x44) = iVar3;
          *(undefined2 *)(this_00 + 0x172) = 2;
        }
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                     *(uint *)(this_00 + 0x44));
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
    }
    else {
      if (uVar4 == 2) {
        InitPlayPanel((PlayPanelTy *)this_00);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if (uVar4 == 3) {
        DonePlayPanel((PlayPanelTy *)this_00);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
    }
  }
  else if (uVar4 < 0xb537) {
    if (0xb52e < uVar4) {
      iVar3 = (*(int **)(param_1 + 0x18))[1];
      local_10 = **(int **)(param_1 + 0x18) - *(int *)(this_00 + 0x3c);
      if (*(int *)(this_00 + 0x5c) == 0) {
        iVar9 = *(int *)(this_00 + 0x48);
      }
      else {
        iVar9 = -*(int *)(this_00 + 0x44);
      }
      if (*(short *)(param_1 + 0x14) == 0) {
        uVar4 = 1;
      }
      else {
        bVar10 = *(char *)(param_1 + 0x10) - 0x2f;
        local_c = (ushort *)CONCAT31(local_c._1_3_,bVar10);
        uVar4 = (uint)((&DAT_00808af7)[(*(int *)(this_00 + 0x1c9) + (uint)bVar10) * 0x9c] == '\0');
      }
      pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x1d9),uVar4);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),local_10,iVar3 + iVar9,'\x01',pbVar7);
      FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                   *(uint *)(this_00 + 0x44));
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    switch(uVar4) {
    case 0xb4ff:
    case 0xb500:
    case 0xb501:
    case 0xb502:
    case 0xb503:
    case 0xb504:
    case 0xb505:
    case 0xb506:
      uVar4 = (uint)DAT_0080874d;
      if ((*(char *)((int)&DAT_008087c4 + uVar4 * 0x51 + 3) == '\0') && (DAT_0080874f == '\0')) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if ((bVar12) && (DAT_00808783 != '\x01')) {
        iVar3 = (*(int *)(this_00 + 0x1c9) + (uint)(byte)(*(char *)(param_1 + 0x10) + 1)) * 0x9c;
        bVar10 = (&DAT_00808af4)[iVar3];
        local_10 = CONCAT31(local_10._1_3_,bVar10);
        if ((DAT_00808a8f == '\0') &&
           (((((&DAT_00808af5)[iVar3] != '\0' && (DAT_0080874d != 0xff)) && (bVar10 != 0xff)) &&
            (DAT_0080874d != bVar10)))) {
          uVar8 = (uint)bVar10;
          local_1c = 0;
          local_18 = 0;
          if (*(char *)((int)&DAT_008087c4 + uVar8 * 0x51 + 3) == '\x01') {
            cVar2 = *(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar8);
            local_20 = 6;
            if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4) == '\0')) {
              uVar6 = 0xfffffffe;
            }
            else if ((cVar2 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4) == '\0')) {
              uVar6 = 0xffffffff;
            }
            else if ((cVar2 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4) == '\x01')) {
              uVar6 = 1;
            }
            else if ((cVar2 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4) == '\x01')) {
              uVar6 = 2;
            }
            else {
              uVar6 = 0;
            }
            switch(uVar6) {
            case 1:
              local_1c = uVar8 << 0x10 | uVar4;
              local_18 = 0;
              break;
            case 2:
              local_1c = uVar4 << 0x10 | uVar8;
              local_18 = 0;
              break;
            case 0xfffffffe:
              local_1c = uVar4 << 0x10 | uVar8;
              local_18 = 1;
              break;
            case 0xffffffff:
              local_1c = uVar8 << 0x10 | uVar4;
              local_18 = 1;
            }
          }
          else {
            local_1c = uVar4 << 0x10 | uVar8;
            local_20 = 7;
          }
          if (DAT_00802a38 != 0) {
            thunk_FUN_0054edf0((undefined4 *)0x5,&local_20,1,0xffffffff);
            g_currentExceptionFrame = local_64.previous;
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
      local_c = (ushort *)(*piVar15 - *(int *)(this_00 + 0x3c));
      if (*(int *)(this_00 + 0x5c) == 0) {
        iVar3 = *(int *)(this_00 + 0x48);
      }
      else {
        iVar3 = -*(int *)(this_00 + 0x44);
      }
      local_8 = piVar15[1] + iVar3;
      if (DAT_0080874e == '\x03') {
        cVar2 = 's';
      }
      else {
        cVar2 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      FUN_006b4170(*(int *)(this_00 + 0x68),0,(int)local_c,local_8,piVar15[2],piVar15[3],cVar2);
      if (*(short *)(param_1 + 0x14) != 0) {
        iVar3 = (*(int *)(this_00 + 0x1c9) + (local_10 & 0xff)) * 0x9c;
        bVar10 = (&DAT_00808af4)[iVar3];
        local_10 = CONCAT31(local_10._1_3_,bVar10);
        if (((DAT_0080874d != 0xff) && (bVar10 != 0xff)) && (DAT_0080874d != bVar10)) {
          iVar9 = -1;
          uVar8 = (uint)DAT_0080874d;
          uVar4 = (uint)bVar10;
          cVar2 = *(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar4);
          if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar8) == '\0')) {
            uVar6 = 0xfffffffe;
          }
          else if ((cVar2 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar8) == '\0'))
          {
            uVar6 = 0xffffffff;
          }
          else if ((cVar2 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar8) == '\x01'))
          {
            uVar6 = 1;
          }
          else if ((cVar2 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar4 * 8 + uVar8) == '\x01')) {
            uVar6 = 2;
          }
          else {
            uVar6 = 0;
          }
          switch(uVar6) {
          case 1:
            iVar9 = 0;
            break;
          case 2:
            iVar9 = 2;
            break;
          case 0xfffffffe:
            iVar9 = 3;
            break;
          case 0xffffffff:
            iVar9 = 1;
          }
          if ((-1 < iVar9) && ((&DAT_00808af5)[iVar3] != '\0')) {
            pbVar7 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x1d5),iVar9);
            thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x68),(int)local_c,local_8,'\x06',pbVar7);
          }
        }
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                     *(uint *)(this_00 + 0x44));
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if ((DAT_00808a8f != '\0') &&
         (iVar3 = (*(int *)(this_00 + 0x1c9) + (local_10 & 0xff)) * 0x9c,
         (&DAT_00808af5)[iVar3] != '\0')) {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c3f90,
                  (byte)(&DAT_008087ea)[(uint)(byte)(&DAT_00808af4)[iVar3] * 0x51] + 0x41);
        ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x1dd),*(int *)(this_00 + 0x68),0,local_c,local_8,
                         piVar15[2],piVar15[3]);
        ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x1dd),&DAT_0080f33a,-1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        FUN_006b3640(DAT_008075a8,*(uint *)(this_00 + 0x60),0xffffffff,*(uint *)(this_00 + 0x3c),
                     *(uint *)(this_00 + 0x44));
        g_currentExceptionFrame = local_64.previous;
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
      pPVar11 = this_00 + 0x18;
      bVar10 = *(char *)(param_1 + 0x10) - 0x1f;
      local_10 = CONCAT31(local_10._1_3_,bVar10);
      iVar3 = *(int *)(this_00 + 0x1c9) + (uint)bVar10;
      (&DAT_00808af7)[iVar3 * 0x9c] = (&DAT_00808af7)[iVar3 * 0x9c] == '\0';
      *(undefined4 *)(this_00 + 0x28) = 5;
      FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + (uint)bVar10 * 4 + 0x1a1),
                   (undefined4 *)pPVar11);
      if (*(int *)(this_00 + 0x1c1) != 0) {
        *(undefined4 *)(this_00 + 0x28) = 0x25;
        FUN_006e6080(this_00,2,*(int *)(this_00 + 0x1c1),(undefined4 *)pPVar11);
        if (*(int *)(this_00 + 0x2c) != 4) {
          *(undefined4 *)(this_00 + 0x28) = 0x22;
          *(undefined2 *)(this_00 + 0x2c) = 4;
          FUN_006e6080(this_00,2,*(undefined4 *)(this_00 + 0x1c1),(undefined4 *)pPVar11);
          g_currentExceptionFrame = local_64.previous;
          return 0;
        }
      }
    }
  }
  else if (uVar4 == 0xbfff) {
    SetPanel((PlayPanelTy *)this_00,'\0');
    thunk_FUN_005252c0(0xae);
  }
  else if (uVar4 == 0xc000) {
    UVar18 = 0x274e;
    pCVar5 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    UPanelTy::PaintIBut((UPanelTy *)this_00,param_1,pCVar5,UVar18);
    g_currentExceptionFrame = local_64.previous;
    return 0;
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

