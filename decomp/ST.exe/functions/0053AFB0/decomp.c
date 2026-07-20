
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::GetMessage */

undefined4 __thiscall PlayPanelTy::GetMessage(PlayPanelTy *this,int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  PlayPanelTy *this_00;
  char cVar4;
  int iVar5;
  uint uVar6;
  LPSTR pCVar7;
  undefined4 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  bool bVar13;
  int iVar14;
  char *text;
  int *piVar15;
  code *pcVar16;
  int iVar17;
  UINT UVar18;
  InternalExceptionFrame local_64;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  PlayPanelTy *local_14;
  uint local_10;
  ushort *local_c;
  uint local_8;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_14 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_14;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Andrey_playpan_cpp_007c7574,500,0,iVar5,&DAT_007a4ccc,
                                s_PlayPanelTy__GetMessage_007c76ac);
    if (iVar11 == 0) {
      RaiseInternalException(iVar5,0,s_E____titans_Andrey_playpan_cpp_007c7574,500);
      return 0xffff;
    }
    pcVar16 = (code *)swi(3);
    uVar8 = (*pcVar16)();
    return uVar8;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    puVar1 = &local_14->field_004C;
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,puVar1);
    this_00->field_003C = *puVar1;
    this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
    this_00->field_0174 = this_00->field_0048 + this_00->field_0050;
  }
  PanelTy::GetMessage((PanelTy *)this_00,param_1);
  uVar6 = *(uint *)(param_1 + 0x10);
  if (uVar6 < 0xb20a) {
    if (uVar6 == 0xb209) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
      local_10 = *(int *)(*(int *)(param_1 + 0x14) + 0xc) - this_00->field_003C;
      if (this_00->field_005C == 0) {
        iVar11 = this_00->field_0048;
      }
      else {
        iVar11 = -this_00->field_0044;
      }
      iVar17 = 1;
      piVar15 = (int *)0x0;
      uVar8 = thunk_FUN_0052a4d0(param_1);
      iVar14 = 1;
      pCVar7 = thunk_FUN_00571240(s_BUT_SWITCH_007c71d0,0);
      pCVar7 = FUN_006f2c00(pCVar7,iVar14,uVar8);
      local_c = cMf32::RecGet(DAT_00806790,1,pCVar7,piVar15,iVar17);
      DibPut((undefined4 *)this_00->field_0068,local_10,iVar5 + iVar11,'\x01',(byte *)local_c);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_c);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (0x6200 < uVar6) {
      if (uVar6 == 0x6201) {
        text = s_BUT_SLUP_007c3e40;
      }
      else {
        if (uVar6 != 0x6202) {
          if (uVar6 != 0xb208) {
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          iVar5 = **(int **)(param_1 + 0x14);
          if (iVar5 == 1) {
            bVar12 = 0;
            local_8 = (uint)local_8._1_3_ << 8;
            if (DAT_00808aaf != 0) {
              do {
                uVar6 = local_8 & 0xff;
                bVar12 = bVar12 + 1;
                local_8 = CONCAT31(local_8._1_3_,bVar12);
                (&DAT_00808af7)[uVar6 * 0x9c] = 1;
              } while (bVar12 < DAT_00808aaf);
            }
            this_00->field_0028 = 5;
            piVar15 = &this_00->field_01A1;
            iVar5 = 8;
            do {
              if (*piVar15 != 0) {
                FUN_006e6080(this_00,2,*piVar15,(undefined4 *)&this_00->field_0x18);
              }
              piVar15 = piVar15 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (iVar5 == 2) {
            if (DAT_0080874d < 8) {
              bVar12 = 0;
              local_8 = (uint)local_8._1_3_ << 8;
              if (DAT_00808aaf != 0) {
                do {
                  iVar5 = (local_8 & 0xff) * 0x9c;
                  bVar3 = (&DAT_00808af4)[iVar5];
                  local_c = (ushort *)CONCAT31(local_c._1_3_,bVar3);
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == DAT_0080874d) {
LAB_0053b42f:
                      iVar11 = 0;
                    }
                    else {
                      uVar6 = (uint)bVar3;
                      uVar10 = (uint)DAT_0080874d;
                      cVar4 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar10);
                      if ((cVar4 == '\0') &&
                         (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6) == '\0')) {
                        iVar11 = -2;
                      }
                      else if ((cVar4 == '\x01') &&
                              (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6) == '\0')) {
                        iVar11 = -1;
                      }
                      else if ((cVar4 == '\0') &&
                              (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6) == '\x01')) {
                        iVar11 = 1;
                      }
                      else {
                        if ((cVar4 != '\x01') ||
                           (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6) != '\x01'))
                        goto LAB_0053b42f;
                        iVar11 = 2;
                      }
                    }
                    bVar13 = iVar11 < 0;
                  }
                  else {
                    bVar13 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar3 * 0x51];
                  }
                  (&DAT_00808af7)[iVar5] = bVar13;
                  bVar12 = bVar12 + 1;
                  local_8 = CONCAT31(local_8._1_3_,bVar12);
                } while (bVar12 < DAT_00808aaf);
              }
            }
            this_00->field_0028 = 5;
            piVar15 = &this_00->field_01A1;
            iVar5 = 8;
            do {
              if (*piVar15 != 0) {
                FUN_006e6080(this_00,2,*piVar15,(undefined4 *)&this_00->field_0x18);
              }
              piVar15 = piVar15 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (iVar5 != 3) {
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (DAT_0080874d < 8) {
            bVar12 = 0;
            local_8 = local_8 & 0xffffff00;
            if (DAT_00808aaf != 0) {
              do {
                iVar5 = (local_8 & 0xff) * 0x9c;
                bVar3 = (&DAT_00808af4)[iVar5];
                local_c = (ushort *)CONCAT31(local_c._1_3_,bVar3);
                if (DAT_00808a8f == '\0') {
                  if (bVar3 == DAT_0080874d) {
LAB_0053b2ea:
                    iVar11 = 0;
                  }
                  else {
                    uVar6 = (uint)bVar3;
                    uVar10 = (uint)DAT_0080874d;
                    cVar4 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar10);
                    if ((cVar4 == '\0') &&
                       (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6) == '\0')) {
                      iVar11 = -2;
                    }
                    else if ((cVar4 == '\x01') &&
                            (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6) == '\0')) {
                      iVar11 = -1;
                    }
                    else if ((cVar4 == '\0') &&
                            (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6) == '\x01')) {
                      iVar11 = 1;
                    }
                    else {
                      if ((cVar4 != '\x01') ||
                         (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6) != '\x01'))
                      goto LAB_0053b2ea;
                      iVar11 = 2;
                    }
                  }
                  bVar13 = iVar11 < 0;
                }
                else {
                  bVar13 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar3 * 0x51];
                }
                bVar12 = bVar12 + 1;
                (&DAT_00808af7)[iVar5] = '\x01' - bVar13;
                local_8 = CONCAT31(local_8._1_3_,bVar12);
              } while (bVar12 < DAT_00808aaf);
            }
          }
          this_00->field_0028 = 5;
          piVar15 = &this_00->field_01A1;
          iVar5 = 8;
          do {
            if (*piVar15 != 0) {
              FUN_006e6080(this_00,2,*piVar15,(undefined4 *)&this_00->field_0x18);
            }
            piVar15 = piVar15 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          g_currentExceptionFrame = local_64.previous;
          return 0;
        }
        text = s_BUT_SLDN_007c3e34;
      }
      pcVar16 = thunk_FUN_00529fe0;
      pCVar7 = thunk_FUN_00571240(text,0);
      UPanelTy::PaintBut((UPanelTy *)this_00,param_1,6,pCVar7,pcVar16);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (uVar6 == 0x6200) {
      this_00->field_01C9 = *(undefined4 *)(param_1 + 0x14);
      PaintPlayPanel(this_00);
      this_00->field_0028 = 5;
      piVar15 = &this_00->field_01A1;
      iVar5 = 8;
      do {
        if (*piVar15 != 0) {
          FUN_006e6080(this_00,2,*piVar15,(undefined4 *)&this_00->field_0x18);
        }
        piVar15 = piVar15 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      this_00->field_0028 = 5;
      piVar15 = &this_00->field_0181;
      iVar5 = 8;
      do {
        if (*piVar15 != 0) {
          FUN_006e6080(this_00,2,*piVar15,(undefined4 *)&this_00->field_0x18);
        }
        piVar15 = piVar15 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (uVar6 == 0) {
      if (this_00->field_0172 == 3) {
        iVar5 = this_00->field_0050;
        if ((int)this_00->field_0044 < iVar5) {
          this_00->field_0044 = this_00->field_0044 + 0x1e;
        }
        if (iVar5 <= (int)this_00->field_0044) {
          this_00->field_0044 = iVar5;
          this_00->field_0172 = 1;
          ShiftControls(this_00,1);
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if (this_00->field_0172 == 4) {
        iVar5 = this_00->field_0050 - this_00->field_0048;
        if (iVar5 < (int)this_00->field_0044) {
          this_00->field_0044 = this_00->field_0044 + -0x1e;
        }
        if ((int)this_00->field_0044 <= iVar5) {
          this_00->field_0044 = iVar5;
          this_00->field_0172 = 2;
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
    }
    else {
      if (uVar6 == 2) {
        InitPlayPanel(this_00);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if (uVar6 == 3) {
        DonePlayPanel(this_00);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
    }
  }
  else if (uVar6 < 0xb537) {
    if (0xb52e < uVar6) {
      iVar5 = (*(int **)(param_1 + 0x18))[1];
      local_10 = **(int **)(param_1 + 0x18) - this_00->field_003C;
      if (this_00->field_005C == 0) {
        iVar11 = this_00->field_0048;
      }
      else {
        iVar11 = -this_00->field_0044;
      }
      if (*(short *)(param_1 + 0x14) == 0) {
        uVar6 = 1;
      }
      else {
        bVar12 = *(char *)(param_1 + 0x10) - 0x2f;
        local_c = (ushort *)CONCAT31(local_c._1_3_,bVar12);
        uVar6 = (uint)((&DAT_00808af7)[(this_00->field_01C9 + (uint)bVar12) * 0x9c] == '\0');
      }
      pbVar9 = (byte *)FUN_0070b3a0(this_00->field_01D9,uVar6);
      DibPut((undefined4 *)this_00->field_0068,local_10,iVar5 + iVar11,'\x01',pbVar9);
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,this_00->field_0044
                );
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    switch(uVar6) {
    case 0xb4ff:
    case 0xb500:
    case 0xb501:
    case 0xb502:
    case 0xb503:
    case 0xb504:
    case 0xb505:
    case 0xb506:
      uVar6 = (uint)DAT_0080874d;
      if ((*(char *)((int)&DAT_008087c4 + uVar6 * 0x51 + 3) == '\0') && (DAT_0080874f == '\0')) {
        bVar13 = true;
      }
      else {
        bVar13 = false;
      }
      if ((bVar13) && (DAT_00808783 != '\x01')) {
        iVar5 = (this_00->field_01C9 + (uint)(byte)(*(char *)(param_1 + 0x10) + 1)) * 0x9c;
        bVar12 = (&DAT_00808af4)[iVar5];
        local_10 = CONCAT31(local_10._1_3_,bVar12);
        if ((DAT_00808a8f == '\0') &&
           (((((&DAT_00808af5)[iVar5] != '\0' && (DAT_0080874d != 0xff)) && (bVar12 != 0xff)) &&
            (DAT_0080874d != bVar12)))) {
          uVar10 = (uint)bVar12;
          local_1c = 0;
          local_18 = 0;
          if (*(char *)((int)&DAT_008087c4 + uVar10 * 0x51 + 3) == '\x01') {
            cVar4 = *(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar10);
            local_20 = 6;
            if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6) == '\0')) {
              uVar8 = 0xfffffffe;
            }
            else if ((cVar4 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6) == '\0')) {
              uVar8 = 0xffffffff;
            }
            else if ((cVar4 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6) == '\x01')) {
              uVar8 = 1;
            }
            else if ((cVar4 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6) == '\x01')) {
              uVar8 = 2;
            }
            else {
              uVar8 = 0;
            }
            switch(uVar8) {
            case 1:
              local_1c = uVar10 << 0x10 | uVar6;
              local_18 = 0;
              break;
            case 2:
              local_1c = uVar6 << 0x10 | uVar10;
              local_18 = 0;
              break;
            case 0xfffffffe:
              local_1c = uVar6 << 0x10 | uVar10;
              local_18 = 1;
              break;
            case 0xffffffff:
              local_1c = uVar10 << 0x10 | uVar6;
              local_18 = 1;
            }
          }
          else {
            local_1c = uVar6 << 0x10 | uVar10;
            local_20 = 7;
          }
          if (PTR_00802a38 != (STPlaySystemC *)0x0) {
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
      local_c = (ushort *)(*piVar15 - this_00->field_003C);
      if (this_00->field_005C == 0) {
        iVar5 = this_00->field_0048;
      }
      else {
        iVar5 = -this_00->field_0044;
      }
      local_8 = piVar15[1] + iVar5;
      if (DAT_0080874e == '\x03') {
        cVar4 = 's';
      }
      else {
        cVar4 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      FUN_006b4170(this_00->field_0068,0,(int)local_c,local_8,piVar15[2],piVar15[3],cVar4);
      if (*(short *)(param_1 + 0x14) != 0) {
        iVar5 = (this_00->field_01C9 + (local_10 & 0xff)) * 0x9c;
        bVar12 = (&DAT_00808af4)[iVar5];
        local_10 = CONCAT31(local_10._1_3_,bVar12);
        if (((DAT_0080874d != 0xff) && (bVar12 != 0xff)) && (DAT_0080874d != bVar12)) {
          iVar11 = -1;
          uVar10 = (uint)DAT_0080874d;
          uVar6 = (uint)bVar12;
          cVar4 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar6);
          if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar10) == '\0')) {
            uVar8 = 0xfffffffe;
          }
          else if ((cVar4 == '\x01') && (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar10) == '\0')
                  ) {
            uVar8 = 0xffffffff;
          }
          else if ((cVar4 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar10) == '\x01')
                  ) {
            uVar8 = 1;
          }
          else if ((cVar4 == '\x01') &&
                  (*(char *)((int)&DAT_00808a4f + uVar6 * 8 + uVar10) == '\x01')) {
            uVar8 = 2;
          }
          else {
            uVar8 = 0;
          }
          switch(uVar8) {
          case 1:
            iVar11 = 0;
            break;
          case 2:
            iVar11 = 2;
            break;
          case 0xfffffffe:
            iVar11 = 3;
            break;
          case 0xffffffff:
            iVar11 = 1;
          }
          if ((-1 < iVar11) && ((&DAT_00808af5)[iVar5] != '\0')) {
            pbVar9 = (byte *)FUN_0070b3a0(this_00->field_01D5,iVar11);
            DibPut((undefined4 *)this_00->field_0068,(int)local_c,local_8,'\x06',pbVar9);
          }
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if ((DAT_00808a8f != '\0') &&
         (iVar5 = (this_00->field_01C9 + (local_10 & 0xff)) * 0x9c, (&DAT_00808af5)[iVar5] != '\0'))
      {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c3f90,
                  (byte)(&DAT_008087ea)[(uint)(byte)(&DAT_00808af4)[iVar5] * 0x51] + 0x41);
        ccFntTy::SetSurf(this_00->field_01DD,this_00->field_0068,0,(int)local_c,local_8,piVar15[2],
                         piVar15[3]);
        ccFntTy::WrStr(this_00->field_01DD,&DAT_0080f33a,-1,-1,(DAT_0080874e != '\x03') - 1 & 5);
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
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
      puVar2 = &this_00->field_0x18;
      bVar12 = *(char *)(param_1 + 0x10) - 0x1f;
      local_10 = CONCAT31(local_10._1_3_,bVar12);
      iVar5 = this_00->field_01C9 + (uint)bVar12;
      (&DAT_00808af7)[iVar5 * 0x9c] = (&DAT_00808af7)[iVar5 * 0x9c] == '\0';
      this_00->field_0028 = 5;
      FUN_006e6080(this_00,2,(&this_00->field_01A1)[bVar12],(undefined4 *)puVar2);
      if (this_00->field_01C1 != 0) {
        this_00->field_0028 = 0x25;
        FUN_006e6080(this_00,2,this_00->field_01C1,(undefined4 *)puVar2);
        if (*(int *)&this_00->field_0x2c != 4) {
          this_00->field_0028 = 0x22;
          *(undefined2 *)&this_00->field_0x2c = 4;
          FUN_006e6080(this_00,2,this_00->field_01C1,(undefined4 *)puVar2);
          g_currentExceptionFrame = local_64.previous;
          return 0;
        }
      }
    }
  }
  else if (uVar6 == 0xbfff) {
    SetPanel(this_00,'\0');
    thunk_FUN_005252c0(0xae);
  }
  else if (uVar6 == 0xc000) {
    UVar18 = 0x274e;
    pCVar7 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    UPanelTy::PaintIBut((UPanelTy *)this_00,param_1,pCVar7,UVar18);
    g_currentExceptionFrame = local_64.previous;
    return 0;
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

