
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::NoneSettMap */

int __thiscall SettMapTy::NoneSettMap(SettMapTy *this,int *param_1)

{
  char cVar1;
  byte bVar2;
  HoloTy *pHVar3;
  uint uVar4;
  code *pcVar5;
  SettMapTy *this_00;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar9;
  InternalExceptionFrame local_50;
  SettMapTy *local_c;
  int local_8;
  
  local_8 = 1;
  local_c = this;
  DVar6 = timeGetTime();
  this->field_0061 = DVar6;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar7 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x243,0,iVar7,&DAT_007a4ccc
                               ,s_SettMapTy__NoneSettMap_007cd1a8);
    if (iVar8 == 0) {
      RaiseInternalException(iVar7,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x243);
      return 0;
    }
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  cVar1 = *(char *)(local_c + 1);
  if (cVar1 == '\x01') {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
    }
  }
  else if (cVar1 == '\x03') {
    if (((local_c[0x55].field_0x58 != '\0') &&
        (*(HoloTy **)&local_c[0x55].field_0x5f != (HoloTy *)0x0)) &&
       (iVar7 = HoloTy::NextFas(*(HoloTy **)&local_c[0x55].field_0x5f), iVar7 != 0)) {
      local_8 = 0;
    }
    if (((this_00[0x55].field_0x5c != '\0') &&
        (*(HoloTy **)&this_00[0x56].field_0x6 != (HoloTy *)0x0)) &&
       (iVar7 = HoloTy::NextFas(*(HoloTy **)&this_00[0x56].field_0x6), iVar7 != 0)) {
      local_8 = 0;
    }
    cVar1 = this_00[0x4c].field_0x2a;
    if (((cVar1 != '\x06') && (cVar1 != '\a')) &&
       ((cVar1 != '\x0e' &&
        (((this_00[0x55].field_0x59 != '\0' &&
          (pHVar3 = *(HoloTy **)((int)&this_00[0x55].field_0061 + 2), pHVar3 != (HoloTy *)0x0)) &&
         (iVar7 = HoloTy::NextFas(pHVar3), iVar7 != 0)))))) {
      local_8 = 0;
    }
    cVar1 = this_00[0x4c].field_0x2a;
    if ((((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) &&
       (((this_00[0x55].field_0x5a != '\0' &&
         (*(HoloTy **)&this_00[0x56].field_0x2 != (HoloTy *)0x0)) &&
        (iVar7 = HoloTy::NextFas(*(HoloTy **)&this_00[0x56].field_0x2), iVar7 != 0)))) {
      local_8 = 0;
    }
    cVar1 = this_00[0x4c].field_0x2a;
    if (((((cVar1 != '\x06') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
        ((this_00[0x55].field_0x5d != '\0' &&
         (*(HoloTy **)&this_00[0x56].field_0xa != (HoloTy *)0x0)))) &&
       (iVar7 = HoloTy::NextFas(*(HoloTy **)&this_00[0x56].field_0xa), iVar7 != 0)) {
      local_8 = 0;
    }
    if ((this_00[0x55].field_0x5b != '\0') &&
       (*(int *)(DAT_0081176c + 0x300) < *(int *)(DAT_0081176c + 0x304) + -1)) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + 1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                   *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                   *(uint *)(DAT_0081176c + 0x318));
      }
      local_8 = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if (*(HoloTy **)&this_00[0x56].field_0x2 != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_00[0x56].field_0x2);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[0x56].field_0x2);
        *(undefined4 *)&this_00[0x56].field_0x2 = 0;
      }
      cVar1 = this_00[0x4c].field_0x2a;
      if ((((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) &&
         (this_00[0x55].field_0x5a != '\0')) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)&this_00[0x4f].field_0x55);
      }
      if (*(HoloTy **)&this_00[0x55].field_0x5f != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_00[0x55].field_0x5f);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[0x55].field_0x5f);
        *(undefined4 *)&this_00[0x55].field_0x5f = 0;
      }
      if (this_00[0x55].field_0x58 != '\0') {
        if (*(uint *)&this_00[0x48].field_0x7 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    (*(uint **)&this_00[0x48].field_0x4b,*(uint *)&this_00[0x48].field_0x7,
                     0xfffffffe,*(uint *)&this_00[0x48].field_0x1f,
                     *(uint *)&this_00[0x48].field_0x23);
        }
        if (*(uint *)&this_00[0x49].field_0x33 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    (*(uint **)((int)&this_00[0x4a].field_0010 + 2),
                     *(uint *)&this_00[0x49].field_0x33,0xfffffffe,
                     *(uint *)&this_00[0x49].field_0x4b,*(uint *)&this_00[0x49].field_0x4f);
        }
        if (*(uint *)&this_00[0x4a].field_0x5f != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    (*(uint **)&this_00[0x4b].field_0x3e,*(uint *)&this_00[0x4a].field_0x5f,
                     0xfffffffe,*(uint *)((int)&this_00[0x4b].field_0010 + 2),
                     *(uint *)&this_00[0x4b].field_0x16);
        }
        puVar9 = (uint *)&this_00[0x53].field_0xd;
        iVar7 = 10;
        do {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar9);
          puVar9 = puVar9 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      if (*(HoloTy **)&this_00[0x56].field_0x6 != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_00[0x56].field_0x6);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[0x56].field_0x6);
        *(undefined4 *)&this_00[0x56].field_0x6 = 0;
      }
      if (this_00[0x55].field_0x5c != '\0') {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)&this_00[0x4c].field_0x26);
      }
      pHVar3 = *(HoloTy **)((int)&this_00[0x55].field_0061 + 2);
      if (pHVar3 != (HoloTy *)0x0) {
        HoloTy::Done(pHVar3);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)((int)&this_00[0x55].field_0061 + 2));
        *(undefined4 *)((int)&this_00[0x55].field_0061 + 2) = 0;
      }
      cVar1 = this_00[0x4c].field_0x2a;
      if (((cVar1 != '\x06') && (cVar1 != '\a')) && (cVar1 != '\x0e')) {
        if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    (*(uint **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x3a9),*(uint *)(DAT_0081176c + 0x3ad));
        }
        if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    (*(uint **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x43a),*(uint *)(DAT_0081176c + 0x43e));
        }
        if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    (*(uint **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x4cb),*(uint *)(DAT_0081176c + 0x4cf));
        }
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
      }
      if (this_00[0x55].field_0x5b != '\0') {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
        if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc));
        }
      }
      if (*(HoloTy **)&this_00[0x56].field_0xa != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)&this_00[0x56].field_0xa);
        Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)&this_00[0x56].field_0xa);
        *(undefined4 *)&this_00[0x56].field_0xa = 0;
      }
      if (this_00[0x55].field_0x5d != '\0') {
        if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    (*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
        }
        if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    (*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                     *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
        }
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
      }
      *(undefined1 *)(this_00 + 1) = 1;
      (**(code **)(*(int *)this_00 + 0x18))(0);
      cVar1 = this_00[0x4c].field_0x2a;
      if (((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) {
        thunk_FUN_005c8200();
      }
      PaintSettMap(this_00,'\0');
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
  }
  else {
    if (cVar1 != '\x04') {
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
    if ((local_c[0x55].field_0x5b != '\0') && (0 < *(int *)(DAT_0081176c + 0x300))) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + -1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                   *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                   *(uint *)(DAT_0081176c + 0x318));
      }
      local_8 = 0;
    }
    if ((this_00[0x55].field_0x58 != '\0') &&
       (*(HoloTy **)&this_00[0x55].field_0x5f != (HoloTy *)0x0)) {
      iVar7 = HoloTy::NextFas(*(HoloTy **)&this_00[0x55].field_0x5f);
      if (iVar7 == 0) {
        uVar4 = *(uint *)(*(int *)&this_00[0x55].field_0x5f + 3);
        if (-1 < (int)uVar4) {
          FUN_006b3af0(DAT_008075a8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((this_00[0x55].field_0x5c != '\0') &&
       (*(HoloTy **)&this_00[0x56].field_0x6 != (HoloTy *)0x0)) {
      iVar7 = HoloTy::NextFas(*(HoloTy **)&this_00[0x56].field_0x6);
      if (iVar7 == 0) {
        uVar4 = *(uint *)(*(int *)&this_00[0x56].field_0x6 + 3);
        if (-1 < (int)uVar4) {
          FUN_006b3af0(DAT_008075a8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    cVar1 = this_00[0x4c].field_0x2a;
    if ((((cVar1 != '\x06') && (cVar1 != '\a')) && (cVar1 != '\x0e')) &&
       ((this_00[0x55].field_0x59 != '\0' &&
        (pHVar3 = *(HoloTy **)((int)&this_00[0x55].field_0061 + 2), pHVar3 != (HoloTy *)0x0)))) {
      iVar7 = HoloTy::NextFas(pHVar3);
      if (iVar7 == 0) {
        uVar4 = *(uint *)(*(int *)((int)&this_00[0x55].field_0061 + 2) + 3);
        if (-1 < (int)uVar4) {
          FUN_006b3af0(DAT_008075a8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    cVar1 = this_00[0x4c].field_0x2a;
    if ((((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) &&
       ((this_00[0x55].field_0x5a != '\0' && (*(HoloTy **)&this_00[0x56].field_0x2 != (HoloTy *)0x0)
        ))) {
      iVar7 = HoloTy::NextFas(*(HoloTy **)&this_00[0x56].field_0x2);
      if (iVar7 == 0) {
        uVar4 = *(uint *)(*(int *)&this_00[0x56].field_0x2 + 3);
        if (-1 < (int)uVar4) {
          FUN_006b3af0(DAT_008075a8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    cVar1 = this_00[0x4c].field_0x2a;
    if ((((cVar1 != '\x06') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
       ((this_00[0x55].field_0x5d != '\0' && (*(HoloTy **)&this_00[0x56].field_0xa != (HoloTy *)0x0)
        ))) {
      iVar7 = HoloTy::NextFas(*(HoloTy **)&this_00[0x56].field_0xa);
      if (iVar7 == 0) {
        uVar4 = *(uint *)(*(int *)&this_00[0x56].field_0xa + 3);
        if (-1 < (int)uVar4) {
          FUN_006b3af0(DAT_008075a8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      bVar2 = this_00[0x42].field_0x50;
      *(undefined1 *)(this_00 + 1) = 2;
      if ((bVar2 != 0xff) && (*(int *)((int)this_00 + (uint)bVar2 * 0x1fb + 0xd1) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)((int)this_00 + (uint)bVar2 * 0x1fb + 0xc1));
        g_currentExceptionFrame = local_50.previous;
        return local_8;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

