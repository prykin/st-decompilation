
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::DeleteCtrls */

void __thiscall SettMapTy::DeleteCtrls(SettMapTy *this)

{
  AnonPointee_StartSystemTy_0544 *pAVar1;
  code *pcVar2;
  SettMapTy *this_00;
  int iVar3;
  HoloTy *pHVar4;
  uint *puVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  InternalExceptionFrame local_54;
  SettMapTy *local_10;
  int local_c;
  int local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x3a4,0,iVar3,&DAT_007a4ccc
                               ,s_SettMapTy__DeleteCtrls_007cd208);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x3a4);
    return;
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8b10((int *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      FUN_006b3af0((int *)PTR_00802a30->field_0060,PTR_00802a30->field_001C);
    }
  }
  this_00 = local_10;
  if (local_10->field_215D != 0) {
    StartSystemTy::sub_006E56B0(local_10->field_000C,local_10->field_215D);
  }
  this_00->field_215D = 0;
  puVar5 = &this_00->field_1F8C;
  local_c = 10;
  do {
    local_8 = 8;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (this_00->field_211D != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_211D);
      this_00->field_211D = 0;
    }
    local_c = local_c + -1;
  } while (local_c != 0);
  if (this_00->field_21E8 != (HoloTy *)0x0) {
    HoloTy::Done(this_00->field_21E8);
    Library::MSVCRT::FUN_0072e2b0(this_00->field_21E8);
    this_00->field_21E8 = (HoloTy *)0x0;
  }
  pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar4 == (HoloTy *)0x0) {
    pHVar4 = (HoloTy *)0x0;
  }
  else {
    pHVar4->field_0002 = 1;
    pHVar4->field_0000 = 0;
    pHVar4->field_0003 = 0xffffffff;
    pHVar4->field_0001 = CASE_2;
    pHVar4->field_0007 = 0;
    pHVar4->field_000B = 0;
    *(undefined4 *)&pHVar4->field_0xf = 0;
    *(undefined4 *)&pHVar4->field_0x1b = 1;
    pHVar4->field_0013 = 1;
    pHVar4->field_0017 = 0xffffffff;
    pHVar4->field_0027 = 0;
    pHVar4->field_0023 = 0;
    pHVar4->field_002F = 1;
    pHVar4->field_002B = 1;
  }
  this_00->field_21E8 = pHVar4;
  if (pHVar4 != (HoloTy *)0x0) {
    uVar9 = 0;
    cVar8 = '\x01';
    uVar7 = 0x10;
    iVar6 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x205,0x104);
    uVar7 = HoloTy::Init(this_00->field_21E8,CASE_2,0x112,0x38,iVar3,iVar6,uVar7,cVar8,uVar9);
    if (uVar7 != 0) {
      pHVar4 = this_00->field_21E8;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = 0xffffffff;
      uVar7 = this_00->field_21E8->field_0003;
      if (-1 < (int)uVar7) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar7);
      }
      HoloTy::NextFas(this_00->field_21E8);
    }
    FUN_006b5f80(DAT_008075a8,0x112,0x38,0x205,0x104);
    PutDDXClip(0x112,0x38,0x112,0x38,0x205,(byte *)0x104,'\x01',
               (BITMAPINFO *)PTR_0081176c->field_002C);
  }
  if (this_00->field_1C6F != 0xffffffff) {
    FUN_006b3af0((int *)this_00->field_1CB3,this_00->field_1C6F);
  }
  if (this_00->field_1D00 != 0xffffffff) {
    FUN_006b3af0((int *)this_00->field_1D44,this_00->field_1D00);
  }
  if (this_00->field_1D91 != 0xffffffff) {
    FUN_006b3af0((int *)this_00->field_1DD5,this_00->field_1D91);
  }
  puVar5 = &this_00->field_20CC;
  local_c = 10;
  do {
    FUN_006b3af0(DAT_008075a8,*puVar5);
    puVar5 = puVar5 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  puVar5 = &this_00->field_2125;
  local_c = 0xe;
  do {
    if (*puVar5 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar5);
      *puVar5 = 0;
    }
    puVar5 = puVar5 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (this_00->field_21F4 != (HoloTy *)0x0) {
    HoloTy::Done(this_00->field_21F4);
    Library::MSVCRT::FUN_0072e2b0(this_00->field_21F4);
    this_00->field_21F4 = (HoloTy *)0x0;
  }
  pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar4 == (HoloTy *)0x0) {
    pHVar4 = (HoloTy *)0x0;
  }
  else {
    pHVar4->field_0002 = 1;
    pHVar4->field_0000 = 0;
    pHVar4->field_0003 = 0xffffffff;
    pHVar4->field_0001 = CASE_2;
    pHVar4->field_0007 = 0;
    pHVar4->field_000B = 0;
    *(undefined4 *)&pHVar4->field_0xf = 0;
    *(undefined4 *)&pHVar4->field_0x1b = 1;
    pHVar4->field_0013 = 1;
    pHVar4->field_0017 = 0xffffffff;
    pHVar4->field_0027 = 0;
    pHVar4->field_0023 = 0;
    pHVar4->field_002F = 1;
    pHVar4->field_002B = 1;
  }
  this_00->field_21F4 = pHVar4;
  if (pHVar4 != (HoloTy *)0x0) {
    uVar9 = 0;
    cVar8 = '\x01';
    uVar7 = 0x10;
    iVar6 = 1;
    iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x149,0x205,0x8c);
    uVar7 = HoloTy::Init(this_00->field_21F4,CASE_2,0x112,0x149,iVar3,iVar6,uVar7,cVar8,uVar9);
    if (uVar7 != 0) {
      pHVar4 = this_00->field_21F4;
      pHVar4->field_0002 = 0;
      pHVar4->field_0017 = 0xffffffff;
      uVar7 = this_00->field_21F4->field_0003;
      if (-1 < (int)uVar7) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar7);
      }
      HoloTy::NextFas(this_00->field_21F4);
    }
    FUN_006b5f80(DAT_008075a8,0x112,0x149,0x205,0x8c);
    PutDDXClip(0x112,0x149,0x112,0x149,0x205,(byte *)0x8c,'\x01',
               (BITMAPINFO *)PTR_0081176c->field_002C);
  }
  FUN_006b3af0(DAT_008075a8,this_00->field_1E22);
  if ((((this_00->field_0x21e2 == '\0') || (cVar8 = this_00->field_1E26, cVar8 == '\x06')) ||
      (cVar8 == '\a')) || (cVar8 == '\x0e')) {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    FUN_006e6080(this_00,2,PTR_0081176c->field_0389,(undefined4 *)&this_00->field_0x1d);
  }
  else {
    if (PTR_0081176c->field_0389 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,PTR_0081176c->field_0389);
    }
    PTR_0081176c->field_0389 = 0;
    pAVar1 = PTR_0081176c->field_0544;
    FUN_006b4170((int)pAVar1,0,0,0,pAVar1->field_0004,pAVar1->field_0008,0xff);
    if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 !=
        (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
    }
    puVar5 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    PTR_0081176c->field_0548 = puVar5;
    if (this_00->field_21EC != (HoloTy *)0x0) {
      HoloTy::Done(this_00->field_21EC);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_21EC);
      this_00->field_21EC = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = 0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = 0xffffffff;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    this_00->field_21EC = pHVar4;
    if (pHVar4 != (HoloTy *)0x0) {
      uVar9 = 0;
      cVar8 = '\x01';
      uVar7 = 0x10;
      iVar6 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar7 = HoloTy::Init(this_00->field_21EC,CASE_4,10,0xb4,iVar3,iVar6,uVar7,cVar8,uVar9);
      if (uVar7 != 0) {
        pHVar4 = this_00->field_21EC;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = 0xffffffff;
        uVar7 = this_00->field_21EC->field_0003;
        if (-1 < (int)uVar7) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar7);
        }
        HoloTy::NextFas(this_00->field_21EC);
      }
      FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
      PutDDXClip(10,0xb4,10,0xb4,0xf9,(byte *)0x121,'\x01',(BITMAPINFO *)PTR_0081176c->field_002C);
    }
    if (PTR_0081176c->field_0391 != 0xffffffff) {
      FUN_006b3af0((int *)PTR_0081176c->field_03D5,PTR_0081176c->field_0391);
    }
    if (PTR_0081176c->field_0422 != 0xffffffff) {
      FUN_006b3af0((int *)PTR_0081176c->field_0466,PTR_0081176c->field_0422);
    }
    if (PTR_0081176c->field_04B3 != 0xffffffff) {
      FUN_006b3af0((int *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3);
    }
    FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0540);
  }
  if ((this_00->field_0x21e3 != '\0') &&
     (((cVar8 = this_00->field_1E26, cVar8 == '\x06' || (cVar8 == '\a')) || (cVar8 == '\x0e')))) {
    puVar5 = &this_00->field_1F60;
    local_c = 7;
    do {
      if (*puVar5 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar5);
        *puVar5 = 0;
      }
      puVar5 = puVar5 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    if (this_00->field_21F0 != (HoloTy *)0x0) {
      HoloTy::Done(this_00->field_21F0);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_21F0);
      this_00->field_21F0 = (HoloTy *)0x0;
    }
    pHVar4 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar4 == (HoloTy *)0x0) {
      pHVar4 = (HoloTy *)0x0;
    }
    else {
      pHVar4->field_0002 = 1;
      pHVar4->field_0000 = 0;
      pHVar4->field_0003 = 0xffffffff;
      pHVar4->field_0001 = CASE_2;
      pHVar4->field_0007 = 0;
      pHVar4->field_000B = 0;
      *(undefined4 *)&pHVar4->field_0xf = 0;
      *(undefined4 *)&pHVar4->field_0x1b = 1;
      pHVar4->field_0013 = 1;
      pHVar4->field_0017 = 0xffffffff;
      pHVar4->field_0027 = 0;
      pHVar4->field_0023 = 0;
      pHVar4->field_002F = 1;
      pHVar4->field_002B = 1;
    }
    this_00->field_21F0 = pHVar4;
    if (pHVar4 != (HoloTy *)0x0) {
      uVar9 = 0;
      cVar8 = '\x01';
      uVar7 = 0x10;
      iVar6 = 1;
      iVar3 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
      uVar7 = HoloTy::Init(this_00->field_21F0,CASE_4,10,0xb4,iVar3,iVar6,uVar7,cVar8,uVar9);
      if (uVar7 != 0) {
        pHVar4 = this_00->field_21F0;
        pHVar4->field_0002 = 0;
        pHVar4->field_0017 = 0xffffffff;
        uVar7 = this_00->field_21F0->field_0003;
        if (-1 < (int)uVar7) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar7);
        }
        HoloTy::NextFas(this_00->field_21F0);
      }
      FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
      PutDDXClip(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',(BITMAPINFO *)PTR_0081176c->field_002C);
    }
    FUN_006b3af0(DAT_008075a8,this_00->field_1F80);
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)PTR_00802a30->field_0060,PTR_00802a30->field_001C,0xfffffffe,
                 PTR_00802a30->field_0034,PTR_00802a30->field_0038);
      g_currentExceptionFrame = local_54.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

