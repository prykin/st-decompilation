STGroupBoatC::Bring:
0049FBF0  55                        PUSH EBP
0049FBF1  8B EC                     MOV EBP,ESP
0049FBF3  83 EC 6C                  SUB ESP,0x6c
0049FBF6  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049FBF9  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049FBFF  53                        PUSH EBX
0049FC00  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0049FC03  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049FC06  56                        PUSH ESI
0049FC07  57                        PUSH EDI
0049FC08  33 FF                     XOR EDI,EDI
0049FC0A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0049FC0D  8D 4D 98                  LEA ECX,[EBP + -0x68]
0049FC10  8D 45 94                  LEA EAX,[EBP + -0x6c]
0049FC13  57                        PUSH EDI
0049FC14  51                        PUSH ECX
0049FC15  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0049FC18  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0049FC1B  C7 45 E8 02 00 00 00      MOV dword ptr [EBP + -0x18],0x2
0049FC22  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
0049FC25  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049FC2A  E8 C1 DB 28 00            CALL 0x0072d7f0
0049FC2F  8B F0                     MOV ESI,EAX
0049FC31  83 C4 08                  ADD ESP,0x8
0049FC34  3B F7                     CMP ESI,EDI
0049FC36  0F 85 C8 02 00 00         JNZ 0x0049ff04
0049FC3C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049FC3F  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0049FC42  3B C7                     CMP EAX,EDI
0049FC44  74 09                     JZ 0x0049fc4f
0049FC46  83 F8 01                  CMP EAX,0x1
0049FC49  0F 85 02 02 00 00         JNZ 0x0049fe51
LAB_0049fc4f:
0049FC4F  B9 15 00 00 00            MOV ECX,0x15
0049FC54  33 C0                     XOR EAX,EAX
0049FC56  8D BB 89 00 00 00         LEA EDI,[EBX + 0x89]
0049FC5C  8D 93 B3 01 00 00         LEA EDX,[EBX + 0x1b3]
0049FC62  F3 AB                     STOSD.REP ES:EDI
0049FC64  33 FF                     XOR EDI,EDI
0049FC66  8D 83 E8 02 00 00         LEA EAX,[EBX + 0x2e8]
0049FC6C  89 7B 65                  MOV dword ptr [EBX + 0x65],EDI
0049FC6F  8B 32                     MOV ESI,dword ptr [EDX]
0049FC71  8B C8                     MOV ECX,EAX
0049FC73  89 31                     MOV dword ptr [ECX],ESI
0049FC75  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
0049FC79  66 89 51 04               MOV word ptr [ECX + 0x4],DX
0049FC7D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049FC83  66 8B 10                  MOV DX,word ptr [EAX]
0049FC86  66 8B 83 EA 02 00 00      MOV AX,word ptr [EBX + 0x2ea]
0049FC8D  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
0049FC93  66 89 45 DE               MOV word ptr [EBP + -0x22],AX
0049FC97  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049FC9A  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0049FC9D  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0049FCA0  66 8B 8B EC 02 00 00      MOV CX,word ptr [EBX + 0x2ec]
0049FCA7  3B C7                     CMP EAX,EDI
0049FCA9  66 89 55 DC               MOV word ptr [EBP + -0x24],DX
0049FCAD  66 89 4D E0               MOV word ptr [EBP + -0x20],CX
0049FCB1  0F 8E E9 00 00 00         JLE 0x0049fda0
LAB_0049fcb7:
0049FCB7  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049FCBA  8D 55 FC                  LEA EDX,[EBP + -0x4]
0049FCBD  52                        PUSH EDX
0049FCBE  8B D7                     MOV EDX,EDI
0049FCC0  E8 AB CF 20 00            CALL 0x006acc70
0049FCC5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049FCC8  66 3D FF FF               CMP AX,0xffff
0049FCCC  0F 84 C2 00 00 00         JZ 0x0049fd94
0049FCD2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049FCD8  6A 01                     PUSH 0x1
0049FCDA  50                        PUSH EAX
0049FCDB  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0049FCDE  50                        PUSH EAX
0049FCDF  E8 D6 2B F6 FF            CALL 0x004028ba
0049FCE4  8B F0                     MOV ESI,EAX
0049FCE6  85 F6                     TEST ESI,ESI
0049FCE8  75 1B                     JNZ 0x0049fd05
0049FCEA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049FCF0  68 79 0C 00 00            PUSH 0xc79
0049FCF5  68 3C BE 7A 00            PUSH 0x7abe3c
0049FCFA  51                        PUSH ECX
0049FCFB  68 04 00 FE AF            PUSH 0xaffe0004
0049FD00  E8 3B 61 20 00            CALL 0x006a5e40
LAB_0049fd05:
0049FD05  8B 16                     MOV EDX,dword ptr [ESI]
0049FD07  8B CE                     MOV ECX,ESI
0049FD09  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049FD0C  83 F8 07                  CMP EAX,0x7
0049FD0F  74 52                     JZ 0x0049fd63
0049FD11  8B 06                     MOV EAX,dword ptr [ESI]
0049FD13  8B CE                     MOV ECX,ESI
0049FD15  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049FD18  83 F8 13                  CMP EAX,0x13
0049FD1B  74 46                     JZ 0x0049fd63
0049FD1D  8B 16                     MOV EDX,dword ptr [ESI]
0049FD1F  8B CE                     MOV ECX,ESI
0049FD21  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049FD24  83 F8 1B                  CMP EAX,0x1b
0049FD27  74 3A                     JZ 0x0049fd63
0049FD29  8B CE                     MOV ECX,ESI
0049FD2B  E8 28 51 F6 FF            CALL 0x00404e58
0049FD30  85 C0                     TEST EAX,EAX
0049FD32  75 0F                     JNZ 0x0049fd43
0049FD34  8D 45 EC                  LEA EAX,[EBP + -0x14]
0049FD37  8B CE                     MOV ECX,ESI
0049FD39  50                        PUSH EAX
0049FD3A  6A 03                     PUSH 0x3
0049FD3C  E8 E5 23 F6 FF            CALL 0x00402126
0049FD41  EB 51                     JMP 0x0049fd94
LAB_0049fd43:
0049FD43  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049FD46  85 C0                     TEST EAX,EAX
0049FD48  75 10                     JNZ 0x0049fd5a
0049FD4A  6A 01                     PUSH 0x1
0049FD4C  6A 02                     PUSH 0x2
0049FD4E  6A 01                     PUSH 0x1
0049FD50  6A 00                     PUSH 0x0
0049FD52  E8 39 E5 20 00            CALL 0x006ae290
0049FD57  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0049fd5a:
0049FD5A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0049FD5D  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049FD60  51                        PUSH ECX
0049FD61  EB 2B                     JMP 0x0049fd8e
LAB_0049fd63:
0049FD63  8D 45 D8                  LEA EAX,[EBP + -0x28]
0049FD66  8B CE                     MOV ECX,ESI
0049FD68  50                        PUSH EAX
0049FD69  6A 17                     PUSH 0x17
0049FD6B  E8 B6 23 F6 FF            CALL 0x00402126
0049FD70  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049FD73  85 C0                     TEST EAX,EAX
0049FD75  75 10                     JNZ 0x0049fd87
0049FD77  6A 01                     PUSH 0x1
0049FD79  6A 02                     PUSH 0x2
0049FD7B  6A 01                     PUSH 0x1
0049FD7D  6A 00                     PUSH 0x0
0049FD7F  E8 0C E5 20 00            CALL 0x006ae290
0049FD84  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0049fd87:
0049FD87  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0049FD8A  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049FD8D  51                        PUSH ECX
LAB_0049fd8e:
0049FD8E  52                        PUSH EDX
0049FD8F  E8 2C E4 20 00            CALL 0x006ae1c0
LAB_0049fd94:
0049FD94  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049FD97  47                        INC EDI
0049FD98  3B F8                     CMP EDI,EAX
0049FD9A  0F 8C 17 FF FF FF         JL 0x0049fcb7
LAB_0049fda0:
0049FDA0  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0049FDA3  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0049FDA6  85 FF                     TEST EDI,EDI
0049FDA8  74 17                     JZ 0x0049fdc1
0049FDAA  85 F6                     TEST ESI,ESI
0049FDAC  74 13                     JZ 0x0049fdc1
0049FDAE  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0049FDB1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049FDB7  56                        PUSH ESI
0049FDB8  57                        PUSH EDI
0049FDB9  50                        PUSH EAX
0049FDBA  E8 DC 3F F6 FF            CALL 0x00403d9b
0049FDBF  EB 61                     JMP 0x0049fe22
LAB_0049fdc1:
0049FDC1  85 FF                     TEST EDI,EDI
0049FDC3  75 61                     JNZ 0x0049fe26
0049FDC5  85 F6                     TEST ESI,ESI
0049FDC7  74 4E                     JZ 0x0049fe17
0049FDC9  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0049FDCC  33 F6                     XOR ESI,ESI
0049FDCE  85 FF                     TEST EDI,EDI
0049FDD0  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0049FDD3  7E 35                     JLE 0x0049fe0a
LAB_0049fdd5:
0049FDD5  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049FDD8  8B D6                     MOV EDX,ESI
0049FDDA  51                        PUSH ECX
0049FDDB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0049FDDE  E8 8D CE 20 00            CALL 0x006acc70
0049FDE3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0049FDE6  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0049FDE9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049FDEF  6A 01                     PUSH 0x1
0049FDF1  52                        PUSH EDX
0049FDF2  50                        PUSH EAX
0049FDF3  E8 C2 2A F6 FF            CALL 0x004028ba
0049FDF8  8D 4D EC                  LEA ECX,[EBP + -0x14]
0049FDFB  51                        PUSH ECX
0049FDFC  6A 03                     PUSH 0x3
0049FDFE  8B C8                     MOV ECX,EAX
0049FE00  E8 21 23 F6 FF            CALL 0x00402126
0049FE05  46                        INC ESI
0049FE06  3B F7                     CMP ESI,EDI
0049FE08  7C CB                     JL 0x0049fdd5
LAB_0049fe0a:
0049FE0A  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0049FE0D  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0049FE10  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_0049fe17:
0049FE17  85 FF                     TEST EDI,EDI
0049FE19  75 0B                     JNZ 0x0049fe26
0049FE1B  85 F6                     TEST ESI,ESI
0049FE1D  75 03                     JNZ 0x0049fe22
0049FE1F  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
LAB_0049fe22:
0049FE22  85 FF                     TEST EDI,EDI
0049FE24  74 06                     JZ 0x0049fe2c
LAB_0049fe26:
0049FE26  57                        PUSH EDI
0049FE27  E8 E4 E2 20 00            CALL 0x006ae110
LAB_0049fe2c:
0049FE2C  85 F6                     TEST ESI,ESI
0049FE2E  74 06                     JZ 0x0049fe36
0049FE30  56                        PUSH ESI
0049FE31  E8 DA E2 20 00            CALL 0x006ae110
LAB_0049fe36:
0049FE36  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049FE3C  68 A0 0C 00 00            PUSH 0xca0
0049FE41  68 3C BE 7A 00            PUSH 0x7abe3c
0049FE46  52                        PUSH EDX
0049FE47  68 09 00 FE AF            PUSH 0xaffe0009
0049FE4C  E8 EF 5F 20 00            CALL 0x006a5e40
LAB_0049fe51:
0049FE51  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0049FE56  33 D2                     XOR EDX,EDX
0049FE58  B9 19 00 00 00            MOV ECX,0x19
0049FE5D  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0049FE63  F7 F1                     DIV ECX
0049FE65  83 FA 07                  CMP EDX,0x7
0049FE68  0F 85 81 00 00 00         JNZ 0x0049feef
0049FE6E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049FE71  33 FF                     XOR EDI,EDI
0049FE73  85 C0                     TEST EAX,EAX
0049FE75  7E 6C                     JLE 0x0049fee3
LAB_0049fe77:
0049FE77  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049FE7A  8D 55 FC                  LEA EDX,[EBP + -0x4]
0049FE7D  52                        PUSH EDX
0049FE7E  8B D7                     MOV EDX,EDI
0049FE80  E8 EB CD 20 00            CALL 0x006acc70
0049FE85  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049FE88  66 3D FF FF               CMP AX,0xffff
0049FE8C  74 4D                     JZ 0x0049fedb
0049FE8E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049FE94  6A 01                     PUSH 0x1
0049FE96  50                        PUSH EAX
0049FE97  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0049FE9A  50                        PUSH EAX
0049FE9B  E8 1A 2A F6 FF            CALL 0x004028ba
0049FEA0  8B F0                     MOV ESI,EAX
0049FEA2  85 F6                     TEST ESI,ESI
0049FEA4  75 1B                     JNZ 0x0049fec1
0049FEA6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049FEAC  68 A7 0C 00 00            PUSH 0xca7
0049FEB1  68 3C BE 7A 00            PUSH 0x7abe3c
0049FEB6  51                        PUSH ECX
0049FEB7  68 04 00 FE AF            PUSH 0xaffe0004
0049FEBC  E8 7F 5F 20 00            CALL 0x006a5e40
LAB_0049fec1:
0049FEC1  8B CE                     MOV ECX,ESI
0049FEC3  E8 14 30 F6 FF            CALL 0x00402edc
0049FEC8  83 F8 17                  CMP EAX,0x17
0049FECB  74 16                     JZ 0x0049fee3
0049FECD  6A 17                     PUSH 0x17
0049FECF  8B CE                     MOV ECX,ESI
0049FED1  E8 23 4F F6 FF            CALL 0x00404df9
0049FED6  83 F8 01                  CMP EAX,0x1
0049FED9  74 08                     JZ 0x0049fee3
LAB_0049fedb:
0049FEDB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049FEDE  47                        INC EDI
0049FEDF  3B F8                     CMP EDI,EAX
0049FEE1  7C 94                     JL 0x0049fe77
LAB_0049fee3:
0049FEE3  3B 7D F4                  CMP EDI,dword ptr [EBP + -0xc]
0049FEE6  75 07                     JNZ 0x0049feef
0049FEE8  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_0049feef:
0049FEEF  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0049FEF2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0049fef8:
0049FEF8  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049FEFB  5F                        POP EDI
0049FEFC  5E                        POP ESI
0049FEFD  5B                        POP EBX
0049FEFE  8B E5                     MOV ESP,EBP
0049FF00  5D                        POP EBP
0049FF01  C2 04 00                  RET 0x4
LAB_0049ff04:
0049FF04  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
0049FF07  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0049FF0D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049FF12  74 E4                     JZ 0x0049fef8
0049FF14  68 40 C1 7A 00            PUSH 0x7ac140
0049FF19  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049FF1E  56                        PUSH ESI
0049FF1F  57                        PUSH EDI
0049FF20  68 B0 0C 00 00            PUSH 0xcb0
0049FF25  68 3C BE 7A 00            PUSH 0x7abe3c
0049FF2A  E8 A1 D5 20 00            CALL 0x006ad4d0
0049FF2F  83 C4 18                  ADD ESP,0x18
0049FF32  85 C0                     TEST EAX,EAX
0049FF34  74 01                     JZ 0x0049ff37
0049FF36  CC                        INT3
LAB_0049ff37:
0049FF37  68 B1 0C 00 00            PUSH 0xcb1
0049FF3C  68 3C BE 7A 00            PUSH 0x7abe3c
0049FF41  57                        PUSH EDI
0049FF42  56                        PUSH ESI
0049FF43  E8 F8 5E 20 00            CALL 0x006a5e40
0049FF48  5F                        POP EDI
0049FF49  5E                        POP ESI
0049FF4A  83 C8 FF                  OR EAX,0xffffffff
0049FF4D  5B                        POP EBX
0049FF4E  8B E5                     MOV ESP,EBP
0049FF50  5D                        POP EBP
0049FF51  C2 04 00                  RET 0x4
