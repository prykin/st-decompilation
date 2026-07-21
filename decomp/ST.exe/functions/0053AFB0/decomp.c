#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::GetMessage */

undefined4 __thiscall PlayPanelTy::GetMessage(PlayPanelTy *this,int param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  PlayPanelTy *this_00;
  char cVar6;
  int iVar7;
  uint uVar8;
  LPSTR pCVar9;
  undefined4 uVar10;
  byte *pbVar11;
  int iVar12;
  byte bVar13;
  bool bVar14;
  int iVar15;
  char *text;
  int *piVar16;
  code *pcVar17;
  int iVar18;
  UINT UVar19;
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
  iVar7 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  this_00 = local_14;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar12 = ReportDebugMessage(s_E____titans_Andrey_playpan_cpp_007c7574,500,0,iVar7,&DAT_007a4ccc,
                                s_PlayPanelTy__GetMessage_007c76ac);
    if (iVar12 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Andrey_playpan_cpp_007c7574,500);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x10) == 2) {
    puVar1 = &local_14->field_004C;
    FUN_006b1a50((int)DAT_008075a8,3,(undefined4 *)0x0,puVar1);
    this_00->field_003C = *puVar1;
    this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
    this_00->field_0174 = this_00->field_0048 + this_00->field_0050;
  }
  PanelTy::GetMessage((PanelTy *)this_00,param_1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar8 = *(uint *)(param_1 + 0x10);
  if (uVar8 < 0xb20a) {
    if (uVar8 == 0xb209) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7 = *(int *)(*(int *)(param_1 + 0x14) + 0x10);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_10 = *(int *)(*(int *)(param_1 + 0x14) + 0xc) - this_00->field_003C;
      if (this_00->field_005C == 0) {
        iVar12 = this_00->field_0048;
      }
      else {
        iVar12 = -this_00->field_0044;
      }
      iVar18 = 1;
      piVar16 = (int *)0x0;
      uVar10 = thunk_FUN_0052a4d0(param_1);
      iVar15 = 1;
      pCVar9 = thunk_FUN_00571240(s_BUT_SWITCH_007c71d0,0);
      pCVar9 = FUN_006f2c00(pCVar9,iVar15,uVar10);
      local_c = cMf32::RecGet(DAT_00806790,1,pCVar9,piVar16,iVar18);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,local_10,iVar7 + iVar12,'\x01',
             (byte *)local_c);
      cMf32::RecMemFree(DAT_00806790,(uint *)&local_c);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (0x6200 < uVar8) {
      if (uVar8 == 0x6201) {
        text = s_BUT_SLUP_007c3e40;
      }
      else {
        if (uVar8 != 0x6202) {
          if (uVar8 != 0xb208) {
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          iVar7 = **(int **)(param_1 + 0x14);
          if (iVar7 == 1) {
            bVar13 = 0;
            /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
            local_8 = (uint)local_8._1_3_ << 8;
            if (DAT_00808aaf != 0) {
              do {
                uVar8 = local_8 & 0xff;
                bVar13 = bVar13 + 1;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_8 = CONCAT31(local_8._1_3_,bVar13);
                (&DAT_00808af7)[uVar8 * 0x9c] = 1;
              } while (bVar13 < DAT_00808aaf);
            }
            this_00->field_0028 = 5;
            piVar16 = &this_00->field_01A1;
            iVar7 = 8;
            do {
              if (*piVar16 != 0) {
                FUN_006e6080(this_00,2,*piVar16,(undefined4 *)&this_00->field_0x18);
              }
              piVar16 = piVar16 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (iVar7 == 2) {
            if (DAT_0080874d < 8) {
              bVar13 = 0;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_8 = (uint)local_8._1_3_ << 8;
              if (DAT_00808aaf != 0) {
                do {
                  iVar7 = (local_8 & 0xff) * 0x9c;
                  bVar3 = (&DAT_00808af4)[iVar7];
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_c = (ushort *)CONCAT31(local_c._1_3_,bVar3);
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == DAT_0080874d) {
LAB_0053b42f:
                      iVar12 = 0;
                    }
                    else {
                      uVar8 = (uint)DAT_0080874d;
                      bVar4 = g_playerRelationMatrix[bVar3][uVar8];
                      if ((bVar4 == 0) && (g_playerRelationMatrix[uVar8][bVar3] == 0)) {
                        iVar12 = -2;
                      }
                      else if ((bVar4 == 1) && (g_playerRelationMatrix[uVar8][bVar3] == 0)) {
                        iVar12 = -1;
                      }
                      else if ((bVar4 == 0) && (g_playerRelationMatrix[uVar8][bVar3] == 1)) {
                        iVar12 = 1;
                      }
                      else {
                        if ((bVar4 != 1) || (g_playerRelationMatrix[uVar8][bVar3] != 1))
                        goto LAB_0053b42f;
                        iVar12 = 2;
                      }
                    }
                    bVar14 = iVar12 < 0;
                  }
                  else {
                    bVar14 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                             (&DAT_008087ea)[(uint)bVar3 * 0x51];
                  }
                  (&DAT_00808af7)[iVar7] = bVar14;
                  bVar13 = bVar13 + 1;
                  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                  local_8 = CONCAT31(local_8._1_3_,bVar13);
                } while (bVar13 < DAT_00808aaf);
              }
            }
            this_00->field_0028 = 5;
            piVar16 = &this_00->field_01A1;
            iVar7 = 8;
            do {
              if (*piVar16 != 0) {
                FUN_006e6080(this_00,2,*piVar16,(undefined4 *)&this_00->field_0x18);
              }
              piVar16 = piVar16 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (iVar7 != 3) {
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (DAT_0080874d < 8) {
            bVar13 = 0;
            local_8 = local_8 & 0xffffff00;
            if (DAT_00808aaf != 0) {
              do {
                iVar7 = (local_8 & 0xff) * 0x9c;
                bVar3 = (&DAT_00808af4)[iVar7];
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_c = (ushort *)CONCAT31(local_c._1_3_,bVar3);
                if (DAT_00808a8f == '\0') {
                  if (bVar3 == DAT_0080874d) {
LAB_0053b2ea:
                    iVar12 = 0;
                  }
                  else {
                    uVar8 = (uint)DAT_0080874d;
                    bVar4 = g_playerRelationMatrix[bVar3][uVar8];
                    if ((bVar4 == 0) && (g_playerRelationMatrix[uVar8][bVar3] == 0)) {
                      iVar12 = -2;
                    }
                    else if ((bVar4 == 1) && (g_playerRelationMatrix[uVar8][bVar3] == 0)) {
                      iVar12 = -1;
                    }
                    else if ((bVar4 == 0) && (g_playerRelationMatrix[uVar8][bVar3] == 1)) {
                      iVar12 = 1;
                    }
                    else {
                      if ((bVar4 != 1) || (g_playerRelationMatrix[uVar8][bVar3] != 1))
                      goto LAB_0053b2ea;
                      iVar12 = 2;
                    }
                  }
                  bVar14 = iVar12 < 0;
                }
                else {
                  bVar14 = (&DAT_008087ea)[(uint)DAT_0080874d * 0x51] !=
                           (&DAT_008087ea)[(uint)bVar3 * 0x51];
                }
                bVar13 = bVar13 + 1;
                (&DAT_00808af7)[iVar7] = '\x01' - bVar14;
                /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
                local_8 = CONCAT31(local_8._1_3_,bVar13);
              } while (bVar13 < DAT_00808aaf);
            }
          }
          this_00->field_0028 = 5;
          piVar16 = &this_00->field_01A1;
          iVar7 = 8;
          do {
            if (*piVar16 != 0) {
              FUN_006e6080(this_00,2,*piVar16,(undefined4 *)&this_00->field_0x18);
            }
            piVar16 = piVar16 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
          g_currentExceptionFrame = local_64.previous;
          return 0;
        }
        text = s_BUT_SLDN_007c3e34;
      }
      pcVar17 = thunk_FUN_00529fe0;
      pCVar9 = thunk_FUN_00571240(text,0);
      UPanelTy::PaintBut((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)param_1,6,pCVar9,pcVar17
                        );
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (uVar8 == 0x6200) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      this_00->field_01C9 = *(undefined4 *)(param_1 + 0x14);
      PaintPlayPanel(this_00);
      this_00->field_0028 = 5;
      piVar16 = &this_00->field_01A1;
      iVar7 = 8;
      do {
        if (*piVar16 != 0) {
          FUN_006e6080(this_00,2,*piVar16,(undefined4 *)&this_00->field_0x18);
        }
        piVar16 = piVar16 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      this_00->field_0028 = 5;
      piVar16 = &this_00->field_0181;
      iVar7 = 8;
      do {
        if (*piVar16 != 0) {
          FUN_006e6080(this_00,2,*piVar16,(undefined4 *)&this_00->field_0x18);
        }
        piVar16 = piVar16 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (uVar8 == 0) {
      if (this_00->field_0172 == 3) {
        iVar7 = this_00->field_0050;
        if ((int)this_00->field_0044 < iVar7) {
          this_00->field_0044 = this_00->field_0044 + 0x1e;
        }
        if (iVar7 <= (int)this_00->field_0044) {
          this_00->field_0044 = iVar7;
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
        iVar7 = this_00->field_0050 - this_00->field_0048;
        if (iVar7 < (int)this_00->field_0044) {
          this_00->field_0044 = this_00->field_0044 + -0x1e;
        }
        if ((int)this_00->field_0044 <= iVar7) {
          this_00->field_0044 = iVar7;
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
      if (uVar8 == 2) {
        InitPlayPanel(this_00);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if (uVar8 == 3) {
        DonePlayPanel(this_00);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
    }
  }
  else if (uVar8 < 0xb537) {
    if (0xb52e < uVar8) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar7 = (*(int **)(param_1 + 0x18))[1];
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_10 = **(int **)(param_1 + 0x18) - this_00->field_003C;
      if (this_00->field_005C == 0) {
        iVar12 = this_00->field_0048;
      }
      else {
        iVar12 = -this_00->field_0044;
      }
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(short *)(param_1 + 0x14) == 0) {
        uVar8 = 1;
      }
      else {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        bVar13 = *(char *)(param_1 + 0x10) - 0x2f;
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_c = (ushort *)CONCAT31(local_c._1_3_,bVar13);
        uVar8 = (uint)((&DAT_00808af7)[(this_00->field_01C9 + (uint)bVar13) * 0x9c] == '\0');
      }
      pbVar11 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D9,uVar8
                                    );
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,local_10,iVar7 + iVar12,'\x01',
             pbVar11);
      Library::DKW::DDX::FUN_006b3640
                (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,this_00->field_0044
                );
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    switch(uVar8) {
    case 0xb4ff:
    case 0xb500:
    case 0xb501:
    case 0xb502:
    case 0xb503:
    case 0xb504:
    case 0xb505:
    case 0xb506:
      uVar8 = (uint)DAT_0080874d;
      if ((*(char *)((int)&DAT_008087c4 + uVar8 * 0x51 + 3) == '\0') && (DAT_0080874f == '\0')) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      if ((bVar14) && (DAT_00808783 != '\x01')) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar7 = (this_00->field_01C9 + (uint)(byte)(*(char *)(param_1 + 0x10) + 1)) * 0x9c;
        bVar13 = (&DAT_00808af4)[iVar7];
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_10 = CONCAT31(local_10._1_3_,bVar13);
        if ((DAT_00808a8f == '\0') &&
           (((((&DAT_00808af5)[iVar7] != '\0' && (DAT_0080874d != 0xff)) && (bVar13 != 0xff)) &&
            (DAT_0080874d != bVar13)))) {
          uVar5 = (uint)bVar13;
          local_1c = 0;
          local_18 = 0;
          if (*(char *)((int)&DAT_008087c4 + uVar5 * 0x51 + 3) == '\x01') {
            bVar13 = g_playerRelationMatrix[uVar8][uVar5];
            local_20 = 6;
            if ((bVar13 == 0) && (g_playerRelationMatrix[uVar5][uVar8] == 0)) {
              uVar10 = 0xfffffffe;
            }
            else if ((bVar13 == 1) && (g_playerRelationMatrix[uVar5][uVar8] == 0)) {
              uVar10 = 0xffffffff;
            }
            else if ((bVar13 == 0) && (g_playerRelationMatrix[uVar5][uVar8] == 1)) {
              uVar10 = 1;
            }
            else if ((bVar13 == 1) && (g_playerRelationMatrix[uVar5][uVar8] == 1)) {
              uVar10 = 2;
            }
            else {
              uVar10 = 0;
            }
            switch(uVar10) {
            case 1:
              local_1c = uVar5 << 0x10 | uVar8;
              local_18 = 0;
              break;
            case 2:
              local_1c = uVar8 << 0x10 | uVar5;
              local_18 = 0;
              break;
            case 0xfffffffe:
              local_1c = uVar8 << 0x10 | uVar5;
              local_18 = 1;
              break;
            case 0xffffffff:
              local_1c = uVar5 << 0x10 | uVar8;
              local_18 = 1;
            }
          }
          else {
            local_1c = uVar8 << 0x10 | uVar5;
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
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    case 0xb50f:
    case 0xb510:
    case 0xb511:
    case 0xb512:
    case 0xb513:
    case 0xb514:
    case 0xb515:
    case 0xb516:
      piVar16 = *(int **)(param_1 + 0x18);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = CONCAT31(local_10._1_3_,*(char *)(param_1 + 0x10) + -0xf);
      local_c = (ushort *)(*piVar16 - this_00->field_003C);
      if (this_00->field_005C == 0) {
        iVar7 = this_00->field_0048;
      }
      else {
        iVar7 = -this_00->field_0044;
      }
      local_8 = piVar16[1] + iVar7;
      if (DAT_0080874e == '\x03') {
        cVar6 = 's';
      }
      else {
        cVar6 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,0,(int)local_c,local_8,
                   piVar16[2],piVar16[3],cVar6);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(short *)(param_1 + 0x14) != 0) {
        iVar7 = (this_00->field_01C9 + (local_10 & 0xff)) * 0x9c;
        bVar13 = (&DAT_00808af4)[iVar7];
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_10 = CONCAT31(local_10._1_3_,bVar13);
        if (((DAT_0080874d != 0xff) && (bVar13 != 0xff)) && (DAT_0080874d != bVar13)) {
          iVar12 = -1;
          uVar8 = (uint)DAT_0080874d;
          bVar3 = g_playerRelationMatrix[uVar8][bVar13];
          if ((bVar3 == 0) && (g_playerRelationMatrix[bVar13][uVar8] == 0)) {
            uVar10 = 0xfffffffe;
          }
          else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar13][uVar8] == 0)) {
            uVar10 = 0xffffffff;
          }
          else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar13][uVar8] == 1)) {
            uVar10 = 1;
          }
          else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar13][uVar8] == 1)) {
            uVar10 = 2;
          }
          else {
            uVar10 = 0;
          }
          switch(uVar10) {
          case 1:
            iVar12 = 0;
            break;
          case 2:
            iVar12 = 2;
            break;
          case 0xfffffffe:
            iVar12 = 3;
            break;
          case 0xffffffff:
            iVar12 = 1;
          }
          if ((-1 < iVar12) && ((&DAT_00808af5)[iVar7] != '\0')) {
            pbVar11 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D5
                                           ,iVar12);
            DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0068,(int)local_c,local_8,'\x06',
                   pbVar11);
          }
        }
        Library::DKW::DDX::FUN_006b3640
                  (DAT_008075a8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if ((DAT_00808a8f != '\0') &&
         (iVar7 = (this_00->field_01C9 + (local_10 & 0xff)) * 0x9c, (&DAT_00808af5)[iVar7] != '\0'))
      {
        wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007c3f90,
                  (byte)(&DAT_008087ea)[(uint)(byte)(&DAT_00808af4)[iVar7] * 0x51] + 0x41);
        ccFntTy::SetSurf(this_00->field_01DD,(int)this_00->field_0068,0,(int)local_c,local_8,
                         piVar16[2],piVar16[3]);
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
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      bVar13 = *(char *)(param_1 + 0x10) - 0x1f;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      local_10 = CONCAT31(local_10._1_3_,bVar13);
      iVar7 = this_00->field_01C9 + (uint)bVar13;
      (&DAT_00808af7)[iVar7 * 0x9c] = (&DAT_00808af7)[iVar7 * 0x9c] == '\0';
      this_00->field_0028 = 5;
      FUN_006e6080(this_00,2,(&this_00->field_01A1)[bVar13],(undefined4 *)puVar2);
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
  else if (uVar8 == 0xbfff) {
    SetPanel(this_00,'\0');
    thunk_FUN_005252c0(0xae);
  }
  else if (uVar8 == 0xc000) {
    UVar19 = 0x274e;
    pCVar9 = thunk_FUN_00571240(s_BUT_MEDIUM_007c3894,0);
    UPanelTy::PaintIBut((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)param_1,pCVar9,UVar19);
    g_currentExceptionFrame = local_64.previous;
    return 0;
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

