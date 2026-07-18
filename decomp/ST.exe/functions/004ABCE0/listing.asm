FUN_004abce0:
004ABCE0  55                        PUSH EBP
004ABCE1  8B EC                     MOV EBP,ESP
004ABCE3  53                        PUSH EBX
004ABCE4  56                        PUSH ESI
004ABCE5  57                        PUSH EDI
004ABCE6  8B F9                     MOV EDI,ECX
004ABCE8  83 7F 18 FF               CMP dword ptr [EDI + 0x18],-0x1
004ABCEC  0F 84 E6 00 00 00         JZ 0x004abdd8
004ABCF2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004ABCF5  84 D2                     TEST DL,DL
004ABCF7  0F 8C DB 00 00 00         JL 0x004abdd8
004ABCFD  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
004ABD00  0F BE C2                  MOVSX EAX,DL
004ABD03  49                        DEC ECX
004ABD04  3B C1                     CMP EAX,ECX
004ABD06  0F 8F CC 00 00 00         JG 0x004abdd8
004ABD0C  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
004ABD0F  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
004ABD12  C1 E6 02                  SHL ESI,0x2
004ABD15  8D 0C 06                  LEA ECX,[ESI + EAX*0x1]
004ABD18  8B 04 06                  MOV EAX,dword ptr [ESI + EAX*0x1]
004ABD1B  85 C0                     TEST EAX,EAX
004ABD1D  0F 84 B5 00 00 00         JZ 0x004abdd8
004ABD23  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004ABD26  8B 00                     MOV EAX,dword ptr [EAX]
004ABD28  85 DB                     TEST EBX,EBX
004ABD2A  0F 8C A8 00 00 00         JL 0x004abdd8
004ABD30  48                        DEC EAX
004ABD31  3B D8                     CMP EBX,EAX
004ABD33  0F 8F 9F 00 00 00         JG 0x004abdd8
004ABD39  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
004ABD3D  0F 8C 95 00 00 00         JL 0x004abdd8
004ABD43  39 45 10                  CMP dword ptr [EBP + 0x10],EAX
004ABD46  0F 8F 8C 00 00 00         JG 0x004abdd8
004ABD4C  8A 45 14                  MOV AL,byte ptr [EBP + 0x14]
004ABD4F  84 C0                     TEST AL,AL
004ABD51  75 08                     JNZ 0x004abd5b
004ABD53  66 81 61 0E FF FD         AND word ptr [ECX + 0xe],0xfdff
004ABD59  EB 04                     JMP 0x004abd5f
LAB_004abd5b:
004ABD5B  80 49 0F 02               OR byte ptr [ECX + 0xf],0x2
LAB_004abd5f:
004ABD5F  52                        PUSH EDX
004ABD60  8B CF                     MOV ECX,EDI
004ABD62  E8 FD 84 F5 FF            CALL 0x00404264
004ABD67  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
004ABD6A  8D 04 0E                  LEA EAX,[ESI + ECX*0x1]
004ABD6D  8A 4C 0E 0E               MOV CL,byte ptr [ESI + ECX*0x1 + 0xe]
004ABD71  F6 C1 02                  TEST CL,0x2
004ABD74  75 0F                     JNZ 0x004abd85
004ABD76  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
004ABD79  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
004ABD7C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004ABD7F  89 44 16 14               MOV dword ptr [ESI + EDX*0x1 + 0x14],EAX
004ABD83  EB 0D                     JMP 0x004abd92
LAB_004abd85:
004ABD85  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004ABD88  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
004ABD8B  8B 57 20                  MOV EDX,dword ptr [EDI + 0x20]
004ABD8E  89 5C 16 14               MOV dword ptr [ESI + EDX*0x1 + 0x14],EBX
LAB_004abd92:
004ABD92  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
004ABD95  8D 0C 06                  LEA ECX,[ESI + EAX*0x1]
004ABD98  8B 44 06 18               MOV EAX,dword ptr [ESI + EAX*0x1 + 0x18]
004ABD9C  85 C0                     TEST EAX,EAX
004ABD9E  7C 10                     JL 0x004abdb0
004ABDA0  8B 11                     MOV EDX,dword ptr [ECX]
004ABDA2  3B 02                     CMP EAX,dword ptr [EDX]
004ABDA4  7D 0A                     JGE 0x004abdb0
004ABDA6  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
004ABDA9  8B 54 82 31               MOV EDX,dword ptr [EDX + EAX*0x4 + 0x31]
004ABDAD  89 14 81                  MOV dword ptr [ECX + EAX*0x4],EDX
LAB_004abdb0:
004ABDB0  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
004ABDB3  8A 55 08                  MOV DL,byte ptr [EBP + 0x8]
004ABDB6  03 C6                     ADD EAX,ESI
004ABDB8  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
004ABDBB  89 48 18                  MOV dword ptr [EAX + 0x18],ECX
004ABDBE  8A 47 13                  MOV AL,byte ptr [EDI + 0x13]
004ABDC1  3A D0                     CMP DL,AL
004ABDC3  75 0A                     JNZ 0x004abdcf
004ABDC5  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
004ABDC8  8B 4C 06 18               MOV ECX,dword ptr [ESI + EAX*0x1 + 0x18]
004ABDCC  89 4F 30                  MOV dword ptr [EDI + 0x30],ECX
LAB_004abdcf:
004ABDCF  5F                        POP EDI
004ABDD0  5E                        POP ESI
004ABDD1  33 C0                     XOR EAX,EAX
004ABDD3  5B                        POP EBX
004ABDD4  5D                        POP EBP
004ABDD5  C2 10 00                  RET 0x10
LAB_004abdd8:
004ABDD8  5F                        POP EDI
004ABDD9  5E                        POP ESI
004ABDDA  83 C8 FF                  OR EAX,0xffffffff
004ABDDD  5B                        POP EBX
004ABDDE  5D                        POP EBP
004ABDDF  C2 10 00                  RET 0x10
