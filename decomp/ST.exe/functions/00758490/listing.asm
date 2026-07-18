FUN_00758490:
00758490  55                        PUSH EBP
00758491  8B EC                     MOV EBP,ESP
00758493  53                        PUSH EBX
00758494  56                        PUSH ESI
00758495  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00758498  33 DB                     XOR EBX,EBX
0075849A  57                        PUSH EDI
0075849B  8B 86 A6 01 00 00         MOV EAX,dword ptr [ESI + 0x1a6]
007584A1  39 58 50                  CMP dword ptr [EAX + 0x50],EBX
007584A4  74 18                     JZ 0x007584be
007584A6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
007584AC  68 B3 00 00 00            PUSH 0xb3
007584B1  68 B0 2D 7F 00            PUSH 0x7f2db0
007584B6  51                        PUSH ECX
007584B7  6A 3C                     PUSH 0x3c
007584B9  E8 82 D9 F4 FF            CALL 0x006a5e40
LAB_007584be:
007584BE  BA 14 FF FF FF            MOV EDX,0xffffff14
007584C3  8D 8E EC 00 00 00         LEA ECX,[ESI + 0xec]
007584C9  2B D6                     SUB EDX,ESI
007584CB  B0 05                     MOV AL,0x5
LAB_007584cd:
007584CD  88 59 F0                  MOV byte ptr [ECX + -0x10],BL
007584D0  C6 01 01                  MOV byte ptr [ECX],0x1
007584D3  88 41 10                  MOV byte ptr [ECX + 0x10],AL
007584D6  41                        INC ECX
007584D7  8D 3C 0A                  LEA EDI,[EDX + ECX*0x1]
007584DA  83 FF 10                  CMP EDI,0x10
007584DD  7C EE                     JL 0x007584cd
007584DF  8B 96 A6 01 00 00         MOV EDX,dword ptr [ESI + 0x1a6]
007584E5  B8 01 00 00 00            MOV EAX,0x1
007584EA  89 9E 0C 01 00 00         MOV dword ptr [ESI + 0x10c],EBX
007584F0  89 5E 20                  MOV dword ptr [ESI + 0x20],EBX
007584F3  89 9E 1E 01 00 00         MOV dword ptr [ESI + 0x11e],EBX
007584F9  89 9E 10 01 00 00         MOV dword ptr [ESI + 0x110],EBX
007584FF  88 9E 14 01 00 00         MOV byte ptr [ESI + 0x114],BL
00758505  66 89 86 15 01 00 00      MOV word ptr [ESI + 0x115],AX
0075850C  66 89 86 17 01 00 00      MOV word ptr [ESI + 0x117],AX
00758513  89 9E 19 01 00 00         MOV dword ptr [ESI + 0x119],EBX
00758519  88 9E 1D 01 00 00         MOV byte ptr [ESI + 0x11d],BL
0075851F  5F                        POP EDI
00758520  5E                        POP ESI
00758521  89 42 50                  MOV dword ptr [EDX + 0x50],EAX
00758524  5B                        POP EBX
00758525  5D                        POP EBP
00758526  C2 04 00                  RET 0x4
