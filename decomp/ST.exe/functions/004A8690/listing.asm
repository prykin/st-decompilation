FUN_004a8690:
004A8690  55                        PUSH EBP
004A8691  8B EC                     MOV EBP,ESP
004A8693  83 EC 08                  SUB ESP,0x8
004A8696  53                        PUSH EBX
004A8697  57                        PUSH EDI
004A8698  8B F9                     MOV EDI,ECX
004A869A  33 DB                     XOR EBX,EBX
004A869C  8B 47 29                  MOV EAX,dword ptr [EDI + 0x29]
004A869F  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
004A86A2  85 C0                     TEST EAX,EAX
004A86A4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004A86A7  0F 86 A5 00 00 00         JBE 0x004a8752
004A86AD  56                        PUSH ESI
004A86AE  33 D2                     XOR EDX,EDX
LAB_004a86b0:
004A86B0  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A86B3  51                        PUSH ECX
004A86B4  8B 4F 29                  MOV ECX,dword ptr [EDI + 0x29]
004A86B7  E8 B4 45 20 00            CALL 0x006acc70
004A86BC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A86BF  66 3D FF FF               CMP AX,0xffff
004A86C3  74 78                     JZ 0x004a873d
004A86C5  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
004A86C8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A86CE  6A 01                     PUSH 0x1
004A86D0  50                        PUSH EAX
004A86D1  52                        PUSH EDX
004A86D2  E8 E3 A1 F5 FF            CALL 0x004028ba
004A86D7  8B F0                     MOV ESI,EAX
004A86D9  85 F6                     TEST ESI,ESI
004A86DB  75 3D                     JNZ 0x004a871a
004A86DD  68 40 C5 7A 00            PUSH 0x7ac540
004A86E2  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A86E7  50                        PUSH EAX
004A86E8  50                        PUSH EAX
004A86E9  68 42 17 00 00            PUSH 0x1742
004A86EE  68 3C BE 7A 00            PUSH 0x7abe3c
004A86F3  E8 D8 4D 20 00            CALL 0x006ad4d0
004A86F8  83 C4 18                  ADD ESP,0x18
004A86FB  85 C0                     TEST EAX,EAX
004A86FD  74 01                     JZ 0x004a8700
004A86FF  CC                        INT3
LAB_004a8700:
004A8700  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A8705  68 43 17 00 00            PUSH 0x1743
004A870A  68 3C BE 7A 00            PUSH 0x7abe3c
004A870F  50                        PUSH EAX
004A8710  68 04 00 FE AF            PUSH 0xaffe0004
004A8715  E8 26 D7 1F 00            CALL 0x006a5e40
LAB_004a871a:
004A871A  8B 16                     MOV EDX,dword ptr [ESI]
004A871C  8B CE                     MOV ECX,ESI
004A871E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A8721  83 F8 16                  CMP EAX,0x16
004A8724  74 0C                     JZ 0x004a8732
004A8726  8B 06                     MOV EAX,dword ptr [ESI]
004A8728  8B CE                     MOV ECX,ESI
004A872A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A872D  83 F8 25                  CMP EAX,0x25
004A8730  75 0B                     JNZ 0x004a873d
LAB_004a8732:
004A8732  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004A8735  51                        PUSH ECX
004A8736  8B CE                     MOV ECX,ESI
004A8738  E8 B7 8A F5 FF            CALL 0x004011f4
LAB_004a873d:
004A873D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A8740  43                        INC EBX
004A8741  8B D3                     MOV EDX,EBX
004A8743  81 E2 FF FF 00 00         AND EDX,0xffff
004A8749  3B D0                     CMP EDX,EAX
004A874B  0F 82 5F FF FF FF         JC 0x004a86b0
004A8751  5E                        POP ESI
LAB_004a8752:
004A8752  5F                        POP EDI
004A8753  5B                        POP EBX
004A8754  8B E5                     MOV ESP,EBP
004A8756  5D                        POP EBP
004A8757  C2 04 00                  RET 0x4
