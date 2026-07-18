FUN_006d7a30:
006D7A30  55                        PUSH EBP
006D7A31  8B EC                     MOV EBP,ESP
006D7A33  83 EC 18                  SUB ESP,0x18
006D7A36  53                        PUSH EBX
006D7A37  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006D7A3A  56                        PUSH ESI
006D7A3B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006D7A3E  57                        PUSH EDI
006D7A3F  8B FE                     MOV EDI,ESI
006D7A41  0F AF FB                  IMUL EDI,EBX
006D7A44  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D7A47  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006D7A4A  8B C8                     MOV ECX,EAX
006D7A4C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D7A4F  2B C1                     SUB EAX,ECX
006D7A51  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D7A54  2B CB                     SUB ECX,EBX
006D7A56  03 FA                     ADD EDI,EDX
006D7A58  3B D9                     CMP EBX,ECX
006D7A5A  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006D7A5D  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
006D7A60  7D 49                     JGE 0x006d7aab
006D7A62  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D7A65  25 FF 00 00 00            AND EAX,0xff
006D7A6A  2B CB                     SUB ECX,EBX
006D7A6C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D7A6F  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006D7A72  EB 03                     JMP 0x006d7a77
LAB_006d7a74:
006D7A74  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006d7a77:
006D7A77  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D7A7A  8A D0                     MOV DL,AL
006D7A7C  8A F2                     MOV DH,DL
006D7A7E  8B F1                     MOV ESI,ECX
006D7A80  8B C2                     MOV EAX,EDX
006D7A82  C1 E0 10                  SHL EAX,0x10
006D7A85  66 8B C2                  MOV AX,DX
006D7A88  C1 E9 02                  SHR ECX,0x2
006D7A8B  F3 AB                     STOSD.REP ES:EDI
006D7A8D  8B CE                     MOV ECX,ESI
006D7A8F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006D7A92  83 E1 03                  AND ECX,0x3
006D7A95  F3 AA                     STOSB.REP ES:EDI
006D7A97  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D7A9A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006D7A9D  03 FE                     ADD EDI,ESI
006D7A9F  48                        DEC EAX
006D7AA0  89 7D 18                  MOV dword ptr [EBP + 0x18],EDI
006D7AA3  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006D7AA6  75 CC                     JNZ 0x006d7a74
006D7AA8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_006d7aab:
006D7AAB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D7AAE  8D 04 1A                  LEA EAX,[EDX + EBX*0x1]
006D7AB1  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006D7AB4  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
006D7ABB  8D 41 FF                  LEA EAX,[ECX + -0x1]
006D7ABE  8B CB                     MOV ECX,EBX
006D7AC0  0F AF C6                  IMUL EAX,ESI
006D7AC3  0F AF CB                  IMUL ECX,EBX
006D7AC6  03 C2                     ADD EAX,EDX
006D7AC8  BE 01 00 00 00            MOV ESI,0x1
006D7ACD  03 C3                     ADD EAX,EBX
006D7ACF  2B F3                     SUB ESI,EBX
006D7AD1  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006D7AD4  0F AF F1                  IMUL ESI,ECX
006D7AD7  8B C1                     MOV EAX,ECX
006D7AD9  8D 3C 09                  LEA EDI,[ECX + ECX*0x1]
006D7ADC  99                        CDQ
006D7ADD  83 E2 03                  AND EDX,0x3
006D7AE0  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006D7AE3  03 C2                     ADD EAX,EDX
006D7AE5  33 D2                     XOR EDX,EDX
006D7AE7  C1 F8 02                  SAR EAX,0x2
006D7AEA  03 F0                     ADD ESI,EAX
006D7AEC  8B C7                     MOV EAX,EDI
006D7AEE  0F AF C3                  IMUL EAX,EBX
006D7AF1  85 C0                     TEST EAX,EAX
006D7AF3  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006D7AF6  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006D7AF9  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006D7AFC  0F 8E B4 00 00 00         JLE 0x006d7bb6
006D7B02  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006D7B05  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
LAB_006d7b08:
006D7B08  85 F6                     TEST ESI,ESI
006D7B0A  0F 8E 84 00 00 00         JLE 0x006d7b94
006D7B10  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D7B13  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D7B16  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D7B19  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D7B1C  25 FF 00 00 00            AND EAX,0xff
006D7B21  2B FA                     SUB EDI,EDX
006D7B23  8A D8                     MOV BL,AL
006D7B25  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D7B28  8A FB                     MOV BH,BL
006D7B2A  8B D1                     MOV EDX,ECX
006D7B2C  8B C3                     MOV EAX,EBX
006D7B2E  C1 E0 10                  SHL EAX,0x10
006D7B31  66 8B C3                  MOV AX,BX
006D7B34  C1 E9 02                  SHR ECX,0x2
006D7B37  F3 AB                     STOSD.REP ES:EDI
006D7B39  8B CA                     MOV ECX,EDX
006D7B3B  83 E1 03                  AND ECX,0x3
006D7B3E  F3 AA                     STOSB.REP ES:EDI
006D7B40  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
006D7B43  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D7B46  8A D8                     MOV BL,AL
006D7B48  8B CA                     MOV ECX,EDX
006D7B4A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D7B4D  8A FB                     MOV BH,BL
006D7B4F  8B C3                     MOV EAX,EBX
006D7B51  2B FA                     SUB EDI,EDX
006D7B53  8B D1                     MOV EDX,ECX
006D7B55  C1 E0 10                  SHL EAX,0x10
006D7B58  66 8B C3                  MOV AX,BX
006D7B5B  C1 E9 02                  SHR ECX,0x2
006D7B5E  F3 AB                     STOSD.REP ES:EDI
006D7B60  8B CA                     MOV ECX,EDX
006D7B62  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D7B65  83 E1 03                  AND ECX,0x3
006D7B68  F3 AA                     STOSB.REP ES:EDI
006D7B6A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D7B6D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D7B70  03 D0                     ADD EDX,EAX
006D7B72  2B C8                     SUB ECX,EAX
006D7B74  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006D7B77  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006D7B7A  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006D7B7D  48                        DEC EAX
006D7B7E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006D7B81  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006D7B84  8D 3C 09                  LEA EDI,[ECX + ECX*0x1]
006D7B87  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006D7B8A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006D7B8D  2B C7                     SUB EAX,EDI
006D7B8F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006D7B92  2B F0                     SUB ESI,EAX
LAB_006d7b94:
006D7B94  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006D7B97  03 D7                     ADD EDX,EDI
006D7B99  43                        INC EBX
006D7B9A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006D7B9D  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
006D7BA0  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006D7BA3  83 C3 02                  ADD EBX,0x2
006D7BA6  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
006D7BA9  8D 1C 0A                  LEA EBX,[EDX + ECX*0x1]
006D7BAC  03 F3                     ADD ESI,EBX
006D7BAE  3B D0                     CMP EDX,EAX
006D7BB0  0F 8C 52 FF FF FF         JL 0x006d7b08
LAB_006d7bb6:
006D7BB6  03 C2                     ADD EAX,EDX
006D7BB8  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006D7BBB  99                        CDQ
006D7BBC  2B C2                     SUB EAX,EDX
006D7BBE  D1 F8                     SAR EAX,0x1
006D7BC0  F7 D8                     NEG EAX
006D7BC2  03 F0                     ADD ESI,EAX
006D7BC4  85 C9                     TEST ECX,ECX
006D7BC6  0F 8C C3 00 00 00         JL 0x006d7c8f
006D7BCC  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006D7BCF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D7BD2  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006D7BD5  25 FF 00 00 00            AND EAX,0xff
006D7BDA  41                        INC ECX
006D7BDB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006D7BDE  8D 14 57                  LEA EDX,[EDI + EDX*0x2]
006D7BE1  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006D7BE4  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006D7BE7  EB 03                     JMP 0x006d7bec
LAB_006d7be9:
006D7BE9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_006d7bec:
006D7BEC  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006D7BEF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D7BF2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D7BF5  8A D8                     MOV BL,AL
006D7BF7  8A FB                     MOV BH,BL
006D7BF9  2B FA                     SUB EDI,EDX
006D7BFB  8B C3                     MOV EAX,EBX
006D7BFD  8B D1                     MOV EDX,ECX
006D7BFF  C1 E0 10                  SHL EAX,0x10
006D7C02  66 8B C3                  MOV AX,BX
006D7C05  C1 E9 02                  SHR ECX,0x2
006D7C08  F3 AB                     STOSD.REP ES:EDI
006D7C0A  8B CA                     MOV ECX,EDX
006D7C0C  83 E1 03                  AND ECX,0x3
006D7C0F  F3 AA                     STOSB.REP ES:EDI
006D7C11  8A 45 FC                  MOV AL,byte ptr [EBP + -0x4]
006D7C14  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D7C17  8A D8                     MOV BL,AL
006D7C19  8B CA                     MOV ECX,EDX
006D7C1B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006D7C1E  8A FB                     MOV BH,BL
006D7C20  8B C3                     MOV EAX,EBX
006D7C22  2B FA                     SUB EDI,EDX
006D7C24  8B D1                     MOV EDX,ECX
006D7C26  C1 E0 10                  SHL EAX,0x10
006D7C29  66 8B C3                  MOV AX,BX
006D7C2C  C1 E9 02                  SHR ECX,0x2
006D7C2F  F3 AB                     STOSD.REP ES:EDI
006D7C31  8B CA                     MOV ECX,EDX
006D7C33  83 E1 03                  AND ECX,0x3
006D7C36  85 F6                     TEST ESI,ESI
006D7C38  F3 AA                     STOSB.REP ES:EDI
006D7C3A  7D 21                     JGE 0x006d7c5d
006D7C3C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D7C3F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006D7C42  40                        INC EAX
006D7C43  8B DA                     MOV EBX,EDX
006D7C45  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006D7C48  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006D7C4B  83 C3 02                  ADD EBX,0x2
006D7C4E  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006D7C51  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006D7C54  03 CA                     ADD ECX,EDX
006D7C56  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006D7C59  03 F1                     ADD ESI,ECX
006D7C5B  EB 03                     JMP 0x006d7c60
LAB_006d7c5d:
006D7C5D  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_006d7c60:
006D7C60  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D7C63  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006D7C66  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006D7C69  03 D1                     ADD EDX,ECX
006D7C6B  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006D7C6E  2B D9                     SUB EBX,ECX
006D7C70  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006D7C73  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006D7C76  2B CA                     SUB ECX,EDX
006D7C78  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006D7C7B  2B C1                     SUB EAX,ECX
006D7C7D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006D7C80  03 F0                     ADD ESI,EAX
006D7C82  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D7C85  48                        DEC EAX
006D7C86  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006D7C89  0F 85 5A FF FF FF         JNZ 0x006d7be9
LAB_006d7c8f:
006D7C8F  5F                        POP EDI
006D7C90  5E                        POP ESI
006D7C91  5B                        POP EBX
006D7C92  8B E5                     MOV ESP,EBP
006D7C94  5D                        POP EBP
006D7C95  C2 18 00                  RET 0x18
