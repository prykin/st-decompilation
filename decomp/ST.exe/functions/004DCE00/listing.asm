FUN_004dce00:
004DCE00  55                        PUSH EBP
004DCE01  8B EC                     MOV EBP,ESP
004DCE03  81 EC 04 01 00 00         SUB ESP,0x104
004DCE09  56                        PUSH ESI
004DCE0A  8B F1                     MOV ESI,ECX
004DCE0C  8B 86 FF 05 00 00         MOV EAX,dword ptr [ESI + 0x5ff]
004DCE12  85 C0                     TEST EAX,EAX
004DCE14  75 57                     JNZ 0x004dce6d
004DCE16  6A 40                     PUSH 0x40
004DCE18  E8 13 17 25 00            CALL 0x0072e530
004DCE1D  83 C4 04                  ADD ESP,0x4
004DCE20  85 C0                     TEST EAX,EAX
004DCE22  74 09                     JZ 0x004dce2d
004DCE24  8B C8                     MOV ECX,EAX
004DCE26  E8 EB 44 F2 FF            CALL 0x00401316
004DCE2B  EB 02                     JMP 0x004dce2f
LAB_004dce2d:
004DCE2D  33 C0                     XOR EAX,EAX
LAB_004dce2f:
004DCE2F  6A 11                     PUSH 0x11
004DCE31  68 8C 00 00 00            PUSH 0x8c
004DCE36  68 B4 00 00 00            PUSH 0xb4
004DCE3B  89 86 FF 05 00 00         MOV dword ptr [ESI + 0x5ff],EAX
004DCE41  8B 0D CC 73 80 00         MOV ECX,dword ptr [0x008073cc]
004DCE47  6A 00                     PUSH 0x0
004DCE49  6A 45                     PUSH 0x45
004DCE4B  6A 5A                     PUSH 0x5a
004DCE4D  51                        PUSH ECX
004DCE4E  8B C8                     MOV ECX,EAX
004DCE50  E8 26 85 F2 FF            CALL 0x0040537b
004DCE55  85 C0                     TEST EAX,EAX
004DCE57  74 14                     JZ 0x004dce6d
004DCE59  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004DCE5F  6A 58                     PUSH 0x58
004DCE61  68 4C F6 7B 00            PUSH 0x7bf64c
004DCE66  52                        PUSH EDX
004DCE67  50                        PUSH EAX
004DCE68  E8 D3 8F 1C 00            CALL 0x006a5e40
LAB_004dce6d:
004DCE6D  83 BE 45 02 00 00 05      CMP dword ptr [ESI + 0x245],0x5
004DCE74  74 0C                     JZ 0x004dce82
004DCE76  C7 86 D0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d0],0x0
004DCE80  EB 0A                     JMP 0x004dce8c
LAB_004dce82:
004DCE82  C7 86 D0 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d0],0x1
LAB_004dce8c:
004DCE8C  83 BE D0 04 00 00 01      CMP dword ptr [ESI + 0x4d0],0x1
004DCE93  0F 85 43 01 00 00         JNZ 0x004dcfdc
004DCE99  68 40 F6 7B 00            PUSH 0x7bf640
004DCE9E  8D 85 FC FE FF FF         LEA EAX,[EBP + 0xfffffefc]
004DCEA4  68 CC 4C 7A 00            PUSH 0x7a4ccc
004DCEA9  50                        PUSH EAX
004DCEAA  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004DCEB0  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
004DCEB6  83 C4 0C                  ADD ESP,0xc
004DCEB9  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
004DCEBF  6A 1D                     PUSH 0x1d
004DCEC1  51                        PUSH ECX
004DCEC2  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004DCEC8  52                        PUSH EDX
004DCEC9  6A 0E                     PUSH 0xe
004DCECB  E8 B3 72 F2 FF            CALL 0x00404183
004DCED0  85 C0                     TEST EAX,EAX
004DCED2  74 14                     JZ 0x004dcee8
004DCED4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004DCEDA  6A 61                     PUSH 0x61
004DCEDC  68 4C F6 7B 00            PUSH 0x7bf64c
004DCEE1  51                        PUSH ECX
004DCEE2  50                        PUSH EAX
004DCEE3  E8 58 8F 1C 00            CALL 0x006a5e40
LAB_004dcee8:
004DCEE8  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004DCEEE  E8 9D 5B F2 FF            CALL 0x00402a90
004DCEF3  6A 0A                     PUSH 0xa
004DCEF5  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004DCEFB  E8 CC 83 F2 FF            CALL 0x004052cc
004DCF00  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004DCF06  50                        PUSH EAX
004DCF07  E8 C0 83 F2 FF            CALL 0x004052cc
004DCF0C  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004DCF12  50                        PUSH EAX
004DCF13  E8 28 D4 20 00            CALL 0x006ea340
004DCF18  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004DCF1E  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004DCF24  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004DCF2A  50                        PUSH EAX
004DCF2B  6A 0E                     PUSH 0xe
004DCF2D  E8 0E 83 F2 FF            CALL 0x00405240
004DCF32  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
004DCF36  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004DCF39  C7 86 D4 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d4],0x0
004DCF43  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004DCF46  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DCF4C  51                        PUSH ECX
004DCF4D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004DCF53  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DCF59  C7 86 DC 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4dc],0x1
004DCF63  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
004DCF67  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004DCF6D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004DCF70  89 96 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EDX
004DCF76  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
004DCF7A  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
004DCF80  D9 1C 24                  FSTP float ptr [ESP]
004DCF83  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004DCF86  51                        PUSH ECX
004DCF87  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004DCF8A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004DCF90  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004DCF96  D9 1C 24                  FSTP float ptr [ESP]
004DCF99  DB 45 FC                  FILD dword ptr [EBP + -0x4]
004DCF9C  51                        PUSH ECX
004DCF9D  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004DCFA3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
004DCFA9  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
004DCFAF  D9 1C 24                  FSTP float ptr [ESP]
004DCFB2  E8 22 76 F2 FF            CALL 0x004045d9
004DCFB7  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004DCFBD  6A 01                     PUSH 0x1
004DCFBF  E8 BE 59 F2 FF            CALL 0x00402982
004DCFC4  8B 06                     MOV EAX,dword ptr [ESI]
004DCFC6  68 F4 03 00 00            PUSH 0x3f4
004DCFCB  6A 03                     PUSH 0x3
004DCFCD  8B CE                     MOV ECX,ESI
004DCFCF  FF 90 90 00 00 00         CALL dword ptr [EAX + 0x90]
004DCFD5  33 C0                     XOR EAX,EAX
004DCFD7  5E                        POP ESI
004DCFD8  8B E5                     MOV ESP,EBP
004DCFDA  5D                        POP EBP
004DCFDB  C3                        RET
LAB_004dcfdc:
004DCFDC  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004DCFE2  E8 28 6D F2 FF            CALL 0x00403d0f
004DCFE7  33 C0                     XOR EAX,EAX
004DCFE9  5E                        POP ESI
004DCFEA  8B E5                     MOV ESP,EBP
004DCFEC  5D                        POP EBP
004DCFED  C3                        RET
