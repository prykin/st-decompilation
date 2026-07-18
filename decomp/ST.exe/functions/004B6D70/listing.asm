FUN_004b6d70:
004B6D70  56                        PUSH ESI
004B6D71  8B F1                     MOV ESI,ECX
004B6D73  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004B6D76  8B 8E 3D 02 00 00         MOV ECX,dword ptr [ESI + 0x23d]
004B6D7C  3B C1                     CMP EAX,ECX
004B6D7E  74 43                     JZ 0x004b6dc3
004B6D80  57                        PUSH EDI
004B6D81  51                        PUSH ECX
004B6D82  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B6D88  E8 2A DC F4 FF            CALL 0x004049b7
004B6D8D  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004B6D90  8A D0                     MOV DL,AL
004B6D92  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004B6D98  81 E2 FF 00 00 00         AND EDX,0xff
004B6D9E  51                        PUSH ECX
004B6D9F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B6DA5  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004B6DA8  03 C2                     ADD EAX,EDX
004B6DAA  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
004B6DAD  E8 05 DC F4 FF            CALL 0x004049b7
004B6DB2  25 FF 00 00 00            AND EAX,0xff
004B6DB7  8A 8C 07 84 19 7E 00      MOV CL,byte ptr [EDI + EAX*0x1 + 0x7e1984]
004B6DBE  5F                        POP EDI
004B6DBF  84 C9                     TEST CL,CL
004B6DC1  74 31                     JZ 0x004b6df4
LAB_004b6dc3:
004B6DC3  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004B6DC6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B6DCC  6A 28                     PUSH 0x28
004B6DCE  52                        PUSH EDX
004B6DCF  E8 5C AE F4 FF            CALL 0x00401c30
004B6DD4  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
004B6DD7  33 C9                     XOR ECX,ECX
004B6DD9  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004B6DDF  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004B6DE2  3B C1                     CMP EAX,ECX
004B6DE4  75 0E                     JNZ 0x004b6df4
004B6DE6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B6DEC  8A D0                     MOV DL,AL
004B6DEE  52                        PUSH EDX
004B6DEF  E8 99 DD F4 FF            CALL 0x00404b8d
LAB_004b6df4:
004B6DF4  33 C0                     XOR EAX,EAX
004B6DF6  5E                        POP ESI
004B6DF7  C3                        RET
