FUN_006dc050:
006DC050  55                        PUSH EBP
006DC051  8B EC                     MOV EBP,ESP
006DC053  53                        PUSH EBX
006DC054  56                        PUSH ESI
006DC055  8B F1                     MOV ESI,ECX
006DC057  57                        PUSH EDI
006DC058  68 58 06 00 00            PUSH 0x658
006DC05D  8B 86 50 03 00 00         MOV EAX,dword ptr [ESI + 0x350]
006DC063  50                        PUSH EAX
006DC064  E8 E7 0E FD FF            CALL 0x006acf50
006DC069  33 FF                     XOR EDI,EDI
006DC06B  89 86 50 03 00 00         MOV dword ptr [ESI + 0x350],EAX
006DC071  89 38                     MOV dword ptr [EAX],EDI
006DC073  8B 8E 50 03 00 00         MOV ECX,dword ptr [ESI + 0x350]
006DC079  68 58 06 00 00            PUSH 0x658
006DC07E  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
006DC081  8B 96 54 03 00 00         MOV EDX,dword ptr [ESI + 0x354]
006DC087  52                        PUSH EDX
006DC088  E8 C3 0E FD FF            CALL 0x006acf50
006DC08D  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
006DC090  8B 55 40                  MOV EDX,dword ptr [EBP + 0x40]
006DC093  89 86 54 03 00 00         MOV dword ptr [ESI + 0x354],EAX
006DC099  89 38                     MOV dword ptr [EAX],EDI
006DC09B  8B 86 54 03 00 00         MOV EAX,dword ptr [ESI + 0x354]
006DC0A1  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
006DC0A4  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
006DC0A7  89 8E C8 00 00 00         MOV dword ptr [ESI + 0xc8],ECX
006DC0AD  8B 4D 48                  MOV ECX,dword ptr [EBP + 0x48]
006DC0B0  89 96 CC 00 00 00         MOV dword ptr [ESI + 0xcc],EDX
006DC0B6  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006DC0B9  89 86 D0 00 00 00         MOV dword ptr [ESI + 0xd0],EAX
006DC0BF  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006DC0C2  89 8E D4 00 00 00         MOV dword ptr [ESI + 0xd4],ECX
006DC0C8  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006DC0CB  52                        PUSH EDX
006DC0CC  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006DC0CF  50                        PUSH EAX
006DC0D0  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006DC0D3  51                        PUSH ECX
006DC0D4  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006DC0D7  52                        PUSH EDX
006DC0D8  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006DC0DB  50                        PUSH EAX
006DC0DC  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006DC0DF  51                        PUSH ECX
006DC0E0  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006DC0E3  52                        PUSH EDX
006DC0E4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006DC0E7  50                        PUSH EAX
006DC0E8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006DC0EB  51                        PUSH ECX
006DC0EC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006DC0EF  52                        PUSH EDX
006DC0F0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006DC0F3  50                        PUSH EAX
006DC0F4  51                        PUSH ECX
006DC0F5  52                        PUSH EDX
006DC0F6  8B CE                     MOV ECX,ESI
006DC0F8  89 BE 28 01 00 00         MOV dword ptr [ESI + 0x128],EDI
006DC0FE  89 BE 1C 04 00 00         MOV dword ptr [ESI + 0x41c],EDI
006DC104  89 BE 24 01 00 00         MOV dword ptr [ESI + 0x124],EDI
006DC10A  E8 11 FC FF FF            CALL 0x006dbd20
006DC10F  8B 5D 4C                  MOV EBX,dword ptr [EBP + 0x4c]
006DC112  3B DF                     CMP EBX,EDI
006DC114  0F 8E DA 01 00 00         JLE 0x006dc2f4
006DC11A  68 F2 04 00 00            PUSH 0x4f2
006DC11F  E8 AC 43 FD FF            CALL 0x006b04d0
006DC124  3B C7                     CMP EAX,EDI
006DC126  74 09                     JZ 0x006dc131
006DC128  8B C8                     MOV ECX,EAX
006DC12A  E8 71 FB FF FF            CALL 0x006dbca0
006DC12F  8B F8                     MOV EDI,EAX
LAB_006dc131:
006DC131  DB 45 4C                  FILD dword ptr [EBP + 0x4c]
006DC134  89 BE 58 03 00 00         MOV dword ptr [ESI + 0x358],EDI
006DC13A  89 9E 80 03 00 00         MOV dword ptr [ESI + 0x380],EBX
006DC140  DC BE C8 00 00 00         FDIVR double ptr [ESI + 0xc8]
006DC146  DD 96 68 03 00 00         FST double ptr [ESI + 0x368]
006DC14C  DD 45 34                  FLD double ptr [EBP + 0x34]
006DC14F  DC 65 2C                  FSUB double ptr [EBP + 0x2c]
006DC152  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DC158  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DC15E  DC 0D 68 DF 79 00         FMUL double ptr [0x0079df68]
006DC164  DE C1                     FADDP
006DC166  DD 45 24                  FLD double ptr [EBP + 0x24]
006DC169  DC 65 1C                  FSUB double ptr [EBP + 0x1c]
006DC16C  D8 E1                     FSUB ST0,ST1
006DC16E  DC 0D 60 DF 79 00         FMUL double ptr [0x0079df60]
006DC174  D9 C9                     FXCH
006DC176  DC 0D 70 07 79 00         FMUL double ptr [0x00790770]
006DC17C  DE C1                     FADDP
006DC17E  D8 F1                     FDIV ST0,ST1
006DC180  DC 05 88 CD 79 00         FADD double ptr [0x0079cd88]
006DC186  E8 FD 20 05 00            CALL 0x0072e288
006DC18B  89 45 4C                  MOV dword ptr [EBP + 0x4c],EAX
006DC18E  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006DC191  DB 45 4C                  FILD dword ptr [EBP + 0x4c]
006DC194  89 86 70 03 00 00         MOV dword ptr [ESI + 0x370],EAX
006DC19A  8B 45 3C                  MOV EAX,dword ptr [EBP + 0x3c]
006DC19D  D8 C9                     FMUL ST1
006DC19F  DD 9E 60 03 00 00         FSTP double ptr [ESI + 0x360]
006DC1A5  89 87 C8 00 00 00         MOV dword ptr [EDI + 0xc8],EAX
006DC1AB  8B 45 44                  MOV EAX,dword ptr [EBP + 0x44]
006DC1AE  89 8F CC 00 00 00         MOV dword ptr [EDI + 0xcc],ECX
006DC1B4  8B 96 58 03 00 00         MOV EDX,dword ptr [ESI + 0x358]
006DC1BA  8B 4D 48                  MOV ECX,dword ptr [EBP + 0x48]
006DC1BD  89 82 D0 00 00 00         MOV dword ptr [EDX + 0xd0],EAX
006DC1C3  33 C0                     XOR EAX,EAX
006DC1C5  DD D8                     FSTP ST0
006DC1C7  89 8A D4 00 00 00         MOV dword ptr [EDX + 0xd4],ECX
006DC1CD  8B 96 58 03 00 00         MOV EDX,dword ptr [ESI + 0x358]
006DC1D3  89 82 28 01 00 00         MOV dword ptr [EDX + 0x128],EAX
006DC1D9  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006DC1DF  89 81 1C 04 00 00         MOV dword ptr [ECX + 0x41c],EAX
006DC1E5  8B 96 58 03 00 00         MOV EDX,dword ptr [ESI + 0x358]
006DC1EB  C7 82 24 01 00 00 01 00 00 00  MOV dword ptr [EDX + 0x124],0x1
006DC1F5  8B 86 70 03 00 00         MOV EAX,dword ptr [ESI + 0x370]
006DC1FB  DD 86 60 03 00 00         FLD double ptr [ESI + 0x360]
006DC201  DC 0D C0 01 79 00         FMUL double ptr [0x007901c0]
006DC207  DD 5D 44                  FSTP double ptr [EBP + 0x44]
006DC20A  DD 86 60 03 00 00         FLD double ptr [ESI + 0x360]
006DC210  DC 0D 58 DF 79 00         FMUL double ptr [0x0079df58]
006DC216  8B 4D 48                  MOV ECX,dword ptr [EBP + 0x48]
006DC219  8B 55 44                  MOV EDX,dword ptr [EBP + 0x44]
006DC21C  51                        PUSH ECX
006DC21D  52                        PUSH EDX
006DC21E  DD 5D 3C                  FSTP double ptr [EBP + 0x3c]
006DC221  8B 7D 40                  MOV EDI,dword ptr [EBP + 0x40]
006DC224  57                        PUSH EDI
006DC225  8B 7D 3C                  MOV EDI,dword ptr [EBP + 0x3c]
006DC228  57                        PUSH EDI
006DC229  51                        PUSH ECX
006DC22A  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
006DC22D  52                        PUSH EDX
006DC22E  51                        PUSH ECX
006DC22F  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006DC235  57                        PUSH EDI
006DC236  50                        PUSH EAX
006DC237  50                        PUSH EAX
006DC238  6A 00                     PUSH 0x0
006DC23A  6A 00                     PUSH 0x0
006DC23C  6A 00                     PUSH 0x0
006DC23E  E8 DD FA FF FF            CALL 0x006dbd20
006DC243  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DC249  DC 0D 90 DF 79 00         FMUL double ptr [0x0079df90]
006DC24F  51                        PUSH ECX
006DC250  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006DC256  DC 2D 88 DF 79 00         FSUBR double ptr [0x0079df88]
006DC25C  D9 1C 24                  FSTP float ptr [ESP]
006DC25F  E8 2C 15 00 00            CALL 0x006dd790
006DC264  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DC26A  DC C0                     FADD ST0,ST0
006DC26C  51                        PUSH ECX
006DC26D  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006DC273  DC 05 88 DF 79 00         FADD double ptr [0x0079df88]
006DC279  D9 1C 24                  FSTP float ptr [ESP]
006DC27C  E8 7F 15 00 00            CALL 0x006dd800
006DC281  8B 96 58 03 00 00         MOV EDX,dword ptr [ESI + 0x358]
006DC287  C7 82 28 01 00 00 70 00 00 00  MOV dword ptr [EDX + 0x128],0x70
006DC291  8B 86 58 03 00 00         MOV EAX,dword ptr [ESI + 0x358]
006DC297  89 98 80 03 00 00         MOV dword ptr [EAX + 0x380],EBX
006DC29D  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006DC2A3  8B 96 70 03 00 00         MOV EDX,dword ptr [ESI + 0x370]
006DC2A9  B8 20 00 00 00            MOV EAX,0x20
006DC2AE  89 91 70 03 00 00         MOV dword ptr [ECX + 0x370],EDX
006DC2B4  8B 8E 58 03 00 00         MOV ECX,dword ptr [ESI + 0x358]
006DC2BA  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DC2C0  DC 0D 80 DF 79 00         FMUL double ptr [0x0079df80]
006DC2C6  89 86 84 03 00 00         MOV dword ptr [ESI + 0x384],EAX
006DC2CC  DD 96 94 03 00 00         FST double ptr [ESI + 0x394]
006DC2D2  DD 86 D0 00 00 00         FLD double ptr [ESI + 0xd0]
006DC2D8  DC 0D 90 DF 79 00         FMUL double ptr [0x0079df90]
006DC2DE  DD 96 9C 03 00 00         FST double ptr [ESI + 0x39c]
006DC2E4  D8 E1                     FSUB ST0,ST1
006DC2E6  DD 9E A4 03 00 00         FSTP double ptr [ESI + 0x3a4]
006DC2EC  89 81 84 03 00 00         MOV dword ptr [ECX + 0x384],EAX
006DC2F2  DD D8                     FSTP ST0
LAB_006dc2f4:
006DC2F4  5F                        POP EDI
006DC2F5  5E                        POP ESI
006DC2F6  5B                        POP EBX
006DC2F7  5D                        POP EBP
006DC2F8  C2 48 00                  RET 0x48
