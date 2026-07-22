#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintMReport

   [STTypeFamilyApplier] EXACT_ANONYMOUS_LAYOUT.
   Evidence: exact anonymous structure fingerprint shared across functions */

void __thiscall MReportTy::PaintMReport(MReportTy *this,char param_1)

{
  ccFntTy *pcVar1;
  AnonPointee_MReportTy_0073 *pAVar2;
  MReportTy *this_00;
  byte bVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined *puVar13;
  char cVar14;
  size_t _Count;
  code *pcVar16;
  char *pcVar17;
  char *pcVar18;
  bool bVar19;
  UINT UVar20;
  int iVar21;
  undefined4 uVar22;
  char local_898 [2100];
  InternalExceptionFrame local_64;
  MReportTy *local_20;
  undefined4 local_1c;
  AnonShape_006B5B10_E0D06CF1 *local_18;
  char local_11;
  uint local_10;
  AnonShape_005BD4B0_63635D6D *local_c;
  UINT local_8;
  size_t sVar15;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar12 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x1b4,0,iVar5,"%s"
                                ,"MReportTy::PaintMReport");
    if (iVar12 == 0) {
      RaiseInternalException(iVar5,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x1b4);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  FUN_006b5f80((int *)PTR_008075a8,0,0,g_nWidth_00806730,DAT_00806734);
  this_00 = local_20;
  PutDDXClip(0,0,0,0,800,(byte *)0x3c,'\x01',(BITMAPINFO *)local_20->field_005D);
  if ((this_00->field_0457 == (HoloTy *)0x0) && (param_1 == '\0')) {
    OutTGlProc(DAT_0080759c,(int)DAT_0080759c,0,0,0x1a,10,0x2e9,0x32,(int)this_00);
  }
  if (this_00->field_0453 != (HoloTy *)0x0) {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  if (param_1 != '\0') {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  PutDDXClip(0x1a,0x46,0x1a,0x46,this_00->field_0073->field_0004,
             (byte *)this_00->field_0073->field_0008,'\x01',(BITMAPINFO *)this_00->field_005D);
  FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0073,0,0x2e,1,0x2ba,0x15c,0x4c);
  pcVar16 = wsprintfA_exref;
  if (this_00->field_0067 == '\0') {
    ccFntTy::SetSurf(this_00->field_0083,(int)this_00->field_0073,0,0x37,10,
                     this_00->field_0073->field_0004 + -0x41,0xf);
    uVar22 = 0;
    iVar12 = -1;
    iVar5 = -1;
    puVar8 = (uint *)LoadResourceString(0x2440,g_module_00807618);
    ccFntTy::WrStr(this_00->field_0083,puVar8,iVar5,iVar12,uVar22);
    goto LAB_005bf406;
  }
  bVar3 = this_00->field_0069;
  if (bVar3 == 0) {
    ccFntTy::SetSurf(this_00->field_0083,(int)this_00->field_0073,0,0x37,10,
                     this_00->field_0073->field_0004 + -0x41,0xf);
    uVar22 = 0;
    iVar12 = -1;
    iVar5 = -1;
    puVar8 = (uint *)LoadResourceString(0x2440,g_module_00807618);
    ccFntTy::WrStr(this_00->field_0083,puVar8,iVar5,iVar12,uVar22);
    local_18 = (AnonShape_006B5B10_E0D06CF1 *)
               ccFntTy::CreateSurf(this_00->field_0083,(int)this_00->field_0073,0,0,0,0x136,0x22,0);
    if (local_18 != (AnonShape_006B5B10_E0D06CF1 *)0x0) {
      local_10 = local_10 & 0xffffff00;
      if (DAT_0080c83e != 0xffffffff) {
        do {
          uVar10 = local_10;
          bVar3 = DAT_0080c846;
          if ((char)local_10 != '\0') {
            bVar3 = (&DAT_0080c83e)[local_10 & 0xff];
          }
          local_8 = local_8 & 0xffffff00;
          if (DAT_00808aaf != 0) {
            do {
              UVar20 = local_8;
              iVar5 = (local_8 & 0xff) * 0x9c;
              if (((&DAT_00808af4)[iVar5] == bVar3) && ((&DAT_00808af5)[iVar5] != '\0')) {
                FUN_006b4170(local_18,0,0,0,local_18->field_0004,local_18->field_0008,0x4c);
                ccFntTy::WrStr(this_00->field_0083,&DAT_00808ab0 + (UVar20 & 0xff) * 0x27,0,-1,0);
                DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0073,0x38,
                       (uVar10 & 0xff) * 0x26 + 0x2c,'\x01',(byte *)local_18);
                break;
              }
              bVar4 = (char)local_8 + 1;
              /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
              local_8 = CONCAT31(local_8._1_3_,bVar4);
            } while (bVar4 < DAT_00808aaf);
          }
          bVar3 = (char)local_10 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_10 = CONCAT31(local_10._1_3_,bVar3);
        } while ((uint)bVar3 < DAT_0080c83e + 1);
      }
      ccFntTy::EraseSufr(this_00->field_0083);
    }
    if (this_00->field_0068 == '\0') {
      iVar5 = 0;
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar5 == 0) {
            uVar10 = this_00->field_02A3;
            iVar21 = 0;
            iVar12 = DAT_0080c963;
          }
          else {
            uVar10 = this_00->field_02A3;
            iVar12 = (&DAT_0080c943)[iVar5];
            iVar21 = iVar5;
          }
          PaintMainScore(this_00,iVar12,uVar10,iVar21);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(DAT_0080c83e + 1));
      }
    }
    else {
      iVar12 = 0;
      memset(&this_00->field_0x2a7, 0, 0x20); /* compiler bulk-zero initialization */
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar12 == 0) {
            if (DAT_0080c963 == 0) {
              uVar10 = this_00->field_02A3;
              iVar5 = 0;
              goto LAB_005bf156;
            }
          }
          else if ((&DAT_0080c943)[iVar12] == 0) {
            uVar10 = this_00->field_02A3;
            iVar5 = iVar12;
LAB_005bf156:
            PaintMainScore(this_00,0,uVar10,iVar5);
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)(DAT_0080c83e + 1));
      }
    }
  }
  else {
    bVar4 = DAT_0080c846;
    if (bVar3 != 1) {
      bVar4 = *(byte *)((int)&DAT_0080c83a + bVar3 + 3);
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_1c = CONCAT31(local_1c._1_3_,bVar4);
    bVar3 = (&DAT_0080c999)[(uint)bVar4 * 0x51];
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    local_10 = CONCAT31(local_10._1_3_,bVar3);
    if (bVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = bVar3 - 1;
    }
    pbVar6 = (byte *)FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_007F,iVar5);
    DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0073,0x2e,1,'\x06',pbVar6);
    local_c = (AnonShape_005BD4B0_63635D6D *)
              ccFntTy::CreateSurf(this_00->field_0083,(int)this_00->field_0073,0,0x2f,2,0x2b7,0x1e,0
                                 );
    if (local_c != (AnonShape_005BD4B0_63635D6D *)0x0) {
      local_11 = '\x01';
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      DAT_0080f33a._0_1_ = 0;
      local_18 = (AnonShape_006B5B10_E0D06CF1 *)((uint)local_18 & 0xffffff00);
      if (DAT_00808aaf != 0) {
        do {
          uVar10 = (uint)local_18 & 0xff;
          if ((&DAT_00808af4)[uVar10 * 0x9c] == (char)local_1c) {
            if (local_11 == '\0') {
              wsprintfA((LPSTR)&DAT_0080f33a,"%s, %s",&DAT_0080f33a,
                        &DAT_00808ab0 + uVar10 * 0x27);
            }
            else {
              wsprintfA((LPSTR)&DAT_0080f33a,"%s",&DAT_00808ab0 + uVar10 * 0x27);
              local_11 = '\0';
            }
            iVar5 = FUN_00711110(this_00->field_0083,(char *)&DAT_0080f33a);
            if (0x2a8 < iVar5) break;
          }
          bVar3 = (char)local_18 + 1;
          /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
          local_18 = (AnonShape_006B5B10_E0D06CF1 *)CONCAT31(local_18._1_3_,bVar3);
        } while (bVar3 < DAT_00808aaf);
      }
      iVar5 = FUN_00711110(this_00->field_0083,(char *)&DAT_0080f33a);
      if (0x2a8 < iVar5) {
        uVar10 = 0xffffffff;
        pcVar7 = (char *)&DAT_0080f33a;
        do {
          pcVar18 = pcVar7;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar18 = pcVar7 + 1;
          cVar14 = *pcVar7;
          pcVar7 = pcVar18;
        } while (cVar14 != '\0');
        uVar10 = ~uVar10;
        pcVar7 = pcVar18 + -uVar10;
        pcVar18 = local_898;
        for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
          *(undefined4 *)pcVar18 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pcVar18 = pcVar18 + 4;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *pcVar18 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar18 = pcVar18 + 1;
        }
        memset(&DAT_0080f33a, 0, 0x834); /* compiler bulk-zero initialization */
        uVar10 = 0xffffffff;
        pcVar1 = this_00->field_0083;
        pcVar7 = (char *)&DAT_0080f33a;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          cVar14 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar14 != '\0');
        if (pcVar1->field_00A0 != 0) {
          FUN_00710790((uint *)pcVar1);
        }
        _Count = (int)(0x2a8 / (longlong)
                               (this_00->field_0083->field_0058 + *(int *)&pcVar1->field_0x86)) - 1;
        do {
          sVar15 = _Count;
          _Count = sVar15 + 1;
          Library::MSVCRT::_strncpy((char *)&DAT_0080f33a,local_898,_Count);
          iVar5 = FUN_00711110(this_00->field_0083,(char *)&DAT_0080f33a);
          if (0x2a7 < iVar5) break;
        } while ((int)_Count < (int)(~uVar10 - 1));
        if (_Count != ~uVar10 - 1) {
          memset(&DAT_0080f33a, 0, 0x834); /* compiler bulk-zero initialization */
          Library::MSVCRT::_strncpy((char *)&DAT_0080f33a,local_898,sVar15 - 2);
          uVar10 = 0xffffffff;
          pcVar7 = &DAT_007c7274;
          do {
            pcVar18 = pcVar7;
            if (uVar10 == 0) break;
            uVar10 = uVar10 - 1;
            pcVar18 = pcVar7 + 1;
            cVar14 = *pcVar7;
            pcVar7 = pcVar18;
          } while (cVar14 != '\0');
          uVar10 = ~uVar10;
          iVar5 = -1;
          pcVar7 = (char *)&DAT_0080f33a;
          do {
            pcVar17 = pcVar7;
            if (iVar5 == 0) break;
            iVar5 = iVar5 + -1;
            pcVar17 = pcVar7 + 1;
            cVar14 = *pcVar7;
            pcVar7 = pcVar17;
          } while (cVar14 != '\0');
          pcVar7 = pcVar18 + -uVar10;
          pcVar18 = pcVar17 + -1;
          for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(undefined4 *)pcVar18 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            pcVar18 = pcVar18 + 4;
          }
          for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
            *pcVar18 = *pcVar7;
            pcVar7 = pcVar7 + 1;
            pcVar18 = pcVar18 + 1;
          }
        }
      }
      ccFntTy::WrStr(this_00->field_0083,&DAT_0080f33a,-1,-1,0);
      DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0073,0x2f,2,'\x01',(byte *)local_c);
      ccFntTy::EraseSufr(this_00->field_0083);
      pcVar16 = wsprintfA_exref;
    }
    if (this_00->field_0069 == 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)*(ushort *)(&DAT_0080c8a7 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar10,(uint)DAT_0080c937,0x69,0x6a);
    if (this_00->field_0069 == 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)*(ushort *)(&DAT_0080c8a9 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar10,(uint)DAT_0080c939,0xfb,0x6a);
    if (this_00->field_0069 == 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)*(ushort *)(&DAT_0080c8ab + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar10,(uint)DAT_0080c93b,0x18d,0x6a);
    if (this_00->field_0069 == 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)*(ushort *)(&DAT_0080c8ad + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar10,(uint)DAT_0080c93d,0x225,0x6a);
    if (this_00->field_0069 == 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)*(ushort *)(&DAT_0080c8af + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar10,(uint)DAT_0080c93f,0x69,0xcb);
    if (this_00->field_0069 == 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)*(ushort *)(&DAT_0080c8b1 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar10,(uint)DAT_0080c941,0xfb,0xcb);
    if (this_00->field_0069 == 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)*(ushort *)(&DAT_0080c8b3 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    PaintObjScore(this_00,uVar10,(uint)(ushort)DAT_0080c943,0x18d,0xcb);
    if (this_00->field_0069 == 1) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = (uint)*(ushort *)(&DAT_0080c8b5 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    PaintObjScore(this_00,uVar10,(uint)DAT_0080c943._2_2_,0x225,0xcb);
    bVar3 = this_00->field_0069;
    if ((char)local_10 == '\x03') {
      uVar22 = DAT_0080c8bb;
      if (bVar3 != 1) {
        uVar22 = *(undefined4 *)(&DAT_0080c82b + (uint)bVar3 * 0x10);
      }
      (*pcVar16)(&DAT_0080f33a,"%11d",uVar22);
      ccFntTy::SetSurf(this_00->field_008B,(int)this_00->field_0073,0,0x8c,0x11f,0x62,0x14);
      ccFntTy::WrStr(this_00->field_008B,&DAT_0080f33a,-1,-1,8);
      uVar22 = DAT_0080c8bf;
      if (this_00->field_0069 != 1) {
        uVar22 = *(undefined4 *)(&DAT_0080c82f + (uint)(byte)this_00->field_0069 * 0x10);
      }
      (*pcVar16)(&DAT_0080f33a,"%11d",uVar22);
      iVar5 = 0x12a;
    }
    else {
      uVar22 = DAT_0080c8b7;
      if (bVar3 != 1) {
        uVar22 = *(undefined4 *)(&DAT_0080c827 + (uint)bVar3 * 0x10);
      }
      (*pcVar16)(&DAT_0080f33a,"%7d",uVar22);
      ccFntTy::SetSurf(this_00->field_008B,(int)this_00->field_0073,0,0x75,0x11f,0x3e,0x14);
      ccFntTy::WrStr(this_00->field_008B,&DAT_0080f33a,-1,-1,8);
      uVar22 = DAT_0080c8bb;
      if (this_00->field_0069 != 1) {
        uVar22 = *(undefined4 *)(&DAT_0080c82b + (uint)(byte)this_00->field_0069 * 0x10);
      }
      (*pcVar16)(&DAT_0080f33a,"%11d",uVar22);
      ccFntTy::SetSurf(this_00->field_008B,(int)this_00->field_0073,0,0xcc,0x11f,0x62,0x14);
      ccFntTy::WrStr(this_00->field_008B,&DAT_0080f33a,-1,-1,8);
      uVar22 = DAT_0080c8bf;
      if (this_00->field_0069 != 1) {
        uVar22 = *(undefined4 *)(&DAT_0080c82f + (uint)(byte)this_00->field_0069 * 0x10);
      }
      (*pcVar16)(&DAT_0080f33a,"%11d",uVar22);
      iVar5 = 0x146;
    }
    ccFntTy::SetSurf(this_00->field_008B,(int)this_00->field_0073,0,iVar5,0x11f,0x62,0x14);
    ccFntTy::WrStr(this_00->field_008B,&DAT_0080f33a,-1,-1,8);
    iVar5 = DAT_0080c8c3;
    if (this_00->field_0069 != 1) {
      iVar5 = *(int *)(&DAT_0080c833 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    if ((char)local_1c == -1) {
      iVar12 = 0;
    }
    else {
      iVar12 = (-(uint)((char)local_10 != '\x03') & 0xfffffff9) + 0x14;
    }
    if (((-1 < iVar5) && (0 < iVar12)) && (iVar12 = (iVar5 * 0x26) / iVar12, 0 < iVar12)) {
      iVar5 = 0x1c7;
      do {
        DibPut((AnonShape_006B5B10_E0D06CF1 *)this_00->field_0073,iVar5,0x121,'\x06',
               (byte *)this_00->field_006F);
        iVar5 = iVar5 + 6;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
    if ((char)local_10 != '\0') {
      uVar10 = local_10 & 0xff;
      if (uVar10 == 1) {
        local_8 = 0x23f1;
      }
      else if (uVar10 == 2) {
        local_8 = 0x23f0;
      }
      else if (uVar10 == 3) {
        local_8 = 0x23f2;
      }
      pcVar7 = LoadResourceString(local_8,g_module_00807618);
      uVar10 = 0xffffffff;
      do {
        pcVar18 = pcVar7;
        if (uVar10 == 0) break;
        uVar10 = uVar10 - 1;
        pcVar18 = pcVar7 + 1;
        cVar14 = *pcVar7;
        pcVar7 = pcVar18;
      } while (cVar14 != '\0');
      uVar10 = ~uVar10;
      pcVar7 = pcVar18 + -uVar10;
      pcVar18 = (char *)&DAT_0080f33a;
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined4 *)pcVar18 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar18 = pcVar18 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *pcVar18 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar18 = pcVar18 + 1;
      }
      for (puVar8 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar8 != (uint *)0x0;
          puVar8 = Library::MSVCRT::FUN_0072e560(puVar8,'\n')) {
        *(undefined1 *)puVar8 = 0x20;
      }
      ccFntTy::SetSurf(this_00->field_0083,(int)this_00->field_0073,0,0x37,0x145,400,0xf);
      ccFntTy::WrStr(this_00->field_0083,&DAT_0080f33a,0,-1,0);
    }
    ccFntTy::SetSurf(this_00->field_0083,(int)this_00->field_0073,0,500,0x145,0xe6,0xf);
    bVar3 = this_00->field_0069;
    if (bVar3 == 1) {
      UVar20 = 0x2441;
    }
    else {
      if (DAT_0080cc40 == '\0') {
        bVar3 = *(byte *)((int)&DAT_0080c83a + bVar3 + 3);
        /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
        local_8 = CONCAT31(local_8._1_3_,bVar3);
        if (DAT_00808a8f == '\0') {
          if (DAT_0080c846 == bVar3) {
LAB_005bef47:
            iVar5 = 0;
          }
          else {
            uVar10 = (uint)DAT_0080c846;
            bVar4 = g_playerRelationMatrix[uVar10][bVar3];
            if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][uVar10] == 0)) {
              iVar5 = -2;
            }
            else if ((bVar4 == 1) && (g_playerRelationMatrix[bVar3][uVar10] == 0)) {
              iVar5 = -1;
            }
            else if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][uVar10] == 1)) {
              iVar5 = 1;
            }
            else {
              if ((bVar4 != 1) || (g_playerRelationMatrix[bVar3][uVar10] != 1)) goto LAB_005bef47;
              iVar5 = 2;
            }
          }
          bVar19 = iVar5 < 0;
        }
        else {
          bVar19 = (&DAT_008087ea)[(uint)bVar3 * 0x51] != (&DAT_008087ea)[(uint)DAT_0080c846 * 0x51]
          ;
        }
        if (bVar19) goto LAB_005bef67;
      }
      else if ((&DAT_0080c99b)[(uint)DAT_0080c846 * 0x51] !=
               (&DAT_0080c99b)[(uint)*(byte *)((int)&DAT_0080c83a + bVar3 + 3) * 0x51]) {
LAB_005bef67:
        UVar20 = 0x2442;
        goto LAB_005bef6c;
      }
      UVar20 = 0x2443;
    }
