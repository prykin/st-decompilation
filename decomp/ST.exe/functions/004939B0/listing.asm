STBoatC::sub_004939B0:
004939B0  55                        PUSH EBP
004939B1  8B EC                     MOV EBP,ESP
004939B3  83 EC 0C                  SUB ESP,0xc
004939B6  53                        PUSH EBX
004939B7  56                        PUSH ESI
004939B8  57                        PUSH EDI
004939B9  8B F1                     MOV ESI,ECX
004939BB  C7 45 F8 40 42 0F 00      MOV dword ptr [EBP + -0x8],0xf4240
004939C2  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_004939c9:
004939C9  33 FF                     XOR EDI,EDI
LAB_004939cb:
004939CB  66 8B 9E 39 06 00 00      MOV BX,word ptr [ESI + 0x639]
004939D2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004939D5  0F BF 56 5B               MOVSX EDX,word ptr [ESI + 0x5b]
004939D9  0F BF C3                  MOVSX EAX,BX
004939DC  03 C1                     ADD EAX,ECX
004939DE  3B C2                     CMP EAX,EDX
004939E0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004939E3  75 25                     JNZ 0x00493a0a
004939E5  0F BF 86 3B 06 00 00      MOVSX EAX,word ptr [ESI + 0x63b]
004939EC  0F BF 56 5D               MOVSX EDX,word ptr [ESI + 0x5d]
004939F0  03 C7                     ADD EAX,EDI
004939F2  3B C2                     CMP EAX,EDX
004939F4  75 14                     JNZ 0x00493a0a
004939F6  0F BF 86 3D 06 00 00      MOVSX EAX,word ptr [ESI + 0x63d]
004939FD  0F BF 56 5F               MOVSX EDX,word ptr [ESI + 0x5f]
00493A01  40                        INC EAX
00493A02  3B C2                     CMP EAX,EDX
00493A04  0F 84 04 01 00 00         JZ 0x00493b0e
LAB_00493a0a:
00493A0A  66 8B 86 3D 06 00 00      MOV AX,word ptr [ESI + 0x63d]
00493A11  8D 48 01                  LEA ECX,[EAX + 0x1]
00493A14  66 8B 86 3B 06 00 00      MOV AX,word ptr [ESI + 0x63b]
00493A1B  8D 14 07                  LEA EDX,[EDI + EAX*0x1]
00493A1E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00493A21  03 C3                     ADD EAX,EBX
00493A23  66 85 C0                  TEST AX,AX
00493A26  7C 52                     JL 0x00493a7a
00493A28  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00493A2F  7D 49                     JGE 0x00493a7a
00493A31  66 85 D2                  TEST DX,DX
00493A34  7C 44                     JL 0x00493a7a
00493A36  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00493A3D  7D 3B                     JGE 0x00493a7a
00493A3F  66 85 C9                  TEST CX,CX
00493A42  7C 36                     JL 0x00493a7a
00493A44  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00493A4B  7D 2D                     JGE 0x00493a7a
00493A4D  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00493A54  0F BF C9                  MOVSX ECX,CX
00493A57  0F AF D9                  IMUL EBX,ECX
00493A5A  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
00493A61  0F BF D2                  MOVSX EDX,DX
00493A64  0F AF CA                  IMUL ECX,EDX
00493A67  0F BF C0                  MOVSX EAX,AX
00493A6A  03 D9                     ADD EBX,ECX
00493A6C  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00493A72  03 D8                     ADD EBX,EAX
00493A74  83 3C D9 00               CMP dword ptr [ECX + EBX*0x8],0x0
00493A78  75 63                     JNZ 0x00493add
LAB_00493a7a:
00493A7A  0F BF 96 3D 06 00 00      MOVSX EDX,word ptr [ESI + 0x63d]
00493A81  0F BF 86 3B 06 00 00      MOVSX EAX,word ptr [ESI + 0x63b]
00493A88  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00493A8B  42                        INC EDX
00493A8C  03 C7                     ADD EAX,EDI
00493A8E  52                        PUSH EDX
00493A8F  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
00493A93  50                        PUSH EAX
00493A94  51                        PUSH ECX
00493A95  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00493A99  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
00493A9D  52                        PUSH EDX
00493A9E  50                        PUSH EAX
00493A9F  51                        PUSH ECX
00493AA0  E8 2B 73 21 00            CALL 0x006aadd0
00493AA5  3B 45 F8                  CMP EAX,dword ptr [EBP + -0x8]
00493AA8  7D 33                     JGE 0x00493add
00493AAA  66 8B 96 39 06 00 00      MOV DX,word ptr [ESI + 0x639]
00493AB1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00493AB4  66 03 55 FC               ADD DX,word ptr [EBP + -0x4]
00493AB8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00493ABB  66 8B CF                  MOV CX,DI
00493ABE  66 89 10                  MOV word ptr [EAX],DX
00493AC1  66 03 8E 3B 06 00 00      ADD CX,word ptr [ESI + 0x63b]
00493AC8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00493ACB  66 89 0A                  MOV word ptr [EDX],CX
00493ACE  66 8B 86 3D 06 00 00      MOV AX,word ptr [ESI + 0x63d]
00493AD5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00493AD8  66 40                     INC AX
00493ADA  66 89 01                  MOV word ptr [ECX],AX
LAB_00493add:
00493ADD  47                        INC EDI
00493ADE  83 FF 02                  CMP EDI,0x2
00493AE1  0F 8C E4 FE FF FF         JL 0x004939cb
00493AE7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00493AEA  40                        INC EAX
00493AEB  83 F8 02                  CMP EAX,0x2
00493AEE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00493AF1  0F 8C D2 FE FF FF         JL 0x004939c9
00493AF7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00493AFA  33 C0                     XOR EAX,EAX
00493AFC  81 F9 40 42 0F 00         CMP ECX,0xf4240
00493B02  5F                        POP EDI
00493B03  5E                        POP ESI
00493B04  5B                        POP EBX
00493B05  0F 95 C0                  SETNZ AL
00493B08  8B E5                     MOV ESP,EBP
00493B0A  5D                        POP EBP
00493B0B  C2 0C 00                  RET 0xc
LAB_00493b0e:
00493B0E  66 8B 96 39 06 00 00      MOV DX,word ptr [ESI + 0x639]
00493B15  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00493B18  66 03 D1                  ADD DX,CX
00493B1B  66 89 10                  MOV word ptr [EAX],DX
00493B1E  66 8B 8E 3B 06 00 00      MOV CX,word ptr [ESI + 0x63b]
00493B25  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00493B28  66 03 CF                  ADD CX,DI
00493B2B  5F                        POP EDI
00493B2C  66 89 0A                  MOV word ptr [EDX],CX
00493B2F  66 8B 86 3D 06 00 00      MOV AX,word ptr [ESI + 0x63d]
00493B36  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00493B39  66 40                     INC AX
00493B3B  5E                        POP ESI
00493B3C  5B                        POP EBX
00493B3D  66 89 01                  MOV word ptr [ECX],AX
00493B40  B8 01 00 00 00            MOV EAX,0x1
00493B45  8B E5                     MOV ESP,EBP
00493B47  5D                        POP EBP
00493B48  C2 0C 00                  RET 0xc
