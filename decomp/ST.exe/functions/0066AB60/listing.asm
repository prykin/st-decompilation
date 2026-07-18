FUN_0066ab60:
0066AB60  55                        PUSH EBP
0066AB61  8B EC                     MOV EBP,ESP
0066AB63  53                        PUSH EBX
0066AB64  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0066AB67  56                        PUSH ESI
0066AB68  57                        PUSH EDI
0066AB69  85 DB                     TEST EBX,EBX
0066AB6B  0F 84 B9 00 00 00         JZ 0x0066ac2a
0066AB71  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0066AB74  85 FF                     TEST EDI,EDI
0066AB76  0F 84 AE 00 00 00         JZ 0x0066ac2a
0066AB7C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066AB82  85 C9                     TEST ECX,ECX
0066AB84  0F 84 A0 00 00 00         JZ 0x0066ac2a
0066AB8A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0066AB8D  56                        PUSH ESI
0066AB8E  E8 32 72 D9 FF            CALL 0x00401dc5
0066AB93  85 C0                     TEST EAX,EAX
0066AB95  74 11                     JZ 0x0066aba8
0066AB97  57                        PUSH EDI
0066AB98  53                        PUSH EBX
0066AB99  8B C8                     MOV ECX,EAX
0066AB9B  E8 26 6C D9 FF            CALL 0x004017c6
0066ABA0  85 C0                     TEST EAX,EAX
0066ABA2  0F 85 84 00 00 00         JNZ 0x0066ac2c
LAB_0066aba8:
0066ABA8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0066ABAE  85 C9                     TEST ECX,ECX
0066ABB0  74 78                     JZ 0x0066ac2a
0066ABB2  56                        PUSH ESI
0066ABB3  E8 40 76 D9 FF            CALL 0x004021f8
0066ABB8  8B D8                     MOV EBX,EAX
0066ABBA  85 DB                     TEST EBX,EBX
0066ABBC  74 6C                     JZ 0x0066ac2a
0066ABBE  8B 73 0C                  MOV ESI,dword ptr [EBX + 0xc]
0066ABC1  4E                        DEC ESI
0066ABC2  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
0066ABC5  78 63                     JS 0x0066ac2a
LAB_0066abc7:
0066ABC7  3B 73 0C                  CMP ESI,dword ptr [EBX + 0xc]
0066ABCA  73 0D                     JNC 0x0066abd9
0066ABCC  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0066ABCF  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
0066ABD2  0F AF C6                  IMUL EAX,ESI
0066ABD5  03 C1                     ADD EAX,ECX
0066ABD7  EB 02                     JMP 0x0066abdb
LAB_0066abd9:
0066ABD9  33 C0                     XOR EAX,EAX
LAB_0066abdb:
0066ABDB  8B 00                     MOV EAX,dword ptr [EAX]
0066ABDD  85 C0                     TEST EAX,EAX
0066ABDF  74 43                     JZ 0x0066ac24
0066ABE1  8B C8                     MOV ECX,EAX
0066ABE3  E8 1A AD D9 FF            CALL 0x00405902
0066ABE8  8B F8                     MOV EDI,EAX
0066ABEA  85 FF                     TEST EDI,EDI
0066ABEC  74 36                     JZ 0x0066ac24
0066ABEE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0066ABF1  8D 77 3B                  LEA ESI,[EDI + 0x3b]
LAB_0066abf4:
0066ABF4  8A 01                     MOV AL,byte ptr [ECX]
0066ABF6  8A D0                     MOV DL,AL
0066ABF8  3A 06                     CMP AL,byte ptr [ESI]
0066ABFA  75 1C                     JNZ 0x0066ac18
0066ABFC  84 D2                     TEST DL,DL
0066ABFE  74 14                     JZ 0x0066ac14
0066AC00  8A 41 01                  MOV AL,byte ptr [ECX + 0x1]
0066AC03  8A D0                     MOV DL,AL
0066AC05  3A 46 01                  CMP AL,byte ptr [ESI + 0x1]
0066AC08  75 0E                     JNZ 0x0066ac18
0066AC0A  83 C1 02                  ADD ECX,0x2
0066AC0D  83 C6 02                  ADD ESI,0x2
0066AC10  84 D2                     TEST DL,DL
0066AC12  75 E0                     JNZ 0x0066abf4
LAB_0066ac14:
0066AC14  33 C9                     XOR ECX,ECX
0066AC16  EB 05                     JMP 0x0066ac1d
LAB_0066ac18:
0066AC18  1B C9                     SBB ECX,ECX
0066AC1A  83 D9 FF                  SBB ECX,-0x1
LAB_0066ac1d:
0066AC1D  85 C9                     TEST ECX,ECX
0066AC1F  74 12                     JZ 0x0066ac33
0066AC21  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
LAB_0066ac24:
0066AC24  4E                        DEC ESI
0066AC25  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
0066AC28  79 9D                     JNS 0x0066abc7
LAB_0066ac2a:
0066AC2A  33 C0                     XOR EAX,EAX
LAB_0066ac2c:
0066AC2C  5F                        POP EDI
0066AC2D  5E                        POP ESI
0066AC2E  5B                        POP EBX
0066AC2F  5D                        POP EBP
0066AC30  C2 0C 00                  RET 0xc
LAB_0066ac33:
0066AC33  8B C7                     MOV EAX,EDI
0066AC35  5F                        POP EDI
0066AC36  5E                        POP ESI
0066AC37  5B                        POP EBX
0066AC38  5D                        POP EBP
0066AC39  C2 0C 00                  RET 0xc
