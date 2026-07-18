FUN_00497920:
00497920  55                        PUSH EBP
00497921  8B EC                     MOV EBP,ESP
00497923  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00497926  56                        PUSH ESI
00497927  66 85 D2                  TEST DX,DX
0049792A  57                        PUSH EDI
0049792B  7C 57                     JL 0x00497984
0049792D  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
00497934  66 3B D6                  CMP DX,SI
00497937  7D 4B                     JGE 0x00497984
00497939  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0049793C  66 85 C9                  TEST CX,CX
0049793F  7C 43                     JL 0x00497984
00497941  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00497948  7D 3A                     JGE 0x00497984
0049794A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0049794D  66 85 C0                  TEST AX,AX
00497950  7C 32                     JL 0x00497984
00497952  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00497959  7D 29                     JGE 0x00497984
0049795B  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00497962  0F BF C0                  MOVSX EAX,AX
00497965  0F AF F8                  IMUL EDI,EAX
00497968  0F BF C6                  MOVSX EAX,SI
0049796B  0F BF C9                  MOVSX ECX,CX
0049796E  0F AF C1                  IMUL EAX,ECX
00497971  0F BF D2                  MOVSX EDX,DX
00497974  03 F8                     ADD EDI,EAX
00497976  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0049797B  03 FA                     ADD EDI,EDX
0049797D  8B 34 F8                  MOV ESI,dword ptr [EAX + EDI*0x8]
00497980  85 F6                     TEST ESI,ESI
00497982  75 0B                     JNZ 0x0049798f
LAB_00497984:
00497984  5F                        POP EDI
00497985  B8 01 00 00 00            MOV EAX,0x1
0049798A  5E                        POP ESI
0049798B  5D                        POP EBP
0049798C  C2 10 00                  RET 0x10
LAB_0049798f:
0049798F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00497992  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
00497995  3B 4F 24                  CMP ECX,dword ptr [EDI + 0x24]
00497998  75 57                     JNZ 0x004979f1
0049799A  66 8B 56 30               MOV DX,word ptr [ESI + 0x30]
0049799E  66 3B 57 30               CMP DX,word ptr [EDI + 0x30]
004979A2  75 4D                     JNZ 0x004979f1
004979A4  83 BE FD 00 00 00 01      CMP dword ptr [ESI + 0xfd],0x1
004979AB  74 44                     JZ 0x004979f1
004979AD  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
004979B3  85 C0                     TEST EAX,EAX
004979B5  75 0B                     JNZ 0x004979c2
004979B7  5F                        POP EDI
004979B8  B8 01 00 00 00            MOV EAX,0x1
004979BD  5E                        POP ESI
004979BE  5D                        POP EBP
004979BF  C2 10 00                  RET 0x10
LAB_004979c2:
004979C2  8B 8E D3 00 00 00         MOV ECX,dword ptr [ESI + 0xd3]
004979C8  66 8B 14 C8               MOV DX,word ptr [EAX + ECX*0x8]
004979CC  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
004979CF  66 3B 57 47               CMP DX,word ptr [EDI + 0x47]
004979D3  75 AF                     JNZ 0x00497984
004979D5  66 8B 48 02               MOV CX,word ptr [EAX + 0x2]
004979D9  66 3B 4F 49               CMP CX,word ptr [EDI + 0x49]
004979DD  75 A5                     JNZ 0x00497984
004979DF  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
004979E3  66 3B 57 4B               CMP DX,word ptr [EDI + 0x4b]
004979E7  75 9B                     JNZ 0x00497984
004979E9  5F                        POP EDI
004979EA  33 C0                     XOR EAX,EAX
004979EC  5E                        POP ESI
004979ED  5D                        POP EBP
004979EE  C2 10 00                  RET 0x10
LAB_004979f1:
004979F1  8A 86 E3 00 00 00         MOV AL,byte ptr [ESI + 0xe3]
004979F7  3C 01                     CMP AL,0x1
004979F9  75 0B                     JNZ 0x00497a06
004979FB  5F                        POP EDI
004979FC  B8 01 00 00 00            MOV EAX,0x1
00497A01  5E                        POP ESI
00497A02  5D                        POP EBP
00497A03  C2 10 00                  RET 0x10
LAB_00497a06:
00497A06  84 C0                     TEST AL,AL
00497A08  75 08                     JNZ 0x00497a12
00497A0A  5F                        POP EDI
00497A0B  33 C0                     XOR EAX,EAX
00497A0D  5E                        POP ESI
00497A0E  5D                        POP EBP
00497A0F  C2 10 00                  RET 0x10
LAB_00497a12:
00497A12  66 83 BE FA 00 00 00 00   CMP word ptr [ESI + 0xfa],0x0
00497A1A  75 08                     JNZ 0x00497a24
00497A1C  5F                        POP EDI
00497A1D  33 C0                     XOR EAX,EAX
00497A1F  5E                        POP ESI
00497A20  5D                        POP EBP
00497A21  C2 10 00                  RET 0x10
LAB_00497a24:
00497A24  8B 86 97 00 00 00         MOV EAX,dword ptr [ESI + 0x97]
00497A2A  85 C0                     TEST EAX,EAX
00497A2C  75 08                     JNZ 0x00497a36
00497A2E  5F                        POP EDI
00497A2F  33 C0                     XOR EAX,EAX
00497A31  5E                        POP ESI
00497A32  5D                        POP EBP
00497A33  C2 10 00                  RET 0x10
LAB_00497a36:
00497A36  8D 45 16                  LEA EAX,[EBP + 0x16]
00497A39  8D 4D 12                  LEA ECX,[EBP + 0x12]
00497A3C  50                        PUSH EAX
00497A3D  8D 55 0E                  LEA EDX,[EBP + 0xe]
00497A40  51                        PUSH ECX
00497A41  52                        PUSH EDX
00497A42  8B CE                     MOV ECX,ESI
00497A44  E8 ED DC F6 FF            CALL 0x00405736
00497A49  66 8B 47 5B               MOV AX,word ptr [EDI + 0x5b]
00497A4D  66 3B 45 0E               CMP AX,word ptr [EBP + 0xe]
00497A51  75 1C                     JNZ 0x00497a6f
00497A53  66 8B 4F 5D               MOV CX,word ptr [EDI + 0x5d]
00497A57  66 3B 4D 12               CMP CX,word ptr [EBP + 0x12]
00497A5B  75 12                     JNZ 0x00497a6f
00497A5D  66 8B 57 5F               MOV DX,word ptr [EDI + 0x5f]
00497A61  66 3B 55 16               CMP DX,word ptr [EBP + 0x16]
00497A65  75 08                     JNZ 0x00497a6f
00497A67  5F                        POP EDI
00497A68  33 C0                     XOR EAX,EAX
00497A6A  5E                        POP ESI
00497A6B  5D                        POP EBP
00497A6C  C2 10 00                  RET 0x10
LAB_00497a6f:
00497A6F  33 C0                     XOR EAX,EAX
00497A71  66 83 BE FA 00 00 00 1E   CMP word ptr [ESI + 0xfa],0x1e
00497A79  5F                        POP EDI
00497A7A  5E                        POP ESI
00497A7B  0F 9C C0                  SETL AL
00497A7E  5D                        POP EBP
00497A7F  C2 10 00                  RET 0x10
