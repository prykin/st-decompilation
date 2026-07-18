FUN_0062f7a0:
0062F7A0  56                        PUSH ESI
0062F7A1  57                        PUSH EDI
0062F7A2  8B F1                     MOV ESI,ECX
0062F7A4  33 FF                     XOR EDI,EDI
LAB_0062f7a6:
0062F7A6  57                        PUSH EDI
0062F7A7  8B CE                     MOV ECX,ESI
0062F7A9  E8 7A 4F DD FF            CALL 0x00404728
0062F7AE  47                        INC EDI
0062F7AF  83 FF 05                  CMP EDI,0x5
0062F7B2  7C F2                     JL 0x0062f7a6
0062F7B4  8B 86 D5 01 00 00         MOV EAX,dword ptr [ESI + 0x1d5]
0062F7BA  85 C0                     TEST EAX,EAX
0062F7BC  7D 14                     JGE 0x0062f7d2
0062F7BE  8B 8E D9 01 00 00         MOV ECX,dword ptr [ESI + 0x1d9]
0062F7C4  85 C9                     TEST ECX,ECX
0062F7C6  7D 0A                     JGE 0x0062f7d2
0062F7C8  8B 8E DD 01 00 00         MOV ECX,dword ptr [ESI + 0x1dd]
0062F7CE  85 C9                     TEST ECX,ECX
0062F7D0  7C 36                     JL 0x0062f808
LAB_0062f7d2:
0062F7D2  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0062F7D5  8B 96 DD 01 00 00         MOV EDX,dword ptr [ESI + 0x1dd]
0062F7DB  51                        PUSH ECX
0062F7DC  8B 8E D9 01 00 00         MOV ECX,dword ptr [ESI + 0x1d9]
0062F7E2  56                        PUSH ESI
0062F7E3  6A 01                     PUSH 0x1
0062F7E5  52                        PUSH EDX
0062F7E6  51                        PUSH ECX
0062F7E7  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0062F7ED  50                        PUSH EAX
0062F7EE  E8 CE 56 DD FF            CALL 0x00404ec1
0062F7F3  83 C8 FF                  OR EAX,0xffffffff
0062F7F6  89 86 D5 01 00 00         MOV dword ptr [ESI + 0x1d5],EAX
0062F7FC  89 86 D9 01 00 00         MOV dword ptr [ESI + 0x1d9],EAX
0062F802  89 86 DD 01 00 00         MOV dword ptr [ESI + 0x1dd],EAX
LAB_0062f808:
0062F808  5F                        POP EDI
0062F809  5E                        POP ESI
0062F80A  C3                        RET
