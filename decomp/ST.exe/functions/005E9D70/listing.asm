WaitTy::DeleteCtrls:
005E9D70  55                        PUSH EBP
005E9D71  8B EC                     MOV EBP,ESP
005E9D73  83 EC 4C                  SUB ESP,0x4c
005E9D76  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E9D7B  53                        PUSH EBX
005E9D7C  56                        PUSH ESI
005E9D7D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005E9D80  33 DB                     XOR EBX,EBX
005E9D82  57                        PUSH EDI
005E9D83  8D 55 B8                  LEA EDX,[EBP + -0x48]
005E9D86  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005E9D89  53                        PUSH EBX
005E9D8A  52                        PUSH EDX
005E9D8B  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005E9D8E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E9D94  E8 57 3A 14 00            CALL 0x0072d7f0
005E9D99  8B F0                     MOV ESI,EAX
005E9D9B  83 C4 08                  ADD ESP,0x8
005E9D9E  3B F3                     CMP ESI,EBX
005E9DA0  0F 85 BD 06 00 00         JNZ 0x005ea463
005E9DA6  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005E9DAB  3B C3                     CMP EAX,EBX
005E9DAD  74 28                     JZ 0x005e9dd7
005E9DAF  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005E9DB5  74 14                     JZ 0x005e9dcb
005E9DB7  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005E9DBA  83 F9 FF                  CMP ECX,-0x1
005E9DBD  74 18                     JZ 0x005e9dd7
005E9DBF  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005E9DC2  51                        PUSH ECX
005E9DC3  50                        PUSH EAX
005E9DC4  E8 27 9D 0C 00            CALL 0x006b3af0
005E9DC9  EB 0C                     JMP 0x005e9dd7
LAB_005e9dcb:
005E9DCB  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005E9DD1  51                        PUSH ECX
005E9DD2  E8 39 ED 0C 00            CALL 0x006b8b10
LAB_005e9dd7:
005E9DD7  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005E9DDA  53                        PUSH EBX
005E9DDB  53                        PUSH EBX
005E9DDC  53                        PUSH EBX
005E9DDD  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
005E9DE0  53                        PUSH EBX
005E9DE1  53                        PUSH EBX
005E9DE2  53                        PUSH EBX
005E9DE3  6A 1C                     PUSH 0x1c
005E9DE5  6A 02                     PUSH 0x2
005E9DE7  68 A1 C0 00 00            PUSH 0xc0a1
005E9DEC  6A 02                     PUSH 0x2
005E9DEE  52                        PUSH EDX
005E9DEF  53                        PUSH EBX
005E9DF0  E8 CA 8F E1 FF            CALL 0x00402dbf
005E9DF5  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E9DFA  83 C4 30                  ADD ESP,0x30
005E9DFD  68 9D 01 00 00            PUSH 0x19d
005E9E02  68 04 02 00 00            PUSH 0x204
005E9E07  6A 38                     PUSH 0x38
005E9E09  68 12 01 00 00            PUSH 0x112
005E9E0E  50                        PUSH EAX
005E9E0F  E8 6C C1 0C 00            CALL 0x006b5f80
005E9E14  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005E9E1A  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005E9E20  81 C1 40 01 00 00         ADD ECX,0x140
005E9E26  51                        PUSH ECX
005E9E27  68 9D 01 00 00            PUSH 0x19d
005E9E2C  68 04 02 00 00            PUSH 0x204
005E9E31  6A 38                     PUSH 0x38
005E9E33  68 12 01 00 00            PUSH 0x112
005E9E38  53                        PUSH EBX
005E9E39  53                        PUSH EBX
005E9E3A  52                        PUSH EDX
005E9E3B  E8 59 92 E1 FF            CALL 0x00403099
005E9E40  8B 8E F8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af8]
005E9E46  3B CB                     CMP ECX,EBX
005E9E48  74 1A                     JZ 0x005e9e64
005E9E4A  E8 3B 74 E1 FF            CALL 0x0040128a
005E9E4F  8B 86 F8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af8]
005E9E55  50                        PUSH EAX
005E9E56  E8 55 44 14 00            CALL 0x0072e2b0
005E9E5B  83 C4 04                  ADD ESP,0x4
005E9E5E  89 9E F8 1A 00 00         MOV dword ptr [ESI + 0x1af8],EBX
LAB_005e9e64:
005E9E64  6A 33                     PUSH 0x33
005E9E66  E8 C5 46 14 00            CALL 0x0072e530
005E9E6B  83 C4 04                  ADD ESP,0x4
005E9E6E  3B C3                     CMP EAX,EBX
005E9E70  74 3A                     JZ 0x005e9eac
005E9E72  BF 01 00 00 00            MOV EDI,0x1
005E9E77  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005E9E7B  88 18                     MOV byte ptr [EAX],BL
005E9E7D  C7 40 03 FF FF FF FF      MOV dword ptr [EAX + 0x3],0xffffffff
005E9E84  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005E9E88  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005E9E8B  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005E9E8E  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005E9E91  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005E9E94  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005E9E97  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005E9E9E  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005E9EA1  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005E9EA4  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005E9EA7  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005E9EAA  EB 07                     JMP 0x005e9eb3
LAB_005e9eac:
005E9EAC  33 C0                     XOR EAX,EAX
005E9EAE  BF 01 00 00 00            MOV EDI,0x1
LAB_005e9eb3:
005E9EB3  3B C3                     CMP EAX,EBX
005E9EB5  89 86 F8 1A 00 00         MOV dword ptr [ESI + 0x1af8],EAX
005E9EBB  0F 84 9A 00 00 00         JZ 0x005e9f5b
005E9EC1  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E9EC7  53                        PUSH EBX
005E9EC8  57                        PUSH EDI
005E9EC9  6A 10                     PUSH 0x10
005E9ECB  57                        PUSH EDI
005E9ECC  68 9D 01 00 00            PUSH 0x19d
005E9ED1  68 04 02 00 00            PUSH 0x204
005E9ED6  6A 38                     PUSH 0x38
005E9ED8  68 12 01 00 00            PUSH 0x112
005E9EDD  51                        PUSH ECX
005E9EDE  E8 0D 5B 0D 00            CALL 0x006bf9f0
005E9EE3  8B 8E F8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af8]
005E9EE9  50                        PUSH EAX
005E9EEA  6A 38                     PUSH 0x38
005E9EEC  68 12 01 00 00            PUSH 0x112
005E9EF1  6A 02                     PUSH 0x2
005E9EF3  E8 A5 A6 E1 FF            CALL 0x0040459d
005E9EF8  85 C0                     TEST EAX,EAX
005E9EFA  74 35                     JZ 0x005e9f31
005E9EFC  8B 86 F8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af8]
005E9F02  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005E9F05  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005E9F0C  8B 86 F8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af8]
005E9F12  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E9F15  3B C3                     CMP EAX,EBX
005E9F17  7C 0D                     JL 0x005e9f26
005E9F19  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E9F1F  50                        PUSH EAX
005E9F20  52                        PUSH EDX
005E9F21  E8 0A 95 0C 00            CALL 0x006b3430
LAB_005e9f26:
005E9F26  8B 8E F8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af8]
005E9F2C  E8 C0 B6 E1 FF            CALL 0x004055f1
LAB_005e9f31:
005E9F31  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E9F36  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005E9F39  51                        PUSH ECX
005E9F3A  57                        PUSH EDI
005E9F3B  68 9D 01 00 00            PUSH 0x19d
005E9F40  68 04 02 00 00            PUSH 0x204
005E9F45  6A 38                     PUSH 0x38
005E9F47  68 12 01 00 00            PUSH 0x112
005E9F4C  6A 38                     PUSH 0x38
005E9F4E  68 12 01 00 00            PUSH 0x112
005E9F53  E8 40 83 E1 FF            CALL 0x00402298
005E9F58  83 C4 20                  ADD ESP,0x20
LAB_005e9f5b:
005E9F5B  8D BE 94 1A 00 00         LEA EDI,[ESI + 0x1a94]
005E9F61  C7 45 FC 16 00 00 00      MOV dword ptr [EBP + -0x4],0x16
LAB_005e9f68:
005E9F68  8B 17                     MOV EDX,dword ptr [EDI]
005E9F6A  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E9F6F  52                        PUSH EDX
005E9F70  50                        PUSH EAX
005E9F71  E8 7A 9B 0C 00            CALL 0x006b3af0
005E9F76  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E9F79  83 C7 04                  ADD EDI,0x4
005E9F7C  48                        DEC EAX
005E9F7D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005E9F80  75 E6                     JNZ 0x005e9f68
005E9F82  39 9E 64 1A 00 00         CMP dword ptr [ESI + 0x1a64],EBX
005E9F88  74 37                     JZ 0x005e9fc1
005E9F8A  80 BE 5F 1A 00 00 0E      CMP byte ptr [ESI + 0x1a5f],0xe
005E9F91  74 2E                     JZ 0x005e9fc1
005E9F93  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005E9F9A  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005E9F9D  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E9FA3  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005E9FA6  51                        PUSH ECX
005E9FA7  8B CE                     MOV ECX,ESI
005E9FA9  8B 82 89 03 00 00         MOV EAX,dword ptr [EDX + 0x389]
005E9FAF  50                        PUSH EAX
005E9FB0  6A 02                     PUSH 0x2
005E9FB2  E8 C9 C0 0F 00            CALL 0x006e6080
005E9FB7  BF 01 00 00 00            MOV EDI,0x1
005E9FBC  E9 11 02 00 00            JMP 0x005ea1d2
LAB_005e9fc1:
005E9FC1  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E9FC7  8B 81 89 03 00 00         MOV EAX,dword ptr [ECX + 0x389]
005E9FCD  3B C3                     CMP EAX,EBX
005E9FCF  74 09                     JZ 0x005e9fda
005E9FD1  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005E9FD4  50                        PUSH EAX
005E9FD5  E8 D6 B6 0F 00            CALL 0x006e56b0
LAB_005e9fda:
005E9FDA  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E9FE0  68 FF 00 00 00            PUSH 0xff
005E9FE5  89 9A 89 03 00 00         MOV dword ptr [EDX + 0x389],EBX
005E9FEB  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E9FF0  8B 80 44 05 00 00         MOV EAX,dword ptr [EAX + 0x544]
005E9FF6  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005E9FF9  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005E9FFC  51                        PUSH ECX
005E9FFD  52                        PUSH EDX
005E9FFE  53                        PUSH EBX
005E9FFF  53                        PUSH EBX
005EA000  53                        PUSH EBX
005EA001  50                        PUSH EAX
005EA002  E8 69 A1 0C 00            CALL 0x006b4170
005EA007  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005EA00C  8B 80 48 05 00 00         MOV EAX,dword ptr [EAX + 0x548]
005EA012  3B C3                     CMP EAX,EBX
005EA014  74 06                     JZ 0x005ea01c
005EA016  50                        PUSH EAX
005EA017  E8 54 B5 0C 00            CALL 0x006b5570
LAB_005ea01c:
005EA01C  6A 0A                     PUSH 0xa
005EA01E  6A 0A                     PUSH 0xa
005EA020  53                        PUSH EBX
005EA021  E8 CA B4 0C 00            CALL 0x006b54f0
005EA026  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005EA02C  89 81 48 05 00 00         MOV dword ptr [ECX + 0x548],EAX
005EA032  8B 8E 00 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b00]
005EA038  3B CB                     CMP ECX,EBX
005EA03A  74 1A                     JZ 0x005ea056
005EA03C  E8 49 72 E1 FF            CALL 0x0040128a
005EA041  8B 96 00 1B 00 00         MOV EDX,dword ptr [ESI + 0x1b00]
005EA047  52                        PUSH EDX
005EA048  E8 63 42 14 00            CALL 0x0072e2b0
005EA04D  83 C4 04                  ADD ESP,0x4
005EA050  89 9E 00 1B 00 00         MOV dword ptr [ESI + 0x1b00],EBX
LAB_005ea056:
005EA056  6A 33                     PUSH 0x33
005EA058  E8 D3 44 14 00            CALL 0x0072e530
005EA05D  83 C4 04                  ADD ESP,0x4
005EA060  3B C3                     CMP EAX,EBX
005EA062  74 35                     JZ 0x005ea099
005EA064  83 C9 FF                  OR ECX,0xffffffff
005EA067  BF 01 00 00 00            MOV EDI,0x1
005EA06C  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005EA070  88 18                     MOV byte ptr [EAX],BL
005EA072  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005EA075  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005EA079  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005EA07C  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005EA07F  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005EA082  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005EA085  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005EA088  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005EA08B  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005EA08E  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005EA091  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005EA094  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005EA097  EB 07                     JMP 0x005ea0a0
LAB_005ea099:
005EA099  33 C0                     XOR EAX,EAX
005EA09B  BF 01 00 00 00            MOV EDI,0x1
LAB_005ea0a0:
005EA0A0  3B C3                     CMP EAX,EBX
005EA0A2  89 86 00 1B 00 00         MOV dword ptr [ESI + 0x1b00],EAX
005EA0A8  0F 84 B6 00 00 00         JZ 0x005ea164
005EA0AE  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005EA0B3  53                        PUSH EBX
005EA0B4  57                        PUSH EDI
005EA0B5  6A 10                     PUSH 0x10
005EA0B7  57                        PUSH EDI
005EA0B8  68 21 01 00 00            PUSH 0x121
005EA0BD  68 F9 00 00 00            PUSH 0xf9
005EA0C2  68 B4 00 00 00            PUSH 0xb4
005EA0C7  6A 0A                     PUSH 0xa
005EA0C9  50                        PUSH EAX
005EA0CA  E8 21 59 0D 00            CALL 0x006bf9f0
005EA0CF  8B 8E 00 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b00]
005EA0D5  50                        PUSH EAX
005EA0D6  68 B4 00 00 00            PUSH 0xb4
005EA0DB  6A 0A                     PUSH 0xa
005EA0DD  6A 04                     PUSH 0x4
005EA0DF  E8 B9 A4 E1 FF            CALL 0x0040459d
005EA0E4  85 C0                     TEST EAX,EAX
005EA0E6  74 35                     JZ 0x005ea11d
005EA0E8  8B 86 00 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b00]
005EA0EE  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005EA0F1  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005EA0F8  8B 86 00 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b00]
005EA0FE  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005EA101  3B C3                     CMP EAX,EBX
005EA103  7C 0D                     JL 0x005ea112
005EA105  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005EA10B  50                        PUSH EAX
005EA10C  51                        PUSH ECX
005EA10D  E8 1E 93 0C 00            CALL 0x006b3430
LAB_005ea112:
005EA112  8B 8E 00 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b00]
005EA118  E8 D4 B4 E1 FF            CALL 0x004055f1
LAB_005ea11d:
005EA11D  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005EA123  68 21 01 00 00            PUSH 0x121
005EA128  68 F9 00 00 00            PUSH 0xf9
005EA12D  68 B4 00 00 00            PUSH 0xb4
005EA132  6A 0A                     PUSH 0xa
005EA134  52                        PUSH EDX
005EA135  E8 46 BE 0C 00            CALL 0x006b5f80
005EA13A  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005EA13F  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005EA142  51                        PUSH ECX
005EA143  57                        PUSH EDI
005EA144  68 21 01 00 00            PUSH 0x121
005EA149  68 F9 00 00 00            PUSH 0xf9
005EA14E  68 B4 00 00 00            PUSH 0xb4
005EA153  6A 0A                     PUSH 0xa
005EA155  68 B4 00 00 00            PUSH 0xb4
005EA15A  6A 0A                     PUSH 0xa
005EA15C  E8 37 81 E1 FF            CALL 0x00402298
005EA161  83 C4 20                  ADD ESP,0x20
LAB_005ea164:
005EA164  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005EA169  8B 88 91 03 00 00         MOV ECX,dword ptr [EAX + 0x391]
005EA16F  83 F9 FF                  CMP ECX,-0x1
005EA172  74 12                     JZ 0x005ea186
005EA174  8B 90 D5 03 00 00         MOV EDX,dword ptr [EAX + 0x3d5]
005EA17A  51                        PUSH ECX
005EA17B  52                        PUSH EDX
005EA17C  E8 6F 99 0C 00            CALL 0x006b3af0
005EA181  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005ea186:
005EA186  8B 88 22 04 00 00         MOV ECX,dword ptr [EAX + 0x422]
005EA18C  83 F9 FF                  CMP ECX,-0x1
005EA18F  74 12                     JZ 0x005ea1a3
005EA191  8B 80 66 04 00 00         MOV EAX,dword ptr [EAX + 0x466]
005EA197  51                        PUSH ECX
005EA198  50                        PUSH EAX
005EA199  E8 52 99 0C 00            CALL 0x006b3af0
005EA19E  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005ea1a3:
005EA1A3  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005EA1A9  83 F9 FF                  CMP ECX,-0x1
005EA1AC  74 12                     JZ 0x005ea1c0
005EA1AE  51                        PUSH ECX
005EA1AF  8B 88 F7 04 00 00         MOV ECX,dword ptr [EAX + 0x4f7]
005EA1B5  51                        PUSH ECX
005EA1B6  E8 35 99 0C 00            CALL 0x006b3af0
005EA1BB  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005ea1c0:
005EA1C0  8B 90 40 05 00 00         MOV EDX,dword ptr [EAX + 0x540]
005EA1C6  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005EA1CB  52                        PUSH EDX
005EA1CC  50                        PUSH EAX
005EA1CD  E8 1E 99 0C 00            CALL 0x006b3af0
LAB_005ea1d2:
005EA1D2  39 9E 64 1A 00 00         CMP dword ptr [ESI + 0x1a64],EBX
005EA1D8  0F 85 E4 01 00 00         JNZ 0x005ea3c2
005EA1DE  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005EA1E4  8B 81 4C 05 00 00         MOV EAX,dword ptr [ECX + 0x54c]
005EA1EA  3B C3                     CMP EAX,EBX
005EA1EC  74 15                     JZ 0x005ea203
005EA1EE  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005EA1F1  50                        PUSH EAX
005EA1F2  E8 B9 B4 0F 00            CALL 0x006e56b0
005EA1F7  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005EA1FD  89 9A 4C 05 00 00         MOV dword ptr [EDX + 0x54c],EBX
LAB_005ea203:
005EA203  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005EA208  8B 80 50 05 00 00         MOV EAX,dword ptr [EAX + 0x550]
005EA20E  3B C3                     CMP EAX,EBX
005EA210  74 15                     JZ 0x005ea227
005EA212  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005EA215  50                        PUSH EAX
005EA216  E8 95 B4 0F 00            CALL 0x006e56b0
005EA21B  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005EA221  89 99 50 05 00 00         MOV dword ptr [ECX + 0x550],EBX
LAB_005ea227:
005EA227  8B 8E FC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1afc]
005EA22D  3B CB                     CMP ECX,EBX
005EA22F  74 1A                     JZ 0x005ea24b
005EA231  E8 54 70 E1 FF            CALL 0x0040128a
005EA236  8B 96 FC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1afc]
005EA23C  52                        PUSH EDX
005EA23D  E8 6E 40 14 00            CALL 0x0072e2b0
005EA242  83 C4 04                  ADD ESP,0x4
005EA245  89 9E FC 1A 00 00         MOV dword ptr [ESI + 0x1afc],EBX
LAB_005ea24b:
005EA24B  6A 33                     PUSH 0x33
005EA24D  E8 DE 42 14 00            CALL 0x0072e530
005EA252  83 C4 04                  ADD ESP,0x4
005EA255  3B C3                     CMP EAX,EBX
005EA257  74 30                     JZ 0x005ea289
005EA259  83 C9 FF                  OR ECX,0xffffffff
005EA25C  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005EA260  88 18                     MOV byte ptr [EAX],BL
005EA262  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005EA265  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005EA269  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005EA26C  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005EA26F  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005EA272  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005EA275  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005EA278  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005EA27B  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005EA27E  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005EA281  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005EA284  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005EA287  EB 02                     JMP 0x005ea28b
LAB_005ea289:
005EA289  33 C0                     XOR EAX,EAX
LAB_005ea28b:
005EA28B  3B C3                     CMP EAX,EBX
005EA28D  89 86 FC 1A 00 00         MOV dword ptr [ESI + 0x1afc],EAX
005EA293  0F 84 BB 00 00 00         JZ 0x005ea354
005EA299  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005EA29E  53                        PUSH EBX
005EA29F  57                        PUSH EDI
005EA2A0  6A 10                     PUSH 0x10
005EA2A2  57                        PUSH EDI
005EA2A3  6A 62                     PUSH 0x62
005EA2A5  68 90 01 00 00            PUSH 0x190
005EA2AA  68 F1 01 00 00            PUSH 0x1f1
005EA2AF  68 C8 00 00 00            PUSH 0xc8
005EA2B4  50                        PUSH EAX
005EA2B5  E8 36 57 0D 00            CALL 0x006bf9f0
005EA2BA  8B 8E FC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1afc]
005EA2C0  50                        PUSH EAX
005EA2C1  68 F1 01 00 00            PUSH 0x1f1
005EA2C6  68 C8 00 00 00            PUSH 0xc8
005EA2CB  57                        PUSH EDI
005EA2CC  E8 CC A2 E1 FF            CALL 0x0040459d
005EA2D1  85 C0                     TEST EAX,EAX
005EA2D3  74 35                     JZ 0x005ea30a
005EA2D5  8B 86 FC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1afc]
005EA2DB  88 58 02                  MOV byte ptr [EAX + 0x2],BL
005EA2DE  C7 40 17 FF FF FF FF      MOV dword ptr [EAX + 0x17],0xffffffff
005EA2E5  8B 86 FC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1afc]
005EA2EB  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005EA2EE  3B C3                     CMP EAX,EBX
005EA2F0  7C 0D                     JL 0x005ea2ff
005EA2F2  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005EA2F8  50                        PUSH EAX
005EA2F9  51                        PUSH ECX
005EA2FA  E8 31 91 0C 00            CALL 0x006b3430
LAB_005ea2ff:
005EA2FF  8B 8E FC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1afc]
005EA305  E8 E7 B2 E1 FF            CALL 0x004055f1
LAB_005ea30a:
005EA30A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005EA310  6A 62                     PUSH 0x62
005EA312  68 90 01 00 00            PUSH 0x190
005EA317  68 F1 01 00 00            PUSH 0x1f1
005EA31C  68 C8 00 00 00            PUSH 0xc8
005EA321  52                        PUSH EDX
005EA322  E8 59 BC 0C 00            CALL 0x006b5f80
005EA327  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005EA32C  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
005EA32F  51                        PUSH ECX
005EA330  57                        PUSH EDI
005EA331  6A 62                     PUSH 0x62
005EA333  68 90 01 00 00            PUSH 0x190
005EA338  68 F1 01 00 00            PUSH 0x1f1
005EA33D  68 C8 00 00 00            PUSH 0xc8
005EA342  68 F1 01 00 00            PUSH 0x1f1
005EA347  68 C8 00 00 00            PUSH 0xc8
005EA34C  E8 47 7F E1 FF            CALL 0x00402298
005EA351  83 C4 20                  ADD ESP,0x20
LAB_005ea354:
005EA354  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005EA35A  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005EA360  8B 82 54 05 00 00         MOV EAX,dword ptr [EDX + 0x554]
005EA366  50                        PUSH EAX
005EA367  51                        PUSH ECX
005EA368  E8 83 97 0C 00            CALL 0x006b3af0
005EA36D  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005EA373  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005EA379  8B 82 58 05 00 00         MOV EAX,dword ptr [EDX + 0x558]
005EA37F  50                        PUSH EAX
005EA380  51                        PUSH ECX
005EA381  E8 6A 97 0C 00            CALL 0x006b3af0
005EA386  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005EA38B  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005EA391  83 F9 FF                  CMP ECX,-0x1
005EA394  74 12                     JZ 0x005ea3a8
005EA396  8B 90 A4 05 00 00         MOV EDX,dword ptr [EAX + 0x5a4]
005EA39C  51                        PUSH ECX
005EA39D  52                        PUSH EDX
005EA39E  E8 4D 97 0C 00            CALL 0x006b3af0
005EA3A3  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005ea3a8:
005EA3A8  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005EA3AE  83 F9 FF                  CMP ECX,-0x1
005EA3B1  74 57                     JZ 0x005ea40a
005EA3B3  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005EA3B9  51                        PUSH ECX
005EA3BA  50                        PUSH EAX
005EA3BB  E8 30 97 0C 00            CALL 0x006b3af0
005EA3C0  EB 48                     JMP 0x005ea40a
LAB_005ea3c2:
005EA3C2  C7 46 2D 20 00 00 00      MOV dword ptr [ESI + 0x2d],0x20
005EA3C9  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005EA3CC  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005EA3D2  8B 81 4C 05 00 00         MOV EAX,dword ptr [ECX + 0x54c]
005EA3D8  3B C3                     CMP EAX,EBX
005EA3DA  74 0E                     JZ 0x005ea3ea
005EA3DC  8D 56 1D                  LEA EDX,[ESI + 0x1d]
005EA3DF  8B CE                     MOV ECX,ESI
005EA3E1  52                        PUSH EDX
005EA3E2  50                        PUSH EAX
005EA3E3  6A 02                     PUSH 0x2
005EA3E5  E8 96 BC 0F 00            CALL 0x006e6080
LAB_005ea3ea:
005EA3EA  89 5E 31                  MOV dword ptr [ESI + 0x31],EBX
005EA3ED  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005EA3F2  8B 80 50 05 00 00         MOV EAX,dword ptr [EAX + 0x550]
005EA3F8  3B C3                     CMP EAX,EBX
005EA3FA  74 0E                     JZ 0x005ea40a
005EA3FC  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
005EA3FF  51                        PUSH ECX
005EA400  50                        PUSH EAX
005EA401  6A 02                     PUSH 0x2
005EA403  8B CE                     MOV ECX,ESI
005EA405  E8 76 BC 0F 00            CALL 0x006e6080
LAB_005ea40a:
005EA40A  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005EA40F  3B C3                     CMP EAX,EBX
005EA411  74 40                     JZ 0x005ea453
005EA413  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005EA419  74 2C                     JZ 0x005ea447
005EA41B  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005EA41E  83 F9 FF                  CMP ECX,-0x1
005EA421  74 30                     JZ 0x005ea453
005EA423  8B 50 38                  MOV EDX,dword ptr [EAX + 0x38]
005EA426  52                        PUSH EDX
005EA427  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
005EA42A  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005EA42D  52                        PUSH EDX
005EA42E  6A FE                     PUSH -0x2
005EA430  51                        PUSH ECX
005EA431  50                        PUSH EAX
005EA432  E8 99 90 0C 00            CALL 0x006b34d0
005EA437  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005EA43A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005EA440  5F                        POP EDI
005EA441  5E                        POP ESI
005EA442  5B                        POP EBX
005EA443  8B E5                     MOV ESP,EBP
005EA445  5D                        POP EBP
005EA446  C3                        RET
LAB_005ea447:
005EA447  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005EA44D  51                        PUSH ECX
005EA44E  E8 0D E6 0C 00            CALL 0x006b8a60
LAB_005ea453:
005EA453  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005EA456  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005EA45C  5F                        POP EDI
005EA45D  5E                        POP ESI
005EA45E  5B                        POP EBX
005EA45F  8B E5                     MOV ESP,EBP
005EA461  5D                        POP EBP
005EA462  C3                        RET
LAB_005ea463:
005EA463  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005EA466  68 3C DE 7C 00            PUSH 0x7cde3c
005EA46B  68 CC 4C 7A 00            PUSH 0x7a4ccc
005EA470  56                        PUSH ESI
005EA471  53                        PUSH EBX
005EA472  68 4C 03 00 00            PUSH 0x34c
005EA477  68 5C DD 7C 00            PUSH 0x7cdd5c
005EA47C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005EA481  E8 4A 30 0C 00            CALL 0x006ad4d0
005EA486  83 C4 18                  ADD ESP,0x18
005EA489  85 C0                     TEST EAX,EAX
005EA48B  74 01                     JZ 0x005ea48e
005EA48D  CC                        INT3
LAB_005ea48e:
005EA48E  68 4C 03 00 00            PUSH 0x34c
005EA493  68 5C DD 7C 00            PUSH 0x7cdd5c
005EA498  53                        PUSH EBX
005EA499  56                        PUSH ESI
005EA49A  E8 A1 B9 0B 00            CALL 0x006a5e40
005EA49F  5F                        POP EDI
005EA4A0  5E                        POP ESI
005EA4A1  5B                        POP EBX
005EA4A2  8B E5                     MOV ESP,EBP
005EA4A4  5D                        POP EBP
005EA4A5  C3                        RET
