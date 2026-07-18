FUN_00674e10:
00674E10  55                        PUSH EBP
00674E11  8B EC                     MOV EBP,ESP
00674E13  81 EC 04 03 00 00         SUB ESP,0x304
00674E19  A1 74 19 81 00            MOV EAX,[0x00811974]
00674E1E  85 C0                     TEST EAX,EAX
00674E20  74 62                     JZ 0x00674e84
00674E22  A1 78 19 81 00            MOV EAX,[0x00811978]
00674E27  85 C0                     TEST EAX,EAX
00674E29  75 59                     JNZ 0x00674e84
00674E2B  8D 85 00 FE FF FF         LEA EAX,[EBP + 0xfffffe00]
00674E31  6A 00                     PUSH 0x0
00674E33  8D 8D 00 FF FF FF         LEA ECX,[EBP + 0xffffff00]
00674E39  50                        PUSH EAX
00674E3A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00674E3D  8D 55 08                  LEA EDX,[EBP + 0x8]
00674E40  51                        PUSH ECX
00674E41  52                        PUSH EDX
00674E42  50                        PUSH EAX
00674E43  E8 E8 98 0B 00            CALL 0x0072e730
00674E48  8D 8D 00 FE FF FF         LEA ECX,[EBP + 0xfffffe00]
00674E4E  68 50 2D 7D 00            PUSH 0x7d2d50
00674E53  8D 95 00 FF FF FF         LEA EDX,[EBP + 0xffffff00]
00674E59  51                        PUSH ECX
00674E5A  8D 45 08                  LEA EAX,[EBP + 0x8]
00674E5D  52                        PUSH EDX
00674E5E  8D 8D FC FC FF FF         LEA ECX,[EBP + 0xfffffcfc]
00674E64  50                        PUSH EAX
00674E65  51                        PUSH ECX
00674E66  E8 A5 A2 0B 00            CALL 0x0072f110
00674E6B  8D 95 FC FC FF FF         LEA EDX,[EBP + 0xfffffcfc]
00674E71  68 F0 8F 7C 00            PUSH 0x7c8ff0
00674E76  52                        PUSH EDX
00674E77  E8 F4 9B 0B 00            CALL 0x0072ea70
00674E7C  83 C4 30                  ADD ESP,0x30
00674E7F  A3 78 19 81 00            MOV [0x00811978],EAX
LAB_00674e84:
00674E84  8B E5                     MOV ESP,EBP
00674E86  5D                        POP EBP
00674E87  C3                        RET
