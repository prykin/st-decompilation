FUN_006f2d10:
006F2D10  55                        PUSH EBP
006F2D11  8B EC                     MOV EBP,ESP
006F2D13  81 EC 00 02 00 00         SUB ESP,0x200
006F2D19  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006F2D1C  53                        PUSH EBX
006F2D1D  56                        PUSH ESI
006F2D1E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006F2D21  8A 0A                     MOV CL,byte ptr [EDX]
006F2D23  8A 06                     MOV AL,byte ptr [ESI]
006F2D25  3A C1                     CMP AL,CL
006F2D27  74 13                     JZ 0x006f2d3c
006F2D29  81 E1 FF 00 00 00         AND ECX,0xff
006F2D2F  25 FF 00 00 00            AND EAX,0xff
006F2D34  5E                        POP ESI
006F2D35  2B C1                     SUB EAX,ECX
006F2D37  5B                        POP EBX
006F2D38  8B E5                     MOV ESP,EBP
006F2D3A  5D                        POP EBP
006F2D3B  C3                        RET
LAB_006f2d3c:
006F2D3C  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
006F2D3F  8D 5E 01                  LEA EBX,[ESI + 0x1]
006F2D42  84 C0                     TEST AL,AL
006F2D44  75 08                     JNZ 0x006f2d4e
006F2D46  5E                        POP ESI
006F2D47  33 C0                     XOR EAX,EAX
006F2D49  5B                        POP EBX
006F2D4A  8B E5                     MOV ESP,EBP
006F2D4C  5D                        POP EBP
006F2D4D  C3                        RET
LAB_006f2d4e:
006F2D4E  57                        PUSH EDI
006F2D4F  B9 80 00 00 00            MOV ECX,0x80
006F2D54  33 C0                     XOR EAX,EAX
006F2D56  8D BD 00 FE FF FF         LEA EDI,[EBP + 0xfffffe00]
006F2D5C  F3 AB                     STOSD.REP ES:EDI
006F2D5E  0F BF 4A 16               MOVSX ECX,word ptr [EDX + 0x16]
006F2D62  8B C1                     MOV EAX,ECX
006F2D64  8D 72 18                  LEA ESI,[EDX + 0x18]
006F2D67  8D BD 00 FE FF FF         LEA EDI,[EBP + 0xfffffe00]
006F2D6D  53                        PUSH EBX
006F2D6E  C1 E9 02                  SHR ECX,0x2
006F2D71  F3 A5                     MOVSD.REP ES:EDI,ESI
006F2D73  8B C8                     MOV ECX,EAX
006F2D75  83 E1 03                  AND ECX,0x3
006F2D78  F3 A4                     MOVSB.REP ES:EDI,ESI
006F2D7A  8D 8D 00 FE FF FF         LEA ECX,[EBP + 0xfffffe00]
006F2D80  51                        PUSH ECX
006F2D81  E8 2A FF FF FF            CALL 0x006f2cb0
006F2D86  83 C4 08                  ADD ESP,0x8
006F2D89  5F                        POP EDI
006F2D8A  5E                        POP ESI
006F2D8B  5B                        POP EBX
006F2D8C  8B E5                     MOV ESP,EBP
006F2D8E  5D                        POP EBP
006F2D8F  C3                        RET
