#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintMReport

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions

   [STTypeFamilyApplier] CONTEXTUAL_GENERATED_RECORD.
   Evidence: one script-owned pointer shape is used only by functions with one unique class-owner
   context; promote its stable machine layout to a generated owner-qualified record name */

void __thiscall MReportTy::PaintMReport(MReportTy *this,char param_1)

{
  ccFntTy *pcVar1;
  AnonPointee_MReportTy_0073 *pAVar2;
  MReportTy *this_00;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint *puVar9;
  int uVar11;
  undefined4 *puVar10;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined *puVar15;
  char cVar16;
  size_t _Count;
  code *pcVar18;
  char *pcVar19;
  char *pcVar20;
  bool bVar21;
  UINT UVar22;
  int iVar23;
  char local_898 [2100];
  InternalExceptionFrame local_64;
  MReportTy *local_20;
  undefined4 local_1c;
  RecoveredSourceFamily_dibcopy *local_18;
  char local_11;
  uint local_10;
  RecoveredRecord_MReportTy_005BD4B0 *local_c;
  UINT local_8;
  size_t sVar17;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar14 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x1b4,0,iVar5,"%s"
                                ,"MReportTy::PaintMReport");
    if (iVar14 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x1b4);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  this_00 = local_20;
  PutDDXClip(0,0,0,0,800,(byte *)0x3c,'\x01',(BITMAPINFO *)local_20->field_005D);
  if ((this_00->field_0457 == nullptr) && (param_1 == '\0')) {
    OutTGlProc((MReportTy *)g_dDXContext_0080759C,g_dDXContext_0080759C,0,0,0x1a,10,0x2e9,0x32,
               (int)this_00);
  }
  if (this_00->field_0453 != nullptr) {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  if (param_1 != '\0') {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  PutDDXClip(0x1a,0x46,0x1a,0x46,this_00->field_0073->field_0004,
             (byte *)this_00->field_0073->field_0008,'\x01',(BITMAPINFO *)this_00->field_005D);
  FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0073,0,0x2e,1,0x2ba,0x15c,0x4c);
  pcVar18 = wsprintfA_exref;
  if (this_00->field_0067 == '\0') {
    ccFntTy::SetSurf(this_00->field_0083,(int)this_00->field_0073,0,0x37,10,
                     this_00->field_0073->field_0004 + -0x41,0xf);
    uVar12 = 0;
    iVar14 = -1;
    iVar5 = -1;
    puVar9 = (uint *)LoadResourceString(0x2440,g_module_00807618);
    ccFntTy::WrStr(this_00->field_0083,puVar9,iVar5,iVar14,uVar12);
    goto LAB_005bf406;
  }
  bVar3 = this_00->field_0069;
  if (bVar3 == 0) {
    ccFntTy::SetSurf(this_00->field_0083,(int)this_00->field_0073,0,0x37,10,
                     this_00->field_0073->field_0004 + -0x41,0xf);
    uVar12 = 0;
    iVar14 = -1;
    iVar5 = -1;
    puVar9 = (uint *)LoadResourceString(0x2440,g_module_00807618);
    ccFntTy::WrStr(this_00->field_0083,puVar9,iVar5,iVar14,uVar12);
    local_18 = (RecoveredSourceFamily_dibcopy *)
               ccFntTy::CreateSurf(this_00->field_0083,(int)this_00->field_0073,0,0,0,0x136,0x22,0);
    if (local_18 != nullptr) {
      local_10 = local_10 & 0xffffff00;
      if (DAT_0080c83e != 0xffffffff) {
        do {
          uVar12 = local_10;
          bVar3 = DAT_0080c846;
          if ((char)local_10 != '\0') {
            bVar3 = (&DAT_0080c83e)[local_10 & 0xff];
          }
          local_8 = local_8 & 0xffffff00;
          if (DAT_00808aaf != 0) {
            do {
              UVar22 = local_8;
              iVar5 = (local_8 & 0xff) * 0x9c;
              if (((&DAT_00808af4)[iVar5] == bVar3) && ((&DAT_00808af5)[iVar5] != '\0')) {
                FUN_006b4170(local_18,0,0,0,local_18->field_0004,local_18->field_0008,0x4c);
                ccFntTy::WrStr(this_00->field_0083,&DAT_00808ab0 + (UVar22 & 0xff) * 0x27,0,-1,0);
                DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0073,0x38,
                       (uVar12 & 0xff) * 0x26 + 0x2c,'\x01',(byte *)local_18);
                break;
              }
              bVar4 = (char)local_8 + 1;
              local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
            } while (bVar4 < DAT_00808aaf);
          }
          bVar3 = (char)local_10 + 1;
          local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar3));
        } while ((uint)bVar3 < DAT_0080c83e + 1);
      }
      ccFntTy::EraseSufr(this_00->field_0083);
    }
    if (this_00->field_0068 == '\0') {
      iVar5 = 0;
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar5 == 0) {
            uVar12 = this_00->field_02A3;
            iVar23 = 0;
            iVar14 = DAT_0080c963;
          }
          else {
            uVar12 = this_00->field_02A3;
            iVar14 = (&DAT_0080c943)[iVar5];
            iVar23 = iVar5;
          }
          PaintMainScore(this_00,iVar14,uVar12,iVar23);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(DAT_0080c83e + 1));
      }
    }
    else {
      iVar14 = 0;
      memset(&this_00->field_0x2a7, 0, 0x20); /* compiler bulk-zero initialization */
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar14 == 0) {
            if (DAT_0080c963 == 0) {
              uVar12 = this_00->field_02A3;
              iVar5 = 0;
              goto LAB_005bf156;
            }
          }
          else if ((&DAT_0080c943)[iVar14] == 0) {
            uVar12 = this_00->field_02A3;
            iVar5 = iVar14;
LAB_005bf156:
            PaintMainScore(this_00,0,uVar12,iVar5);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < (int)(DAT_0080c83e + 1));
      }
    }
  }
  else {
    bVar4 = DAT_0080c846;
    if (bVar3 != 1) {
      bVar4 = *(byte *)((int)&DAT_0080c83a + bVar3 + 3);
    }
    local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar4));
    bVar3 = (&DAT_0080c999)[(uint)bVar4 * 0x51];
    local_10 = STReplaceLowByte((uint32_t)(local_10), (uint8_t)(bVar3));
    if (bVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = bVar3 - 1;
    }
    pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_007F,iVar5);
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0073,0x2e,1,'\x06',pbVar6);
    local_c = (RecoveredRecord_MReportTy_005BD4B0 *)
              ccFntTy::CreateSurf(this_00->field_0083,(int)this_00->field_0073,0,0x2f,2,0x2b7,0x1e,0
                                 );
    if (local_c != nullptr) {
      local_11 = '\x01';
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      DAT_0080f33a._0_1_ = 0;
      local_18 = (RecoveredSourceFamily_dibcopy *)((uint)local_18 & 0xffffff00);
      if (DAT_00808aaf != 0) {
        do {
          uVar12 = (uint)local_18 & 0xff;
          if ((&DAT_00808af4)[uVar12 * 0x9c] == (char)local_1c) {
            if (local_11 == '\0') {
              wsprintfA((LPSTR)&DAT_0080f33a,"%s, %s",&DAT_0080f33a,
                        &DAT_00808ab0 + uVar12 * 0x27);
            }
            else {
              wsprintfA((LPSTR)&DAT_0080f33a,"%s",&DAT_00808ab0 + uVar12 * 0x27);
              local_11 = '\0';
            }
            iVar5 = FUN_00711110(this_00->field_0083,(char *)&DAT_0080f33a);
            if (0x2a8 < iVar5) break;
          }
          bVar3 = (char)local_18 + 1;
          local_18 = (RecoveredSourceFamily_dibcopy *)STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar3));
        } while (bVar3 < DAT_00808aaf);
      }
      iVar5 = FUN_00711110(this_00->field_0083,(char *)&DAT_0080f33a);
      if (0x2a8 < iVar5) {
        uVar12 = 0xffffffff;
        pcVar8 = (char *)&DAT_0080f33a;
        do {
          pcVar20 = pcVar8;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar20 = pcVar8 + 1;
          cVar16 = *pcVar8;
          pcVar8 = pcVar20;
        } while (cVar16 != '\0');
        uVar12 = ~uVar12;
        pcVar8 = pcVar20 + -uVar12;
        pcVar20 = local_898;
        memmove(pcVar20, pcVar8, uVar12); /* compiler REP MOVS byte copy */
        uVar13 = 0;
        memset(&DAT_0080f33a, 0, 0x834); /* compiler bulk-zero initialization */
        uVar12 = 0xffffffff;
        pcVar1 = this_00->field_0083;
        pcVar8 = (char *)&DAT_0080f33a;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar16 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar16 != '\0');
        if (pcVar1->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar1);
        }
        _Count = (int)(0x2a8 / (longlong)
                               (this_00->field_0083->field_0058 + *(int *)&pcVar1->field_0x86)) - 1;
        do {
          sVar17 = _Count;
          _Count = sVar17 + 1;
          Library::MSVCRT::_strncpy((char *)&DAT_0080f33a,local_898,_Count);
          iVar5 = FUN_00711110(this_00->field_0083,(char *)&DAT_0080f33a);
          if (0x2a7 < iVar5) break;
        } while ((int)_Count < (int)(~uVar12 - 1));
        if (_Count != ~uVar12 - 1) {
          memset(&DAT_0080f33a, 0, 0x834); /* compiler bulk-zero initialization */
          Library::MSVCRT::_strncpy((char *)&DAT_0080f33a,local_898,sVar17 - 2);
          uVar12 = 0xffffffff;
          pcVar8 = &DAT_007c7274;
          do {
            pcVar20 = pcVar8;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar20 = pcVar8 + 1;
            cVar16 = *pcVar8;
            pcVar8 = pcVar20;
          } while (cVar16 != '\0');
          uVar12 = ~uVar12;
          iVar5 = -1;
          pcVar8 = (char *)&DAT_0080f33a;
          do {
            pcVar19 = pcVar8;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar19 = pcVar8 + 1;
            cVar16 = *pcVar8;
            pcVar8 = pcVar19;
          } while (cVar16 != '\0');
          pcVar8 = pcVar20 + -uVar12;
          pcVar20 = pcVar19 + -1;
          memmove(pcVar20, pcVar8, uVar12); /* compiler REP MOVS byte copy */
          uVar13 = 0;
        }
      }
      ccFntTy::WrStr(this_00->field_0083,&DAT_0080f33a,-1,-1,0);
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0073,0x2f,2,'\x01',(byte *)local_c);
      ccFntTy::EraseSufr(this_00->field_0083);
      pcVar18 = wsprintfA_exref;
    }
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8a7 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c937,0x69,0x6a);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8a9 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c939,0xfb,0x6a);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8ab + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c93b,0x18d,0x6a);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8ad + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c93d,0x225,0x6a);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8af + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c93f,0x69,0xcb);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8b1 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c941,0xfb,0xcb);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8b3 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar12,(uint)(ushort)DAT_0080c943,0x18d,0xcb);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8b5 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c943._2_2_,0x225,0xcb);
    bVar3 = this_00->field_0069;
    if ((char)local_10 == '\x03') {
      uVar7 = DAT_0080c8bb;
      if (bVar3 != 1) {
        uVar7 = *(undefined4 *)(&DAT_0080c82b + (uint)bVar3 * 0x10);
      }
      (*pcVar18)(&DAT_0080f33a,"%11d",uVar7);
      ccFntTy::SetSurf(this_00->field_008B,(int)this_00->field_0073,0,0x8c,0x11f,0x62,0x14);
      ccFntTy::WrStr(this_00->field_008B,&DAT_0080f33a,-1,-1,8);
      uVar7 = DAT_0080c8bf;
      if (this_00->field_0069 != 1) {
        uVar7 = *(undefined4 *)(&DAT_0080c82f + (uint)(byte)this_00->field_0069 * 0x10);
      }
      (*pcVar18)(&DAT_0080f33a,"%11d",uVar7);
      iVar5 = 0x12a;
    }
    else {
      uVar7 = DAT_0080c8b7;
      if (bVar3 != 1) {
        uVar7 = *(undefined4 *)(&DAT_0080c827 + (uint)bVar3 * 0x10);
      }
      (*pcVar18)(&DAT_0080f33a,"%7d",uVar7);
      ccFntTy::SetSurf(this_00->field_008B,(int)this_00->field_0073,0,0x75,0x11f,0x3e,0x14);
      ccFntTy::WrStr(this_00->field_008B,&DAT_0080f33a,-1,-1,8);
      uVar7 = DAT_0080c8bb;
      if (this_00->field_0069 != 1) {
        uVar7 = *(undefined4 *)(&DAT_0080c82b + (uint)(byte)this_00->field_0069 * 0x10);
      }
      (*pcVar18)(&DAT_0080f33a,"%11d",uVar7);
      ccFntTy::SetSurf(this_00->field_008B,(int)this_00->field_0073,0,0xcc,0x11f,0x62,0x14);
      ccFntTy::WrStr(this_00->field_008B,&DAT_0080f33a,-1,-1,8);
      uVar7 = DAT_0080c8bf;
      if (this_00->field_0069 != 1) {
        uVar7 = *(undefined4 *)(&DAT_0080c82f + (uint)(byte)this_00->field_0069 * 0x10);
      }
      (*pcVar18)(&DAT_0080f33a,"%11d",uVar7);
      iVar5 = 0x146;
    }
    ccFntTy::SetSurf(this_00->field_008B,(int)this_00->field_0073,0,iVar5,0x11f,0x62,0x14);
    ccFntTy::WrStr(this_00->field_008B,&DAT_0080f33a,-1,-1,8);
    iVar5 = DAT_0080c8c3;
    if (this_00->field_0069 != 1) {
      iVar5 = *(int *)(&DAT_0080c833 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    if ((char)local_1c == -1) {
      iVar14 = 0;
    }
    else {
      iVar14 = (-(uint)((char)local_10 != '\x03') & 0xfffffff9) + 0x14;
    }
    if (((-1 < iVar5) && (0 < iVar14)) && (iVar14 = (iVar5 * 0x26) / iVar14, 0 < iVar14)) {
      iVar5 = 0x1c7;
      do {
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0073,iVar5,0x121,'\x06',
               (byte *)this_00->field_006F);
        iVar5 = iVar5 + 6;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
    if ((char)local_10 != '\0') {
      uVar12 = local_10 & 0xff;
      if (uVar12 == 1) {
        local_8 = 0x23f1;
      }
      else if (uVar12 == 2) {
        local_8 = 0x23f0;
      }
      else if (uVar12 == 3) {
        local_8 = 0x23f2;
      }
      pcVar8 = LoadResourceString(local_8,g_module_00807618);
      uVar12 = 0xffffffff;
      do {
        pcVar20 = pcVar8;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar20 = pcVar8 + 1;
        cVar16 = *pcVar8;
        pcVar8 = pcVar20;
      } while (cVar16 != '\0');
      uVar12 = ~uVar12;
      pcVar8 = pcVar20 + -uVar12;
      pcVar20 = (char *)&DAT_0080f33a;
      memmove(pcVar20, pcVar8, uVar12); /* compiler REP MOVS byte copy */
      uVar13 = 0;
      for (puVar9 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar9 != nullptr;
          puVar9 = Library::MSVCRT::FUN_0072e560(puVar9,'\n')) {
        *(undefined1 *)puVar9 = 0x20;
      }
      ccFntTy::SetSurf(this_00->field_0083,(int)this_00->field_0073,0,0x37,0x145,400,0xf);
      ccFntTy::WrStr(this_00->field_0083,&DAT_0080f33a,0,-1,0);
    }
    ccFntTy::SetSurf(this_00->field_0083,(int)this_00->field_0073,0,500,0x145,0xe6,0xf);
    bVar3 = this_00->field_0069;
    if (bVar3 == 1) {
      UVar22 = 0x2441;
    }
    else {
      if (DAT_0080cc40 == '\0') {
        bVar3 = *(byte *)((int)&DAT_0080c83a + bVar3 + 3);
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        if (DAT_00808a8f == '\0') {
          if (DAT_0080c846 == bVar3) {
LAB_005bef47:
            iVar5 = 0;
          }
          else {
            uVar12 = (uint)DAT_0080c846;
            bVar4 = g_playerRelationMatrix[uVar12][bVar3];
            if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][uVar12] == 0)) {
              iVar5 = -2;
            }
            else if ((bVar4 == 1) && (g_playerRelationMatrix[bVar3][uVar12] == 0)) {
              iVar5 = -1;
            }
            else if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][uVar12] == 1)) {
              iVar5 = 1;
            }
            else {
              if ((bVar4 != 1) || (g_playerRelationMatrix[bVar3][uVar12] != 1)) goto LAB_005bef47;
              iVar5 = 2;
            }
          }
          bVar21 = iVar5 < 0;
        }
        else {
          bVar21 = g_bulkInitializedRecords_008087C7[bVar3].field_0023 !=
                   g_bulkInitializedRecords_008087C7[DAT_0080c846].field_0023;
        }
        if (bVar21) goto LAB_005bef67;
      }
      else if ((&DAT_0080c99b)[(uint)DAT_0080c846 * 0x51] !=
               (&DAT_0080c99b)[(uint)*(byte *)((int)&DAT_0080c83a + bVar3 + 3) * 0x51]) {
LAB_005bef67:
        UVar22 = 0x2442;
        goto LAB_005bef6c;
      }
      UVar22 = 0x2443;
    }
