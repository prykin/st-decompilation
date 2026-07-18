FUN_0074a39b:
0074A39B  55                        PUSH EBP
0074A39C  8B EC                     MOV EBP,ESP
0074A39E  51                        PUSH ECX
0074A39F  53                        PUSH EBX
0074A3A0  56                        PUSH ESI
0074A3A1  8B F1                     MOV ESI,ECX
0074A3A3  57                        PUSH EDI
0074A3A4  8B 3D 8C BB 85 00         MOV EDI,dword ptr [0x0085bb8c]
0074A3AA  8D 5E 7C                  LEA EBX,[ESI + 0x7c]
0074A3AD  53                        PUSH EBX
0074A3AE  FF D7                     CALL EDI
0074A3B0  8B 46 78                  MOV EAX,dword ptr [ESI + 0x78]
0074A3B3  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074A3B6  05 98 00 00 00            ADD EAX,0x98
0074A3BB  C7 86 B4 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xb4],0x1
0074A3C5  50                        PUSH EAX
0074A3C6  E8 56 E3 FF FF            CALL 0x00748721
0074A3CB  85 C0                     TEST EAX,EAX
0074A3CD  74 1B                     JZ 0x0074a3ea
0074A3CF  53                        PUSH EBX
0074A3D0  C7 86 B4 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xb4],0x0
0074A3DA  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A3E0  B8 05 40 00 80            MOV EAX,0x80004005
0074A3E5  E9 E0 00 00 00            JMP 0x0074a4ca
LAB_0074a3ea:
0074A3EA  8B 4E 78                  MOV ECX,dword ptr [ESI + 0x78]
0074A3ED  8B 81 CC 00 00 00         MOV EAX,dword ptr [ECX + 0xcc]
0074A3F3  85 C0                     TEST EAX,EAX
0074A3F5  74 06                     JZ 0x0074a3fd
0074A3F7  8B 11                     MOV EDX,dword ptr [ECX]
0074A3F9  50                        PUSH EAX
0074A3FA  FF 52 24                  CALL dword ptr [EDX + 0x24]
LAB_0074a3fd:
0074A3FD  8D 86 94 00 00 00         LEA EAX,[ESI + 0x94]
0074A403  50                        PUSH EAX
0074A404  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0074A407  FF D7                     CALL EDI
0074A409  33 FF                     XOR EDI,EDI
0074A40B  39 7E 6C                  CMP dword ptr [ESI + 0x6c],EDI
0074A40E  0F 85 94 00 00 00         JNZ 0x0074a4a8
0074A414  39 7E 70                  CMP dword ptr [ESI + 0x70],EDI
0074A417  0F 85 8B 00 00 00         JNZ 0x0074a4a8
0074A41D  39 7E 60                  CMP dword ptr [ESI + 0x60],EDI
0074A420  0F 85 82 00 00 00         JNZ 0x0074a4a8
0074A426  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
0074A429  3B CF                     CMP ECX,EDI
0074A42B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0074A42E  74 06                     JZ 0x0074a436
0074A430  57                        PUSH EDI
0074A431  E8 51 4B 00 00            CALL 0x0074ef87
LAB_0074a436:
0074A436  83 7E 64 01               CMP dword ptr [ESI + 0x64],0x1
0074A43A  75 27                     JNZ 0x0074a463
0074A43C  8B 06                     MOV EAX,dword ptr [ESI]
0074A43E  57                        PUSH EDI
0074A43F  8B CE                     MOV ECX,ESI
0074A441  FF 50 54                  CALL dword ptr [EAX + 0x54]
0074A444  85 C0                     TEST EAX,EAX
0074A446  75 1B                     JNZ 0x0074a463
0074A448  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0074A44B  89 86 B4 00 00 00         MOV dword ptr [ESI + 0xb4],EAX
0074A451  8B 35 90 BB 85 00         MOV ESI,dword ptr [0x0085bb90]
0074A457  FF D6                     CALL ESI
0074A459  53                        PUSH EBX
0074A45A  FF D6                     CALL ESI
0074A45C  B8 2B 02 04 80            MOV EAX,0x8004022b
0074A461  EB 67                     JMP 0x0074a4ca
LAB_0074a463:
0074A463  8B 46 78                  MOV EAX,dword ptr [ESI + 0x78]
0074A466  57                        PUSH EDI
0074A467  8B 88 C0 00 00 00         MOV ECX,dword ptr [EAX + 0xc0]
0074A46D  89 8E B8 00 00 00         MOV dword ptr [ESI + 0xb8],ECX
0074A473  8B 80 C4 00 00 00         MOV EAX,dword ptr [EAX + 0xc4]
0074A479  89 7E 6C                  MOV dword ptr [ESI + 0x6c],EDI
0074A47C  89 86 BC 00 00 00         MOV dword ptr [ESI + 0xbc],EAX
0074A482  8B 07                     MOV EAX,dword ptr [EDI]
0074A484  FF 50 04                  CALL dword ptr [EAX + 0x4]
0074A487  83 7E 64 00               CMP dword ptr [ESI + 0x64],0x0
0074A48B  75 09                     JNZ 0x0074a496
0074A48D  6A 01                     PUSH 0x1
0074A48F  8B CE                     MOV ECX,ESI
0074A491  E8 87 03 00 00            CALL 0x0074a81d
LAB_0074a496:
0074A496  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0074A499  8B 35 90 BB 85 00         MOV ESI,dword ptr [0x0085bb90]
0074A49F  FF D6                     CALL ESI
0074A4A1  53                        PUSH EBX
0074A4A2  FF D6                     CALL ESI
0074A4A4  33 C0                     XOR EAX,EAX
0074A4A6  EB 22                     JMP 0x0074a4ca
LAB_0074a4a8:
0074A4A8  FF 76 5C                  PUSH dword ptr [ESI + 0x5c]
0074A4AB  FF 15 80 BB 85 00         CALL dword ptr [0x0085bb80]
0074A4B1  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
0074A4B4  89 BE B4 00 00 00         MOV dword ptr [ESI + 0xb4],EDI
0074A4BA  8B 35 90 BB 85 00         MOV ESI,dword ptr [0x0085bb90]
0074A4C0  FF D6                     CALL ESI
0074A4C2  53                        PUSH EBX
0074A4C3  FF D6                     CALL ESI
0074A4C5  B8 FF FF 00 80            MOV EAX,0x8000ffff
LAB_0074a4ca:
0074A4CA  5F                        POP EDI
0074A4CB  5E                        POP ESI
0074A4CC  5B                        POP EBX
0074A4CD  C9                        LEAVE
0074A4CE  C2 04 00                  RET 0x4
