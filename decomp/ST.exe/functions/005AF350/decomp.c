
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::DeleteCtrls */

void __thiscall ChooseMapTy::DeleteCtrls(ChooseMapTy *this)

{
  code *pcVar1;
  ChooseMapTy *this_00;
  int iVar2;
  HoloTy *pHVar3;
  uint *puVar4;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int iVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  InternalExceptionFrame local_50;
  ChooseMapTy *local_c;
  int local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x3ea,0,iVar2,&DAT_007a4ccc
                               ,s_ChooseMapTy__DeleteCtrls_007cc878);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar2,0,s_E____titans_Start_load_obj_cpp_007cc728,0x3ea);
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
  this_00 = local_c;
  SetAccelerator(0,local_c->field_0008,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  if (this_00->field_1C83 != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_1C83);
  }
  this_00->field_1C83 = 0;
  FUN_006b3af0(DAT_008075a8,this_00->field_1C87);
  FUN_006b5f80(DAT_008075a8,0x112,0x38,0x204,0x19d);
  MMMObjTy::OutBSlProc
            (DAT_0080759c,(int)DAT_0080759c,(MMMObjTy *)0x0,0,0x112,0x38,0x204,0x19d,
             (undefined4 *)&this_00->field_1A5B->field_0x140);
  if (this_00->field_1A6C != 0) {
    StartSystemTy::sub_006E56B0(this_00->field_000C,this_00->field_1A6C);
  }
  this_00->field_1A6C = 0;
  if (this_00->field_20B8 != (HoloTy *)0x0) {
    HoloTy::Done(this_00->field_20B8);
    Library::MSVCRT::FUN_0072e2b0(this_00->field_20B8);
    this_00->field_20B8 = (HoloTy *)0x0;
  }
  pHVar3 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
  if (pHVar3 == (HoloTy *)0x0) {
    pHVar3 = (HoloTy *)0x0;
  }
  else {
    pHVar3->field_0002 = 1;
    pHVar3->field_0000 = 0;
    pHVar3->field_0003 = 0xffffffff;
    pHVar3->field_0001 = CASE_2;
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
  this_00->field_20B8 = pHVar3;
  if (pHVar3 != (HoloTy *)0x0) {
    uVar8 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x204,0x19d);
    uVar6 = HoloTy::Init(this_00->field_20B8,CASE_2,0x112,0x38,iVar2,iVar5,uVar6,cVar7,uVar8);
    if (uVar6 != 0) {
      pHVar3 = this_00->field_20B8;
      pHVar3->field_0002 = 0;
      pHVar3->field_0017 = 0xffffffff;
      uVar6 = this_00->field_20B8->field_0003;
      if (-1 < (int)uVar6) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
      }
      HoloTy::NextFas(this_00->field_20B8);
    }
    PutDDXClip(0x112,0x38,0x112,0x38,0x204,(byte *)0x19d,'\x01',
               (BITMAPINFO *)PTR_0081176c->field_002C);
  }
  if (this_00->field_1A74 != 0xffffffff) {
    FUN_006b3af0((int *)this_00->field_1AB8,this_00->field_1A74);
  }
  if (this_00->field_1B05 != 0xffffffff) {
    FUN_006b3af0((int *)this_00->field_1B49,this_00->field_1B05);
  }
  if (this_00->field_1B96 != 0xffffffff) {
    FUN_006b3af0((int *)this_00->field_1BDA,this_00->field_1B96);
  }
  puVar4 = &this_00->field_1C23;
  local_8 = 0x16;
  do {
    FUN_006b3af0(DAT_008075a8,*puVar4);
    puVar4 = puVar4 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (this_00->field_20B4 == '\0') {
    this_00->field_002D = 0x20;
    *(undefined4 *)&this_00->field_0x31 = 0;
    FUN_006e6080(this_00,2,PTR_0081176c->field_0389,(undefined4 *)&this_00->field_0x1d);
  }
  else {
    if (PTR_0081176c->field_0389 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,PTR_0081176c->field_0389);
    }
    PTR_0081176c->field_0389 = 0;
    iVar2 = PTR_0081176c->field_0544;
    FUN_006b4170(iVar2,0,0,0,*(int *)(iVar2 + 4),*(int *)(iVar2 + 8),0xff);
    if ((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548 !=
        (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)PTR_0081176c->field_0548);
    }
    puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    PTR_0081176c->field_0548 = puVar4;
    if (this_00->field_20BC != (HoloTy *)0x0) {
      HoloTy::Done(this_00->field_20BC);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_20BC);
      this_00->field_20BC = (HoloTy *)0x0;
    }
    pHVar3 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar3 == (HoloTy *)0x0) {
      pHVar3 = (HoloTy *)0x0;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      pHVar3->field_0003 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
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
    this_00->field_20BC = pHVar3;
    if (pHVar3 != (HoloTy *)0x0) {
      uVar8 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar6 = HoloTy::Init(this_00->field_20BC,CASE_4,10,0xb4,iVar2,iVar5,uVar6,cVar7,uVar8);
      if (uVar6 != 0) {
        pHVar3 = this_00->field_20BC;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = 0xffffffff;
        uVar6 = this_00->field_20BC->field_0003;
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(this_00->field_20BC);
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
  if (this_00->field_20B7 == '\0') {
    this_00->field_002D = 0x20;
    *(undefined4 *)&this_00->field_0x31 = 0;
    if (PTR_0081176c->field_054C != 0) {
      FUN_006e6080(this_00,2,PTR_0081176c->field_054C,(undefined4 *)&this_00->field_0x1d);
    }
    *(undefined4 *)&this_00->field_0x31 = 0;
    if (PTR_0081176c->field_0550 != 0) {
      FUN_006e6080(this_00,2,PTR_0081176c->field_0550,(undefined4 *)&this_00->field_0x1d);
    }
  }
  else {
    if (PTR_0081176c->field_054C != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,PTR_0081176c->field_054C);
      PTR_0081176c->field_054C = 0;
    }
    if (PTR_0081176c->field_0550 != 0) {
      StartSystemTy::sub_006E56B0(this_00->field_000C,PTR_0081176c->field_0550);
      PTR_0081176c->field_0550 = 0;
    }
    if (this_00->field_20C0 != (HoloTy *)0x0) {
      HoloTy::Done(this_00->field_20C0);
      Library::MSVCRT::FUN_0072e2b0(this_00->field_20C0);
      this_00->field_20C0 = (HoloTy *)0x0;
    }
    pHVar3 = (HoloTy *)Library::MSVCRT::FUN_0072e530(0x33);
    if (pHVar3 == (HoloTy *)0x0) {
      pHVar3 = (HoloTy *)0x0;
    }
    else {
      pHVar3->field_0002 = 1;
      pHVar3->field_0000 = 0;
      pHVar3->field_0003 = 0xffffffff;
      pHVar3->field_0001 = CASE_2;
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
    this_00->field_20C0 = pHVar3;
    if (pHVar3 != (HoloTy *)0x0) {
      uVar8 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
      uVar6 = HoloTy::Init(this_00->field_20C0,CASE_1,200,0x1f1,iVar2,iVar5,uVar6,cVar7,uVar8);
      if (uVar6 != 0) {
        pHVar3 = this_00->field_20C0;
        pHVar3->field_0002 = 0;
        pHVar3->field_0017 = 0xffffffff;
        uVar6 = this_00->field_20C0->field_0003;
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(this_00->field_20C0);
      }
      FUN_006b5f80(DAT_008075a8,200,0x1f1,400,0x62);
      PutDDXClip(200,0x1f1,200,0x1f1,400,(byte *)0x62,'\x01',(BITMAPINFO *)PTR_0081176c->field_002C)
      ;
    }
    FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0554);
    FUN_006b3af0(DAT_008075a8,PTR_0081176c->field_0558);
    if (PTR_0081176c->field_0560 != 0xffffffff) {
      FUN_006b3af0((int *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560);
    }
    if (PTR_0081176c->field_05F1 != 0xffffffff) {
      FUN_006b3af0((int *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1);
    }
  }
  if (PTR_00802a30 != (CursorClassTy *)0x0) {
    if (PTR_00802a30->field_00A9 == 0) {
      Library::DKW::DDX::FUN_006b8a60((byte *)PTR_00802a30->field_00AD);
    }
    else if (PTR_00802a30->field_001C != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                ((uint *)PTR_00802a30->field_0060,PTR_00802a30->field_001C,0xfffffffe,
                 PTR_00802a30->field_0034,PTR_00802a30->field_0038);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

