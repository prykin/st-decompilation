#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::GetIP */

void __thiscall StartSystemTy::GetIP(StartSystemTy *this)

{
  code *pcVar1;
  StartSystemTy *pSVar2;
  int iVar3;
  DArrayTy *pDVar4;
  hostent *phVar5;
  _union_1226 *p_Var6;
  char *text;
  int iVar7;
  char local_3dc [512];
  WSADATA local_1dc;
  InternalExceptionFrame local_4c;
  StartSystemTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    if ((AnonShape_006B5570_4D68B99C *)local_8->field_0696 != (AnonShape_006B5570_4D68B99C *)0x0) {
      FUN_006b5570((AnonShape_006B5570_4D68B99C *)local_8->field_0696);
    }
    pDVar4 = Library::DKW::TBL::SArrayCreate((DArrayTy *)0x0,10,10);
    pSVar2->field_0696 = &pDVar4->flags;
    iVar3 = WSAStartup(0x101,&local_1dc);
    if (iVar3 == 0) {
      iVar3 = gethostname(local_3dc,0x200);
      if (iVar3 != -1) {
        phVar5 = gethostbyname(local_3dc);
        if ((phVar5 != (hostent *)0x0) &&
           (p_Var6 = (_union_1226 *)*phVar5->h_addr_list, p_Var6 != (_union_1226 *)0x0)) {
          iVar3 = 0;
          do {
            /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
            text = inet_ntoa((in_addr)p_Var6->S_un_b);
            Library::DKW::TBL::FUN_006b5aa0(pSVar2->field_0696,text);
            iVar3 = iVar3 + 4;
            p_Var6 = *(_union_1226 **)((int)phVar5->h_addr_list + iVar3);
          } while (p_Var6 != (_union_1226 *)0x0);
        }
      }
      WSACleanup();
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar7 = ReportDebugMessage("E:\\__titans\\Start\\startsys.cpp",0xce,0,iVar3,"%s",
                             "StartSystemTy::GetIP");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\startsys.cpp",0xce);
  return;
}

