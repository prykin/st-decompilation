
/* Recovered from embedded debug metadata:
   E:\__titans\Start\fsgs_obj.cpp
   FSGSTy::SetState */

void __thiscall FSGSTy::SetState(FSGSTy *this,undefined1 param_1)

{
  StartSystemTy *pSVar1;
  code *pcVar2;
  FSGSTy *this_00;
  undefined4 *puVar3;
  uint *puVar4;
  HoloTy *pHVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 uVar8;
  uint uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 local_270 [7];
  InternalExceptionFrame local_254;
  undefined4 local_210;
  undefined4 local_203;
  undefined4 local_1ff;
  undefined4 local_1fb;
  undefined4 local_1e9;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1c2;
  undefined4 local_1b5;
  undefined4 local_1b1;
  undefined4 local_1ad;
  undefined4 local_14d;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_126;
  undefined1 local_122;
  undefined4 local_119;
  undefined4 local_115;
  undefined4 local_111;
  FSGSTy *local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar3 = &local_210;
  local_14 = this;
  for (iVar7 = 0x7e; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  local_8 = 0xffffffff;
  local_254.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_254;
  iVar7 = Library::MSVCRT::__setjmp3(local_254.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_254.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x397,0,iVar7,&DAT_007a4ccc
                               ,s_FSGSTy__SetState_007cc1b8);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Start_fsgs_obj_cpp_007cbf70,0x397);
    return;
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  this_00 = local_14;
  local_14->field_0065 = param_1;
  if (local_14->field_1F23 != (HoloTy *)0x0) {
    HoloTy::Done(local_14->field_1F23);
    Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_1F23);
    this_00->field_1F23 = (HoloTy *)0x0;
  }
  if (this_00->field_1F27 != (HoloTy *)0x0) {
    HoloTy::Done(this_00->field_1F27);
    Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_1F27);
    this_00->field_1F27 = (HoloTy *)0x0;
  }
  if (this_00->field_1F2B != (HoloTy *)0x0) {
    HoloTy::Done(this_00->field_1F2B);
    Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_1F2B);
    this_00->field_1F2B = (HoloTy *)0x0;
  }
  if (this_00->field_1F2F != (HoloTy *)0x0) {
    HoloTy::Done(this_00->field_1F2F);
    Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_1F2F);
    this_00->field_1F2F = (HoloTy *)0x0;
  }
  switch(this_00->field_0065) {
  case 6:
    if (this_00->field_1ABB != '\0') {
      PrepBkgMess(this_00,'\0');
    }
    iVar7 = this_00->field_1AC0;
    uVar9 = *(uint *)(iVar7 + 0x14);
    if (uVar9 == 0) {
      uVar9 = ((uint)*(ushort *)(iVar7 + 0xe) * *(int *)(iVar7 + 4) + 0x1f >> 3 & 0x1ffffffc) *
              *(int *)(iVar7 + 8);
    }
    puVar3 = (undefined4 *)FUN_006b4fa0(iVar7);
    for (uVar14 = uVar9 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar3 = 0xff;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
    ccFntTy::SetSurf(this_00->field_1A73,this_00->field_1AC0,0,0,0x16,0x1b8,0xf0);
    iVar12 = -1;
    iVar11 = -1;
    uVar8 = 2;
    iVar6 = -1;
    iVar7 = -1;
    puVar4 = (uint *)FUN_006b0140(0x254e,DAT_00807618);
    ccFntTy::WrTxt(this_00->field_1A73,puVar4,iVar7,iVar6,uVar8,iVar11,iVar12);
    Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_00->field_1ABC);
    FUN_006b35d0(DAT_008075a8,this_00->field_1ABC);
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4035e9,0x1b8,0x106,0x2563);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0xb4,0xaa);
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == (HoloTy *)0x0) {
      pHVar5 = (HoloTy *)0x0;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      pHVar5->field_0003 = 0xffffffff;
      pHVar5->field_0001 = 2;
      pHVar5->field_0007 = 0;
      pHVar5->field_000B = 0;
      *(undefined4 *)&pHVar5->field_0xf = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = 0xffffffff;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F23 = pHVar5;
    if (pHVar5 != (HoloTy *)0x0) {
      uVar14 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar6 = 1;
      iVar7 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0xb4,0xaa,0x1b8,0x106);
      uVar9 = HoloTy::Init(this_00->field_1F23,CASE_2,0xb4,0xaa,iVar7,iVar6,uVar9,cVar10,uVar14);
      if (uVar9 != 0) {
        pHVar5 = this_00->field_1F23;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar9 = this_00->field_1F23->field_0003;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar9);
        }
        HoloTy::NextFas(this_00->field_1F23);
        FUN_006b3af0(DAT_008075a8,this_00->field_1ABC);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    local_119 = this_00->field_0008;
    local_126 = 0x2336;
    local_115 = 2;
    local_111 = 0x6941;
    goto switchD_00597fa6_caseD_9;
  case 7:
    cVar10 = this_00->field_1A5F;
    local_c = 0x2563;
    if (cVar10 == '\x03') {
      FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x2e1,0x14c,
                   (uint)&this_00->field_1A5B->field_0x140);
      Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x22,0x72);
      this_00->field_1B48 = 0x77;
      this_00->field_1B44 = 0x2fe - this_00->field_1B4C;
      if (this_00->field_1B2C != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1B70,this_00->field_1B2C,0xfffffffe,this_00->field_1B44,
                   this_00->field_1B48);
      }
      if (this_00->field_1B2C != 0xffffffff) {
        FUN_006b35d0((int *)this_00->field_1B70,this_00->field_1B2C);
      }
      this_00->field_1BD5 = 0x2fe - this_00->field_1BDD;
      this_00->field_1BD9 = 0x1b9 - this_00->field_1BE1;
      if (this_00->field_1BBD != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1C01,this_00->field_1BBD,0xfffffffe,this_00->field_1BD5,
                   this_00->field_1BD9);
      }
      if (this_00->field_1BBD != 0xffffffff) {
        FUN_006b35d0((int *)this_00->field_1C01,this_00->field_1BBD);
      }
      this_00->field_1C6A = 0x98;
      uVar9 = 0x2ee - (this_00->field_1C6E + -7) / 2;
      this_00->field_1C66 = uVar9;
      if (this_00->field_1C4E != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1C92,this_00->field_1C4E,0xfffffffe,uVar9,
                   this_00->field_1C6A);
      }
      if (this_00->field_1C4E != 0xffffffff) {
        FUN_006b35d0((int *)this_00->field_1C92,this_00->field_1C4E);
      }
      pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
      if (pHVar5 == (HoloTy *)0x0) {
        pHVar5 = (HoloTy *)0x0;
      }
      else {
        pHVar5->field_0002 = 1;
        pHVar5->field_0000 = 0;
        pHVar5->field_0003 = 0xffffffff;
        pHVar5->field_0001 = 2;
        pHVar5->field_0007 = 0;
        pHVar5->field_000B = 0;
        *(undefined4 *)&pHVar5->field_0xf = 0;
        *(undefined4 *)&pHVar5->field_0x1b = 1;
        pHVar5->field_0013 = 1;
        pHVar5->field_0017 = 0xffffffff;
        pHVar5->field_0027 = 0;
        pHVar5->field_0023 = 0;
        pHVar5->field_002F = 1;
        pHVar5->field_002B = 1;
      }
      this_00->field_1F23 = pHVar5;
      if (pHVar5 != (HoloTy *)0x0) {
        uVar14 = 0;
        cVar10 = '\x01';
        uVar9 = 0x10;
        iVar6 = 1;
        iVar7 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x22,0x72,0x2e1,0x14c);
        uVar9 = HoloTy::Init(this_00->field_1F23,CASE_2,0x22,0x72,iVar7,iVar6,uVar9,cVar10,uVar14);
        if (uVar9 != 0) {
          pHVar5 = this_00->field_1F23;
          pHVar5->field_0002 = 1;
          pHVar5->field_0017 = pHVar5->field_0013;
          uVar9 = this_00->field_1F23->field_0003;
          if (-1 < (int)uVar9) {
            Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar9);
          }
          HoloTy::NextFas(this_00->field_1F23);
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
      FUN_006b3af0(DAT_008075a8,this_00->field_1ABC);
      if (this_00->field_1B2C != 0xffffffff) {
        FUN_006b3af0((int *)this_00->field_1B70,this_00->field_1B2C);
      }
      if (this_00->field_1BBD != 0xffffffff) {
        FUN_006b3af0((int *)this_00->field_1C01,this_00->field_1BBD);
      }
      if (this_00->field_1C4E != 0xffffffff) {
        FUN_006b3af0((int *)this_00->field_1C92,this_00->field_1C4E);
      }
    }
    else {
      if (cVar10 == '\t') {
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x401032,0x2e1,0x175,0);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x22,0x5e);
        pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (pHVar5 == (HoloTy *)0x0) {
          pHVar5 = (HoloTy *)0x0;
        }
        else {
          pHVar5->field_0002 = 1;
          pHVar5->field_0000 = 0;
          pHVar5->field_0003 = 0xffffffff;
          pHVar5->field_0001 = 2;
          pHVar5->field_0007 = 0;
          pHVar5->field_000B = 0;
          *(undefined4 *)&pHVar5->field_0xf = 0;
          *(undefined4 *)&pHVar5->field_0x1b = 1;
          pHVar5->field_0013 = 1;
          pHVar5->field_0017 = 0xffffffff;
          pHVar5->field_0027 = 0;
          pHVar5->field_0023 = 0;
          pHVar5->field_002F = 1;
          pHVar5->field_002B = 1;
        }
        this_00->field_1F23 = pHVar5;
        if (pHVar5 != (HoloTy *)0x0) {
          uVar14 = 0;
          cVar10 = '\x01';
          uVar9 = 0x10;
          iVar6 = 1;
          iVar7 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x22,0x5e,0x2e1,0x175);
          uVar9 = HoloTy::Init(this_00->field_1F23,CASE_2,0x22,0x5e,iVar7,iVar6,uVar9,cVar10,uVar14)
          ;
          if (uVar9 != 0) {
            pHVar5 = this_00->field_1F23;
            pHVar5->field_0002 = 1;
            pHVar5->field_0017 = pHVar5->field_0013;
            uVar9 = this_00->field_1F23->field_0003;
            if (-1 < (int)uVar9) {
              Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar9);
            }
            HoloTy::NextFas(this_00->field_1F23);
            FUN_006b3af0(DAT_008075a8,this_00->field_1ABC);
          }
        }
      }
      else {
        switch(cVar10) {
        case '\x02':
        case '\x04':
        case '\x05':
        case '\a':
          if (this_00->field_1ABB != '\0') {
            cVar10 = '\0';
LAB_00598221:
            PrepBkgMess(this_00,cVar10);
          }
          break;
        case '\n':
          if (this_00->field_1ABB != '\x01') {
            cVar10 = '\x01';
            goto LAB_00598221;
          }
        }
        switch(this_00->field_1A5F) {
        case 2:
          PaintLogLogin(this_00);
          local_c = 0x2553;
          break;
        case 4:
          PaintLogNew(this_00);
          DAT_0080735f = 0;
          local_c = 0x2552;
          break;
        case 5:
          PaintLogPsw(this_00);
          local_c = 0x2562;
          break;
        case 7:
          PaintGameNew(this_00);
          local_c = 0x255b;
          break;
        case 10:
          PaintInfo(this_00);
          local_c = 0x259c;
        }
        uVar9 = (-(uint)(this_00->field_1ABB != '\0') & 0xffffffb4) + 0xaa;
        local_10 = (-(uint)(this_00->field_1ABB != '\0') & 0x74) + 0x106;
        FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4035e9,0x1b8,local_10,local_c);
        Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0xb4,uVar9);
        pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
        if (pHVar5 == (HoloTy *)0x0) {
          pHVar5 = (HoloTy *)0x0;
        }
        else {
          pHVar5->field_0002 = 1;
          pHVar5->field_0000 = 0;
          pHVar5->field_0003 = 0xffffffff;
          pHVar5->field_0001 = 2;
          pHVar5->field_0007 = 0;
          pHVar5->field_000B = 0;
          *(undefined4 *)&pHVar5->field_0xf = 0;
          *(undefined4 *)&pHVar5->field_0x1b = 1;
          pHVar5->field_0013 = 1;
          pHVar5->field_0017 = 0xffffffff;
          pHVar5->field_0027 = 0;
          pHVar5->field_0023 = 0;
          pHVar5->field_002F = 1;
          pHVar5->field_002B = 1;
        }
        this_00->field_1F23 = pHVar5;
        if (pHVar5 != (HoloTy *)0x0) {
          uVar13 = 0;
          cVar10 = '\x01';
          uVar14 = 0x10;
          iVar6 = 1;
          iVar7 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0xb4,uVar9,0x1b8,local_10);
          uVar9 = HoloTy::Init(this_00->field_1F23,CASE_2,0xb4,uVar9,iVar7,iVar6,uVar14,cVar10,
                               uVar13);
          if (uVar9 != 0) {
            pHVar5 = this_00->field_1F23;
            pHVar5->field_0002 = 1;
            pHVar5->field_0017 = pHVar5->field_0013;
            uVar9 = this_00->field_1F23->field_0003;
            if (-1 < (int)uVar9) {
              Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar9);
            }
            HoloTy::NextFas(this_00->field_1F23);
            FUN_006b3af0(DAT_008075a8,this_00->field_1ABC);
          }
        }
      }
      if (local_8 != 0xffffffff) {
        FUN_006b3bb0(DAT_008075a8,local_8);
        local_8 = 0xffffffff;
      }
    }
    switch(this_00->field_1A5F) {
    case 2:
      local_203 = this_00->field_0008;
      local_122 = this_00->field_1ED2;
      local_210 = 0x2552;
      local_1ff = 2;
      local_1fb = 0x6954;
      local_1e9 = 0x2553;
      local_1d8 = 2;
      local_1d4 = 0x6953;
      local_1c2 = 0x2564;
      local_1b1 = 2;
      local_1ad = 0x694b;
      local_126 = 0x2336;
      local_115 = 2;
      local_111 = 0x6941;
      local_1dc = local_203;
      local_1b5 = local_203;
      local_119 = local_203;
      break;
    case 3:
      local_203 = this_00->field_0008;
      local_210 = 0x255f;
      local_1ff = 2;
      local_1fb = 0x63ff;
      local_1e9 = 0x2560;
      local_1d8 = 2;
      local_1d4 = 0x6952;
      local_14d = 0x254c;
      local_13c = 2;
      local_138 = 0x6941;
      local_126 = 0x24bc;
      local_115 = 2;
      local_111 = 0x6952;
      local_1dc = local_203;
      local_140 = local_203;
      local_119 = local_203;
      break;
    case 4:
      local_1dc = this_00->field_0008;
      local_1e9 = 0x2553;
      local_1d4 = 0x6953;
      goto LAB_00599280;
    case 5:
      local_1dc = this_00->field_0008;
      local_1e9 = 0x2561;
      local_1d4 = 0x694b;
      goto LAB_00599280;
    case 7:
      goto switchD_005987a8_caseD_7;
    case 9:
    case 10:
      local_140 = this_00->field_0008;
      goto LAB_00599290;
    }
    goto switchD_00597fa6_caseD_9;
  case 8:
    this_00->field_1B48 = 99;
    this_00->field_1B44 = 0x1cd - this_00->field_1B4C;
    if (this_00->field_1B2C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1B70,this_00->field_1B2C,0xfffffffe,this_00->field_1B44,
                 this_00->field_1B48);
    }
    if (this_00->field_1B2C != 0xffffffff) {
      FUN_006b35d0((int *)this_00->field_1B70,this_00->field_1B2C);
    }
    this_00->field_1BD5 = 0x1cd - this_00->field_1BDD;
    this_00->field_1BD9 = 0x1b8 - this_00->field_1BE1;
    if (this_00->field_1BBD != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1C01,this_00->field_1BBD,0xfffffffe,this_00->field_1BD5,
                 this_00->field_1BD9);
    }
    if (this_00->field_1BBD != 0xffffffff) {
      FUN_006b35d0((int *)this_00->field_1C01,this_00->field_1BBD);
    }
    this_00->field_1C6A = 0x84;
    uVar9 = 0x1bd - (this_00->field_1C6E + -7) / 2;
    this_00->field_1C66 = uVar9;
    if (this_00->field_1C4E != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1C92,this_00->field_1C4E,0xfffffffe,uVar9,
                 this_00->field_1C6A);
    }
    if (this_00->field_1C4E != 0xffffffff) {
      FUN_006b35d0((int *)this_00->field_1C92,this_00->field_1C4E);
    }
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4023b0,0x1bf,0x175,
                 (uint)&this_00->field_1A5B->field_0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x13,0x5e);
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == (HoloTy *)0x0) {
      pHVar5 = (HoloTy *)0x0;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      pHVar5->field_0003 = 0xffffffff;
      pHVar5->field_0001 = 2;
      pHVar5->field_0007 = 0;
      pHVar5->field_000B = 0;
      *(undefined4 *)&pHVar5->field_0xf = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = 0xffffffff;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F27 = pHVar5;
    if (pHVar5 != (HoloTy *)0x0) {
      uVar14 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar6 = 1;
      iVar7 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x13,0x5e,0x1bf,0x175);
      uVar9 = HoloTy::Init(this_00->field_1F27,CASE_4,0x13,0x5e,iVar7,iVar6,uVar9,cVar10,uVar14);
      if (uVar9 != 0) {
        pHVar5 = this_00->field_1F27;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar9 = this_00->field_1F27->field_0003;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar9);
        }
        HoloTy::NextFas(this_00->field_1F27);
        if (this_00->field_1B2C != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1B70,this_00->field_1B2C);
        }
        if (this_00->field_1BBD != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1C01,this_00->field_1BBD);
        }
        if (this_00->field_1C4E != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1C92,this_00->field_1C4E);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    uVar9 = 0x308 - this_00->field_1CFF;
    this_00->field_1CFB = 99;
    this_00->field_1CF7 = uVar9;
    if (this_00->field_1CDF != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1D23,this_00->field_1CDF,0xfffffffe,uVar9,
                 this_00->field_1CFB);
    }
    if (this_00->field_1CDF != 0xffffffff) {
      FUN_006b35d0((int *)this_00->field_1D23,this_00->field_1CDF);
    }
    this_00->field_1D88 = 0x308 - this_00->field_1D90;
    this_00->field_1D8C = 0x16f - this_00->field_1D94;
    if (this_00->field_1D70 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1DB4,this_00->field_1D70,0xfffffffe,this_00->field_1D88,
                 this_00->field_1D8C);
    }
    if (this_00->field_1D70 != 0xffffffff) {
      FUN_006b35d0((int *)this_00->field_1DB4,this_00->field_1D70);
    }
    this_00->field_1E1D = 0x84;
    uVar9 = 0x2f8 - (this_00->field_1E21 + -7) / 2;
    this_00->field_1E19 = uVar9;
    if (this_00->field_1E01 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1E45,this_00->field_1E01,0xfffffffe,uVar9,
                 this_00->field_1E1D);
    }
    if (this_00->field_1E01 != 0xffffffff) {
      FUN_006b35d0((int *)this_00->field_1E45,this_00->field_1E01);
    }
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x40303f,0x124,0x175,
                 (uint)&this_00->field_1A5B->field_0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x1e9,0x5e);
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == (HoloTy *)0x0) {
      pHVar5 = (HoloTy *)0x0;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      pHVar5->field_0003 = 0xffffffff;
      pHVar5->field_0001 = 2;
      pHVar5->field_0007 = 0;
      pHVar5->field_000B = 0;
      *(undefined4 *)&pHVar5->field_0xf = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = 0xffffffff;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F2B = pHVar5;
    if (pHVar5 != (HoloTy *)0x0) {
      uVar14 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar6 = 1;
      iVar7 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x1e9,0x5e,0x124,0x175);
      uVar9 = HoloTy::Init(this_00->field_1F2B,CASE_2,0x1e9,0x5e,iVar7,iVar6,uVar9,cVar10,uVar14);
      if (uVar9 != 0) {
        pHVar5 = this_00->field_1F2B;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar9 = this_00->field_1F2B->field_0003;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar9);
        }
        HoloTy::NextFas(this_00->field_1F2B);
        if (this_00->field_1CDF != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1D23,this_00->field_1CDF);
        }
        if (this_00->field_1D70 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1DB4,this_00->field_1D70);
        }
        if (this_00->field_1E01 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1E45,this_00->field_1E01);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    local_203 = this_00->field_0008;
    local_210 = 0x255b;
    local_1ff = 2;
    local_1fb = 0x694a;
    local_1e9 = 0x255c;
    local_1d4 = 0x694e;
    local_1c2 = 0x255d;
    local_1b1 = 2;
    local_1ad = 0x6949;
    local_1dc = local_203;
    local_1b5 = local_203;
    break;
  default:
    goto switchD_00597fa6_caseD_9;
  case 10:
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x403981,0x174,0x175,
                 (uint)&this_00->field_1A5B->field_0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x199,0x5e);
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == (HoloTy *)0x0) {
      pHVar5 = (HoloTy *)0x0;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      pHVar5->field_0003 = 0xffffffff;
      pHVar5->field_0001 = 2;
      pHVar5->field_0007 = 0;
      pHVar5->field_000B = 0;
      *(undefined4 *)&pHVar5->field_0xf = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = 0xffffffff;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F2F = pHVar5;
    if (pHVar5 != (HoloTy *)0x0) {
      uVar14 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar6 = 1;
      iVar7 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x199,0x5e,0x174,0x175);
      uVar9 = HoloTy::Init(this_00->field_1F2F,CASE_2,0x199,0x5e,iVar7,iVar6,uVar9,cVar10,uVar14);
      if (uVar9 != 0) {
        pHVar5 = this_00->field_1F2F;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar9 = this_00->field_1F2F->field_0003;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar9);
        }
        HoloTy::NextFas(this_00->field_1F2F);
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
    uVar9 = 0x182 - this_00->field_1CFF;
    this_00->field_1CFB = 99;
    this_00->field_1CF7 = uVar9;
    if (this_00->field_1CDF != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1D23,this_00->field_1CDF,0xfffffffe,uVar9,
                 this_00->field_1CFB);
    }
    if (this_00->field_1CDF != 0xffffffff) {
      FUN_006b35d0((int *)this_00->field_1D23,this_00->field_1CDF);
    }
    this_00->field_1D88 = 0x182 - this_00->field_1D90;
    this_00->field_1D8C = 0x1ce - this_00->field_1D94;
    if (this_00->field_1D70 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1DB4,this_00->field_1D70,0xfffffffe,this_00->field_1D88,
                 this_00->field_1D8C);
    }
    if (this_00->field_1D70 != 0xffffffff) {
      FUN_006b35d0((int *)this_00->field_1DB4,this_00->field_1D70);
    }
    this_00->field_1E1D = 0x84;
    uVar9 = 0x172 - (this_00->field_1E21 + -7) / 2;
    this_00->field_1E19 = uVar9;
    if (this_00->field_1E01 != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)this_00->field_1E45,this_00->field_1E01,0xfffffffe,uVar9,
                 this_00->field_1E1D);
    }
    if (this_00->field_1E01 != 0xffffffff) {
      FUN_006b35d0((int *)this_00->field_1E45,this_00->field_1E01);
    }
    FUN_006b2330((uint)DAT_008075a8,&local_8,0x32,0x4042d2,0x174,0x175,
                 (uint)&this_00->field_1A5B->field_0x140);
    Library::DKW::DDX::FUN_006b3640(DAT_008075a8,local_8,0xffffffff,0x13,0x5e);
    pHVar5 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar5 == (HoloTy *)0x0) {
      pHVar5 = (HoloTy *)0x0;
    }
    else {
      pHVar5->field_0002 = 1;
      pHVar5->field_0000 = 0;
      pHVar5->field_0003 = 0xffffffff;
      pHVar5->field_0001 = 2;
      pHVar5->field_0007 = 0;
      pHVar5->field_000B = 0;
      *(undefined4 *)&pHVar5->field_0xf = 0;
      *(undefined4 *)&pHVar5->field_0x1b = 1;
      pHVar5->field_0013 = 1;
      pHVar5->field_0017 = 0xffffffff;
      pHVar5->field_0027 = 0;
      pHVar5->field_0023 = 0;
      pHVar5->field_002F = 1;
      pHVar5->field_002B = 1;
    }
    this_00->field_1F2B = pHVar5;
    if (pHVar5 != (HoloTy *)0x0) {
      uVar14 = 0;
      cVar10 = '\x01';
      uVar9 = 0x10;
      iVar6 = 1;
      iVar7 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x13,0x5e,0x174,0x175);
      uVar9 = HoloTy::Init(this_00->field_1F2B,CASE_4,0x13,0x5e,iVar7,iVar6,uVar9,cVar10,uVar14);
      if (uVar9 != 0) {
        pHVar5 = this_00->field_1F2B;
        pHVar5->field_0002 = 1;
        pHVar5->field_0017 = pHVar5->field_0013;
        uVar9 = this_00->field_1F2B->field_0003;
        if (-1 < (int)uVar9) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar9);
        }
        HoloTy::NextFas(this_00->field_1F2B);
        if (this_00->field_1CDF != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1D23,this_00->field_1CDF);
        }
        if (this_00->field_1D70 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1DB4,this_00->field_1D70);
        }
        if (this_00->field_1E01 != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1E45,this_00->field_1E01);
        }
      }
    }
    if (local_8 != 0xffffffff) {
      FUN_006b3bb0(DAT_008075a8,local_8);
      local_8 = 0xffffffff;
    }
switchD_005987a8_caseD_7:
    local_1dc = this_00->field_0008;
    local_1e9 = 0x24b8;
    local_1d4 = 0x63ff;
  }
LAB_00599280:
  local_1d8 = 2;
  local_140 = local_1dc;
LAB_00599290:
  local_14d = 0x254c;
  local_13c = 2;
  local_138 = 0x6941;
  local_126 = 0x24bc;
  local_115 = 2;
  local_111 = 0x6952;
  local_119 = local_140;
switchD_00597fa6_caseD_9:
  pSVar1 = this_00->field_1A5B;
  if (pSVar1->field_02E6 != (MMsgTy *)0x0) {
    puVar3 = local_270;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar3 = 0xffffffff;
      puVar3 = puVar3 + 1;
    }
    *(undefined2 *)puVar3 = 0xffff;
    MMsgTy::SetPanel(pSVar1->field_02E6,0,(int)&local_210,0,0);
    MMsgTy::StatePanel(this_00->field_1A5B->field_02E6,(int)local_270);
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                 *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      g_currentExceptionFrame = local_254.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_254.previous;
  return;
}

