FUN_00675d30:
00675D30  55                        PUSH EBP
00675D31  8B EC                     MOV EBP,ESP
00675D33  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00675D36  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00675D39  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00675D3C  2B D1                     SUB EDX,ECX
00675D3E  56                        PUSH ESI
00675D3F  57                        PUSH EDI
00675D40  66 89 10                  MOV word ptr [EAX],DX
00675D43  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00675D46  8D 78 02                  LEA EDI,[EAX + 0x2]
00675D49  2B D1                     SUB EDX,ECX
00675D4B  66 89 17                  MOV word ptr [EDI],DX
00675D4E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00675D51  2B D1                     SUB EDX,ECX
00675D53  66 85 D2                  TEST DX,DX
00675D56  66 89 50 04               MOV word ptr [EAX + 0x4],DX
00675D5A  7D 06                     JGE 0x00675d62
00675D5C  66 C7 40 04 00 00         MOV word ptr [EAX + 0x4],0x0
LAB_00675d62:
00675D62  8D 4C 09 01               LEA ECX,[ECX + ECX*0x1 + 0x1]
00675D66  8D 50 06                  LEA EDX,[EAX + 0x6]
00675D69  8D 70 08                  LEA ESI,[EAX + 0x8]
00675D6C  66 83 F9 05               CMP CX,0x5
00675D70  66 89 0A                  MOV word ptr [EDX],CX
00675D73  66 89 48 0A               MOV word ptr [EAX + 0xa],CX
00675D77  66 89 0E                  MOV word ptr [ESI],CX
00675D7A  7E 06                     JLE 0x00675d82
00675D7C  66 C7 40 0A 05 00         MOV word ptr [EAX + 0xa],0x5
LAB_00675d82:
00675D82  56                        PUSH ESI
00675D83  52                        PUSH EDX
00675D84  57                        PUSH EDI
00675D85  50                        PUSH EAX
00675D86  E8 7B BB D8 FF            CALL 0x00401906
00675D8B  83 C4 10                  ADD ESP,0x10
00675D8E  5F                        POP EDI
00675D8F  5E                        POP ESI
00675D90  5D                        POP EBP
00675D91  C3                        RET
