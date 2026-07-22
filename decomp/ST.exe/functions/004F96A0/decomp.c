#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel.cpp
   CPanelTy::PlayBrief */

void __thiscall CPanelTy::PlayBrief(CPanelTy *this,int param_1)

{
  short **ppsVar1;
  code *pcVar2;
  CPanelTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  cTypingTy *this_01;
  byte *pbVar5;
  char *pcVar6;
  cMf32 *pcVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  byte bVar12;
  byte bVar13;
  short *psVar14;
  size_t _Count;
  InternalExceptionFrame local_54;
  CPanelTy *local_10;
  char *local_c;
  DArrayTy *local_8;

  if ((DAT_0080c4f7 == 1) && (this->field_024B != (DArrayTy *)0x0)) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_10 = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0);
    this_00 = local_10;
    if (iVar3 == 0) {
      pDVar4 = local_10->field_024B;
      uVar9 = pDVar4->count;
      if (local_10->field_024F < uVar9) {
        do {
          if (this_00->field_024F < uVar9) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(pDVar4, this_00->field_024F) (runtime stride) */
            puVar11 = (undefined1 *)(pDVar4->elementSize * this_00->field_024F + (int)pDVar4->data);
          }
          else {
            puVar11 = (undefined1 *)0x0;
          }
          if ((uint)(this_00->field_0253 - this_00->field_0257) < *(uint *)(puVar11 + 1)) {
            g_currentExceptionFrame = local_54.previous;
            return;
          }
          switch(*puVar11) {
          case 1:
            SoundClassTy::PlaySound_thunk
                      ((SoundClassTy *)&g_sound,SOUND_MODE_12,puVar11 + 9,*(int *)(puVar11 + 5),
                       (SoundPosition *)0x0,0);
            break;
          case 2:
            if ((int *)this_00->field_01D8 != (int *)0x0) {
              FUN_00714060((int *)this_00->field_01D8);
              Library::MSVCRT::FUN_0072e2b0((HoloTy *)this_00->field_01D8);
              this_00->field_01D8 = 0;
            }
            FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_01B4,0,100,5,0x226,0x55,0);
            local_8 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
            if (*(int *)(puVar11 + 10) < 1) {
              local_c = (char *)g_dArray_0080C4C7->elementSize;
            }
            else {
              local_c = (char *)(*(int *)(puVar11 + 6) + *(int *)(puVar11 + 10));
            }
            iVar3 = *(int *)(puVar11 + 6);
            if (iVar3 < (int)local_c) {
              do {
                if (iVar3 < (int)g_dArray_0080C4C7->elementSize) {
                  pcVar6 = *(char **)(g_dArray_0080C4C7->growCapacity + iVar3 * 4);
                }
                else {
                  pcVar6 = (char *)0x0;
                }
                thunk_FUN_005411a0(local_8,pcVar6,"@ %s");
                iVar3 = iVar3 + 1;
              } while (iVar3 < (int)local_c);
            }
            pDVar4 = (DArrayTy *)
                     ccFntTy::FormIndentSarr
                               (this_00->field_01D4,local_8," ,.;:!?/\\()[]{}",
                                (uint *)&DAT_007c21ec,0x226,0,0xffffffff,(char *)0x0,1);
            if (local_8 != (DArrayTy *)0x0) {
              FUN_006b5570(local_8);
            }
            if (pDVar4 == (DArrayTy *)0x0) {
              pDVar4 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,1,1);
            }
            local_8 = pDVar4;
            if (puVar11[5] == '\0') {
              pbVar5 = (byte *)ccFntTy::CreateSurf(this_00->field_01D4,(int)this_00->field_01B4,0,
                                                   100,5,0x226,0x55,0);
              if (pbVar5 != (byte *)0x0) {
                ccFntTy::WrSarr(this_00->field_01D4,(int)local_8,0,-1,0,0,0);
                DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_01B4,100,5,'\x01',pbVar5);
                ccFntTy::EraseSufr(this_00->field_01D4);
                if (puVar11[0xe] != '\0') {
                  thunk_FUN_005252c0(0x1e);
                }
              }
              FUN_006b5570(local_8);
            }
            else {
              ccFntTy::SetSurf(this_00->field_01D4,(int)this_00->field_01B4,0,100,5,0x226,0x55);
              this_01 = (cTypingTy *)Library::MSVCRT::FUN_0072e530(0xb4);
              if (this_01 == (cTypingTy *)0x0) {
                this_01 = (cTypingTy *)0x0;
              }
              else {
                this_01->field_0058 = 0;
                this_01->field_0088 = 0;
              }
              this_00->field_01D8 = this_01;
              iVar3 = cTypingTy::TypingInitSarr
                                (this_01,local_8,this_00->field_01D4,0,0,0,0x226,0x55,0,0,0,1,2,0xff
                                );
              this_00->field_01DC = iVar3;
              this_00->field_01E0 = puVar11[0xe];
              FUN_006b5570(local_8);
            }
            break;
          case 3:
            ppsVar1 = &this_00->field_025B;
            if (this_00->field_025B != (short *)0x0) {
              FUN_0070b600((int *)ppsVar1);
            }
            if (DAT_0080731a == 0) {
              local_c = puVar11 + 10;
              if (puVar11[10] == '\0') {
                psVar14 = (short *)0x1;
                bVar12 = 0;
                bVar13 = 6;
                pcVar6 = (char *)thunk_FUN_005260b0(*(int *)(puVar11 + 5),puVar11[9],0);
                pcVar7 = DAT_00806790;
LAB_004f9a8a:
                psVar14 = Library::Ourlib::MFIMG::mfQmtLoad(pcVar7,pcVar6,bVar13,bVar12,psVar14);
                *ppsVar1 = psVar14;
              }
              else {
                psVar14 = Library::Ourlib::MFIMG::mfQmtLoad
                                    (g_cMf32_00806758,local_c,6,0,(short *)0x0);
                *ppsVar1 = psVar14;
                if (psVar14 == (short *)0x0) {
                  bVar13 = 6;
                  bVar12 = 0;
                  psVar14 = (short *)0x0;
                  pcVar7 = g_cMf32_00806798;
                  pcVar6 = local_c;
                  goto LAB_004f9a8a;
                }
              }
              if (*ppsVar1 == (short *)0x0) {
                psVar14 = (short *)0x1;
                bVar13 = 0;
                bVar12 = 6;
                pcVar6 = (char *)thunk_FUN_005260b0(0,0,0);
                psVar14 = Library::Ourlib::MFIMG::mfQmtLoad
                                    (DAT_00806790,pcVar6,bVar12,bVar13,psVar14);
                *ppsVar1 = psVar14;
              }
              this_00->field_025F = 0;
              sub_004F1950(this_00);
            }
            else {
              psVar14 = (short *)0x1;
              bVar13 = 0;
              bVar12 = 6;
              pcVar6 = (char *)thunk_FUN_005260b0(0,0,1);
              psVar14 = Library::Ourlib::MFIMG::mfQmtLoad(DAT_00806790,pcVar6,bVar12,bVar13,psVar14)
              ;
              *ppsVar1 = psVar14;
              this_00->field_0260 = CASE_5;
              this_00->field_025F = 0;
              _Count = 0x1f;
              if (puVar11[10] == '\0') {
                pcVar6 = (char *)thunk_FUN_005260b0(*(int *)(puVar11 + 5),puVar11[9],0);
                Library::MSVCRT::_strncpy(&this_00->field_0x265,pcVar6,_Count);
                this_00->field_0285 = 1;
              }
              else {
                Library::MSVCRT::_strncpy(&this_00->field_0x265,puVar11 + 10,0x1f);
                this_00->field_0285 = 0;
              }
              this_00->field_0284 = 0;
              thunk_FUN_005252c0(0xb3);
            }
            break;
          case 4:
            this_00->field_0028 = 0x5dc6;
            *(undefined **)&this_00->field_0x2c = &DAT_0080c4d7;
            if (DAT_008117bc != (undefined4 *)0x0) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)*DAT_008117bc)(&this_00->field_0x18);
            }
            this_00->field_0260 = CASE_4;
            DAT_0080c4f7 = 4;
          }
          pDVar4 = this_00->field_024B;
          uVar10 = this_00->field_024F + 1;
          this_00->field_024F = uVar10;
          uVar9 = pDVar4->count;
        } while (uVar10 < uVar9);
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Andrey\\cpanel.cpp",0x3b0,0,iVar3,"%s",
                               "CPanelTy::PlayBrief");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\cpanel.cpp",0x3b0);
  }
  return;
}

