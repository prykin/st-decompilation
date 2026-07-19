
/* Recovered from embedded debug metadata:
   E:\__titans\Start\rpt_obj.cpp
   MReportTy::PaintMReport */

void __thiscall MReportTy::PaintMReport(MReportTy *this,char param_1)

{
  MReportTy *this_00;
  byte bVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  char cVar12;
  undefined4 unaff_ESI;
  size_t _Count;
  code *pcVar14;
  void *unaff_EDI;
  char *pcVar15;
  char *pcVar16;
  bool bVar17;
  undefined4 uVar18;
  UINT UVar19;
  LPCSTR pCVar20;
  int iVar21;
  char local_898 [2100];
  InternalExceptionFrame local_64;
  MReportTy *local_20;
  undefined4 local_1c;
  byte *local_18;
  char local_11;
  uint local_10;
  byte *local_c;
  UINT local_8;
  size_t sVar13;
  
  local_64.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_64;
  local_20 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_64.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_64.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Start_rpt_obj_cpp_007ccec8,0x1b4,0,iVar3,&DAT_007a4ccc
                                ,s_MReportTy__PaintMReport_007ccf98);
    if (iVar10 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Start_rpt_obj_cpp_007ccec8,0x1b4);
      return;
    }
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  FUN_006b5f80(DAT_008075a8,0,0,DAT_00806730,DAT_00806734);
  this_00 = local_20;
  thunk_FUN_00540620(0,0,0,0,800,(byte *)0x3c,'\x01',*(BITMAPINFO **)&local_20->field_0x5d);
  if ((*(int *)&this_00[8].field_0x5f == 0) && (param_1 == '\0')) {
    OutTGlProc(DAT_0080759c,(int)DAT_0080759c,0,0,0x1a,10,0x2e9,0x32,(int)this_00);
  }
  if (*(int *)&this_00[8].field_0x5b != 0) {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  if (param_1 != '\0') {
    g_currentExceptionFrame = local_64.previous;
    return;
  }
  thunk_FUN_00540620(0x1a,0x46,0x1a,0x46,*(uint *)(*(int *)&this_00->field_0x73 + 4),
                     *(byte **)(*(int *)&this_00->field_0x73 + 8),'\x01',
                     *(BITMAPINFO **)&this_00->field_0x5d);
  FUN_006b4170(*(int *)&this_00->field_0x73,0,0x2e,1,0x2ba,0x15c,0x4c);
  pcVar14 = wsprintfA_exref;
  if (this_00->field_0x67 == '\0') {
    ccFntTy::SetSurf(*(ccFntTy **)&this_00[1].field_0x4,*(int *)&this_00->field_0x73,0,0x37,10,
                     *(int *)(*(int *)&this_00->field_0x73 + 4) + -0x41,0xf);
    uVar18 = 0;
    iVar10 = -1;
    iVar3 = -1;
    puVar6 = (uint *)FUN_006b0140(0x2440,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00[1].field_0x4,puVar6,iVar3,iVar10,uVar18);
    goto LAB_005bf406;
  }
  bVar1 = this_00->field_0x69;
  if (bVar1 == 0) {
    ccFntTy::SetSurf(*(ccFntTy **)&this_00[1].field_0x4,*(int *)&this_00->field_0x73,0,0x37,10,
                     *(int *)(*(int *)&this_00->field_0x73 + 4) + -0x41,0xf);
    uVar18 = 0;
    iVar10 = -1;
    iVar3 = -1;
    puVar6 = (uint *)FUN_006b0140(0x2440,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00[1].field_0x4,puVar6,iVar3,iVar10,uVar18);
    local_18 = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)&this_00[1].field_0x4,
                                           *(int *)&this_00->field_0x73,0,0,0,0x136,0x22,0);
    if (local_18 != (byte *)0x0) {
      local_10 = local_10 & 0xffffff00;
      if (DAT_0080c83e != 0xffffffff) {
        do {
          uVar8 = local_10;
          bVar1 = DAT_0080c846;
          if ((char)local_10 != '\0') {
            bVar1 = (&DAT_0080c83e)[local_10 & 0xff];
          }
          local_8 = local_8 & 0xffffff00;
          if (DAT_00808aaf != 0) {
            do {
              UVar19 = local_8;
              iVar3 = (local_8 & 0xff) * 0x9c;
              if (((&DAT_00808af4)[iVar3] == bVar1) && ((&DAT_00808af5)[iVar3] != '\0')) {
                FUN_006b4170((int)local_18,0,0,0,*(int *)(local_18 + 4),*(int *)(local_18 + 8),0x4c)
                ;
                ccFntTy::WrStr(*(ccFntTy **)&this_00[1].field_0x4,
                               &DAT_00808ab0 + (UVar19 & 0xff) * 0x27,0,-1,0);
                thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x73,0x38,
                                   (uVar8 & 0xff) * 0x26 + 0x2c,'\x01',local_18);
                break;
              }
              bVar2 = (char)local_8 + 1;
              local_8 = CONCAT31(local_8._1_3_,bVar2);
            } while (bVar2 < DAT_00808aaf);
          }
          bVar1 = (char)local_10 + 1;
          local_10 = CONCAT31(local_10._1_3_,bVar1);
        } while ((uint)bVar1 < DAT_0080c83e + 1);
      }
      ccFntTy::EraseSufr(*(ccFntTy **)&this_00[1].field_0x4);
    }
    if (this_00->field_0x68 == '\0') {
      iVar3 = 0;
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar3 == 0) {
            uVar8 = *(uint *)&this_00[5].field_0x28;
            iVar21 = 0;
            iVar10 = DAT_0080c963;
          }
          else {
            uVar8 = *(uint *)&this_00[5].field_0x28;
            iVar10 = (&DAT_0080c943)[iVar3];
            iVar21 = iVar3;
          }
          PaintMainScore(this_00,iVar10,uVar8,iVar21);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(DAT_0080c83e + 1));
      }
    }
    else {
      iVar10 = 0;
      puVar7 = (undefined4 *)&this_00[5].field_0x2c;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      if (DAT_0080c83e != 0xffffffff) {
        do {
          if (iVar10 == 0) {
            if (DAT_0080c963 == 0) {
              uVar8 = *(uint *)&this_00[5].field_0x28;
              iVar3 = 0;
              goto LAB_005bf156;
            }
          }
          else if ((&DAT_0080c943)[iVar10] == 0) {
            uVar8 = *(uint *)&this_00[5].field_0x28;
            iVar3 = iVar10;
LAB_005bf156:
            PaintMainScore(this_00,0,uVar8,iVar3);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)(DAT_0080c83e + 1));
      }
    }
  }
  else {
    bVar2 = DAT_0080c846;
    if (bVar1 != 1) {
      bVar2 = *(byte *)((int)&DAT_0080c83a + bVar1 + 3);
    }
    local_1c = CONCAT31(local_1c._1_3_,bVar2);
    bVar1 = (&DAT_0080c999)[(uint)bVar2 * 0x51];
    local_10 = CONCAT31(local_10._1_3_,bVar1);
    if (bVar1 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = bVar1 - 1;
    }
    pbVar4 = (byte *)FUN_0070b3a0(*(int *)(this_00 + 1),iVar3);
    thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x73,0x2e,1,'\x06',pbVar4);
    local_c = (byte *)ccFntTy::CreateSurf(*(ccFntTy **)&this_00[1].field_0x4,
                                          *(int *)&this_00->field_0x73,0,0x2f,2,0x2b7,0x1e,0);
    if (local_c != (byte *)0x0) {
      local_11 = '\x01';
      DAT_0080f33a._0_1_ = 0;
      local_18 = (byte *)((uint)local_18 & 0xffffff00);
      if (DAT_00808aaf != 0) {
        do {
          uVar8 = (uint)local_18 & 0xff;
          if ((&DAT_00808af4)[uVar8 * 0x9c] == (char)local_1c) {
            if (local_11 == '\0') {
              wsprintfA((LPSTR)&DAT_0080f33a,s__s___s_007ccfc0,&DAT_0080f33a,
                        &DAT_00808ab0 + uVar8 * 0x27);
            }
            else {
              wsprintfA((LPSTR)&DAT_0080f33a,&DAT_007a4ccc,&DAT_00808ab0 + uVar8 * 0x27);
              local_11 = '\0';
            }
            iVar3 = FUN_00711110(*(void **)&this_00[1].field_0x4,&DAT_0080f33a);
            if (0x2a8 < iVar3) break;
          }
          bVar1 = (char)local_18 + 1;
          local_18 = (byte *)CONCAT31(local_18._1_3_,bVar1);
        } while (bVar1 < DAT_00808aaf);
      }
      iVar3 = FUN_00711110(*(void **)&this_00[1].field_0x4,&DAT_0080f33a);
      if (0x2a8 < iVar3) {
        uVar8 = 0xffffffff;
        pcVar5 = (char *)&DAT_0080f33a;
        do {
          pcVar16 = pcVar5;
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          pcVar16 = pcVar5 + 1;
          cVar12 = *pcVar5;
          pcVar5 = pcVar16;
        } while (cVar12 != '\0');
        uVar8 = ~uVar8;
        pcVar5 = pcVar16 + -uVar8;
        pcVar16 = local_898;
        for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
          pcVar5 = pcVar5 + 4;
          pcVar16 = pcVar16 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar16 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          pcVar16 = pcVar16 + 1;
        }
        puVar7 = &DAT_0080f33a;
        for (iVar3 = 0x20d; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        uVar8 = 0xffffffff;
        iVar3 = *(int *)&this_00[1].field_0x4;
        pcVar5 = (char *)&DAT_0080f33a;
        do {
          if (uVar8 == 0) break;
          uVar8 = uVar8 - 1;
          cVar12 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar12 != '\0');
        if (*(int *)(iVar3 + 0xa0) != 0) {
          FUN_00710790(iVar3);
        }
        _Count = (int)(0x2a8 / (longlong)
                               (*(int *)(*(int *)&this_00[1].field_0x4 + 0x58) +
                               *(int *)(iVar3 + 0x86))) - 1;
        do {
          sVar13 = _Count;
          _Count = sVar13 + 1;
          Library::MSVCRT::_strncpy((char *)&DAT_0080f33a,local_898,_Count);
          iVar3 = FUN_00711110(*(void **)&this_00[1].field_0x4,&DAT_0080f33a);
          if (0x2a7 < iVar3) break;
        } while ((int)_Count < (int)(~uVar8 - 1));
        if (_Count != ~uVar8 - 1) {
          puVar7 = &DAT_0080f33a;
          for (iVar3 = 0x20d; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
          Library::MSVCRT::_strncpy((char *)&DAT_0080f33a,local_898,sVar13 - 2);
          uVar8 = 0xffffffff;
          pcVar5 = &DAT_007c7274;
          do {
            pcVar16 = pcVar5;
            if (uVar8 == 0) break;
            uVar8 = uVar8 - 1;
            pcVar16 = pcVar5 + 1;
            cVar12 = *pcVar5;
            pcVar5 = pcVar16;
          } while (cVar12 != '\0');
          uVar8 = ~uVar8;
          iVar3 = -1;
          pcVar5 = (char *)&DAT_0080f33a;
          do {
            pcVar15 = pcVar5;
            if (iVar3 == 0) break;
            iVar3 = iVar3 + -1;
            pcVar15 = pcVar5 + 1;
            cVar12 = *pcVar5;
            pcVar5 = pcVar15;
          } while (cVar12 != '\0');
          pcVar5 = pcVar16 + -uVar8;
          pcVar16 = pcVar15 + -1;
          for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar16 = pcVar16 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar16 = *pcVar5;
            pcVar5 = pcVar5 + 1;
            pcVar16 = pcVar16 + 1;
          }
        }
      }
      ccFntTy::WrStr(*(ccFntTy **)&this_00[1].field_0x4,&DAT_0080f33a,-1,-1,0);
      thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x73,0x2f,2,'\x01',local_c);
      ccFntTy::EraseSufr(*(ccFntTy **)&this_00[1].field_0x4);
      pcVar14 = wsprintfA_exref;
    }
    if (this_00->field_0x69 == 1) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)*(ushort *)(&DAT_0080c8a7 + (uint)(byte)this_00->field_0x69 * 0x10);
    }
    PaintObjScore(this_00,uVar8,(uint)DAT_0080c937,0x69,0x6a);
    if (this_00->field_0x69 == 1) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)*(ushort *)(&DAT_0080c8a9 + (uint)(byte)this_00->field_0x69 * 0x10);
    }
    PaintObjScore(this_00,uVar8,(uint)DAT_0080c939,0xfb,0x6a);
    if (this_00->field_0x69 == 1) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)*(ushort *)(&DAT_0080c8ab + (uint)(byte)this_00->field_0x69 * 0x10);
    }
    PaintObjScore(this_00,uVar8,(uint)DAT_0080c93b,0x18d,0x6a);
    if (this_00->field_0x69 == 1) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)*(ushort *)(&DAT_0080c8ad + (uint)(byte)this_00->field_0x69 * 0x10);
    }
    PaintObjScore(this_00,uVar8,(uint)DAT_0080c93d,0x225,0x6a);
    if (this_00->field_0x69 == 1) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)*(ushort *)(&DAT_0080c8af + (uint)(byte)this_00->field_0x69 * 0x10);
    }
    PaintObjScore(this_00,uVar8,(uint)DAT_0080c93f,0x69,0xcb);
    if (this_00->field_0x69 == 1) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)*(ushort *)(&DAT_0080c8b1 + (uint)(byte)this_00->field_0x69 * 0x10);
    }
    PaintObjScore(this_00,uVar8,(uint)DAT_0080c941,0xfb,0xcb);
    if (this_00->field_0x69 == 1) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)*(ushort *)(&DAT_0080c8b3 + (uint)(byte)this_00->field_0x69 * 0x10);
    }
    PaintObjScore(this_00,uVar8,(uint)(ushort)DAT_0080c943,0x18d,0xcb);
    if (this_00->field_0x69 == 1) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar8 = (uint)*(ushort *)(&DAT_0080c8b5 + (uint)(byte)this_00->field_0x69 * 0x10);
    }
    PaintObjScore(this_00,uVar8,(uint)DAT_0080c943._2_2_,0x225,0xcb);
    bVar1 = this_00->field_0x69;
    if ((char)local_10 == '\x03') {
      uVar18 = DAT_0080c8bb;
      if (bVar1 != 1) {
        uVar18 = *(undefined4 *)(&DAT_0080c82b + (uint)bVar1 * 0x10);
      }
      (*pcVar14)(&DAT_0080f33a,&DAT_007ccfb8,uVar18);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00[1].field_0xc,*(int *)&this_00->field_0x73,0,0x8c,0x11f,
                       0x62,0x14);
      ccFntTy::WrStr(*(ccFntTy **)&this_00[1].field_0xc,&DAT_0080f33a,-1,-1,8);
      uVar18 = DAT_0080c8bf;
      if (this_00->field_0x69 != 1) {
        uVar18 = *(undefined4 *)(&DAT_0080c82f + (uint)(byte)this_00->field_0x69 * 0x10);
      }
      (*pcVar14)(&DAT_0080f33a,&DAT_007ccfb8,uVar18);
      uVar18 = 0x12a;
    }
    else {
      uVar18 = DAT_0080c8b7;
      if (bVar1 != 1) {
        uVar18 = *(undefined4 *)(&DAT_0080c827 + (uint)bVar1 * 0x10);
      }
      (*pcVar14)(&DAT_0080f33a,&DAT_007ccfb4,uVar18);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00[1].field_0xc,*(int *)&this_00->field_0x73,0,0x75,0x11f,
                       0x3e,0x14);
      ccFntTy::WrStr(*(ccFntTy **)&this_00[1].field_0xc,&DAT_0080f33a,-1,-1,8);
      uVar18 = DAT_0080c8bb;
      if (this_00->field_0x69 != 1) {
        uVar18 = *(undefined4 *)(&DAT_0080c82b + (uint)(byte)this_00->field_0x69 * 0x10);
      }
      (*pcVar14)(&DAT_0080f33a,&DAT_007ccfb8,uVar18);
      ccFntTy::SetSurf(*(ccFntTy **)&this_00[1].field_0xc,*(int *)&this_00->field_0x73,0,0xcc,0x11f,
                       0x62,0x14);
      ccFntTy::WrStr(*(ccFntTy **)&this_00[1].field_0xc,&DAT_0080f33a,-1,-1,8);
      uVar18 = DAT_0080c8bf;
      if (this_00->field_0x69 != 1) {
        uVar18 = *(undefined4 *)(&DAT_0080c82f + (uint)(byte)this_00->field_0x69 * 0x10);
      }
      (*pcVar14)(&DAT_0080f33a,&DAT_007ccfb8,uVar18);
      uVar18 = 0x146;
    }
    ccFntTy::SetSurf(*(ccFntTy **)&this_00[1].field_0xc,*(int *)&this_00->field_0x73,0,uVar18,0x11f,
                     0x62,0x14);
    ccFntTy::WrStr(*(ccFntTy **)&this_00[1].field_0xc,&DAT_0080f33a,-1,-1,8);
    iVar3 = DAT_0080c8c3;
    if (this_00->field_0x69 != 1) {
      iVar3 = *(int *)(&DAT_0080c833 + (uint)(byte)this_00->field_0x69 * 0x10);
    }
    if ((char)local_1c == -1) {
      iVar10 = 0;
    }
    else {
      iVar10 = (-(uint)((char)local_10 != '\x03') & 0xfffffff9) + 0x14;
    }
    if (((-1 < iVar3) && (0 < iVar10)) && (iVar10 = (iVar3 * 0x26) / iVar10, 0 < iVar10)) {
      iVar3 = 0x1c7;
      do {
        thunk_FUN_00540760(*(undefined4 **)&this_00->field_0x73,iVar3,0x121,'\x06',
                           *(byte **)&this_00->field_0x6f);
        iVar3 = iVar3 + 6;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if ((char)local_10 != '\0') {
      uVar8 = local_10 & 0xff;
      if (uVar8 == 1) {
        local_8 = 0x23f1;
      }
      else if (uVar8 == 2) {
        local_8 = 0x23f0;
      }
      else if (uVar8 == 3) {
        local_8 = 0x23f2;
      }
      pcVar5 = (char *)FUN_006b0140(local_8,DAT_00807618);
      uVar8 = 0xffffffff;
      do {
        pcVar16 = pcVar5;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pcVar16 = pcVar5 + 1;
        cVar12 = *pcVar5;
        pcVar5 = pcVar16;
      } while (cVar12 != '\0');
      uVar8 = ~uVar8;
      pcVar5 = pcVar16 + -uVar8;
      pcVar16 = (char *)&DAT_0080f33a;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pcVar16 = *(undefined4 *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar16 = pcVar16 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar16 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar16 = pcVar16 + 1;
      }
      for (puVar6 = Library::MSVCRT::FUN_0072e560(&DAT_0080f33a,'\n'); puVar6 != (uint *)0x0;
          puVar6 = Library::MSVCRT::FUN_0072e560(puVar6,'\n')) {
        *(undefined1 *)puVar6 = 0x20;
      }
      ccFntTy::SetSurf(*(ccFntTy **)&this_00[1].field_0x4,*(int *)&this_00->field_0x73,0,0x37,0x145,
                       400,0xf);
      ccFntTy::WrStr(*(ccFntTy **)&this_00[1].field_0x4,&DAT_0080f33a,0,-1,0);
    }
    ccFntTy::SetSurf(*(ccFntTy **)&this_00[1].field_0x4,*(int *)&this_00->field_0x73,0,500,0x145,
                     0xe6,0xf);
    bVar1 = this_00->field_0x69;
    if (bVar1 == 1) {
      UVar19 = 0x2441;
    }
    else {
      if (DAT_0080cc40 == '\0') {
        bVar1 = *(byte *)((int)&DAT_0080c83a + bVar1 + 3);
        local_8 = CONCAT31(local_8._1_3_,bVar1);
        if (DAT_00808a8f == '\0') {
          if (DAT_0080c846 == bVar1) {
LAB_005bef47:
            iVar3 = 0;
          }
          else {
            uVar9 = (uint)DAT_0080c846;
            uVar8 = (uint)bVar1;
            cVar12 = *(char *)((int)&DAT_00808a4f + uVar9 * 8 + uVar8);
            if ((cVar12 == '\0') && (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar9) == '\0')) {
              iVar3 = -2;
            }
            else if ((cVar12 == '\x01') &&
                    (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar9) == '\0')) {
              iVar3 = -1;
            }
            else if ((cVar12 == '\0') &&
                    (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar9) == '\x01')) {
              iVar3 = 1;
            }
            else {
              if ((cVar12 != '\x01') ||
                 (*(char *)((int)&DAT_00808a4f + uVar8 * 8 + uVar9) != '\x01')) goto LAB_005bef47;
              iVar3 = 2;
            }
          }
          bVar17 = iVar3 < 0;
        }
        else {
          bVar17 = (&DAT_008087ea)[(uint)bVar1 * 0x51] != (&DAT_008087ea)[(uint)DAT_0080c846 * 0x51]
          ;
        }
        if (bVar17) goto LAB_005bef67;
      }
      else if ((&DAT_0080c99b)[(uint)DAT_0080c846 * 0x51] !=
               (&DAT_0080c99b)[(uint)*(byte *)((int)&DAT_0080c83a + bVar1 + 3) * 0x51]) {
LAB_005bef67:
        UVar19 = 0x2442;
        goto LAB_005bef6c;
      }
      UVar19 = 0x2443;
    }
