
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::NoneChooseMap */

void __thiscall ChooseMapTy::NoneChooseMap(ChooseMapTy *this,undefined4 *param_1)

{
  char cVar1;
  byte bVar2;
  ChooseMapTy_field_1A5FState CVar3;
  uint uVar4;
  code *pcVar5;
  ChooseMapTy *this_00;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint *puVar9;
  int *piVar10;
  InternalExceptionFrame local_b0;
  int local_6c [8];
  uint local_4c;
  undefined2 local_48;
  undefined1 local_46;
  undefined4 local_45;
  uint local_41;
  undefined1 local_3d;
  undefined1 local_3b;
  undefined4 local_2a;
  undefined4 local_26;
  ChooseMapTy *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 1;
  local_20 = this;
  DVar6 = timeGetTime();
  this->field_0061 = DVar6;
  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  iVar7 = Library::MSVCRT::__setjmp3(local_b0.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_20;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_load_obj_cpp_007cc728,0x24e,0,iVar7,&DAT_007a4ccc
                               ,s_ChooseMapTy__NoneChooseMap_007cc7f0);
    if (iVar8 != 0) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    RaiseInternalException(iVar7,0,s_E____titans_Start_load_obj_cpp_007cc728,0x24e);
    return;
  }
  if (((local_20->field_0065 == '\x01') && ((HANDLE)local_20->field_1C8F != (HANDLE)0x0)) &&
     (DVar6 = WaitForSingleObject((HANDLE)local_20->field_1C8F,0), DVar6 == 0)) {
    FindNextChangeNotification((HANDLE)this_00->field_1C8F);
    PrepFiles(this_00,this_00->field_1C93);
    this_00->field_002D = 5;
    if (this_00->field_1A6C != 0) {
      FUN_006e6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
    }
    if (*(int *)(DAT_0081176c + 0x389) != 0) {
      FUN_006e6080(this_00,2,*(int *)(DAT_0081176c + 0x389),(undefined4 *)&this_00->field_0x1d);
    }
  }
  if ((this_00->field_1A64 != 0) && (0xf9 < (uint)(this_00->field_0061 - this_00->field_1A68))) {
    ShowDescription(this_00,this_00->field_1C93);
    this_00->field_1A64 = 0;
  }
  cVar1 = this_00->field_0065;
  if (cVar1 == '\x01') {
    if (DAT_0080877e != '\0') {
      switch(this_00->field_1A5F) {
      case CASE_4:
      case CASE_5:
      case CASE_C:
      case CASE_13:
        local_c = 0;
        Library::DKW::DDX::FUN_006b7510(DAT_00811764,-1,&local_14,-1,0);
        if (DAT_008067a0 != '\0') {
          CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
        }
        local_10 = 0;
        if (0 < local_14) {
          do {
            iVar7 = FUN_00715630(DAT_00811764,-1,&local_18,&local_1c,&local_c,&local_4c,-1,0);
            if (iVar7 == -0x4d) {
              piVar10 = local_6c;
              for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
                *piVar10 = 0;
                piVar10 = piVar10 + 1;
              }
              local_6c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (this_00->field_1A5B->field_02E6 == (MMsgTy *)0x0) {
                (**(code **)this_00->field_0000)(local_6c);
              }
              else {
                local_6c[2] = this_00->field_0008;
                local_6c[3] = 2;
                MMsgTy::SetMessage(this_00->field_1A5B->field_02E6,0x2522,'\0',local_6c,
                                   (undefined4 *)0x0,(undefined4 *)0x0,0,0);
              }
            }
            else if (iVar7 == 1) {
              if (local_18 == 0x1a) {
                if (*(char *)(local_c + 2) == '\x04') {
                  local_46 = 3;
                  local_48 = (undefined2)((uint)DAT_00807dd5 >> 0x10);
                  local_45 = DAT_008087be;
                  local_41 = (this_00->field_1A5F != CASE_C) - 1 & DAT_00808750;
                  local_3b = DAT_00807361;
                  switch(this_00->field_1A5F) {
                  case CASE_4:
switchD_005adb01_caseD_4:
                    local_3d = 2;
                    break;
                  case CASE_5:
switchD_005adb01_caseD_5:
                    local_3d = 3;
                    break;
                  default:
                    local_3d = 0xff;
                    break;
                  case CASE_C:
switchD_005adb01_caseD_c:
                    local_3d = 5;
                    break;
                  case CASE_13:
                    switch(DAT_00803400) {
                    case 4:
                      goto switchD_005adb01_caseD_4;
                    case 5:
                      goto switchD_005adb01_caseD_5;
                    case 0xc:
                      goto switchD_005adb01_caseD_c;
                    case 0x14:
                    case 0x15:
                      local_3d = 4;
                    }
                  }
                  local_26 = *(undefined4 *)(local_c + 0x22);
                  local_2a = *(undefined4 *)(local_c + 0x1e);
                  FUN_00715360(DAT_00811764,local_1c,'\x1a',(char *)&local_48,0x26,1,0xffffffff);
                }
              }
              else if (local_18 == 0x1b) {
                StartSystemTy::AddToChat(this_00->field_1A5B,local_c);
              }
              if (local_c != 0) {
                FUN_006ab060(&local_c);
              }
            }
            local_10 = local_10 + 1;
          } while (local_10 < local_14);
        }
      }
    }
  }
  else if (cVar1 == '\x03') {
    if ((this_00->field_20B5 != '\0') &&
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
    if (((this_00->field_0x20b3 != '\0') && (this_00->field_20B8 != (HoloTy *)0x0)) &&
       (iVar7 = HoloTy::NextFas(this_00->field_20B8), iVar7 != 0)) {
      local_8 = 0;
    }
    if (((this_00->field_20B4 != '\0') && (this_00->field_20BC != (HoloTy *)0x0)) &&
       (iVar7 = HoloTy::NextFas(this_00->field_20BC), iVar7 != 0)) {
      local_8 = 0;
    }
    if (((this_00->field_20B7 != '\0') && (this_00->field_20C0 != (HoloTy *)0x0)) &&
       (iVar7 = HoloTy::NextFas(this_00->field_20C0), iVar7 != 0)) {
      local_8 = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if ((this_00->field_0x20b3 != '\0') && (this_00->field_20B8 != (HoloTy *)0x0)) {
        HoloTy::Done(this_00->field_20B8);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_20B8);
        this_00->field_20B8 = (HoloTy *)0x0;
      }
      if ((this_00->field_20B4 != '\0') && (this_00->field_20BC != (HoloTy *)0x0)) {
        HoloTy::Done(this_00->field_20BC);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_20BC);
        this_00->field_20BC = (HoloTy *)0x0;
      }
      if ((this_00->field_20B7 != '\0') && (this_00->field_20C0 != (HoloTy *)0x0)) {
        HoloTy::Done(this_00->field_20C0);
        Library::MSVCRT::FUN_0072e2b0((undefined4 *)this_00->field_20C0);
        this_00->field_20C0 = (HoloTy *)0x0;
      }
      this_00->field_0065 = 1;
      if (this_00->field_20B5 != '\0') {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
        if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc));
        }
      }
      CreateCtrls(this_00,'\x01');
      if (this_00->field_1A74 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1AB8,this_00->field_1A74,0xfffffffe,this_00->field_1A8C,
                   this_00->field_1A90);
      }
      if (this_00->field_1B05 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1B49,this_00->field_1B05,0xfffffffe,this_00->field_1B1D,
                   this_00->field_1B21);
      }
      if (this_00->field_1B96 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)this_00->field_1BDA,this_00->field_1B96,0xfffffffe,this_00->field_1BAE,
                   this_00->field_1BB2);
      }
      puVar9 = &this_00->field_1C23;
      iVar7 = 0x16;
      do {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,*puVar9);
        puVar9 = puVar9 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
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
      CVar3 = this_00->field_1A5F;
      if ((((CVar3 == CASE_C) || (CVar3 == CASE_4)) || (CVar3 == CASE_5)) || (CVar3 == CASE_13)) {
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
      PaintChooseMap(this_00,'\0');
      g_currentExceptionFrame = local_b0.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if ((this_00->field_20B5 != '\0') && (0 < *(int *)(DAT_0081176c + 0x300))) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + -1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                   *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                   *(uint *)(DAT_0081176c + 0x318));
      }
      local_8 = 0;
    }
    if ((this_00->field_0x20b3 != '\0') && (this_00->field_20B8 != (HoloTy *)0x0)) {
      iVar7 = HoloTy::NextFas(this_00->field_20B8);
      if (iVar7 == 0) {
        uVar4 = this_00->field_20B8->field_0003;
        if (-1 < (int)uVar4) {
          FUN_006b3af0(DAT_008075a8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((this_00->field_20B4 != '\0') && (this_00->field_20BC != (HoloTy *)0x0)) {
      iVar7 = HoloTy::NextFas(this_00->field_20BC);
      if (iVar7 == 0) {
        uVar4 = this_00->field_20BC->field_0003;
        if (-1 < (int)uVar4) {
          FUN_006b3af0(DAT_008075a8,uVar4);
        }
      }
      else {
        local_8 = 0;
      }
    }
    if ((this_00->field_20B7 != '\0') && (this_00->field_20C0 != (HoloTy *)0x0)) {
      iVar7 = HoloTy::NextFas(this_00->field_20C0);
      if (iVar7 == 0) {
        uVar4 = this_00->field_20C0->field_0003;
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
      bVar2 = this_00->field_1A5A;
      this_00->field_0065 = 2;
      if ((bVar2 != 0xff) && (*(int *)(&this_00->field_0xd1 + (uint)bVar2 * 0x1fb) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_00->field_0xc1 + (uint)bVar2 * 0x1fb));
        g_currentExceptionFrame = local_b0.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_b0.previous;
  return;
}

