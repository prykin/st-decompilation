
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::DeleteCtrls */

void __thiscall ChooseMapTy::DeleteCtrls(ChooseMapTy *this)

{
  code *pcVar1;
  ChooseMapTy *this_00;
  int iVar2;
  undefined1 *puVar3;
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
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8b10(*(int **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c));
    }
  }
  this_00 = local_c;
  thunk_FUN_00540dc0(0,*(undefined4 *)&local_c->field_0x8,2,0xc0a1,2,0x1c,0,0,0,0,0,0);
  if (*(uint *)&this_00[1].field_0x223 != 0) {
    FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)&this_00[1].field_0x223);
  }
  *(undefined4 *)&this_00[1].field_0x223 = 0;
  FUN_006b3af0(DAT_008075a8,*(uint *)&this_00[1].field_0x227);
  FUN_006b5f80(DAT_008075a8,0x112,0x38,0x204,0x19d);
  MMMObjTy::OutBSlProc
            (DAT_0080759c,(int)DAT_0080759c,0,0,0x112,0x38,0x204,0x19d,
             (undefined4 *)(*(int *)&this_00->field_0x1a5b + 0x140));
  if (*(uint *)&this_00[1].field_0xc != 0) {
    FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)&this_00[1].field_0xc);
  }
  *(undefined4 *)&this_00[1].field_0xc = 0;
  if (*(HoloTy **)&this_00[1].field_0x658 != (HoloTy *)0x0) {
    HoloTy::Done(*(HoloTy **)&this_00[1].field_0x658);
    Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[1].field_0x658);
    *(undefined4 *)&this_00[1].field_0x658 = 0;
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
  *(undefined1 **)&this_00[1].field_0x658 = puVar3;
  if (puVar3 != (undefined1 *)0x0) {
    uVar8 = 0;
    cVar7 = '\x01';
    uVar6 = 0x10;
    iVar5 = 1;
    iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,0x112,0x38,0x204,0x19d);
    uVar6 = HoloTy::Init(*(HoloTy **)&this_00[1].field_0x658,2,0x112,0x38,iVar2,iVar5,uVar6,cVar7,
                         uVar8);
    if (uVar6 != 0) {
      iVar2 = *(int *)&this_00[1].field_0x658;
      *(undefined1 *)(iVar2 + 2) = 0;
      *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
      uVar6 = *(uint *)(*(int *)&this_00[1].field_0x658 + 3);
      if (-1 < (int)uVar6) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
      }
      HoloTy::NextFas(*(HoloTy **)&this_00[1].field_0x658);
    }
    thunk_FUN_00540620(0x112,0x38,0x112,0x38,0x204,(byte *)0x19d,'\x01',
                       *(BITMAPINFO **)(DAT_0081176c + 0x2c));
  }
  if (*(uint *)&this_00[1].field_0x14 != 0xffffffff) {
    FUN_006b3af0(*(int **)&this_00[1].field_0x58,*(uint *)&this_00[1].field_0x14);
  }
  if (*(uint *)&this_00[1].field_0xa5 != 0xffffffff) {
    FUN_006b3af0(*(int **)&this_00[1].field_0xe9,*(uint *)&this_00[1].field_0xa5);
  }
  if (*(uint *)&this_00[1].field_0x136 != 0xffffffff) {
    FUN_006b3af0(*(int **)&this_00[1].field_0x17a,*(uint *)&this_00[1].field_0x136);
  }
  puVar4 = (uint *)&this_00[1].field_0x1c3;
  local_8 = 0x16;
  do {
    FUN_006b3af0(DAT_008075a8,*puVar4);
    puVar4 = puVar4 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (this_00[1].field_0x654 == '\0') {
    *(undefined4 *)&this_00->field_0x2d = 0x20;
    *(undefined4 *)&this_00->field_0x31 = 0;
    FUN_006e6080(this_00,2,*(undefined4 *)(DAT_0081176c + 0x389),(undefined4 *)&this_00->field_0x1d)
    ;
  }
  else {
    if (*(uint *)(DAT_0081176c + 0x389) != 0) {
      FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)(DAT_0081176c + 0x389));
    }
    *(undefined4 *)(DAT_0081176c + 0x389) = 0;
    iVar2 = *(int *)(DAT_0081176c + 0x544);
    FUN_006b4170(iVar2,0,0,0,*(int *)(iVar2 + 4),*(int *)(iVar2 + 8),0xff);
    if (*(byte **)(DAT_0081176c + 0x548) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(DAT_0081176c + 0x548));
    }
    puVar4 = Library::DKW::TBL::FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(DAT_0081176c + 0x548) = puVar4;
    if (*(HoloTy **)&this_00[1].field_0x65c != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_00[1].field_0x65c);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[1].field_0x65c);
      *(undefined4 *)&this_00[1].field_0x65c = 0;
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
    *(undefined1 **)&this_00[1].field_0x65c = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar8 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,10,0xb4,0xf9,0x121);
      uVar6 = HoloTy::Init(*(HoloTy **)&this_00[1].field_0x65c,4,10,0xb4,iVar2,iVar5,uVar6,cVar7,
                           uVar8);
      if (uVar6 != 0) {
        iVar2 = *(int *)&this_00[1].field_0x65c;
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar6 = *(uint *)(*(int *)&this_00[1].field_0x65c + 3);
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(*(HoloTy **)&this_00[1].field_0x65c);
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
  if (this_00[1].field_0x657 == '\0') {
    *(undefined4 *)&this_00->field_0x2d = 0x20;
    *(undefined4 *)&this_00->field_0x31 = 0;
    if (*(int *)(DAT_0081176c + 0x54c) != 0) {
      FUN_006e6080(this_00,2,*(int *)(DAT_0081176c + 0x54c),(undefined4 *)&this_00->field_0x1d);
    }
    *(undefined4 *)&this_00->field_0x31 = 0;
    if (*(int *)(DAT_0081176c + 0x550) != 0) {
      FUN_006e6080(this_00,2,*(int *)(DAT_0081176c + 0x550),(undefined4 *)&this_00->field_0x1d);
    }
  }
  else {
    if (*(uint *)(DAT_0081176c + 0x54c) != 0) {
      FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)(DAT_0081176c + 0x54c));
      *(undefined4 *)(DAT_0081176c + 0x54c) = 0;
    }
    if (*(uint *)(DAT_0081176c + 0x550) != 0) {
      FUN_006e56b0(*(void **)&this_00->field_0xc,*(uint *)(DAT_0081176c + 0x550));
      *(undefined4 *)(DAT_0081176c + 0x550) = 0;
    }
    if (*(HoloTy **)&this_00[1].field_0x660 != (HoloTy *)0x0) {
      HoloTy::Done(*(HoloTy **)&this_00[1].field_0x660);
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[1].field_0x660);
      *(undefined4 *)&this_00[1].field_0x660 = 0;
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
    *(undefined1 **)&this_00[1].field_0x660 = puVar3;
    if (puVar3 != (undefined1 *)0x0) {
      uVar8 = 0;
      cVar7 = '\x01';
      uVar6 = 0x10;
      iVar5 = 1;
      iVar2 = Library::DKW::DDX::FUN_006bf9f0(DAT_008075a8,200,0x1f1,400,0x62);
      uVar6 = HoloTy::Init(*(HoloTy **)&this_00[1].field_0x660,1,200,0x1f1,iVar2,iVar5,uVar6,cVar7,
                           uVar8);
      if (uVar6 != 0) {
        iVar2 = *(int *)&this_00[1].field_0x660;
        *(undefined1 *)(iVar2 + 2) = 0;
        *(undefined4 *)(iVar2 + 0x17) = 0xffffffff;
        uVar6 = *(uint *)(*(int *)&this_00[1].field_0x660 + 3);
        if (-1 < (int)uVar6) {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,uVar6);
        }
        HoloTy::NextFas(*(HoloTy **)&this_00[1].field_0x660);
      }
      FUN_006b5f80(DAT_008075a8,200,0x1f1,400,0x62);
      thunk_FUN_00540620(200,0x1f1,200,0x1f1,400,(byte *)0x62,'\x01',
                         *(BITMAPINFO **)(DAT_0081176c + 0x2c));
    }
    FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
    FUN_006b3af0(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
    if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560));
    }
    if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
      FUN_006b3af0(*(int **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1));
    }
  }
  if (DAT_00802a30 != 0) {
    if (*(int *)(DAT_00802a30 + 0xa9) == 0) {
      Library::DKW::DDX::FUN_006b8a60(*(byte **)(DAT_00802a30 + 0xad));
    }
    else if (*(uint *)(DAT_00802a30 + 0x1c) != 0xffffffff) {
      Library::DKW::DDX::FUN_006b34d0
                (*(uint **)(DAT_00802a30 + 0x60),*(uint *)(DAT_00802a30 + 0x1c),0xfffffffe,
                 *(uint *)(DAT_00802a30 + 0x34),*(uint *)(DAT_00802a30 + 0x38));
      g_currentExceptionFrame = local_50.previous;
      return;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return;
}

