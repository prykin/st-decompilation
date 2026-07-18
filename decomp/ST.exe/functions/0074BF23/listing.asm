FUN_0074bf23:
0074BF23  55                        PUSH EBP
0074BF24  8B EC                     MOV EBP,ESP
0074BF26  56                        PUSH ESI
0074BF27  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0074BF2A  57                        PUSH EDI
0074BF2B  33 FF                     XOR EDI,EDI
0074BF2D  3B F7                     CMP ESI,EDI
0074BF2F  75 07                     JNZ 0x0074bf38
0074BF31  B8 03 40 00 80            MOV EAX,0x80004003
0074BF36  EB 67                     JMP 0x0074bf9f
LAB_0074bf38:
0074BF38  68 98 E2 7E 00            PUSH 0x7ee298
0074BF3D  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074BF40  E8 8E 16 00 00            CALL 0x0074d5d3
0074BF45  85 C0                     TEST EAX,EAX
0074BF47  75 0C                     JNZ 0x0074bf55
0074BF49  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074BF4C  57                        PUSH EDI
0074BF4D  8D 48 F4                  LEA ECX,[EAX + -0xc]
0074BF50  8B 40 F4                  MOV EAX,dword ptr [EAX + -0xc]
0074BF53  EB 1C                     JMP 0x0074bf71
LAB_0074bf55:
0074BF55  68 38 17 7A 00            PUSH 0x7a1738
0074BF5A  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074BF5D  E8 71 16 00 00            CALL 0x0074d5d3
0074BF62  85 C0                     TEST EAX,EAX
0074BF64  75 32                     JNZ 0x0074bf98
0074BF66  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074BF69  6A 01                     PUSH 0x1
0074BF6B  8D 48 F4                  LEA ECX,[EAX + -0xc]
0074BF6E  8B 40 F4                  MOV EAX,dword ptr [EAX + -0xc]
LAB_0074bf71:
0074BF71  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
0074BF74  8B C8                     MOV ECX,EAX
0074BF76  83 C0 0C                  ADD EAX,0xc
0074BF79  F7 D9                     NEG ECX
0074BF7B  1B C9                     SBB ECX,ECX
0074BF7D  23 C8                     AND ECX,EAX
0074BF7F  89 0E                     MOV dword ptr [ESI],ECX
0074BF81  8B F1                     MOV ESI,ECX
0074BF83  3B F7                     CMP ESI,EDI
0074BF85  74 08                     JZ 0x0074bf8f
0074BF87  8B 06                     MOV EAX,dword ptr [ESI]
0074BF89  56                        PUSH ESI
0074BF8A  FF 50 04                  CALL dword ptr [EAX + 0x4]
0074BF8D  EB 05                     JMP 0x0074bf94
LAB_0074bf8f:
0074BF8F  BF 0E 00 07 80            MOV EDI,0x8007000e
LAB_0074bf94:
0074BF94  8B C7                     MOV EAX,EDI
0074BF96  EB 07                     JMP 0x0074bf9f
LAB_0074bf98:
0074BF98  89 3E                     MOV dword ptr [ESI],EDI
0074BF9A  B8 16 02 04 80            MOV EAX,0x80040216
LAB_0074bf9f:
0074BF9F  5F                        POP EDI
0074BFA0  5E                        POP ESI
0074BFA1  5D                        POP EBP
0074BFA2  C2 0C 00                  RET 0xc
