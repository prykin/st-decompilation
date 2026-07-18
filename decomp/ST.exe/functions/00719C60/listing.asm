FUN_00719c60:
00719C60  55                        PUSH EBP
00719C61  8B EC                     MOV EBP,ESP
00719C63  56                        PUSH ESI
00719C64  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00719C67  8B 06                     MOV EAX,dword ptr [ESI]
00719C69  85 C0                     TEST EAX,EAX
00719C6B  74 1F                     JZ 0x00719c8c
00719C6D  8D 4D 08                  LEA ECX,[EBP + 0x8]
00719C70  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
00719C77  51                        PUSH ECX
00719C78  6A 02                     PUSH 0x2
00719C7A  68 04 08 00 00            PUSH 0x804
00719C7F  50                        PUSH EAX
00719C80  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
00719C86  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_00719c8c:
00719C8C  5E                        POP ESI
00719C8D  5D                        POP EBP
00719C8E  C3                        RET
