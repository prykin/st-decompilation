FUN_00749d09:
00749D09  55                        PUSH EBP
00749D0A  8B EC                     MOV EBP,ESP
00749D0C  51                        PUSH ECX
00749D0D  51                        PUSH ECX
00749D0E  56                        PUSH ESI
00749D0F  8B F1                     MOV ESI,ECX
00749D11  57                        PUSH EDI
00749D12  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
00749D15  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00749D18  8B 46 54                  MOV EAX,dword ptr [ESI + 0x54]
00749D1B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00749D1E  8B 06                     MOV EAX,dword ptr [ESI]
00749D20  FF 50 48                  CALL dword ptr [EAX + 0x48]
LAB_00749d23:
00749D23  68 10 27 00 00            PUSH 0x2710
00749D28  8D 45 F8                  LEA EAX,[EBP + -0x8]
00749D2B  6A 00                     PUSH 0x0
00749D2D  50                        PUSH EAX
00749D2E  6A 02                     PUSH 0x2
00749D30  FF 15 DC BC 85 00         CALL dword ptr [0x0085bcdc]
00749D36  8B F8                     MOV EDI,EAX
00749D38  81 FF 02 01 00 00         CMP EDI,0x102
00749D3E  74 E3                     JZ 0x00749d23
00749D40  8B 06                     MOV EAX,dword ptr [ESI]
00749D42  8B CE                     MOV ECX,ESI
00749D44  FF 50 4C                  CALL dword ptr [EAX + 0x4c]
00749D47  85 FF                     TEST EDI,EDI
00749D49  75 07                     JNZ 0x00749d52
00749D4B  B8 23 02 04 80            MOV EAX,0x80040223
00749D50  EB 09                     JMP 0x00749d5b
LAB_00749d52:
00749D52  8B CE                     MOV ECX,ESI
00749D54  E8 1E 05 00 00            CALL 0x0074a277
00749D59  33 C0                     XOR EAX,EAX
LAB_00749d5b:
00749D5B  5F                        POP EDI
00749D5C  5E                        POP ESI
00749D5D  C9                        LEAVE
00749D5E  C3                        RET
