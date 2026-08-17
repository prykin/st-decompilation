#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\playpan.cpp
   PlayPanelTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0053AFB0; family_names=PlayPanelTy::GetMessage; ret4=18;
   direct_offsets={10:7,14:5,18:8,1c:0} */

int __thiscall PlayPanelTy::GetMessage(PlayPanelTy *this,STMessage *message)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  STMessageId SVar5;
  uint uVar6;
  PlayPanelTy *this_00;
  int iVar7;
  int iVar8;
  uint uVar9;
  LPSTR pCVar10;
  undefined4 uVar11;
  BITMAPINFO *pBVar12;
  int iVar12;
  int iVar13;
  byte bVar14;
  bool bVar15;
  int iVar16;
  char *text;
  int *piVar17;
  code *pcVar18;
  int iVar19;
  UINT UVar20;
  InternalExceptionFrame local_64;
  uint local_20;
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
    iVar12 = ReportDebugMessage("E:\\__titans\\Andrey\\playpan.cpp",500,0,iVar7,"%s",
                                "PlayPanelTy::GetMessage");
    if (iVar12 == 0) {
      RaiseInternalException(iVar7,0,"E:\\__titans\\Andrey\\playpan.cpp",500);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (message->id == MESS_ID_CREATE) {
    puVar1 = &local_14->field_004C;
    FUN_006b1a50(g_ddxContext_008075A8,3,nullptr,puVar1);
    this_00->field_003C = *puVar1;
    this_00->field_0044 = this_00->field_0050 - this_00->field_0048;
    this_00->field_0174 = this_00->field_0048 + this_00->field_0050;
  }
  /* ST_CALLSITE[0053B023]: CALL 0x004017f8; direct=004017F8 PanelTy::GetMessage */
  PanelTy::GetMessage((PanelTy *)this_00,message);
  SVar5 = message->id;
  if (SVar5 < MESS_TRADEPANELTY_B20A) {
    if (SVar5 == MESS_PLAYPANELTY_B209) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar8 = *(int *)((message->arg0).u32 + 0x10);
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      local_10 = *(int *)((message->arg0).u32 + 0xc) - this_00->field_003C;
      if (this_00->field_005C == 0) {
        iVar13 = this_00->field_0048;
      }
      else {
        iVar13 = -this_00->field_0044;
      }
      iVar19 = 1;
      piVar17 = nullptr;
      uVar11 = thunk_FUN_0052a4d0((int)message);
      iVar16 = 1;
      pCVar10 = thunk_FUN_00571240("BUT_SWITCH",0);
      pCVar10 = FUN_006f2c00(pCVar10,iVar16,uVar11);
      local_c = cMf32::RecGet(g_cMf32_00806790,1,pCVar10,piVar17,iVar19);
      /* ST_CALLSITE[0053B5AA]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_10,iVar8 + iVar13,'\x01',
             (byte *)local_c);
      cMf32::RecMemFree(g_cMf32_00806790,(uint *)&local_c);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (MESS_SHARED_6200 < SVar5) {
      if (SVar5 == MESS_PLAYPANELTY_6201) {
        text = "BUT_SLUP";
      }
      else {
        if (SVar5 != MESS_PLAYPANELTY_6202) {
          if (SVar5 != MESS_MREPORTTY_B208) {
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          iVar8 = *(int *)(message->arg0).ptr;
          if (iVar8 == 1) {
            bVar14 = 0;
            local_8 = (uint)STPiece<1,3>(local_8) << 8;
            if (DAT_00808aaf != 0) {
              do {
                uVar9 = local_8 & 0xff;
                bVar14 = bVar14 + 1;
                local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar14));
                (&DAT_00808af7)[uVar9 * 0x9c] = 1;
              } while (bVar14 < DAT_00808aaf);
            }
            this_00->field_0028 = 5;
            piVar17 = &this_00->field_01A1;
            iVar8 = 8;
            do {
              if (*piVar17 != 0) {
                FUN_006e6080(this_00,2,*piVar17,(undefined4 *)&this_00->field_0x18);
              }
              piVar17 = piVar17 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (iVar8 == 2) {
            if (DAT_0080874d < 8) {
              bVar14 = 0;
              local_8 = (uint)STPiece<1,3>(local_8) << 8;
              if (DAT_00808aaf != 0) {
                do {
                  iVar8 = (local_8 & 0xff) * 0x9c;
                  bVar3 = (&DAT_00808af4)[iVar8];
                  local_c = (ushort *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar3));
                  if (DAT_00808a8f == '\0') {
                    if (bVar3 == DAT_0080874d) {
LAB_0053b42f:
                      iVar13 = 0;
                    }
                    else {
                      uVar9 = (uint)DAT_0080874d;
                      bVar4 = g_playerRelationMatrix[bVar3][uVar9];
                      if ((bVar4 == 0) && (g_playerRelationMatrix[uVar9][bVar3] == 0)) {
                        iVar13 = -2;
                      }
                      else if ((bVar4 == 1) && (g_playerRelationMatrix[uVar9][bVar3] == 0)) {
                        iVar13 = -1;
                      }
                      else if ((bVar4 == 0) && (g_playerRelationMatrix[uVar9][bVar3] == 1)) {
                        iVar13 = 1;
                      }
                      else {
                        if ((bVar4 != 1) || (g_playerRelationMatrix[uVar9][bVar3] != 1))
                        goto LAB_0053b42f;
                        iVar13 = 2;
                      }
                    }
                    bVar15 = iVar13 < 0;
                  }
                  else {
                    bVar15 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                             g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                  }
                  (&DAT_00808af7)[iVar8] = bVar15;
                  bVar14 = bVar14 + 1;
                  local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar14));
                } while (bVar14 < DAT_00808aaf);
              }
            }
            this_00->field_0028 = 5;
            piVar17 = &this_00->field_01A1;
            iVar8 = 8;
            do {
              if (*piVar17 != 0) {
                FUN_006e6080(this_00,2,*piVar17,(undefined4 *)&this_00->field_0x18);
              }
              piVar17 = piVar17 + 1;
              iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (iVar8 != 3) {
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
          if (DAT_0080874d < 8) {
            bVar14 = 0;
            local_8 = local_8 & 0xffffff00;
            if (DAT_00808aaf != 0) {
              do {
                iVar8 = (local_8 & 0xff) * 0x9c;
                bVar3 = (&DAT_00808af4)[iVar8];
                local_c = (ushort *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar3));
                if (DAT_00808a8f == '\0') {
                  if (bVar3 == DAT_0080874d) {
LAB_0053b2ea:
                    iVar13 = 0;
                  }
                  else {
                    uVar9 = (uint)DAT_0080874d;
                    bVar4 = g_playerRelationMatrix[bVar3][uVar9];
                    if ((bVar4 == 0) && (g_playerRelationMatrix[uVar9][bVar3] == 0)) {
                      iVar13 = -2;
                    }
                    else if ((bVar4 == 1) && (g_playerRelationMatrix[uVar9][bVar3] == 0)) {
                      iVar13 = -1;
                    }
                    else if ((bVar4 == 0) && (g_playerRelationMatrix[uVar9][bVar3] == 1)) {
                      iVar13 = 1;
                    }
                    else {
                      if ((bVar4 != 1) || (g_playerRelationMatrix[uVar9][bVar3] != 1))
                      goto LAB_0053b2ea;
                      iVar13 = 2;
                    }
                  }
                  bVar15 = iVar13 < 0;
                }
                else {
                  bVar15 = g_bulkInitializedRecords_008087C7[DAT_0080874d].field_0023 !=
                           g_bulkInitializedRecords_008087C7[bVar3].field_0023;
                }
                bVar14 = bVar14 + 1;
                (&DAT_00808af7)[iVar8] = '\x01' - bVar15;
                local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar14));
              } while (bVar14 < DAT_00808aaf);
            }
          }
          this_00->field_0028 = 5;
          piVar17 = &this_00->field_01A1;
          iVar8 = 8;
          do {
            if (*piVar17 != 0) {
              FUN_006e6080(this_00,2,*piVar17,(undefined4 *)&this_00->field_0x18);
            }
            piVar17 = piVar17 + 1;
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          g_currentExceptionFrame = local_64.previous;
          return 0;
        }
        text = "BUT_SLDN";
      }
      pcVar18 = thunk_FUN_00529fe0;
      pCVar10 = thunk_FUN_00571240(text,0);
      /* ST_CALLSITE[0053B51E]: CALL 0x00403495; direct=00403495 UPanelTy::PaintBut */
      UPanelTy::PaintBut((UPanelTy *)this_00,(AnonShape_0053D7A0_044B6141 *)message,6,pCVar10,
                         pcVar18);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (SVar5 == MESS_SHARED_6200) {
      this_00->field_01C9 = message->arg0;
      /* ST_CALLSITE[0053B15F]: CALL 0x00403242; direct=00403242 PlayPanelTy::PaintPlayPanel */
      PaintPlayPanel(this_00);
      this_00->field_0028 = 5;
      piVar17 = &this_00->field_01A1;
      iVar8 = 8;
      do {
        if (*piVar17 != 0) {
          FUN_006e6080(this_00,2,*piVar17,(undefined4 *)&this_00->field_0x18);
        }
        piVar17 = piVar17 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      this_00->field_0028 = 5;
      piVar17 = &this_00->field_0181;
      iVar8 = 8;
      do {
        if (*piVar17 != 0) {
          FUN_006e6080(this_00,2,*piVar17,(undefined4 *)&this_00->field_0x18);
        }
        piVar17 = piVar17 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    if (SVar5 == MESS_ID_NONE) {
      if (this_00->field_0172 == CASE_3) {
        iVar8 = this_00->field_0050;
        if (this_00->field_0044 < iVar8) {
          this_00->field_0044 = this_00->field_0044 + 0x1e;
        }
        if (iVar8 <= this_00->field_0044) {
          this_00->field_0044 = iVar8;
          this_00->field_0172 = CASE_1;
          /* ST_CALLSITE[0053B121]: CALL 0x004038be; direct=004038BE PlayPanelTy::ShiftControls */
          ShiftControls(this_00,1);
        }
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if (this_00->field_0172 == CASE_4) {
        iVar8 = this_00->field_0050 - this_00->field_0048;
        if (iVar8 < this_00->field_0044) {
          this_00->field_0044 = this_00->field_0044 + -0x1e;
        }
        if (this_00->field_0044 <= iVar8) {
          this_00->field_0044 = iVar8;
          this_00->field_0172 = CASE_2;
        }
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
    }
    else {
      if (SVar5 == MESS_ID_CREATE) {
        /* ST_CALLSITE[0053B07B]: CALL 0x00404962; direct=00404962 PlayPanelTy::InitPlayPanel */
        InitPlayPanel(this_00);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if (SVar5 == MESS_SHARED_0003) {
        /* ST_CALLSITE[0053B060]: CALL 0x00404296; direct=00404296 PlayPanelTy::DonePlayPanel */
        DonePlayPanel(this_00);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
    }
  }
  else if (SVar5 < 0xb537) {
    if (0xb52e < SVar5) {
      iVar8 = *(int *)((int)(message->arg1).ptr + 4);
      local_10 = *(int *)(message->arg1).ptr - this_00->field_003C;
      if (this_00->field_005C == 0) {
        iVar13 = this_00->field_0048;
      }
      else {
        iVar13 = -this_00->field_0044;
      }
      if ((message->arg0).words.low == 0) {
        uVar9 = 1;
      }
      else {
        bVar14 = (char)message->id - 0x2f;
        local_c = (ushort *)STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar14));
        uVar9 = (uint)((&DAT_00808af7)[(this_00->field_01C9 + (uint)bVar14) * 0x9c] == '\0');
      }
      pBVar12 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D9,uVar9);
      /* ST_CALLSITE[0053BB63]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,local_10,iVar8 + iVar13,'\x01',
             (byte *)pBVar12);
      Library::DKW::DDX::FUN_006b3640
                ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                 this_00->field_0044);
      g_currentExceptionFrame = local_64.previous;
      return 0;
    }
    switch(SVar5) {
    case MESS_SAMPANELTY_B4FF:
    case 0xb500:
    case 0xb501:
    case 0xb502:
    case 0xb503:
    case 0xb504:
    case 0xb505:
    case 0xb506:
      uVar9 = (uint)DAT_0080874d;
      if ((*(char *)(g_bulkInitializedRecords_008087C7 + uVar9) == '\0') && (DAT_0080874f == '\0'))
      {
        bVar15 = true;
      }
      else {
        bVar15 = false;
      }
      if ((bVar15) && (DAT_00808783 != '\x01')) {
        iVar8 = (this_00->field_01C9 + (uint)(byte)((char)message->id + 1)) * 0x9c;
        bVar14 = (&DAT_00808af4)[iVar8];
        local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar14));
        if ((DAT_00808a8f == '\0') &&
           (((((&DAT_00808af5)[iVar8] != '\0' && (DAT_0080874d != 0xff)) && (bVar14 != 0xff)) &&
            (DAT_0080874d != bVar14)))) {
          uVar6 = (uint)bVar14;
          local_1c = 0;
          local_18 = 0;
          if (*(char *)(g_bulkInitializedRecords_008087C7 + uVar6) == '\x01') {
            bVar14 = g_playerRelationMatrix[uVar9][uVar6];
            local_20 = 6;
            if ((bVar14 == 0) && (g_playerRelationMatrix[uVar6][uVar9] == 0)) {
              uVar11 = 0xfffffffe;
            }
            else if ((bVar14 == 1) && (g_playerRelationMatrix[uVar6][uVar9] == 0)) {
              uVar11 = 0xffffffff;
            }
            else if ((bVar14 == 0) && (g_playerRelationMatrix[uVar6][uVar9] == 1)) {
              uVar11 = 1;
            }
            else if ((bVar14 == 1) && (g_playerRelationMatrix[uVar6][uVar9] == 1)) {
              uVar11 = 2;
            }
            else {
              uVar11 = 0;
            }
            switch(uVar11) {
            case 1:
              local_1c = uVar6 << 0x10 | uVar9;
              local_18 = 0;
              break;
            case 2:
              local_1c = uVar9 << 0x10 | uVar6;
              local_18 = 0;
              break;
            case 0xfffffffe:
              local_1c = uVar9 << 0x10 | uVar6;
              local_18 = 1;
              break;
            case 0xffffffff:
              local_1c = uVar6 << 0x10 | uVar9;
              local_18 = 1;
            }
          }
          else {
            local_1c = uVar9 << 0x10 | uVar6;
            local_20 = 7;
          }
          if (g_playSystem_00802A38 != nullptr) {
            thunk_FUN_0054edf0((undefined4 *)0x5,&local_20,1,0xffffffff);
            g_currentExceptionFrame = local_64.previous;
            return 0;
          }
        }
      }
      break;
    case MESS_SAMPANELTY_B50F:
    case 0xb510:
    case 0xb511:
    case 0xb512:
    case 0xb513:
    case 0xb514:
    case 0xb515:
    case 0xb516:
      piVar17 = (message->arg1).ptr;
      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)((char)message->id - 0xf));
      local_c = (ushort *)(*piVar17 - this_00->field_003C);
      if (this_00->field_005C == 0) {
        iVar8 = this_00->field_0048;
      }
      else {
        iVar8 = -this_00->field_0044;
      }
      local_8 = piVar17[1] + iVar8;
      if (DAT_0080874e == '\x03') {
        bVar14 = 0x73;
      }
      else {
        bVar14 = (-(DAT_0080874e != '\x01') & 0x89U) + 0x3a;
      }
      FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0068,0,(int)local_c,local_8,
                   piVar17[2],piVar17[3],bVar14);
      if ((message->arg0).words.low != 0) {
        iVar8 = (this_00->field_01C9 + (local_10 & 0xff)) * 0x9c;
        bVar14 = (&DAT_00808af4)[iVar8];
        local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar14));
        if (((DAT_0080874d != 0xff) && (bVar14 != 0xff)) && (DAT_0080874d != bVar14)) {
          iVar13 = -1;
          uVar9 = (uint)DAT_0080874d;
          bVar3 = g_playerRelationMatrix[uVar9][bVar14];
          if ((bVar3 == 0) && (g_playerRelationMatrix[bVar14][uVar9] == 0)) {
            uVar11 = 0xfffffffe;
          }
          else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar14][uVar9] == 0)) {
            uVar11 = 0xffffffff;
          }
          else if ((bVar3 == 0) && (g_playerRelationMatrix[bVar14][uVar9] == 1)) {
            uVar11 = 1;
          }
          else if ((bVar3 == 1) && (g_playerRelationMatrix[bVar14][uVar9] == 1)) {
            uVar11 = 2;
          }
          else {
            uVar11 = 0;
          }
          switch(uVar11) {
          case 1:
            iVar13 = 0;
            break;
          case 2:
            iVar13 = 2;
            break;
          case 0xfffffffe:
            iVar13 = 3;
            break;
          case 0xffffffff:
            iVar13 = 1;
          }
          if ((-1 < iVar13) && ((&DAT_00808af5)[iVar8] != '\0')) {
            pBVar12 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_01D5,iVar13);
            /* ST_CALLSITE[0053B9E2]: CALL 0x00403229; direct=00403229 DibPut */
            DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0068,(int)local_c,local_8,'\x06',
                   (byte *)pBVar12);
          }
        }
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
                   this_00->field_0044);
        g_currentExceptionFrame = local_64.previous;
        return 0;
      }
      if ((DAT_00808a8f != '\0') &&
         (iVar8 = (this_00->field_01C9 + (local_10 & 0xff)) * 0x9c, (&DAT_00808af5)[iVar8] != '\0'))
      {
        /* ST_CALLSITE[0053BA72]: CALL dword ptr [0x0085bde8] */
        wsprintfA((LPSTR)&DAT_0080f33a,"%c",
                  g_bulkInitializedRecords_008087C7[(byte)(&DAT_00808af4)[iVar8]].field_0023 + 0x41);
        ccFntTy::SetSurf(this_00->field_01DD,(int)this_00->field_0068,0,(int)local_c,local_8,
                         piVar17[2],piVar17[3]);
        ccFntTy::WrStr(this_00->field_01DD,(char *)&DAT_0080f33a,-1,-1,
                       (DAT_0080874e != '\x03') - 1 & 5);
        Library::DKW::DDX::FUN_006b3640
                  ((int *)g_ddxContext_008075A8,this_00->field_0060,0xffffffff,this_00->field_003C,
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
    case MESS_PLAYPANELTY_B526:
      puVar2 = &this_00->field_0x18;
      bVar14 = (char)message->id - 0x1f;
      local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar14));
      iVar8 = this_00->field_01C9 + (uint)bVar14;
      (&DAT_00808af7)[iVar8 * 0x9c] = (&DAT_00808af7)[iVar8 * 0x9c] == '\0';
      this_00->field_0028 = 5;
      FUN_006e6080(this_00,2,(&this_00->field_01A1)[bVar14],(undefined4 *)puVar2);
      if (this_00->field_01C1 != 0) {
        this_00->field_0028 = 0x25;
        FUN_006e6080(this_00,2,this_00->field_01C1,(undefined4 *)puVar2);
        STPiece<0,2>(iVar8) = this_00->field_002C;
        STPiece<2,2>(iVar8) = this_00->field_002E;
        if (iVar8 != 4) {
          this_00->field_0028 = 0x22;
          this_00->field_002C = 4;
          FUN_006e6080(this_00,2,this_00->field_01C1,(undefined4 *)puVar2);
          g_currentExceptionFrame = local_64.previous;
          return 0;
        }
      }
    }
  }
  else if (SVar5 == MESS_SHARED_BFFF) {
    /* ST_CALLSITE[0053BBD7]: CALL 0x0040425f; direct=0040425F PlayPanelTy::SetPanel */
    SetPanel(this_00,'\0');
    thunk_FUN_005252c0(0xae);
  }
  else if (SVar5 == MESS_SHARED_C000) {
    UVar20 = 0x274e;
    pCVar10 = thunk_FUN_00571240("BUT_MEDIUM",0);
    /* ST_CALLSITE[0053BBBA]: CALL 0x00403508; direct=00403508 UPanelTy::PaintIBut */
    UPanelTy::PaintIBut((UPanelTy *)this_00,(AnonShape_0053DAF0_3BDC2979 *)message,pCVar10,UVar20);
    g_currentExceptionFrame = local_64.previous;
    return 0;
  }
  g_currentExceptionFrame = local_64.previous;
  return 0;
}

