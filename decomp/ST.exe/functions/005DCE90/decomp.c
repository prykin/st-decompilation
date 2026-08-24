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
  StartSystemTy *this_00;
  int local_EAX_48;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  STMessage *pSVar7;
  uint *puVar8;
  dword *pdVar9;
  InternalExceptionFrame local_8c;
  dword local_48 [8];
  undefined4 local_28 [8];
  StartSystemTy *local_8;

  local_8c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_8c;
  local_8 = this;
  local_EAX_48 = Library::MSVCRT::__setjmp3(local_8c.jumpBuffer,0);
  this_00 = local_8;
  if (local_EAX_48 != 0) {
    g_currentExceptionFrame = local_8c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0x31a,0,local_EAX_48,
                               "%s","StartSystemTy::GetMessage");
    if (iVar4 == 0) {
      RaiseInternalException(local_EAX_48,0,"E:\\__titans\\Start\\startsys.cpp",0x31b);
      return 0xffff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  SVar1 = message->id;
  if (SVar1 < MESS_SHARED_6121) {
    if (SVar1 == MESS_SHARED_6120) {
      puVar8 = &local_8->field_0020;
      if (local_8->field_0020 != 0) {
        sub_006E56B0(local_8,local_8->field_0020);
      }
      /* ST_CALLSITE[005DD194]: CALL dword ptr [EDX + 0x8] */
      (*this_00->vtable->CreateObject)((SystemClassTy *)this_00,0x306,puVar8,nullptr,message,0);
    }
    else {
      if (SVar1 < (MESS_STARTSYSTEMTY_6104|MESS_ID_CREATE)) {
        if (SVar1 == MESS_SHARED_6105) {
          puVar8 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          /* ST_CALLSITE[005DD0EB]: CALL dword ptr [EDX + 0x8] */
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30a,puVar8,nullptr,message,0);
          goto switchD_005dd1c0_default;
        }
        if (MESS_STARTSYSTEMTY_6103 < SVar1) {
          if (SVar1 == MESS_STARTSYSTEMTY_6104) {
            puVar8 = &local_8->field_0020;
            if (local_8->field_0020 != 0) {
              sub_006E56B0(local_8,local_8->field_0020);
            }
            /* ST_CALLSITE[005DD0C2]: CALL dword ptr [EAX + 0x8] */
            (*this_00->vtable->CreateObject)
                      ((SystemClassTy *)this_00,0x302,puVar8,nullptr,message,0);
          }
          goto switchD_005dd1c0_default;
        }
        if (SVar1 == MESS_STARTSYSTEMTY_6103) {
          puVar8 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          /* ST_CALLSITE[005DD08E]: CALL dword ptr [EDX + 0x8] */
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x304,puVar8,nullptr,message,0);
          goto switchD_005dd1c0_default;
        }
        if (SVar1 == MESS_SHARED_0008) {
          DAT_00807654 = 0x21;
          DAT_0080879c = 0;
          if (g_cMf32_00806758 != nullptr) {
            cMf32::delete(g_cMf32_00806758);
          }
          g_cMf32_00806758 = nullptr;
          if (g_cursorClass_00802A30 != nullptr) {
            /* ST_CALLSITE[005DD048]: CALL 0x00401055; direct=00401055 CursorClassTy::sub_00544940 */
            CursorClassTy::sub_00544940(g_cursorClass_00802A30);
          }
          FUN_006bbb20(g_dDXContext_0080759C,1);
          FUN_006ba780(g_dDXContext_0080759C,1);
          goto switchD_005dd1c0_default;
        }
        if (SVar1 != MESS_STARTSYSTEMTY_6102) goto switchD_005dd1c0_default;
        puVar8 = &local_8->field_0020;
        if (local_8->field_0020 != 0) {
          sub_006E56B0(local_8,local_8->field_0020);
        }
        if ((DAT_0080fb72 != 0) || (DAT_00811768 == '\x02')) {
          puVar8 = local_28;
          memset(puVar8, 0, 0x20); /* compiler bulk-zero initialization */
          puVar8 = (undefined4 *)((byte *)puVar8 + 0x20);
          local_28[3] = 1;
          local_28[4] = 0x7102;
          AppClassTy::PostNextMessage((AppClassTy *)&DAT_00807620,local_28);
          goto switchD_005dd1c0_default;
        }
        if (DAT_00811768 != '\x01') {
          /* ST_CALLSITE[005DCFE1]: CALL dword ptr [EDX + 0x8] */
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x301,puVar8,nullptr,message->arg0,0);
          goto switchD_005dd1c0_default;
        }
        if (g_int_00811764 == nullptr) {
          DAT_00811768 = '\0';
          /* ST_CALLSITE[005DCFC7]: CALL dword ptr [EAX + 0x8] */
          (*this_00->vtable->CreateObject)((SystemClassTy *)this_00,0x301,puVar8,nullptr,0,0);
          goto switchD_005dd1c0_default;
        }
        if ((((byte *)g_int_00811764)[1] & 1) == 0) {
          DAT_0080877e = 0;
          (message->arg0).u32 = 0;
          /* ST_CALLSITE[005DCFA8]: CALL dword ptr [EDX + 0x8] */
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30d,puVar8,nullptr,message,0);
          goto switchD_005dd1c0_default;
        }
        DAT_0080877e = 1;
        (message->arg0).u32 = 4;
      }
      else {
        if (SVar1 == MESS_SHARED_6109) {
          puVar8 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          /* ST_CALLSITE[005DD16B]: CALL dword ptr [EAX + 0x8] */
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30d,puVar8,nullptr,message,0);
          goto switchD_005dd1c0_default;
        }
        if (SVar1 == MESS_SHARED_610A) {
          puVar8 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          /* ST_CALLSITE[005DD142]: CALL dword ptr [EDX + 0x8] */
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30e,puVar8,nullptr,message,0);
          goto switchD_005dd1c0_default;
        }
        if (SVar1 != MESS_SHARED_611F) goto switchD_005dd1c0_default;
        if (local_8->field_0020 != 0) {
          sub_006E56B0(local_8,local_8->field_0020);
        }
      }
      /* ST_CALLSITE[005DCF83]: CALL dword ptr [EAX + 0x8] */
      (*this_00->vtable->CreateObject)
                ((SystemClassTy *)this_00,0x305,&this_00->field_0020,nullptr,message,0);
    }
  }
  else {
    if (SVar1 < (MESS_SHARED_6334|MESS_ID_CREATE)) {
      if (SVar1 < MESS_SHARED_6332) {
        switch(SVar1) {
        case MESS_SHARED_6121:
          puVar8 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          /* ST_CALLSITE[005DD1E8]: CALL dword ptr [EAX + 0x8] */
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30b,puVar8,nullptr,message,0);
          break;
        case MESS_STAPPC_6122:
          puVar8 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          /* ST_CALLSITE[005DD211]: CALL dword ptr [EDX + 0x8] */
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x307,puVar8,nullptr,message,0);
          break;
        case MESS_STAPPC_6123:
          puVar8 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          /* ST_CALLSITE[005DD23A]: CALL dword ptr [EAX + 0x8] */
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x308,puVar8,nullptr,message,0);
          break;
        case MESS_STARTSYSTEMTY_6124:
          puVar8 = &local_8->field_0020;
          if (local_8->field_0020 != 0) {
            sub_006E56B0(local_8,local_8->field_0020);
          }
          /* ST_CALLSITE[005DD260]: CALL dword ptr [EDX + 0x8] */
          (*this_00->vtable->CreateObject)
                    ((SystemClassTy *)this_00,0x30c,puVar8,nullptr,message,0);
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
    iVar5 = local_8->field_0020;
    if (iVar5 != 0) {
      pSVar7 = message;
      pdVar9 = local_48;
      for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
        *pdVar9 = pSVar7->unknown_00;
        pSVar7 = (STMessage *)&pSVar7->unknown_04;
        pdVar9 = pdVar9 + 1;
      }
      local_48[3] = 2;
      local_48[2] = iVar5;
      /* ST_CALLSITE[005DD2B4]: CALL dword ptr [EAX + 0x18] */
      (*this_00->vtable->vfunc_18)((short)local_48);
    }
  }
switchD_005dd1c0_default:
  g_currentExceptionFrame = local_8c.previous;
  iVar3 = SystemClassTy::GetMessage((SystemClassTy *)this_00,message);
  return iVar3;
}

