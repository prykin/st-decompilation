FUN_0072e566:
0072E566  53                        PUSH EBX
0072E567  8B D8                     MOV EBX,EAX
0072E569  C1 E0 08                  SHL EAX,0x8
0072E56C  8B 54 24 08               MOV EDX,dword ptr [ESP + 0x8]
0072E570  F7 C2 03 00 00 00         TEST EDX,0x3
0072E576  74 13                     JZ 0x0072e58b
LAB_0072e578:
0072E578  8A 0A                     MOV CL,byte ptr [EDX]
0072E57A  42                        INC EDX
0072E57B  38 D9                     CMP CL,BL
0072E57D  74 D1                     JZ 0x0072e550
0072E57F  84 C9                     TEST CL,CL
0072E581  74 51                     JZ 0x0072e5d4
0072E583  F7 C2 03 00 00 00         TEST EDX,0x3
0072E589  75 ED                     JNZ 0x0072e578
LAB_0072e58b:
0072E58B  0B D8                     OR EBX,EAX
0072E58D  57                        PUSH EDI
0072E58E  8B C3                     MOV EAX,EBX
0072E590  C1 E3 10                  SHL EBX,0x10
0072E593  56                        PUSH ESI
0072E594  0B D8                     OR EBX,EAX
LAB_0072e596:
0072E596  8B 0A                     MOV ECX,dword ptr [EDX]
0072E598  BF FF FE FE 7E            MOV EDI,0x7efefeff
0072E59D  8B C1                     MOV EAX,ECX
0072E59F  8B F7                     MOV ESI,EDI
0072E5A1  33 CB                     XOR ECX,EBX
0072E5A3  03 F0                     ADD ESI,EAX
0072E5A5  03 F9                     ADD EDI,ECX
0072E5A7  83 F1 FF                  XOR ECX,0xffffffff
0072E5AA  83 F0 FF                  XOR EAX,0xffffffff
0072E5AD  33 CF                     XOR ECX,EDI
0072E5AF  33 C6                     XOR EAX,ESI
0072E5B1  83 C2 04                  ADD EDX,0x4
0072E5B4  81 E1 00 01 01 81         AND ECX,0x81010100
0072E5BA  75 1C                     JNZ 0x0072e5d8
0072E5BC  25 00 01 01 81            AND EAX,0x81010100
0072E5C1  74 D3                     JZ 0x0072e596
0072E5C3  25 00 01 01 01            AND EAX,0x1010100
0072E5C8  75 08                     JNZ 0x0072e5d2
0072E5CA  81 E6 00 00 00 80         AND ESI,0x80000000
0072E5D0  75 C4                     JNZ 0x0072e596
LAB_0072e5d2:
0072E5D2  5E                        POP ESI
0072E5D3  5F                        POP EDI
LAB_0072e5d4:
0072E5D4  5B                        POP EBX
0072E5D5  33 C0                     XOR EAX,EAX
0072E5D7  C3                        RET
LAB_0072e5d8:
0072E5D8  8B 42 FC                  MOV EAX,dword ptr [EDX + -0x4]
0072E5DB  38 D8                     CMP AL,BL
0072E5DD  74 36                     JZ 0x0072e615
0072E5DF  84 C0                     TEST AL,AL
0072E5E1  74 EF                     JZ 0x0072e5d2
0072E5E3  38 DC                     CMP AH,BL
0072E5E5  74 27                     JZ 0x0072e60e
0072E5E7  84 E4                     TEST AH,AH
0072E5E9  74 E7                     JZ 0x0072e5d2
0072E5EB  C1 E8 10                  SHR EAX,0x10
0072E5EE  38 D8                     CMP AL,BL
0072E5F0  74 15                     JZ 0x0072e607
0072E5F2  84 C0                     TEST AL,AL
0072E5F4  74 DC                     JZ 0x0072e5d2
0072E5F6  38 DC                     CMP AH,BL
0072E5F8  74 06                     JZ 0x0072e600
0072E5FA  84 E4                     TEST AH,AH
0072E5FC  74 D4                     JZ 0x0072e5d2
0072E5FE  EB 96                     JMP 0x0072e596
LAB_0072e600:
0072E600  5E                        POP ESI
0072E601  5F                        POP EDI
0072E602  8D 42 FF                  LEA EAX,[EDX + -0x1]
0072E605  5B                        POP EBX
0072E606  C3                        RET
LAB_0072e607:
0072E607  8D 42 FE                  LEA EAX,[EDX + -0x2]
0072E60A  5E                        POP ESI
0072E60B  5F                        POP EDI
0072E60C  5B                        POP EBX
0072E60D  C3                        RET
LAB_0072e60e:
0072E60E  8D 42 FD                  LEA EAX,[EDX + -0x3]
0072E611  5E                        POP ESI
0072E612  5F                        POP EDI
0072E613  5B                        POP EBX
0072E614  C3                        RET
LAB_0072e615:
0072E615  8D 42 FC                  LEA EAX,[EDX + -0x4]
0072E618  5E                        POP ESI
0072E619  5F                        POP EDI
0072E61A  5B                        POP EBX
0072E61B  C3                        RET
