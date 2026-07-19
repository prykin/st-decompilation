
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::DeleteCtrls */

void __thiscall SettMapTy::DeleteCtrls(SettMapTy *this)

{
  HoloTy *this_00;
  code *pcVar1;
  SettMapTy *this_01;
  int iVar2;
  undefined1 *puVar3;
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
  this_01 = local_10;
  if (*(uint *)&local_10[0x54].field_0x39 != 0) {
    FUN_006e56b0(*(void **)&local_10->field_0xc,*(uint *)&local_10[0x54].field_0x39);
  }
  *(undefined4 *)&this_01[0x54].field_0x39 = 0;
  puVar4 = &this_01[0x4f].field_0061;
  local_c = 10;
  do {
    local_8 = 8;
    do {
      if (*puVar4 != 0) {
        FUN_006e56b0(*(void **)&this_01->field_0xc,*puVar4);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
    if (*(uint *)&this_01[0x53].field_0x5e != 0) {
      FUN_006e56b0(*(void **)&this_01->field_0xc,*(uint *)&this_01[0x53].field_0x5e);
      *(undefined4 *)&this_01[0x53].field_0x5e = 0;
    }
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(HoloTy **)&this_01[0x55].field_0x5f != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)&this_01[0x55].field_0x5f);
    Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_01[0x55].field_0x5f);
    *(undefined4 *)&this_01[0x55].field_0x5f = 0;
  }
  puVar3 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3[2] = 1;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 3) = 0xffffffff;
    puVar3[1] = 2;
    *(undefined4 *)(puVar3 + 7) = 0;
    *(undefined4 *)(puVar3 + 0xb) = 0;
    *(undefined4 *)(puVar3 + 0xf) = 0;
    *(undefined4 *)(puVar3 + 0x1b) = 1;
    *(undefined4 *)(puVar3 + 0x13) = 1;
    *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0x27) = 0;
    *(undefined4 *)(puVar3 + 0x23) = 0;
    *(undefined4 *)(puVar3 + 0x2f) = 1;
    *(undefined4 *)(puVar3 + 0x2b) = 1;
  }
  *(undefined1 **)&this_01[0x55].field_0x5f = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    uVar8 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x205,0x104);
    uVar6 = HoloTy::Init(*(HoloTy **)&this_01[0x55].field_0x5f,2,0x112,0x38,iVar2,iVar5,uVar6,cVar7,
                         uVar8);
    if (uVar6 != 0) {
      iVar2 = *(int *)&this_01[0x55].field_0x5f;
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
      uVar6 = *(uint *)(*(int *)&this_01[0x55].field_0x5f + 3);
      if (-1 < (int)uVar6) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
      }
      HoloTy::NextFas(*(HoloTy **)&this_01[0x55].field_0x5f);
    }
    FUN_006b5f80(DAT_008075a8,0x112,0x38,0x205,0x104);
    thunk_FUN_00540620(0x112,0x38,0x112,0x38,0x205,(byte *)0x104,'\x01',
                       *(BITMAPINFO **)(DAT_0081176c + 0x2c));
  }
  if (*(uint *)&this_01[0x48].field_0x7 != 0xffffffff) {
    FUN_006b3af0(*(int **)&this_01[0x48].field_0x4b,*(uint *)&this_01[0x48].field_0x7);
  }
  if (*(uint *)&this_01[0x49].field_0x33 != 0xffffffff) {
    FUN_006b3af0(*(int **)((int)&this_01[0x4a].field_0010 + 2),*(uint *)&this_01[0x49].field_0x33);
  }
  if (*(uint *)&this_01[0x4a].field_0x5f != 0xffffffff) {
    FUN_006b3af0(*(int **)&this_01[0x4b].field_0x3e,*(uint *)&this_01[0x4a].field_0x5f);
  }
  puVar4 = (uint *)&this_01[0x53].field_0xd;
  local_c = 10;
  do {
    FUN_006b3af0(DAT_008075a8,*puVar4);
    puVar4 = puVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  puVar4 = (uint *)&this_01[0x54].field_0x1;
  local_c = 0xe;
  do {
    if (*puVar4 != 0) {
      FUN_006e56b0(*(void **)&this_01->field_0xc,*puVar4);
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  if (*(HoloTy **)&this_01[0x56].field_0x6 != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)&this_01[0x56].field_0x6);
    Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_01[0x56].field_0x6);
    *(undefined4 *)&this_01[0x56].field_0x6 = 0;
  }
  puVar3 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
  if (puVar3 == (undefined1 *)0x0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3[2] = 1;
    *puVar3 = 0;
    *(undefined4 *)(puVar3 + 3) = 0xffffffff;
    puVar3[1] = 2;
    *(undefined4 *)(puVar3 + 7) = 0;
    *(undefined4 *)(puVar3 + 0xb) = 0;
    *(undefined4 *)(puVar3 + 0xf) = 0;
    *(undefined4 *)(puVar3 + 0x1b) = 1;
    *(undefined4 *)(puVar3 + 0x13) = 1;
    *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
    *(undefined4 *)(puVar3 + 0x27) = 0;
    *(undefined4 *)(puVar3 + 0x23) = 0;
    *(undefined4 *)(puVar3 + 0x2f) = 1;
    *(undefined4 *)(puVar3 + 0x2b) = 1;
  }
  *(undefined1 **)&this_01[0x56].field_0x6 = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    uVar8 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x149,0x205,0x8c);
    uVar6 = HoloTy::Init(*(HoloTy **)&this_01[0x56].field_0x6,2,0x112,0x149,iVar2,iVar5,uVar6,cVar7,
                         uVar8);
    if (uVar6 != 0) {
      iVar2 = *(int *)&this_01[0x56].field_0x6;
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
      uVar6 = *(uint *)(*(int *)&this_01[0x56].field_0x6 + 3);
      if (-1 < (int)uVar6) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
      }
      HoloTy::NextFas(*(HoloTy **)&this_01[0x56].field_0x6);
    }
    FUN_006b5f80(DAT_008075a8,0x112,0x149,0x205,0x8c);
    thunk_FUN_00540620(0x112,0x149,0x112,0x149,0x205,(byte *)0x8c,'\x01',
                       *(BITMAPINFO **)(DAT_0081176c + 0x2c));
  }
  FUN_006b3af0(DAT_008075a8,*(uint *)&this_01[0x4c].field_0x26);
  if ((((this_01[0x55].field_0x59 == '\0') || (cVar7 = this_01[0x4c].field_0x2a, cVar7 == '\x06'))
      || (cVar7 == '\a')) || (cVar7 == '\x0e')) {
    *(undefined4 *)&this_01->field_0x2d = 0x20;
    *(undefined4 *)&this_01->field_0x31 = 0;
    FUN_006e6080(this_01,2,*(undefined4 *)(DAT_0081176c + 0x389),(undefined4 *)&this_01->field_0x1d)
    ;
  }
  else {
    if (*(uint *)(DAT_0081176c + 0x389) != 0) {
      FUN_006e56b0(*(void **)&this_01->field_0xc,*(uint *)(DAT_0081176c + 0x389));
    }
    *(undefined4 *)(DAT_0081176c + 0x389) = 0;
    iVar2 = *(int *)(DAT_0081176c + 0x544);
    FUN_006b4170(iVar2,0,0,0,*(int *)(iVar2 + 4),*(int *)(iVar2 + 8),0xff);
    if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
    }
    puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(DAT_0081176c + 0x548) = puVar4;
    this_00 = *(HoloTy **)((int)&this_01[0x55].field_0061 + 2);
    if (this_00 != (HoloTy *)0x0) {
      HoloTy::Done(this_00);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)((int)&this_01[0x55].field_0061 + 2));
      *(undefined4 *)((int)&this_01[0x55].field_0061 + 2) = 0;
    }
    puVar3 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3[2] = 1;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 3) = 0xffffffff;
      puVar3[1] = 2;
      *(undefined4 *)(puVar3 + 7) = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *(undefined4 *)(puVar3 + 0x1b) = 1;
      *(undefined4 *)(puVar3 + 0x13) = 1;
      *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x27) = 0;
      *(undefined4 *)(puVar3 + 0x23) = 0;
      *(undefined4 *)(puVar3 + 0x2f) = 1;
      *(undefined4 *)(puVar3 + 0x2b) = 1;
    }
    *(undefined1 **)((int)&this_01[0x55].field_0061 + 2) = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar8 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar6 = HoloTy::Init(*(HoloTy **)((int)&this_01[0x55].field_0061 + 2),4,10,0xb4,iVar2,iVar5,
                           uVar6,cVar7,uVar8);
      if (uVar6 != 0) {
        iVar2 = *(int *)((int)&this_01[0x55].field_0061 + 2);
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar6 = *(uint *)(*(int *)((int)&this_01[0x55].field_0061 + 2) + 3);
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(*(HoloTy **)((int)&this_01[0x55].field_0061 + 2));
      }
      FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
      thunk_FUN_00540620(10,0xb4,10,0xb4,0xf9,(byte *)0x121,'\x01',
                         *(BITMAPINFO **)(DAT_0081176c + 0x2c));
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
  if ((this_01[0x55].field_0x5a != '\0') &&
     (((cVar7 = this_01[0x4c].field_0x2a, cVar7 == '\x06' || (cVar7 == '\a')) || (cVar7 == '\x0e')))
     ) {
    puVar4 = (uint *)&this_01[0x4f].field_0x35;
    local_c = 7;
    do {
      if (*puVar4 != 0) {
        FUN_006e56b0(*(void **)&this_01->field_0xc,*puVar4);
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
    if (*(HoloTy **)&this_01[0x56].field_0x2 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_01[0x56].field_0x2);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_01[0x56].field_0x2);
      *(undefined4 *)&this_01[0x56].field_0x2 = 0;
    }
    puVar3 = (undefined1 *)Library::MSVCRT::FUN_0072e530(0x33);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    else {
      puVar3[2] = 1;
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 3) = 0xffffffff;
      puVar3[1] = 2;
      *(undefined4 *)(puVar3 + 7) = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *(undefined4 *)(puVar3 + 0x1b) = 1;
      *(undefined4 *)(puVar3 + 0x13) = 1;
      *(undefined4 *)(puVar3 + 0x17) = 0xffffffff;
      *(undefined4 *)(puVar3 + 0x27) = 0;
      *(undefined4 *)(puVar3 + 0x23) = 0;
      *(undefined4 *)(puVar3 + 0x2f) = 1;
      *(undefined4 *)(puVar3 + 0x2b) = 1;
    }
    *(undefined1 **)&this_01[0x56].field_0x2 = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar8 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x123);
      uVar6 = HoloTy::Init(*(HoloTy **)&this_01[0x56].field_0x2,4,10,0xb4,iVar2,iVar5,uVar6,cVar7,
                           uVar8);
      if (uVar6 != 0) {
        iVar2 = *(int *)&this_01[0x56].field_0x2;
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar6 = *(uint *)(*(int *)&this_01[0x56].field_0x2 + 3);
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(*(HoloTy **)&this_01[0x56].field_0x2);
      }
      FUN_006b5f80(DAT_008075a8,10,0xb4,0xf9,0x121);
      thunk_FUN_00540620(10,0xb4,10,0xb4,0xf9,(byte *)0x123,'\x01',
                         *(BITMAPINFO **)(DAT_0081176c + 0x2c));
    }
    FUN_006b3af0(DAT_008075a8,*(uint *)&this_01[0x4f].field_0x55);
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

