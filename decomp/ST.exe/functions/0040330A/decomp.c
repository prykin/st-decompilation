
void thunk_FUN_005dac80(void)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  hostent *phVar4;
  _union_1226 *p_Var5;
  char *pcVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char acStack_3dc [512];
  WSADATA WStack_1dc;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  int iStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar2 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    if (*(byte **)(iStack_8 + 0x696) != (byte *)0x0) {
      FUN_006b5570(*(byte **)(iStack_8 + 0x696));
    }
    puVar3 = FUN_006b54f0((uint *)0x0,10,10);
    *(uint **)(iStack_8 + 0x696) = puVar3;
    iVar2 = WSAStartup(0x101,&WStack_1dc);
    if (iVar2 == 0) {
      iVar2 = gethostname(acStack_3dc,0x200);
      if (iVar2 != -1) {
        phVar4 = gethostbyname(acStack_3dc);
        if ((phVar4 != (hostent *)0x0) &&
           (p_Var5 = (_union_1226 *)*phVar4->h_addr_list, p_Var5 != (_union_1226 *)0x0)) {
          iVar2 = 0;
          do {
            pcVar6 = inet_ntoa((in_addr)p_Var5->S_un_b);
            FUN_006b5aa0(*(int *)(iStack_8 + 0x696),pcVar6);
            iVar2 = iVar2 + 4;
            p_Var5 = *(_union_1226 **)((int)phVar4->h_addr_list + iVar2);
          } while (p_Var5 != (_union_1226 *)0x0);
        }
      }
      WSACleanup();
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar7 = FUN_006ad4d0(s_E____titans_Start_startsys_cpp_007cd718,0xce,0,iVar2,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FUN_006a5e40(iVar2,0,0x7cd718,0xce);
  return;
}

