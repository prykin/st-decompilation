
/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::GetMessage */

undefined4 __thiscall WaitTy::GetMessage(WaitTy *this,int param_1)

{
  char cVar1;
  MMsgTy *this_00;
  StartSystemTy *this_01;
  code *pcVar2;
  WaitTy *this_02;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined3 extraout_var;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  char *pcVar9;
  char *pcVar10;
  char local_4a4 [64];
  char local_464 [1044];
  InternalExceptionFrame local_50;
  WaitTy *local_c;
  char *local_8;
  
  local_c = this;
  uVar4 = FUN_006e51b0(this->field_0010);
  this->field_0061 = uVar4;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar5 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_02 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x3bb,0,iVar5,&DAT_007a4ccc
                               ,s_WaitTy__GetMessage_007cde54);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x3bb);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_c,param_1);
  StartSystemTy::ChatMessage(DAT_0081176c,param_1);
  uVar7 = *(uint *)(param_1 + 0x10);
  if (uVar7 < 0x6336) {
    if (uVar7 == 0x6335) {
      DAT_0081176c->field_04CF =
           *(int *)(*(int *)(param_1 + 0x18) + 4) + (uint)*(ushort *)(param_1 + 0x16);
      if (DAT_0081176c->field_04B3 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)DAT_0081176c->field_04F7,DAT_0081176c->field_04B3,
                   DAT_0081176c->field_04B7,DAT_0081176c->field_04CB,DAT_0081176c->field_04CF);
      }
    }
    else if (uVar7 < 0x610b) {
      if (uVar7 == 0x610a) {
        this_02->field_0045 = 0x200;
        this_02->field_0049 = 0;
        this_02->field_004D = *(undefined4 *)(param_1 + 0x10);
        this_02->field_0051 = 8;
        thunk_FUN_005b66e0(this_02);
      }
      else if (uVar7 < 4) {
        if (uVar7 == 3) {
          DoneWait(this_02);
        }
        else if (uVar7 == 0) {
          NoneWait(this_02,unaff_EDI);
        }
        else if (uVar7 == 2) {
          InitWait(this_02,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x14),
                   *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18));
        }
      }
      else if (uVar7 == 5) {
        PaintWait(this_02,'\0');
      }
      else if (uVar7 == 0x6105) {
        this_02->field_0045 = 0x200;
        this_02->field_0049 = 0;
        this_02->field_004D = *(undefined4 *)(param_1 + 0x10);
        this_02->field_0051 = *(undefined4 *)(param_1 + 0x14);
        this_02->field_0055 = 0;
        thunk_FUN_005b66e0(this_02);
      }
    }
    else if (uVar7 < 0x6334) {
      if (uVar7 == 0x6333) {
        MMMObjTy::PaintSlBut((MMMObjTy *)this_02,(int)&DAT_0081176c->field_038D,param_1,0);
      }
      else if (uVar7 == 0x6121) {
        this_02->field_0045 = 0x200;
        this_02->field_0049 = 0;
        this_02->field_004D = *(undefined4 *)(param_1 + 0x10);
        this_02->field_0051 = *(undefined4 *)(param_1 + 0x14);
        this_02->field_0055 = *(undefined4 *)(param_1 + 0x18);
        thunk_FUN_005b66e0(this_02);
      }
      else if (uVar7 == 0x6332) {
        StartSystemTy::PaintBinDesc(DAT_0081176c,param_1);
      }
    }
    else if (uVar7 == 0x6334) {
      MMMObjTy::PaintSlBut((MMMObjTy *)this_02,(int)&DAT_0081176c->field_041E,param_1,0);
    }
    goto cf_common_exit_005EAB6A;
  }
  if (uVar7 < 0x6943) {
    if (uVar7 == 0x6942) {
      this_02->field_0045 = 0x200;
      this_02->field_0049 = 0;
      this_02->field_004D = 0x6102;
      this_02->field_0051 = *(undefined4 *)(param_1 + 0x14);
      thunk_FUN_005b66e0(this_02);
    }
    else if (uVar7 < 0x6940) {
      if (uVar7 == 0x693f) {
        thunk_FUN_005e9970((int)this_02);
      }
      else if (uVar7 == 0x6340) {
        MMMObjTy::PaintSlBut((MMMObjTy *)this_02,(int)&this_02->field_1A5B->field_055C,param_1,0);
      }
      else if (uVar7 == 0x6341) {
        MMMObjTy::PaintSlBut((MMMObjTy *)this_02,(int)&this_02->field_1A5B->field_05ED,param_1,0);
      }
    }
    else if (uVar7 == 0x6940) {
      thunk_FUN_005e9a40(this_02);
    }
    goto cf_common_exit_005EAB6A;
  }
  if (uVar7 < 0x6952) {
    if (uVar7 == 0x6951) {
      thunk_FUN_005b6350(this_02,0x610a,0,0);
      this_02->field_1A64 = 0;
    }
    else if (uVar7 == 0x6943) {
      thunk_FUN_005b6350(this_02,0x6942,*(undefined4 *)(param_1 + 0x14),0);
      this_02->field_1A64 = 0;
      if (DAT_00811768 == '\x01') {
        DAT_00811768 = '\x02';
      }
    }
    else {
      if (uVar7 != 0x694d) goto cf_common_exit_005EAB6A;
      thunk_FUN_005b6350(this_02,0x6105,1,0);
      this_02->field_1A64 = 0;
      if (DAT_00811768 == '\x01') {
        DAT_00811768 = '\x02';
      }
    }
    (**(code **)(this_02->field_0000 + 8))();
    this_00 = this_02->field_1A5B->field_02E6;
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(this_00,1,0,1);
    }
    goto cf_common_exit_005EAB6A;
  }
  if (uVar7 != 0xc0a2) goto cf_common_exit_005EAB6A;
  iVar5 = thunk_FUN_005ddb40((int)this_02->field_1A5B);
  if (iVar5 == 0) {
    if (DAT_008067a0 != '\0') {
      iVar5 = this_02->field_1A5B->field_0686;
      if (*(int *)(iVar5 + 8) < 1) {
        pcVar9 = (char *)0x0;
      }
      else {
        pcVar9 = (char *)**(undefined4 **)(iVar5 + 0x14);
      }
      bVar3 = thunk_FUN_005717e0(pcVar9);
      if (CONCAT31(extraout_var,bVar3) != 0) {
        iVar5 = this_02->field_1A5B->field_0686;
        if (*(int *)(iVar5 + 8) < 1) {
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
        }
        else {
          CFsgsConnection::SendChatMessage
                    ((CFsgsConnection *)&DAT_00802a90,(char *)**(undefined4 **)(iVar5 + 0x14));
        }
        goto LAB_005eab28;
      }
    }
    pcVar9 = local_4a4;
    for (iVar5 = 0x114; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    *pcVar9 = '\0';
    pcVar9 = &DAT_00807e1d;
    if (DAT_008067a0 == '\0') {
      pcVar9 = (char *)&DAT_00807ddd;
    }
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    this_01 = this_02->field_1A5B;
    pcVar9 = pcVar10 + -uVar7;
    pcVar10 = local_4a4;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    iVar5 = this_01->field_0686;
    if (*(int *)(iVar5 + 8) < 1) {
      pcVar9 = (char *)0x0;
    }
    else {
      pcVar9 = (char *)**(undefined4 **)(iVar5 + 0x14);
    }
    uVar7 = 0xffffffff;
    do {
      pcVar10 = pcVar9;
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      pcVar10 = pcVar9 + 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar1 != '\0');
    uVar7 = ~uVar7;
    pcVar9 = pcVar10 + -uVar7;
    pcVar10 = local_464;
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar10 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar10 = pcVar10 + 4;
    }
    for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
      *pcVar10 = *pcVar9;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar10 + 1;
    }
    local_8 = local_464;
    StartSystemTy::AddToChat(this_01,(int)local_4a4);
    FUN_00715360(DAT_00811764,0,'\x1b',local_4a4,0x451,1,0xffffffff);
  }
LAB_005eab28:
  Library::DKW::TBL::FUN_006b6020(this_02->field_1A5B->field_0686,0,&DAT_008016a0);
  this_02->field_002D = 0x33;
  *(undefined4 *)&this_02->field_0x31 = this_02->field_1A5B->field_0686;
  FUN_006e6080(this_02,2,this_02->field_1A5B->field_054C,(undefined4 *)&this_02->field_0x1d);
cf_common_exit_005EAB6A:
  g_currentExceptionFrame = local_50.previous;
  uVar4 = MMObjTy::GetMessage((MMObjTy *)this_02,param_1);
  return uVar4;
}

