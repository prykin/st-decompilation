FUN_006c7bb0:
006C7BB0  55                        PUSH EBP
006C7BB1  8B EC                     MOV EBP,ESP
006C7BB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7BB6  53                        PUSH EBX
006C7BB7  56                        PUSH ESI
006C7BB8  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C7BBB  8B 58 1A                  MOV EBX,dword ptr [EAX + 0x1a]
006C7BBE  57                        PUSH EDI
006C7BBF  8B 78 1E                  MOV EDI,dword ptr [EAX + 0x1e]
006C7BC2  85 F6                     TEST ESI,ESI
006C7BC4  75 1A                     JNZ 0x006c7be0
006C7BC6  8D 04 9D 00 00 00 00      LEA EAX,[EBX*0x4 + 0x0]
006C7BCD  50                        PUSH EAX
006C7BCE  E8 9D 30 FE FF            CALL 0x006aac70
006C7BD3  8B F0                     MOV ESI,EAX
006C7BD5  85 F6                     TEST ESI,ESI
006C7BD7  75 07                     JNZ 0x006c7be0
006C7BD9  5F                        POP EDI
006C7BDA  5E                        POP ESI
006C7BDB  5B                        POP EBX
006C7BDC  5D                        POP EBP
006C7BDD  C2 0C 00                  RET 0xc
LAB_006c7be0:
006C7BE0  83 FB 02                  CMP EBX,0x2
006C7BE3  75 20                     JNZ 0x006c7c05
006C7BE5  B0 FF                     MOV AL,0xff
006C7BE7  C6 46 03 00               MOV byte ptr [ESI + 0x3],0x0
006C7BEB  C6 46 02 00               MOV byte ptr [ESI + 0x2],0x0
006C7BEF  C6 46 01 00               MOV byte ptr [ESI + 0x1],0x0
006C7BF3  C6 06 00                  MOV byte ptr [ESI],0x0
006C7BF6  88 46 06                  MOV byte ptr [ESI + 0x6],AL
006C7BF9  88 46 05                  MOV byte ptr [ESI + 0x5],AL
006C7BFC  88 46 04                  MOV byte ptr [ESI + 0x4],AL
006C7BFF  C6 46 07 00               MOV byte ptr [ESI + 0x7],0x0
006C7C03  EB 2A                     JMP 0x006c7c2f
LAB_006c7c05:
006C7C05  85 DB                     TEST EBX,EBX
006C7C07  7E 26                     JLE 0x006c7c2f
006C7C09  8D 57 02                  LEA EDX,[EDI + 0x2]
006C7C0C  8D 4E 02                  LEA ECX,[ESI + 0x2]
006C7C0F  8B FB                     MOV EDI,EBX
LAB_006c7c11:
006C7C11  8A 42 FE                  MOV AL,byte ptr [EDX + -0x2]
006C7C14  83 C2 03                  ADD EDX,0x3
006C7C17  88 41 FE                  MOV byte ptr [ECX + -0x2],AL
006C7C1A  8A 42 FC                  MOV AL,byte ptr [EDX + -0x4]
006C7C1D  88 41 FF                  MOV byte ptr [ECX + -0x1],AL
006C7C20  8A 42 FD                  MOV AL,byte ptr [EDX + -0x3]
006C7C23  88 01                     MOV byte ptr [ECX],AL
006C7C25  C6 41 01 00               MOV byte ptr [ECX + 0x1],0x0
006C7C29  83 C1 04                  ADD ECX,0x4
006C7C2C  4F                        DEC EDI
006C7C2D  75 E2                     JNZ 0x006c7c11
LAB_006c7c2f:
006C7C2F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C7C32  85 C0                     TEST EAX,EAX
006C7C34  74 02                     JZ 0x006c7c38
006C7C36  89 18                     MOV dword ptr [EAX],EBX
LAB_006c7c38:
006C7C38  8B C6                     MOV EAX,ESI
006C7C3A  5F                        POP EDI
006C7C3B  5E                        POP ESI
006C7C3C  5B                        POP EBX
006C7C3D  5D                        POP EBP
006C7C3E  C2 0C 00                  RET 0xc
