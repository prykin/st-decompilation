FUN_004e4d60:
004E4D60  56                        PUSH ESI
004E4D61  8B F1                     MOV ESI,ECX
004E4D63  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004E4D69  85 C0                     TEST EAX,EAX
004E4D6B  0F 85 CF 00 00 00         JNZ 0x004e4e40
004E4D71  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004E4D77  83 F8 36                  CMP EAX,0x36
004E4D7A  74 09                     JZ 0x004e4d85
004E4D7C  83 F8 5D                  CMP EAX,0x5d
004E4D7F  0F 85 BB 00 00 00         JNZ 0x004e4e40
LAB_004e4d85:
004E4D85  8B 86 DC 04 00 00         MOV EAX,dword ptr [ESI + 0x4dc]
004E4D8B  85 C0                     TEST EAX,EAX
004E4D8D  74 18                     JZ 0x004e4da7
004E4D8F  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004E4D95  8B CE                     MOV ECX,ESI
004E4D97  50                        PUSH EAX
004E4D98  E8 D9 C9 F1 FF            CALL 0x00401776
004E4D9D  C7 86 DC 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4dc],0x0
LAB_004e4da7:
004E4DA7  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004E4DAA  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
004E4DB0  3B C8                     CMP ECX,EAX
004E4DB2  74 47                     JZ 0x004e4dfb
004E4DB4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E4DBA  8A D0                     MOV DL,AL
004E4DBC  57                        PUSH EDI
004E4DBD  52                        PUSH EDX
004E4DBE  E8 F4 FB F1 FF            CALL 0x004049b7
004E4DC3  8A C8                     MOV CL,AL
004E4DC5  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004E4DCB  81 E1 FF 00 00 00         AND ECX,0xff
004E4DD1  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
004E4DD4  03 CA                     ADD ECX,EDX
004E4DD6  8B C1                     MOV EAX,ECX
004E4DD8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E4DDE  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
004E4DE1  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004E4DE4  50                        PUSH EAX
004E4DE5  E8 CD FB F1 FF            CALL 0x004049b7
004E4DEA  25 FF 00 00 00            AND EAX,0xff
004E4DEF  8A 8C 07 84 19 7E 00      MOV CL,byte ptr [EDI + EAX*0x1 + 0x7e1984]
004E4DF6  5F                        POP EDI
004E4DF7  84 C9                     TEST CL,CL
004E4DF9  74 45                     JZ 0x004e4e40
LAB_004e4dfb:
004E4DFB  8B 8E 39 02 00 00         MOV ECX,dword ptr [ESI + 0x239]
004E4E01  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E4E04  8B 14 8D B0 8F 79 00      MOV EDX,dword ptr [ECX*0x4 + 0x798fb0]
004E4E0B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E4E11  52                        PUSH EDX
004E4E12  50                        PUSH EAX
004E4E13  E8 53 CA F1 FF            CALL 0x0040186b
004E4E18  8B 8E 39 02 00 00         MOV ECX,dword ptr [ESI + 0x239]
004E4E1E  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004E4E21  8B CE                     MOV ECX,ESI
004E4E23  8B 04 95 98 8F 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x798f98]
004E4E2A  50                        PUSH EAX
004E4E2B  89 86 D0 04 00 00         MOV dword ptr [ESI + 0x4d0],EAX
004E4E31  E8 FF 09 F2 FF            CALL 0x00405835
004E4E36  C7 86 DC 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4dc],0x1
LAB_004e4e40:
004E4E40  33 C0                     XOR EAX,EAX
004E4E42  5E                        POP ESI
004E4E43  C3                        RET
