
void __cdecl FUN_006ad2a0(byte *param_1)

{
  char cVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char local_30c [447];
  char acStack_14d [65];
  char local_10c [4];
  char local_108 [4];
  char local_104 [4];
  char local_100 [252];
  
  DVar2 = GetModuleFileNameA((HMODULE)0x0,local_10c,0x104);
  if (DVar2 == 0) {
    local_10c[0] = s_Debug_Message_007ed7cc[0];
    local_10c[1] = s_Debug_Message_007ed7cc[1];
    local_10c[2] = s_Debug_Message_007ed7cc[2];
    local_10c[3] = s_Debug_Message_007ed7cc[3];
    local_108[0] = s_Debug_Message_007ed7cc[4];
    local_108[1] = s_Debug_Message_007ed7cc[5];
    local_108[2] = s_Debug_Message_007ed7cc[6];
    local_108[3] = s_Debug_Message_007ed7cc[7];
    local_104[0] = s_Debug_Message_007ed7cc[8];
    local_104[1] = s_Debug_Message_007ed7cc[9];
    local_104[2] = s_Debug_Message_007ed7cc[10];
    local_104[3] = s_Debug_Message_007ed7cc[0xb];
    local_100[0] = s_Debug_Message_007ed7cc[0xc];
    local_100[1] = s_Debug_Message_007ed7cc[0xd];
  }
  else {
    uVar4 = 0xffffffff;
    pcVar6 = local_10c;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    if (0x40 < (int)(~uVar4 - 1)) {
      Library::MSVCRT::_strncpy(acStack_14d + ~uVar4,&DAT_007c7274,3);
    }
  }
  local_30c[0] = '\0';
  if ((param_1 != (byte *)0x0) &&
     (iVar3 = Library::MSVCRT::FUN_007300e0(local_30c,0x200,param_1,(undefined4 *)&stack0x00000008),
     iVar3 < 0)) {
    uVar4 = 0xffffffff;
    pcVar6 = s_User_message_too_long_007ed7b4;
    do {
      pcVar8 = pcVar6;
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      pcVar8 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar8;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    iVar3 = -1;
    pcVar6 = local_30c;
    do {
      pcVar7 = pcVar6;
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      pcVar7 = pcVar6 + 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar7;
    } while (cVar1 != '\0');
    pcVar6 = pcVar8 + -uVar4;
    pcVar8 = pcVar7 + -1;
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      *pcVar8 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    }
  }
  FUN_006ad3a0(local_30c,local_10c,0x40);
  return;
}

