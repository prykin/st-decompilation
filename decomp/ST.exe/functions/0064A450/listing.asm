FUN_0064a450:
0064A450  55                        PUSH EBP
0064A451  8B EC                     MOV EBP,ESP
0064A453  81 EC 14 01 00 00         SUB ESP,0x114
0064A459  A1 F8 18 81 00            MOV EAX,[0x008118f8]
0064A45E  56                        PUSH ESI
0064A45F  85 C0                     TEST EAX,EAX
0064A461  0F 85 C8 00 00 00         JNZ 0x0064a52f
0064A467  A0 4A 73 80 00            MOV AL,[0x0080734a]
0064A46C  84 C0                     TEST AL,AL
0064A46E  0F 84 BB 00 00 00         JZ 0x0064a52f
0064A474  8B 35 E8 BD 85 00         MOV ESI,dword ptr [0x0085bde8]
0064A47A  68 80 76 80 00            PUSH 0x807680
0064A47F  8D 85 EC FE FF FF         LEA EAX,[EBP + 0xfffffeec]
0064A485  68 EC 29 7D 00            PUSH 0x7d29ec
0064A48A  50                        PUSH EAX
0064A48B  FF D6                     CALL ESI
0064A48D  83 C4 0C                  ADD ESP,0xc
0064A490  8D 8D EC FE FF FF         LEA ECX,[EBP + 0xfffffeec]
0064A496  6A 00                     PUSH 0x0
0064A498  68 80 00 00 00            PUSH 0x80
0064A49D  6A 02                     PUSH 0x2
0064A49F  6A 00                     PUSH 0x0
0064A4A1  6A 01                     PUSH 0x1
0064A4A3  68 00 00 00 40            PUSH 0x40000000
0064A4A8  51                        PUSH ECX
0064A4A9  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
0064A4AF  83 F8 FF                  CMP EAX,-0x1
0064A4B2  A3 F8 18 81 00            MOV [0x008118f8],EAX
0064A4B7  75 15                     JNZ 0x0064a4ce
0064A4B9  C7 05 F8 18 81 00 00 00 00 00  MOV dword ptr [0x008118f8],0x0
0064A4C3  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0064A4C9  5E                        POP ESI
0064A4CA  8B E5                     MOV ESP,EBP
0064A4CC  5D                        POP EBP
0064A4CD  C3                        RET
LAB_0064a4ce:
0064A4CE  8D 55 F0                  LEA EDX,[EBP + -0x10]
0064A4D1  52                        PUSH EDX
0064A4D2  FF 15 AC BB 85 00         CALL dword ptr [0x0085bbac]
0064A4D8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064A4DB  8B 4D FA                  MOV ECX,dword ptr [EBP + -0x6]
0064A4DE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0064A4E1  25 FF FF 00 00            AND EAX,0xffff
0064A4E6  81 E1 FF FF 00 00         AND ECX,0xffff
0064A4EC  50                        PUSH EAX
0064A4ED  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0064A4F0  81 E2 FF FF 00 00         AND EDX,0xffff
0064A4F6  51                        PUSH ECX
0064A4F7  8B 4D F6                  MOV ECX,dword ptr [EBP + -0xa]
0064A4FA  52                        PUSH EDX
0064A4FB  8B 55 F2                  MOV EDX,dword ptr [EBP + -0xe]
0064A4FE  25 FF FF 00 00            AND EAX,0xffff
0064A503  81 E1 FF FF 00 00         AND ECX,0xffff
0064A509  50                        PUSH EAX
0064A50A  81 E2 FF FF 00 00         AND EDX,0xffff
0064A510  51                        PUSH ECX
0064A511  52                        PUSH EDX
0064A512  8D 85 EC FE FF FF         LEA EAX,[EBP + 0xfffffeec]
0064A518  68 9C 29 7D 00            PUSH 0x7d299c
0064A51D  50                        PUSH EAX
0064A51E  FF D6                     CALL ESI
0064A520  8D 8D EC FE FF FF         LEA ECX,[EBP + 0xfffffeec]
0064A526  51                        PUSH ECX
0064A527  E8 5D 96 DB FF            CALL 0x00403b89
0064A52C  83 C4 24                  ADD ESP,0x24
LAB_0064a52f:
0064A52F  33 C0                     XOR EAX,EAX
0064A531  5E                        POP ESI
0064A532  8B E5                     MOV ESP,EBP
0064A534  5D                        POP EBP
0064A535  C3                        RET
