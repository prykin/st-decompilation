FUN_006b5f80:
006B5F80  55                        PUSH EBP
006B5F81  8B EC                     MOV EBP,ESP
006B5F83  56                        PUSH ESI
006B5F84  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B5F87  8B 06                     MOV EAX,dword ptr [ESI]
006B5F89  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006B5F90  74 0C                     JZ 0x006b5f9e
006B5F92  05 F0 04 00 00            ADD EAX,0x4f0
006B5F97  50                        PUSH EAX
006B5F98  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b5f9e:
006B5F9E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B5FA1  8B 8E 6C 01 00 00         MOV ECX,dword ptr [ESI + 0x16c]
006B5FA7  8B 96 70 01 00 00         MOV EDX,dword ptr [ESI + 0x170]
006B5FAD  03 C1                     ADD EAX,ECX
006B5FAF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B5FB2  C7 86 B4 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1b4],0x1
006B5FBC  03 CA                     ADD ECX,EDX
006B5FBE  8B 96 B8 01 00 00         MOV EDX,dword ptr [ESI + 0x1b8]
006B5FC4  85 D2                     TEST EDX,EDX
006B5FC6  75 31                     JNZ 0x006b5ff9
006B5FC8  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
006B5FCB  6A 01                     PUSH 0x1
006B5FCD  52                        PUSH EDX
006B5FCE  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
006B5FD1  52                        PUSH EDX
006B5FD2  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B5FD5  52                        PUSH EDX
006B5FD6  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B5FD9  52                        PUSH EDX
006B5FDA  51                        PUSH ECX
006B5FDB  50                        PUSH EAX
006B5FDC  8B 86 BC 01 00 00         MOV EAX,dword ptr [ESI + 0x1bc]
006B5FE2  6A 64                     PUSH 0x64
006B5FE4  50                        PUSH EAX
006B5FE5  E8 E6 BA 01 00            CALL 0x006d1ad0
006B5FEA  83 F8 FF                  CMP EAX,-0x1
006B5FED  75 0A                     JNZ 0x006b5ff9
006B5FEF  C7 86 B8 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x1b8],0x1
LAB_006b5ff9:
006B5FF9  8B 36                     MOV ESI,dword ptr [ESI]
006B5FFB  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B6002  74 0D                     JZ 0x006b6011
006B6004  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B600A  56                        PUSH ESI
006B600B  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b6011:
006B6011  5E                        POP ESI
006B6012  5D                        POP EBP
006B6013  C2 14 00                  RET 0x14
