
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintMReport */

void __thiscall MReportTy::PaintMReport(MReportTy *this,char param_1)

{
  MReportTy MVar1;
  MReportTy *this_00;
  byte bVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined *puVar12;
  char cVar13;
  undefined4 unaff_ESI;
  size_t _Count;
  code *pcVar15;
  void *unaff_EDI;
  char *pcVar16;
  char *pcVar17;
  MReportTy *pMVar18;
  bool bVar19;
  undefined4 uVar20;
  UINT UVar21;
  LPCSTR pCVar22;
  int iVar23;
  char local_898 [2100];
  InternalExceptionFrame local_64;
  MReportTy *local_20;
  undefined4 local_1c;
  byte *local_18;
  char local_11;
  uint local_10;
  byte *local_c;
  UINT local_8;
  size_t sVar14;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = this;
  iVar4 = __setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar11 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x1b4,0,iVar4,&DAT_007a4ccc
                                ,s_MReportTy__PaintMReport_007ccf98);
    if (iVar11 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0x1b4);
      return;
    }
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  this_00 = local_20;
  thunk_FUN_00540620(0,0,0,0,800,(byte *)0x3c,'\x01',*(BITMAPINFO **)(local_20 + 0x5d));
  if ((*(int *)(this_00 + 0x457) == 0) && (param_1 == '\0')) {
    OutTGlProc(DAT_0080759c,(int)DAT_0080759c,0,0,0x1a,10,0x2e9,0x32,(int)this_00);
  }
  if (*(int *)(this_00 + 0x453) != 0) {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  if (param_1 != '\0') {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  thunk_FUN_00540620(0x1a,0x46,0x1a,0x46,*(uint *)(*(int *)(this_00 + 0x73) + 4),
                     *(byte **)(*(int *)(this_00 + 0x73) + 8),'\x01',
                     *(BITMAPINFO **)(this_00 + 0x5d));
  FUN_006b4170(*(int *)(this_00 + 0x73),0,0x2e,1,0x2ba,0x15c,0x4c);
  pcVar15 = wsprintfA_exref;
  if (this_00[0x67] == (MReportTy)0x0) {
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x83),*(int *)(this_00 + 0x73),0,0x37,10,
                     *(int *)(*(int *)(this_00 + 0x73) + 4) + -0x41,0xf);
    uVar20 = 0;
    iVar11 = -1;
    iVar4 = -1;
    puVar7 = (uint *)FUN_006b0140(0x2440,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x83),puVar7,iVar4,iVar11,uVar20);
    goto LAB_005bf406;
  }
  MVar1 = this_00[0x69];
  if (MVar1 == (MReportTy)0x0) {
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x83),*(int *)(this_00 + 0x73),0,0x37,10,
                     *(int *)(*(int *)(this_00 + 0x73) + 4) + -0x41,0xf);
    uVar20 = 0;
    iVar11 = -1;
    iVar4 = -1;
    puVar7 = (uint *)FUN_006b0140(0x2440,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x83),puVar7,iVar4,iVar11,uVar20);
    local_18 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x83),*(int *)(this_00 + 0x73),0,
                                           0,0,0x136,0x22,0);
    if (local_18 != (byte *)0x0) {
      local_10 = local_10 & 0xffffff00;
      if (DAT_0080c83e != 0xffffffff) {
        do {
          uVar9 = local_10;
          bVar2 = DAT_0080c846;
          if ((char)local_10 != '\0') {
            bVar2 = (&DAT_0080c83e)[local_10 & 0xff];
          }
          local_8 = local_8 & 0xffffff00;
          if (DAT_00808aaf != 0) {
            do {
              UVar21 = local_8;
              iVar4 = (local_8 & 0xff) * 0x9c;
              if (((&DAT_00808af4)[iVar4] == bVar2) && ((&DAT_00808af5)[iVar4] != '\0')) {
                FUN_006b4170((int)local_18,0,0,0,*(int *)(local_18 + 4),*(int *)(local_18 + 8),0x4c)
                ;
                ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x83),&DAT_00808ab0 + (UVar21 & 0xff) * 0x27,
                               0,-1,0);
                thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x73),0x38,
                                   (uVar9 & 0xff) * 0x26 + 0x2c,'\x01',local_18);
                break;
              }
              bVar3 = (char)local_8 + 1;
              local_8 = CONCAT31(local_8._1_3_,bVar3);
            } while (bVar3 < DAT_00808aaf);
          }
          bVar2 = (char)local_10 + 1;
          local_10 = CONCAT31(local_10._1_3_,bVar2);
        } while ((uint)bVar2 < DAT_0080c83e + 1);
      }
      ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x83));
    }
    if (this_00[0x68] == (MReportTy)0x0) {
      iVar4 = 0;
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar4 == 0) {
            uVar9 = *(uint *)(this_00 + 0x2a3);
            iVar23 = 0;
            iVar11 = DAT_0080c963;
          }
          else {
            uVar9 = *(uint *)(this_00 + 0x2a3);
            iVar11 = (&DAT_0080c943)[iVar4];
            iVar23 = iVar4;
          }
          PaintMainScore(this_00,iVar11,uVar9,iVar23);
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(DAT_0080c83e + 1));
      }
    }
    else {
      iVar11 = 0;
      pMVar18 = this_00 + 0x2a7;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pMVar18 = 0;
        pMVar18 = pMVar18 + 4;
      }
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar11 == 0) {
            if (DAT_0080c963 == 0) {
              uVar9 = *(uint *)(this_00 + 0x2a3);
              iVar4 = 0;
              goto LAB_005bf156;
            }
          }
          else if ((&DAT_0080c943)[iVar11] == 0) {
            uVar9 = *(uint *)(this_00 + 0x2a3);
            iVar4 = iVar11;
LAB_005bf156:
            PaintMainScore(this_00,0,uVar9,iVar4);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)(DAT_0080c83e + 1));
      }
    }
  }
  else {
    bVar2 = DAT_0080c846;
    if (MVar1 != (MReportTy)0x1) {
      bVar2 = *(byte *)((int)&DAT_0080c83a + (byte)MVar1 + 3);
    }
    local_1c = CONCAT31(local_1c._1_3_,bVar2);
    bVar2 = (&DAT_0080c999)[(uint)bVar2 * 0x51];
    local_10 = CONCAT31(local_10._1_3_,bVar2);
    if (bVar2 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = bVar2 - 1;
    }
    pbVar5 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 0x7f),iVar4);
    thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x73),0x2e,1,'\x06',pbVar5);
    local_c = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)(this_00 + 0x83),*(int *)(this_00 + 0x73),0,
                                          0x2f,2,0x2b7,0x1e,0);
    if (local_c != (byte *)0x0) {
      local_11 = '\x01';
      DAT_0080f33a._0_1_ = 0;
      local_18 = (byte *)((uint)local_18 & 0xffffff00);
      if (DAT_00808aaf != 0) {
        do {
          uVar9 = (uint)local_18 & 0xff;
          if ((&DAT_00808af4)[uVar9 * 0x9c] == (char)local_1c) {
            if (local_11 == '\0') {
              wsprintfA((LPSTR)&DAT_0080f33a,s__s___s_007ccfc0,&DAT_0080f33a,
                        &DAT_00808ab0 + uVar9 * 0x27);
            }
            else {
              wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007a4ccc,&DAT_00808ab0 + uVar9 * 0x27);
              local_11 = '\0';
            }
            iVar4 = FUN_00711110(*(void **)(this_00 + 0x83),&DAT_0080f33a);
            if (0x2a8 < iVar4) break;
          }
          bVar2 = (char)local_18 + 1;
          local_18 = (byte *)CONCAT31(local_18._1_3_,bVar2);
        } while (bVar2 < DAT_00808aaf);
      }
      iVar4 = FUN_00711110(*(void **)(this_00 + 0x83),&DAT_0080f33a);
      if (0x2a8 < iVar4) {
        uVar9 = 0xffffffff;
        pcVar6 = (char *)&DAT_0080f33a;
        do {
          pcVar17 = pcVar6;
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          pcVar17 = pcVar6 + 1;
          cVar13 = *pcVar6;
          pcVar6 = pcVar17;
        } while (cVar13 != '\0');
        uVar9 = ~uVar9;
        pcVar6 = pcVar17 + -uVar9;
        pcVar17 = local_898;
        for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
          pcVar6 = pcVar6 + 4;
          pcVar17 = pcVar17 + 4;
        }
        for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *pcVar17 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar17 = pcVar17 + 1;
        }
        puVar8 = &DAT_0080f33a;
        for (iVar4 = 0x20d; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = 0;
          puVar8 = puVar8 + 1;
        }
        uVar9 = 0xffffffff;
        iVar4 = *(int *)(this_00 + 0x83);
        pcVar6 = (char *)&DAT_0080f33a;
        do {
          if (uVar9 == 0) break;
          uVar9 = uVar9 - 1;
          cVar13 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar13 != '\0');
        if (*(int *)(iVar4 + 0xa0) != 0) {
          FUN_00710790(iVar4);
        }
        _Count = (int)(0x2a8 / (longlong)
                               (*(int *)(*(int *)(this_00 + 0x83) + 0x58) + *(int *)(iVar4 + 0x86)))
                 - 1;
        do {
          sVar14 = _Count;
          _Count = sVar14 + 1;
          _strncpy((char *)&DAT_0080f33a,local_898,_Count);
          iVar4 = FUN_00711110(*(void **)(this_00 + 0x83),&DAT_0080f33a);
          if (0x2a7 < iVar4) break;
        } while ((int)_Count < (int)(~uVar9 - 1));
        if (_Count != ~uVar9 - 1) {
          puVar8 = &DAT_0080f33a;
          for (iVar4 = 0x20d; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
          }
          _strncpy((char *)&DAT_0080f33a,local_898,sVar14 - 2);
          uVar9 = 0xffffffff;
          pcVar6 = &DAT_007c7274;
          do {
            pcVar17 = pcVar6;
            if (uVar9 == 0) break;
            uVar9 = uVar9 - 1;
            pcVar17 = pcVar6 + 1;
            cVar13 = *pcVar6;
            pcVar6 = pcVar17;
          } while (cVar13 != '\0');
          uVar9 = ~uVar9;
          iVar4 = -1;
          pcVar6 = (char *)&DAT_0080f33a;
          do {
            pcVar16 = pcVar6;
            if (iVar4 == 0) break;
            iVar4 = iVar4 + -1;
            pcVar16 = pcVar6 + 1;
            cVar13 = *pcVar6;
            pcVar6 = pcVar16;
          } while (cVar13 != '\0');
          pcVar6 = pcVar17 + -uVar9;
          pcVar17 = pcVar16 + -1;
          for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
            pcVar6 = pcVar6 + 4;
            pcVar17 = pcVar17 + 4;
          }
          for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *pcVar17 = *pcVar6;
            pcVar6 = pcVar6 + 1;
            pcVar17 = pcVar17 + 1;
          }
        }
      }
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x83),&DAT_0080f33a,-1,-1,0);
      thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x73),0x2f,2,'\x01',local_c);
      ccFntTy::EraseSufr(*(ccFntTy **)(this_00 + 0x83));
      pcVar15 = wsprintfA_exref;
    }
    if (this_00[0x69] == (MReportTy)0x1) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*(ushort *)(&DAT_0080c8a7 + (uint)(byte)this_00[0x69] * 0x10);
    }
    PaintObjScore(this_00,uVar9,(uint)DAT_0080c937,0x69,0x6a);
    if (this_00[0x69] == (MReportTy)0x1) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*(ushort *)(&DAT_0080c8a9 + (uint)(byte)this_00[0x69] * 0x10);
    }
    PaintObjScore(this_00,uVar9,(uint)DAT_0080c939,0xfb,0x6a);
    if (this_00[0x69] == (MReportTy)0x1) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*(ushort *)(&DAT_0080c8ab + (uint)(byte)this_00[0x69] * 0x10);
    }
    PaintObjScore(this_00,uVar9,(uint)DAT_0080c93b,0x18d,0x6a);
    if (this_00[0x69] == (MReportTy)0x1) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*(ushort *)(&DAT_0080c8ad + (uint)(byte)this_00[0x69] * 0x10);
    }
    PaintObjScore(this_00,uVar9,(uint)DAT_0080c93d,0x225,0x6a);
    if (this_00[0x69] == (MReportTy)0x1) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*(ushort *)(&DAT_0080c8af + (uint)(byte)this_00[0x69] * 0x10);
    }
    PaintObjScore(this_00,uVar9,(uint)DAT_0080c93f,0x69,0xcb);
    if (this_00[0x69] == (MReportTy)0x1) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*(ushort *)(&DAT_0080c8b1 + (uint)(byte)this_00[0x69] * 0x10);
    }
    PaintObjScore(this_00,uVar9,(uint)DAT_0080c941,0xfb,0xcb);
    if (this_00[0x69] == (MReportTy)0x1) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*(ushort *)(&DAT_0080c8b3 + (uint)(byte)this_00[0x69] * 0x10);
    }
    PaintObjScore(this_00,uVar9,(uint)(ushort)DAT_0080c943,0x18d,0xcb);
    if (this_00[0x69] == (MReportTy)0x1) {
      uVar9 = 0xffffffff;
    }
    else {
      uVar9 = (uint)*(ushort *)(&DAT_0080c8b5 + (uint)(byte)this_00[0x69] * 0x10);
    }
    PaintObjScore(this_00,uVar9,(uint)DAT_0080c943._2_2_,0x225,0xcb);
    MVar1 = this_00[0x69];
    if ((char)local_10 == '\x03') {
      uVar20 = DAT_0080c8bb;
      if (MVar1 != (MReportTy)0x1) {
        uVar20 = *(undefined4 *)(&DAT_0080c82b + (uint)(byte)MVar1 * 0x10);
      }
      (*pcVar15)(&DAT_0080f33a,&DAT_007ccfb8,uVar20);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x8b),*(int *)(this_00 + 0x73),0,0x8c,0x11f,0x62,0x14
                      );
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x8b),&DAT_0080f33a,-1,-1,8);
      uVar20 = DAT_0080c8bf;
      if (this_00[0x69] != (MReportTy)0x1) {
        uVar20 = *(undefined4 *)(&DAT_0080c82f + (uint)(byte)this_00[0x69] * 0x10);
      }
      (*pcVar15)(&DAT_0080f33a,&DAT_007ccfb8,uVar20);
      uVar20 = 0x12a;
    }
    else {
      uVar20 = DAT_0080c8b7;
      if (MVar1 != (MReportTy)0x1) {
        uVar20 = *(undefined4 *)(&DAT_0080c827 + (uint)(byte)MVar1 * 0x10);
      }
      (*pcVar15)(&DAT_0080f33a,&DAT_007ccfb4,uVar20);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x8b),*(int *)(this_00 + 0x73),0,0x75,0x11f,0x3e,0x14
                      );
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x8b),&DAT_0080f33a,-1,-1,8);
      uVar20 = DAT_0080c8bb;
      if (this_00[0x69] != (MReportTy)0x1) {
        uVar20 = *(undefined4 *)(&DAT_0080c82b + (uint)(byte)this_00[0x69] * 0x10);
      }
      (*pcVar15)(&DAT_0080f33a,&DAT_007ccfb8,uVar20);
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x8b),*(int *)(this_00 + 0x73),0,0xcc,0x11f,0x62,0x14
                      );
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x8b),&DAT_0080f33a,-1,-1,8);
      uVar20 = DAT_0080c8bf;
      if (this_00[0x69] != (MReportTy)0x1) {
        uVar20 = *(undefined4 *)(&DAT_0080c82f + (uint)(byte)this_00[0x69] * 0x10);
      }
      (*pcVar15)(&DAT_0080f33a,&DAT_007ccfb8,uVar20);
      uVar20 = 0x146;
    }
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x8b),*(int *)(this_00 + 0x73),0,uVar20,0x11f,0x62,0x14
                    );
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x8b),&DAT_0080f33a,-1,-1,8);
    iVar4 = DAT_0080c8c3;
    if (this_00[0x69] != (MReportTy)0x1) {
      iVar4 = *(int *)(&DAT_0080c833 + (uint)(byte)this_00[0x69] * 0x10);
    }
    if ((char)local_1c == -1) {
      iVar11 = 0;
    }
    else {
      iVar11 = (-(uint)((char)local_10 != '\x03') & 0xfffffff9) + 0x14;
    }
    if (((-1 < iVar4) && (0 < iVar11)) && (iVar11 = (iVar4 * 0x26) / iVar11, 0 < iVar11)) {
      iVar4 = 0x1c7;
      do {
        thunk_FUN_00540760(*(undefined4 **)(this_00 + 0x73),iVar4,0x121,'\x06',
                           *(byte **)(this_00 + 0x6f));
        iVar4 = iVar4 + 6;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if ((char)local_10 != '\0') {
      uVar9 = local_10 & 0xff;
      if (uVar9 == 1) {
        local_8 = 0x23f1;
      }
      else if (uVar9 == 2) {
        local_8 = 0x23f0;
      }
      else if (uVar9 == 3) {
        local_8 = 0x23f2;
      }
      pcVar6 = (char *)FUN_006b0140(local_8,DAT_00807618);
      uVar9 = 0xffffffff;
      do {
        pcVar17 = pcVar6;
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        pcVar17 = pcVar6 + 1;
        cVar13 = *pcVar6;
        pcVar6 = pcVar17;
      } while (cVar13 != '\0');
      uVar9 = ~uVar9;
      pcVar6 = pcVar17 + -uVar9;
      pcVar17 = (char *)&DAT_0080f33a;
      for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined4 *)pcVar17 = *(undefined4 *)pcVar6;
        pcVar6 = pcVar6 + 4;
        pcVar17 = pcVar17 + 4;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pcVar17 = *pcVar6;
        pcVar6 = pcVar6 + 1;
        pcVar17 = pcVar17 + 1;
      }
      for (puVar7 = FUN_0072e560(&DAT_0080f33a,'\n'); puVar7 != (uint *)0x0;
          puVar7 = FUN_0072e560(puVar7,'\n')) {
        *(undefined1 *)puVar7 = 0x20;
      }
      ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x83),*(int *)(this_00 + 0x73),0,0x37,0x145,400,0xf);
      ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x83),&DAT_0080f33a,0,-1,0);
    }
    ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x83),*(int *)(this_00 + 0x73),0,500,0x145,0xe6,0xf);
    MVar1 = this_00[0x69];
    if (MVar1 == (MReportTy)0x1) {
      UVar21 = 0x2441;
    }
    else {
      if (DAT_0080cc40 == '\0') {
        bVar2 = *(byte *)((int)&DAT_0080c83a + (byte)MVar1 + 3);
        local_8 = CONCAT31(local_8._1_3_,bVar2);
        if (DAT_00808a8f == '\0') {
          if (DAT_0080c846 == bVar2) {
LAB_005bef47:
            iVar4 = 0;
          }
          else {
            uVar10 = (uint)DAT_0080c846;
            uVar9 = (uint)bVar2;
            cVar13 = *(char *)((int)&DAT_00808a4f + uVar10 * 8 + uVar9);
            if ((cVar13 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar10) == '\0')) {
              iVar4 = -2;
            }
            else if ((cVar13 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar10) == '\0')) {
              iVar4 = -1;
            }
            else if ((cVar13 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar10) == '\x01')) {
              iVar4 = 1;
            }
            else {
              if ((cVar13 != '\x01') ||
                 (*(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar10) != '\x01')) goto LAB_005bef47;
              iVar4 = 2;
            }
          }
          bVar19 = iVar4 < 0;
        }
        else {
          bVar19 = (&DAT_008087ea)[(uint)bVar2 * 0x51] != (&DAT_008087ea)[(uint)DAT_0080c846 * 0x51]
          ;
        }
        if (bVar19) goto LAB_005bef67;
      }
      else if ((&DAT_0080c99b)[(uint)DAT_0080c846 * 0x51] !=
               (&DAT_0080c99b)[(uint)*(byte *)((int)&DAT_0080c83a + (byte)MVar1 + 3) * 0x51]) {
LAB_005bef67:
        UVar21 = 0x2442;
        goto LAB_005bef6c;
      }
      UVar21 = 0x2443;
    }
