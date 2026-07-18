FUN_0055c590:
0055C590  55                        PUSH EBP
0055C591  8B EC                     MOV EBP,ESP
0055C593  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C599  56                        PUSH ESI
0055C59A  85 C9                     TEST ECX,ECX
0055C59C  57                        PUSH EDI
0055C59D  0F 84 D2 00 00 00         JZ 0x0055c675
0055C5A3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055C5A6  85 C0                     TEST EAX,EAX
0055C5A8  75 0B                     JNZ 0x0055c5b5
0055C5AA  E8 3E 67 EA FF            CALL 0x00402ced
0055C5AF  5F                        POP EDI
0055C5B0  5E                        POP ESI
0055C5B1  5D                        POP EBP
0055C5B2  C2 10 00                  RET 0x10
LAB_0055c5b5:
0055C5B5  A1 F0 AE 79 00            MOV EAX,[0x0079aef0]
0055C5BA  8B 35 E8 BD 85 00         MOV ESI,dword ptr [0x0085bde8]
0055C5C0  50                        PUSH EAX
0055C5C1  68 80 76 80 00            PUSH 0x807680
0055C5C6  68 E4 6E 7C 00            PUSH 0x7c6ee4
0055C5CB  68 3A F3 80 00            PUSH 0x80f33a
0055C5D0  BF 01 00 00 00            MOV EDI,0x1
0055C5D5  FF D6                     CALL ESI
0055C5D7  83 C4 10                  ADD ESP,0x10
0055C5DA  6A 00                     PUSH 0x0
0055C5DC  68 3A F3 80 00            PUSH 0x80f33a
0055C5E1  FF 15 7C BC 85 00         CALL dword ptr [0x0085bc7c]
0055C5E7  8B 0D F4 AE 79 00         MOV ECX,dword ptr [0x0079aef4]
0055C5ED  8B 15 F0 AE 79 00         MOV EDX,dword ptr [0x0079aef0]
0055C5F3  51                        PUSH ECX
0055C5F4  52                        PUSH EDX
0055C5F5  68 80 76 80 00            PUSH 0x807680
0055C5FA  68 DC 6E 7C 00            PUSH 0x7c6edc
0055C5FF  68 3A F3 80 00            PUSH 0x80f33a
0055C604  FF D6                     CALL ESI
0055C606  83 C4 14                  ADD ESP,0x14
0055C609  6A 00                     PUSH 0x0
0055C60B  68 80 00 00 00            PUSH 0x80
0055C610  6A 02                     PUSH 0x2
0055C612  6A 00                     PUSH 0x0
0055C614  57                        PUSH EDI
0055C615  68 00 00 00 40            PUSH 0x40000000
0055C61A  68 3A F3 80 00            PUSH 0x80f33a
0055C61F  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
0055C625  8B F0                     MOV ESI,EAX
0055C627  83 FE FF                  CMP ESI,-0x1
0055C62A  74 2D                     JZ 0x0055c659
0055C62C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0055C62F  53                        PUSH EBX
0055C630  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0055C633  8D 45 0C                  LEA EAX,[EBP + 0xc]
0055C636  6A 00                     PUSH 0x0
0055C638  50                        PUSH EAX
0055C639  53                        PUSH EBX
0055C63A  51                        PUSH ECX
0055C63B  56                        PUSH ESI
0055C63C  FF 15 90 BC 85 00         CALL dword ptr [0x0085bc90]
0055C642  85 C0                     TEST EAX,EAX
0055C644  74 07                     JZ 0x0055c64d
0055C646  3B 5D 0C                  CMP EBX,dword ptr [EBP + 0xc]
0055C649  75 02                     JNZ 0x0055c64d
0055C64B  33 FF                     XOR EDI,EDI
LAB_0055c64d:
0055C64D  56                        PUSH ESI
0055C64E  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
0055C654  85 FF                     TEST EDI,EDI
0055C656  5B                        POP EBX
0055C657  74 11                     JZ 0x0055c66a
LAB_0055c659:
0055C659  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C65F  E8 89 66 EA FF            CALL 0x00402ced
0055C664  5F                        POP EDI
0055C665  5E                        POP ESI
0055C666  5D                        POP EBP
0055C667  C2 10 00                  RET 0x10
LAB_0055c66a:
0055C66A  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C670  E8 6D 8A EA FF            CALL 0x004050e2
LAB_0055c675:
0055C675  5F                        POP EDI
0055C676  5E                        POP ESI
0055C677  5D                        POP EBP
0055C678  C2 10 00                  RET 0x10
