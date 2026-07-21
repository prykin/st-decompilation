#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004038D7|005EA680; family_names=WaitTy::GetMessage; ret4=2;
   direct_offsets={10:5,14:9,18:3,1c:0} */

int __thiscall WaitTy::GetMessage(WaitTy *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  MMsgTy *this_00;
  StartSystemTy *this_01;
  code *pcVar3;
  WaitTy *this_02;
  bool bVar4;
  DWORD DVar5;
  int iVar6;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar7;
  uint uVar8;
  uint uVar9;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  char *pcVar10;
  char *pcVar11;
  char local_4a4 [64];
  char local_464 [1044];
  InternalExceptionFrame local_50;
  WaitTy *local_c;
  char *local_8;

  local_c = this;
  DVar5 = FUN_006e51b0(this->field_0010);
  this->field_0061 = DVar5;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar6 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_02 = local_c;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar7 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x3bb,0,iVar6,"%s"
                               ,"WaitTy::GetMessage");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\wait_obj.cpp",0x3bb);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_c,(int)message);
  StartSystemTy::ChatMessage(PTR_0081176c,(AnonShape_005DE050_5BD86458 *)message);
  SVar2 = message->id;
  if (SVar2 < (MESS_SHARED_6334|MESS_ID_CREATE)) {
    if (SVar2 == MESS_WAITTY_6335) {
      PTR_0081176c->field_04CF =
           *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
      if (PTR_0081176c->field_04B3 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)PTR_0081176c->field_04F7,PTR_0081176c->field_04B3,
                   PTR_0081176c->field_04B7,PTR_0081176c->field_04CB,PTR_0081176c->field_04CF);
      }
    }
    else if (SVar2 < 0x610b) {
      if (SVar2 == MESS_SHARED_610A) {
        this_02->field_0045 = 0x200;
        this_02->field_0049 = 0;
        this_02->field_004D = message->id;
        this_02->field_0051 = 8;
        thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_02);
      }
      else if (SVar2 < 4) {
        if (SVar2 == MESS_SHARED_0003) {
          DoneWait(this_02);
        }
        else if (SVar2 == MESS_ID_NONE) {
          /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
          NoneWait(this_02,unaff_EDI);
        }
        else if (SVar2 == MESS_ID_CREATE) {
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          InitWait(this_02,*(undefined4 *)((message->arg0).u32 + 0x14),
                   *(undefined4 *)((message->arg0).u32 + 0x18));
        }
      }
      else if (SVar2 == MESS_SHARED_0005) {
        PaintWait(this_02,'\0');
      }
      else if (SVar2 == MESS_SHARED_6105) {
        this_02->field_0045 = 0x200;
        this_02->field_0049 = 0;
        this_02->field_004D = message->id;
        this_02->field_0051 = message->arg0;
        this_02->field_0055 = 0;
        thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_02);
      }
    }
    else if (SVar2 < MESS_SHARED_6334) {
      if (SVar2 == MESS_WAITTY_6333) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_02,(AnonShape_005B6560_61F462DF *)&PTR_0081176c->field_038D,
                   (int)message,0);
      }
      else if (SVar2 == MESS_SHARED_6121) {
        this_02->field_0045 = 0x200;
        this_02->field_0049 = 0;
        this_02->field_004D = message->id;
        this_02->field_0051 = message->arg0;
        this_02->field_0055 = message->arg1;
        thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_02);
      }
      else if (SVar2 == MESS_SHARED_6332) {
        StartSystemTy::PaintBinDesc(PTR_0081176c,(AnonShape_005DE050_5BD86458 *)message);
      }
    }
    else if (SVar2 == MESS_SHARED_6334) {
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)this_02,(AnonShape_005B6560_61F462DF *)&PTR_0081176c->field_041E,
                 (int)message,0);
    }
    goto cf_common_exit_005EAB6A;
  }
  if (SVar2 < MESS_WAITTY_6943) {
    if (SVar2 == MESS_CHOOSEMAPTY_6942) {
      this_02->field_0045 = 0x200;
      this_02->field_0049 = 0;
      this_02->field_004D = 0x6102;
      this_02->field_0051 = message->arg0;
      thunk_FUN_005b66e0((AnonShape_005B66E0_174166E5 *)this_02);
    }
    else if (SVar2 < MESS_SHARED_6940) {
      if (SVar2 == MESS_PRIVIDERTY_693F) {
        thunk_FUN_005e9970((AnonShape_005E9970_7C1AA6F1 *)this_02);
      }
      else if (SVar2 == MESS_SETTMAPMTY_6340) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_02,
                   (AnonShape_005B6560_61F462DF *)&this_02->field_1A5B->field_055C,(int)message,0);
      }
      else if (SVar2 == MESS_SHARED_6341) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_02,
                   (AnonShape_005B6560_61F462DF *)&this_02->field_1A5B->field_05ED,(int)message,0);
      }
    }
    else if (SVar2 == MESS_SHARED_6940) {
      thunk_FUN_005e9a40((AnonShape_005E9970_7C1AA6F1 *)this_02);
    }
    goto cf_common_exit_005EAB6A;
  }
  if (SVar2 < MESS_PRIVIDERTY_6952) {
    if (SVar2 == MESS_SHARED_6951) {
      thunk_FUN_005b6350(this_02,0x610a,0,0);
      this_02->field_1A64 = 0;
    }
    else if (SVar2 == MESS_WAITTY_6943) {
      thunk_FUN_005b6350(this_02,0x6942,message->arg0,0);
      this_02->field_1A64 = 0;
      if (DAT_00811768 == '\x01') {
        DAT_00811768 = '\x02';
      }
    }
    else {
      if (SVar2 != MESS_WAITTY_694D) goto cf_common_exit_005EAB6A;
      thunk_FUN_005b6350(this_02,0x6105,1,0);
      this_02->field_1A64 = 0;
      if (DAT_00811768 == '\x01') {
        DAT_00811768 = '\x02';
      }
    }
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (*(code *)this_02->field_0000->field_0008)();
    this_00 = this_02->field_1A5B->field_02E6;
    if (this_00 != (MMsgTy *)0x0) {
      MMsgTy::HidePanel(this_00,1,0,1);
    }
    goto cf_common_exit_005EAB6A;
  }
  if (SVar2 != MESS_SHARED_C0A2) goto cf_common_exit_005EAB6A;
  iVar6 = thunk_FUN_005ddb40((int)this_02->field_1A5B);
  if (iVar6 == 0) {
    if (DAT_008067a0 != '\0') {
      iVar6 = this_02->field_1A5B->field_0686;
      if (*(int *)(iVar6 + 8) < 1) {
        pcVar10 = (char *)0x0;
      }
      else {
        pcVar10 = (char *)**(undefined4 **)(iVar6 + 0x14);
      }
      bVar4 = thunk_FUN_005717e0(pcVar10);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var,bVar4) != 0) {
        iVar6 = this_02->field_1A5B->field_0686;
        if (*(int *)(iVar6 + 8) < 1) {
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
        }
        else {
          CFsgsConnection::SendChatMessage
                    ((CFsgsConnection *)&DAT_00802a90,(char *)**(undefined4 **)(iVar6 + 0x14));
        }
        goto LAB_005eab28;
      }
    }
    pcVar10 = local_4a4;
    for (iVar6 = 0x114; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar10[0] = '\0';
      pcVar10[1] = '\0';
      pcVar10[2] = '\0';
      pcVar10[3] = '\0';
      pcVar10 = pcVar10 + 4;
    }
    *pcVar10 = '\0';
    pcVar10 = &DAT_00807e1d;
    if (DAT_008067a0 == '\0') {
      pcVar10 = (char *)&DAT_00807ddd;
    }
    uVar8 = 0xffffffff;
    do {
      pcVar11 = pcVar10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    this_01 = this_02->field_1A5B;
    pcVar10 = pcVar11 + -uVar8;
    pcVar11 = local_4a4;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    iVar6 = this_01->field_0686;
    if (*(int *)(iVar6 + 8) < 1) {
      pcVar10 = (char *)0x0;
    }
    else {
      pcVar10 = (char *)**(undefined4 **)(iVar6 + 0x14);
    }
    uVar8 = 0xffffffff;
    do {
      pcVar11 = pcVar10;
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      pcVar11 = pcVar10 + 1;
      cVar1 = *pcVar10;
      pcVar10 = pcVar11;
    } while (cVar1 != '\0');
    uVar8 = ~uVar8;
    pcVar10 = pcVar11 + -uVar8;
    pcVar11 = local_464;
    for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar11 = pcVar11 + 4;
    }
    for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pcVar11 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar11 = pcVar11 + 1;
    }
    local_8 = local_464;
    StartSystemTy::AddToChat(this_01,(int)local_4a4);
    FUN_00715360(g_int_00811764,0,'\x1b',local_4a4,0x451,1,0xffffffff);
  }
LAB_005eab28:
  Library::DKW::TBL::FUN_006b6020((uint *)this_02->field_1A5B->field_0686,0,&DAT_008016a0);
  this_02->field_002D = 0x33;
  *(undefined4 *)&this_02->field_0x31 = this_02->field_1A5B->field_0686;
  FUN_006e6080(this_02,2,this_02->field_1A5B->field_054C,(undefined4 *)&this_02->field_0x1d);
cf_common_exit_005EAB6A:
  g_currentExceptionFrame = local_50.previous;
  iVar6 = MMObjTy::GetMessage((MMObjTy *)this_02,message);
  return iVar6;
}

