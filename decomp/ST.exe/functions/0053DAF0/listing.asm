UPanelTy::PaintIBut:
0053DAF0  55                        PUSH EBP
0053DAF1  8B EC                     MOV EBP,ESP
0053DAF3  83 EC 54                  SUB ESP,0x54
0053DAF6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053DAF9  53                        PUSH EBX
0053DAFA  56                        PUSH ESI
0053DAFB  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
0053DAFE  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
0053DB01  57                        PUSH EDI
0053DB02  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0053DB05  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0053DB08  8B 10                     MOV EDX,dword ptr [EAX]
0053DB0A  2B D6                     SUB EDX,ESI
0053DB0C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0053DB0F  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
0053DB12  85 D2                     TEST EDX,EDX
0053DB14  75 0D                     JNZ 0x0053db23
0053DB16  8B 49 48                  MOV ECX,dword ptr [ECX + 0x48]
0053DB19  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0053DB1C  03 CA                     ADD ECX,EDX
0053DB1E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053DB21  EB 0B                     JMP 0x0053db2e
LAB_0053db23:
0053DB23  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0053DB26  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
0053DB29  2B D0                     SUB EDX,EAX
0053DB2B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0053db2e:
0053DB2E  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053DB33  8D 55 B0                  LEA EDX,[EBP + -0x50]
0053DB36  8D 4D AC                  LEA ECX,[EBP + -0x54]
0053DB39  6A 00                     PUSH 0x0
0053DB3B  52                        PUSH EDX
0053DB3C  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0053DB3F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053DB45  E8 A6 FC 1E 00            CALL 0x0072d7f0
0053DB4A  8B F0                     MOV ESI,EAX
0053DB4C  83 C4 08                  ADD ESP,0x8
0053DB4F  85 F6                     TEST ESI,ESI
0053DB51  0F 85 C3 00 00 00         JNZ 0x0053dc1a
0053DB57  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0053DB5A  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0053DB5D  50                        PUSH EAX
0053DB5E  50                        PUSH EAX
0053DB5F  6A 01                     PUSH 0x1
0053DB61  50                        PUSH EAX
0053DB62  6A FF                     PUSH -0x1
0053DB64  57                        PUSH EDI
0053DB65  E8 1E 43 EC FF            CALL 0x00401e88
0053DB6A  50                        PUSH EAX
0053DB6B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0053DB6E  6A 01                     PUSH 0x1
0053DB70  50                        PUSH EAX
0053DB71  E8 8A 50 1B 00            CALL 0x006f2c00
0053DB76  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
0053DB7C  83 C4 10                  ADD ESP,0x10
0053DB7F  50                        PUSH EAX
0053DB80  6A 01                     PUSH 0x1
0053DB82  51                        PUSH ECX
0053DB83  E8 68 BF 1C 00            CALL 0x00709af0
0053DB88  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0053DB8B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0053DB8E  50                        PUSH EAX
0053DB8F  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0053DB92  6A 01                     PUSH 0x1
0053DB94  53                        PUSH EBX
0053DB95  52                        PUSH EDX
0053DB96  50                        PUSH EAX
0053DB97  E8 8D 56 EC FF            CALL 0x00403229
0053DB9C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0053DB9F  83 C4 34                  ADD ESP,0x34
0053DBA2  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0053DBA5  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0053DBA8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0053DBAB  51                        PUSH ECX
0053DBAC  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
0053DBAF  52                        PUSH EDX
0053DBB0  8B 15 28 2A 80 00         MOV EDX,dword ptr [0x00802a28]
0053DBB6  53                        PUSH EBX
0053DBB7  50                        PUSH EAX
0053DBB8  6A 00                     PUSH 0x0
0053DBBA  51                        PUSH ECX
0053DBBB  8B 4A 24                  MOV ECX,dword ptr [EDX + 0x24]
0053DBBE  E8 CD 2E 1D 00            CALL 0x00710a90
0053DBC3  57                        PUSH EDI
0053DBC4  E8 BF 42 EC FF            CALL 0x00401e88
0053DBC9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0053DBCC  83 C4 04                  ADD ESP,0x4
0053DBCF  50                        PUSH EAX
0053DBD0  A1 18 76 80 00            MOV EAX,[0x00807618]
0053DBD5  6A FF                     PUSH -0x1
0053DBD7  6A FE                     PUSH -0x2
0053DBD9  50                        PUSH EAX
0053DBDA  51                        PUSH ECX
0053DBDB  E8 60 25 17 00            CALL 0x006b0140
0053DBE0  8B 15 28 2A 80 00         MOV EDX,dword ptr [0x00802a28]
0053DBE6  50                        PUSH EAX
0053DBE7  8B 4A 24                  MOV ECX,dword ptr [EDX + 0x24]
0053DBEA  E8 D1 3D 1D 00            CALL 0x007119c0
0053DBEF  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0053DBF2  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0053DBF5  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
0053DBF8  50                        PUSH EAX
0053DBF9  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0053DBFE  51                        PUSH ECX
0053DBFF  6A FF                     PUSH -0x1
0053DC01  52                        PUSH EDX
0053DC02  50                        PUSH EAX
0053DC03  E8 38 5A 17 00            CALL 0x006b3640
0053DC08  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0053DC0B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053DC11  5F                        POP EDI
0053DC12  5E                        POP ESI
0053DC13  5B                        POP EBX
0053DC14  8B E5                     MOV ESP,EBP
0053DC16  5D                        POP EBP
0053DC17  C2 0C 00                  RET 0xc
LAB_0053dc1a:
0053DC1A  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0053DC1D  68 CC 78 7C 00            PUSH 0x7c78cc
0053DC22  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053DC27  56                        PUSH ESI
0053DC28  6A 00                     PUSH 0x0
0053DC2A  6A 51                     PUSH 0x51
0053DC2C  68 70 78 7C 00            PUSH 0x7c7870
0053DC31  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053DC37  E8 94 F8 16 00            CALL 0x006ad4d0
0053DC3C  83 C4 18                  ADD ESP,0x18
0053DC3F  85 C0                     TEST EAX,EAX
0053DC41  74 01                     JZ 0x0053dc44
0053DC43  CC                        INT3
LAB_0053dc44:
0053DC44  6A 51                     PUSH 0x51
0053DC46  68 70 78 7C 00            PUSH 0x7c7870
0053DC4B  6A 00                     PUSH 0x0
0053DC4D  56                        PUSH ESI
0053DC4E  E8 ED 81 16 00            CALL 0x006a5e40
0053DC53  5F                        POP EDI
0053DC54  5E                        POP ESI
0053DC55  5B                        POP EBX
0053DC56  8B E5                     MOV ESP,EBP
0053DC58  5D                        POP EBP
0053DC59  C2 0C 00                  RET 0xc
