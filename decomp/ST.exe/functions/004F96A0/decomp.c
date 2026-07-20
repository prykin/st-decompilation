
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PlayBrief */

void __thiscall CPanelTy::PlayBrief(CPanelTy *this,int param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  CPanelTy *pCVar3;
  int iVar4;
  uint *puVar5;
  cTypingTy *this_00;
  byte *pbVar6;
  char *pcVar7;
  cMf32 *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined1 *puVar12;
  byte bVar13;
  byte bVar14;
  short *psVar15;
  size_t _Count;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  char *local_c;
  uint *local_8;
  
  if ((DAT_0080c4f7 == 1) && (this->field_024B != 0)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_10 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar3 = local_10;
    if (iVar4 == 0) {
      iVar4 = local_10->field_024B;
      uVar10 = *(uint *)(iVar4 + 0xc);
      if ((uint)local_10->field_024F < uVar10) {
        do {
          if ((uint)pCVar3->field_024F < uVar10) {
            puVar12 = (undefined1 *)
                      (*(int *)(iVar4 + 8) * pCVar3->field_024F + *(int *)(iVar4 + 0x1c));
          }
          else {
            puVar12 = (undefined1 *)0x0;
          }
          if ((uint)(pCVar3->field_0253 - pCVar3->field_0257) < *(uint *)(puVar12 + 1)) {
            g_currentExceptionFrame = local_54.previous;
            return;
          }
          switch(*puVar12) {
          case 1:
            SoundClassTy::PlaySound_thunk
                      ((SoundClassTy *)&g_sound,SOUND_MODE_12,puVar12 + 9,*(int *)(puVar12 + 5),
                       (SoundPosition *)0x0,0);
            break;
          case 2:
            if ((int *)pCVar3->field_01D8 != (int *)0x0) {
              FUN_00714060((int *)pCVar3->field_01D8);
              Library::MSVCRT::FUN_0072e2b0((HoloTy *)pCVar3->field_01D8);
              pCVar3->field_01D8 = 0;
            }
            FUN_006b4170(pCVar3->field_01B4,0,100,5,0x226,0x55,0);
            local_8 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
            if (*(int *)(puVar12 + 10) < 1) {
              local_c = *(char **)(DAT_0080c4c7 + 8);
            }
            else {
              local_c = (char *)(*(int *)(puVar12 + 6) + *(int *)(puVar12 + 10));
            }
            iVar4 = *(int *)(puVar12 + 6);
            if (iVar4 < (int)local_c) {
              do {
                if (iVar4 < *(int *)(DAT_0080c4c7 + 8)) {
                  pcVar7 = *(char **)(*(int *)(DAT_0080c4c7 + 0x14) + iVar4 * 4);
                }
                else {
                  pcVar7 = (char *)0x0;
                }
                thunk_FUN_005411a0(local_8,pcVar7,&DAT_007c2260);
                iVar4 = iVar4 + 1;
              } while (iVar4 < (int)local_c);
            }
            puVar5 = ccFntTy::FormIndentSarr
                               (pCVar3->field_01D4,local_8,s________________007c21d8,
                                (uint *)&DAT_007c21ec,0x226,0,0xffffffff,(char *)0x0,1);
            if (local_8 != (uint *)0x0) {
              FUN_006b5570((byte *)local_8);
            }
            if (puVar5 == (uint *)0x0) {
              puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,1,1);
            }
            local_8 = puVar5;
            if (puVar12[5] == '\0') {
              pbVar6 = (byte *)ccFntTy::CreateSurf(pCVar3->field_01D4,pCVar3->field_01B4,0,100,5,
                                                   0x226,0x55,0);
              if (pbVar6 != (byte *)0x0) {
                ccFntTy::WrSarr(pCVar3->field_01D4,(int)local_8,0,-1,0,0,0);
                DibPut((undefined4 *)pCVar3->field_01B4,100,5,'\x01',pbVar6);
                ccFntTy::EraseSufr(pCVar3->field_01D4);
                if (puVar12[0xe] != '\0') {
                  thunk_FUN_005252c0(0x1e);
                }
              }
              FUN_006b5570((byte *)local_8);
            }
            else {
              ccFntTy::SetSurf(pCVar3->field_01D4,pCVar3->field_01B4,0,100,5,0x226,0x55);
              this_00 = (cTypingTy *)Library::MSVCRT::FUN_0072e530(0xb4);
              if (this_00 == (cTypingTy *)0x0) {
                this_00 = (cTypingTy *)0x0;
              }
              else {
                this_00->field_0058 = 0;
                this_00->field_0088 = 0;
              }
              pCVar3->field_01D8 = this_00;
              iVar4 = cTypingTy::TypingInitSarr
                                (this_00,(int)local_8,pCVar3->field_01D4,0,0,0,0x226,0x55,0,0,0,1,2,
                                 0xff);
              pCVar3->field_01DC = iVar4;
              pCVar3->field_01E0 = puVar12[0xe];
              FUN_006b5570((byte *)local_8);
            }
            break;
          case 3:
            puVar1 = &pCVar3->field_025B;
            if (pCVar3->field_025B != 0) {
              FUN_0070b600(puVar1);
            }
            if (DAT_0080731a == 0) {
              local_c = puVar12 + 10;
              if (puVar12[10] == '\0') {
                psVar15 = (short *)0x1;
                bVar13 = 0;
                bVar14 = 6;
                pcVar7 = (char *)thunk_FUN_005260b0(*(int *)(puVar12 + 5),puVar12[9],0);
                pcVar8 = DAT_00806790;
LAB_004f9a8a:
                psVar15 = Library::Ourlib::MFIMG::mfQmtLoad(pcVar8,pcVar7,bVar14,bVar13,psVar15);
                *puVar1 = psVar15;
              }
              else {
                psVar15 = Library::Ourlib::MFIMG::mfQmtLoad
                                    (g_cMf32_00806758,local_c,6,0,(short *)0x0);
                *puVar1 = psVar15;
                if (psVar15 == (short *)0x0) {
                  bVar14 = 6;
                  bVar13 = 0;
                  psVar15 = (short *)0x0;
                  pcVar8 = g_cMf32_00806798;
                  pcVar7 = local_c;
                  goto LAB_004f9a8a;
                }
              }
              if (*puVar1 == 0) {
                psVar15 = (short *)0x1;
                bVar14 = 0;
                bVar13 = 6;
                pcVar7 = (char *)thunk_FUN_005260b0(0,0,0);
                psVar15 = Library::Ourlib::MFIMG::mfQmtLoad
                                    (DAT_00806790,pcVar7,bVar13,bVar14,psVar15);
                *puVar1 = psVar15;
              }
              pCVar3->field_025F = 0;
              thunk_FUN_004f1950((int)pCVar3);
            }
            else {
              psVar15 = (short *)0x1;
              bVar14 = 0;
              bVar13 = 6;
              pcVar7 = (char *)thunk_FUN_005260b0(0,0,1);
              psVar15 = Library::Ourlib::MFIMG::mfQmtLoad(DAT_00806790,pcVar7,bVar13,bVar14,psVar15)
              ;
              *puVar1 = psVar15;
              pCVar3->field_0260 = 5;
              pCVar3->field_025F = 0;
              _Count = 0x1f;
              if (puVar12[10] == '\0') {
                pcVar7 = (char *)thunk_FUN_005260b0(*(int *)(puVar12 + 5),puVar12[9],0);
                Library::MSVCRT::_strncpy(&pCVar3->field_0x265,pcVar7,_Count);
                pCVar3->field_0285 = 1;
              }
              else {
                Library::MSVCRT::_strncpy(&pCVar3->field_0x265,puVar12 + 10,0x1f);
                pCVar3->field_0285 = 0;
              }
              pCVar3->field_0284 = 0;
              thunk_FUN_005252c0(0xb3);
            }
            break;
          case 4:
            pCVar3->field_0028 = 0x5dc6;
            *(undefined **)&pCVar3->field_0x2c = &DAT_0080c4d7;
            if (DAT_008117bc != (undefined4 *)0x0) {
              (**(code **)*DAT_008117bc)(&pCVar3->field_0x18);
            }
            pCVar3->field_0260 = 4;
            DAT_0080c4f7 = 4;
          }
          iVar4 = pCVar3->field_024B;
          uVar11 = pCVar3->field_024F + 1;
          pCVar3->field_024F = uVar11;
          uVar10 = *(uint *)(iVar4 + 0xc);
        } while (uVar11 < uVar10);
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x3b0,0,iVar4,&DAT_007a4ccc,
                               s_CPanelTy__PlayBrief_007c2248);
    if (iVar9 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel_cpp_007c1bd8,0x3b0);
  }
  return;
}

