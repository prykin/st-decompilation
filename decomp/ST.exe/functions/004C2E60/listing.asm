FUN_004c2e60:
004C2E60  56                        PUSH ESI
004C2E61  8B F1                     MOV ESI,ECX
004C2E63  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004C2E69  83 F8 06                  CMP EAX,0x6
004C2E6C  0F 87 98 00 00 00         JA 0x004c2f0a
switchD_004c2e72::switchD:
004C2E72  FF 24 85 10 2F 4C 00      JMP dword ptr [EAX*0x4 + 0x4c2f10]
switchD_004c2e72::caseD_0:
004C2E79  83 BE 4D 02 00 00 FF      CMP dword ptr [ESI + 0x24d],-0x1
004C2E80  0F 84 84 00 00 00         JZ 0x004c2f0a
004C2E86  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C2E89  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
004C2E8F  3B C1                     CMP EAX,ECX
004C2E91  74 43                     JZ 0x004c2ed6
004C2E93  57                        PUSH EDI
004C2E94  51                        PUSH ECX
004C2E95  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C2E9B  E8 17 1B F4 FF            CALL 0x004049b7
004C2EA0  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004C2EA3  8A D0                     MOV DL,AL
004C2EA5  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C2EAB  81 E2 FF 00 00 00         AND EDX,0xff
004C2EB1  51                        PUSH ECX
004C2EB2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C2EB8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004C2EBB  03 C2                     ADD EAX,EDX
004C2EBD  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
004C2EC0  E8 F2 1A F4 FF            CALL 0x004049b7
004C2EC5  25 FF 00 00 00            AND EAX,0xff
004C2ECA  8A 8C 07 84 19 7E 00      MOV CL,byte ptr [EDI + EAX*0x1 + 0x7e1984]
004C2ED1  5F                        POP EDI
004C2ED2  84 C9                     TEST CL,CL
004C2ED4  74 34                     JZ 0x004c2f0a
LAB_004c2ed6:
004C2ED6  8B 96 35 02 00 00         MOV EDX,dword ptr [ESI + 0x235]
004C2EDC  8B 04 95 9C 4E 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x794e9c]
004C2EE3  85 C0                     TEST EAX,EAX
004C2EE5  74 23                     JZ 0x004c2f0a
004C2EE7  8B CE                     MOV ECX,ESI
004C2EE9  E8 5C EC F3 FF            CALL 0x00401b4a
004C2EEE  33 C0                     XOR EAX,EAX
004C2EF0  5E                        POP ESI
004C2EF1  C3                        RET
switchD_004c2e72::caseD_1:
004C2EF2  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004C2EF8  8B 0C 85 9C 4E 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x794e9c]
004C2EFF  85 C9                     TEST ECX,ECX
004C2F01  74 07                     JZ 0x004c2f0a
004C2F03  8B CE                     MOV ECX,ESI
004C2F05  E8 29 2B F4 FF            CALL 0x00405a33
switchD_004c2e72::caseD_3:
004C2F0A  33 C0                     XOR EAX,EAX
004C2F0C  5E                        POP ESI
004C2F0D  C3                        RET
