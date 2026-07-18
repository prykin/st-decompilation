CPanelTy::PlayBriefing:
004F9CD0  55                        PUSH EBP
004F9CD1  8B EC                     MOV EBP,ESP
004F9CD3  83 EC 48                  SUB ESP,0x48
004F9CD6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F9CDB  56                        PUSH ESI
004F9CDC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004F9CDF  57                        PUSH EDI
004F9CE0  8D 55 BC                  LEA EDX,[EBP + -0x44]
004F9CE3  8D 4D B8                  LEA ECX,[EBP + -0x48]
004F9CE6  6A 00                     PUSH 0x0
004F9CE8  52                        PUSH EDX
004F9CE9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004F9CEC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F9CF2  E8 F9 3A 23 00            CALL 0x0072d7f0
004F9CF7  8B F0                     MOV ESI,EAX
004F9CF9  83 C4 08                  ADD ESP,0x8
004F9CFC  85 F6                     TEST ESI,ESI
004F9CFE  0F 85 15 01 00 00         JNZ 0x004f9e19
004F9D04  A1 58 67 80 00            MOV EAX,[0x00806758]
004F9D09  85 C0                     TEST EAX,EAX
004F9D0B  0F 84 F7 00 00 00         JZ 0x004f9e08
004F9D11  56                        PUSH ESI
004F9D12  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004F9D15  56                        PUSH ESI
004F9D16  50                        PUSH EAX
004F9D17  E8 34 B3 21 00            CALL 0x00715050
004F9D1C  8B F8                     MOV EDI,EAX
004F9D1E  83 C4 0C                  ADD ESP,0xc
004F9D21  85 FF                     TEST EDI,EDI
004F9D23  0F 84 DF 00 00 00         JZ 0x004f9e08
004F9D29  6A 1F                     PUSH 0x1f
004F9D2B  56                        PUSH ESI
004F9D2C  68 D7 C4 80 00            PUSH 0x80c4d7
004F9D31  E8 0A 46 23 00            CALL 0x0072e340
004F9D36  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004F9D39  C6 05 F6 C4 80 00 00      MOV byte ptr [0x0080c4f6],0x0
004F9D40  83 C4 0C                  ADD ESP,0xc
004F9D43  8B 86 4B 02 00 00         MOV EAX,dword ptr [ESI + 0x24b]
004F9D49  85 C0                     TEST EAX,EAX
004F9D4B  74 06                     JZ 0x004f9d53
004F9D4D  50                        PUSH EAX
004F9D4E  E8 BD 43 1B 00            CALL 0x006ae110
LAB_004f9d53:
004F9D53  8B 86 53 02 00 00         MOV EAX,dword ptr [ESI + 0x253]
004F9D59  89 BE 4B 02 00 00         MOV dword ptr [ESI + 0x24b],EDI
004F9D5F  8D BE 5B 02 00 00         LEA EDI,[ESI + 0x25b]
004F9D65  89 86 57 02 00 00         MOV dword ptr [ESI + 0x257],EAX
004F9D6B  C7 86 4F 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x24f],0x0
004F9D75  83 3F 00                  CMP dword ptr [EDI],0x0
004F9D78  74 09                     JZ 0x004f9d83
004F9D7A  57                        PUSH EDI
004F9D7B  E8 80 18 21 00            CALL 0x0070b600
004F9D80  83 C4 04                  ADD ESP,0x4
LAB_004f9d83:
004F9D83  6A 01                     PUSH 0x1
004F9D85  6A 00                     PUSH 0x0
004F9D87  6A 06                     PUSH 0x6
004F9D89  6A 00                     PUSH 0x0
004F9D8B  6A 00                     PUSH 0x0
004F9D8D  6A 00                     PUSH 0x0
004F9D8F  E8 0E 99 F0 FF            CALL 0x004036a2
004F9D94  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F9D9A  83 C4 0C                  ADD ESP,0xc
004F9D9D  50                        PUSH EAX
004F9D9E  51                        PUSH ECX
004F9D9F  E8 8C 16 21 00            CALL 0x0070b430
004F9DA4  8B 96 B4 01 00 00         MOV EDX,dword ptr [ESI + 0x1b4]
004F9DAA  83 C4 14                  ADD ESP,0x14
004F9DAD  89 07                     MOV dword ptr [EDI],EAX
004F9DAF  C6 86 60 02 00 00 01      MOV byte ptr [ESI + 0x260],0x1
004F9DB6  6A 00                     PUSH 0x0
004F9DB8  6A 55                     PUSH 0x55
004F9DBA  68 26 02 00 00            PUSH 0x226
004F9DBF  6A 05                     PUSH 0x5
004F9DC1  6A 64                     PUSH 0x64
004F9DC3  6A 00                     PUSH 0x0
004F9DC5  52                        PUSH EDX
004F9DC6  C6 86 5F 02 00 00 00      MOV byte ptr [ESI + 0x25f],0x0
004F9DCD  E8 9E A3 1B 00            CALL 0x006b4170
004F9DD2  66 A1 F7 C4 80 00         MOV AX,[0x0080c4f7]
004F9DD8  B9 03 00 00 00            MOV ECX,0x3
004F9DDD  66 3B C1                  CMP AX,CX
004F9DE0  74 26                     JZ 0x004f9e08
004F9DE2  66 3D 01 00               CMP AX,0x1
004F9DE6  74 20                     JZ 0x004f9e08
004F9DE8  88 8E 60 02 00 00         MOV byte ptr [ESI + 0x260],CL
004F9DEE  66 89 0D F7 C4 80 00      MOV word ptr [0x0080c4f7],CX
004F9DF5  8B 86 7C 01 00 00         MOV EAX,dword ptr [ESI + 0x17c]
004F9DFB  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
004F9E01  50                        PUSH EAX
004F9E02  51                        PUSH ECX
004F9E03  E8 28 96 1B 00            CALL 0x006b3430
LAB_004f9e08:
004F9E08  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F9E0B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F9E11  5F                        POP EDI
004F9E12  5E                        POP ESI
004F9E13  8B E5                     MOV ESP,EBP
004F9E15  5D                        POP EBP
004F9E16  C2 04 00                  RET 0x4
LAB_004f9e19:
004F9E19  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004F9E1C  68 68 22 7C 00            PUSH 0x7c2268
004F9E21  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F9E26  56                        PUSH ESI
004F9E27  6A 00                     PUSH 0x0
004F9E29  68 C8 03 00 00            PUSH 0x3c8
004F9E2E  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F9E33  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F9E38  E8 93 36 1B 00            CALL 0x006ad4d0
004F9E3D  83 C4 18                  ADD ESP,0x18
004F9E40  85 C0                     TEST EAX,EAX
004F9E42  74 01                     JZ 0x004f9e45
004F9E44  CC                        INT3
LAB_004f9e45:
004F9E45  68 C8 03 00 00            PUSH 0x3c8
004F9E4A  68 D8 1B 7C 00            PUSH 0x7c1bd8
004F9E4F  6A 00                     PUSH 0x0
004F9E51  56                        PUSH ESI
004F9E52  E8 E9 BF 1A 00            CALL 0x006a5e40
004F9E57  5F                        POP EDI
004F9E58  5E                        POP ESI
004F9E59  8B E5                     MOV ESP,EBP
004F9E5B  5D                        POP EBP
004F9E5C  C2 04 00                  RET 0x4
