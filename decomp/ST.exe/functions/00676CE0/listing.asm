FUN_00676ce0:
00676CE0  55                        PUSH EBP
00676CE1  8B EC                     MOV EBP,ESP
00676CE3  53                        PUSH EBX
00676CE4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00676CE7  56                        PUSH ESI
00676CE8  57                        PUSH EDI
00676CE9  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00676CEC  83 F8 01                  CMP EAX,0x1
00676CEF  76 63                     JBE 0x00676d54
LAB_00676cf1:
00676CF1  8D 48 FF                  LEA ECX,[EAX + -0x1]
00676CF4  33 F6                     XOR ESI,ESI
00676CF6  85 C9                     TEST ECX,ECX
00676CF8  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00676CFB  7E 57                     JLE 0x00676d54
LAB_00676cfd:
00676CFD  3B F0                     CMP ESI,EAX
00676CFF  73 0D                     JNC 0x00676d0e
00676D01  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00676D04  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
00676D07  0F AF CE                  IMUL ECX,ESI
00676D0A  03 CA                     ADD ECX,EDX
00676D0C  EB 02                     JMP 0x00676d10
LAB_00676d0e:
00676D0E  33 C9                     XOR ECX,ECX
LAB_00676d10:
00676D10  8D 7E 01                  LEA EDI,[ESI + 0x1]
00676D13  3B F8                     CMP EDI,EAX
00676D15  73 0D                     JNC 0x00676d24
00676D17  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00676D1A  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
00676D1D  0F AF C7                  IMUL EAX,EDI
00676D20  03 C2                     ADD EAX,EDX
00676D22  EB 02                     JMP 0x00676d26
LAB_00676d24:
00676D24  33 C0                     XOR EAX,EAX
LAB_00676d26:
00676D26  51                        PUSH ECX
00676D27  50                        PUSH EAX
00676D28  FF 55 0C                  CALL dword ptr [EBP + 0xc]
00676D2B  83 C4 08                  ADD ESP,0x8
00676D2E  85 C0                     TEST EAX,EAX
00676D30  7D 0F                     JGE 0x00676d41
00676D32  57                        PUSH EDI
00676D33  56                        PUSH ESI
00676D34  53                        PUSH EBX
00676D35  E8 96 9F 03 00            CALL 0x006b0cd0
00676D3A  C7 45 08 01 00 00 00      MOV dword ptr [EBP + 0x8],0x1
LAB_00676d41:
00676D41  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00676D44  8B F7                     MOV ESI,EDI
00676D46  8D 50 FF                  LEA EDX,[EAX + -0x1]
00676D49  3B F2                     CMP ESI,EDX
00676D4B  7C B0                     JL 0x00676cfd
00676D4D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00676D50  85 C9                     TEST ECX,ECX
00676D52  75 9D                     JNZ 0x00676cf1
LAB_00676d54:
00676D54  5F                        POP EDI
00676D55  5E                        POP ESI
00676D56  5B                        POP EBX
00676D57  5D                        POP EBP
00676D58  C3                        RET
