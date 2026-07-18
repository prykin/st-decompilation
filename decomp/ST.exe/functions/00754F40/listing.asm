FUN_00754f40:
00754F40  55                        PUSH EBP
00754F41  8B EC                     MOV EBP,ESP
00754F43  83 EC 20                  SUB ESP,0x20
00754F46  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00754F49  56                        PUSH ESI
00754F4A  6A 00                     PUSH 0x0
00754F4C  68 80 00 00 00            PUSH 0x80
00754F51  6A 03                     PUSH 0x3
00754F53  6A 00                     PUSH 0x0
00754F55  6A 00                     PUSH 0x0
00754F57  68 00 00 00 80            PUSH 0x80000000
00754F5C  50                        PUSH EAX
00754F5D  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
00754F63  8B F0                     MOV ESI,EAX
00754F65  83 FE FF                  CMP ESI,-0x1
00754F68  75 09                     JNZ 0x00754f73
00754F6A  33 C0                     XOR EAX,EAX
00754F6C  5E                        POP ESI
00754F6D  8B E5                     MOV ESP,EBP
00754F6F  5D                        POP EBP
00754F70  C2 04 00                  RET 0x4
LAB_00754f73:
00754F73  57                        PUSH EDI
00754F74  33 FF                     XOR EDI,EDI
00754F76  8D 4D 08                  LEA ECX,[EBP + 0x8]
00754F79  57                        PUSH EDI
00754F7A  51                        PUSH ECX
00754F7B  8D 55 E0                  LEA EDX,[EBP + -0x20]
00754F7E  6A 20                     PUSH 0x20
00754F80  52                        PUSH EDX
00754F81  56                        PUSH ESI
00754F82  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
00754F88  85 C0                     TEST EAX,EAX
00754F8A  74 2A                     JZ 0x00754fb6
00754F8C  83 7D 08 20               CMP dword ptr [EBP + 0x8],0x20
00754F90  75 24                     JNZ 0x00754fb6
00754F92  8D 4D E0                  LEA ECX,[EBP + -0x20]
00754F95  B8 38 2C 7F 00            MOV EAX,0x7f2c38
00754F9A  8B 11                     MOV EDX,dword ptr [ECX]
00754F9C  8B 08                     MOV ECX,dword ptr [EAX]
00754F9E  3B D1                     CMP EDX,ECX
00754FA0  75 14                     JNZ 0x00754fb6
00754FA2  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00754FA5  25 00 FF 00 00            AND EAX,0xff00
00754FAA  3D 00 01 00 00            CMP EAX,0x100
00754FAF  75 05                     JNZ 0x00754fb6
00754FB1  BF 01 00 00 00            MOV EDI,0x1
LAB_00754fb6:
00754FB6  56                        PUSH ESI
00754FB7  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
00754FBD  8B C7                     MOV EAX,EDI
00754FBF  5F                        POP EDI
00754FC0  5E                        POP ESI
00754FC1  8B E5                     MOV ESP,EBP
00754FC3  5D                        POP EBP
00754FC4  C2 04 00                  RET 0x4
