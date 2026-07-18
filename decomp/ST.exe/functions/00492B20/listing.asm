FUN_00492b20:
00492B20  55                        PUSH EBP
00492B21  8B EC                     MOV EBP,ESP
00492B23  83 EC 1C                  SUB ESP,0x1c
00492B26  53                        PUSH EBX
00492B27  8B D9                     MOV EBX,ECX
00492B29  56                        PUSH ESI
00492B2A  57                        PUSH EDI
00492B2B  66 8B 83 FD 05 00 00      MOV AX,word ptr [EBX + 0x5fd]
00492B32  8A 8B FC 05 00 00         MOV CL,byte ptr [EBX + 0x5fc]
00492B38  6A 01                     PUSH 0x1
00492B3A  50                        PUSH EAX
00492B3B  51                        PUSH ECX
00492B3C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00492B42  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00492B45  E8 70 FD F6 FF            CALL 0x004028ba
00492B4A  8B F0                     MOV ESI,EAX
00492B4C  85 F6                     TEST ESI,ESI
00492B4E  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00492B51  0F 84 00 03 00 00         JZ 0x00492e57
00492B57  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00492B5A  8B 83 FF 05 00 00         MOV EAX,dword ptr [EBX + 0x5ff]
00492B60  3B D0                     CMP EDX,EAX
00492B62  0F 85 EF 02 00 00         JNZ 0x00492e57
00492B68  8B 4B 24                  MOV ECX,dword ptr [EBX + 0x24]
00492B6B  8B 06                     MOV EAX,dword ptr [ESI]
00492B6D  51                        PUSH ECX
00492B6E  8B CE                     MOV ECX,ESI
00492B70  FF 90 08 01 00 00         CALL dword ptr [EAX + 0x108]
00492B76  85 C0                     TEST EAX,EAX
00492B78  0F 84 D9 02 00 00         JZ 0x00492e57
00492B7E  8D 55 F8                  LEA EDX,[EBP + -0x8]
00492B81  8D 45 FE                  LEA EAX,[EBP + -0x2]
00492B84  52                        PUSH EDX
00492B85  8D 4D FC                  LEA ECX,[EBP + -0x4]
00492B88  50                        PUSH EAX
00492B89  51                        PUSH ECX
00492B8A  8B CE                     MOV ECX,ESI
00492B8C  E8 34 ED F6 FF            CALL 0x004018c5
00492B91  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
00492B95  66 85 D2                  TEST DX,DX
00492B98  0F 8C B9 02 00 00         JL 0x00492e57
00492B9E  66 3B 15 78 B2 7F 00      CMP DX,word ptr [0x007fb278]
00492BA5  0F 8D AC 02 00 00         JGE 0x00492e57
00492BAB  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
00492BAF  66 85 C9                  TEST CX,CX
00492BB2  0F 8C 9F 02 00 00         JL 0x00492e57
00492BB8  66 3B 0D 7A B2 7F 00      CMP CX,word ptr [0x007fb27a]
00492BBF  0F 8D 92 02 00 00         JGE 0x00492e57
00492BC5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00492BC8  66 85 C0                  TEST AX,AX
00492BCB  0F 8C 86 02 00 00         JL 0x00492e57
00492BD1  0F BF 35 7C B2 7F 00      MOVSX ESI,word ptr [0x007fb27c]
00492BD8  0F BF F8                  MOVSX EDI,AX
00492BDB  4E                        DEC ESI
00492BDC  3B FE                     CMP EDI,ESI
00492BDE  0F 8D 73 02 00 00         JGE 0x00492e57
00492BE4  66 89 93 09 06 00 00      MOV word ptr [EBX + 0x609],DX
00492BEB  66 89 8B 0B 06 00 00      MOV word ptr [EBX + 0x60b],CX
00492BF2  66 89 83 0D 06 00 00      MOV word ptr [EBX + 0x60d],AX
00492BF9  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
00492BFF  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
00492C06  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
00492C0D  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
00492C14  0F AF CA                  IMUL ECX,EDX
00492C17  0F AF C8                  IMUL ECX,EAX
00492C1A  8B 3D 38 B2 7F 00         MOV EDI,dword ptr [0x007fb238]
00492C20  D1 E1                     SHL ECX,0x1
00492C22  8B D1                     MOV EDX,ECX
00492C24  C1 E9 02                  SHR ECX,0x2
00492C27  F3 A5                     MOVSD.REP ES:EDI,ESI
00492C29  8B CA                     MOV ECX,EDX
00492C2B  83 E1 03                  AND ECX,0x3
00492C2E  F3 A4                     MOVSB.REP ES:EDI,ESI
00492C30  0F BF 45 F8               MOVSX EAX,word ptr [EBP + -0x8]
00492C34  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
00492C38  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
00492C3C  40                        INC EAX
00492C3D  50                        PUSH EAX
00492C3E  51                        PUSH ECX
00492C3F  0F BF 43 5F               MOVSX EAX,word ptr [EBX + 0x5f]
00492C43  0F BF 4B 5D               MOVSX ECX,word ptr [EBX + 0x5d]
00492C47  52                        PUSH EDX
00492C48  50                        PUSH EAX
00492C49  0F BF 53 5B               MOVSX EDX,word ptr [EBX + 0x5b]
00492C4D  0F BF 05 7C B2 7F 00      MOVSX EAX,word ptr [0x007fb27c]
00492C54  51                        PUSH ECX
00492C55  52                        PUSH EDX
00492C56  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
00492C5D  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
00492C64  50                        PUSH EAX
00492C65  A1 38 B2 7F 00            MOV EAX,[0x007fb238]
00492C6A  51                        PUSH ECX
00492C6B  52                        PUSH EDX
00492C6C  50                        PUSH EAX
00492C6D  E8 1E 84 21 00            CALL 0x006ab090
00492C72  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00492C75  8B 41 2C                  MOV EAX,dword ptr [ECX + 0x2c]
00492C78  83 E8 00                  SUB EAX,0x0
00492C7B  0F 84 16 01 00 00         JZ 0x00492d97
00492C81  48                        DEC EAX
00492C82  0F 85 CF 01 00 00         JNZ 0x00492e57
00492C88  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00492C8B  C7 45 F4 80 96 98 00      MOV dword ptr [EBP + -0xc],0x989680
00492C92  8D 42 01                  LEA EAX,[EDX + 0x1]
00492C95  66 89 83 07 06 00 00      MOV word ptr [EBX + 0x607],AX
00492C9C  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
00492CA0  8D 50 01                  LEA EDX,[EAX + 0x1]
00492CA3  3B C2                     CMP EAX,EDX
00492CA5  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00492CA8  0F 8F A9 01 00 00         JG 0x00492e57
00492CAE  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
00492CB2  8D 71 01                  LEA ESI,[ECX + 0x1]
00492CB5  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
LAB_00492cb8:
00492CB8  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
00492CBC  3B CE                     CMP ECX,ESI
00492CBE  0F 8F B1 00 00 00         JG 0x00492d75
00492CC4  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
00492CC8  42                        INC EDX
00492CC9  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_00492ccc:
00492CCC  0F BF 15 7E B2 7F 00      MOVSX EDX,word ptr [0x007fb27e]
00492CD3  0F BF 35 78 B2 7F 00      MOVSX ESI,word ptr [0x007fb278]
00492CDA  0F AF F1                  IMUL ESI,ECX
00492CDD  8B FA                     MOV EDI,EDX
00492CDF  8B D8                     MOV EBX,EAX
00492CE1  0F AF 7D F0               IMUL EDI,dword ptr [EBP + -0x10]
00492CE5  03 DE                     ADD EBX,ESI
00492CE7  8B 35 38 B2 7F 00         MOV ESI,dword ptr [0x007fb238]
00492CED  03 FB                     ADD EDI,EBX
00492CEF  66 85 C0                  TEST AX,AX
00492CF2  0F BF 34 7E               MOVSX ESI,word ptr [ESI + EDI*0x2]
00492CF6  7C 6E                     JL 0x00492d66
00492CF8  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00492CFF  7D 65                     JGE 0x00492d66
00492D01  66 85 C9                  TEST CX,CX
00492D04  7C 60                     JL 0x00492d66
00492D06  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00492D0D  7D 57                     JGE 0x00492d66
00492D0F  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00492D12  47                        INC EDI
00492D13  66 85 FF                  TEST DI,DI
00492D16  7C 4E                     JL 0x00492d66
00492D18  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
00492D1F  7D 45                     JGE 0x00492d66
00492D21  0F BF FF                  MOVSX EDI,DI
00492D24  0F AF FA                  IMUL EDI,EDX
00492D27  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
00492D2E  0F BF D9                  MOVSX EBX,CX
00492D31  0F AF DA                  IMUL EBX,EDX
00492D34  0F BF D0                  MOVSX EDX,AX
00492D37  03 FB                     ADD EDI,EBX
00492D39  03 FA                     ADD EDI,EDX
00492D3B  8B 15 80 B2 7F 00         MOV EDX,dword ptr [0x007fb280]
00492D41  0F BF 14 7A               MOVSX EDX,word ptr [EDX + EDI*0x2]
00492D45  85 D2                     TEST EDX,EDX
00492D47  7C 1D                     JL 0x00492d66
00492D49  85 F6                     TEST ESI,ESI
00492D4B  74 19                     JZ 0x00492d66
00492D4D  3B 75 F4                  CMP ESI,dword ptr [EBP + -0xc]
00492D50  7D 14                     JGE 0x00492d66
00492D52  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00492D55  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00492D58  66 89 82 03 06 00 00      MOV word ptr [EDX + 0x603],AX
00492D5F  66 89 8A 05 06 00 00      MOV word ptr [EDX + 0x605],CX
LAB_00492d66:
00492D66  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
00492D69  41                        INC ECX
00492D6A  3B CE                     CMP ECX,ESI
00492D6C  0F 8E 5A FF FF FF         JLE 0x00492ccc
00492D72  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
LAB_00492d75:
00492D75  40                        INC EAX
00492D76  3B C2                     CMP EAX,EDX
00492D78  0F 8E 3A FF FF FF         JLE 0x00492cb8
00492D7E  81 7D F4 80 96 98 00      CMP dword ptr [EBP + -0xc],0x989680
00492D85  0F 84 CC 00 00 00         JZ 0x00492e57
00492D8B  5F                        POP EDI
00492D8C  5E                        POP ESI
00492D8D  B8 01 00 00 00            MOV EAX,0x1
00492D92  5B                        POP EBX
00492D93  8B E5                     MOV ESP,EBP
00492D95  5D                        POP EBP
00492D96  C3                        RET
LAB_00492d97:
00492D97  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00492D9A  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
00492D9E  66 85 D2                  TEST DX,DX
00492DA1  8D 70 01                  LEA ESI,[EAX + 0x1]
00492DA4  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00492DA7  0F 8C AA 00 00 00         JL 0x00492e57
00492DAD  66 3B 15 40 B2 7F 00      CMP DX,word ptr [0x007fb240]
00492DB4  0F 8D 9D 00 00 00         JGE 0x00492e57
00492DBA  66 8B 7D FE               MOV DI,word ptr [EBP + -0x2]
00492DBE  66 85 FF                  TEST DI,DI
00492DC1  0F 8C 90 00 00 00         JL 0x00492e57
00492DC7  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
00492DCE  0F 8D 83 00 00 00         JGE 0x00492e57
00492DD4  66 85 F6                  TEST SI,SI
00492DD7  7C 7E                     JL 0x00492e57
00492DD9  66 3B 35 44 B2 7F 00      CMP SI,word ptr [0x007fb244]
00492DE0  7D 75                     JGE 0x00492e57
00492DE2  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
00492DE9  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
00492DF0  0F BF FF                  MOVSX EDI,DI
00492DF3  0F BF F6                  MOVSX ESI,SI
00492DF6  0F AF C7                  IMUL EAX,EDI
00492DF9  0F AF F1                  IMUL ESI,ECX
00492DFC  8B 3D 80 B2 7F 00         MOV EDI,dword ptr [0x007fb280]
00492E02  03 F0                     ADD ESI,EAX
00492E04  0F BF D2                  MOVSX EDX,DX
00492E07  03 F2                     ADD ESI,EDX
00492E09  0F BF 34 77               MOVSX ESI,word ptr [EDI + ESI*0x2]
00492E0D  85 F6                     TEST ESI,ESI
00492E0F  7C 46                     JL 0x00492e57
00492E11  0F BF 75 F8               MOVSX ESI,word ptr [EBP + -0x8]
00492E15  46                        INC ESI
00492E16  0F AF F1                  IMUL ESI,ECX
00492E19  8B 0D 38 B2 7F 00         MOV ECX,dword ptr [0x007fb238]
00492E1F  03 F0                     ADD ESI,EAX
00492E21  03 F2                     ADD ESI,EDX
00492E23  66 83 3C 71 00            CMP word ptr [ECX + ESI*0x2],0x0
00492E28  74 2D                     JZ 0x00492e57
00492E2A  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
00492E2E  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
00492E32  66 8B 4D E4               MOV CX,word ptr [EBP + -0x1c]
00492E36  5F                        POP EDI
00492E37  66 89 93 03 06 00 00      MOV word ptr [EBX + 0x603],DX
00492E3E  66 89 83 05 06 00 00      MOV word ptr [EBX + 0x605],AX
00492E45  66 89 8B 07 06 00 00      MOV word ptr [EBX + 0x607],CX
00492E4C  5E                        POP ESI
00492E4D  B8 01 00 00 00            MOV EAX,0x1
00492E52  5B                        POP EBX
00492E53  8B E5                     MOV ESP,EBP
00492E55  5D                        POP EBP
00492E56  C3                        RET
LAB_00492e57:
00492E57  5F                        POP EDI
00492E58  5E                        POP ESI
00492E59  33 C0                     XOR EAX,EAX
00492E5B  5B                        POP EBX
00492E5C  8B E5                     MOV ESP,EBP
00492E5E  5D                        POP EBP
00492E5F  C3                        RET
