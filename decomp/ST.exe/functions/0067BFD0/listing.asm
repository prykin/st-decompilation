FUN_0067bfd0:
0067BFD0  55                        PUSH EBP
0067BFD1  8B EC                     MOV EBP,ESP
0067BFD3  83 EC 3C                  SUB ESP,0x3c
0067BFD6  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0067BFD9  57                        PUSH EDI
0067BFDA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067BFDD  33 FF                     XOR EDI,EDI
0067BFDF  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0067BFE2  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067BFE5  85 C0                     TEST EAX,EAX
0067BFE7  0F 8E D0 00 00 00         JLE 0x0067c0bd
0067BFED  53                        PUSH EBX
0067BFEE  56                        PUSH ESI
0067BFEF  3B F8                     CMP EDI,EAX
LAB_0067bff1:
0067BFF1  0F 83 B5 00 00 00         JNC 0x0067c0ac
0067BFF7  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0067BFFA  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0067BFFD  0F AF F7                  IMUL ESI,EDI
0067C000  03 F2                     ADD ESI,EDX
0067C002  85 F6                     TEST ESI,ESI
0067C004  0F 84 A2 00 00 00         JZ 0x0067c0ac
0067C00A  66 83 3E 00               CMP word ptr [ESI],0x0
0067C00E  0F 86 98 00 00 00         JBE 0x0067c0ac
0067C014  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0067C017  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0067C01A  50                        PUSH EAX
0067C01B  51                        PUSH ECX
0067C01C  E8 51 5B D8 FF            CALL 0x00401b72
0067C021  8B D8                     MOV EBX,EAX
0067C023  83 C4 08                  ADD ESP,0x8
0067C026  85 DB                     TEST EBX,EBX
0067C028  75 12                     JNZ 0x0067c03c
0067C02A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0067C02D  52                        PUSH EDX
0067C02E  E8 23 59 D8 FF            CALL 0x00401956
0067C033  8B D8                     MOV EBX,EAX
0067C035  83 C4 04                  ADD ESP,0x4
0067C038  85 DB                     TEST EBX,EBX
0067C03A  74 6D                     JZ 0x0067c0a9
LAB_0067c03c:
0067C03C  33 C0                     XOR EAX,EAX
0067C03E  B9 0D 00 00 00            MOV ECX,0xd
0067C043  66 8B 03                  MOV AX,word ptr [EBX]
0067C046  8D 7D C4                  LEA EDI,[EBP + -0x3c]
0067C049  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0067C04C  33 C0                     XOR EAX,EAX
0067C04E  F3 AB                     STOSD.REP ES:EDI
0067C050  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0067C053  C7 45 C4 67 00 00 00      MOV dword ptr [EBP + -0x3c],0x67
0067C05A  88 45 CC                  MOV byte ptr [EBP + -0x34],AL
0067C05D  8B 8F FE 06 00 00         MOV ECX,dword ptr [EDI + 0x6fe]
0067C063  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
0067C066  8B CF                     MOV ECX,EDI
0067C068  E8 9C 69 D8 FF            CALL 0x00402a09
0067C06D  89 45 CD                  MOV dword ptr [EBP + -0x33],EAX
0067C070  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0067C073  8B CF                     MOV ECX,EDI
0067C075  89 55 D1                  MOV dword ptr [EBP + -0x2f],EDX
0067C078  E8 AB 81 D8 FF            CALL 0x00404228
0067C07D  83 C3 04                  ADD EBX,0x4
0067C080  66 89 45 D5               MOV word ptr [EBP + -0x2b],AX
0067C084  8B 03                     MOV EAX,dword ptr [EBX]
0067C086  89 45 D7                  MOV dword ptr [EBP + -0x29],EAX
0067C089  33 C0                     XOR EAX,EAX
0067C08B  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
0067C08E  89 4D DB                  MOV dword ptr [EBP + -0x25],ECX
0067C091  8D 4D C4                  LEA ECX,[EBP + -0x3c]
0067C094  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
0067C097  89 55 DF                  MOV dword ptr [EBP + -0x21],EDX
0067C09A  66 8B 06                  MOV AX,word ptr [ESI]
0067C09D  50                        PUSH EAX
0067C09E  51                        PUSH ECX
0067C09F  8B CF                     MOV ECX,EDI
0067C0A1  E8 20 9D D8 FF            CALL 0x00405dc6
0067C0A6  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_0067c0a9:
0067C0A9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_0067c0ac:
0067C0AC  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0067C0AF  47                        INC EDI
0067C0B0  3B F8                     CMP EDI,EAX
0067C0B2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0067C0B5  0F 8C 36 FF FF FF         JL 0x0067bff1
0067C0BB  5E                        POP ESI
0067C0BC  5B                        POP EBX
LAB_0067c0bd:
0067C0BD  5F                        POP EDI
0067C0BE  8B E5                     MOV ESP,EBP
0067C0C0  5D                        POP EBP
0067C0C1  C2 08 00                  RET 0x8
