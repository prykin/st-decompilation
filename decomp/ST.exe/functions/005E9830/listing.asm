WaitTy::CloseButtons:
005E9830  55                        PUSH EBP
005E9831  8B EC                     MOV EBP,ESP
005E9833  83 EC 48                  SUB ESP,0x48
005E9836  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E983B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005E983E  56                        PUSH ESI
005E983F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005E9842  8D 4D B8                  LEA ECX,[EBP + -0x48]
005E9845  6A 00                     PUSH 0x0
005E9847  52                        PUSH EDX
005E9848  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005E984B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E9851  E8 9A 3F 14 00            CALL 0x0072d7f0
005E9856  8B F0                     MOV ESI,EAX
005E9858  83 C4 08                  ADD ESP,0x8
005E985B  85 F6                     TEST ESI,ESI
005E985D  75 7E                     JNZ 0x005e98dd
005E985F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005E9862  8B CE                     MOV ECX,ESI
005E9864  E8 F0 9B E1 FF            CALL 0x00403459
005E9869  8B 86 64 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a64]
005E986F  85 C0                     TEST EAX,EAX
005E9871  75 45                     JNZ 0x005e98b8
005E9873  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E9878  8B 88 FC 02 00 00         MOV ECX,dword ptr [EAX + 0x2fc]
005E987E  83 F9 FF                  CMP ECX,-0x1
005E9881  74 22                     JZ 0x005e98a5
005E9883  8B 90 18 03 00 00         MOV EDX,dword ptr [EAX + 0x318]
005E9889  52                        PUSH EDX
005E988A  8B 90 14 03 00 00         MOV EDX,dword ptr [EAX + 0x314]
005E9890  8B 80 40 03 00 00         MOV EAX,dword ptr [EAX + 0x340]
005E9896  52                        PUSH EDX
005E9897  6A FE                     PUSH -0x2
005E9899  51                        PUSH ECX
005E989A  50                        PUSH EAX
005E989B  E8 30 9C 0C 00            CALL 0x006b34d0
005E98A0  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e98a5:
005E98A5  8B 88 EC 02 00 00         MOV ECX,dword ptr [EAX + 0x2ec]
005E98AB  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E98B1  51                        PUSH ECX
005E98B2  52                        PUSH EDX
005E98B3  E8 38 A2 0C 00            CALL 0x006b3af0
LAB_005e98b8:
005E98B8  6A FF                     PUSH -0x1
005E98BA  6A 01                     PUSH 0x1
005E98BC  6A 0C                     PUSH 0xc
005E98BE  8B CE                     MOV ECX,ESI
005E98C0  C6 46 65 04               MOV byte ptr [ESI + 0x65],0x4
005E98C4  E8 28 B3 E1 FF            CALL 0x00404bf1
005E98C9  8B CE                     MOV ECX,ESI
005E98CB  E8 FE 7B E1 FF            CALL 0x004014ce
005E98D0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005E98D3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E98D8  5E                        POP ESI
005E98D9  8B E5                     MOV ESP,EBP
005E98DB  5D                        POP EBP
005E98DC  C3                        RET
LAB_005e98dd:
005E98DD  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005E98E0  68 08 DE 7C 00            PUSH 0x7cde08
005E98E5  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E98EA  56                        PUSH ESI
005E98EB  6A 00                     PUSH 0x0
005E98ED  68 B3 02 00 00            PUSH 0x2b3
005E98F2  68 5C DD 7C 00            PUSH 0x7cdd5c
005E98F7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E98FD  E8 CE 3B 0C 00            CALL 0x006ad4d0
005E9902  83 C4 18                  ADD ESP,0x18
005E9905  85 C0                     TEST EAX,EAX
005E9907  74 01                     JZ 0x005e990a
005E9909  CC                        INT3
LAB_005e990a:
005E990A  68 B3 02 00 00            PUSH 0x2b3
005E990F  68 5C DD 7C 00            PUSH 0x7cdd5c
005E9914  6A 00                     PUSH 0x0
005E9916  56                        PUSH ESI
005E9917  E8 24 C5 0B 00            CALL 0x006a5e40
005E991C  5E                        POP ESI
005E991D  8B E5                     MOV ESP,EBP
005E991F  5D                        POP EBP
005E9920  C3                        RET
