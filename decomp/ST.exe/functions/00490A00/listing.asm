FUN_00490a00:
00490A00  55                        PUSH EBP
00490A01  8B EC                     MOV EBP,ESP
00490A03  56                        PUSH ESI
00490A04  8B F1                     MOV ESI,ECX
00490A06  66 8B 86 54 05 00 00      MOV AX,word ptr [ESI + 0x554]
00490A0D  66 3B 45 08               CMP AX,word ptr [EBP + 0x8]
00490A11  75 1E                     JNZ 0x00490a31
00490A13  66 8B 8E 56 05 00 00      MOV CX,word ptr [ESI + 0x556]
00490A1A  66 3B 4D 0C               CMP CX,word ptr [EBP + 0xc]
00490A1E  75 11                     JNZ 0x00490a31
00490A20  66 8B 96 58 05 00 00      MOV DX,word ptr [ESI + 0x558]
00490A27  66 3B 55 10               CMP DX,word ptr [EBP + 0x10]
00490A2B  0F 84 B8 00 00 00         JZ 0x00490ae9
LAB_00490a31:
00490A31  66 8B 8E 58 05 00 00      MOV CX,word ptr [ESI + 0x558]
00490A38  66 8B 96 56 05 00 00      MOV DX,word ptr [ESI + 0x556]
00490A3F  66 85 C0                  TEST AX,AX
00490A42  57                        PUSH EDI
00490A43  7C 78                     JL 0x00490abd
00490A45  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00490A4C  66 3B C7                  CMP AX,DI
00490A4F  7D 6C                     JGE 0x00490abd
00490A51  66 85 D2                  TEST DX,DX
00490A54  7C 67                     JL 0x00490abd
00490A56  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00490A5D  7D 5E                     JGE 0x00490abd
00490A5F  66 85 C9                  TEST CX,CX
00490A62  7C 59                     JL 0x00490abd
00490A64  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00490A6B  7D 50                     JGE 0x00490abd
00490A6D  53                        PUSH EBX
00490A6E  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00490A75  0F BF C9                  MOVSX ECX,CX
00490A78  0F AF D9                  IMUL EBX,ECX
00490A7B  0F BF CF                  MOVSX ECX,DI
00490A7E  0F BF D2                  MOVSX EDX,DX
00490A81  0F AF CA                  IMUL ECX,EDX
00490A84  0F BF C0                  MOVSX EAX,AX
00490A87  03 D9                     ADD EBX,ECX
00490A89  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00490A8F  03 D8                     ADD EBX,EAX
00490A91  8B 3C D9                  MOV EDI,dword ptr [ECX + EBX*0x8]
00490A94  5B                        POP EBX
00490A95  85 FF                     TEST EDI,EDI
00490A97  74 24                     JZ 0x00490abd
00490A99  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00490A9C  8B 86 68 05 00 00         MOV EAX,dword ptr [ESI + 0x568]
00490AA2  52                        PUSH EDX
00490AA3  50                        PUSH EAX
00490AA4  8B CF                     MOV ECX,EDI
00490AA6  E8 78 41 F7 FF            CALL 0x00404c23
00490AAB  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00490AAE  8B 96 68 05 00 00         MOV EDX,dword ptr [ESI + 0x568]
00490AB4  51                        PUSH ECX
00490AB5  52                        PUSH EDX
00490AB6  8B CF                     MOV ECX,EDI
00490AB8  E8 6B 32 F7 FF            CALL 0x00403d28
LAB_00490abd:
00490ABD  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
00490AC1  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
00490AC5  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
00490AC9  C7 86 64 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x564],0x1
00490AD3  66 89 86 54 05 00 00      MOV word ptr [ESI + 0x554],AX
00490ADA  66 89 8E 56 05 00 00      MOV word ptr [ESI + 0x556],CX
00490AE1  66 89 96 58 05 00 00      MOV word ptr [ESI + 0x558],DX
00490AE8  5F                        POP EDI
LAB_00490ae9:
00490AE9  5E                        POP ESI
00490AEA  5D                        POP EBP
00490AEB  C2 0C 00                  RET 0xc
