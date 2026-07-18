FUN_004a87a0:
004A87A0  55                        PUSH EBP
004A87A1  8B EC                     MOV EBP,ESP
004A87A3  83 EC 08                  SUB ESP,0x8
004A87A6  53                        PUSH EBX
004A87A7  56                        PUSH ESI
004A87A8  57                        PUSH EDI
004A87A9  8B F9                     MOV EDI,ECX
004A87AB  33 DB                     XOR EBX,EBX
004A87AD  8B 47 29                  MOV EAX,dword ptr [EDI + 0x29]
004A87B0  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
004A87B3  85 F6                     TEST ESI,ESI
004A87B5  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
004A87B8  0F 86 8A 00 00 00         JBE 0x004a8848
004A87BE  33 D2                     XOR EDX,EDX
LAB_004a87c0:
004A87C0  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A87C3  51                        PUSH ECX
004A87C4  8B 4F 29                  MOV ECX,dword ptr [EDI + 0x29]
004A87C7  E8 A4 44 20 00            CALL 0x006acc70
004A87CC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A87CF  66 3D FF FF               CMP AX,0xffff
004A87D3  74 62                     JZ 0x004a8837
004A87D5  8A 57 24                  MOV DL,byte ptr [EDI + 0x24]
004A87D8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A87DE  6A 01                     PUSH 0x1
004A87E0  50                        PUSH EAX
004A87E1  52                        PUSH EDX
004A87E2  E8 D3 A0 F5 FF            CALL 0x004028ba
004A87E7  8B F0                     MOV ESI,EAX
004A87E9  85 F6                     TEST ESI,ESI
004A87EB  75 3D                     JNZ 0x004a882a
004A87ED  68 64 C5 7A 00            PUSH 0x7ac564
004A87F2  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A87F7  50                        PUSH EAX
004A87F8  50                        PUSH EAX
004A87F9  68 58 17 00 00            PUSH 0x1758
004A87FE  68 3C BE 7A 00            PUSH 0x7abe3c
004A8803  E8 C8 4C 20 00            CALL 0x006ad4d0
004A8808  83 C4 18                  ADD ESP,0x18
004A880B  85 C0                     TEST EAX,EAX
004A880D  74 01                     JZ 0x004a8810
004A880F  CC                        INT3
LAB_004a8810:
004A8810  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A8815  68 59 17 00 00            PUSH 0x1759
004A881A  68 3C BE 7A 00            PUSH 0x7abe3c
004A881F  50                        PUSH EAX
004A8820  68 04 00 FE AF            PUSH 0xaffe0004
004A8825  E8 16 D6 1F 00            CALL 0x006a5e40
LAB_004a882a:
004A882A  8B 86 EA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ea]
004A8830  85 C0                     TEST EAX,EAX
004A8832  74 20                     JZ 0x004a8854
004A8834  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_004a8837:
004A8837  43                        INC EBX
004A8838  8B D3                     MOV EDX,EBX
004A883A  81 E2 FF FF 00 00         AND EDX,0xffff
004A8840  3B D6                     CMP EDX,ESI
004A8842  0F 82 78 FF FF FF         JC 0x004a87c0
LAB_004a8848:
004A8848  5F                        POP EDI
004A8849  5E                        POP ESI
004A884A  B8 01 00 00 00            MOV EAX,0x1
004A884F  5B                        POP EBX
004A8850  8B E5                     MOV ESP,EBP
004A8852  5D                        POP EBP
004A8853  C3                        RET
LAB_004a8854:
004A8854  5F                        POP EDI
004A8855  5E                        POP ESI
004A8856  33 C0                     XOR EAX,EAX
004A8858  5B                        POP EBX
004A8859  8B E5                     MOV ESP,EBP
004A885B  5D                        POP EBP
004A885C  C3                        RET
