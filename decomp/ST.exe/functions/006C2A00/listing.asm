FUN_006c2a00:
006C2A00  55                        PUSH EBP
006C2A01  8B EC                     MOV EBP,ESP
006C2A03  51                        PUSH ECX
006C2A04  56                        PUSH ESI
006C2A05  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C2A08  57                        PUSH EDI
006C2A09  33 FF                     XOR EDI,EDI
006C2A0B  57                        PUSH EDI
006C2A0C  68 80 00 00 00            PUSH 0x80
006C2A11  6A 03                     PUSH 0x3
006C2A13  57                        PUSH EDI
006C2A14  57                        PUSH EDI
006C2A15  68 00 00 00 80            PUSH 0x80000000
006C2A1A  50                        PUSH EAX
006C2A1B  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
006C2A21  8B F0                     MOV ESI,EAX
006C2A23  83 FE FF                  CMP ESI,-0x1
006C2A26  75 0A                     JNZ 0x006c2a32
006C2A28  5F                        POP EDI
006C2A29  33 C0                     XOR EAX,EAX
006C2A2B  5E                        POP ESI
006C2A2C  8B E5                     MOV ESP,EBP
006C2A2E  5D                        POP EBP
006C2A2F  C2 04 00                  RET 0x4
LAB_006c2a32:
006C2A32  8D 4D FC                  LEA ECX,[EBP + -0x4]
006C2A35  6A 00                     PUSH 0x0
006C2A37  51                        PUSH ECX
006C2A38  8D 55 08                  LEA EDX,[EBP + 0x8]
006C2A3B  6A 04                     PUSH 0x4
006C2A3D  52                        PUSH EDX
006C2A3E  56                        PUSH ESI
006C2A3F  FF 15 68 BC 85 00         CALL dword ptr [0x0085bc68]
006C2A45  85 C0                     TEST EAX,EAX
006C2A47  74 1D                     JZ 0x006c2a66
006C2A49  83 7D FC 04               CMP dword ptr [EBP + -0x4],0x4
006C2A4D  75 17                     JNZ 0x006c2a66
006C2A4F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C2A52  3C 42                     CMP AL,0x42
006C2A54  75 10                     JNZ 0x006c2a66
006C2A56  80 FC 49                  CMP AH,0x49
006C2A59  75 0B                     JNZ 0x006c2a66
006C2A5B  80 7D 0A 4B               CMP byte ptr [EBP + 0xa],0x4b
006C2A5F  75 05                     JNZ 0x006c2a66
006C2A61  BF 01 00 00 00            MOV EDI,0x1
LAB_006c2a66:
006C2A66  56                        PUSH ESI
006C2A67  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
006C2A6D  8B C7                     MOV EAX,EDI
006C2A6F  5F                        POP EDI
006C2A70  5E                        POP ESI
006C2A71  8B E5                     MOV ESP,EBP
006C2A73  5D                        POP EBP
006C2A74  C2 04 00                  RET 0x4
