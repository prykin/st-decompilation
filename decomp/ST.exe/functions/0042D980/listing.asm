STAllPlayersC::GetActiveCenter:
0042D980  55                        PUSH EBP
0042D981  8B EC                     MOV EBP,ESP
0042D983  83 EC 20                  SUB ESP,0x20
0042D986  33 C9                     XOR ECX,ECX
0042D988  53                        PUSH EBX
0042D989  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0042D98F  56                        PUSH ESI
0042D990  57                        PUSH EDI
0042D991  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0042D994  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
0042D997  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0042D99A  C1 E0 04                  SHL EAX,0x4
0042D99D  03 C1                     ADD EAX,ECX
0042D99F  D1 E0                     SHL EAX,0x1
0042D9A1  8B 88 23 50 7F 00         MOV ECX,dword ptr [EAX + 0x7f5023]
0042D9A7  83 E9 00                  SUB ECX,0x0
0042D9AA  0F 84 B8 02 00 00         JZ 0x0042dc68
0042D9B0  49                        DEC ECX
0042D9B1  74 41                     JZ 0x0042d9f4
0042D9B3  68 28 65 7A 00            PUSH 0x7a6528
0042D9B8  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042D9BD  6A 00                     PUSH 0x0
0042D9BF  6A 00                     PUSH 0x0
0042D9C1  68 3E 05 00 00            PUSH 0x53e
0042D9C6  68 04 60 7A 00            PUSH 0x7a6004
0042D9CB  E8 00 FB 27 00            CALL 0x006ad4d0
0042D9D0  83 C4 18                  ADD ESP,0x18
0042D9D3  85 C0                     TEST EAX,EAX
0042D9D5  74 01                     JZ 0x0042d9d8
0042D9D7  CC                        INT3
LAB_0042d9d8:
0042D9D8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042D9DB  85 C0                     TEST EAX,EAX
0042D9DD  74 05                     JZ 0x0042d9e4
LAB_0042d9df:
0042D9DF  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
LAB_0042d9e4:
0042D9E4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042D9E7  85 C0                     TEST EAX,EAX
0042D9E9  0F 84 D5 02 00 00         JZ 0x0042dcc4
0042D9EF  E9 CB 02 00 00            JMP 0x0042dcbf
LAB_0042d9f4:
0042D9F4  8B 88 D3 4F 7F 00         MOV ECX,dword ptr [EAX + 0x7f4fd3]
0042D9FA  81 F9 9A 01 00 00         CMP ECX,0x19a
0042DA00  0F 8F C8 01 00 00         JG 0x0042dbce
0042DA06  0F 84 C0 00 00 00         JZ 0x0042dacc
0042DA0C  85 C9                     TEST ECX,ECX
0042DA0E  0F 84 F0 01 00 00         JZ 0x0042dc04
0042DA14  83 F9 5A                  CMP ECX,0x5a
0042DA17  74 4B                     JZ 0x0042da64
0042DA19  81 F9 72 01 00 00         CMP ECX,0x172
0042DA1F  0F 85 BA 01 00 00         JNZ 0x0042dbdf
0042DA25  6A 02                     PUSH 0x2
LAB_0042da27:
0042DA27  66 8B 88 DB 4F 7F 00      MOV CX,word ptr [EAX + 0x7f4fdb]
0042DA2E  8A 90 D7 4F 7F 00         MOV DL,byte ptr [EAX + 0x7f4fd7]
0042DA34  51                        PUSH ECX
0042DA35  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0042DA3B  52                        PUSH EDX
0042DA3C  E8 79 4E FD FF            CALL 0x004028ba
0042DA41  8D 4D F4                  LEA ECX,[EBP + -0xc]
0042DA44  8D 55 F8                  LEA EDX,[EBP + -0x8]
0042DA47  51                        PUSH ECX
0042DA48  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042DA4B  52                        PUSH EDX
0042DA4C  51                        PUSH ECX
0042DA4D  8B C8                     MOV ECX,EAX
0042DA4F  E8 71 3E FD FF            CALL 0x004018c5
0042DA54  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042DA57  85 C0                     TEST EAX,EAX
0042DA59  0F 84 F2 01 00 00         JZ 0x0042dc51
0042DA5F  E9 E6 01 00 00            JMP 0x0042dc4a
LAB_0042da64:
0042DA64  66 8B 88 DB 4F 7F 00      MOV CX,word ptr [EAX + 0x7f4fdb]
0042DA6B  8A 90 D7 4F 7F 00         MOV DL,byte ptr [EAX + 0x7f4fd7]
0042DA71  6A 04                     PUSH 0x4
0042DA73  51                        PUSH ECX
0042DA74  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0042DA7A  52                        PUSH EDX
0042DA7B  E8 3A 4E FD FF            CALL 0x004028ba
0042DA80  8D 4D F4                  LEA ECX,[EBP + -0xc]
0042DA83  8D 55 F8                  LEA EDX,[EBP + -0x8]
0042DA86  51                        PUSH ECX
0042DA87  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042DA8A  52                        PUSH EDX
0042DA8B  51                        PUSH ECX
0042DA8C  8B C8                     MOV ECX,EAX
0042DA8E  E8 32 3E FD FF            CALL 0x004018c5
0042DA93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042DA96  85 C0                     TEST EAX,EAX
0042DA98  74 07                     JZ 0x0042daa1
0042DA9A  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
0042DA9E  66 89 10                  MOV word ptr [EAX],DX
LAB_0042daa1:
0042DAA1  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042DAA4  85 C0                     TEST EAX,EAX
0042DAA6  74 07                     JZ 0x0042daaf
LAB_0042daa8:
0042DAA8  66 8B 4D F8               MOV CX,word ptr [EBP + -0x8]
0042DAAC  66 89 08                  MOV word ptr [EAX],CX
LAB_0042daaf:
0042DAAF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042DAB2  85 C0                     TEST EAX,EAX
0042DAB4  0F 84 90 03 00 00         JZ 0x0042de4a
0042DABA  66 8B 55 F4               MOV DX,word ptr [EBP + -0xc]
0042DABE  5F                        POP EDI
0042DABF  66 89 10                  MOV word ptr [EAX],DX
0042DAC2  5E                        POP ESI
0042DAC3  33 C0                     XOR EAX,EAX
0042DAC5  5B                        POP EBX
0042DAC6  8B E5                     MOV ESP,EBP
0042DAC8  5D                        POP EBP
0042DAC9  C2 0C 00                  RET 0xc
LAB_0042dacc:
0042DACC  8B 80 DD 4F 7F 00         MOV EAX,dword ptr [EAX + 0x7f4fdd]
0042DAD2  33 F6                     XOR ESI,ESI
0042DAD4  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0042DAD7  33 DB                     XOR EBX,EBX
0042DAD9  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0042DADC  33 FF                     XOR EDI,EDI
0042DADE  3B C6                     CMP EAX,ESI
0042DAE0  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0042DAE3  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0042DAE6  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0042DAE9  0F 8E C3 00 00 00         JLE 0x0042dbb2
LAB_0042daef:
0042DAEF  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0042DAF2  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0042DAF5  8D 45 F0                  LEA EAX,[EBP + -0x10]
0042DAF8  50                        PUSH EAX
0042DAF9  E8 72 F1 27 00            CALL 0x006acc70
0042DAFE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0042DB01  66 3D FF FF               CMP AX,0xffff
0042DB05  74 54                     JZ 0x0042db5b
0042DB07  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0042DB0A  6A 01                     PUSH 0x1
0042DB0C  50                        PUSH EAX
0042DB0D  33 C0                     XOR EAX,EAX
0042DB0F  A0 4D 87 80 00            MOV AL,[0x0080874d]
0042DB14  41                        INC ECX
0042DB15  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0042DB18  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042DB1B  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042DB1E  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042DB21  C1 E1 04                  SHL ECX,0x4
0042DB24  03 C8                     ADD ECX,EAX
0042DB26  8A 14 4D D7 4F 7F 00      MOV DL,byte ptr [ECX*0x2 + 0x7f4fd7]
0042DB2D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0042DB33  52                        PUSH EDX
0042DB34  E8 81 4D FD FF            CALL 0x004028ba
0042DB39  8D 4D F4                  LEA ECX,[EBP + -0xc]
0042DB3C  8D 55 F8                  LEA EDX,[EBP + -0x8]
0042DB3F  51                        PUSH ECX
0042DB40  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042DB43  52                        PUSH EDX
0042DB44  51                        PUSH ECX
0042DB45  8B C8                     MOV ECX,EAX
0042DB47  E8 79 3D FD FF            CALL 0x004018c5
0042DB4C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042DB4F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042DB52  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0042DB55  03 F2                     ADD ESI,EDX
0042DB57  03 F9                     ADD EDI,ECX
0042DB59  03 D8                     ADD EBX,EAX
LAB_0042db5b:
0042DB5B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0042DB5E  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0042DB61  40                        INC EAX
0042DB62  3B C1                     CMP EAX,ECX
0042DB64  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0042DB67  7C 86                     JL 0x0042daef
0042DB69  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0042DB6C  85 C9                     TEST ECX,ECX
0042DB6E  7E 42                     JLE 0x0042dbb2
0042DB70  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042DB73  85 C0                     TEST EAX,EAX
0042DB75  74 0C                     JZ 0x0042db83
0042DB77  0F BF C6                  MOVSX EAX,SI
0042DB7A  99                        CDQ
0042DB7B  F7 F9                     IDIV ECX
0042DB7D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042DB80  66 89 02                  MOV word ptr [EDX],AX
LAB_0042db83:
0042DB83  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0042DB86  85 F6                     TEST ESI,ESI
0042DB88  74 09                     JZ 0x0042db93
0042DB8A  0F BF C7                  MOVSX EAX,DI
0042DB8D  99                        CDQ
0042DB8E  F7 F9                     IDIV ECX
0042DB90  66 89 06                  MOV word ptr [ESI],AX
LAB_0042db93:
0042DB93  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0042DB96  85 F6                     TEST ESI,ESI
0042DB98  0F 84 AC 02 00 00         JZ 0x0042de4a
0042DB9E  0F BF C3                  MOVSX EAX,BX
0042DBA1  99                        CDQ
0042DBA2  F7 F9                     IDIV ECX
0042DBA4  5F                        POP EDI
0042DBA5  66 89 06                  MOV word ptr [ESI],AX
0042DBA8  5E                        POP ESI
0042DBA9  33 C0                     XOR EAX,EAX
0042DBAB  5B                        POP EBX
0042DBAC  8B E5                     MOV ESP,EBP
0042DBAE  5D                        POP EBP
0042DBAF  C2 0C 00                  RET 0xc
LAB_0042dbb2:
0042DBB2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042DBB5  85 C0                     TEST EAX,EAX
0042DBB7  74 05                     JZ 0x0042dbbe
0042DBB9  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
LAB_0042dbbe:
0042DBBE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042DBC1  85 C0                     TEST EAX,EAX
0042DBC3  0F 84 75 02 00 00         JZ 0x0042de3e
0042DBC9  E9 6B 02 00 00            JMP 0x0042de39
LAB_0042dbce:
0042DBCE  81 E9 A4 01 00 00         SUB ECX,0x1a4
0042DBD4  0F 84 87 00 00 00         JZ 0x0042dc61
0042DBDA  83 E9 14                  SUB ECX,0x14
0042DBDD  74 35                     JZ 0x0042dc14
LAB_0042dbdf:
0042DBDF  68 E0 64 7A 00            PUSH 0x7a64e0
0042DBE4  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042DBE9  6A 00                     PUSH 0x0
0042DBEB  6A 00                     PUSH 0x0
0042DBED  68 37 05 00 00            PUSH 0x537
0042DBF2  68 04 60 7A 00            PUSH 0x7a6004
0042DBF7  E8 D4 F8 27 00            CALL 0x006ad4d0
0042DBFC  83 C4 18                  ADD ESP,0x18
0042DBFF  85 C0                     TEST EAX,EAX
0042DC01  74 01                     JZ 0x0042dc04
0042DC03  CC                        INT3
LAB_0042dc04:
0042DC04  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042DC07  85 C0                     TEST EAX,EAX
0042DC09  0F 84 D5 FD FF FF         JZ 0x0042d9e4
0042DC0F  E9 CB FD FF FF            JMP 0x0042d9df
LAB_0042dc14:
0042DC14  66 8B 88 DB 4F 7F 00      MOV CX,word ptr [EAX + 0x7f4fdb]
0042DC1B  8A 90 D7 4F 7F 00         MOV DL,byte ptr [EAX + 0x7f4fd7]
0042DC21  6A 06                     PUSH 0x6
0042DC23  51                        PUSH ECX
0042DC24  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0042DC2A  52                        PUSH EDX
0042DC2B  E8 8A 4C FD FF            CALL 0x004028ba
0042DC30  8D 4D F4                  LEA ECX,[EBP + -0xc]
0042DC33  8D 55 F8                  LEA EDX,[EBP + -0x8]
0042DC36  51                        PUSH ECX
0042DC37  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042DC3A  52                        PUSH EDX
0042DC3B  51                        PUSH ECX
0042DC3C  8B C8                     MOV ECX,EAX
0042DC3E  E8 82 3C FD FF            CALL 0x004018c5
0042DC43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042DC46  85 C0                     TEST EAX,EAX
0042DC48  74 07                     JZ 0x0042dc51
LAB_0042dc4a:
0042DC4A  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
0042DC4E  66 89 10                  MOV word ptr [EAX],DX
LAB_0042dc51:
0042DC51  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042DC54  85 C0                     TEST EAX,EAX
0042DC56  0F 84 53 FE FF FF         JZ 0x0042daaf
0042DC5C  E9 47 FE FF FF            JMP 0x0042daa8
LAB_0042dc61:
0042DC61  6A 05                     PUSH 0x5
0042DC63  E9 BF FD FF FF            JMP 0x0042da27
LAB_0042dc68:
0042DC68  8B 88 83 4F 7F 00         MOV ECX,dword ptr [EAX + 0x7f4f83]
0042DC6E  85 C9                     TEST ECX,ECX
0042DC70  0F 84 DF 01 00 00         JZ 0x0042de55
0042DC76  83 F9 3C                  CMP ECX,0x3c
0042DC79  0F 84 C5 00 00 00         JZ 0x0042dd44
0042DC7F  81 F9 AE 01 00 00         CMP ECX,0x1ae
0042DC85  74 59                     JZ 0x0042dce0
0042DC87  68 98 64 7A 00            PUSH 0x7a6498
0042DC8C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042DC91  6A 00                     PUSH 0x0
0042DC93  6A 00                     PUSH 0x0
0042DC95  68 E5 04 00 00            PUSH 0x4e5
0042DC9A  68 04 60 7A 00            PUSH 0x7a6004
0042DC9F  E8 2C F8 27 00            CALL 0x006ad4d0
0042DCA4  83 C4 18                  ADD ESP,0x18
0042DCA7  85 C0                     TEST EAX,EAX
0042DCA9  74 01                     JZ 0x0042dcac
0042DCAB  CC                        INT3
LAB_0042dcac:
0042DCAC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042DCAF  85 C0                     TEST EAX,EAX
0042DCB1  74 05                     JZ 0x0042dcb8
0042DCB3  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
LAB_0042dcb8:
0042DCB8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042DCBB  85 C0                     TEST EAX,EAX
0042DCBD  74 05                     JZ 0x0042dcc4
LAB_0042dcbf:
0042DCBF  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
LAB_0042dcc4:
0042DCC4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042DCC7  85 C0                     TEST EAX,EAX
0042DCC9  0F 84 AA 01 00 00         JZ 0x0042de79
0042DCCF  5F                        POP EDI
0042DCD0  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
0042DCD5  5E                        POP ESI
0042DCD6  83 C8 FF                  OR EAX,0xffffffff
0042DCD9  5B                        POP EBX
0042DCDA  8B E5                     MOV ESP,EBP
0042DCDC  5D                        POP EBP
0042DCDD  C2 0C 00                  RET 0xc
LAB_0042dce0:
0042DCE0  66 8B 88 8B 4F 7F 00      MOV CX,word ptr [EAX + 0x7f4f8b]
0042DCE7  8A 90 87 4F 7F 00         MOV DL,byte ptr [EAX + 0x7f4f87]
0042DCED  6A 03                     PUSH 0x3
0042DCEF  51                        PUSH ECX
0042DCF0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0042DCF6  52                        PUSH EDX
0042DCF7  E8 BE 4B FD FF            CALL 0x004028ba
0042DCFC  8D 4D F4                  LEA ECX,[EBP + -0xc]
0042DCFF  8D 55 F8                  LEA EDX,[EBP + -0x8]
0042DD02  51                        PUSH ECX
0042DD03  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042DD06  52                        PUSH EDX
0042DD07  51                        PUSH ECX
0042DD08  8B C8                     MOV ECX,EAX
0042DD0A  E8 B6 3B FD FF            CALL 0x004018c5
0042DD0F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042DD12  85 C0                     TEST EAX,EAX
0042DD14  74 07                     JZ 0x0042dd1d
0042DD16  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
0042DD1A  66 89 10                  MOV word ptr [EAX],DX
LAB_0042dd1d:
0042DD1D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042DD20  85 C0                     TEST EAX,EAX
0042DD22  74 07                     JZ 0x0042dd2b
0042DD24  66 8B 4D F8               MOV CX,word ptr [EBP + -0x8]
0042DD28  66 89 08                  MOV word ptr [EAX],CX
LAB_0042dd2b:
0042DD2B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042DD2E  85 C0                     TEST EAX,EAX
0042DD30  74 07                     JZ 0x0042dd39
0042DD32  66 8B 55 F4               MOV DX,word ptr [EBP + -0xc]
0042DD36  66 89 10                  MOV word ptr [EAX],DX
LAB_0042dd39:
0042DD39  5F                        POP EDI
0042DD3A  5E                        POP ESI
0042DD3B  33 C0                     XOR EAX,EAX
0042DD3D  5B                        POP EBX
0042DD3E  8B E5                     MOV ESP,EBP
0042DD40  5D                        POP EBP
0042DD41  C2 0C 00                  RET 0xc
LAB_0042dd44:
0042DD44  8B 80 8D 4F 7F 00         MOV EAX,dword ptr [EAX + 0x7f4f8d]
0042DD4A  33 F6                     XOR ESI,ESI
0042DD4C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0042DD4F  33 DB                     XOR EBX,EBX
0042DD51  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0042DD54  33 FF                     XOR EDI,EDI
0042DD56  3B C6                     CMP EAX,ESI
0042DD58  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0042DD5B  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0042DD5E  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0042DD61  0F 8E BF 00 00 00         JLE 0x0042de26
LAB_0042dd67:
0042DD67  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0042DD6A  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0042DD6D  8D 45 F0                  LEA EAX,[EBP + -0x10]
0042DD70  50                        PUSH EAX
0042DD71  E8 FA EE 27 00            CALL 0x006acc70
0042DD76  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0042DD79  66 3D FF FF               CMP AX,0xffff
0042DD7D  74 54                     JZ 0x0042ddd3
0042DD7F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0042DD82  6A 01                     PUSH 0x1
0042DD84  50                        PUSH EAX
0042DD85  33 C0                     XOR EAX,EAX
0042DD87  A0 4D 87 80 00            MOV AL,[0x0080874d]
0042DD8C  41                        INC ECX
0042DD8D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0042DD90  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042DD93  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042DD96  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042DD99  C1 E1 04                  SHL ECX,0x4
0042DD9C  03 C8                     ADD ECX,EAX
0042DD9E  8A 14 4D 87 4F 7F 00      MOV DL,byte ptr [ECX*0x2 + 0x7f4f87]
0042DDA5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0042DDAB  52                        PUSH EDX
0042DDAC  E8 09 4B FD FF            CALL 0x004028ba
0042DDB1  8D 4D F4                  LEA ECX,[EBP + -0xc]
0042DDB4  8D 55 F8                  LEA EDX,[EBP + -0x8]
0042DDB7  51                        PUSH ECX
0042DDB8  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042DDBB  52                        PUSH EDX
0042DDBC  51                        PUSH ECX
0042DDBD  8B C8                     MOV ECX,EAX
0042DDBF  E8 01 3B FD FF            CALL 0x004018c5
0042DDC4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042DDC7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042DDCA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0042DDCD  03 F2                     ADD ESI,EDX
0042DDCF  03 F9                     ADD EDI,ECX
0042DDD1  03 D8                     ADD EBX,EAX
LAB_0042ddd3:
0042DDD3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0042DDD6  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0042DDD9  40                        INC EAX
0042DDDA  3B C1                     CMP EAX,ECX
0042DDDC  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0042DDDF  7C 86                     JL 0x0042dd67
0042DDE1  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0042DDE4  85 C9                     TEST ECX,ECX
0042DDE6  7E 3E                     JLE 0x0042de26
0042DDE8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042DDEB  85 C0                     TEST EAX,EAX
0042DDED  74 0C                     JZ 0x0042ddfb
0042DDEF  0F BF C6                  MOVSX EAX,SI
0042DDF2  99                        CDQ
0042DDF3  F7 F9                     IDIV ECX
0042DDF5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042DDF8  66 89 02                  MOV word ptr [EDX],AX
LAB_0042ddfb:
0042DDFB  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0042DDFE  85 F6                     TEST ESI,ESI
0042DE00  74 09                     JZ 0x0042de0b
0042DE02  0F BF C7                  MOVSX EAX,DI
0042DE05  99                        CDQ
0042DE06  F7 F9                     IDIV ECX
0042DE08  66 89 06                  MOV word ptr [ESI],AX
LAB_0042de0b:
0042DE0B  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0042DE0E  85 F6                     TEST ESI,ESI
0042DE10  74 38                     JZ 0x0042de4a
0042DE12  0F BF C3                  MOVSX EAX,BX
0042DE15  99                        CDQ
0042DE16  F7 F9                     IDIV ECX
0042DE18  5F                        POP EDI
0042DE19  66 89 06                  MOV word ptr [ESI],AX
0042DE1C  5E                        POP ESI
0042DE1D  33 C0                     XOR EAX,EAX
0042DE1F  5B                        POP EBX
0042DE20  8B E5                     MOV ESP,EBP
0042DE22  5D                        POP EBP
0042DE23  C2 0C 00                  RET 0xc
LAB_0042de26:
0042DE26  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042DE29  85 C0                     TEST EAX,EAX
0042DE2B  74 05                     JZ 0x0042de32
0042DE2D  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
LAB_0042de32:
0042DE32  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042DE35  85 C0                     TEST EAX,EAX
0042DE37  74 05                     JZ 0x0042de3e
LAB_0042de39:
0042DE39  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
LAB_0042de3e:
0042DE3E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042DE41  85 C0                     TEST EAX,EAX
0042DE43  74 05                     JZ 0x0042de4a
0042DE45  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
LAB_0042de4a:
0042DE4A  5F                        POP EDI
0042DE4B  5E                        POP ESI
0042DE4C  33 C0                     XOR EAX,EAX
0042DE4E  5B                        POP EBX
0042DE4F  8B E5                     MOV ESP,EBP
0042DE51  5D                        POP EBP
0042DE52  C2 0C 00                  RET 0xc
LAB_0042de55:
0042DE55  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0042DE58  85 C0                     TEST EAX,EAX
0042DE5A  74 05                     JZ 0x0042de61
0042DE5C  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
LAB_0042de61:
0042DE61  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042DE64  85 C0                     TEST EAX,EAX
0042DE66  74 05                     JZ 0x0042de6d
0042DE68  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
LAB_0042de6d:
0042DE6D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042DE70  85 C0                     TEST EAX,EAX
0042DE72  74 05                     JZ 0x0042de79
0042DE74  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
LAB_0042de79:
0042DE79  5F                        POP EDI
0042DE7A  5E                        POP ESI
0042DE7B  83 C8 FF                  OR EAX,0xffffffff
0042DE7E  5B                        POP EBX
0042DE7F  8B E5                     MOV ESP,EBP
0042DE81  5D                        POP EBP
0042DE82  C2 0C 00                  RET 0xc
