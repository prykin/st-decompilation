OptPanelTy::Notification:
00533A10  55                        PUSH EBP
00533A11  8B EC                     MOV EBP,ESP
00533A13  83 EC 48                  SUB ESP,0x48
00533A16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00533A1B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00533A1E  56                        PUSH ESI
00533A1F  8D 55 BC                  LEA EDX,[EBP + -0x44]
00533A22  8D 4D B8                  LEA ECX,[EBP + -0x48]
00533A25  6A 00                     PUSH 0x0
00533A27  52                        PUSH EDX
00533A28  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00533A2B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00533A31  E8 BA 9D 1F 00            CALL 0x0072d7f0
00533A36  8B F0                     MOV ESI,EAX
00533A38  83 C4 08                  ADD ESP,0x8
00533A3B  85 F6                     TEST ESI,ESI
00533A3D  0F 85 9D 00 00 00         JNZ 0x00533ae0
00533A43  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00533A46  8B C1                     MOV EAX,ECX
00533A48  25 FF 00 00 00            AND EAX,0xff
00533A4D  83 E8 0A                  SUB EAX,0xa
00533A50  74 24                     JZ 0x00533a76
00533A52  48                        DEC EAX
00533A53  74 12                     JZ 0x00533a67
00533A55  48                        DEC EAX
00533A56  75 78                     JNZ 0x00533ad0
00533A58  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00533A5B  C7 86 A5 01 00 00 76 42 00 00  MOV dword ptr [ESI + 0x1a5],0x4276
00533A65  EB 25                     JMP 0x00533a8c
LAB_00533a67:
00533A67  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00533A6A  C7 86 A5 01 00 00 70 42 00 00  MOV dword ptr [ESI + 0x1a5],0x4270
00533A74  EB 16                     JMP 0x00533a8c
LAB_00533a76:
00533A76  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00533A79  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
00533A7C  C7 86 A5 01 00 00 71 42 00 00  MOV dword ptr [ESI + 0x1a5],0x4271
00533A86  88 86 AC 01 00 00         MOV byte ptr [ESI + 0x1ac],AL
LAB_00533a8c:
00533A8C  88 8E AB 01 00 00         MOV byte ptr [ESI + 0x1ab],CL
00533A92  8B CE                     MOV ECX,ESI
00533A94  C7 86 A0 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1a0],0x0
00533A9E  C6 86 A9 01 00 00 00      MOV byte ptr [ESI + 0x1a9],0x0
00533AA5  C6 86 A4 01 00 00 0B      MOV byte ptr [ESI + 0x1a4],0xb
00533AAC  E8 A0 ED EC FF            CALL 0x00402851
00533AB1  66 8B 86 72 01 00 00      MOV AX,word ptr [ESI + 0x172]
00533AB8  66 3D 02 00               CMP AX,0x2
00533ABC  74 06                     JZ 0x00533ac4
00533ABE  66 3D 04 00               CMP AX,0x4
00533AC2  75 0C                     JNZ 0x00533ad0
LAB_00533ac4:
00533AC4  68 FF 00 00 00            PUSH 0xff
00533AC9  8B CE                     MOV ECX,ESI
00533ACB  E8 72 1F ED FF            CALL 0x00405a42
LAB_00533ad0:
00533AD0  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00533AD3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00533AD9  5E                        POP ESI
00533ADA  8B E5                     MOV ESP,EBP
00533ADC  5D                        POP EBP
00533ADD  C2 08 00                  RET 0x8
LAB_00533ae0:
00533AE0  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00533AE3  68 14 73 7C 00            PUSH 0x7c7314
00533AE8  68 CC 4C 7A 00            PUSH 0x7a4ccc
00533AED  56                        PUSH ESI
00533AEE  6A 00                     PUSH 0x0
00533AF0  68 A6 04 00 00            PUSH 0x4a6
00533AF5  68 A0 70 7C 00            PUSH 0x7c70a0
00533AFA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00533B00  E8 CB 99 17 00            CALL 0x006ad4d0
00533B05  83 C4 18                  ADD ESP,0x18
00533B08  85 C0                     TEST EAX,EAX
00533B0A  74 01                     JZ 0x00533b0d
00533B0C  CC                        INT3
LAB_00533b0d:
00533B0D  68 A6 04 00 00            PUSH 0x4a6
00533B12  68 A0 70 7C 00            PUSH 0x7c70a0
00533B17  6A 00                     PUSH 0x0
00533B19  56                        PUSH ESI
00533B1A  E8 21 23 17 00            CALL 0x006a5e40
00533B1F  5E                        POP ESI
00533B20  8B E5                     MOV ESP,EBP
00533B22  5D                        POP EBP
00533B23  C2 08 00                  RET 0x8
