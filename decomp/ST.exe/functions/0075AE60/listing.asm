FUN_0075ae60:
0075AE60  55                        PUSH EBP
0075AE61  8B EC                     MOV EBP,ESP
0075AE63  83 EC 0C                  SUB ESP,0xc
0075AE66  53                        PUSH EBX
0075AE67  56                        PUSH ESI
0075AE68  57                        PUSH EDI
0075AE69  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075AE6C  33 DB                     XOR EBX,EBX
0075AE6E  8B 87 D4 00 00 00         MOV EAX,dword ptr [EDI + 0xd4]
0075AE74  8B B7 9A 01 00 00         MOV ESI,dword ptr [EDI + 0x19a]
0075AE7A  3B C3                     CMP EAX,EBX
0075AE7C  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0075AE7F  0F 84 ED 00 00 00         JZ 0x0075af72
0075AE85  39 9F 98 00 00 00         CMP dword ptr [EDI + 0x98],EBX
0075AE8B  0F 84 E1 00 00 00         JZ 0x0075af72
0075AE91  39 5E 70                  CMP dword ptr [ESI + 0x70],EBX
0075AE94  75 14                     JNZ 0x0075aeaa
0075AE96  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
0075AE99  8B 0F                     MOV ECX,dword ptr [EDI]
0075AE9B  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0075AE9E  C1 E2 03                  SHL EDX,0x3
0075AEA1  52                        PUSH EDX
0075AEA2  6A 01                     PUSH 0x1
0075AEA4  57                        PUSH EDI
0075AEA5  FF 11                     CALL dword ptr [ECX]
0075AEA7  89 46 70                  MOV dword ptr [ESI + 0x70],EAX
LAB_0075aeaa:
0075AEAA  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0075AEAD  8B 76 70                  MOV ESI,dword ptr [ESI + 0x70]
0075AEB0  8B 87 D0 00 00 00         MOV EAX,dword ptr [EDI + 0xd0]
0075AEB6  3B CB                     CMP ECX,EBX
0075AEB8  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0075AEBB  0F 8E A5 00 00 00         JLE 0x0075af66
0075AEC1  83 C0 4C                  ADD EAX,0x4c
0075AEC4  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0075AEC7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0075aeca:
0075AECA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075AECD  8B 00                     MOV EAX,dword ptr [EAX]
0075AECF  85 C0                     TEST EAX,EAX
0075AED1  0F 84 9B 00 00 00         JZ 0x0075af72
0075AED7  66 83 38 00               CMP word ptr [EAX],0x0
0075AEDB  0F 84 91 00 00 00         JZ 0x0075af72
0075AEE1  66 83 78 02 00            CMP word ptr [EAX + 0x2],0x0
0075AEE6  0F 84 86 00 00 00         JZ 0x0075af72
0075AEEC  66 83 78 10 00            CMP word ptr [EAX + 0x10],0x0
0075AEF1  74 7F                     JZ 0x0075af72
0075AEF3  66 83 78 20 00            CMP word ptr [EAX + 0x20],0x0
0075AEF8  74 78                     JZ 0x0075af72
0075AEFA  66 83 78 12 00            CMP word ptr [EAX + 0x12],0x0
0075AEFF  74 71                     JZ 0x0075af72
0075AF01  66 83 78 04 00            CMP word ptr [EAX + 0x4],0x0
0075AF06  74 6A                     JZ 0x0075af72
0075AF08  8B 8F 98 00 00 00         MOV ECX,dword ptr [EDI + 0x98]
0075AF0E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075AF11  03 CA                     ADD ECX,EDX
0075AF13  83 39 00                  CMP dword ptr [ECX],0x0
0075AF16  7C 5A                     JL 0x0075af72
0075AF18  8B D6                     MOV EDX,ESI
0075AF1A  8D 41 04                  LEA EAX,[ECX + 0x4]
0075AF1D  2B D1                     SUB EDX,ECX
0075AF1F  B9 05 00 00 00            MOV ECX,0x5
LAB_0075af24:
0075AF24  8B 18                     MOV EBX,dword ptr [EAX]
0075AF26  89 1C 02                  MOV dword ptr [EDX + EAX*0x1],EBX
0075AF29  8B 18                     MOV EBX,dword ptr [EAX]
0075AF2B  85 DB                     TEST EBX,EBX
0075AF2D  74 07                     JZ 0x0075af36
0075AF2F  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
LAB_0075af36:
0075AF36  83 C0 04                  ADD EAX,0x4
0075AF39  49                        DEC ECX
0075AF3A  75 E8                     JNZ 0x0075af24
0075AF3C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075AF3F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075AF42  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0075AF45  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0075AF48  83 C6 18                  ADD ESI,0x18
0075AF4B  40                        INC EAX
0075AF4C  81 C3 00 01 00 00         ADD EBX,0x100
0075AF52  83 C2 54                  ADD EDX,0x54
0075AF55  3B C1                     CMP EAX,ECX
0075AF57  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075AF5A  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0075AF5D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0075AF60  0F 8C 64 FF FF FF         JL 0x0075aeca
LAB_0075af66:
0075AF66  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0075AF69  5F                        POP EDI
0075AF6A  5E                        POP ESI
0075AF6B  5B                        POP EBX
0075AF6C  8B E5                     MOV ESP,EBP
0075AF6E  5D                        POP EBP
0075AF6F  C2 04 00                  RET 0x4
LAB_0075af72:
0075AF72  5F                        POP EDI
0075AF73  5E                        POP ESI
0075AF74  33 C0                     XOR EAX,EAX
0075AF76  5B                        POP EBX
0075AF77  8B E5                     MOV ESP,EBP
0075AF79  5D                        POP EBP
0075AF7A  C2 04 00                  RET 0x4
