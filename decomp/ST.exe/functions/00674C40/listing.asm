FUN_00674c40:
00674C40  55                        PUSH EBP
00674C41  8B EC                     MOV EBP,ESP
00674C43  81 EC 04 03 00 00         SUB ESP,0x304
00674C49  A1 6C 19 81 00            MOV EAX,[0x0081196c]
00674C4E  85 C0                     TEST EAX,EAX
00674C50  74 62                     JZ 0x00674cb4
00674C52  A1 70 19 81 00            MOV EAX,[0x00811970]
00674C57  85 C0                     TEST EAX,EAX
00674C59  75 59                     JNZ 0x00674cb4
00674C5B  8D 85 00 FE FF FF         LEA EAX,[EBP + 0xfffffe00]
00674C61  6A 00                     PUSH 0x0
00674C63  8D 8D 00 FF FF FF         LEA ECX,[EBP + 0xffffff00]
00674C69  50                        PUSH EAX
00674C6A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00674C6D  8D 55 08                  LEA EDX,[EBP + 0x8]
00674C70  51                        PUSH ECX
00674C71  52                        PUSH EDX
00674C72  50                        PUSH EAX
00674C73  E8 B8 9A 0B 00            CALL 0x0072e730
00674C78  8D 8D 00 FE FF FF         LEA ECX,[EBP + 0xfffffe00]
00674C7E  68 48 2D 7D 00            PUSH 0x7d2d48
00674C83  8D 95 00 FF FF FF         LEA EDX,[EBP + 0xffffff00]
00674C89  51                        PUSH ECX
00674C8A  8D 45 08                  LEA EAX,[EBP + 0x8]
00674C8D  52                        PUSH EDX
00674C8E  8D 8D FC FC FF FF         LEA ECX,[EBP + 0xfffffcfc]
00674C94  50                        PUSH EAX
00674C95  51                        PUSH ECX
00674C96  E8 75 A4 0B 00            CALL 0x0072f110
00674C9B  8D 95 FC FC FF FF         LEA EDX,[EBP + 0xfffffcfc]
00674CA1  68 F0 8F 7C 00            PUSH 0x7c8ff0
00674CA6  52                        PUSH EDX
00674CA7  E8 C4 9D 0B 00            CALL 0x0072ea70
00674CAC  83 C4 30                  ADD ESP,0x30
00674CAF  A3 70 19 81 00            MOV [0x00811970],EAX
LAB_00674cb4:
00674CB4  8B E5                     MOV ESP,EBP
00674CB6  5D                        POP EBP
00674CB7  C3                        RET
