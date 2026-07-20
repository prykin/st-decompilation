
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::DeleteCtrls */

void __thiscall SettMapTy::DeleteCtrls(SettMapTy *this)

{
  code *pcVar1;
  SettMapTy *this_00;
  int iVar2;
  HoloTy *pHVar3;
  uint *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  InternalExceptionFrame local_54;
  SettMapTy *local_10;
  int local_c;
  int local_8;
  
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x3a4,0,iVar2,&DAT_007a4ccc
                               ,s_SettMapTy__DeleteCtrls_007cd208);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x3a4);
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
  this_00 = local_10;
  if (local_10->field_215D != 0) {
    StartSystemTy::sub_006E56B0(local_10->field_000C,local_10->field_215D);
  }
  this_00->field_215D = 0;
  puVar4 = &this_00->field_1F8C;
  local_c = 10;
  do {
    local_8 = 8;
    do {
      if (*puVar4 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar4);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
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
  pHVar3 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar3 == (HoloTy *)0x0) {
    pHVar3 = (HoloTy *)0x0;
  }
  else {
    pHVar3->field_0002 = 1;
    pHVar3->field_0000 = 0;
    pHVar3->field_0003 = 0xffffffff;
    pHVar3->field_0001 = 2;
    pHVar3->field_0007 = 0;
    pHVar3->field_000B = 0;
    *(undefined4 *)&pHVar3->field_0xf = 0;
    *(undefined4 *)&pHVar3->field_0x1b = 1;
    pHVar3->field_0013 = 1;
    pHVar3->field_0017 = 0xffffffff;
    pHVar3->field_0027 = 0;
    pHVar3->field_0023 = 0;
    pHVar3->field_002F = 1;
    pHVar3->field_002B = 1;
  }
  this_00->field_21E8 = pHVar3;
  if (pHVar3 != (HoloTy *)0x0) {
    uVar8 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x205,0x104);
    uVar6 = HoloTy::Init(this_00->field_21E8,CASE_2,0x112,0x38,iVar2,iVar5,uVar6,cVar7,uVar8);
    if (uVar6 != 0) {
      pHVar3 = this_00->field_21E8;
      pHVar3->field_0002 = 0;
      pHVar3->field_0017 = 0xffffffff;
      uVar6 = this_00->field_21E8->field_0003;
      if (-1 < (int)uVar6) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
      }
      HoloTy::NextFas(this_00->field_21E8);
    }
    FUN_006b5f80(DAT_008075a8,0x112,0x38,0x205,0x104);
    PutDDXClip(0x112,0x38,0x112,0x38,0x205,(byte *)0x104,'\x01',
               *(BITMAPINFO **)(DAT_0081176c + 0x2c));
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
  puVar4 = &this_00->field_20CC;
  local_c = 10;
  do {
    FUN_006b3af0(DAT_008075a8,*puVar4);
    puVar4 = puVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  puVar4 = &this_00->field_2125;
  local_c = 0xe;
  do {
    if (*puVar4 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar4);
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (this_00->field_21F4 != (HoloTy *)0x0) {
    HoloTy::Done(this_00->field_21F4);
    Library::MSVCRT::FUN_0072e2b0(this_00->field_21F4);
    this_00->field_21F4 = (HoloTy *)0x0;
  }
  pHVar3 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar3 == (HoloTy *)0x0) {
    pHVar3 = (HoloTy *)0x0;
  }
  else {
    pHVar3->field_0002 = 1;
    pHVar3->field_0000 = 0;
    pHVar3->field_0003 = 0xffffffff;
    pHVar3->field_0001 = 2;
    pHVar3->field_0007 = 0;
    pHVar3->field_000B = 0;
    *(undefined4 *)&pHVar3->field_0xf = 0;
    *(undefined4 *)&pHVar3->field_0x1b = 1;
    pHVar3->field_0013 = 1;
    pHVar3->field_0017 = 0xffffffff;
    pHVar3->field_0027 = 0;
    pHVar3->field_0023 = 0;
    pHVar3->field_002F = 1;
    pHVar3->field_002B = 1;
  }
  this_00->field_21F4 = pHVar3;
  if (pHVar3 != (HoloTy *)0x0) {
    uVar8 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x149,0x205,0x8c);
    uVar6 = HoloTy::Init(this_00->field_21F4,CASE_2,0x112,0x149,iVar2,iVar5,uVar6,cVar7,uVar8);
    if (uVar6 != 0) {
      pHVar3 = this_00->field_21F4;
      pHVar3->field_0002 = 0;
      pHVar3->field_0017 = 0xffffffff;
      uVar6 = this_00->field_21F4->field_0003;
      if (-1 < (int)uVar6) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
      }
      HoloTy::NextFas(this_00->field_21F4);
    }
    FUN_006b5f80(DAT_008075a8,0x112,0x149,0x205,0x8c);
    PutDDXClip(0x112,0x149,0x112,0x149,0x205,(byte *)0x8c,'\x01',
               *(BITMAPINFO **)(DAT_0081176c + 0x2c));
  }
  FUN_006b3af0(DAT_008075a8,this_00->field_1E22);
  if ((((this_00->field_0x21e2 == '\0') || (cVar7 = this_00->field_1E26, cVar7 == '\x06')) ||
      (cVar7 == '\a')) || (cVar7 == '\x0e')) {
    this_00->field_002D = 0x20;
    this_00->field_0031 = 0;
    FUN_006e6080(this_00,2,*(undefined4 *)(DAT_0081176c + 0x389),(undefined4 *)&this_00->field_0x1d)
    ;
  }
  else {
    if (*(uint *)(DAT_0081176c + 0x389) != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,*(uint *)(DAT_0081176c + 0x389));
    }
    *(undefined4 *)(DAT_0081176c + 0x389) = 0;
    iVar2 = *(int *)(DAT_0081176c + 0x544);
    FUN_006b4170(iVar2,0,0,0,*(int *)(iVar2 + 4),*(int *)(iVar2 + 8),0xff);
    if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
    }
    puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(DAT_0081176c + 0x548) = puVar4;
    if (this_00->field_21EC != (HoloTy *)0x0) {
      HoloTy::Done(this_00->field_21EC);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_21EC);
      this_00->field_21EC = (HoloTy *)0x0;
    }
    pHVar3 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar3 == (HoloTy *)0x0) {
      pHVar3 = (HoloTy *)0x0;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      pHVar3->field_0003 = 0xffffffff;
      pHVar3->field_0001 = 2;
      pHVar3->field_0007 = 0;
      pHVar3->field_000B = 0;
      *(undefined4 *)&pHVar3->field_0xf = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = 0xffffffff;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    this_00->field_21EC = pHVar3;
    if (pHVar3 != (HoloTy *)0x0) {
      uVar8 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar6 = HoloTy::Init(this_00->field_21EC,CASE_4,10,0xb4,iVar2,iVar5,uVar6,cVar7,uVar8);
      if (uVar6 != 0) {
        pHVar3 = this_00->field_21EC;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = 0xffffffff;
        uVar6 = this_00->field_21EC->field_0003;
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(this_00->field_21EC);
      }
      FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
      PutDDXClip(10,0xb4,10,0xb4,0xf9,(byte *)0x121,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c));
    }
    if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391));
    }
    if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422));
    }
    if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3));
    }
    FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
  }
  if ((this_00->field_0x21e3 != '\0') &&
     (((cVar7 = this_00->field_1E26, cVar7 == '\x06' || (cVar7 == '\a')) || (cVar7 == '\x0e')))) {
    puVar4 = &this_00->field_1F60;
    local_c = 7;
    do {
      if (*puVar4 != 0) {
        StartSystemTy::sub_006E56B0(this_00->field_000C,*puVar4);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    if (this_00->field_21F0 != (HoloTy *)0x0) {
      HoloTy::Done(this_00->field_21F0);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_21F0);
      this_00->field_21F0 = (HoloTy *)0x0;
    }
    pHVar3 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar3 == (HoloTy *)0x0) {
      pHVar3 = (HoloTy *)0x0;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      pHVar3->field_0003 = 0xffffffff;
      pHVar3->field_0001 = 2;
      pHVar3->field_0007 = 0;
      pHVar3->field_000B = 0;
      *(undefined4 *)&pHVar3->field_0xf = 0;
      *(undefined4 *)&pHVar3->field_0x1b = 1;
      pHVar3->field_0013 = 1;
      pHVar3->field_0017 = 0xffffffff;
      pHVar3->field_0027 = 0;
      pHVar3->field_0023 = 0;
      pHVar3->field_002F = 1;
      pHVar3->field_002B = 1;
    }
    this_00->field_21F0 = pHVar3;
    if (pHVar3 != (HoloTy *)0x0) {
      uVar8 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
      uVar6 = HoloTy::Init(this_00->field_21F0,CASE_4,10,0xb4,iVar2,iVar5,uVar6,cVar7,uVar8);
      if (uVar6 != 0) {
        pHVar3 = this_00->field_21F0;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = 0xffffffff;
        uVar6 = this_00->field_21F0->field_0003;
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(this_00->field_21F0);
      }
      FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
      PutDDXClip(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',*(BITMAPINFO **)(DAT_0081176c + 0x2c));
    }
    FUN_006b3af0(DAT_008075a8,this_00->field_1F80);
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                 *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      g_currentExceptionFrame = local_54.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_54.previous;
  return;
}