LAB_005bef6c:
    uVar20 = 2;
    iVar11 = -1;
    iVar4 = -3;
    puVar7 = (uint *)FUN_006b0140(UVar21,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x83),puVar7,iVar4,iVar11,uVar20);
  }
  iVar4 = 1;
  puVar8 = (undefined4 *)(*(int *)(this_00 + 0x5d) + 0x28);
  uVar9 = FUN_006b4fe0(*(int *)(this_00 + 0x5d));
  local_c = (byte *)FUN_006b50c0(400,0x32,(uint)*(ushort *)(*(int *)(this_00 + 0x5d) + 0xe),uVar9,
                                 puVar8,iVar4);
  uVar9 = *(uint *)(local_c + 0x14);
  if (uVar9 == 0) {
    uVar9 = ((uint)*(ushort *)(local_c + 0xe) * *(int *)(local_c + 4) + 0x1f >> 3 & 0x1ffffffc) *
            *(int *)(local_c + 8);
  }
  puVar8 = (undefined4 *)FUN_006b4fa0((int)local_c);
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar8 = 0x4c4c4c4c;
    puVar8 = puVar8 + 1;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined1 *)puVar8 = 0x4c;
    puVar8 = (undefined4 *)((int)puVar8 + 1);
  }
  FUN_006b5ee0((int)local_c,0,2,2,*(int *)(local_c + 4) + -4,*(int *)(local_c + 8) + -4,0x18,0xd);
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x83),(int)local_c,0,5,5,*(int *)(local_c + 4) + -0x69,
                   *(int *)(local_c + 8) + -10);
  uVar20 = 0;
  iVar11 = -1;
  iVar4 = -1;
  puVar7 = (uint *)FUN_006b0140(0x2444,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x83),puVar7,iVar4,iVar11,uVar20);
  FUN_006b4170((int)local_c,0,*(int *)(local_c + 4) + -0x69,(*(int *)(local_c + 8) + -0x1c) / 2,0x50
               ,0x1c,0);
  FUN_006b5ee0((int)local_c,0,*(int *)(local_c + 4) + -0x69,(*(int *)(local_c + 8) + -0x1c) / 2,0x50
               ,0x1c,0x18,0xd);
  cVar13 = (char)(DAT_0080c83a / 0xe10);
  local_8 = CONCAT31(local_8._1_3_,cVar13);
  if (cVar13 == '\0') {
    puVar12 = &DAT_007c2198;
    pCVar22 = &DAT_007c2194;
  }
  else {
    puVar12 = (undefined *)(DAT_0080c83a / 0xe10 & 0xff);
    pCVar22 = &DAT_007c219c;
  }
  wsprintfA((LPSTR)&DAT_0080f33a,pCVar22,puVar12);
  wsprintfA((LPSTR)&DAT_0080f33a,s__s_02d__02d_007c2184,&DAT_0080f33a,
            (int)(((ulonglong)DAT_0080c83a % 0xe10) / 0x3c),
            (int)(((ulonglong)DAT_0080c83a % 0xe10) % 0x3c));
  ccFntTy::SetSurf(*(ccFntTy **)(this_00 + 0x8b),(int)local_c,0,*(int *)(local_c + 4) + -0x69,
                   (*(int *)(local_c + 8) + -0x1c) / 2,0x50,0x1c);
  ccFntTy::WrStr(*(ccFntTy **)(this_00 + 0x8b),&DAT_0080f33a,-1,-1,8);
  FUN_006c5000((int)DAT_0080759c,0x174,0x1a9,(int)local_c,0,0,0,*(uint *)(local_c + 4),
               *(int *)(local_c + 8),(int)(this_00 + 0xa3),0x4c);
  FUN_006ab060(&local_c);
LAB_005bf406:
  iVar4 = *(int *)(this_00 + 0x73);
  FUN_006b48e0((int)DAT_0080759c,0x1a,0x46,iVar4,0,0,0,*(uint *)(iVar4 + 4),*(int *)(iVar4 + 8),
               (int)(this_00 + 0xa3),0x4c,0x10000ff);
  g_currentExceptionFrame = local_64.previous;
  return;
}

