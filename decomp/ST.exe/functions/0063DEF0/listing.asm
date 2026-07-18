STTmMineC::LoadImagNuclear:
0063DEF0  55                        PUSH EBP
0063DEF1  8B EC                     MOV EBP,ESP
0063DEF3  83 EC 50                  SUB ESP,0x50
0063DEF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0063DEFB  56                        PUSH ESI
0063DEFC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0063DEFF  57                        PUSH EDI
0063DF00  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0063DF03  8D 4D B0                  LEA ECX,[EBP + -0x50]
0063DF06  6A 00                     PUSH 0x0
0063DF08  52                        PUSH EDX
0063DF09  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0063DF10  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0063DF13  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0063DF19  E8 D2 F8 0E 00            CALL 0x0072d7f0
0063DF1E  8B F0                     MOV ESI,EAX
0063DF20  83 C4 08                  ADD ESP,0x8
0063DF23  85 F6                     TEST ESI,ESI
0063DF25  0F 85 69 01 00 00         JNZ 0x0063e094
0063DF2B  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0063DF2E  83 BE 3A 03 00 00 FF      CMP dword ptr [ESI + 0x33a],-0x1
0063DF35  0F 85 06 01 00 00         JNZ 0x0063e041
0063DF3B  A1 74 67 80 00            MOV EAX,[0x00806774]
0063DF40  6A 00                     PUSH 0x0
0063DF42  6A 00                     PUSH 0x0
0063DF44  6A 01                     PUSH 0x1
0063DF46  6A 00                     PUSH 0x0
0063DF48  6A FF                     PUSH -0x1
0063DF4A  68 50 1F 7D 00            PUSH 0x7d1f50
0063DF4F  6A 1D                     PUSH 0x1d
0063DF51  50                        PUSH EAX
0063DF52  E8 99 BB 0C 00            CALL 0x00709af0
0063DF57  83 C4 20                  ADD ESP,0x20
0063DF5A  8B F8                     MOV EDI,EAX
0063DF5C  8D 45 FC                  LEA EAX,[EBP + -0x4]
0063DF5F  8B 4F 0D                  MOV ECX,dword ptr [EDI + 0xd]
0063DF62  8B 57 09                  MOV EDX,dword ptr [EDI + 0x9]
0063DF65  6A 00                     PUSH 0x0
0063DF67  68 F0 00 00 00            PUSH 0xf0
0063DF6C  6A 6F                     PUSH 0x6f
0063DF6E  51                        PUSH ECX
0063DF6F  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063DF75  52                        PUSH EDX
0063DF76  6A 00                     PUSH 0x0
0063DF78  6A 01                     PUSH 0x1
0063DF7A  50                        PUSH EAX
0063DF7B  E8 E0 A6 0A 00            CALL 0x006e8660
0063DF80  8B 4F 21                  MOV ECX,dword ptr [EDI + 0x21]
0063DF83  8B 17                     MOV EDX,dword ptr [EDI]
0063DF85  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063DF88  6A 01                     PUSH 0x1
0063DF8A  51                        PUSH ECX
0063DF8B  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063DF91  52                        PUSH EDX
0063DF92  6A 00                     PUSH 0x0
0063DF94  50                        PUSH EAX
0063DF95  E8 46 B9 0A 00            CALL 0x006e98e0
0063DF9A  8B 8E 3E 03 00 00         MOV ECX,dword ptr [ESI + 0x33e]
0063DFA0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063DFA3  51                        PUSH ECX
0063DFA4  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063DFAA  6A 00                     PUSH 0x0
0063DFAC  52                        PUSH EDX
0063DFAD  E8 BE C2 0A 00            CALL 0x006ea270
0063DFB2  DB 86 6E 02 00 00         FILD dword ptr [ESI + 0x26e]
0063DFB8  51                        PUSH ECX
0063DFB9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063DFBC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063DFC2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063DFC8  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063DFCE  D9 1C 24                  FSTP float ptr [ESP]
0063DFD1  DB 86 6A 02 00 00         FILD dword ptr [ESI + 0x26a]
0063DFD7  51                        PUSH ECX
0063DFD8  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063DFDE  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063DFE4  D9 1C 24                  FSTP float ptr [ESP]
0063DFE7  DB 86 66 02 00 00         FILD dword ptr [ESI + 0x266]
0063DFED  51                        PUSH ECX
0063DFEE  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063DFF4  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063DFFA  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063E000  D9 1C 24                  FSTP float ptr [ESP]
0063E003  50                        PUSH EAX
0063E004  E8 57 C9 0A 00            CALL 0x006ea960
0063E009  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0063E00C  6A 00                     PUSH 0x0
0063E00E  51                        PUSH ECX
0063E00F  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063E015  E8 86 CA 0A 00            CALL 0x006eaaa0
0063E01A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063E01D  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063E023  52                        PUSH EDX
0063E024  E8 37 CB 0A 00            CALL 0x006eab60
0063E029  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063E02C  C6 86 46 03 00 00 00      MOV byte ptr [ESI + 0x346],0x0
0063E033  89 86 3A 03 00 00         MOV dword ptr [ESI + 0x33a],EAX
0063E039  8B 0F                     MOV ECX,dword ptr [EDI]
0063E03B  89 8E 42 03 00 00         MOV dword ptr [ESI + 0x342],ECX
LAB_0063e041:
0063E041  83 BE 53 03 00 00 FF      CMP dword ptr [ESI + 0x353],-0x1
0063E048  75 37                     JNZ 0x0063e081
0063E04A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063E04D  85 C0                     TEST EAX,EAX
0063E04F  74 30                     JZ 0x0063e081
0063E051  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
0063E057  6A 00                     PUSH 0x0
0063E059  6A 00                     PUSH 0x0
0063E05B  6A 01                     PUSH 0x1
0063E05D  6A 00                     PUSH 0x0
0063E05F  6A FF                     PUSH -0x1
0063E061  68 5C 1F 7D 00            PUSH 0x7d1f5c
0063E066  6A 1D                     PUSH 0x1d
0063E068  52                        PUSH EDX
0063E069  E8 82 BA 0C 00            CALL 0x00709af0
0063E06E  83 C4 20                  ADD ESP,0x20
0063E071  89 86 4B 03 00 00         MOV dword ptr [ESI + 0x34b],EAX
0063E077  C7 86 4F 03 00 00 00 00 00 00  MOV dword ptr [ESI + 0x34f],0x0
LAB_0063e081:
0063E081  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0063E084  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0063E089  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0063E08C  5F                        POP EDI
0063E08D  5E                        POP ESI
0063E08E  8B E5                     MOV ESP,EBP
0063E090  5D                        POP EBP
0063E091  C2 04 00                  RET 0x4
LAB_0063e094:
0063E094  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0063E097  68 DC 20 7D 00            PUSH 0x7d20dc
0063E09C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0063E0A1  56                        PUSH ESI
0063E0A2  6A 00                     PUSH 0x0
0063E0A4  68 D3 05 00 00            PUSH 0x5d3
0063E0A9  68 9C 20 7D 00            PUSH 0x7d209c
0063E0AE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0063E0B4  E8 17 F4 06 00            CALL 0x006ad4d0
0063E0B9  83 C4 18                  ADD ESP,0x18
0063E0BC  85 C0                     TEST EAX,EAX
0063E0BE  74 01                     JZ 0x0063e0c1
0063E0C0  CC                        INT3
LAB_0063e0c1:
0063E0C1  68 D5 05 00 00            PUSH 0x5d5
0063E0C6  68 9C 20 7D 00            PUSH 0x7d209c
0063E0CB  6A 00                     PUSH 0x0
0063E0CD  56                        PUSH ESI
0063E0CE  E8 6D 7D 06 00            CALL 0x006a5e40
0063E0D3  5F                        POP EDI
0063E0D4  B8 FF FF 00 00            MOV EAX,0xffff
0063E0D9  5E                        POP ESI
0063E0DA  8B E5                     MOV ESP,EBP
0063E0DC  5D                        POP EBP
0063E0DD  C2 04 00                  RET 0x4
