
/* Recovered from embedded debug metadata:
   E:\__titans\Start\load_obj.cpp
   ChooseMapTy::NoneChooseMap
   
   [STSwitchEnumApplier] Switch target field_1A5F uses
   /SubmarineTitans/Recovered/Enums/ChooseMapTy_field_1A5FState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_10=16;CASE_13=19;CASE_14=20;CASE_15=21
    */

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
  AnonShape_005AD390_9AB360A8 *local_c;
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
  if (((local_20->field_0065 == '\x01') && (local_20->field_1C8F != (HANDLE)0x0)) &&
     (DVar6 = WaitForSingleObject(local_20->field_1C8F,0), DVar6 == 0)) {
    FindNextChangeNotification(this_00->field_1C8F);
    PrepFiles(this_00,this_00->field_1C93);
    this_00->field_002D = 5;
    if (this_00->field_1A6C != 0) {
      FUN_006e6080(this_00,2,this_00->field_1A6C,(undefined4 *)&this_00->field_0x1d);
    }
    if (PTR_0081176c->field_0389 != 0) {
      FUN_006e6080(this_00,2,PTR_0081176c->field_0389,(undefined4 *)&this_00->field_0x1d);
    }
  }
  if ((this_00->field_1A64 != 0) && (0xf9 < this_00->field_0061 - this_00->field_1A68)) {
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
        local_c = (AnonShape_005AD390_9AB360A8 *)0x0;
        Library::DKW::DDX::FUN_006b7510(g_int_00811764,-1,&local_14,-1,0);
        if (DAT_008067a0 != '\0') {
          CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
        }
        local_10 = 0;
        if (0 < local_14) {
          do {
            iVar7 = Library::Ourlib::CONNECT::FUN_00715630
                              (g_int_00811764,-1,&local_18,&local_1c,&local_c,&local_4c,-1,0);
            if (iVar7 == -0x4d) {
              piVar10 = local_6c;
              for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
                *piVar10 = 0;
                piVar10 = piVar10 + 1;
              }
              local_6c[4] = (-(uint)(DAT_008067a0 != '\0') & 4) + 0x694d;
              if (this_00->field_1A5B->field_02E6 == (MMsgTy *)0x0) {
                (*(code *)this_00->field_0000->field_0000)(local_6c);
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
                if (local_c->field_0002 == '\x04') {
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
                  local_26 = local_c->field_0022;
                  local_2a = local_c->field_001E;
                  FUN_00715360(g_int_00811764,local_1c,'\x1a',(char *)&local_48,0x26,1,0xffffffff);
                }
              }
              else if (local_18 == 0x1b) {
                StartSystemTy::AddToChat(this_00->field_1A5B,(int)local_c);
              }
              if (local_c != (AnonShape_005AD390_9AB360A8 *)0x0) {
                FreeAndNull(&local_c);
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
       ((int)PTR_0081176c->field_0300 < *(int *)&PTR_0081176c->field_0x304 + -1)) {
      PTR_0081176c->field_0300 = PTR_0081176c->field_0300 + 1;
      if (*(uint *)&PTR_0081176c->field_0x2fc != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)&PTR_0081176c->field_0x340,*(uint *)&PTR_0081176c->field_0x2fc,
                   PTR_0081176c->field_0300,PTR_0081176c->field_0314,PTR_0081176c->field_0318);
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
    if ((PTR_0081176c->field_02E6 != (MMsgTy *)0x0) &&
       (PTR_0081176c->field_02E6->field_0065 != '\x01')) {
      local_8 = 0;
    }
    if (local_8 != 0) {
      if ((this_00->field_0x20b3 != '\0') && (this_00->field_20B8 != (HoloTy *)0x0)) {
        HoloTy::Done(this_00->field_20B8);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_20B8);
        this_00->field_20B8 = (HoloTy *)0x0;
      }
      if ((this_00->field_20B4 != '\0') && (this_00->field_20BC != (HoloTy *)0x0)) {
        HoloTy::Done(this_00->field_20BC);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_20BC);
        this_00->field_20BC = (HoloTy *)0x0;
      }
      if ((this_00->field_20B7 != '\0') && (this_00->field_20C0 != (HoloTy *)0x0)) {
        HoloTy::Done(this_00->field_20C0);
        Library::MSVCRT::FUN_0072e2b0(this_00->field_20C0);
        this_00->field_20C0 = (HoloTy *)0x0;
      }
      this_00->field_0065 = 1;
      if (this_00->field_20B5 != '\0') {
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_02EC);
        if (*(uint *)&PTR_0081176c->field_0x2fc != 0xffffffff) {
          FUN_006b3af0(*(int **)&PTR_0081176c->field_0x340,*(uint *)&PTR_0081176c->field_0x2fc);
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
      if (PTR_0081176c->field_0391 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_03D5,PTR_0081176c->field_0391,0xfffffffe,
                   PTR_0081176c->field_03A9,PTR_0081176c->field_03AD);
      }
      if (PTR_0081176c->field_0422 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_0466,PTR_0081176c->field_0422,0xfffffffe,
                   PTR_0081176c->field_043A,PTR_0081176c->field_043E);
      }
      if (PTR_0081176c->field_04B3 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3,0xfffffffe,
                   PTR_0081176c->field_04CB,PTR_0081176c->field_04CF);
      }
      Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0540);
      CVar3 = this_00->field_1A5F;
      if ((((CVar3 == CASE_C) || (CVar3 == CASE_4)) || (CVar3 == CASE_5)) || (CVar3 == CASE_13)) {
        if (PTR_0081176c->field_0560 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)PTR_0081176c->field_05A4,PTR_0081176c->field_0560,0xfffffffe,
                     PTR_0081176c->field_0578,PTR_0081176c->field_057C);
        }
        if (PTR_0081176c->field_05F1 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)PTR_0081176c->field_0635,PTR_0081176c->field_05F1,0xfffffffe,
                     PTR_0081176c->field_0609,PTR_0081176c->field_060D);
        }
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0558);
        Library::DKW::DDX::FUN_006b3430(DAT_008075a8,PTR_0081176c->field_0554);
      }
      PaintChooseMap(this_00,'\0');
      g_currentExceptionFrame = local_b0.previous;
      return;
    }
  }
  else if (cVar1 == '\x04') {
    if ((this_00->field_20B5 != '\0') && (0 < (int)PTR_0081176c->field_0300)) {
      PTR_0081176c->field_0300 = PTR_0081176c->field_0300 + -1;
      if (*(uint *)&PTR_0081176c->field_0x2fc != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)&PTR_0081176c->field_0x340,*(uint *)&PTR_0081176c->field_0x2fc,
                   PTR_0081176c->field_0300,PTR_0081176c->field_0314,PTR_0081176c->field_0318);
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
    if ((PTR_0081176c->field_02E6 != (MMsgTy *)0x0) &&
       (PTR_0081176c->field_02E6->field_0065 != '\x02')) {
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

