#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004046CE|005DCE90; family_names=StartSystemTy::GetMessage; ret4=2;
   direct_offsets={10:1,14:3,18:1,1c:0} */

int __thiscall StartSystemTy::GetMessage(StartSystemTy *this,STMessage *message)

{
  STMessageId SVar1;
  code *pcVar2;
  StartSystemTy *this_00;
  int iVar3;
  cMf32 *this_01;
  int iVar4;
  STMessage *pSVar5;
  undefined4 *puVar6;
  dword *pdVar7;
  InternalExceptionFrame local_8c;
  dword local_48 [8];
  undefined4 local_28 [8];
  StartSystemTy *local_8;

  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x31a,0,iVar3,"%s"
                               ,"StartSystemTy::GetMessage");
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\startsys.cpp",0x31b);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (SVar1 < MESS_SHARED_6121) {
    if (SVar1 == MESS_SHARED_6120) {
      puVar6 = &local_8->field_0020;
      if (local_8->field_0020 != 0) {
        sub_006E56B0(local_8,local_8->field_0020);
      }
      (*this_00->vtable->CreateObject)((SystemClassTy *)this_00,0x306,puVar6,(int *)0x0,message,0);
    }
    else {
      if (SVar1 < (MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE)) {
        if (SVar1 == MESS_SHARED_6105) {
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30a,puVar6,(int *)0x0,message,0);
          goto switchD_005dd1c0_default;
        }
        if (MESS_STARTSYSTEMTY_6103 < SVar1) {
          if (SVar1 == MESS_STARTSYSTEMTY_6104) {
            puVar6 = &local_8->field_0020;
            if (local_8->field_0020 != 0) {
              sub_006E56B0(local_8,local_8->field_0020);
            }
            (*this_00->vtable->CreateObject)
                      ((SystemClassTy *)this_00,0x302,puVar6,(int *)0x0,message,0);
          }
          goto switchD_005dd1c0_default;
        }
        if (SVar1 == MESS_STARTSYSTEMTY_6103) {
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x304,puVar6,(int *)0x0,message,0);
          goto switchD_005dd1c0_default;
        }
        if (SVar1 == MESS_SHARED_0008) {
          DAT_00807654 = 0x21;
          DAT_0080879c = 0;
          if (g_cMf32_00806758 != (cMf32 *)0x0) {
            cMf32::delete(this_01,g_cMf32_00806758);
          }
          g_cMf32_00806758 = (cMf32 *)0x0;
          if (g_cursorClass_00802A30 != (CursorClassTy *)0x0) {
            thunk_FUN_00544940((AnonShape_00544940_E504B2A8 *)g_cursorClass_00802A30);
          }
          FUN_006bbb20(DAT_0080759c,1);
          FUN_006ba780((int)DAT_0080759c,1);
          goto switchD_005dd1c0_default;
        }
        if (SVar1 != MESS_STARTSYSTEMTY_6102) goto switchD_005dd1c0_default;
        puVar6 = &local_8->field_0020;
        if (local_8->field_0020 != 0) {
          sub_006E56B0(local_8,local_8->field_0020);
        }
        if ((DAT_0080fb72 != 0) || (DAT_00811768 == '\x02')) {
          puVar6 = local_28;
          memset(puVar6, 0, 0x20); /* compiler bulk-zero initialization */
          puVar6 = (undefined4 *)((byte *)puVar6 + 0x20);
          local_28[3] = 1;
          local_28[4] = 0x7102;
          AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,local_28);
          goto switchD_005dd1c0_default;
        }
        if (DAT_00811768 != '\x01') {
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x301,puVar6,(int *)0x0,message->arg0,0);
          goto switchD_005dd1c0_default;
        }
        if (g_int_00811764 == (int *)0x0) {
          DAT_00811768 = '\0';
          (*this_00->vtable->CreateObject)((SystemClassTy *)this_00,0x301,puVar6,(int *)0x0,0,0);
          goto switchD_005dd1c0_default;
        }
        if ((*(byte *)(g_int_00811764 + 1) & 1) == 0) {
          DAT_0080877e = 0;
          (message->arg0).u32 = 0;
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30d,puVar6,(int *)0x0,message,0);
          goto switchD_005dd1c0_default;
        }
        DAT_0080877e = 1;
        (message->arg0).u32 = 4;
      }
      else {
        if (SVar1 == MESS_SHARED_6109) {
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30d,puVar6,(int *)0x0,message,0);
          goto switchD_005dd1c0_default;
        }
        if (SVar1 == MESS_SHARED_610A) {
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30e,puVar6,(int *)0x0,message,0);
          goto switchD_005dd1c0_default;
        }
        if (SVar1 != MESS_SHARED_611F) goto switchD_005dd1c0_default;
        if (local_8->field_0020 != 0) {
          sub_006E56B0(local_8,local_8->field_0020);
        }
      }
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,0x305,&this_00->field_0020,(int *)0x0,message,0);
    }
  }
  else {
    if (SVar1 < (MESS_SHARED_6334|MESS_ID_CREATE)) {
      if (SVar1 < MESS_SHARED_6332) {
        switch(SVar1) {
        case MESS_SHARED_6121:
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30b,puVar6,(int *)0x0,message,0);
          break;
        case MESS_STAPPC_6122:
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x307,puVar6,(int *)0x0,message,0);
          break;
        case MESS_STAPPC_6123:
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x308,puVar6,(int *)0x0,message,0);
          break;
        case MESS_STARTSYSTEMTY_6124:
          puVar6 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30c,puVar6,(int *)0x0,message,0);
        }
        goto switchD_005dd1c0_default;
      }
    }
    else if (SVar1 < MESS_FSGSTY_6941) {
      if ((SVar1 < MESS_PRIVIDERTY_693F) &&
         ((SVar1 < MESS_STARTSYSTEMTY_633F || (MESS_SHARED_6341 < SVar1))))
      goto switchD_005dd1c0_default;
    }
    else if ((SVar1 < MESS_BEHPANELTY_C0A0) || (MESS_SHARED_C0A2 < SVar1))
    goto switchD_005dd1c0_default;
    iVar3 = local_8->field_0020;
    if (iVar3 != 0) {
      pSVar5 = message;
      pdVar7 = local_48;
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pdVar7 = pSVar5->unknown_00;
        pSVar5 = (STMessage *)&pSVar5->unknown_04;
        pdVar7 = pdVar7 + 1;
      }
      local_48[3] = 2;
      local_48[2] = iVar3;
      (*this_00->vtable->vfunc_18)(local_48);
    }
  }
switchD_005dd1c0_default:
  g_currentExceptionFrame = local_8c.previous;
  iVar3 = SystemClassTy::GetMessage((SystemClassTy *)this_00,message);
  return iVar3;
}

