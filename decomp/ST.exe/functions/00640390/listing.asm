FUN_00640390:
00640390  55                        PUSH EBP
00640391  8B EC                     MOV EBP,ESP
00640393  56                        PUSH ESI
00640394  8B F1                     MOV ESI,ECX
00640396  8B 86 3A 03 00 00         MOV EAX,dword ptr [ESI + 0x33a]
0064039C  85 C0                     TEST EAX,EAX
0064039E  0F 8C C0 00 00 00         JL 0x00640464
006403A4  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006403AA  F6 81 E4 00 00 00 01      TEST byte ptr [ECX + 0xe4],0x1
006403B1  74 0B                     JZ 0x006403be
006403B3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006403B6  85 C9                     TEST ECX,ECX
006403B8  0F 84 A6 00 00 00         JZ 0x00640464
LAB_006403be:
006403BE  8B 96 3E 03 00 00         MOV EDX,dword ptr [ESI + 0x33e]
006403C4  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
006403CA  52                        PUSH EDX
006403CB  6A 00                     PUSH 0x0
006403CD  50                        PUSH EAX
006403CE  E8 9D 9E 0A 00            CALL 0x006ea270
006403D3  D9 86 32 03 00 00         FLD float ptr [ESI + 0x332]
006403D9  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
006403DF  0F BF 86 55 02 00 00      MOVSX EAX,word ptr [ESI + 0x255]
006403E6  51                        PUSH ECX
006403E7  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006403EA  8B 96 3A 03 00 00         MOV EDX,dword ptr [ESI + 0x33a]
006403F0  D9 1C 24                  FSTP float ptr [ESP]
006403F3  DB 45 08                  FILD dword ptr [EBP + 0x8]
006403F6  51                        PUSH ECX
006403F7  0F BF 8E 53 02 00 00      MOVSX ECX,word ptr [ESI + 0x253]
006403FE  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00640404  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00640407  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0064040D  D9 1C 24                  FSTP float ptr [ESP]
00640410  DB 45 08                  FILD dword ptr [EBP + 0x8]
00640413  51                        PUSH ECX
00640414  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0064041A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00640420  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00640426  D9 1C 24                  FSTP float ptr [ESP]
00640429  52                        PUSH EDX
0064042A  E8 31 A5 0A 00            CALL 0x006ea960
0064042F  8B 96 3E 03 00 00         MOV EDX,dword ptr [ESI + 0x33e]
00640435  8B 8E 42 03 00 00         MOV ECX,dword ptr [ESI + 0x342]
0064043B  42                        INC EDX
0064043C  8B C2                     MOV EAX,EDX
0064043E  89 96 3E 03 00 00         MOV dword ptr [ESI + 0x33e],EDX
00640444  3B C1                     CMP EAX,ECX
00640446  7C 1C                     JL 0x00640464
00640448  8B 86 3A 03 00 00         MOV EAX,dword ptr [ESI + 0x33a]
0064044E  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00640454  50                        PUSH EAX
00640455  E8 46 87 0A 00            CALL 0x006e8ba0
0064045A  C7 86 3A 03 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x33a],0xffffffff
LAB_00640464:
00640464  5E                        POP ESI
00640465  5D                        POP EBP
00640466  C2 04 00                  RET 0x4
