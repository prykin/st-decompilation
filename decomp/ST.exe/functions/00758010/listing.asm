FUN_00758010:
00758010  55                        PUSH EBP
00758011  8B EC                     MOV EBP,ESP
00758013  83 EC 0C                  SUB ESP,0xc
00758016  53                        PUSH EBX
00758017  56                        PUSH ESI
00758018  57                        PUSH EDI
00758019  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075801C  8B 77 10                  MOV ESI,dword ptr [EDI + 0x10]
0075801F  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00758022  8B 0E                     MOV ECX,dword ptr [ESI]
00758024  85 C0                     TEST EAX,EAX
00758026  75 11                     JNZ 0x00758039
00758028  57                        PUSH EDI
00758029  FF 56 0C                  CALL dword ptr [ESI + 0xc]
0075802C  85 C0                     TEST EAX,EAX
0075802E  0F 84 B2 00 00 00         JZ 0x007580e6
00758034  8B 0E                     MOV ECX,dword ptr [ESI]
00758036  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
LAB_00758039:
00758039  33 DB                     XOR EBX,EBX
0075803B  48                        DEC EAX
0075803C  8A 39                     MOV BH,byte ptr [ECX]
0075803E  41                        INC ECX
0075803F  85 C0                     TEST EAX,EAX
00758041  75 11                     JNZ 0x00758054
00758043  57                        PUSH EDI
00758044  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00758047  85 C0                     TEST EAX,EAX
00758049  0F 84 97 00 00 00         JZ 0x007580e6
0075804F  8B 0E                     MOV ECX,dword ptr [ESI]
00758051  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
LAB_00758054:
00758054  33 D2                     XOR EDX,EDX
00758056  48                        DEC EAX
00758057  8A 11                     MOV DL,byte ptr [ECX]
00758059  03 DA                     ADD EBX,EDX
0075805B  41                        INC ECX
0075805C  83 EB 02                  SUB EBX,0x2
0075805F  83 FB 0C                  CMP EBX,0xc
00758062  7C 60                     JL 0x007580c4
00758064  33 FF                     XOR EDI,EDI
LAB_00758066:
00758066  85 C0                     TEST EAX,EAX
00758068  75 10                     JNZ 0x0075807a
0075806A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075806D  50                        PUSH EAX
0075806E  FF 56 0C                  CALL dword ptr [ESI + 0xc]
00758071  85 C0                     TEST EAX,EAX
00758073  74 71                     JZ 0x007580e6
00758075  8B 0E                     MOV ECX,dword ptr [ESI]
00758077  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
LAB_0075807a:
0075807A  8A 11                     MOV DL,byte ptr [ECX]
0075807C  48                        DEC EAX
0075807D  88 54 3D F4               MOV byte ptr [EBP + EDI*0x1 + -0xc],DL
00758081  41                        INC ECX
00758082  47                        INC EDI
00758083  83 FF 0C                  CMP EDI,0xc
00758086  7C DE                     JL 0x00758066
00758088  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
0075808B  83 EB 0C                  SUB EBX,0xc
0075808E  80 FA 41                  CMP DL,0x41
00758091  75 31                     JNZ 0x007580c4
00758093  80 7D F5 64               CMP byte ptr [EBP + -0xb],0x64
00758097  75 2B                     JNZ 0x007580c4
00758099  80 7D F6 6F               CMP byte ptr [EBP + -0xa],0x6f
0075809D  75 25                     JNZ 0x007580c4
0075809F  80 7D F7 62               CMP byte ptr [EBP + -0x9],0x62
007580A3  75 1F                     JNZ 0x007580c4
007580A5  80 7D F8 65               CMP byte ptr [EBP + -0x8],0x65
007580A9  75 19                     JNZ 0x007580c4
007580AB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007580AE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007580B1  C7 82 19 01 00 00 01 00 00 00  MOV dword ptr [EDX + 0x119],0x1
007580BB  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
007580BE  88 97 1D 01 00 00         MOV byte ptr [EDI + 0x11d],DL
LAB_007580c4:
007580C4  85 DB                     TEST EBX,EBX
007580C6  89 0E                     MOV dword ptr [ESI],ECX
007580C8  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
007580CB  7E 0B                     JLE 0x007580d8
007580CD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007580D0  53                        PUSH EBX
007580D1  50                        PUSH EAX
007580D2  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
007580D5  FF 51 10                  CALL dword ptr [ECX + 0x10]
LAB_007580d8:
007580D8  5F                        POP EDI
007580D9  5E                        POP ESI
007580DA  B8 01 00 00 00            MOV EAX,0x1
007580DF  5B                        POP EBX
007580E0  8B E5                     MOV ESP,EBP
007580E2  5D                        POP EBP
007580E3  C2 04 00                  RET 0x4
LAB_007580e6:
007580E6  5F                        POP EDI
007580E7  5E                        POP ESI
007580E8  33 C0                     XOR EAX,EAX
007580EA  5B                        POP EBX
007580EB  8B E5                     MOV ESP,EBP
007580ED  5D                        POP EBP
007580EE  C2 04 00                  RET 0x4
