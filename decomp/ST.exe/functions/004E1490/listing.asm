FUN_004e1490:
004E1490  56                        PUSH ESI
004E1491  8B F1                     MOV ESI,ECX
004E1493  57                        PUSH EDI
004E1494  33 FF                     XOR EDI,EDI
004E1496  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E1499  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
004E149F  3B C1                     CMP EAX,ECX
004E14A1  74 43                     JZ 0x004e14e6
004E14A3  53                        PUSH EBX
004E14A4  51                        PUSH ECX
004E14A5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E14AB  E8 07 35 F2 FF            CALL 0x004049b7
004E14B0  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004E14B3  8A D0                     MOV DL,AL
004E14B5  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004E14BB  81 E2 FF 00 00 00         AND EDX,0xff
004E14C1  51                        PUSH ECX
004E14C2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E14C8  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004E14CB  03 C2                     ADD EAX,EDX
004E14CD  8D 1C 40                  LEA EBX,[EAX + EAX*0x2]
004E14D0  E8 E2 34 F2 FF            CALL 0x004049b7
004E14D5  25 FF 00 00 00            AND EAX,0xff
004E14DA  8A 8C 03 84 19 7E 00      MOV CL,byte ptr [EBX + EAX*0x1 + 0x7e1984]
004E14E1  5B                        POP EBX
004E14E2  84 C9                     TEST CL,CL
004E14E4  74 70                     JZ 0x004e1556
LAB_004e14e6:
004E14E6  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E14EC  83 C0 C8                  ADD EAX,-0x38
004E14EF  83 F8 28                  CMP EAX,0x28
004E14F2  77 62                     JA 0x004e1556
004E14F4  33 D2                     XOR EDX,EDX
004E14F6  8A 90 68 15 4E 00         MOV DL,byte ptr [EAX + 0x4e1568]
switchD_004e14fc::switchD:
004E14FC  FF 24 95 5C 15 4E 00      JMP dword ptr [EDX*0x4 + 0x4e155c]
switchD_004e14fc::caseD_3b:
004E1503  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004E1509  85 C0                     TEST EAX,EAX
004E150B  75 49                     JNZ 0x004e1556
004E150D  83 BE D8 04 00 00 FF      CMP dword ptr [ESI + 0x4d8],-0x1
004E1514  75 40                     JNZ 0x004e1556
004E1516  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004E151C  85 C0                     TEST EAX,EAX
004E151E  75 36                     JNZ 0x004e1556
004E1520  BF 01 00 00 00            MOV EDI,0x1
004E1525  8B C7                     MOV EAX,EDI
004E1527  5F                        POP EDI
004E1528  5E                        POP ESI
004E1529  C3                        RET
switchD_004e14fc::caseD_38:
004E152A  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004E1530  85 C0                     TEST EAX,EAX
004E1532  75 22                     JNZ 0x004e1556
004E1534  83 BE D8 04 00 00 FF      CMP dword ptr [ESI + 0x4d8],-0x1
004E153B  75 19                     JNZ 0x004e1556
004E153D  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004E1543  85 C0                     TEST EAX,EAX
004E1545  74 0F                     JZ 0x004e1556
004E1547  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004E154D  85 C0                     TEST EAX,EAX
004E154F  75 05                     JNZ 0x004e1556
004E1551  BF 01 00 00 00            MOV EDI,0x1
switchD_004e14fc::caseD_3a:
004E1556  8B C7                     MOV EAX,EDI
004E1558  5F                        POP EDI
004E1559  5E                        POP ESI
004E155A  C3                        RET
