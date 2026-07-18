FUN_005809e0:
005809E0  55                        PUSH EBP
005809E1  8B EC                     MOV EBP,ESP
005809E3  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005809E9  53                        PUSH EBX
005809EA  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
005809ED  56                        PUSH ESI
005809EE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005809F1  57                        PUSH EDI
005809F2  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005809F5  57                        PUSH EDI
005809F6  53                        PUSH EBX
005809F7  56                        PUSH ESI
005809F8  E8 3E 43 E8 FF            CALL 0x00404d3b
005809FD  85 C0                     TEST EAX,EAX
005809FF  0F 84 DD 00 00 00         JZ 0x00580ae2
00580A05  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
00580A0C  85 FF                     TEST EDI,EDI
00580A0E  74 64                     JZ 0x00580a74
00580A10  66 85 F6                  TEST SI,SI
00580A13  8D 47 FF                  LEA EAX,[EDI + -0x1]
00580A16  0F 8C A8 00 00 00         JL 0x00580ac4
00580A1C  66 3B F1                  CMP SI,CX
00580A1F  7D 53                     JGE 0x00580a74
00580A21  66 85 DB                  TEST BX,BX
00580A24  7C 4E                     JL 0x00580a74
00580A26  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
00580A2D  7D 45                     JGE 0x00580a74
00580A2F  66 85 C0                  TEST AX,AX
00580A32  7C 40                     JL 0x00580a74
00580A34  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
00580A3B  7D 37                     JGE 0x00580a74
00580A3D  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
00580A44  0F BF D0                  MOVSX EDX,AX
00580A47  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
00580A4E  0F AF CA                  IMUL ECX,EDX
00580A51  0F BF D3                  MOVSX EDX,BX
00580A54  0F AF C2                  IMUL EAX,EDX
00580A57  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
00580A5D  03 C8                     ADD ECX,EAX
00580A5F  0F BF C6                  MOVSX EAX,SI
00580A62  03 C8                     ADD ECX,EAX
00580A64  0F BF 04 4A               MOVSX EAX,word ptr [EDX + ECX*0x2]
00580A68  83 F8 FF                  CMP EAX,-0x1
00580A6B  75 75                     JNZ 0x00580ae2
00580A6D  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
LAB_00580a74:
00580A74  66 85 F6                  TEST SI,SI
00580A77  7C 4B                     JL 0x00580ac4
00580A79  66 3B F1                  CMP SI,CX
00580A7C  7D 46                     JGE 0x00580ac4
00580A7E  66 85 DB                  TEST BX,BX
00580A81  7C 41                     JL 0x00580ac4
00580A83  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
00580A8A  7D 38                     JGE 0x00580ac4
00580A8C  66 85 FF                  TEST DI,DI
00580A8F  7C 33                     JL 0x00580ac4
00580A91  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
00580A98  7D 2A                     JGE 0x00580ac4
00580A9A  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
00580AA1  0F BF D7                  MOVSX EDX,DI
00580AA4  0F AF C2                  IMUL EAX,EDX
00580AA7  0F BF C9                  MOVSX ECX,CX
00580AAA  0F BF D3                  MOVSX EDX,BX
00580AAD  0F AF CA                  IMUL ECX,EDX
00580AB0  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00580AB6  03 C1                     ADD EAX,ECX
00580AB8  0F BF CE                  MOVSX ECX,SI
00580ABB  03 C1                     ADD EAX,ECX
00580ABD  8B 0C C2                  MOV ECX,dword ptr [EDX + EAX*0x8]
00580AC0  85 C9                     TEST ECX,ECX
00580AC2  75 0A                     JNZ 0x00580ace
LAB_00580ac4:
00580AC4  5F                        POP EDI
00580AC5  5E                        POP ESI
00580AC6  B8 01 00 00 00            MOV EAX,0x1
00580ACB  5B                        POP EBX
00580ACC  5D                        POP EBP
00580ACD  C3                        RET
LAB_00580ace:
00580ACE  8B 01                     MOV EAX,dword ptr [ECX]
00580AD0  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
00580AD3  83 F8 39                  CMP EAX,0x39
00580AD6  74 24                     JZ 0x00580afc
00580AD8  83 F8 4F                  CMP EAX,0x4f
00580ADB  74 0C                     JZ 0x00580ae9
00580ADD  83 F8 5E                  CMP EAX,0x5e
00580AE0  74 1A                     JZ 0x00580afc
LAB_00580ae2:
00580AE2  5F                        POP EDI
00580AE3  5E                        POP ESI
00580AE4  33 C0                     XOR EAX,EAX
00580AE6  5B                        POP EBX
00580AE7  5D                        POP EBP
00580AE8  C3                        RET
LAB_00580ae9:
00580AE9  81 7D 14 DE 00 00 00      CMP dword ptr [EBP + 0x14],0xde
00580AF0  75 F0                     JNZ 0x00580ae2
00580AF2  5F                        POP EDI
00580AF3  5E                        POP ESI
00580AF4  B8 01 00 00 00            MOV EAX,0x1
00580AF9  5B                        POP EBX
00580AFA  5D                        POP EBP
00580AFB  C3                        RET
LAB_00580afc:
00580AFC  81 7D 14 DD 00 00 00      CMP dword ptr [EBP + 0x14],0xdd
00580B03  75 DD                     JNZ 0x00580ae2
00580B05  5F                        POP EDI
00580B06  5E                        POP ESI
00580B07  B8 01 00 00 00            MOV EAX,0x1
00580B0C  5B                        POP EBX
00580B0D  5D                        POP EBP
00580B0E  C3                        RET
