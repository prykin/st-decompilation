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
  DArrayTy *pDVar3;
  undefined4 uVar4;
  WaitTy *this_02;
  bool bVar6;
  DWORD DVar7;
  int local_EAX_52;
  int iVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar7;
  int iVar8;
  uint uVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  char local_4a4 [64];
  char local_464 [1044];
  InternalExceptionFrame local_50;
  WaitTy *local_c;
  char *local_8;

  local_c = this;
  DVar7 = STAppC::sub_006E51B0(this->field_0010);
  this->field_0061 = DVar7;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_EAX_52 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0);
  this_02 = local_c;
  if (local_EAX_52 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\wait_obj.cpp",0x3bb,0,local_EAX_52,
                               "%s","WaitTy::GetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(local_EAX_52,0,"E:\\__titans\\Start\\wait_obj.cpp",0x3bb);
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
          NoneWait(this_02);
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
                   (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_038D,
                   (int)message,0);
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
                 (RecoveredRecord_MMMObjTy_005B6560 *)&g_startSystem_0081176C->field_041E,
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
      thunk_FUN_005b66e0((MTaskTy *)this_02);
    }
    else if (SVar2 < MESS_SHARED_6940) {
      if (SVar2 == MESS_PRIVIDERTY_693F) {
        sub_005E9970(this_02);
      }
      else if (SVar2 == MESS_SETTMAPMTY_6340) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_02,
                   (RecoveredRecord_MMMObjTy_005B6560 *)
                   (this_02->array_00BC[0xc].field_01DB + 0x55c),(int)message,0);
      }
      else if (SVar2 == MESS_SHARED_6341) {
        MMMObjTy::PaintSlBut
                  ((MMMObjTy *)this_02,
                   (RecoveredRecord_MMMObjTy_005B6560 *)
                   (this_02->array_00BC[0xc].field_01DB + 0x5ed),(int)message,0);
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
      this_02->array_00BC[0xc].field_01E4 = 0;
    }
    else if (SVar2 == MESS_WAITTY_6943) {
      thunk_FUN_005b6350(this_02,0x6942,(message->arg0).u32,0);
      this_02->array_00BC[0xc].field_01E4 = 0;
      if (DAT_00811768 == '\x01') {
        DAT_00811768 = '\x02';
      }
    }
    else {
      if (SVar2 != MESS_WAITTY_694D) goto cf_common_exit_005EAB6A;
      thunk_FUN_005b6350(this_02,0x6105,1,0);
      this_02->array_00BC[0xc].field_01E4 = 0;
      if (DAT_00811768 == '\x01') {
        DAT_00811768 = '\x02';
      }
    }
    this_02->CloseButtons();
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    this_00 = *(MMsgTy **)(this_02->array_00BC[0xc].field_01DB + 0x2e6);
    if (this_00 != nullptr) {
      MMsgTy::HidePanel(this_00,1,0,1);
    }
    goto cf_common_exit_005EAB6A;
  }
  if (SVar2 != MESS_SHARED_C0A2) goto cf_common_exit_005EAB6A;
  iVar9 = thunk_FUN_005ddb40(this_02->array_00BC[0xc].field_01DB);
  if (iVar9 == 0) {
    if (DAT_008067a0 != '\0') {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      iVar9 = *(int *)(this_02->array_00BC[0xc].field_01DB + 0x686);
      if (*(int *)(iVar9 + 8) < 1) {
        pcVar12 = nullptr;
      }
      else {
        pcVar12 = (char *)**(undefined4 **)(iVar9 + 0x14);
      }
      bVar6 = thunk_FUN_005717e0(pcVar12);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var,bVar6) != 0) {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        iVar9 = *(int *)(this_02->array_00BC[0xc].field_01DB + 0x686);
        if (*(int *)(iVar9 + 8) < 1) {
          CFsgsConnection::SendChatMessage((CFsgsConnection *)&DAT_00802a90,nullptr);
        }
        else {
          CFsgsConnection::SendChatMessage
                    ((CFsgsConnection *)&DAT_00802a90,(char *)**(undefined4 **)(iVar9 + 0x14));
        }
        goto LAB_005eab28;
      }
    }
    pcVar12 = local_4a4;
    for (iVar9 = 0x114; iVar9 != 0; iVar9 = iVar9 + -1) {
      pcVar12[0] = '\0';
      pcVar12[1] = '\0';
      pcVar12[2] = '\0';
      pcVar12[3] = '\0';
      pcVar12 = pcVar12 + 4;
    }
    *pcVar12 = '\0';
    pcVar12 = &CHAR_00h_00807e1d;
    if (DAT_008067a0 == '\0') {
      pcVar12 = &CHAR_00h_00807ddd;
    }
    uVar10 = 0xffffffff;
    do {
      pcVar13 = pcVar12;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar13 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    this_01 = (StartSystemTy *)this_02->array_00BC[0xc].field_01DB;
    pcVar12 = pcVar13 + -uVar10;
    pcVar13 = local_4a4;
    memmove(pcVar13, pcVar12, uVar10); /* compiler REP MOVS byte copy */
    uVar11 = 0;
    pDVar3 = this_01->field_0686;
    if ((int)pDVar3->elementSize < 1) {
      pcVar12 = nullptr;
    }
    else {
      pcVar12 = *(char **)pDVar3->growCapacity;
    }
    uVar10 = 0xffffffff;
    do {
      pcVar13 = pcVar12;
      if (uVar10 == 0) break;
      uVar10 = uVar10 - 1;
      pcVar13 = pcVar12 + 1;
      cVar1 = *pcVar12;
      pcVar12 = pcVar13;
    } while (cVar1 != '\0');
    uVar10 = ~uVar10;
    pcVar12 = pcVar13 + -uVar10;
    pcVar13 = local_464;
    memmove(pcVar13, pcVar12, uVar10); /* compiler REP MOVS byte copy */
    local_8 = local_464;
    StartSystemTy::AddToChat(this_01,(int)local_4a4);
    FUN_00715360(g_int_00811764,0,'\x1b',local_4a4,0x451,1,0xffffffff);
  }
/* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
LAB_005eab28:
  Library::DKW::TBL::FUN_006b6020
            (*(DArrayTy **)(this_02->array_00BC[0xc].field_01DB + 0x686),0,&CHAR_00h_008016a0);
  iVar9 = this_02->array_00BC[0xc].field_01DB;
  this_02->field_002D = 0x33;
  uVar4 = *(undefined4 *)(iVar9 + 0x686);
  this_02->field_0031 = (short)uVar4;
  this_02->field_0033 = (short)((uint)uVar4 >> 0x10);
  FUN_006e6080(this_02,2,*(undefined4 *)(iVar9 + 0x54c),(undefined4 *)&this_02->field_0x1d);
cf_common_exit_005EAB6A:
  g_currentExceptionFrame = local_50.previous;
  iVar7 = MMObjTy::GetMessage((MMObjTy *)this_02,message);
  return iVar7;
}

