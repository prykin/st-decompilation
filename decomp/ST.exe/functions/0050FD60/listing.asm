FrmPanelTy::InitFrmPanel:
0050FD60  55                        PUSH EBP
0050FD61  8B EC                     MOV EBP,ESP
0050FD63  83 EC 48                  SUB ESP,0x48
0050FD66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0050FD6B  56                        PUSH ESI
0050FD6C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0050FD6F  57                        PUSH EDI
0050FD70  8D 55 BC                  LEA EDX,[EBP + -0x44]
0050FD73  8D 4D B8                  LEA ECX,[EBP + -0x48]
0050FD76  6A 00                     PUSH 0x0
0050FD78  52                        PUSH EDX
0050FD79  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0050FD7C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0050FD82  E8 69 DA 21 00            CALL 0x0072d7f0
0050FD87  8B F0                     MOV ESI,EAX
0050FD89  83 C4 08                  ADD ESP,0x8
0050FD8C  85 F6                     TEST ESI,ESI
0050FD8E  0F 85 7A 03 00 00         JNZ 0x0051010e
0050FD94  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0050FD97  6A 77                     PUSH 0x77
0050FD99  68 C9 00 00 00            PUSH 0xc9
0050FD9E  68 36 27 00 00            PUSH 0x2736
0050FDA3  6A 0C                     PUSH 0xc
0050FDA5  68 C6 00 00 00            PUSH 0xc6
0050FDAA  6A 02                     PUSH 0x2
0050FDAC  6A 31                     PUSH 0x31
0050FDAE  50                        PUSH EAX
0050FDAF  68 58 2A 7C 00            PUSH 0x7c2a58
0050FDB4  89 35 8C 16 80 00         MOV dword ptr [0x0080168c],ESI
0050FDBA  E8 BD 59 EF FF            CALL 0x0040577c
0050FDBF  83 C4 08                  ADD ESP,0x8
0050FDC2  8B CE                     MOV ECX,ESI
0050FDC4  50                        PUSH EAX
0050FDC5  E8 36 3A EF FF            CALL 0x00403800
0050FDCA  6A 01                     PUSH 0x1
0050FDCC  8B 3E                     MOV EDI,dword ptr [ESI]
0050FDCE  6A 00                     PUSH 0x0
0050FDD0  68 74 27 00 00            PUSH 0x2774
0050FDD5  6A 00                     PUSH 0x0
0050FDD7  6A 02                     PUSH 0x2
0050FDD9  68 AF C0 00 00            PUSH 0xc0af
0050FDDE  68 9F C0 00 00            PUSH 0xc09f
0050FDE3  6A 00                     PUSH 0x0
0050FDE5  68 4C 2A 7C 00            PUSH 0x7c2a4c
0050FDEA  E8 8D 59 EF FF            CALL 0x0040577c
0050FDEF  83 C4 08                  ADD ESP,0x8
0050FDF2  8B CE                     MOV ECX,ESI
0050FDF4  50                        PUSH EAX
0050FDF5  6A 01                     PUSH 0x1
0050FDF7  6A 01                     PUSH 0x1
0050FDF9  6A 00                     PUSH 0x0
0050FDFB  6A 19                     PUSH 0x19
0050FDFD  6A 2B                     PUSH 0x2b
0050FDFF  6A 01                     PUSH 0x1
0050FE01  6A 00                     PUSH 0x0
0050FE03  FF 57 04                  CALL dword ptr [EDI + 0x4]
0050FE06  6A 01                     PUSH 0x1
0050FE08  8B 3E                     MOV EDI,dword ptr [ESI]
0050FE0A  6A 00                     PUSH 0x0
0050FE0C  68 75 27 00 00            PUSH 0x2775
0050FE11  6A 00                     PUSH 0x0
0050FE13  6A 02                     PUSH 0x2
0050FE15  68 B0 C0 00 00            PUSH 0xc0b0
0050FE1A  68 A0 C0 00 00            PUSH 0xc0a0
0050FE1F  6A 00                     PUSH 0x0
0050FE21  68 3C 2A 7C 00            PUSH 0x7c2a3c
0050FE26  89 86 B3 01 00 00         MOV dword ptr [ESI + 0x1b3],EAX
0050FE2C  E8 4B 59 EF FF            CALL 0x0040577c
0050FE31  83 C4 08                  ADD ESP,0x8
0050FE34  8B CE                     MOV ECX,ESI
0050FE36  50                        PUSH EAX
0050FE37  6A 01                     PUSH 0x1
0050FE39  6A 01                     PUSH 0x1
0050FE3B  6A 00                     PUSH 0x0
0050FE3D  6A 19                     PUSH 0x19
0050FE3F  6A 60                     PUSH 0x60
0050FE41  6A 01                     PUSH 0x1
0050FE43  6A 00                     PUSH 0x0
0050FE45  FF 57 04                  CALL dword ptr [EDI + 0x4]
0050FE48  6A 01                     PUSH 0x1
0050FE4A  8B 3E                     MOV EDI,dword ptr [ESI]
0050FE4C  6A 00                     PUSH 0x0
0050FE4E  68 79 27 00 00            PUSH 0x2779
0050FE53  6A 00                     PUSH 0x0
0050FE55  6A 02                     PUSH 0x2
0050FE57  68 B1 C0 00 00            PUSH 0xc0b1
0050FE5C  68 A1 C0 00 00            PUSH 0xc0a1
0050FE61  6A 00                     PUSH 0x0
0050FE63  68 30 2A 7C 00            PUSH 0x7c2a30
0050FE68  89 86 B7 01 00 00         MOV dword ptr [ESI + 0x1b7],EAX
0050FE6E  E8 09 59 EF FF            CALL 0x0040577c
0050FE73  83 C4 08                  ADD ESP,0x8
0050FE76  50                        PUSH EAX
0050FE77  6A 01                     PUSH 0x1
0050FE79  6A 01                     PUSH 0x1
0050FE7B  6A 00                     PUSH 0x0
0050FE7D  6A 19                     PUSH 0x19
0050FE7F  68 95 00 00 00            PUSH 0x95
0050FE84  6A 01                     PUSH 0x1
0050FE86  6A 00                     PUSH 0x0
0050FE88  8B CE                     MOV ECX,ESI
0050FE8A  FF 57 04                  CALL dword ptr [EDI + 0x4]
0050FE8D  6A 01                     PUSH 0x1
0050FE8F  8B 3E                     MOV EDI,dword ptr [ESI]
0050FE91  6A 00                     PUSH 0x0
0050FE93  68 7A 27 00 00            PUSH 0x277a
0050FE98  6A 00                     PUSH 0x0
0050FE9A  6A 02                     PUSH 0x2
0050FE9C  68 B2 C0 00 00            PUSH 0xc0b2
0050FEA1  68 A2 C0 00 00            PUSH 0xc0a2
0050FEA6  6A 00                     PUSH 0x0
0050FEA8  68 24 2A 7C 00            PUSH 0x7c2a24
0050FEAD  89 86 BB 01 00 00         MOV dword ptr [ESI + 0x1bb],EAX
0050FEB3  E8 C4 58 EF FF            CALL 0x0040577c
0050FEB8  83 C4 08                  ADD ESP,0x8
0050FEBB  8B CE                     MOV ECX,ESI
0050FEBD  50                        PUSH EAX
0050FEBE  6A 01                     PUSH 0x1
0050FEC0  6A 01                     PUSH 0x1
0050FEC2  6A 00                     PUSH 0x0
0050FEC4  6A 19                     PUSH 0x19
0050FEC6  68 CA 00 00 00            PUSH 0xca
0050FECB  6A 01                     PUSH 0x1
0050FECD  6A 00                     PUSH 0x0
0050FECF  FF 57 04                  CALL dword ptr [EDI + 0x4]
0050FED2  6A 01                     PUSH 0x1
0050FED4  8B 3E                     MOV EDI,dword ptr [ESI]
0050FED6  6A 00                     PUSH 0x0
0050FED8  68 77 27 00 00            PUSH 0x2777
0050FEDD  6A 00                     PUSH 0x0
0050FEDF  6A 02                     PUSH 0x2
0050FEE1  68 B3 C0 00 00            PUSH 0xc0b3
0050FEE6  68 A3 C0 00 00            PUSH 0xc0a3
0050FEEB  6A 00                     PUSH 0x0
0050FEED  68 18 2A 7C 00            PUSH 0x7c2a18
0050FEF2  89 86 BF 01 00 00         MOV dword ptr [ESI + 0x1bf],EAX
0050FEF8  E8 7F 58 EF FF            CALL 0x0040577c
0050FEFD  83 C4 08                  ADD ESP,0x8
0050FF00  8B CE                     MOV ECX,ESI
0050FF02  50                        PUSH EAX
0050FF03  6A 01                     PUSH 0x1
0050FF05  6A 01                     PUSH 0x1
0050FF07  6A 00                     PUSH 0x0
0050FF09  6A 31                     PUSH 0x31
0050FF0B  6A 2B                     PUSH 0x2b
0050FF0D  6A 01                     PUSH 0x1
0050FF0F  6A 00                     PUSH 0x0
0050FF11  FF 57 04                  CALL dword ptr [EDI + 0x4]
0050FF14  6A 01                     PUSH 0x1
0050FF16  8B 3E                     MOV EDI,dword ptr [ESI]
0050FF18  6A 00                     PUSH 0x0
0050FF1A  68 76 27 00 00            PUSH 0x2776
0050FF1F  6A 00                     PUSH 0x0
0050FF21  6A 02                     PUSH 0x2
0050FF23  68 B4 C0 00 00            PUSH 0xc0b4
0050FF28  68 A4 C0 00 00            PUSH 0xc0a4
0050FF2D  6A 00                     PUSH 0x0
0050FF2F  68 08 2A 7C 00            PUSH 0x7c2a08
0050FF34  89 86 C3 01 00 00         MOV dword ptr [ESI + 0x1c3],EAX
0050FF3A  E8 3D 58 EF FF            CALL 0x0040577c
0050FF3F  83 C4 08                  ADD ESP,0x8
0050FF42  8B CE                     MOV ECX,ESI
0050FF44  50                        PUSH EAX
0050FF45  6A 01                     PUSH 0x1
0050FF47  6A 01                     PUSH 0x1
0050FF49  6A 00                     PUSH 0x0
0050FF4B  6A 31                     PUSH 0x31
0050FF4D  6A 60                     PUSH 0x60
0050FF4F  6A 01                     PUSH 0x1
0050FF51  6A 00                     PUSH 0x0
0050FF53  FF 57 04                  CALL dword ptr [EDI + 0x4]
0050FF56  8B 3E                     MOV EDI,dword ptr [ESI]
0050FF58  6A 01                     PUSH 0x1
0050FF5A  6A 00                     PUSH 0x0
0050FF5C  68 78 27 00 00            PUSH 0x2778
0050FF61  6A 00                     PUSH 0x0
0050FF63  6A 02                     PUSH 0x2
0050FF65  68 B5 C0 00 00            PUSH 0xc0b5
0050FF6A  89 86 C7 01 00 00         MOV dword ptr [ESI + 0x1c7],EAX
0050FF70  68 A5 C0 00 00            PUSH 0xc0a5
0050FF75  6A 00                     PUSH 0x0
0050FF77  68 F8 29 7C 00            PUSH 0x7c29f8
0050FF7C  E8 FB 57 EF FF            CALL 0x0040577c
0050FF81  83 C4 08                  ADD ESP,0x8
0050FF84  8B CE                     MOV ECX,ESI
0050FF86  50                        PUSH EAX
0050FF87  6A 01                     PUSH 0x1
0050FF89  6A 01                     PUSH 0x1
0050FF8B  6A 00                     PUSH 0x0
0050FF8D  6A 31                     PUSH 0x31
0050FF8F  68 95 00 00 00            PUSH 0x95
0050FF94  6A 01                     PUSH 0x1
0050FF96  6A 00                     PUSH 0x0
0050FF98  FF 57 04                  CALL dword ptr [EDI + 0x4]
0050FF9B  6A 01                     PUSH 0x1
0050FF9D  8B 3E                     MOV EDI,dword ptr [ESI]
0050FF9F  6A 00                     PUSH 0x0
0050FFA1  68 7B 27 00 00            PUSH 0x277b
0050FFA6  6A 00                     PUSH 0x0
0050FFA8  6A 02                     PUSH 0x2
0050FFAA  68 B6 C0 00 00            PUSH 0xc0b6
0050FFAF  68 A6 C0 00 00            PUSH 0xc0a6
0050FFB4  6A 00                     PUSH 0x0
0050FFB6  68 E8 29 7C 00            PUSH 0x7c29e8
0050FFBB  89 86 CB 01 00 00         MOV dword ptr [ESI + 0x1cb],EAX
0050FFC1  E8 B6 57 EF FF            CALL 0x0040577c
0050FFC6  83 C4 08                  ADD ESP,0x8
0050FFC9  8B CE                     MOV ECX,ESI
0050FFCB  50                        PUSH EAX
0050FFCC  6A 01                     PUSH 0x1
0050FFCE  6A 01                     PUSH 0x1
0050FFD0  6A 00                     PUSH 0x0
0050FFD2  6A 31                     PUSH 0x31
0050FFD4  68 CA 00 00 00            PUSH 0xca
0050FFD9  6A 01                     PUSH 0x1
0050FFDB  6A 00                     PUSH 0x0
0050FFDD  FF 57 04                  CALL dword ptr [EDI + 0x4]
0050FFE0  6A 01                     PUSH 0x1
0050FFE2  8B 3E                     MOV EDI,dword ptr [ESI]
0050FFE4  68 DC 29 7C 00            PUSH 0x7c29dc
0050FFE9  68 7C 27 00 00            PUSH 0x277c
0050FFEE  6A 00                     PUSH 0x0
0050FFF0  6A 02                     PUSH 0x2
0050FFF2  68 09 B1 00 00            PUSH 0xb109
0050FFF7  68 08 B1 00 00            PUSH 0xb108
0050FFFC  6A 00                     PUSH 0x0
0050FFFE  68 D0 29 7C 00            PUSH 0x7c29d0
00510003  89 86 CF 01 00 00         MOV dword ptr [ESI + 0x1cf],EAX
00510009  E8 6E 57 EF FF            CALL 0x0040577c
0051000E  83 C4 08                  ADD ESP,0x8
00510011  8B CE                     MOV ECX,ESI
00510013  50                        PUSH EAX
00510014  6A 06                     PUSH 0x6
00510016  6A 01                     PUSH 0x1
00510018  6A 00                     PUSH 0x0
0051001A  6A 52                     PUSH 0x52
0051001C  6A 2B                     PUSH 0x2b
0051001E  6A 01                     PUSH 0x1
00510020  6A 00                     PUSH 0x0
00510022  FF 57 04                  CALL dword ptr [EDI + 0x4]
00510025  6A 01                     PUSH 0x1
00510027  8B 3E                     MOV EDI,dword ptr [ESI]
00510029  68 C4 29 7C 00            PUSH 0x7c29c4
0051002E  68 7D 27 00 00            PUSH 0x277d
00510033  6A 00                     PUSH 0x0
00510035  6A 02                     PUSH 0x2
00510037  68 0B B1 00 00            PUSH 0xb10b
0051003C  68 0A B1 00 00            PUSH 0xb10a
00510041  6A 00                     PUSH 0x0
00510043  68 B8 29 7C 00            PUSH 0x7c29b8
00510048  89 86 D3 01 00 00         MOV dword ptr [ESI + 0x1d3],EAX
0051004E  E8 29 57 EF FF            CALL 0x0040577c
00510053  83 C4 08                  ADD ESP,0x8
00510056  50                        PUSH EAX
00510057  6A 06                     PUSH 0x6
00510059  6A 01                     PUSH 0x1
0051005B  6A 00                     PUSH 0x0
0051005D  6A 52                     PUSH 0x52
0051005F  6A 4D                     PUSH 0x4d
00510061  6A 01                     PUSH 0x1
00510063  6A 00                     PUSH 0x0
00510065  8B CE                     MOV ECX,ESI
00510067  FF 57 04                  CALL dword ptr [EDI + 0x4]
0051006A  6A 01                     PUSH 0x1
0051006C  8B 3E                     MOV EDI,dword ptr [ESI]
0051006E  68 DC 29 7C 00            PUSH 0x7c29dc
00510073  68 7E 27 00 00            PUSH 0x277e
00510078  6A 00                     PUSH 0x0
0051007A  6A 02                     PUSH 0x2
0051007C  68 0D B1 00 00            PUSH 0xb10d
00510081  68 0C B1 00 00            PUSH 0xb10c
00510086  6A 00                     PUSH 0x0
00510088  68 AC 29 7C 00            PUSH 0x7c29ac
0051008D  89 86 D7 01 00 00         MOV dword ptr [ESI + 0x1d7],EAX
00510093  E8 E4 56 EF FF            CALL 0x0040577c
00510098  83 C4 08                  ADD ESP,0x8
0051009B  8B CE                     MOV ECX,ESI
0051009D  50                        PUSH EAX
0051009E  6A 06                     PUSH 0x6
005100A0  6A 01                     PUSH 0x1
005100A2  6A 00                     PUSH 0x0
005100A4  6A 52                     PUSH 0x52
005100A6  68 AA 00 00 00            PUSH 0xaa
005100AB  6A 01                     PUSH 0x1
005100AD  6A 00                     PUSH 0x0
005100AF  FF 57 04                  CALL dword ptr [EDI + 0x4]
005100B2  6A 01                     PUSH 0x1
005100B4  8B 3E                     MOV EDI,dword ptr [ESI]
005100B6  68 C4 29 7C 00            PUSH 0x7c29c4
005100BB  68 7F 27 00 00            PUSH 0x277f
005100C0  6A 00                     PUSH 0x0
005100C2  6A 02                     PUSH 0x2
005100C4  68 0F B1 00 00            PUSH 0xb10f
005100C9  68 0E B1 00 00            PUSH 0xb10e
005100CE  6A 00                     PUSH 0x0
005100D0  68 A0 29 7C 00            PUSH 0x7c29a0
005100D5  89 86 DB 01 00 00         MOV dword ptr [ESI + 0x1db],EAX
005100DB  E8 9C 56 EF FF            CALL 0x0040577c
005100E0  83 C4 08                  ADD ESP,0x8
005100E3  8B CE                     MOV ECX,ESI
005100E5  50                        PUSH EAX
005100E6  6A 06                     PUSH 0x6
005100E8  6A 01                     PUSH 0x1
005100EA  6A 00                     PUSH 0x0
005100EC  6A 52                     PUSH 0x52
005100EE  68 CC 00 00 00            PUSH 0xcc
005100F3  6A 01                     PUSH 0x1
005100F5  6A 00                     PUSH 0x0
005100F7  FF 57 04                  CALL dword ptr [EDI + 0x4]
005100FA  89 86 DF 01 00 00         MOV dword ptr [ESI + 0x1df],EAX
00510100  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00510103  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00510108  5F                        POP EDI
00510109  5E                        POP ESI
0051010A  8B E5                     MOV ESP,EBP
0051010C  5D                        POP EBP
0051010D  C3                        RET
LAB_0051010e:
0051010E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00510111  68 80 29 7C 00            PUSH 0x7c2980
00510116  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051011B  56                        PUSH ESI
0051011C  6A 00                     PUSH 0x0
0051011E  6A 43                     PUSH 0x43
00510120  68 58 29 7C 00            PUSH 0x7c2958
00510125  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051012B  E8 A0 D3 19 00            CALL 0x006ad4d0
00510130  83 C4 18                  ADD ESP,0x18
00510133  85 C0                     TEST EAX,EAX
00510135  74 01                     JZ 0x00510138
00510137  CC                        INT3
LAB_00510138:
00510138  6A 43                     PUSH 0x43
0051013A  68 58 29 7C 00            PUSH 0x7c2958
0051013F  6A 00                     PUSH 0x0
00510141  56                        PUSH ESI
00510142  E8 F9 5C 19 00            CALL 0x006a5e40
00510147  5F                        POP EDI
00510148  5E                        POP ESI
00510149  8B E5                     MOV ESP,EBP
0051014B  5D                        POP EBP
0051014C  C3                        RET