LAB_005bef6c:
    uVar22 = 2;
    iVar12 = -1;
    iVar5 = -3;
    puVar8 = (uint *)LoadResourceString(UVar20,g_module_00807618);
    ccFntTy::WrStr(this_00->field_0083,puVar8,iVar5,iVar12,uVar22);
  }
  iVar5 = 1;
  puVar9 = (undefined4 *)(this_00->field_005D + 0x28);
  uVar10 = FUN_006b4fe0(this_00->field_005D);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  local_c = (AnonShape_005BD4B0_63635D6D *)
            FUN_006b50c0(400,0x32,(uint)*(ushort *)(this_00->field_005D + 0xe),uVar10,puVar9,iVar5);
  uVar10 = local_c->field_0014;
  if (uVar10 == 0) {
    uVar10 = ((uint)local_c->field_000E * local_c->field_0004 + 0x1f >> 3 & 0x1ffffffc) *
             local_c->field_0008;
  }
  puVar9 = (undefined4 *)FUN_006b4fa0((int)local_c);
  for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
    *puVar9 = 0x4c4c4c4c;
    puVar9 = puVar9 + 1;
  }
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar9 = 0x4c;
    puVar9 = (undefined4 *)((int)puVar9 + 1);
  }
  FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)local_c,0,2,2,local_c->field_0004 + -4,
               local_c->field_0008 + -4,0x18,0xd);
  ccFntTy::SetSurf(this_00->field_0083,(int)local_c,0,5,5,local_c->field_0004 + -0x69,
                   local_c->field_0008 + -10);
  uVar22 = 0;
  iVar12 = -1;
  iVar5 = -1;
  puVar8 = (uint *)LoadResourceString(0x2444,g_module_00807618);
  ccFntTy::WrStr(this_00->field_0083,puVar8,iVar5,iVar12,uVar22);
  FUN_006b4170((AnonShape_006B5B10_E0D06CF1 *)local_c,0,local_c->field_0004 + -0x69,
               (local_c->field_0008 + -0x1c) / 2,0x50,0x1c,0);
  FUN_006b5ee0((AnonShape_006B5B10_E0D06CF1 *)local_c,0,local_c->field_0004 + -0x69,
               (local_c->field_0008 + -0x1c) / 2,0x50,0x1c,0x18,0xd);
  cVar14 = (char)(DAT_0080c83a / 0xe10);
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  local_8 = CONCAT31(local_8._1_3_,cVar14);
  if (cVar14 == '\0') {
    puVar13 = &DAT_007c2198;
    pcVar7 = "%s;";
  }
  else {
    puVar13 = (undefined *)(DAT_0080c83a / 0xe10 & 0xff);
    pcVar7 = "%2d:";
  }
  wsprintfA((LPSTR)&DAT_0080f33a,pcVar7,puVar13);
  wsprintfA((LPSTR)&DAT_0080f33a,"%s%02d:%02d",&DAT_0080f33a,
            (int)(((ulonglong)DAT_0080c83a % 0xe10) / 0x3c),
            (int)(((ulonglong)DAT_0080c83a % 0xe10) % 0x3c));
  ccFntTy::SetSurf(this_00->field_008B,(int)local_c,0,local_c->field_0004 + -0x69,
                   (local_c->field_0008 + -0x1c) / 2,0x50,0x1c);
  ccFntTy::WrStr(this_00->field_008B,&DAT_0080f33a,-1,-1,8);
  Library::DKW::DDX::FUN_006c5000
            ((int)DAT_0080759c,0x174,0x1a9,(int)local_c,0,0,0,local_c->field_0004,
             local_c->field_0008,(int)&this_00->field_0xa3,0x4c);
  FreeAndNull(&local_c);
LAB_005bf406:
  pAVar2 = this_00->field_0073;
  Library::DKW::DDX::FUN_006b48e0
            ((int)DAT_0080759c,0x1a,0x46,(int)pAVar2,0,0,0,pAVar2->field_0004,pAVar2->field_0008,
             (int)&this_00->field_0xa3,0x4c,0x10000ff);
  g_currentExceptionFrame = local_64.previous;
  return;
}

