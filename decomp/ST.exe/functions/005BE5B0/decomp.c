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
  int local_EAX_38;
  int iVar6;
  BITMAPINFO *pBVar7;
  int iVar5;
  int local_EAX_584;
  int local_EAX_755;
  undefined4 uVar8;
  char *pcVar8;
  uint *puVar9;
  char *local_EAX_2492;
  char *local_EAX_2562;
  byte bVar4;
  int uVar11;
  undefined4 *puVar10;
  char *local_EAX_3266;
  char *pcVar10;
  int iVar14;
  uint uVar12;
  uint uVar13;
  int iVar15;
  undefined *puVar16;
  char cVar17;
  size_t _Count;
  code *pcVar19;
  char *pcVar20;
  char *pcVar21;
  bool bVar22;
  UINT UVar23;
  ushort *puVar24;
  char *pcVar25;
  int iVar26;
  char local_898 [2100];
  InternalExceptionFrame local_64;
  MReportTy *local_20;
  undefined4 local_1c;
  RecoveredSourceFamily_dibcopy *local_18;
  char local_11;
  uint local_10;
  RecoveredRecord_MReportTy_005BD4B0 *local_c;
  UINT local_8;
  size_t sVar18;

  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = this;
  local_EAX_38 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0);
  if (local_EAX_38 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar14 = ReportDebugMessage("E:\\__titans\\Start\\rpt_obj.cpp",0x1b4,0,local_EAX_38,
                                "%s","MReportTy::PaintMReport");
    if (iVar14 == 0) {
      RaiseInternalException(local_EAX_38,0,"E:\\__titans\\Start\\rpt_obj.cpp",0x1b4);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  FUN_006b5f80((int *)g_ddxContext_008075A8,0,0,g_nWidth_00806730,DAT_00806734);
  this_00 = local_20;
  /* ST_CALLSITE[005BE617]: CALL 0x00402298; direct=00402298 PutDDXClip */
  PutDDXClip(0,0,0,0,800,(byte *)0x3c,'\x01',(BITMAPINFO *)local_20->field_005D);
  if ((this_00->field_0457 == nullptr) && (param_1 == '\0')) {
    /* ST_CALLSITE[005BE645]: CALL 0x00401217; direct=00401217 MReportTy::OutTGlProc */
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
  /* ST_CALLSITE[005BE67C]: CALL 0x00402298; direct=00402298 PutDDXClip */
  PutDDXClip(0x1a,0x46,0x1a,0x46,this_00->field_0073->field_0004,
             (byte *)this_00->field_0073->field_0008,'\x01',(BITMAPINFO *)this_00->field_005D);
  FUN_006b4170((RecoveredSourceFamily_dibcopy *)this_00->field_0073,0,0x2e,1,0x2ba,0x15c,0x4c);
  pcVar19 = wsprintfA_exref;
  if (this_00->field_0067 == '\0') {
    ccFntTy::SetSurf(this_00->field_0083,(int)this_00->field_0073,0,0x37,10,
                     this_00->field_0073->field_0004 + -0x41,0xf);
    uVar12 = 0;
    iVar15 = -1;
    iVar6 = -1;
    pcVar10 = LoadResourceString(0x2440,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_0083,pcVar10,iVar6,iVar15,uVar12);
    goto LAB_005bf406;
  }
  bVar3 = this_00->field_0069;
  if (bVar3 == 0) {
    ccFntTy::SetSurf(this_00->field_0083,(int)this_00->field_0073,0,0x37,10,
                     this_00->field_0073->field_0004 + -0x41,0xf);
    uVar12 = 0;
    iVar15 = -1;
    iVar6 = -1;
    local_EAX_2562 = LoadResourceString(0x2440,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_0083,local_EAX_2562,iVar6,iVar15,uVar12);
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
              UVar23 = local_8;
              iVar6 = (local_8 & 0xff) * 0x9c;
              if (((&DAT_00808af4)[iVar6] == bVar3) && ((&DAT_00808af5)[iVar6] != '\0')) {
                FUN_006b4170(local_18,0,0,0,local_18->field_0004,local_18->field_0008,0x4c);
                ccFntTy::WrStr(this_00->field_0083,&CHAR_00h_00808ab0 + (UVar23 & 0xff) * 0x9c,0,-1,
                               0);
                /* ST_CALLSITE[005BF0CC]: CALL 0x00403229; direct=00403229 DibPut */
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
      iVar6 = 0;
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar6 == 0) {
            uVar12 = this_00->field_02A3;
            iVar26 = 0;
            iVar15 = DAT_0080c963;
          }
          else {
            uVar12 = this_00->field_02A3;
            iVar15 = (&DAT_0080c943)[iVar6];
            iVar26 = iVar6;
          }
          /* ST_CALLSITE[005BF1A5]: CALL 0x004016fe; direct=004016FE MReportTy::PaintMainScore */
          PaintMainScore(this_00,iVar15,uVar12,iVar26);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(DAT_0080c83e + 1));
      }
    }
    else {
      iVar15 = 0;
      memset(&this_00->field_0x2a7, 0, 0x20); /* compiler bulk-zero initialization */
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar15 == 0) {
            if (DAT_0080c963 == 0) {
              uVar12 = this_00->field_02A3;
              iVar6 = 0;
              goto LAB_005bf156;
            }
          }
          else if ((&DAT_0080c943)[iVar15] == 0) {
            uVar12 = this_00->field_02A3;
            iVar6 = iVar15;
LAB_005bf156:
            /* ST_CALLSITE[005BF15A]: CALL 0x004016fe; direct=004016FE MReportTy::PaintMainScore */
            PaintMainScore(this_00,0,uVar12,iVar6);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 < (int)(DAT_0080c83e + 1));
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
      iVar6 = 0;
    }
    else {
      iVar6 = bVar3 - 1;
    }
    pBVar7 = FUN_0070b3a0((AnonShape_GLOBAL_0081175C_57F682DD *)this_00->field_007F,iVar6);
    /* ST_CALLSITE[005BE716]: CALL 0x00403229; direct=00403229 DibPut */
    DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0073,0x2e,1,'\x06',(byte *)pBVar7);
    local_c = (RecoveredRecord_MReportTy_005BD4B0 *)
              ccFntTy::CreateSurf(this_00->field_0083,(int)this_00->field_0073,0,0x2f,2,0x2b7,0x1e,0
                                 );
    if (local_c != nullptr) {
      local_11 = '\x01';
      STPiece<0,1>(DAT_0080f33a) = 0;
      local_18 = (RecoveredSourceFamily_dibcopy *)((uint)local_18 & 0xffffff00);
      if (DAT_00808aaf != 0) {
        do {
          iVar6 = ((uint)local_18 & 0xff) * 0x9c;
          if ((&DAT_00808af4)[iVar6] == (char)local_1c) {
            if (local_11 == '\0') {
              /* ST_CALLSITE[005BE7BB]: CALL ESI */
              wsprintfA((LPSTR)&DAT_0080f33a,"%s, %s",&DAT_0080f33a,
                        &CHAR_00h_00808ab0 + iVar6);
            }
            else {
              /* ST_CALLSITE[005BE79A]: CALL ESI */
              wsprintfA((LPSTR)&DAT_0080f33a,"%s",&CHAR_00h_00808ab0 + iVar6);
              local_11 = '\0';
            }
            iVar5 = FUN_00711110(this_00->field_0083,(char *)&DAT_0080f33a);
            if (0x2a8 < iVar5) break;
          }
          bVar3 = (char)local_18 + 1;
          local_18 = (RecoveredSourceFamily_dibcopy *)STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar3));
        } while (bVar3 < DAT_00808aaf);
      }
      local_EAX_584 = FUN_00711110(this_00->field_0083,(char *)&DAT_0080f33a);
      if (0x2a8 < local_EAX_584) {
        uVar12 = 0xffffffff;
        pcVar25 = (char *)&DAT_0080f33a;
        do {
          pcVar21 = pcVar25;
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          pcVar21 = pcVar25 + 1;
          cVar17 = *pcVar25;
          pcVar25 = pcVar21;
        } while (cVar17 != '\0');
        uVar12 = ~uVar12;
        pcVar25 = pcVar21 + -uVar12;
        pcVar21 = local_898;
        memmove(pcVar21, pcVar25, uVar12); /* compiler REP MOVS byte copy */
        uVar13 = 0;
        memset(&DAT_0080f33a, 0, 0x834); /* compiler bulk-zero initialization */
        iVar6 = 0;
        uVar12 = 0xffffffff;
        pcVar1 = this_00->field_0083;
        pcVar25 = (char *)&DAT_0080f33a;
        do {
          if (uVar12 == 0) break;
          uVar12 = uVar12 - 1;
          cVar17 = *pcVar25;
          pcVar25 = pcVar25 + 1;
        } while (cVar17 != '\0');
        if (pcVar1->field_00A0 != 0) {
          FUN_00710790((AnonShape_00710790_4CBB90D4 *)pcVar1);
        }
        _Count = (int)(0x2a8 / (longlong)
                               (this_00->field_0083->field_0058 + *(int *)&pcVar1->field_0x86)) - 1;
        do {
          sVar18 = _Count;
          _Count = sVar18 + 1;
          Library::MSVCRT::_strncpy((char *)&DAT_0080f33a,local_898,_Count);
          local_EAX_755 = FUN_00711110(this_00->field_0083,(char *)&DAT_0080f33a);
          if (0x2a7 < local_EAX_755) break;
        } while ((int)_Count < (int)(~uVar12 - 1));
        if (_Count != ~uVar12 - 1) {
          memset(&DAT_0080f33a, 0, 0x834); /* compiler bulk-zero initialization */
          Library::MSVCRT::_strncpy((char *)&DAT_0080f33a,local_898,sVar18 - 2);
          uVar12 = 0xffffffff;
          pcVar25 = &CHAR___007c7274;
          do {
            pcVar21 = pcVar25;
            if (uVar12 == 0) break;
            uVar12 = uVar12 - 1;
            pcVar21 = pcVar25 + 1;
            cVar17 = *pcVar25;
            pcVar25 = pcVar21;
          } while (cVar17 != '\0');
          uVar12 = ~uVar12;
          iVar6 = -1;
          pcVar25 = (char *)&DAT_0080f33a;
          do {
            pcVar20 = pcVar25;
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            pcVar20 = pcVar25 + 1;
            cVar17 = *pcVar25;
            pcVar25 = pcVar20;
          } while (cVar17 != '\0');
          pcVar25 = pcVar21 + -uVar12;
          pcVar21 = pcVar20 + -1;
          memmove(pcVar21, pcVar25, uVar12); /* compiler REP MOVS byte copy */
          uVar13 = 0;
        }
      }
      ccFntTy::WrStr(this_00->field_0083,(char *)&DAT_0080f33a,-1,-1,0);
      /* ST_CALLSITE[005BE92E]: CALL 0x00403229; direct=00403229 DibPut */
      DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0073,0x2f,2,'\x01',(byte *)local_c);
      ccFntTy::EraseSufr(this_00->field_0083);
      pcVar19 = wsprintfA_exref;
    }
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8a7 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BE975]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c937,0x69,0x6a);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8a9 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BE9AA]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c939,0xfb,0x6a);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8ab + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BE9E0]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c93b,0x18d,0x6a);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8ad + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BEA15]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c93d,0x225,0x6a);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8af + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BEA4B]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c93f,0x69,0xcb);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8b1 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BEA83]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    PaintObjScore(this_00,uVar12,(uint)DAT_0080c941,0xfb,0xcb);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8b3 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BEABC]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    PaintObjScore(this_00,uVar12,(uint)(ushort)DAT_0080c943,0x18d,0xcb);
    if (this_00->field_0069 == 1) {
      uVar12 = 0xffffffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(&DAT_0080c8b5 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    /* ST_CALLSITE[005BEAF4]: CALL 0x0040250e; direct=0040250E MReportTy::PaintObjScore */
    PaintObjScore(this_00,uVar12,(uint)STPiece<2,2>(DAT_0080c943),0x225,0xcb);
    bVar3 = this_00->field_0069;
    if ((char)local_10 == '\x03') {
      uVar8 = DAT_0080c8bb;
      if (bVar3 != 1) {
        uVar8 = *(undefined4 *)(&DAT_0080c82b + (uint)bVar3 * 0x10);
      }
      /* ST_CALLSITE[005BEB2B]: CALL ESI */
      (*pcVar19)(&DAT_0080f33a,"%11d",uVar8);
      ccFntTy::SetSurf(this_00->field_008B,(int)this_00->field_0073,0,0x8c,0x11f,0x62,0x14);
      ccFntTy::WrStr(this_00->field_008B,(char *)&DAT_0080f33a,-1,-1,8);
      uVar8 = DAT_0080c8bf;
      if (this_00->field_0069 != 1) {
        uVar8 = *(undefined4 *)(&DAT_0080c82f + (uint)(byte)this_00->field_0069 * 0x10);
      }
      /* ST_CALLSITE[005BEB8C]: CALL ESI */
      (*pcVar19)(&DAT_0080f33a,"%11d",uVar8);
      iVar6 = 0x12a;
    }
    else {
      uVar8 = DAT_0080c8b7;
      if (bVar3 != 1) {
        uVar8 = *(undefined4 *)(&DAT_0080c827 + (uint)bVar3 * 0x10);
      }
      /* ST_CALLSITE[005BEBC8]: CALL ESI */
      (*pcVar19)(&DAT_0080f33a,"%7d",uVar8);
      ccFntTy::SetSurf(this_00->field_008B,(int)this_00->field_0073,0,0x75,0x11f,0x3e,0x14);
      ccFntTy::WrStr(this_00->field_008B,(char *)&DAT_0080f33a,-1,-1,8);
      uVar8 = DAT_0080c8bb;
      if (this_00->field_0069 != 1) {
        uVar8 = *(undefined4 *)(&DAT_0080c82b + (uint)(byte)this_00->field_0069 * 0x10);
      }
      /* ST_CALLSITE[005BEC26]: CALL ESI */
      (*pcVar19)(&DAT_0080f33a,"%11d",uVar8);
      ccFntTy::SetSurf(this_00->field_008B,(int)this_00->field_0073,0,0xcc,0x11f,0x62,0x14);
      ccFntTy::WrStr(this_00->field_008B,(char *)&DAT_0080f33a,-1,-1,8);
      uVar8 = DAT_0080c8bf;
      if (this_00->field_0069 != 1) {
        uVar8 = *(undefined4 *)(&DAT_0080c82f + (uint)(byte)this_00->field_0069 * 0x10);
      }
      /* ST_CALLSITE[005BEC87]: CALL ESI */
      (*pcVar19)(&DAT_0080f33a,"%11d",uVar8);
      iVar6 = 0x146;
    }
    ccFntTy::SetSurf(this_00->field_008B,(int)this_00->field_0073,0,iVar6,0x11f,0x62,0x14);
    ccFntTy::WrStr(this_00->field_008B,(char *)&DAT_0080f33a,-1,-1,8);
    iVar6 = DAT_0080c8c3;
    if (this_00->field_0069 != 1) {
      iVar6 = *(int *)(&DAT_0080c833 + (uint)(byte)this_00->field_0069 * 0x10);
    }
    if ((char)local_1c == -1) {
      iVar15 = 0;
    }
    else {
      iVar15 = (-(uint)((char)local_10 != '\x03') & 0xfffffff9) + 0x14;
    }
    if (((-1 < iVar6) && (0 < iVar15)) && (iVar15 = (iVar6 * 0x26) / iVar15, 0 < iVar15)) {
      iVar6 = 0x1c7;
      do {
        /* ST_CALLSITE[005BED20]: CALL 0x00403229; direct=00403229 DibPut */
        DibPut((RecoveredSourceFamily_dibcopy *)this_00->field_0073,iVar6,0x121,'\x06',
               (byte *)this_00->field_006F);
        iVar6 = iVar6 + 6;
        iVar15 = iVar15 + -1;
      } while (iVar15 != 0);
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
      pcVar8 = LoadResourceString(local_8,g_hINSTANCE_00807618);
      uVar12 = 0xffffffff;
      do {
        pcVar25 = pcVar8;
        if (uVar12 == 0) break;
        uVar12 = uVar12 - 1;
        pcVar25 = pcVar8 + 1;
        cVar17 = *pcVar8;
        pcVar8 = pcVar25;
      } while (cVar17 != '\0');
      uVar12 = ~uVar12;
      pcVar25 = pcVar25 + -uVar12;
      pcVar21 = (char *)&DAT_0080f33a;
      memmove(pcVar21, pcVar25, uVar12); /* compiler REP MOVS byte copy */
      uVar13 = 0;
      for (puVar9 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar9 != nullptr;
          puVar9 = Library::MSVCRT::FUN_0072e560(puVar9,'\n')) {
        *(undefined1 *)puVar9 = 0x20;
      }
      ccFntTy::SetSurf(this_00->field_0083,(int)this_00->field_0073,0,0x37,0x145,400,0xf);
      ccFntTy::WrStr(this_00->field_0083,(char *)&DAT_0080f33a,0,-1,0);
    }
    ccFntTy::SetSurf(this_00->field_0083,(int)this_00->field_0073,0,500,0x145,0xe6,0xf);
    bVar3 = this_00->field_0069;
    if (bVar3 == 1) {
      UVar23 = 0x2441;
    }
    else {
      if (DAT_0080cc40 == '\0') {
        bVar3 = *(byte *)((int)&DAT_0080c83a + bVar3 + 3);
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        if (DAT_00808a8f == '\0') {
          if (DAT_0080c846 == bVar3) {
LAB_005bef47:
            iVar6 = 0;
          }
          else {
            uVar12 = (uint)DAT_0080c846;
            bVar4 = g_playerRelationMatrix[uVar12][bVar3];
            if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][uVar12] == 0)) {
              iVar6 = -2;
            }
            else if ((bVar4 == 1) && (g_playerRelationMatrix[bVar3][uVar12] == 0)) {
              iVar6 = -1;
            }
            else if ((bVar4 == 0) && (g_playerRelationMatrix[bVar3][uVar12] == 1)) {
              iVar6 = 1;
            }
            else {
              if ((bVar4 != 1) || (g_playerRelationMatrix[bVar3][uVar12] != 1)) goto LAB_005bef47;
              iVar6 = 2;
            }
          }
          bVar22 = iVar6 < 0;
        }
        else {
          bVar22 = g_bulkInitializedRecords_008087C7[bVar3].field_0023 !=
                   g_bulkInitializedRecords_008087C7[DAT_0080c846].field_0023;
        }
        if (bVar22) goto LAB_005bef67;
      }
      else if ((&DAT_0080c99b)[(uint)DAT_0080c846 * 0x51] !=
               (&DAT_0080c99b)[(uint)*(byte *)((int)&DAT_0080c83a + bVar3 + 3) * 0x51]) {
LAB_005bef67:
        UVar23 = 0x2442;
        goto LAB_005bef6c;
      }
      UVar23 = 0x2443;
    }
