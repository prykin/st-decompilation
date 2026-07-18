FUN_0063fe70:
0063FE70  55                        PUSH EBP
0063FE71  8B EC                     MOV EBP,ESP
0063FE73  83 EC 08                  SUB ESP,0x8
0063FE76  57                        PUSH EDI
0063FE77  8B F9                     MOV EDI,ECX
0063FE79  8B 87 36 03 00 00         MOV EAX,dword ptr [EDI + 0x336]
0063FE7F  85 C0                     TEST EAX,EAX
0063FE81  0F 84 0B 02 00 00         JZ 0x00640092
0063FE87  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0063FE8A  53                        PUSH EBX
0063FE8B  33 DB                     XOR EBX,EBX
0063FE8D  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0063FE90  85 C0                     TEST EAX,EAX
0063FE92  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0063FE95  0F 8E DA 01 00 00         JLE 0x00640075
0063FE9B  56                        PUSH ESI
LAB_0063fe9c:
0063FE9C  8B 87 36 03 00 00         MOV EAX,dword ptr [EDI + 0x336]
0063FEA2  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
0063FEA5  0F 83 BA 01 00 00         JNC 0x00640065
0063FEAB  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0063FEAE  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0063FEB1  0F AF F3                  IMUL ESI,EBX
0063FEB4  03 F1                     ADD ESI,ECX
0063FEB6  85 F6                     TEST ESI,ESI
0063FEB8  0F 84 A7 01 00 00         JZ 0x00640065
0063FEBE  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
0063FEC1  85 D2                     TEST EDX,EDX
0063FEC3  0F 8C 9C 01 00 00         JL 0x00640065
0063FEC9  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0063FECC  83 F8 01                  CMP EAX,0x1
0063FECF  0F 84 18 01 00 00         JZ 0x0063ffed
0063FED5  83 F8 03                  CMP EAX,0x3
0063FED8  0F 84 0F 01 00 00         JZ 0x0063ffed
0063FEDE  83 F8 02                  CMP EAX,0x2
0063FEE1  0F 84 7E 01 00 00         JZ 0x00640065
0063FEE7  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0063FEEC  83 FB 3C                  CMP EBX,0x3c
0063FEEF  7D 76                     JGE 0x0063ff67
0063FEF1  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0063FEF7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0063FEFA  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
0063FEFD  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0063FF00  48                        DEC EAX
0063FF01  3B C8                     CMP ECX,EAX
0063FF03  7C 05                     JL 0x0063ff0a
0063FF05  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0063FF08  EB 04                     JMP 0x0063ff0e
LAB_0063ff0a:
0063FF0A  41                        INC ECX
0063FF0B  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
LAB_0063ff0e:
0063FF0E  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0063FF11  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063FF17  50                        PUSH EAX
0063FF18  6A 00                     PUSH 0x0
0063FF1A  52                        PUSH EDX
0063FF1B  E8 50 A3 0A 00            CALL 0x006ea270
0063FF20  D9 46 10                  FLD float ptr [ESI + 0x10]
0063FF23  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063FF29  51                        PUSH ECX
0063FF2A  D9 1C 24                  FSTP float ptr [ESP]
0063FF2D  DB 46 0C                  FILD dword ptr [ESI + 0xc]
0063FF30  51                        PUSH ECX
0063FF31  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063FF37  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063FF3D  D9 1C 24                  FSTP float ptr [ESP]
0063FF40  DB 46 08                  FILD dword ptr [ESI + 0x8]
0063FF43  51                        PUSH ECX
0063FF44  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0063FF47  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063FF4D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063FF53  D9 1C 24                  FSTP float ptr [ESP]
0063FF56  51                        PUSH ECX
0063FF57  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063FF5D  E8 FE A9 0A 00            CALL 0x006ea960
0063FF62  E9 FE 00 00 00            JMP 0x00640065
LAB_0063ff67:
0063FF67  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0063FF6D  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0063FF70  8B D8                     MOV EBX,EAX
0063FF72  2B D9                     SUB EBX,ECX
0063FF74  83 FB 02                  CMP EBX,0x2
0063FF77  73 04                     JNC 0x0063ff7d
0063FF79  3B C1                     CMP EAX,ECX
0063FF7B  75 29                     JNZ 0x0063ffa6
LAB_0063ff7d:
0063FF7D  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0063FF80  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0063FF83  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0063FF86  48                        DEC EAX
0063FF87  3B C8                     CMP ECX,EAX
0063FF89  7C 05                     JL 0x0063ff90
0063FF8B  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0063FF8E  EB 04                     JMP 0x0063ff94
LAB_0063ff90:
0063FF90  41                        INC ECX
0063FF91  89 4E 20                  MOV dword ptr [ESI + 0x20],ECX
LAB_0063ff94:
0063FF94  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0063FF97  51                        PUSH ECX
0063FF98  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063FF9E  6A 00                     PUSH 0x0
0063FFA0  52                        PUSH EDX
0063FFA1  E8 CA A2 0A 00            CALL 0x006ea270
LAB_0063ffa6:
0063FFA6  D9 46 10                  FLD float ptr [ESI + 0x10]
0063FFA9  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063FFAF  51                        PUSH ECX
0063FFB0  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
0063FFB3  D9 1C 24                  FSTP float ptr [ESP]
0063FFB6  DB 46 0C                  FILD dword ptr [ESI + 0xc]
0063FFB9  51                        PUSH ECX
0063FFBA  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063FFC0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063FFC6  D9 1C 24                  FSTP float ptr [ESP]
0063FFC9  DB 46 08                  FILD dword ptr [ESI + 0x8]
0063FFCC  51                        PUSH ECX
0063FFCD  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063FFD3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063FFD9  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063FFDF  D9 1C 24                  FSTP float ptr [ESP]
0063FFE2  52                        PUSH EDX
0063FFE3  E8 78 A9 0A 00            CALL 0x006ea960
0063FFE8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0063FFEB  EB 78                     JMP 0x00640065
LAB_0063ffed:
0063FFED  8A 4D 08                  MOV CL,byte ptr [EBP + 0x8]
0063FFF0  84 C9                     TEST CL,CL
0063FFF2  75 05                     JNZ 0x0063fff9
0063FFF4  83 F8 03                  CMP EAX,0x3
0063FFF7  75 6C                     JNZ 0x00640065
LAB_0063fff9:
0063FFF9  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
0063FFFC  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
00640003  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
00640009  50                        PUSH EAX
0064000A  6A 00                     PUSH 0x0
0064000C  52                        PUSH EDX
0064000D  E8 5E A2 0A 00            CALL 0x006ea270
00640012  D9 46 10                  FLD float ptr [ESI + 0x10]
00640015  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0064001B  51                        PUSH ECX
0064001C  D9 1C 24                  FSTP float ptr [ESP]
0064001F  DB 46 0C                  FILD dword ptr [ESI + 0xc]
00640022  51                        PUSH ECX
00640023  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00640029  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0064002F  D9 1C 24                  FSTP float ptr [ESP]
00640032  DB 46 08                  FILD dword ptr [ESI + 0x8]
00640035  51                        PUSH ECX
00640036  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
00640039  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0064003F  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00640045  D9 1C 24                  FSTP float ptr [ESP]
00640048  51                        PUSH ECX
00640049  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0064004F  E8 0C A9 0A 00            CALL 0x006ea960
00640054  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
00640057  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0064005D  6A 00                     PUSH 0x0
0064005F  52                        PUSH EDX
00640060  E8 3B AA 0A 00            CALL 0x006eaaa0
LAB_00640065:
00640065  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00640068  43                        INC EBX
00640069  3B D8                     CMP EBX,EAX
0064006B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0064006E  0F 8C 28 FE FF FF         JL 0x0063fe9c
00640074  5E                        POP ESI
LAB_00640075:
00640075  8B 87 7F 03 00 00         MOV EAX,dword ptr [EDI + 0x37f]
0064007B  5B                        POP EBX
0064007C  85 C0                     TEST EAX,EAX
0064007E  74 12                     JZ 0x00640092
00640080  8B 00                     MOV EAX,dword ptr [EAX]
00640082  85 C0                     TEST EAX,EAX
00640084  7C 0C                     JL 0x00640092
00640086  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0064008C  50                        PUSH EAX
0064008D  E8 3E 96 0A 00            CALL 0x006e96d0
LAB_00640092:
00640092  5F                        POP EDI
00640093  8B E5                     MOV ESP,EBP
00640095  5D                        POP EBP
00640096  C2 04 00                  RET 0x4
