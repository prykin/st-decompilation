FUN_0067ef60:
0067EF60  55                        PUSH EBP
0067EF61  8B EC                     MOV EBP,ESP
0067EF63  83 EC 44                  SUB ESP,0x44
0067EF66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067EF6B  56                        PUSH ESI
0067EF6C  57                        PUSH EDI
0067EF6D  8D 55 C0                  LEA EDX,[EBP + -0x40]
0067EF70  8D 4D BC                  LEA ECX,[EBP + -0x44]
0067EF73  6A 00                     PUSH 0x0
0067EF75  52                        PUSH EDX
0067EF76  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0067EF79  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067EF7F  E8 6C E8 0A 00            CALL 0x0072d7f0
0067EF84  83 C4 08                  ADD ESP,0x8
0067EF87  85 C0                     TEST EAX,EAX
0067EF89  75 5F                     JNZ 0x0067efea
0067EF8B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0067EF8E  56                        PUSH ESI
0067EF8F  E8 A2 4E D8 FF            CALL 0x00403e36
0067EF94  8B F8                     MOV EDI,EAX
0067EF96  56                        PUSH ESI
0067EF97  85 FF                     TEST EDI,EDI
0067EF99  75 2B                     JNZ 0x0067efc6
0067EF9B  A1 1C 8A 84 00            MOV EAX,[0x00848a1c]
0067EFA0  50                        PUSH EAX
0067EFA1  E8 FA 6A 03 00            CALL 0x006b5aa0
0067EFA6  8B 0D 18 8A 84 00         MOV ECX,dword ptr [0x00848a18]
0067EFAC  68 A0 16 80 00            PUSH 0x8016a0
0067EFB1  51                        PUSH ECX
0067EFB2  E8 E9 6A 03 00            CALL 0x006b5aa0
0067EFB7  8B F0                     MOV ESI,EAX
0067EFB9  56                        PUSH ESI
0067EFBA  E8 7B 45 D8 FF            CALL 0x0040353a
0067EFBF  83 C4 04                  ADD ESP,0x4
0067EFC2  8B F8                     MOV EDI,EAX
0067EFC4  EB 0A                     JMP 0x0067efd0
LAB_0067efc6:
0067EFC6  E8 ED 6C D8 FF            CALL 0x00405cb8
0067EFCB  83 C4 04                  ADD ESP,0x4
0067EFCE  8B F0                     MOV ESI,EAX
LAB_0067efd0:
0067EFD0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067EFD3  85 C0                     TEST EAX,EAX
0067EFD5  74 02                     JZ 0x0067efd9
0067EFD7  89 30                     MOV dword ptr [EAX],ESI
LAB_0067efd9:
0067EFD9  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
0067EFDC  8B C7                     MOV EAX,EDI
0067EFDE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067EFE4  5F                        POP EDI
0067EFE5  5E                        POP ESI
0067EFE6  8B E5                     MOV ESP,EBP
0067EFE8  5D                        POP EBP
0067EFE9  C3                        RET
LAB_0067efea:
0067EFEA  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0067EFED  5F                        POP EDI
0067EFEE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067EFF3  33 C0                     XOR EAX,EAX
0067EFF5  5E                        POP ESI
0067EFF6  8B E5                     MOV ESP,EBP
0067EFF8  5D                        POP EBP
0067EFF9  C3                        RET
