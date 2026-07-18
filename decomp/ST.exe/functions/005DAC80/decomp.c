
/* Recovered from embedded debug metadata:
   E:\__titans\Start\startsys.cpp
   StartSystemTy::GetIP */

void __thiscall StartSystemTy::GetIP(StartSystemTy *this)

{
  code *pcVar1;
  StartSystemTy *pSVar2;
  int iVar3;
  uint *puVar4;
  hostent *phVar5;
  _union_1226 *p_Var6;
  char *pcVar7;
  int iVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char local_3dc [512];
  WSADATA local_1dc;
  undefined4 local_4c;
  undefined4 local_48 [16];
  StartSystemTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    if (*(byte **)(local_8 + 0x696) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(local_8 + 0x696));
    }
    puVar4 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(pSVar2 + 0x696) = puVar4;
    iVar3 = WSAStartup(0x101,&local_1dc);
    if (iVar3 == 0) {
      iVar3 = gethostname(local_3dc,0x200);
      if (iVar3 != -1) {
        phVar5 = gethostbyname(local_3dc);
        if ((phVar5 != (hostent *)0x0) &&
           (p_Var6 = (_union_1226 *)*phVar5->h_addr_list, p_Var6 != (_union_1226 *)0x0)) {
          iVar3 = 0;
          do {
            pcVar7 = inet_ntoa((in_addr)p_Var6->S_un_b);
            FUN_006b5aa0(*(int *)(pSVar2 + 0x696),pcVar7);
            iVar3 = iVar3 + 4;
            p_Var6 = *(_union_1226 **)((int)phVar5->h_addr_list + iVar3);
          } while (p_Var6 != (_union_1226 *)0x0);
        }
      }
      WSACleanup();
    }
    DAT_00858df8 = (undefined4 *)local_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar8 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0xce,0,iVar3,&DAT_007a4ccc);
  if (iVar8 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar3,0,0x7cd718,0xce);
  return;
}

