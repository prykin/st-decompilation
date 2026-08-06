#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::GetIP */

void __thiscall StartSystemTy::GetIP(StartSystemTy *this)

{
  StartSystemTy *pSVar2;
  int local_EAX_38;
  DArrayTy *pDVar3;
  int iVar3;
  int local_EAX_125;
  hostent *phVar4;
  _union_1226 *p_Var5;
  char *text;
  int iVar6;
  int iVar7;
  char local_3dc [512];
  WSADATA local_1dc;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  local_EAX_38 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (local_EAX_38 == 0) {
    if (local_8->field_0696 != nullptr) {
      FUN_006b5570(local_8->field_0696);
    }
    pDVar3 = Library::DKW::TBL::SArrayCreate(nullptr,10,10);
    pSVar2->field_0696 = pDVar3;
    iVar3 = WSAStartup(0x101,&local_1dc);
    if (iVar3 == 0) {
      local_EAX_125 = gethostname(local_3dc,0x200);
      if (local_EAX_125 != -1) {
        phVar4 = gethostbyname(local_3dc);
        if ((phVar4 != nullptr) &&
           (p_Var5 = (_union_1226 *)*phVar4->h_addr_list, p_Var5 != nullptr)) {
          iVar7 = 0;
          do {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            text = inet_ntoa((in_addr)p_Var5->S_un_b);
            Library::DKW::TBL::FUN_006b5aa0(pSVar2->field_0696,text);
            iVar7 = iVar7 + 4;
            p_Var5 = *(_union_1226 **)((int)phVar4->h_addr_list + iVar7);
          } while (p_Var5 != nullptr);
        }
      }
      WSACleanup();
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar6 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0xce,0,local_EAX_38,
                             "%s","StartSystemTy::GetIP");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(local_EAX_38,0,"E:\\__titans\\Start\\startsys.cpp",0xce);
  return;
}

