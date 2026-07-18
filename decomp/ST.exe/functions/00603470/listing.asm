FUN_00603470:
00603470  55                        PUSH EBP
00603471  8B EC                     MOV EBP,ESP
00603473  56                        PUSH ESI
00603474  8B F1                     MOV ESI,ECX
00603476  57                        PUSH EDI
00603477  8B 06                     MOV EAX,dword ptr [ESI]
00603479  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0060347C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0060347F  89 07                     MOV dword ptr [EDI],EAX
00603481  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00603484  51                        PUSH ECX
00603485  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0060348B  E8 27 15 E0 FF            CALL 0x004049b7
00603490  88 47 04                  MOV byte ptr [EDI + 0x4],AL
00603493  C6 47 05 04               MOV byte ptr [EDI + 0x5],0x4
00603497  8A 96 1D 02 00 00         MOV DL,byte ptr [ESI + 0x21d]
0060349D  C6 47 06 00               MOV byte ptr [EDI + 0x6],0x0
006034A1  88 57 08                  MOV byte ptr [EDI + 0x8],DL
006034A4  8B 86 6E 03 00 00         MOV EAX,dword ptr [ESI + 0x36e]
006034AA  85 C0                     TEST EAX,EAX
006034AC  74 04                     JZ 0x006034b2
006034AE  C6 47 07 01               MOV byte ptr [EDI + 0x7],0x1
LAB_006034b2:
006034B2  5F                        POP EDI
006034B3  5E                        POP ESI
006034B4  5D                        POP EBP
006034B5  C2 04 00                  RET 0x4
