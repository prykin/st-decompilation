FUN_006eabf0:
006EABF0  55                        PUSH EBP
006EABF1  8B EC                     MOV EBP,ESP
006EABF3  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EABF9  56                        PUSH ESI
006EABFA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006EABFD  57                        PUSH EDI
006EABFE  33 FF                     XOR EDI,EDI
006EAC00  3B F0                     CMP ESI,EAX
006EAC02  0F 83 B4 00 00 00         JNC 0x006eacbc
006EAC08  8B 91 1C 03 00 00         MOV EDX,dword ptr [ECX + 0x31c]
006EAC0E  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
006EAC11  C1 E0 03                  SHL EAX,0x3
006EAC14  2B C6                     SUB EAX,ESI
006EAC16  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EAC19  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
006EAC1C  8B 10                     MOV EDX,dword ptr [EAX]
006EAC1E  F6 C6 80                  TEST DH,0x80
006EAC21  0F 84 95 00 00 00         JZ 0x006eacbc
006EAC27  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006EAC2A  8B FA                     MOV EDI,EDX
006EAC2C  C1 EF 10                  SHR EDI,0x10
006EAC2F  83 E7 01                  AND EDI,0x1
006EAC32  85 F6                     TEST ESI,ESI
006EAC34  74 53                     JZ 0x006eac89
006EAC36  85 FF                     TEST EDI,EDI
006EAC38  0F 85 8D 00 00 00         JNZ 0x006eaccb
006EAC3E  81 E2 FF FF 87 FF         AND EDX,0xff87ffff
006EAC44  81 CA 4C 00 01 00         OR EDX,0x1004c
006EAC4A  89 10                     MOV dword ptr [EAX],EDX
006EAC4C  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
006EAC4F  F6 C2 40                  TEST DL,0x40
006EAC52  74 77                     JZ 0x006eaccb
006EAC54  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006EAC57  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EAC5D  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EAC60  C1 E0 03                  SHL EAX,0x3
006EAC63  2B C2                     SUB EAX,EDX
006EAC65  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EAC68  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
LAB_006eac6b:
006EAC6B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006EAC6E  85 C9                     TEST ECX,ECX
006EAC70  75 59                     JNZ 0x006eaccb
006EAC72  8B 08                     MOV ECX,dword ptr [EAX]
006EAC74  F7 C1 00 00 01 00         TEST ECX,0x10000
006EAC7A  74 4F                     JZ 0x006eaccb
006EAC7C  83 C9 04                  OR ECX,0x4
006EAC7F  89 08                     MOV dword ptr [EAX],ECX
006EAC81  8B C7                     MOV EAX,EDI
006EAC83  5F                        POP EDI
006EAC84  5E                        POP ESI
006EAC85  5D                        POP EBP
006EAC86  C2 08 00                  RET 0x8
LAB_006eac89:
006EAC89  81 E2 5D FF FE FF         AND EDX,0xfffeff5d
006EAC8F  F6 C2 11                  TEST DL,0x11
006EAC92  89 10                     MOV dword ptr [EAX],EDX
006EAC94  74 35                     JZ 0x006eaccb
006EAC96  83 CA 4C                  OR EDX,0x4c
006EAC99  89 10                     MOV dword ptr [EAX],EDX
006EAC9B  8A 50 04                  MOV DL,byte ptr [EAX + 0x4]
006EAC9E  F6 C2 40                  TEST DL,0x40
006EACA1  74 28                     JZ 0x006eaccb
006EACA3  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006EACA6  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EACA9  C1 E0 03                  SHL EAX,0x3
006EACAC  2B C2                     SUB EAX,EDX
006EACAE  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EACB1  8B 81 1C 03 00 00         MOV EAX,dword ptr [ECX + 0x31c]
006EACB7  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006EACBA  EB AF                     JMP 0x006eac6b
LAB_006eacbc:
006EACBC  83 FE FF                  CMP ESI,-0x1
006EACBF  74 0A                     JZ 0x006eaccb
006EACC1  68 2C EF 7E 00            PUSH 0x7eef2c
006EACC6  E8 85 DF FF FF            CALL 0x006e8c50
LAB_006eaccb:
006EACCB  8B C7                     MOV EAX,EDI
006EACCD  5F                        POP EDI
006EACCE  5E                        POP ESI
006EACCF  5D                        POP EBP
006EACD0  C2 08 00                  RET 0x8
