FUN_004e2040:
004E2040  55                        PUSH EBP
004E2041  8B EC                     MOV EBP,ESP
004E2043  51                        PUSH ECX
004E2044  53                        PUSH EBX
004E2045  56                        PUSH ESI
004E2046  57                        PUSH EDI
004E2047  8B D9                     MOV EBX,ECX
004E2049  33 FF                     XOR EDI,EDI
004E204B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
004E204E  8D B3 E4 04 00 00         LEA ESI,[EBX + 0x4e4]
LAB_004e2054:
004E2054  57                        PUSH EDI
004E2055  8B CB                     MOV ECX,EBX
004E2057  E8 41 2A F2 FF            CALL 0x00404a9d
004E205C  85 C0                     TEST EAX,EAX
004E205E  74 1A                     JZ 0x004e207a
004E2060  8B 0E                     MOV ECX,dword ptr [ESI]
004E2062  8B 56 FC                  MOV EDX,dword ptr [ESI + -0x4]
004E2065  8B C1                     MOV EAX,ECX
004E2067  2B C2                     SUB EAX,EDX
004E2069  8B 56 F4                  MOV EDX,dword ptr [ESI + -0xc]
004E206C  0F AF 04 95 5C 08 7E 00   IMUL EAX,dword ptr [EDX*0x4 + 0x7e085c]
004E2074  99                        CDQ
004E2075  F7 F9                     IDIV ECX
004E2077  01 45 FC                  ADD dword ptr [EBP + -0x4],EAX
LAB_004e207a:
004E207A  47                        INC EDI
004E207B  83 C6 28                  ADD ESI,0x28
004E207E  83 FF 02                  CMP EDI,0x2
004E2081  7C D1                     JL 0x004e2054
004E2083  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E2086  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
004E2089  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
004E208C  6A 00                     PUSH 0x0
004E208E  50                        PUSH EAX
004E208F  6A 00                     PUSH 0x0
004E2091  6A 00                     PUSH 0x0
004E2093  51                        PUSH ECX
004E2094  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E209A  6A 04                     PUSH 0x4
004E209C  52                        PUSH EDX
004E209D  E8 D9 28 F2 FF            CALL 0x0040497b
004E20A2  5F                        POP EDI
004E20A3  5E                        POP ESI
004E20A4  33 C0                     XOR EAX,EAX
004E20A6  5B                        POP EBX
004E20A7  8B E5                     MOV ESP,EBP
004E20A9  5D                        POP EBP
004E20AA  C3                        RET
