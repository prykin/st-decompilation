FUN_0062f940:
0062F940  55                        PUSH EBP
0062F941  8B EC                     MOV EBP,ESP
0062F943  83 EC 0C                  SUB ESP,0xc
0062F946  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062F949  53                        PUSH EBX
0062F94A  56                        PUSH ESI
0062F94B  57                        PUSH EDI
0062F94C  33 FF                     XOR EDI,EDI
0062F94E  8B F1                     MOV ESI,ECX
0062F950  6A 3D                     PUSH 0x3d
0062F952  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0062F955  89 38                     MOV dword ptr [EAX],EDI
0062F957  C7 45 F8 3D 00 00 00      MOV dword ptr [EBP + -0x8],0x3d
0062F95E  E8 0D B3 07 00            CALL 0x006aac70
0062F963  3B C7                     CMP EAX,EDI
0062F965  0F 84 C9 00 00 00         JZ 0x0062fa34
0062F96B  C7 00 BE 00 00 00         MOV dword ptr [EAX],0xbe
0062F971  C7 40 04 FF 00 00 00      MOV dword ptr [EAX + 0x4],0xff
0062F978  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
0062F97B  C7 40 0C 02 00 00 00      MOV dword ptr [EAX + 0xc],0x2
0062F982  8B 8E D5 01 00 00         MOV ECX,dword ptr [ESI + 0x1d5]
0062F988  BF 05 00 00 00            MOV EDI,0x5
0062F98D  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
0062F990  8B 96 D9 01 00 00         MOV EDX,dword ptr [ESI + 0x1d9]
0062F996  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
0062F999  8B 8E DD 01 00 00         MOV ECX,dword ptr [ESI + 0x1dd]
0062F99F  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
0062F9A2  8B 96 E1 01 00 00         MOV EDX,dword ptr [ESI + 0x1e1]
0062F9A8  8D 8E E5 01 00 00         LEA ECX,[ESI + 0x1e5]
0062F9AE  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
0062F9B1  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0062F9B4  8D 50 24                  LEA EDX,[EAX + 0x24]
LAB_0062f9b7:
0062F9B7  8B 19                     MOV EBX,dword ptr [ECX]
0062F9B9  89 1A                     MOV dword ptr [EDX],EBX
0062F9BB  8B 19                     MOV EBX,dword ptr [ECX]
0062F9BD  85 DB                     TEST EBX,EBX
0062F9BF  74 03                     JZ 0x0062f9c4
0062F9C1  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_0062f9c4:
0062F9C4  83 C2 04                  ADD EDX,0x4
0062F9C7  83 C1 04                  ADD ECX,0x4
0062F9CA  4F                        DEC EDI
0062F9CB  75 EA                     JNZ 0x0062f9b7
0062F9CD  8A 8E F9 01 00 00         MOV CL,byte ptr [ESI + 0x1f9]
0062F9D3  88 48 38                  MOV byte ptr [EAX + 0x38],CL
0062F9D6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062F9D9  8B 96 FA 01 00 00         MOV EDX,dword ptr [ESI + 0x1fa]
0062F9DF  85 C9                     TEST ECX,ECX
0062F9E1  89 50 39                  MOV dword ptr [EAX + 0x39],EDX
0062F9E4  74 46                     JZ 0x0062fa2c
0062F9E6  8B D1                     MOV EDX,ECX
0062F9E8  C1 E2 05                  SHL EDX,0x5
0062F9EB  2B D1                     SUB EDX,ECX
0062F9ED  8D 4C 12 3D               LEA ECX,[EDX + EDX*0x1 + 0x3d]
0062F9F1  51                        PUSH ECX
0062F9F2  50                        PUSH EAX
0062F9F3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062F9F6  E8 55 D5 07 00            CALL 0x006acf50
0062F9FB  85 C0                     TEST EAX,EAX
0062F9FD  74 35                     JZ 0x0062fa34
0062F9FF  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0062FA02  8D 50 3D                  LEA EDX,[EAX + 0x3d]
0062FA05  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
LAB_0062fa0c:
0062FA0C  8B 33                     MOV ESI,dword ptr [EBX]
0062FA0E  85 F6                     TEST ESI,ESI
0062FA10  74 0E                     JZ 0x0062fa20
0062FA12  B9 0F 00 00 00            MOV ECX,0xf
0062FA17  8B FA                     MOV EDI,EDX
0062FA19  F3 A5                     MOVSD.REP ES:EDI,ESI
0062FA1B  66 A5                     MOVSW ES:EDI,ESI
0062FA1D  83 C2 3E                  ADD EDX,0x3e
LAB_0062fa20:
0062FA20  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0062FA23  83 C3 04                  ADD EBX,0x4
0062FA26  49                        DEC ECX
0062FA27  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0062FA2A  75 E0                     JNZ 0x0062fa0c
LAB_0062fa2c:
0062FA2C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0062FA2F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0062FA32  89 11                     MOV dword ptr [ECX],EDX
LAB_0062fa34:
0062FA34  5F                        POP EDI
0062FA35  5E                        POP ESI
0062FA36  5B                        POP EBX
0062FA37  8B E5                     MOV ESP,EBP
0062FA39  5D                        POP EBP
0062FA3A  C2 04 00                  RET 0x4
