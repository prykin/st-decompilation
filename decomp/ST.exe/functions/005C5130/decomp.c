
/* Recovered from embedded debug metadata:
   E:\__titans\Start\sett_obj.cpp
   SettMapTy::NoneSettMap */

int __thiscall SettMapTy::NoneSettMap(SettMapTy *this,int *param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  SettMapTy *this_00;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar8;
  InternalExceptionFrame local_50;
  SettMapTy *local_c;
  int local_8;
  
  local_8 = 1;
  local_c = this;
  DVar5 = timeGetTime();
  this->field_0061 = DVar5;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar6 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x243,0,iVar6,&DAT_007a4ccc
                               ,s_SettMapTy__NoneSettMap_007cd1a8);
    if (iVar7 == 0) {
      RaiseInternalException(iVar6,0,s_E____titans_Start_sett_obj_cpp_007cd0e8,0x243);
      return 0;
    }
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  cVar1 = local_c->field_0065;
  if (cVar1 == '\x01') {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
    }
  }
  else if (cVar1 == '\x03') {
    if (((local_c->field_0x21e1 != '\0') && (local_c->field_21E8 != (HoloTy *)0x0)) &&
       (iVar6 = HoloTy::NextFas(local_c->field_21E8), iVar6 != 0)) {
      local_8 = 0;
    }
    if (((this_00->field_0x21e5 != '\0') && (this_00->field_21F4 != (HoloTy *)0x0)) &&
       (iVar6 = HoloTy::NextFas(this_00->field_21F4), iVar6 != 0)) {
      local_8 = 0;
    }
    cVar1 = this_00->field_1E26;
    if (((cVar1 != '\x06') && (cVar1 != '\a')) &&
       ((cVar1 != '\x0e' &&
        (((this_00->field_0x21e2 != '\0' && (this_00->field_21EC != (HoloTy *)0x0)) &&
         (iVar6 = HoloTy::NextFas(this_00->field_21EC), iVar6 != 0)))))) {
      local_8 = 0;
    }
    cVar1 = this_00->field_1E26;
    if ((((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) &&
       (((this_00->field_0x21e3 != '\0' && (this_00->field_21F0 != (HoloTy *)0x0)) &&
        (iVar6 = HoloTy::NextFas(this_00->field_21F0), iVar6 != 0)))) {
      local_8 = 0;
    }
    cVar1 = this_00->field_1E26;
    if (((((cVar1 != '\x06') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
        ((this_00->field_0x21e6 != '\0' && (this_00->field_21F8 != (HoloTy *)0x0)))) &&
       (iVar6 = HoloTy::NextFas(this_00->field_21F8), iVar6 != 0)) {
      local_8 = 0;
    }
    if ((this_00->field_0x21e4 != '\0') &&
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
      if (this_00->field_21F0 != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_21F0);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_21F0);
        this_00->field_21F0 = (HoloTy *)0x0;
      }
      cVar1 = this_00->field_1E26;
      if ((((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) &&
         (this_00->field_0x21e3 != '\0')) {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_00->field_1F80);
      }
      if (this_00->field_21E8 != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_21E8);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_21E8);
        this_00->field_21E8 = (HoloTy *)0x0;
      }
      if (this_00->field_0x21e1 != '\0') {
        if (this_00->field_1C6F != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)this_00->field_1CB3,this_00->field_1C6F,0xfffffffe,this_00->field_1C87,
                     this_00->field_1C8B);
        }
        if (this_00->field_1D00 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)this_00->field_1D44,this_00->field_1D00,0xfffffffe,this_00->field_1D18,
                     this_00->field_1D1C);
        }
        if (this_00->field_1D91 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)this_00->field_1DD5,this_00->field_1D91,0xfffffffe,this_00->field_1DA9,
                     this_00->field_1DAD);
        }
        puVar8 = &this_00->field_20CC;
        iVar6 = 10;
        do {
          Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar8);
          puVar8 = puVar8 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      if (this_00->field_21F4 != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_21F4);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_21F4);
        this_00->field_21F4 = (HoloTy *)0x0;
      }
      if (this_00->field_0x21e5 != '\0') {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,this_00->field_1E22);
      }
      if (this_00->field_21EC != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_21EC);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_21EC);
        this_00->field_21EC = (HoloTy *)0x0;
      }
      cVar1 = this_00->field_1E26;
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
      if (this_00->field_0x21e4 != '\0') {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
        if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc));
        }
      }
      if (this_00->field_21F8 != (HoloTy *)0x0) {
        HoloTy::Done(this_00->field_21F8);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_21F8);
        this_00->field_21F8 = (HoloTy *)0x0;
      }
      if (this_00->field_0x21e6 != '\0') {
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
      this_00->field_0065 = 1;
      (**(code **)(this_00->field_0000 + 0x18))(0);
      cVar1 = this_00->field_1E26;
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
    if ((local_c->field_0x21e4 != '\0') && (0 < *(int *)(DAT_0081176c + 0x300))) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + -1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                   *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                   *(uint *)(DAT_0081176c + 0x318));
      }
      local_8 = 0;
    }
    if ((this_00->field_0x21e1 != '\0') && (this_00->field_21E8 != (HoloTy *)0x0)) {
      iVar6 = HoloTy::NextFas(this_00->field_21E8);
      if (iVar6 == 0) {
        uVar3 = this_00->field_21E8->field_0003;
        if (-1 < (int)uVar3) {
          FUN_006b3af0(DAT_008075a8,uVar3);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((this_00->field_0x21e5 != '\0') && (this_00->field_21F4 != (HoloTy *)0x0)) {
      iVar6 = HoloTy::NextFas(this_00->field_21F4);
      if (iVar6 == 0) {
        uVar3 = this_00->field_21F4->field_0003;
        if (-1 < (int)uVar3) {
          FUN_006b3af0(DAT_008075a8,uVar3);
        }
      }
      else {
        local_8 = 0;
      }
    }
    cVar1 = this_00->field_1E26;
    if ((((cVar1 != '\x06') && (cVar1 != '\a')) && (cVar1 != '\x0e')) &&
       ((this_00->field_0x21e2 != '\0' && (this_00->field_21EC != (HoloTy *)0x0)))) {
      iVar6 = HoloTy::NextFas(this_00->field_21EC);
      if (iVar6 == 0) {
        uVar3 = this_00->field_21EC->field_0003;
        if (-1 < (int)uVar3) {
          FUN_006b3af0(DAT_008075a8,uVar3);
        }
      }
      else {
        local_8 = 0;
      }
    }
    cVar1 = this_00->field_1E26;
    if ((((cVar1 == '\x06') || (cVar1 == '\a')) || (cVar1 == '\x0e')) &&
       ((this_00->field_0x21e3 != '\0' && (this_00->field_21F0 != (HoloTy *)0x0)))) {
      iVar6 = HoloTy::NextFas(this_00->field_21F0);
      if (iVar6 == 0) {
        uVar3 = this_00->field_21F0->field_0003;
        if (-1 < (int)uVar3) {
          FUN_006b3af0(DAT_008075a8,uVar3);
        }
      }
      else {
        local_8 = 0;
      }
    }
    cVar1 = this_00->field_1E26;
    if ((((cVar1 != '\x06') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
       ((this_00->field_0x21e6 != '\0' && (this_00->field_21F8 != (HoloTy *)0x0)))) {
      iVar6 = HoloTy::NextFas(this_00->field_21F8);
      if (iVar6 == 0) {
        uVar3 = this_00->field_21F8->field_0003;
        if (-1 < (int)uVar3) {
          FUN_006b3af0(DAT_008075a8,uVar3);
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
      bVar2 = this_00->field_0x1a5a;
      this_00->field_0065 = 2;
      if ((bVar2 != 0xff) && (*(int *)(&this_00->field_0xd1 + (uint)bVar2 * 0x1fb) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_00->field_0xc1 + (uint)bVar2 * 0x1fb));
        g_currentExceptionFrame = local_50.previous;
        return local_8;
      }
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}

