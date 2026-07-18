FUN_00747f68:
00747F68  55                        PUSH EBP
00747F69  8B EC                     MOV EBP,ESP
00747F6B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00747F6E  56                        PUSH ESI
00747F6F  8B F1                     MOV ESI,ECX
00747F71  8D 55 08                  LEA EDX,[EBP + 0x8]
00747F74  8B 08                     MOV ECX,dword ptr [EAX]
00747F76  52                        PUSH EDX
00747F77  50                        PUSH EAX
00747F78  FF 51 24                  CALL dword ptr [ECX + 0x24]
00747F7B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00747F7E  3B 46 64                  CMP EAX,dword ptr [ESI + 0x64]
00747F81  75 07                     JNZ 0x00747f8a
00747F83  B8 08 02 04 80            MOV EAX,0x80040208
00747F88  EB 02                     JMP 0x00747f8c
LAB_00747f8a:
00747F8A  33 C0                     XOR EAX,EAX
LAB_00747f8c:
00747F8C  5E                        POP ESI
00747F8D  5D                        POP EBP
00747F8E  C2 04 00                  RET 0x4