LAB_005bef6c:
    uVar12 = 2;
    iVar15 = -1;
    iVar6 = -3;
    local_EAX_2492 = LoadResourceString(UVar23,g_hINSTANCE_00807618);
    ccFntTy::WrStr(this_00->field_0083,local_EAX_2492,iVar6,iVar15,uVar12);
  }
  iVar6 = 1;
  puVar24 = this_00->field_005D + 0x14;
  uVar11 = FUN_006b4fe0((int)this_00->field_005D);
  local_c = (RecoveredRecord_MReportTy_005BD4B0 *)
            FUN_006b50c0(400,0x32,(uint)this_00->field_005D[7],uVar11,(undefined4 *)puVar24,iVar6);
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
  iVar15 = -1;
  iVar6 = -1;
  local_EAX_3266 = LoadResourceString(0x2444,g_hINSTANCE_00807618);
  ccFntTy::WrStr(this_00->field_0083,local_EAX_3266,iVar6,iVar15,uVar12);
  FUN_006b4170((RecoveredSourceFamily_dibcopy *)local_c,0,local_c->field_0004 + -0x69,
               (local_c->field_0008 + -0x1c) / 2,0x50,0x1c,0);
  FUN_006b5ee0((RecoveredSourceFamily_dibcopy *)local_c,0,local_c->field_0004 + -0x69,
               (local_c->field_0008 + -0x1c) / 2,0x50,0x1c,0x18,0xd);
  cVar17 = (char)(DAT_0080c83a / 0xe10);
  local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(cVar17));
  if (cVar17 == '\0') {
    puVar16 = &DAT_007c2198;
    pcVar25 = "%s;";
  }
  else {
    puVar16 = (undefined *)(DAT_0080c83a / 0xe10 & 0xff);
    pcVar25 = "%2d:";
  }
  /* ST_CALLSITE[005BF305]: CALL dword ptr [0x0085bde8] */
  wsprintfA((LPSTR)&DAT_0080f33a,pcVar25,puVar16);
  /* ST_CALLSITE[005BF344]: CALL dword ptr [0x0085bde8] */
  wsprintfA((LPSTR)&DAT_0080f33a,"%s%02d:%02d",&DAT_0080f33a,
            (int)(((ulonglong)DAT_0080c83a % 0xe10) / 0x3c),
            (int)(((ulonglong)DAT_0080c83a % 0xe10) % 0x3c));
  ccFntTy::SetSurf(this_00->field_008B,(int)local_c,0,local_c->field_0004 + -0x69,
                   (local_c->field_0008 + -0x1c) / 2,0x50,0x1c);
  ccFntTy::WrStr(this_00->field_008B,(char *)&DAT_0080f33a,-1,-1,8);
  Library::DKW::DDX::FUN_006c5000
            (g_dDXContext_0080759C,0x174,0x1a9,(int)local_c,0,0,0,local_c->field_0004,
             local_c->field_0008,(int)&this_00->field_00A3,0x4c);
  FreeAndNull(&local_c);
LAB_005bf406:
  pAVar2 = this_00->field_0073;
  Library::DKW::DDX::FUN_006b48e0
            ((int)g_dDXContext_0080759C,0x1a,0x46,pAVar2,0,0,0,pAVar2->field_0004,pAVar2->field_0008
             ,(ushort *)&this_00->field_00A3,0x4c,0x10000ff);
  g_currentExceptionFrame = local_64.previous;
  return;
}