LAB_005bef6c:
    uVar18 = 2;
    iVar10 = -1;
    iVar3 = -3;
    puVar6 = (uint *)FUN_006b0140(UVar19,DAT_00807618);
    ccFntTy::WrStr(*(ccFntTy **)&this_00[1].field_0x4,puVar6,iVar3,iVar10,uVar18);
  }
  iVar3 = 1;
  puVar7 = (undefined4 *)(*(int *)&this_00->field_0x5d + 0x28);
  uVar8 = FUN_006b4fe0(*(int *)&this_00->field_0x5d);
  local_c = (byte *)FUN_006b50c0(400,0x32,(uint)*(ushort *)(*(int *)&this_00->field_0x5d + 0xe),
                                 uVar8,puVar7,iVar3);
  uVar8 = *(uint *)(local_c + 0x14);
  if (uVar8 == 0) {
    uVar8 = ((uint)*(ushort *)(local_c + 0xe) * *(int *)(local_c + 4) + 0x1f >> 3 & 0x1ffffffc) *
            *(int *)(local_c + 8);
  }
  puVar7 = (undefined4 *)FUN_006b4fa0((int)local_c);
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *puVar7 = 0x4c4c4c4c;
    puVar7 = puVar7 + 1;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined1 *)puVar7 = 0x4c;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  FUN_006b5ee0((int)local_c,0,2,2,*(int *)(local_c + 4) + -4,*(int *)(local_c + 8) + -4,0x18,0xd);
  ccFntTy::SetSurf(*(ccFntTy **)&this_00[1].field_0x4,(int)local_c,0,5,5,
                   *(int *)(local_c + 4) + -0x69,*(int *)(local_c + 8) + -10);
  uVar18 = 0;
  iVar10 = -1;
  iVar3 = -1;
  puVar6 = (uint *)FUN_006b0140(0x2444,DAT_00807618);
  ccFntTy::WrStr(*(ccFntTy **)&this_00[1].field_0x4,puVar6,iVar3,iVar10,uVar18);
  FUN_006b4170((int)local_c,0,*(int *)(local_c + 4) + -0x69,(*(int *)(local_c + 8) + -0x1c) / 2,0x50
               ,0x1c,0);
  FUN_006b5ee0((int)local_c,0,*(int *)(local_c + 4) + -0x69,(*(int *)(local_c + 8) + -0x1c) / 2,0x50
               ,0x1c,0x18,0xd);
  cVar12 = (char)(DAT_0080c83a / 0xe10);
  local_8 = CONCAT31(local_8._1_3_,cVar12);
  if (cVar12 == '\0') {
    puVar11 = &DAT_007c2198;
    pCVar20 = &DAT_007c2194;
  }
  else {
    puVar11 = (undefined *)(DAT_0080c83a / 0xe10 & 0xff);
    pCVar20 = &DAT_007c219c;
  }
  wsprintfA((LPSTR)&DAT_0080f33a,pCVar20,puVar11);
  wsprintfA((LPSTR)&DAT_0080f33a,s__s_02d__02d_007c2184,&DAT_0080f33a,
            (int)(((ulonglong)DAT_0080c83a % 0xe10) / 0x3c),
            (int)(((ulonglong)DAT_0080c83a % 0xe10) % 0x3c));
  ccFntTy::SetSurf(*(ccFntTy **)&this_00[1].field_0xc,(int)local_c,0,*(int *)(local_c + 4) + -0x69,
                   (*(int *)(local_c + 8) + -0x1c) / 2,0x50,0x1c);
  ccFntTy::WrStr(*(ccFntTy **)&this_00[1].field_0xc,&DAT_0080f33a,-1,-1,8);
  Library::DKW::DDX::FUN_006c5000
            ((int)DAT_0080759c,0x174,0x1a9,(int)local_c,0,0,0,*(uint *)(local_c + 4),
             *(int *)(local_c + 8),(int)&this_00[1].field_0x24,0x4c);
  FUN_006ab060(&local_c);
LAB_005bf406:
  iVar3 = *(int *)&this_00->field_0x73;
  Library::DKW::DDX::FUN_006b48e0
            ((int)DAT_0080759c,0x1a,0x46,iVar3,0,0,0,*(uint *)(iVar3 + 4),*(int *)(iVar3 + 8),
             (int)&this_00[1].field_0x24,0x4c,0x10000ff);
  g_currentExceptionFrame = local_64.previous;
  return;
}

