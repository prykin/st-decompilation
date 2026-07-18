FUN_00714ce0:
00714CE0  55                        PUSH EBP
00714CE1  8B EC                     MOV EBP,ESP
00714CE3  83 EC 48                  SUB ESP,0x48
00714CE6  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00714CE9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00714CEC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00714CEF  53                        PUSH EBX
00714CF0  56                        PUSH ESI
00714CF1  3B C1                     CMP EAX,ECX
00714CF3  57                        PUSH EDI
00714CF4  7C 0B                     JL 0x00714d01
00714CF6  33 C0                     XOR EAX,EAX
00714CF8  5F                        POP EDI
00714CF9  5E                        POP ESI
00714CFA  5B                        POP EBX
00714CFB  8B E5                     MOV ESP,EBP
00714CFD  5D                        POP EBP
00714CFE  C2 04 00                  RET 0x4
LAB_00714d01:
00714D01  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00714D07  8D 45 BC                  LEA EAX,[EBP + -0x44]
00714D0A  8D 55 B8                  LEA EDX,[EBP + -0x48]
00714D0D  6A 00                     PUSH 0x0
00714D0F  50                        PUSH EAX
00714D10  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00714D13  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00714D19  E8 D2 8A 01 00            CALL 0x0072d7f0
00714D1E  83 C4 08                  ADD ESP,0x8
00714D21  85 C0                     TEST EAX,EAX
00714D23  75 53                     JNZ 0x00714d78
00714D25  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00714D28  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00714D2B  56                        PUSH ESI
00714D2C  8B 07                     MOV EAX,dword ptr [EDI]
00714D2E  85 C0                     TEST EAX,EAX
00714D30  74 26                     JZ 0x00714d58
00714D32  50                        PUSH EAX
00714D33  E8 18 82 F9 FF            CALL 0x006acf50
00714D38  8B 7F 04                  MOV EDI,dword ptr [EDI + 0x4]
00714D3B  8B CE                     MOV ECX,ESI
00714D3D  2B CF                     SUB ECX,EDI
00714D3F  8B D0                     MOV EDX,EAX
00714D41  8B D9                     MOV EBX,ECX
00714D43  33 C0                     XOR EAX,EAX
00714D45  03 FA                     ADD EDI,EDX
00714D47  C1 E9 02                  SHR ECX,0x2
00714D4A  F3 AB                     STOSD.REP ES:EDI
00714D4C  8B CB                     MOV ECX,EBX
00714D4E  83 E1 03                  AND ECX,0x3
00714D51  F3 AA                     STOSB.REP ES:EDI
00714D53  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00714D56  EB 07                     JMP 0x00714d5f
LAB_00714d58:
00714D58  E8 B3 5E F9 FF            CALL 0x006aac10
00714D5D  8B D0                     MOV EDX,EAX
LAB_00714d5f:
00714D5F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00714D62  33 C0                     XOR EAX,EAX
00714D64  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00714D6A  89 17                     MOV dword ptr [EDI],EDX
00714D6C  89 77 04                  MOV dword ptr [EDI + 0x4],ESI
00714D6F  5F                        POP EDI
00714D70  5E                        POP ESI
00714D71  5B                        POP EBX
00714D72  8B E5                     MOV ESP,EBP
00714D74  5D                        POP EBP
00714D75  C2 04 00                  RET 0x4
LAB_00714d78:
00714D78  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00714D7B  85 C0                     TEST EAX,EAX
00714D7D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00714D83  7C 03                     JL 0x00714d88
00714D85  83 C8 FF                  OR EAX,0xffffffff
LAB_00714d88:
00714D88  5F                        POP EDI
00714D89  5E                        POP ESI
00714D8A  5B                        POP EBX
00714D8B  8B E5                     MOV ESP,EBP
00714D8D  5D                        POP EBP
00714D8E  C2 04 00                  RET 0x4
