FUN_004c7260:
004C7260  55                        PUSH EBP
004C7261  8B EC                     MOV EBP,ESP
004C7263  53                        PUSH EBX
004C7264  56                        PUSH ESI
004C7265  8B F1                     MOV ESI,ECX
004C7267  57                        PUSH EDI
004C7268  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C726E  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004C7274  50                        PUSH EAX
004C7275  E8 3D D7 F3 FF            CALL 0x004049b7
004C727A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
004C727D  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
004C7280  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004C7283  25 FF 00 00 00            AND EAX,0xff
004C7288  48                        DEC EAX
004C7289  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
004C728F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004C7292  8B D0                     MOV EDX,EAX
004C7294  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004C7297  49                        DEC ECX
004C7298  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
004C729E  83 F9 07                  CMP ECX,0x7
004C72A1  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004C72A7  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
004C72AD  0F 87 06 01 00 00         JA 0x004c73b9
switchD_004c72b3::switchD:
004C72B3  FF 24 8D C4 73 4C 00      JMP dword ptr [ECX*0x4 + 0x4c73c4]
switchD_004c72b3::caseD_1:
004C72BA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004C72BD  8B 14 8D 28 44 85 00      MOV EDX,dword ptr [ECX*0x4 + 0x854428]
004C72C4  89 17                     MOV dword ptr [EDI],EDX
004C72C6  8B 14 8D 5C 05 7E 00      MOV EDX,dword ptr [ECX*0x4 + 0x7e055c]
004C72CD  89 10                     MOV dword ptr [EAX],EDX
004C72CF  8B 04 8D 9C 07 7E 00      MOV EAX,dword ptr [ECX*0x4 + 0x7e079c]
004C72D6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
004C72D9  89 03                     MOV dword ptr [EBX],EAX
004C72DB  8B 0C 8D DC 09 7E 00      MOV ECX,dword ptr [ECX*0x4 + 0x7e09dc]
004C72E2  5F                        POP EDI
004C72E3  5E                        POP ESI
004C72E4  89 0A                     MOV dword ptr [EDX],ECX
004C72E6  33 C0                     XOR EAX,EAX
004C72E8  5B                        POP EBX
004C72E9  5D                        POP EBP
004C72EA  C2 18 00                  RET 0x18
switchD_004c72b3::caseD_2:
004C72ED  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004C72F0  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C72F3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C72F9  53                        PUSH EBX
004C72FA  50                        PUSH EAX
004C72FB  E8 6B A5 F3 FF            CALL 0x0040186b
004C7300  8D 0C 98                  LEA ECX,[EAX + EBX*0x4]
004C7303  33 C0                     XOR EAX,EAX
004C7305  8B 14 8D 1C 48 7E 00      MOV EDX,dword ptr [ECX*0x4 + 0x7e481c]
004C730C  89 17                     MOV dword ptr [EDI],EDX
004C730E  5F                        POP EDI
004C730F  5E                        POP ESI
004C7310  5B                        POP EBX
004C7311  5D                        POP EBP
004C7312  C2 18 00                  RET 0x18
switchD_004c72b3::caseD_4:
004C7315  8B 0D 28 61 7E 00         MOV ECX,dword ptr [0x007e6128]
004C731B  5F                        POP EDI
004C731C  89 08                     MOV dword ptr [EAX],ECX
004C731E  5E                        POP ESI
004C731F  33 C0                     XOR EAX,EAX
004C7321  5B                        POP EBX
004C7322  5D                        POP EBP
004C7323  C2 18 00                  RET 0x18
switchD_004c72b3::caseD_6:
004C7326  8B 15 8C 61 7E 00         MOV EDX,dword ptr [0x007e618c]
004C732C  5F                        POP EDI
004C732D  89 10                     MOV dword ptr [EAX],EDX
004C732F  5E                        POP ESI
004C7330  33 C0                     XOR EAX,EAX
004C7332  5B                        POP EBX
004C7333  5D                        POP EBP
004C7334  C2 18 00                  RET 0x18
switchD_004c72b3::caseD_5:
004C7337  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
004C733D  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
004C7343  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C7349  8B BE 39 02 00 00         MOV EDI,dword ptr [ESI + 0x239]
004C734F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C7352  8B C8                     MOV ECX,EAX
004C7354  03 CF                     ADD ECX,EDI
004C7356  8D 3C 10                  LEA EDI,[EAX + EDX*0x1]
004C7359  8B 86 41 02 00 00         MOV EAX,dword ptr [ESI + 0x241]
004C735F  8B 0C 8D F0 29 7E 00      MOV ECX,dword ptr [ECX*0x4 + 0x7e29f0]
004C7366  0F AF C1                  IMUL EAX,ECX
004C7369  99                        CDQ
004C736A  F7 3C BD 7C 41 7E 00      IDIV dword ptr [EDI*0x4 + 0x7e417c]
004C7371  2B C8                     SUB ECX,EAX
004C7373  89 0B                     MOV dword ptr [EBX],ECX
004C7375  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C737B  8B BE 39 02 00 00         MOV EDI,dword ptr [ESI + 0x239]
004C7381  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004C7384  03 D7                     ADD EDX,EDI
004C7386  8B 14 95 F0 29 7E 00      MOV EDX,dword ptr [EDX*0x4 + 0x7e29f0]
004C738D  85 D2                     TEST EDX,EDX
004C738F  74 28                     JZ 0x004c73b9
004C7391  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C7396  F7 EA                     IMUL EDX
004C7398  C1 FA 05                  SAR EDX,0x5
004C739B  8B C2                     MOV EAX,EDX
004C739D  C1 E8 1F                  SHR EAX,0x1f
004C73A0  03 D0                     ADD EDX,EAX
004C73A2  3B CA                     CMP ECX,EDX
004C73A4  7D 13                     JGE 0x004c73b9
004C73A6  5F                        POP EDI
004C73A7  89 13                     MOV dword ptr [EBX],EDX
004C73A9  5E                        POP ESI
004C73AA  33 C0                     XOR EAX,EAX
004C73AC  5B                        POP EBX
004C73AD  5D                        POP EBP
004C73AE  C2 18 00                  RET 0x18
switchD_004c72b3::caseD_8:
004C73B1  8B 0D 44 63 7E 00         MOV ECX,dword ptr [0x007e6344]
004C73B7  89 08                     MOV dword ptr [EAX],ECX
switchD_004c72b3::caseD_3:
004C73B9  5F                        POP EDI
004C73BA  5E                        POP ESI
004C73BB  33 C0                     XOR EAX,EAX
004C73BD  5B                        POP EBX
004C73BE  5D                        POP EBP
004C73BF  C2 18 00                  RET 0x18
