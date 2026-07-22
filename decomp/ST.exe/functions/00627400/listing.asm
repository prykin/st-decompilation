STMineSetC::sub_00627400:
00627400  55                        PUSH EBP
00627401  8B EC                     MOV EBP,ESP
00627403  83 EC 08                  SUB ESP,0x8
00627406  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00627409  53                        PUSH EBX
0062740A  56                        PUSH ESI
0062740B  8B F1                     MOV ESI,ECX
0062740D  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00627410  57                        PUSH EDI
00627411  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00627415  66 8B 7E 49               MOV DI,word ptr [ESI + 0x49]
00627419  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
0062741D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00627420  66 85 C0                  TEST AX,AX
00627423  7C 65                     JL 0x0062748a
00627425  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0062742C  7D 5C                     JGE 0x0062748a
0062742E  66 85 FF                  TEST DI,DI
00627431  7C 57                     JL 0x0062748a
00627433  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
0062743A  7D 4E                     JGE 0x0062748a
0062743C  66 85 C9                  TEST CX,CX
0062743F  7C 49                     JL 0x0062748a
00627441  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00627448  7D 40                     JGE 0x0062748a
0062744A  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
00627451  0F BF D9                  MOVSX EBX,CX
00627454  0F AF D3                  IMUL EDX,EBX
00627457  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
0062745E  0F BF FF                  MOVSX EDI,DI
00627461  0F AF DF                  IMUL EBX,EDI
00627464  0F BF F8                  MOVSX EDI,AX
00627467  03 D3                     ADD EDX,EBX
00627469  33 DB                     XOR EBX,EBX
0062746B  8A 9E 8E 00 00 00         MOV BL,byte ptr [ESI + 0x8e]
00627471  03 D7                     ADD EDX,EDI
00627473  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
00627479  8D 14 53                  LEA EDX,[EBX + EDX*0x2]
0062747C  8B 3C 97                  MOV EDI,dword ptr [EDI + EDX*0x4]
0062747F  85 FF                     TEST EDI,EDI
00627481  0F 85 BC 00 00 00         JNZ 0x00627543
00627487  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0062748a:
0062748A  0F BF C0                  MOVSX EAX,AX
0062748D  33 DB                     XOR EBX,EBX
0062748F  8A 9E 8E 00 00 00         MOV BL,byte ptr [ESI + 0x8e]
00627495  0F BF D7                  MOVSX EDX,DI
00627498  66 85 C0                  TEST AX,AX
0062749B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0062749E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006274A1  0F BF C9                  MOVSX ECX,CX
006274A4  7C 67                     JL 0x0062750d
006274A6  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
006274AD  7D 5E                     JGE 0x0062750d
006274AF  66 85 D2                  TEST DX,DX
006274B2  7C 59                     JL 0x0062750d
006274B4  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
006274BB  7D 50                     JGE 0x0062750d
006274BD  66 85 C9                  TEST CX,CX
006274C0  7C 4B                     JL 0x0062750d
006274C2  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
006274C9  7D 42                     JGE 0x0062750d
006274CB  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
006274D2  0F BF D9                  MOVSX EBX,CX
006274D5  0F AF FB                  IMUL EDI,EBX
006274D8  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
006274DF  0F BF D2                  MOVSX EDX,DX
006274E2  0F AF DA                  IMUL EBX,EDX
006274E5  0F BF D0                  MOVSX EDX,AX
006274E8  03 FB                     ADD EDI,EBX
006274EA  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006274ED  03 FA                     ADD EDI,EDX
006274EF  8B D3                     MOV EDX,EBX
006274F1  81 E2 FF 00 00 00         AND EDX,0xff
006274F7  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
006274FA  8B 3D 48 B2 7F 00         MOV EDI,dword ptr [0x007fb248]
00627500  83 3C 97 00               CMP dword ptr [EDI + EDX*0x4],0x0
00627504  0F 85 B4 00 00 00         JNZ 0x006275be
0062750A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_0062750d:
0062750D  8B 7E 18                  MOV EDI,dword ptr [ESI + 0x18]
00627510  57                        PUSH EDI
00627511  56                        PUSH ESI
00627512  53                        PUSH EBX
00627513  51                        PUSH ECX
00627514  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0062751A  52                        PUSH EDX
0062751B  50                        PUSH EAX
0062751C  E8 04 9E DD FF            CALL 0x00401325
00627521  85 C0                     TEST EAX,EAX
00627523  0F 85 95 00 00 00         JNZ 0x006275be
00627529  8A 86 14 03 00 00         MOV AL,byte ptr [ESI + 0x314]
0062752F  5F                        POP EDI
00627530  FE C0                     INC AL
00627532  88 86 14 03 00 00         MOV byte ptr [ESI + 0x314],AL
00627538  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0062753B  5E                        POP ESI
0062753C  5B                        POP EBX
0062753D  8B E5                     MOV ESP,EBP
0062753F  5D                        POP EBP
00627540  C2 04 00                  RET 0x4
LAB_00627543:
00627543  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00627548  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0062754E  8B 86 15 03 00 00         MOV EAX,dword ptr [ESI + 0x315]
00627554  3B C8                     CMP ECX,EAX
00627556  76 1B                     JBE 0x00627573
00627558  8B CE                     MOV ECX,ESI
0062755A  E8 FF DC DD FF            CALL 0x0040525e
0062755F  8B 8E AE 02 00 00         MOV ECX,dword ptr [ESI + 0x2ae]
00627565  5F                        POP EDI
00627566  5E                        POP ESI
00627567  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0062756A  8B C1                     MOV EAX,ECX
0062756C  5B                        POP EBX
0062756D  8B E5                     MOV ESP,EBP
0062756F  5D                        POP EBP
00627570  C2 04 00                  RET 0x4
LAB_00627573:
00627573  2B C1                     SUB EAX,ECX
00627575  33 D2                     XOR EDX,EDX
00627577  B9 C8 00 00 00            MOV ECX,0xc8
0062757C  F7 F1                     DIV ECX
0062757E  B8 AB AA AA AA            MOV EAX,0xaaaaaaab
00627583  F7 E2                     MUL EDX
00627585  D1 EA                     SHR EDX,0x1
00627587  74 35                     JZ 0x006275be
00627589  8B 17                     MOV EDX,dword ptr [EDI]
0062758B  8B CF                     MOV ECX,EDI
0062758D  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00627590  3D E6 00 00 00            CMP EAX,0xe6
00627595  74 1E                     JZ 0x006275b5
00627597  7E 25                     JLE 0x006275be
00627599  3D EB 00 00 00            CMP EAX,0xeb
0062759E  7F 1E                     JG 0x006275be
006275A0  6A 00                     PUSH 0x0
006275A2  8B CF                     MOV ECX,EDI
006275A4  E8 69 B0 DD FF            CALL 0x00402612
006275A9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006275AC  5F                        POP EDI
006275AD  5E                        POP ESI
006275AE  5B                        POP EBX
006275AF  8B E5                     MOV ESP,EBP
006275B1  5D                        POP EBP
006275B2  C2 04 00                  RET 0x4
LAB_006275b5:
006275B5  6A 00                     PUSH 0x0
006275B7  8B CF                     MOV ECX,EDI
006275B9  E8 8F D4 DD FF            CALL 0x00404a4d
LAB_006275be:
006275BE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006275C1  5F                        POP EDI
006275C2  5E                        POP ESI
006275C3  5B                        POP EBX
006275C4  8B E5                     MOV ESP,EBP
006275C6  5D                        POP EBP
006275C7  C2 04 00                  RET 0x4