LAB_005bef6c:
    uVar12 = 2;
    iVar14 = -1;
    iVar5 = -3;
    puVar9 = (uint *)LoadResourceString(UVar22,g_module_00807618);
    ccFntTy::WrStr(this_00->field_0083,puVar9,iVar5,iVar14,uVar12);
  }
  iVar5 = 1;
  puVar10 = (undefined4 *)(this_00->field_005D + 0x28);
  uVar11 = FUN_006b4fe0(this_00->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = (RecoveredRecord_MReportTy_005BD4B0 *)
            FUN_006b50c0(400,0x32,(uint)*(ushort *)(this_00->field_005D + 0xe),uVar11,puVar10,iVar5);
  uVar12 = local_c->field_0014;
  if (uVar12 == 0) {
    uVar12 = ((uint)local_c->field_000E * local_c->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
             local_c->field_0008;
  }
  puVar10 = (undefined4 *)FUN_006b4fa0((int *)local_c);
  for (uVar13 = uVar12 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
    *puVar10 = 0x4c4c4c4c;
    puVar10 = puVar10 + 1;
  }
  for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined1 *)puVar10 = 0x4c;
    puVar10 = (undefined4 *)((int)puVar10 + 1);
  }
  FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)local_c,0,2,2,local_c->field_0004 + -4,
               local_c->field_0008 + -4,0x18,0xd);
  ccFntTy::SetSurf(this_00->field_0083,(int)local_c,0,5,5,local_c->field_0004 + -0x69,
                   local_c->field_0008 + -10);
  uVar12 = 0;
  iVar14 = -1;
  iVar5 = -1;
  puVar9 = (uint *)LoadResourceString(0x2444,g_module_00807618);
  ccFntTy::WrStr(this_00->field_0083,puVar9,iVar5,iVar14,uVar12);
  FUN_006b4170((RecoveredSourceFamily_dibcopy *)local_c,0,local_c->field_0004 + -0x69,
               (local_c->field_0008 + -0x1c) / 2,0x50,0x1c,0);
  FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)local_c,0,local_c->field_0004 + -0x69,
               (local_c->field_0008 + -0x1c) / 2,0x50,0x1c,0x18,0xd);
  cVar16 = (char)(DAT_0080c83a / 0xe10);
  local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(cVar16));
  if (cVar16 == '\0') {
    puVar15 = &DAT_007c2198;
    pcVar8 = "%s;";
  }
  else {
    puVar15 = (undefined *)(DAT_0080c83a / 0xe10 & 0xff);
    pcVar8 = "%2d:";
  }
  wsprintfA((LPSTR)&DAT_0080f33a,pcVar8,puVar15);
  wsprintfA((LPSTR)&DAT_0080f33a,"%s%02d:%02d",&DAT_0080f33a,
            (int)(((ulonglong)DAT_0080c83a % 0xe10) / 0x3c),
            (int)(((ulonglong)DAT_0080c83a % 0xe10) % 0x3c));
  ccFntTy::SetSurf(this_00->field_008B,(int)local_c,0,local_c->field_0004 + -0x69,
                   (local_c->field_0008 + -0x1c) / 2,0x50,0x1c);
  ccFntTy::WrStr(this_00->field_008B,&DAT_0080f33a,-1,-1,8);
  Library::DKW::DDX::FUN_006c5000
            (g_dDXContext_0080759C,0x174,0x1a9,(int)local_c,0,0,0,local_c->field_0004,
             local_c->field_0008,(int)&this_00->field_0xa3,0x4c);
  FreeAndNull(&local_c);
LAB_005bf406:
  pAVar2 = this_00->field_0073;
  Library::DKW::DDX::FUN_006b48e0
            ((int)g_dDXContext_0080759C,0x1a,0x46,pAVar2,0,0,0,pAVar2->field_0004,pAVar2->field_0008
             ,(int)&this_00->field_0xa3,0x4c,0x10000ff);
  g_currentExceptionFrame = local_64.previous;
  return;
}

