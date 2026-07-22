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
  DArrayTy *pDVar3;
  StartSystemTy *this_01;
  code *pcVar4;
  WaitTy *this_02;
  bool bVar5;
  DWORD DVar6;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar8;
  uint uVar9;
  uint uVar10;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int *unaff_EDI;
  char *pcVar11;
  char *pcVar12;
  char local_4a4 [64];
  char local_464 [1044];
  InternalExceptionFrame local_50;
  WaitTy *local_c;
  char *local_8;

  local_c = this;
  DVar6 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar6;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  iVar7 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_02 = local_c;
  if (iVar7 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x3bb,0,iVar7,"%s"
                               ,"WaitTy::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar7,0,"E:\\__titans\\Start\\wait_obj.cpp",0x3bb);
    return 0xffff;
  }
  thunk_FUN_005b6450(local_c,message);
  StartSystemTy::ChatMessage(g_startSystem_0081176C,message);
  SVar2 = message->id;
  if (SVar2 < (MESS_SHARED_6334|MESS_ID_CREATE)) {
    if (SVar2 == MESS_WAITTY_6335) {
      g_startSystem_0081176C->field_04CF =
           *(int *)((message->arg1).u32 + 4) + (uint)(message->arg0).words.high;
      if (g_startSystem_0081176C->field_04B3 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)g_startSystem_0081176C->field_04F7,g_startSystem_0081176C->field_04B3,
                   g_startSystem_0081176C->field_04B7,g_startSystem_0081176C->field_04CB,
                   g_startSystem_0081176C->field_04CF);
      }
    }
    else if (SVar2 < 0x610b) {
      if (SVar2 == MESS_SHARED_610A) {
        this_02->field_0045 = 0x200;
        this_02->field_0049 = 0;
        this_02->field_004D = message->id;
        this_02->field_0051 = 8;
        thunk_FUN_005b66e0((MTaskTy *)this_02);
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
        thunk_FUN_005b66e0((MTaskTy *)this_02);
      }
    }
    else if (SVar2 < MESS_SHARED_6334) {
      if (SVar2 == MESS_WAITTY_6333) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_02,
                   (AnonShape_005B6560_61F462DF *)&g_startSystem_0081176C->field_038D,(int)message,0
                  );
      }
      else if (SVar2 == MESS_SHARED_6121) {
        this_02->field_0045 = 0x200;
        this_02->field_0049 = 0;
        this_02->field_004D = message->id;
        this_02->field_0051 = message->arg0;
        this_02->field_0055 = message->arg1;
        thunk_FUN_005b66e0((MTaskTy *)this_02);
      }
      else if (SVar2 == MESS_SHARED_6332) {
        StartSystemTy::PaintBinDesc(g_startSystem_0081176C,(AnonShape_005DE050_5BD86458 *)message);
      }
    }
    else if (SVar2 == MESS_SHARED_6334) {
      MMMObjTy::PaintSlBut
                ((MMMObjTy *)this_02,
                 (AnonShape_005B6560_61F462DF *)&g_startSystem_0081176C->field_041E,(int)message,0);
    }
    goto cf_common_exit_005EAB6A;
  }
  if (SVar2 < MESS_WAITTY_6943) {
    if (SVar2 == MESS_CHOOSEMAPTY_6942) {
      this_02->field_0045 = 0x200;
      this_02->field_0049 = 0;
      this_02->field_004D = 0x6102;
      this_02->field_0051 = message->arg0;
      thunk_FUN_005b66e0((MTaskTy *)this_02);
    }
    else if (SVar2 < MESS_SHARED_6940) {
      if (SVar2 == MESS_PRIVIDERTY_693F) {
        sub_005E9970(this_02);
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
      sub_005E9A40(this_02);
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
  iVar7 = thunk_FUN_005ddb40((int)this_02->field_1A5B);
  if (iVar7 == 0) {
    if (DAT_008067a0 != '\0') {
      pDVar3 = this_02->field_1A5B->field_0686;
      if ((int)pDVar3->elementSize < 1) {
        pcVar11 = (char *)0x0;
      }
      else {
        pcVar11 = *(char **)pDVar3->growCapacity;
      }
      bVar5 = thunk_FUN_005717e0(pcVar11);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var,bVar5) != 0) {
        pDVar3 = this_02->field_1A5B->field_0686;
        if ((int)pDVar3->elementSize < 1) {
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,(char *)0x0);
        }
        else {
          CFsgsConnection::SendChatMessage
                    ((CFsgsConnection *)&DAT_00802a90,*(char **)pDVar3->growCapacity);
        }
        goto LAB_005eab28;
      }
    }
    pcVar11 = local_4a4;
    for (iVar7 = 0x114; iVar7 != 0; iVar7 = iVar7 + -1) {
      pcVar11[0] = '\0';
      pcVar11[1] = '\0';
      pcVar11[2] = '\0';
      pcVar11[3] = '\0';
      pcVar11 = pcVar11 + 4;
    }
    *pcVar11 = '\0';
    pcVar11 = &DAT_00807e1d;
    if (DAT_008067a0 == '\0') {
      pcVar11 = (char *)&DAT_00807ddd;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar12 = pcVar11;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    this_01 = this_02->field_1A5B;
    pcVar11 = pcVar12 + -uVar9;
    pcVar12 = local_4a4;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    pDVar3 = this_01->field_0686;
    if ((int)pDVar3->elementSize < 1) {
      pcVar11 = (char *)0x0;
    }
    else {
      pcVar11 = *(char **)pDVar3->growCapacity;
    }
    uVar9 = 0xffffffff;
    do {
      pcVar12 = pcVar11;
      if (uVar9 == 0) break;
      uVar9 = uVar9 - 1;
      pcVar12 = pcVar11 + 1;
      cVar1 = *pcVar11;
      pcVar11 = pcVar12;
    } while (cVar1 != '\0');
    uVar9 = ~uVar9;
    pcVar11 = pcVar12 + -uVar9;
    pcVar12 = local_464;
    for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *(undefined4 *)pcVar12 = *(undefined4 *)pcVar11;
      pcVar11 = pcVar11 + 4;
      pcVar12 = pcVar12 + 4;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *pcVar12 = *pcVar11;
      pcVar11 = pcVar11 + 1;
      pcVar12 = pcVar12 + 1;
    }
    local_8 = local_464;
    StartSystemTy::AddToChat(this_01,(int)local_4a4);
    FUN_00715360(g_int_00811764,0,'\x1b',local_4a4,0x451,1,0xffffffff);
  }
LAB_005eab28:
  Library::DKW::TBL::FUN_006b6020(&this_02->field_1A5B->field_0686->flags,0,&DAT_008016a0);
  this_02->field_002D = 0x33;
  *(DArrayTy **)&this_02->field_0x31 = this_02->field_1A5B->field_0686;
  FUN_006e6080(this_02,2,this_02->field_1A5B->field_054C,(undefined4 *)&this_02->field_0x1d);
cf_common_exit_005EAB6A:
  g_currentExceptionFrame = local_50.previous;
  iVar7 = MMObjTy::GetMessage((MMObjTy *)this_02,message);
  return iVar7;
}

