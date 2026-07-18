MTaskTy::PaintMTask:
005E09E0  55                        PUSH EBP
005E09E1  8B EC                     MOV EBP,ESP
005E09E3  83 EC 48                  SUB ESP,0x48
005E09E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E09EB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E09EE  56                        PUSH ESI
005E09EF  8D 55 BC                  LEA EDX,[EBP + -0x44]
005E09F2  8D 4D B8                  LEA ECX,[EBP + -0x48]
005E09F5  6A 00                     PUSH 0x0
005E09F7  52                        PUSH EDX
005E09F8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005E09FB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E0A01  E8 EA CD 14 00            CALL 0x0072d7f0
005E0A06  8B F0                     MOV ESI,EAX
005E0A08  83 C4 08                  ADD ESP,0x8
005E0A0B  85 F6                     TEST ESI,ESI
005E0A0D  75 3C                     JNZ 0x005e0a4b
005E0A0F  A1 34 67 80 00            MOV EAX,[0x00806734]
005E0A14  8B 0D 30 67 80 00         MOV ECX,dword ptr [0x00806730]
005E0A1A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E0A20  50                        PUSH EAX
005E0A21  51                        PUSH ECX
005E0A22  56                        PUSH ESI
005E0A23  56                        PUSH ESI
005E0A24  52                        PUSH EDX
005E0A25  E8 56 55 0D 00            CALL 0x006b5f80
005E0A2A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E0A2D  8B 48 5D                  MOV ECX,dword ptr [EAX + 0x5d]
005E0A30  51                        PUSH ECX
005E0A31  6A 01                     PUSH 0x1
005E0A33  56                        PUSH ESI
005E0A34  56                        PUSH ESI
005E0A35  E8 FE 2C E2 FF            CALL 0x00403738
005E0A3A  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005E0A3D  83 C4 10                  ADD ESP,0x10
005E0A40  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E0A46  5E                        POP ESI
005E0A47  8B E5                     MOV ESP,EBP
005E0A49  5D                        POP EBP
005E0A4A  C3                        RET
LAB_005e0a4b:
005E0A4B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005E0A4E  68 88 DA 7C 00            PUSH 0x7cda88
005E0A53  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E0A58  56                        PUSH ESI
005E0A59  6A 00                     PUSH 0x0
005E0A5B  68 36 01 00 00            PUSH 0x136
005E0A60  68 94 D9 7C 00            PUSH 0x7cd994
005E0A65  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E0A6A  E8 61 CA 0C 00            CALL 0x006ad4d0
005E0A6F  83 C4 18                  ADD ESP,0x18
005E0A72  85 C0                     TEST EAX,EAX
005E0A74  74 01                     JZ 0x005e0a77
005E0A76  CC                        INT3
LAB_005e0a77:
005E0A77  68 36 01 00 00            PUSH 0x136
005E0A7C  68 94 D9 7C 00            PUSH 0x7cd994
005E0A81  6A 00                     PUSH 0x0
005E0A83  56                        PUSH ESI
005E0A84  E8 B7 53 0C 00            CALL 0x006a5e40
005E0A89  5E                        POP ESI
005E0A8A  8B E5                     MOV ESP,EBP
005E0A8C  5D                        POP EBP
005E0A8D  C3                        RET
