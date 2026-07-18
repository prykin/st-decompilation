FUN_0060dab0:
0060DAB0  55                        PUSH EBP
0060DAB1  8B EC                     MOV EBP,ESP
0060DAB3  83 EC 20                  SUB ESP,0x20
0060DAB6  8B 91 44 02 00 00         MOV EDX,dword ptr [ECX + 0x244]
0060DABC  56                        PUSH ESI
0060DABD  85 D2                     TEST EDX,EDX
0060DABF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0060DAC2  B8 02 00 00 00            MOV EAX,0x2
0060DAC7  0F 84 05 02 00 00         JZ 0x0060dcd2
0060DACD  83 B9 40 02 00 00 01      CMP dword ptr [ECX + 0x240],0x1
0060DAD4  0F 85 F8 01 00 00         JNZ 0x0060dcd2
0060DADA  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0060DADF  53                        PUSH EBX
0060DAE0  8B 5A 28                  MOV EBX,dword ptr [EDX + 0x28]
0060DAE3  57                        PUSH EDI
0060DAE4  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
0060DAEA  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
0060DAED  2B C3                     SUB EAX,EBX
0060DAEF  83 C7 06                  ADD EDI,0x6
0060DAF2  89 7A 1C                  MOV dword ptr [EDX + 0x1c],EDI
0060DAF5  8B B1 44 02 00 00         MOV ESI,dword ptr [ECX + 0x244]
0060DAFB  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0060DAFE  C1 E2 04                  SHL EDX,0x4
0060DB01  81 C2 C8 00 00 00         ADD EDX,0xc8
0060DB07  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0060DB0A  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0060DB0D  0F AF D0                  IMUL EDX,EAX
0060DB10  8B 81 FD 01 00 00         MOV EAX,dword ptr [ECX + 0x1fd]
0060DB16  03 C2                     ADD EAX,EDX
0060DB18  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
0060DB1B  8B B1 44 02 00 00         MOV ESI,dword ptr [ECX + 0x244]
0060DB21  8B 7E 1C                  MOV EDI,dword ptr [ESI + 0x1c]
0060DB24  3B D7                     CMP EDX,EDI
0060DB26  7C 08                     JL 0x0060db30
0060DB28  8B 56 10                  MOV EDX,dword ptr [ESI + 0x10]
0060DB2B  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0060DB2E  EB 0C                     JMP 0x0060db3c
LAB_0060db30:
0060DB30  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0060DB33  0F AF C2                  IMUL EAX,EDX
0060DB36  99                        CDQ
0060DB37  F7 FF                     IDIV EDI
0060DB39  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_0060db3c:
0060DB3C  8B 7E 20                  MOV EDI,dword ptr [ESI + 0x20]
0060DB3F  47                        INC EDI
0060DB40  89 7E 20                  MOV dword ptr [ESI + 0x20],EDI
0060DB43  8B 81 44 02 00 00         MOV EAX,dword ptr [ECX + 0x244]
0060DB49  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
0060DB4C  8B 70 24                  MOV ESI,dword ptr [EAX + 0x24]
0060DB4F  3B D6                     CMP EDX,ESI
0060DB51  7F 07                     JG 0x0060db5a
0060DB53  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
LAB_0060db5a:
0060DB5A  8B 81 44 02 00 00         MOV EAX,dword ptr [ECX + 0x244]
0060DB60  33 FF                     XOR EDI,EDI
0060DB62  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0060DB65  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0060DB68  85 D2                     TEST EDX,EDX
0060DB6A  0F 8E 5B 01 00 00         JLE 0x0060dccb
0060DB70  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_0060db73:
0060DB73  8B 70 10                  MOV ESI,dword ptr [EAX + 0x10]
0060DB76  33 D2                     XOR EDX,EDX
0060DB78  0F AF F7                  IMUL ESI,EDI
0060DB7B  3B DA                     CMP EBX,EDX
0060DB7D  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0060DB80  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0060DB83  0F 8E 2F 01 00 00         JLE 0x0060dcb8
0060DB89  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0060DB8C  EB 03                     JMP 0x0060db91
LAB_0060db8e:
0060DB8E  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
LAB_0060db91:
0060DB91  8B 81 34 02 00 00         MOV EAX,dword ptr [ECX + 0x234]
0060DB97  03 D6                     ADD EDX,ESI
0060DB99  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
0060DB9C  0F 83 F8 00 00 00         JNC 0x0060dc9a
0060DBA2  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0060DBA5  0F AF F2                  IMUL ESI,EDX
0060DBA8  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
0060DBAB  85 F6                     TEST ESI,ESI
0060DBAD  0F 84 E7 00 00 00         JZ 0x0060dc9a
0060DBB3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0060DBB6  8B 89 44 02 00 00         MOV ECX,dword ptr [ECX + 0x244]
0060DBBC  99                        CDQ
0060DBBD  F7 79 10                  IDIV dword ptr [ECX + 0x10]
0060DBC0  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0060DBC3  8B 79 14                  MOV EDI,dword ptr [ECX + 0x14]
0060DBC6  8D 1C 82                  LEA EBX,[EDX + EAX*0x4]
0060DBC9  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0060DBCC  0F BF 03                  MOVSX EAX,word ptr [EBX]
0060DBCF  0F AF D0                  IMUL EDX,EAX
0060DBD2  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0060DBD7  F7 EA                     IMUL EDX
0060DBD9  C1 FA 0C                  SAR EDX,0xc
0060DBDC  8B C2                     MOV EAX,EDX
0060DBDE  C1 E8 1F                  SHR EAX,0x1f
0060DBE1  03 D0                     ADD EDX,EAX
0060DBE3  2B FA                     SUB EDI,EDX
0060DBE5  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0060DBE8  DB 45 E0                  FILD dword ptr [EBP + -0x20]
0060DBEB  D9 46 2C                  FLD float ptr [ESI + 0x2c]
0060DBEE  D9 FF                     FCOS
0060DBF0  0F BF 43 02               MOVSX EAX,word ptr [EBX + 0x2]
0060DBF4  99                        CDQ
0060DBF5  F7 7D E4                  IDIV dword ptr [EBP + -0x1c]
0060DBF8  8B D8                     MOV EBX,EAX
0060DBFA  D8 C9                     FMUL ST1
0060DBFC  E8 87 06 12 00            CALL 0x0072e288
0060DC01  D9 46 2C                  FLD float ptr [ESI + 0x2c]
0060DC04  D9 FE                     FSIN
0060DC06  03 46 18                  ADD EAX,dword ptr [ESI + 0x18]
0060DC09  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0060DC0C  DE C9                     FMULP
0060DC0E  E8 75 06 12 00            CALL 0x0072e288
0060DC13  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0060DC16  03 C1                     ADD EAX,ECX
0060DC18  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0060DC1B  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
0060DC1E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060DC21  03 CB                     ADD ECX,EBX
0060DC23  89 4E 14                  MOV dword ptr [ESI + 0x14],ECX
0060DC26  8B 88 F9 01 00 00         MOV ECX,dword ptr [EAX + 0x1f9]
0060DC2C  3B F9                     CMP EDI,ECX
0060DC2E  7C 23                     JL 0x0060dc53
0060DC30  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0060DC33  85 C0                     TEST EAX,EAX
0060DC35  74 60                     JZ 0x0060dc97
0060DC37  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
0060DC3A  85 C0                     TEST EAX,EAX
0060DC3C  7C 59                     JL 0x0060dc97
0060DC3E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060DC44  50                        PUSH EAX
0060DC45  E8 16 CF 0D 00            CALL 0x006eab60
0060DC4A  C7 46 04 FF FF FF FF      MOV dword ptr [ESI + 0x4],0xffffffff
0060DC51  EB 44                     JMP 0x0060dc97
LAB_0060dc53:
0060DC53  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0060DC56  85 C9                     TEST ECX,ECX
0060DC58  75 2D                     JNZ 0x0060dc87
0060DC5A  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0060DC5D  85 C9                     TEST ECX,ECX
0060DC5F  7C 26                     JL 0x0060dc87
0060DC61  8B 90 44 02 00 00         MOV EDX,dword ptr [EAX + 0x244]
0060DC67  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0060DC6A  6A 00                     PUSH 0x0
0060DC6C  51                        PUSH ECX
0060DC6D  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
0060DC70  03 C7                     ADD EAX,EDI
0060DC72  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0060DC75  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0060DC7B  E8 20 CE 0D 00            CALL 0x006eaaa0
0060DC80  C7 46 04 01 00 00 00      MOV dword ptr [ESI + 0x4],0x1
LAB_0060dc87:
0060DC87  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0060DC8A  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
0060DC8D  3B C1                     CMP EAX,ECX
0060DC8F  7E 06                     JLE 0x0060dc97
0060DC91  99                        CDQ
0060DC92  F7 F9                     IDIV ECX
0060DC94  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
LAB_0060dc97:
0060DC97  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0060dc9a:
0060DC9A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0060DC9D  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0060DCA0  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0060DCA3  42                        INC EDX
0060DCA4  83 C6 33                  ADD ESI,0x33
0060DCA7  3B D3                     CMP EDX,EBX
0060DCA9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0060DCAC  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0060DCAF  0F 8C D9 FE FF FF         JL 0x0060db8e
0060DCB5  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_0060dcb8:
0060DCB8  8B 81 44 02 00 00         MOV EAX,dword ptr [ECX + 0x244]
0060DCBE  47                        INC EDI
0060DCBF  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0060DCC2  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
0060DCC5  0F 8C A8 FE FF FF         JL 0x0060db73
LAB_0060dccb:
0060DCCB  5F                        POP EDI
0060DCCC  B8 01 00 00 00            MOV EAX,0x1
0060DCD1  5B                        POP EBX
LAB_0060dcd2:
0060DCD2  5E                        POP ESI
0060DCD3  8B E5                     MOV ESP,EBP
0060DCD5  5D                        POP EBP
0060DCD6  C3                        RET
