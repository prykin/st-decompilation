FUN_00510e30:
00510E30  55                        PUSH EBP
00510E31  8B EC                     MOV EBP,ESP
00510E33  83 EC 68                  SUB ESP,0x68
00510E36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00510E3B  53                        PUSH EBX
00510E3C  56                        PUSH ESI
00510E3D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00510E40  57                        PUSH EDI
00510E41  8D 55 9C                  LEA EDX,[EBP + -0x64]
00510E44  8D 4D 98                  LEA ECX,[EBP + -0x68]
00510E47  6A 00                     PUSH 0x0
00510E49  52                        PUSH EDX
00510E4A  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00510E4D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00510E53  E8 98 C9 21 00            CALL 0x0072d7f0
00510E58  8B F0                     MOV ESI,EAX
00510E5A  83 C4 08                  ADD ESP,0x8
00510E5D  85 F6                     TEST ESI,ESI
00510E5F  0F 85 B2 06 00 00         JNZ 0x00511517
00510E65  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00510E68  6A 32                     PUSH 0x32
00510E6A  6A 14                     PUSH 0x14
00510E6C  68 2C 01 00 00            PUSH 0x12c
00510E71  50                        PUSH EAX
00510E72  89 35 90 16 80 00         MOV dword ptr [0x00801690],ESI
00510E78  E8 13 D4 19 00            CALL 0x006ae290
00510E7D  6A 32                     PUSH 0x32
00510E7F  6A 14                     PUSH 0x14
00510E81  68 C8 00 00 00            PUSH 0xc8
00510E86  6A 00                     PUSH 0x0
00510E88  89 86 B3 01 00 00         MOV dword ptr [ESI + 0x1b3],EAX
00510E8E  E8 FD D3 19 00            CALL 0x006ae290
00510E93  6A 32                     PUSH 0x32
00510E95  6A 09                     PUSH 0x9
00510E97  6A 64                     PUSH 0x64
00510E99  6A 00                     PUSH 0x0
00510E9B  89 86 BB 01 00 00         MOV dword ptr [ESI + 0x1bb],EAX
00510EA1  E8 EA D3 19 00            CALL 0x006ae290
00510EA6  6A 14                     PUSH 0x14
00510EA8  6A 19                     PUSH 0x19
00510EAA  6A 14                     PUSH 0x14
00510EAC  6A 00                     PUSH 0x0
00510EAE  89 86 CB 01 00 00         MOV dword ptr [ESI + 0x1cb],EAX
00510EB4  E8 D7 D3 19 00            CALL 0x006ae290
00510EB9  89 86 D7 01 00 00         MOV dword ptr [ESI + 0x1d7],EAX
00510EBF  C6 86 53 02 00 00 00      MOV byte ptr [ESI + 0x253],0x0
00510EC6  C6 86 52 02 00 00 00      MOV byte ptr [ESI + 0x252],0x0
00510ECD  C6 86 51 02 00 00 00      MOV byte ptr [ESI + 0x251],0x0
00510ED4  C6 86 50 02 00 00 00      MOV byte ptr [ESI + 0x250],0x0
00510EDB  A1 18 C1 85 00            MOV EAX,[0x0085c118]
00510EE0  33 D2                     XOR EDX,EDX
00510EE2  83 38 00                  CMP dword ptr [EAX],0x0
00510EE5  76 46                     JBE 0x00510f2d
00510EE7  8B 8E C7 01 00 00         MOV ECX,dword ptr [ESI + 0x1c7]
00510EED  B3 08                     MOV BL,0x8
00510EEF  83 C1 0D                  ADD ECX,0xd
LAB_00510ef2:
00510EF2  38 59 FB                  CMP byte ptr [ECX + -0x5],BL
00510EF5  75 29                     JNZ 0x00510f20
00510EF7  8B 01                     MOV EAX,dword ptr [ECX]
00510EF9  48                        DEC EAX
00510EFA  74 1E                     JZ 0x00510f1a
00510EFC  48                        DEC EAX
00510EFD  74 13                     JZ 0x00510f12
00510EFF  48                        DEC EAX
00510F00  74 08                     JZ 0x00510f0a
00510F02  FE 86 50 02 00 00         INC byte ptr [ESI + 0x250]
00510F08  EB 16                     JMP 0x00510f20
LAB_00510f0a:
00510F0A  FE 86 53 02 00 00         INC byte ptr [ESI + 0x253]
00510F10  EB 0E                     JMP 0x00510f20
LAB_00510f12:
00510F12  FE 86 52 02 00 00         INC byte ptr [ESI + 0x252]
00510F18  EB 06                     JMP 0x00510f20
LAB_00510f1a:
00510F1A  FE 86 51 02 00 00         INC byte ptr [ESI + 0x251]
LAB_00510f20:
00510F20  A1 18 C1 85 00            MOV EAX,[0x0085c118]
00510F25  42                        INC EDX
00510F26  83 C1 11                  ADD ECX,0x11
00510F29  3B 10                     CMP EDX,dword ptr [EAX]
00510F2B  72 C5                     JC 0x00510ef2
LAB_00510f2d:
00510F2D  8B 08                     MOV ECX,dword ptr [EAX]
00510F2F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00510F36  85 C9                     TEST ECX,ECX
00510F38  0F 86 C2 00 00 00         JBE 0x00511000
00510F3E  33 C9                     XOR ECX,ECX
00510F40  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00510f43:
00510F43  8B 86 C7 01 00 00         MOV EAX,dword ptr [ESI + 0x1c7]
00510F49  03 C8                     ADD ECX,EAX
00510F4B  8A 41 08                  MOV AL,byte ptr [ECX + 0x8]
00510F4E  84 C0                     TEST AL,AL
00510F50  0F 84 8A 00 00 00         JZ 0x00510fe0
00510F56  8B 96 BB 01 00 00         MOV EDX,dword ptr [ESI + 0x1bb]
00510F5C  BB 01 00 00 00            MOV EBX,0x1
00510F61  33 FF                     XOR EDI,EDI
00510F63  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00510F66  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00510F69  85 C0                     TEST EAX,EAX
00510F6B  76 3C                     JBE 0x00510fa9
00510F6D  3B F8                     CMP EDI,EAX
00510F6F  73 0D                     JNC 0x00510f7e
LAB_00510f71:
00510F71  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00510F74  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
00510F77  0F AF C7                  IMUL EAX,EDI
00510F7A  03 C3                     ADD EAX,EBX
00510F7C  EB 02                     JMP 0x00510f80
LAB_00510f7e:
00510F7E  33 C0                     XOR EAX,EAX
LAB_00510f80:
00510F80  8A 59 08                  MOV BL,byte ptr [ECX + 0x8]
00510F83  38 58 08                  CMP byte ptr [EAX + 0x8],BL
00510F86  75 12                     JNZ 0x00510f9a
00510F88  8B 58 09                  MOV EBX,dword ptr [EAX + 0x9]
00510F8B  3B 59 09                  CMP EBX,dword ptr [ECX + 0x9]
00510F8E  75 0A                     JNZ 0x00510f9a
00510F90  8B 40 0D                  MOV EAX,dword ptr [EAX + 0xd]
00510F93  8B 59 0D                  MOV EBX,dword ptr [ECX + 0xd]
00510F96  3B C3                     CMP EAX,EBX
00510F98  74 0D                     JZ 0x00510fa7
LAB_00510f9a:
00510F9A  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00510F9D  47                        INC EDI
00510F9E  3B F8                     CMP EDI,EAX
00510FA0  72 CF                     JC 0x00510f71
00510FA2  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00510FA5  EB 02                     JMP 0x00510fa9
LAB_00510fa7:
00510FA7  33 DB                     XOR EBX,EBX
LAB_00510fa9:
00510FA9  85 DB                     TEST EBX,EBX
00510FAB  74 33                     JZ 0x00510fe0
00510FAD  8B 01                     MOV EAX,dword ptr [ECX]
00510FAF  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00510FB2  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00510FB5  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00510FB8  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00510FBB  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00510FBE  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00510FC1  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00510FC4  8A 49 10                  MOV CL,byte ptr [ECX + 0x10]
00510FC7  8D 45 DC                  LEA EAX,[EBP + -0x24]
00510FCA  88 4D EC                  MOV byte ptr [EBP + -0x14],CL
00510FCD  50                        PUSH EAX
00510FCE  52                        PUSH EDX
00510FCF  C6 45 ED 00               MOV byte ptr [EBP + -0x13],0x0
00510FD3  C6 45 EE 00               MOV byte ptr [EBP + -0x12],0x0
00510FD7  C6 45 EF 00               MOV byte ptr [EBP + -0x11],0x0
00510FDB  E8 E0 D1 19 00            CALL 0x006ae1c0
LAB_00510fe0:
00510FE0  8B 15 18 C1 85 00         MOV EDX,dword ptr [0x0085c118]
00510FE6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00510FE9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00510FEC  40                        INC EAX
00510FED  8B 3A                     MOV EDI,dword ptr [EDX]
00510FEF  83 C1 11                  ADD ECX,0x11
00510FF2  3B C7                     CMP EAX,EDI
00510FF4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00510FF7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00510FFA  0F 82 43 FF FF FF         JC 0x00510f43
LAB_00511000:
00511000  8B 86 BB 01 00 00         MOV EAX,dword ptr [ESI + 0x1bb]
00511006  33 FF                     XOR EDI,EDI
00511008  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0051100B  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0051100E  8D 51 FF                  LEA EDX,[ECX + -0x1]
00511011  85 D2                     TEST EDX,EDX
00511013  0F 86 94 00 00 00         JBE 0x005110ad
LAB_00511019:
00511019  3B F9                     CMP EDI,ECX
0051101B  73 0D                     JNC 0x0051102a
0051101D  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
00511020  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00511023  0F AF DF                  IMUL EBX,EDI
00511026  03 DA                     ADD EBX,EDX
00511028  EB 02                     JMP 0x0051102c
LAB_0051102a:
0051102A  33 DB                     XOR EBX,EBX
LAB_0051102c:
0051102C  8D 57 01                  LEA EDX,[EDI + 0x1]
0051102F  3B D1                     CMP EDX,ECX
00511031  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00511034  73 0B                     JNC 0x00511041
00511036  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00511039  0F AF CA                  IMUL ECX,EDX
0051103C  03 48 1C                  ADD ECX,dword ptr [EAX + 0x1c]
0051103F  EB 02                     JMP 0x00511043
LAB_00511041:
00511041  33 C9                     XOR ECX,ECX
LAB_00511043:
00511043  85 DB                     TEST EBX,EBX
00511045  74 50                     JZ 0x00511097
00511047  85 C9                     TEST ECX,ECX
00511049  74 4C                     JZ 0x00511097
0051104B  A1 18 76 80 00            MOV EAX,[0x00807618]
00511050  8B 09                     MOV ECX,dword ptr [ECX]
00511052  50                        PUSH EAX
00511053  51                        PUSH ECX
00511054  E8 E7 F0 19 00            CALL 0x006b0140
00511059  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051105F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00511062  8B 03                     MOV EAX,dword ptr [EBX]
00511064  52                        PUSH EDX
00511065  50                        PUSH EAX
00511066  E8 D5 F0 19 00            CALL 0x006b0140
0051106B  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0051106E  51                        PUSH ECX
0051106F  50                        PUSH EAX
00511070  E8 AB D5 21 00            CALL 0x0072e620
00511075  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00511078  83 C4 08                  ADD ESP,0x8
0051107B  85 C0                     TEST EAX,EAX
0051107D  7E 18                     JLE 0x00511097
0051107F  8B 86 BB 01 00 00         MOV EAX,dword ptr [ESI + 0x1bb]
00511085  52                        PUSH EDX
00511086  57                        PUSH EDI
00511087  50                        PUSH EAX
00511088  E8 43 FC 19 00            CALL 0x006b0cd0
0051108D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00511090  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_00511097:
00511097  8B 86 BB 01 00 00         MOV EAX,dword ptr [ESI + 0x1bb]
0051109D  8B FA                     MOV EDI,EDX
0051109F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005110A2  8D 51 FF                  LEA EDX,[ECX + -0x1]
005110A5  3B FA                     CMP EDI,EDX
005110A7  0F 82 6C FF FF FF         JC 0x00511019
LAB_005110ad:
005110AD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005110B0  85 C0                     TEST EAX,EAX
005110B2  0F 85 48 FF FF FF         JNZ 0x00511000
005110B8  BB 01 00 00 00            MOV EBX,0x1
005110BD  33 FF                     XOR EDI,EDI
005110BF  53                        PUSH EBX
005110C0  57                        PUSH EDI
005110C1  57                        PUSH EDI
005110C2  68 0C 39 7C 00            PUSH 0x7c390c
005110C7  E8 B0 46 EF FF            CALL 0x0040577c
005110CC  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
005110D2  83 C4 08                  ADD ESP,0x8
005110D5  50                        PUSH EAX
005110D6  53                        PUSH EBX
005110D7  E8 04 0C 1E 00            CALL 0x006f1ce0
005110DC  53                        PUSH EBX
005110DD  57                        PUSH EDI
005110DE  89 86 DC 01 00 00         MOV dword ptr [ESI + 0x1dc],EAX
005110E4  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
005110EA  68 FC 38 7C 00            PUSH 0x7c38fc
005110EF  53                        PUSH EBX
005110F0  E8 EB 0B 1E 00            CALL 0x006f1ce0
005110F5  53                        PUSH EBX
005110F6  57                        PUSH EDI
005110F7  57                        PUSH EDI
005110F8  68 EC 38 7C 00            PUSH 0x7c38ec
005110FD  89 86 1C 02 00 00         MOV dword ptr [ESI + 0x21c],EAX
00511103  E8 74 46 EF FF            CALL 0x0040577c
00511108  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0051110E  83 C4 08                  ADD ESP,0x8
00511111  50                        PUSH EAX
00511112  53                        PUSH EBX
00511113  E8 C8 0B 1E 00            CALL 0x006f1ce0
00511118  89 86 4C 02 00 00         MOV dword ptr [ESI + 0x24c],EAX
0051111E  A1 28 2A 80 00            MOV EAX,[0x00802a28]
00511123  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
00511126  51                        PUSH ECX
00511127  68 9D 01 00 00            PUSH 0x19d
0051112C  E8 CF CD 1F 00            CALL 0x0070df00
00511131  89 86 E0 01 00 00         MOV dword ptr [ESI + 0x1e0],EAX
00511137  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
0051113A  89 78 5C                  MOV dword ptr [EAX + 0x5c],EDI
0051113D  8B 15 28 2A 80 00         MOV EDX,dword ptr [0x00802a28]
00511143  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
00511146  50                        PUSH EAX
00511147  68 9D 01 00 00            PUSH 0x19d
0051114C  E8 AF CD 1F 00            CALL 0x0070df00
00511151  89 86 E4 01 00 00         MOV dword ptr [ESI + 0x1e4],EAX
00511157  89 58 58                  MOV dword ptr [EAX + 0x58],EBX
0051115A  89 78 5C                  MOV dword ptr [EAX + 0x5c],EDI
0051115D  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00511163  57                        PUSH EDI
00511164  68 1C 21 7C 00            PUSH 0x7c211c
00511169  51                        PUSH ECX
0051116A  68 9D 01 00 00            PUSH 0x19d
0051116F  E8 3C BD 1F 00            CALL 0x0070ceb0
00511174  83 C4 20                  ADD ESP,0x20
00511177  89 86 E8 01 00 00         MOV dword ptr [ESI + 0x1e8],EAX
0051117D  89 58 58                  MOV dword ptr [EAX + 0x58],EBX
00511180  89 78 5C                  MOV dword ptr [EAX + 0x5c],EDI
00511183  57                        PUSH EDI
00511184  57                        PUSH EDI
00511185  53                        PUSH EBX
00511186  57                        PUSH EDI
00511187  6A FF                     PUSH -0x1
00511189  57                        PUSH EDI
0051118A  68 E0 38 7C 00            PUSH 0x7c38e0
0051118F  E8 E8 45 EF FF            CALL 0x0040577c
00511194  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
0051119A  83 C4 08                  ADD ESP,0x8
0051119D  50                        PUSH EAX
0051119E  6A 0B                     PUSH 0xb
005111A0  52                        PUSH EDX
005111A1  E8 4A 89 1F 00            CALL 0x00709af0
005111A6  57                        PUSH EDI
005111A7  57                        PUSH EDI
005111A8  53                        PUSH EBX
005111A9  57                        PUSH EDI
005111AA  89 86 20 02 00 00         MOV dword ptr [ESI + 0x220],EAX
005111B0  A1 94 67 80 00            MOV EAX,[0x00806794]
005111B5  6A FF                     PUSH -0x1
005111B7  68 D0 38 7C 00            PUSH 0x7c38d0
005111BC  6A 0B                     PUSH 0xb
005111BE  50                        PUSH EAX
005111BF  E8 2C 89 1F 00            CALL 0x00709af0
005111C4  83 C4 40                  ADD ESP,0x40
005111C7  89 86 24 02 00 00         MOV dword ptr [ESI + 0x224],EAX
005111CD  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
005111D3  57                        PUSH EDI
005111D4  57                        PUSH EDI
005111D5  53                        PUSH EBX
005111D6  57                        PUSH EDI
005111D7  6A FF                     PUSH -0x1
005111D9  68 A0 20 7C 00            PUSH 0x7c20a0
005111DE  6A 0B                     PUSH 0xb
005111E0  51                        PUSH ECX
005111E1  E8 0A 89 1F 00            CALL 0x00709af0
005111E6  57                        PUSH EDI
005111E7  57                        PUSH EDI
005111E8  53                        PUSH EBX
005111E9  57                        PUSH EDI
005111EA  89 86 30 02 00 00         MOV dword ptr [ESI + 0x230],EAX
005111F0  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
005111F6  6A FF                     PUSH -0x1
005111F8  68 C8 38 7C 00            PUSH 0x7c38c8
005111FD  6A 0B                     PUSH 0xb
005111FF  52                        PUSH EDX
00511200  E8 EB 88 1F 00            CALL 0x00709af0
00511205  83 C4 40                  ADD ESP,0x40
00511208  89 86 34 02 00 00         MOV dword ptr [ESI + 0x234],EAX
0051120E  A1 94 67 80 00            MOV EAX,[0x00806794]
00511213  57                        PUSH EDI
00511214  57                        PUSH EDI
00511215  53                        PUSH EBX
00511216  57                        PUSH EDI
00511217  6A FF                     PUSH -0x1
00511219  68 BC 38 7C 00            PUSH 0x7c38bc
0051121E  6A 0B                     PUSH 0xb
00511220  50                        PUSH EAX
00511221  E8 CA 88 1F 00            CALL 0x00709af0
00511226  57                        PUSH EDI
00511227  57                        PUSH EDI
00511228  53                        PUSH EBX
00511229  57                        PUSH EDI
0051122A  89 86 28 02 00 00         MOV dword ptr [ESI + 0x228],EAX
00511230  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
00511236  6A FF                     PUSH -0x1
00511238  68 B0 38 7C 00            PUSH 0x7c38b0
0051123D  6A 0B                     PUSH 0xb
0051123F  51                        PUSH ECX
00511240  E8 AB 88 1F 00            CALL 0x00709af0
00511245  83 C4 40                  ADD ESP,0x40
00511248  89 86 2C 02 00 00         MOV dword ptr [ESI + 0x22c],EAX
0051124E  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
00511254  57                        PUSH EDI
00511255  57                        PUSH EDI
00511256  53                        PUSH EBX
00511257  57                        PUSH EDI
00511258  6A FF                     PUSH -0x1
0051125A  68 48 20 7C 00            PUSH 0x7c2048
0051125F  6A 0B                     PUSH 0xb
00511261  52                        PUSH EDX
00511262  E8 89 88 1F 00            CALL 0x00709af0
00511267  57                        PUSH EDI
00511268  57                        PUSH EDI
00511269  53                        PUSH EBX
0051126A  57                        PUSH EDI
0051126B  89 86 38 02 00 00         MOV dword ptr [ESI + 0x238],EAX
00511271  A1 94 67 80 00            MOV EAX,[0x00806794]
00511276  6A FF                     PUSH -0x1
00511278  68 A4 38 7C 00            PUSH 0x7c38a4
0051127D  6A 0B                     PUSH 0xb
0051127F  50                        PUSH EAX
00511280  E8 6B 88 1F 00            CALL 0x00709af0
00511285  83 C4 40                  ADD ESP,0x40
00511288  89 86 48 02 00 00         MOV dword ptr [ESI + 0x248],EAX
0051128E  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
00511294  57                        PUSH EDI
00511295  57                        PUSH EDI
00511296  53                        PUSH EBX
00511297  57                        PUSH EDI
00511298  6A FF                     PUSH -0x1
0051129A  68 6C 20 7C 00            PUSH 0x7c206c
0051129F  6A 0B                     PUSH 0xb
005112A1  51                        PUSH ECX
005112A2  E8 49 88 1F 00            CALL 0x00709af0
005112A7  57                        PUSH EDI
005112A8  57                        PUSH EDI
005112A9  53                        PUSH EBX
005112AA  57                        PUSH EDI
005112AB  89 86 3C 02 00 00         MOV dword ptr [ESI + 0x23c],EAX
005112B1  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
005112B7  6A FF                     PUSH -0x1
005112B9  68 10 19 7C 00            PUSH 0x7c1910
005112BE  6A 0B                     PUSH 0xb
005112C0  52                        PUSH EDX
005112C1  E8 2A 88 1F 00            CALL 0x00709af0
005112C6  83 C4 40                  ADD ESP,0x40
005112C9  89 86 40 02 00 00         MOV dword ptr [ESI + 0x240],EAX
005112CF  A1 94 67 80 00            MOV EAX,[0x00806794]
005112D4  57                        PUSH EDI
005112D5  57                        PUSH EDI
005112D6  53                        PUSH EBX
005112D7  57                        PUSH EDI
005112D8  6A FF                     PUSH -0x1
005112DA  68 BC 20 7C 00            PUSH 0x7c20bc
005112DF  6A 0B                     PUSH 0xb
005112E1  50                        PUSH EAX
005112E2  E8 09 88 1F 00            CALL 0x00709af0
005112E7  8B BE E4 01 00 00         MOV EDI,dword ptr [ESI + 0x1e4]
005112ED  89 86 44 02 00 00         MOV dword ptr [ESI + 0x244],EAX
005112F3  83 C4 20                  ADD ESP,0x20
005112F6  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
005112FC  85 C0                     TEST EAX,EAX
005112FE  74 09                     JZ 0x00511309
00511300  57                        PUSH EDI
00511301  E8 8A F4 1F 00            CALL 0x00710790
00511306  83 C4 04                  ADD ESP,0x4
LAB_00511309:
00511309  8B 86 DC 01 00 00         MOV EAX,dword ptr [ESI + 0x1dc]
0051130F  8B BF 8A 00 00 00         MOV EDI,dword ptr [EDI + 0x8a]
00511315  53                        PUSH EBX
00511316  8D 48 28                  LEA ECX,[EAX + 0x28]
00511319  51                        PUSH ECX
0051131A  50                        PUSH EAX
0051131B  E8 C0 3C 1A 00            CALL 0x006b4fe0
00511320  8B 96 DC 01 00 00         MOV EDX,dword ptr [ESI + 0x1dc]
00511326  50                        PUSH EAX
00511327  33 C0                     XOR EAX,EAX
00511329  47                        INC EDI
0051132A  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
0051132E  50                        PUSH EAX
0051132F  57                        PUSH EDI
00511330  68 9C 01 00 00            PUSH 0x19c
00511335  E8 86 3D 1A 00            CALL 0x006b50c0
0051133A  89 86 EC 01 00 00         MOV dword ptr [ESI + 0x1ec],EAX
00511340  8B 86 DC 01 00 00         MOV EAX,dword ptr [ESI + 0x1dc]
00511346  53                        PUSH EBX
00511347  8D 48 28                  LEA ECX,[EAX + 0x28]
0051134A  51                        PUSH ECX
0051134B  50                        PUSH EAX
0051134C  E8 8F 3C 1A 00            CALL 0x006b4fe0
00511351  8B 96 DC 01 00 00         MOV EDX,dword ptr [ESI + 0x1dc]
00511357  50                        PUSH EAX
00511358  33 C0                     XOR EAX,EAX
0051135A  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
0051135E  50                        PUSH EAX
0051135F  68 58 02 00 00            PUSH 0x258
00511364  68 9C 01 00 00            PUSH 0x19c
00511369  E8 52 3D 1A 00            CALL 0x006b50c0
0051136E  89 86 18 02 00 00         MOV dword ptr [ESI + 0x218],EAX
00511374  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
00511377  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0051137A  85 DB                     TEST EBX,EBX
0051137C  75 18                     JNZ 0x00511396
0051137E  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
00511382  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
00511386  83 C3 1F                  ADD EBX,0x1f
00511389  C1 EB 03                  SHR EBX,0x3
0051138C  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
00511392  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_00511396:
00511396  50                        PUSH EAX
00511397  E8 04 3C 1A 00            CALL 0x006b4fa0
0051139C  8B CB                     MOV ECX,EBX
0051139E  8B F8                     MOV EDI,EAX
005113A0  8B D1                     MOV EDX,ECX
005113A2  83 C8 FF                  OR EAX,0xffffffff
005113A5  C1 E9 02                  SHR ECX,0x2
005113A8  F3 AB                     STOSD.REP ES:EDI
005113AA  8B CA                     MOV ECX,EDX
005113AC  83 E1 03                  AND ECX,0x3
005113AF  F3 AA                     STOSB.REP ES:EDI
005113B1  8B 86 DC 01 00 00         MOV EAX,dword ptr [ESI + 0x1dc]
005113B7  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
005113BA  50                        PUSH EAX
005113BB  6A 01                     PUSH 0x1
005113BD  6A 00                     PUSH 0x0
005113BF  6A 00                     PUSH 0x0
005113C1  51                        PUSH ECX
005113C2  E8 62 1E EF FF            CALL 0x00403229
005113C7  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
005113CA  83 C4 14                  ADD ESP,0x14
005113CD  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
005113D3  6A 0C                     PUSH 0xc
005113D5  68 17 01 00 00            PUSH 0x117
005113DA  6A 02                     PUSH 0x2
005113DC  6A 6C                     PUSH 0x6c
005113DE  6A 00                     PUSH 0x0
005113E0  52                        PUSH EDX
005113E1  E8 AA F6 1F 00            CALL 0x00710a90
005113E6  A1 18 76 80 00            MOV EAX,[0x00807618]
005113EB  6A 00                     PUSH 0x0
005113ED  6A FF                     PUSH -0x1
005113EF  6A FE                     PUSH -0x2
005113F1  50                        PUSH EAX
005113F2  68 34 27 00 00            PUSH 0x2734
005113F7  E8 44 ED 19 00            CALL 0x006b0140
005113FC  8B 8E E0 01 00 00         MOV ECX,dword ptr [ESI + 0x1e0]
00511402  50                        PUSH EAX
00511403  E8 B8 05 20 00            CALL 0x007119c0
00511408  6A 00                     PUSH 0x0
0051140A  6A 00                     PUSH 0x0
0051140C  6A 00                     PUSH 0x0
0051140E  6A 00                     PUSH 0x0
00511410  6A 00                     PUSH 0x0
00511412  6A 00                     PUSH 0x0
00511414  68 00 C0 00 00            PUSH 0xc000
00511419  68 FF BF 00 00            PUSH 0xbfff
0051141E  6A 00                     PUSH 0x0
00511420  68 94 38 7C 00            PUSH 0x7c3894
00511425  E8 52 43 EF FF            CALL 0x0040577c
0051142A  83 C4 08                  ADD ESP,0x8
0051142D  8B CE                     MOV ECX,ESI
0051142F  50                        PUSH EAX
00511430  6A 01                     PUSH 0x1
00511432  68 7B 01 00 00            PUSH 0x17b
00511437  68 95 01 00 00            PUSH 0x195
0051143C  6A 01                     PUSH 0x1
0051143E  6A 00                     PUSH 0x0
00511440  E8 46 25 EF FF            CALL 0x0040398b
00511445  8D 8E 80 01 00 00         LEA ECX,[ESI + 0x180]
0051144B  89 86 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EAX
00511451  33 DB                     XOR EBX,EBX
00511453  BF 1E 00 00 00            MOV EDI,0x1e
00511458  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0051145B  C7 45 FC 07 00 00 00      MOV dword ptr [EBP + -0x4],0x7
LAB_00511462:
00511462  81 FF 26 01 00 00         CMP EDI,0x126
00511468  B9 10 27 00 00            MOV ECX,0x2710
0051146D  7F 36                     JG 0x005114a5
0051146F  FF 24 9D 60 15 51 00      JMP dword ptr [EBX*0x4 + 0x511560]
LAB_005114a5:
005114A5  6A 00                     PUSH 0x0
005114A7  8D 83 9F C0 00 00         LEA EAX,[EBX + 0xc09f]
005114AD  6A 00                     PUSH 0x0
005114AF  6A 00                     PUSH 0x0
005114B1  51                        PUSH ECX
005114B2  6A 00                     PUSH 0x0
005114B4  8D 50 10                  LEA EDX,[EAX + 0x10]
005114B7  6A 02                     PUSH 0x2
005114B9  52                        PUSH EDX
005114BA  50                        PUSH EAX
005114BB  6A 00                     PUSH 0x0
005114BD  68 84 38 7C 00            PUSH 0x7c3884
005114C2  E8 B5 42 EF FF            CALL 0x0040577c
005114C7  83 C4 08                  ADD ESP,0x8
005114CA  8B CE                     MOV ECX,ESI
005114CC  50                        PUSH EAX
005114CD  6A 01                     PUSH 0x1
005114CF  68 51 01 00 00            PUSH 0x151
005114D4  57                        PUSH EDI
005114D5  6A 01                     PUSH 0x1
005114D7  6A 00                     PUSH 0x0
005114D9  E8 AD 24 EF FF            CALL 0x0040398b
005114DE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005114E1  43                        INC EBX
005114E2  83 C7 2C                  ADD EDI,0x2c
005114E5  89 01                     MOV dword ptr [ECX],EAX
005114E7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005114EA  83 C1 04                  ADD ECX,0x4
005114ED  48                        DEC EAX
005114EE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005114F1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005114F4  0F 85 68 FF FF FF         JNZ 0x00511462
005114FA  8B CE                     MOV ECX,ESI
005114FC  E8 AB 12 EF FF            CALL 0x004027ac
00511501  8B CE                     MOV ECX,ESI
00511503  E8 C0 14 EF FF            CALL 0x004029c8
00511508  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0051150B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00511510  5F                        POP EDI
00511511  5E                        POP ESI
00511512  5B                        POP EBX
00511513  8B E5                     MOV ESP,EBP
00511515  5D                        POP EBP
00511516  C3                        RET
LAB_00511517:
00511517  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0051151A  68 64 38 7C 00            PUSH 0x7c3864
0051151F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00511524  56                        PUSH ESI
00511525  6A 00                     PUSH 0x0
00511527  68 AC 00 00 00            PUSH 0xac
0051152C  68 3C 38 7C 00            PUSH 0x7c383c
00511531  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00511537  E8 94 BF 19 00            CALL 0x006ad4d0
0051153C  83 C4 18                  ADD ESP,0x18
0051153F  85 C0                     TEST EAX,EAX
00511541  74 01                     JZ 0x00511544
00511543  CC                        INT3
LAB_00511544:
00511544  68 AC 00 00 00            PUSH 0xac
00511549  68 3C 38 7C 00            PUSH 0x7c383c
0051154E  6A 00                     PUSH 0x0
00511550  56                        PUSH ESI
00511551  E8 EA 48 19 00            CALL 0x006a5e40
00511556  5F                        POP EDI
00511557  5E                        POP ESI
00511558  5B                        POP EBX
00511559  8B E5                     MOV ESP,EBP
0051155B  5D                        POP EBP
0051155C  C3                        RET
