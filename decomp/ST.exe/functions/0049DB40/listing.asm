FUN_0049db40:
0049DB40  55                        PUSH EBP
0049DB41  8B EC                     MOV EBP,ESP
0049DB43  83 EC 74                  SUB ESP,0x74
0049DB46  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049DB49  53                        PUSH EBX
0049DB4A  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049DB50  33 DB                     XOR EBX,EBX
0049DB52  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0049DB55  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0049DB58  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0049DB5B  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0049DB5E  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049DB61  56                        PUSH ESI
0049DB62  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0049DB65  57                        PUSH EDI
0049DB66  8D 4D 90                  LEA ECX,[EBP + -0x70]
0049DB69  8D 45 8C                  LEA EAX,[EBP + -0x74]
0049DB6C  53                        PUSH EBX
0049DB6D  51                        PUSH ECX
0049DB6E  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
0049DB71  C7 45 D0 02 00 00 00      MOV dword ptr [EBP + -0x30],0x2
0049DB78  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
0049DB7B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049DB80  E8 6B FC 28 00            CALL 0x0072d7f0
0049DB85  8B F0                     MOV ESI,EAX
0049DB87  83 C4 08                  ADD ESP,0x8
0049DB8A  3B F3                     CMP ESI,EBX
0049DB8C  0F 85 E0 02 00 00         JNZ 0x0049de72
0049DB92  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049DB95  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
0049DB98  83 F8 01                  CMP EAX,0x1
0049DB9B  74 26                     JZ 0x0049dbc3
0049DB9D  3B C3                     CMP EAX,EBX
0049DB9F  74 22                     JZ 0x0049dbc3
0049DBA1  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0049DBA7  B9 05 00 00 00            MOV ECX,0x5
0049DBAC  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0049DBB2  33 D2                     XOR EDX,EDX
0049DBB4  F7 F1                     DIV ECX
0049DBB6  85 D2                     TEST EDX,EDX
0049DBB8  0F 85 9F 02 00 00         JNZ 0x0049de5d
0049DBBE  E9 DD 01 00 00            JMP 0x0049dda0
LAB_0049dbc3:
0049DBC3  6A 01                     PUSH 0x1
0049DBC5  B9 15 00 00 00            MOV ECX,0x15
0049DBCA  33 C0                     XOR EAX,EAX
0049DBCC  8D BE 89 00 00 00         LEA EDI,[ESI + 0x89]
0049DBD2  6A 02                     PUSH 0x2
0049DBD4  53                        PUSH EBX
0049DBD5  F3 AB                     STOSD.REP ES:EDI
0049DBD7  53                        PUSH EBX
0049DBD8  89 5E 65                  MOV dword ptr [ESI + 0x65],EBX
0049DBDB  E8 B0 06 21 00            CALL 0x006ae290
0049DBE0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0049DBE3  8B 86 64 01 00 00         MOV EAX,dword ptr [ESI + 0x164]
0049DBE9  3B C3                     CMP EAX,EBX
0049DBEB  75 0E                     JNZ 0x0049dbfb
0049DBED  8B 96 68 01 00 00         MOV EDX,dword ptr [ESI + 0x168]
0049DBF3  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049DBF6  E8 45 22 21 00            CALL 0x006afe40
LAB_0049dbfb:
0049DBFB  83 BE 64 01 00 00 01      CMP dword ptr [ESI + 0x164],0x1
0049DC02  0F 85 A1 00 00 00         JNZ 0x0049dca9
0049DC08  8D 55 EC                  LEA EDX,[EBP + -0x14]
0049DC0B  8D 45 F0                  LEA EAX,[EBP + -0x10]
0049DC0E  52                        PUSH EDX
0049DC0F  8D 4D F4                  LEA ECX,[EBP + -0xc]
0049DC12  50                        PUSH EAX
0049DC13  66 8B 86 76 01 00 00      MOV AX,word ptr [ESI + 0x176]
0049DC1A  8D 55 E8                  LEA EDX,[EBP + -0x18]
0049DC1D  51                        PUSH ECX
0049DC1E  66 8B 8E 74 01 00 00      MOV CX,word ptr [ESI + 0x174]
0049DC25  52                        PUSH EDX
0049DC26  66 8B 96 72 01 00 00      MOV DX,word ptr [ESI + 0x172]
0049DC2D  50                        PUSH EAX
0049DC2E  66 8B 86 70 01 00 00      MOV AX,word ptr [ESI + 0x170]
0049DC35  51                        PUSH ECX
0049DC36  66 8B 8E 6E 01 00 00      MOV CX,word ptr [ESI + 0x16e]
0049DC3D  52                        PUSH EDX
0049DC3E  66 8B 96 6C 01 00 00      MOV DX,word ptr [ESI + 0x16c]
0049DC45  50                        PUSH EAX
0049DC46  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0049DC49  51                        PUSH ECX
0049DC4A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049DC50  52                        PUSH EDX
0049DC51  50                        PUSH EAX
0049DC52  E8 12 5C F6 FF            CALL 0x00403869
0049DC57  39 5D F0                  CMP dword ptr [EBP + -0x10],EBX
0049DC5A  7E 0B                     JLE 0x0049dc67
0049DC5C  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0049DC5F  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049DC62  E8 D9 21 21 00            CALL 0x006afe40
LAB_0049dc67:
0049DC67  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049DC6A  3B C3                     CMP EAX,EBX
0049DC6C  7E 3B                     JLE 0x0049dca9
0049DC6E  39 5D F0                  CMP dword ptr [EBP + -0x10],EBX
0049DC71  75 0D                     JNZ 0x0049dc80
0049DC73  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0049DC76  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049DC79  E8 C2 21 21 00            CALL 0x006afe40
0049DC7E  EB 29                     JMP 0x0049dca9
LAB_0049dc80:
0049DC80  33 FF                     XOR EDI,EDI
0049DC82  3B C3                     CMP EAX,EBX
0049DC84  7E 23                     JLE 0x0049dca9
LAB_0049dc86:
0049DC86  8D 4D F8                  LEA ECX,[EBP + -0x8]
0049DC89  8B D7                     MOV EDX,EDI
0049DC8B  51                        PUSH ECX
0049DC8C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0049DC8F  E8 DC EF 20 00            CALL 0x006acc70
0049DC94  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049DC97  8D 55 F8                  LEA EDX,[EBP + -0x8]
0049DC9A  52                        PUSH EDX
0049DC9B  50                        PUSH EAX
0049DC9C  E8 1F 05 21 00            CALL 0x006ae1c0
0049DCA1  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049DCA4  47                        INC EDI
0049DCA5  3B F8                     CMP EDI,EAX
0049DCA7  7C DD                     JL 0x0049dc86
LAB_0049dca9:
0049DCA9  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0049DCAC  33 D2                     XOR EDX,EDX
0049DCAE  3B C3                     CMP EAX,EBX
0049DCB0  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0049DCB3  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0049DCB6  0F 8E A1 00 00 00         JLE 0x0049dd5d
LAB_0049dcbc:
0049DCBC  8D 4D F8                  LEA ECX,[EBP + -0x8]
0049DCBF  51                        PUSH ECX
0049DCC0  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049DCC3  E8 A8 EF 20 00            CALL 0x006acc70
0049DCC8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049DCCB  66 3D FF FF               CMP AX,0xffff
0049DCCF  74 7A                     JZ 0x0049dd4b
0049DCD1  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0049DCD4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049DCDA  6A 01                     PUSH 0x1
0049DCDC  50                        PUSH EAX
0049DCDD  52                        PUSH EDX
0049DCDE  E8 D7 4B F6 FF            CALL 0x004028ba
0049DCE3  8B F8                     MOV EDI,EAX
0049DCE5  85 FF                     TEST EDI,EDI
0049DCE7  75 1A                     JNZ 0x0049dd03
0049DCE9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049DCEE  68 1A 0A 00 00            PUSH 0xa1a
0049DCF3  68 3C BE 7A 00            PUSH 0x7abe3c
0049DCF8  50                        PUSH EAX
0049DCF9  68 04 00 FE AF            PUSH 0xaffe0004
0049DCFE  E8 3D 81 20 00            CALL 0x006a5e40
LAB_0049dd03:
0049DD03  8B CF                     MOV ECX,EDI
0049DD05  E8 4E 71 F6 FF            CALL 0x00404e58
0049DD0A  85 C0                     TEST EAX,EAX
0049DD0C  75 1E                     JNZ 0x0049dd2c
0049DD0E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049DD14  8D 45 E0                  LEA EAX,[EBP + -0x20]
0049DD17  50                        PUSH EAX
0049DD18  6A 03                     PUSH 0x3
0049DD1A  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0049DD20  8B CF                     MOV ECX,EDI
0049DD22  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0049DD25  E8 FC 43 F6 FF            CALL 0x00402126
0049DD2A  EB 1F                     JMP 0x0049dd4b
LAB_0049dd2c:
0049DD2C  85 DB                     TEST EBX,EBX
0049DD2E  75 11                     JNZ 0x0049dd41
0049DD30  6A 01                     PUSH 0x1
0049DD32  6A 02                     PUSH 0x2
0049DD34  6A 01                     PUSH 0x1
0049DD36  53                        PUSH EBX
0049DD37  E8 54 05 21 00            CALL 0x006ae290
0049DD3C  8B D8                     MOV EBX,EAX
0049DD3E  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
LAB_0049dd41:
0049DD41  8D 4D F8                  LEA ECX,[EBP + -0x8]
0049DD44  51                        PUSH ECX
0049DD45  53                        PUSH EBX
0049DD46  E8 75 04 21 00            CALL 0x006ae1c0
LAB_0049dd4b:
0049DD4B  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0049DD4E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0049DD51  42                        INC EDX
0049DD52  3B D0                     CMP EDX,EAX
0049DD54  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0049DD57  0F 8C 5F FF FF FF         JL 0x0049dcbc
LAB_0049dd5d:
0049DD5D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0049DD60  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0049DD63  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049DD69  53                        PUSH EBX
0049DD6A  52                        PUSH EDX
0049DD6B  50                        PUSH EAX
0049DD6C  E8 2A 60 F6 FF            CALL 0x00403d9b
0049DD71  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0049DD74  51                        PUSH ECX
0049DD75  E8 96 03 21 00            CALL 0x006ae110
0049DD7A  85 DB                     TEST EBX,EBX
0049DD7C  74 06                     JZ 0x0049dd84
0049DD7E  53                        PUSH EBX
0049DD7F  E8 8C 03 21 00            CALL 0x006ae110
LAB_0049dd84:
0049DD84  8B 86 68 01 00 00         MOV EAX,dword ptr [ESI + 0x168]
0049DD8A  85 C0                     TEST EAX,EAX
0049DD8C  74 10                     JZ 0x0049dd9e
0049DD8E  50                        PUSH EAX
0049DD8F  E8 7C 03 21 00            CALL 0x006ae110
0049DD94  C7 86 68 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x168],0x0
LAB_0049dd9e:
0049DD9E  33 DB                     XOR EBX,EBX
LAB_0049dda0:
0049DDA0  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0049DDA3  85 C0                     TEST EAX,EAX
0049DDA5  0F 8E 93 00 00 00         JLE 0x0049de3e
LAB_0049ddab:
0049DDAB  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049DDAE  8D 55 F8                  LEA EDX,[EBP + -0x8]
0049DDB1  52                        PUSH EDX
0049DDB2  8B D3                     MOV EDX,EBX
0049DDB4  E8 B7 EE 20 00            CALL 0x006acc70
0049DDB9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049DDBC  66 3D FF FF               CMP AX,0xffff
0049DDC0  74 70                     JZ 0x0049de32
0049DDC2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049DDC8  6A 01                     PUSH 0x1
0049DDCA  50                        PUSH EAX
0049DDCB  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0049DDCE  50                        PUSH EAX
0049DDCF  E8 E6 4A F6 FF            CALL 0x004028ba
0049DDD4  8B F8                     MOV EDI,EAX
0049DDD6  85 FF                     TEST EDI,EDI
0049DDD8  75 3E                     JNZ 0x0049de18
0049DDDA  68 50 C0 7A 00            PUSH 0x7ac050
0049DDDF  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049DDE4  50                        PUSH EAX
0049DDE5  50                        PUSH EAX
0049DDE6  68 34 0A 00 00            PUSH 0xa34
0049DDEB  68 3C BE 7A 00            PUSH 0x7abe3c
0049DDF0  E8 DB F6 20 00            CALL 0x006ad4d0
0049DDF5  83 C4 18                  ADD ESP,0x18
0049DDF8  85 C0                     TEST EAX,EAX
0049DDFA  74 01                     JZ 0x0049ddfd
0049DDFC  CC                        INT3
LAB_0049ddfd:
0049DDFD  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049DE03  68 35 0A 00 00            PUSH 0xa35
0049DE08  68 3C BE 7A 00            PUSH 0x7abe3c
0049DE0D  51                        PUSH ECX
0049DE0E  68 04 00 FE AF            PUSH 0xaffe0004
0049DE13  E8 28 80 20 00            CALL 0x006a5e40
LAB_0049de18:
0049DE18  8B CF                     MOV ECX,EDI
0049DE1A  E8 BD 50 F6 FF            CALL 0x00402edc
0049DE1F  83 F8 05                  CMP EAX,0x5
0049DE22  74 1A                     JZ 0x0049de3e
0049DE24  6A 05                     PUSH 0x5
0049DE26  8B CF                     MOV ECX,EDI
0049DE28  E8 CC 6F F6 FF            CALL 0x00404df9
0049DE2D  83 F8 01                  CMP EAX,0x1
0049DE30  74 0C                     JZ 0x0049de3e
LAB_0049de32:
0049DE32  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0049DE35  43                        INC EBX
0049DE36  3B D8                     CMP EBX,EAX
0049DE38  0F 8C 6D FF FF FF         JL 0x0049ddab
LAB_0049de3e:
0049DE3E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0049DE41  85 C0                     TEST EAX,EAX
0049DE43  74 04                     JZ 0x0049de49
0049DE45  3B D8                     CMP EBX,EAX
0049DE47  75 14                     JNZ 0x0049de5d
LAB_0049de49:
0049DE49  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0049DE4C  33 C0                     XOR EAX,EAX
0049DE4E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049DE54  5F                        POP EDI
0049DE55  5E                        POP ESI
0049DE56  5B                        POP EBX
0049DE57  8B E5                     MOV ESP,EBP
0049DE59  5D                        POP EBP
0049DE5A  C2 04 00                  RET 0x4
LAB_0049de5d:
0049DE5D  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0049DE60  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0049DE63  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049DE69  5F                        POP EDI
0049DE6A  5E                        POP ESI
0049DE6B  5B                        POP EBX
0049DE6C  8B E5                     MOV ESP,EBP
0049DE6E  5D                        POP EBP
0049DE6F  C2 04 00                  RET 0x4
LAB_0049de72:
0049DE72  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0049DE75  68 34 C0 7A 00            PUSH 0x7ac034
0049DE7A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049DE7F  56                        PUSH ESI
0049DE80  53                        PUSH EBX
0049DE81  68 3E 0A 00 00            PUSH 0xa3e
0049DE86  68 3C BE 7A 00            PUSH 0x7abe3c
0049DE8B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049DE90  E8 3B F6 20 00            CALL 0x006ad4d0
0049DE95  83 C4 18                  ADD ESP,0x18
0049DE98  85 C0                     TEST EAX,EAX
0049DE9A  74 01                     JZ 0x0049de9d
0049DE9C  CC                        INT3
LAB_0049de9d:
0049DE9D  68 3F 0A 00 00            PUSH 0xa3f
0049DEA2  68 3C BE 7A 00            PUSH 0x7abe3c
0049DEA7  53                        PUSH EBX
0049DEA8  56                        PUSH ESI
0049DEA9  E8 92 7F 20 00            CALL 0x006a5e40
0049DEAE  5F                        POP EDI
0049DEAF  5E                        POP ESI
0049DEB0  83 C8 FF                  OR EAX,0xffffffff
0049DEB3  5B                        POP EBX
0049DEB4  8B E5                     MOV ESP,EBP
0049DEB6  5D                        POP EBP
0049DEB7  C2 04 00                  RET 0x4
