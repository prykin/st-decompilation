FUN_00554a50:
00554A50  A1 34 67 80 00            MOV EAX,[0x00806734]
00554A55  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00554A5B  56                        PUSH ESI
00554A5C  8B F1                     MOV ESI,ECX
00554A5E  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
00554A64  50                        PUSH EAX
00554A65  51                        PUSH ECX
00554A66  6A 00                     PUSH 0x0
00554A68  6A 00                     PUSH 0x0
00554A6A  52                        PUSH EDX
00554A6B  E8 10 15 16 00            CALL 0x006b5f80
00554A70  8B 06                     MOV EAX,dword ptr [ESI]
00554A72  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00554A78  6A 00                     PUSH 0x0
00554A7A  50                        PUSH EAX
00554A7B  6A 00                     PUSH 0x0
00554A7D  6A 00                     PUSH 0x0
00554A7F  51                        PUSH ECX
00554A80  E8 BB FB 15 00            CALL 0x006b4640
00554A85  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00554A88  A1 9C 75 80 00            MOV EAX,[0x0080759c]
00554A8D  6A 00                     PUSH 0x0
00554A8F  6A 00                     PUSH 0x0
00554A91  52                        PUSH EDX
00554A92  6A 00                     PUSH 0x0
00554A94  6A 00                     PUSH 0x0
00554A96  50                        PUSH EAX
00554A97  E8 04 FE 15 00            CALL 0x006b48a0
00554A9C  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
00554AA2  6A 00                     PUSH 0x0
00554AA4  6A 00                     PUSH 0x0
00554AA6  51                        PUSH ECX
00554AA7  E8 C4 68 16 00            CALL 0x006bb370
00554AAC  5E                        POP ESI
00554AAD  C3                        RET
