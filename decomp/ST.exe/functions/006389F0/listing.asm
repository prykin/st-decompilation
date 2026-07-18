FUN_006389f0:
006389F0  55                        PUSH EBP
006389F1  8B EC                     MOV EBP,ESP
006389F3  83 EC 24                  SUB ESP,0x24
006389F6  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
006389FC  53                        PUSH EBX
006389FD  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00638A00  56                        PUSH ESI
00638A01  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00638A04  57                        PUSH EDI
00638A05  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00638A08  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00638A0F  57                        PUSH EDI
00638A10  53                        PUSH EBX
00638A11  56                        PUSH ESI
00638A12  E8 24 C3 DC FF            CALL 0x00404d3b
00638A17  85 C0                     TEST EAX,EAX
00638A19  0F 85 EA 00 00 00         JNZ 0x00638b09
00638A1F  66 85 F6                  TEST SI,SI
00638A22  0F 8C E1 00 00 00         JL 0x00638b09
00638A28  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
00638A2E  66 3B F0                  CMP SI,AX
00638A31  0F 8D D2 00 00 00         JGE 0x00638b09
00638A37  66 85 DB                  TEST BX,BX
00638A3A  0F 8C C9 00 00 00         JL 0x00638b09
00638A40  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
00638A47  0F 8D BC 00 00 00         JGE 0x00638b09
00638A4D  66 85 FF                  TEST DI,DI
00638A50  0F 8C B3 00 00 00         JL 0x00638b09
00638A56  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
00638A5D  0F 8D A6 00 00 00         JGE 0x00638b09
00638A63  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00638A6A  0F BF D7                  MOVSX EDX,DI
00638A6D  0F AF CA                  IMUL ECX,EDX
00638A70  0F BF C0                  MOVSX EAX,AX
00638A73  0F BF D3                  MOVSX EDX,BX
00638A76  0F AF C2                  IMUL EAX,EDX
00638A79  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00638A7F  03 C8                     ADD ECX,EAX
00638A81  0F BF C6                  MOVSX EAX,SI
00638A84  03 C8                     ADD ECX,EAX
00638A86  8B 54 CA 04               MOV EDX,dword ptr [EDX + ECX*0x8 + 0x4]
00638A8A  85 D2                     TEST EDX,EDX
00638A8C  74 7B                     JZ 0x00638b09
00638A8E  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
00638A91  3D BE 00 00 00            CMP EAX,0xbe
00638A96  74 6A                     JZ 0x00638b02
00638A98  3D AE 01 00 00            CMP EAX,0x1ae
00638A9D  74 63                     JZ 0x00638b02
00638A9F  3D 8C 00 00 00            CMP EAX,0x8c
00638AA4  74 5C                     JZ 0x00638b02
00638AA6  B9 08 00 00 00            MOV ECX,0x8
00638AAB  33 C0                     XOR EAX,EAX
00638AAD  8D 7D DC                  LEA EDI,[EBP + -0x24]
00638AB0  F3 AB                     STOSD.REP ES:EDI
00638AB2  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
00638AB5  83 C0 CE                  ADD EAX,-0x32
00638AB8  3D E6 00 00 00            CMP EAX,0xe6
00638ABD  77 4A                     JA 0x00638b09
00638ABF  33 C9                     XOR ECX,ECX
00638AC1  8A 88 1C 8B 63 00         MOV CL,byte ptr [EAX + 0x638b1c]
switchD_00638ac7::switchD:
00638AC7  FF 24 8D 14 8B 63 00      JMP dword ptr [ECX*0x4 + 0x638b14]
switchD_00638ac7::caseD_32:
00638ACE  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
00638AD1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00638AD7  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00638ADA  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
00638AE1  C7 45 EC 28 01 00 00      MOV dword ptr [EBP + -0x14],0x128
00638AE8  8B 01                     MOV EAX,dword ptr [ECX]
00638AEA  8D 55 DC                  LEA EDX,[EBP + -0x24]
00638AED  52                        PUSH EDX
00638AEE  FF 50 18                  CALL dword ptr [EAX + 0x18]
00638AF1  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00638AF8  5F                        POP EDI
00638AF9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00638AFC  5E                        POP ESI
00638AFD  5B                        POP EBX
00638AFE  8B E5                     MOV ESP,EBP
00638B00  5D                        POP EBP
00638B01  C3                        RET
LAB_00638b02:
00638B02  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
switchD_00638ac7::caseD_33:
00638B09  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00638B0C  5F                        POP EDI
00638B0D  5E                        POP ESI
00638B0E  5B                        POP EBX
00638B0F  8B E5                     MOV ESP,EBP
00638B11  5D                        POP EBP
00638B12  C3                        RET
