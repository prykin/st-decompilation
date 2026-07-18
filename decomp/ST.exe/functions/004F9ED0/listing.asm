CPanelTy::SwitchCPanel:
004F9ED0  55                        PUSH EBP
004F9ED1  8B EC                     MOV EBP,ESP
004F9ED3  83 EC 50                  SUB ESP,0x50
004F9ED6  A1 84 87 80 00            MOV EAX,[0x00808784]
004F9EDB  53                        PUSH EBX
004F9EDC  56                        PUSH ESI
004F9EDD  57                        PUSH EDI
004F9EDE  85 C0                     TEST EAX,EAX
004F9EE0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004F9EE3  0F 85 A6 03 00 00         JNZ 0x004fa28f
004F9EE9  A1 88 87 80 00            MOV EAX,[0x00808788]
004F9EEE  85 C0                     TEST EAX,EAX
004F9EF0  75 16                     JNZ 0x004f9f08
004F9EF2  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004F9EF7  85 C0                     TEST EAX,EAX
004F9EF9  75 0D                     JNZ 0x004f9f08
004F9EFB  A1 90 87 80 00            MOV EAX,[0x00808790]
004F9F00  85 C0                     TEST EAX,EAX
004F9F02  75 04                     JNZ 0x004f9f08
004F9F04  33 C0                     XOR EAX,EAX
004F9F06  EB 05                     JMP 0x004f9f0d
LAB_004f9f08:
004F9F08  B8 01 00 00 00            MOV EAX,0x1
LAB_004f9f0d:
004F9F0D  85 C0                     TEST EAX,EAX
004F9F0F  0F 85 7A 03 00 00         JNZ 0x004fa28f
004F9F15  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F9F1A  8D 55 B4                  LEA EDX,[EBP + -0x4c]
004F9F1D  8D 4D B0                  LEA ECX,[EBP + -0x50]
004F9F20  6A 00                     PUSH 0x0
004F9F22  52                        PUSH EDX
004F9F23  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004F9F26  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F9F2C  E8 BF 38 23 00            CALL 0x0072d7f0
004F9F31  8B F0                     MOV ESI,EAX
004F9F33  83 C4 08                  ADD ESP,0x8
004F9F36  85 F6                     TEST ESI,ESI
004F9F38  0F 85 12 03 00 00         JNZ 0x004fa250
004F9F3E  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
004F9F41  66 8B 83 3F 02 00 00      MOV AX,word ptr [EBX + 0x23f]
004F9F48  48                        DEC EAX
004F9F49  83 F8 03                  CMP EAX,0x3
004F9F4C  0F 87 EE 02 00 00         JA 0x004fa240
switchD_004f9f52::switchD:
004F9F52  FF 24 85 98 A2 4F 00      JMP dword ptr [EAX*0x4 + 0x4fa298]
switchD_004f9f52::caseD_1:
004F9F59  8B 83 28 01 00 00         MOV EAX,dword ptr [EBX + 0x128]
004F9F5F  8B 8B 24 01 00 00         MOV ECX,dword ptr [EBX + 0x124]
004F9F65  8B 93 20 01 00 00         MOV EDX,dword ptr [EBX + 0x120]
004F9F6B  50                        PUSH EAX
004F9F6C  8B 83 1C 01 00 00         MOV EAX,dword ptr [EBX + 0x11c]
004F9F72  51                        PUSH ECX
004F9F73  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004F9F79  52                        PUSH EDX
004F9F7A  50                        PUSH EAX
004F9F7B  E8 ED 7B F0 FF            CALL 0x00401b6d
004F9F80  66 C7 83 3F 02 00 00 06 00  MOV word ptr [EBX + 0x23f],0x6
004F9F89  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
004F9F8F  85 C9                     TEST ECX,ECX
004F9F91  74 07                     JZ 0x004f9f9a
004F9F93  6A 00                     PUSH 0x0
004F9F95  E8 D9 7A F0 FF            CALL 0x00401a73
LAB_004f9f9a:
004F9F9A  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
004F9FA0  85 C9                     TEST ECX,ECX
004F9FA2  74 07                     JZ 0x004f9fab
004F9FA4  6A 00                     PUSH 0x0
004F9FA6  E8 C8 7A F0 FF            CALL 0x00401a73
LAB_004f9fab:
004F9FAB  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
004F9FB1  85 C9                     TEST ECX,ECX
004F9FB3  74 07                     JZ 0x004f9fbc
004F9FB5  6A 00                     PUSH 0x0
004F9FB7  E8 B7 7A F0 FF            CALL 0x00401a73
LAB_004f9fbc:
004F9FBC  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
004F9FC2  85 C9                     TEST ECX,ECX
004F9FC4  74 07                     JZ 0x004f9fcd
004F9FC6  6A 00                     PUSH 0x0
004F9FC8  E8 A6 7A F0 FF            CALL 0x00401a73
LAB_004f9fcd:
004F9FCD  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
004F9FD3  85 C9                     TEST ECX,ECX
004F9FD5  74 07                     JZ 0x004f9fde
004F9FD7  8B 11                     MOV EDX,dword ptr [ECX]
004F9FD9  6A 00                     PUSH 0x0
004F9FDB  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004f9fde:
004F9FDE  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
004F9FE4  85 C9                     TEST ECX,ECX
004F9FE6  74 09                     JZ 0x004f9ff1
004F9FE8  6A 00                     PUSH 0x0
004F9FEA  6A 00                     PUSH 0x0
004F9FEC  E8 06 AB F0 FF            CALL 0x00404af7
LAB_004f9ff1:
004F9FF1  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
004F9FF7  85 C9                     TEST ECX,ECX
004F9FF9  74 07                     JZ 0x004fa002
004F9FFB  8B 01                     MOV EAX,dword ptr [ECX]
004F9FFD  6A 00                     PUSH 0x0
004F9FFF  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_004fa002:
004FA002  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
004FA008  85 C9                     TEST ECX,ECX
004FA00A  74 07                     JZ 0x004fa013
004FA00C  8B 11                     MOV EDX,dword ptr [ECX]
004FA00E  6A 00                     PUSH 0x0
004FA010  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004fa013:
004FA013  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
004FA019  85 C9                     TEST ECX,ECX
004FA01B  74 07                     JZ 0x004fa024
004FA01D  8B 01                     MOV EAX,dword ptr [ECX]
004FA01F  6A 00                     PUSH 0x0
004FA021  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_004fa024:
004FA024  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
004FA02A  85 C9                     TEST ECX,ECX
004FA02C  74 07                     JZ 0x004fa035
004FA02E  8B 11                     MOV EDX,dword ptr [ECX]
004FA030  6A 00                     PUSH 0x0
004FA032  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004fa035:
004FA035  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
004FA03B  85 C9                     TEST ECX,ECX
004FA03D  74 07                     JZ 0x004fa046
004FA03F  8B 01                     MOV EAX,dword ptr [ECX]
004FA041  6A 00                     PUSH 0x0
004FA043  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_004fa046:
004FA046  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
004FA04C  85 C9                     TEST ECX,ECX
004FA04E  74 05                     JZ 0x004fa055
004FA050  E8 DB 85 F0 FF            CALL 0x00402630
LAB_004fa055:
004FA055  6A 00                     PUSH 0x0
004FA057  8B CB                     MOV ECX,EBX
004FA059  E8 74 8E F0 FF            CALL 0x00402ed2
004FA05E  A1 1A 73 80 00            MOV EAX,[0x0080731a]
004FA063  85 C0                     TEST EAX,EAX
004FA065  0F 84 CD 00 00 00         JZ 0x004fa138
004FA06B  8D B3 EC 02 00 00         LEA ESI,[EBX + 0x2ec]
004FA071  8D BB EE 02 00 00         LEA EDI,[EBX + 0x2ee]
004FA077  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
LAB_004fa07e:
004FA07E  6A 00                     PUSH 0x0
004FA080  6A 00                     PUSH 0x0
004FA082  6A 01                     PUSH 0x1
004FA084  6A 00                     PUSH 0x0
004FA086  6A 06                     PUSH 0x6
004FA088  6A 00                     PUSH 0x0
004FA08A  6A 00                     PUSH 0x0
004FA08C  E8 76 95 F0 FF            CALL 0x00403607
004FA091  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
004FA097  83 C4 08                  ADD ESP,0x8
004FA09A  50                        PUSH EAX
004FA09B  6A 1F                     PUSH 0x1f
004FA09D  51                        PUSH ECX
004FA09E  E8 4D FA 20 00            CALL 0x00709af0
004FA0A3  89 47 F4                  MOV dword ptr [EDI + -0xc],EAX
004FA0A6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004FA0A9  C6 46 FE 00               MOV byte ptr [ESI + -0x2],0x0
004FA0AD  C6 06 04                  MOV byte ptr [ESI],0x4
004FA0B0  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
004FA0B3  83 C4 20                  ADD ESP,0x20
004FA0B6  89 17                     MOV dword ptr [EDI],EDX
004FA0B8  46                        INC ESI
004FA0B9  83 C7 04                  ADD EDI,0x4
004FA0BC  48                        DEC EAX
004FA0BD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004FA0C0  75 BC                     JNZ 0x004fa07e
004FA0C2  8D B3 53 0D 00 00         LEA ESI,[EBX + 0xd53]
004FA0C8  8D BB 47 0D 00 00         LEA EDI,[EBX + 0xd47]
004FA0CE  C7 45 F8 02 00 00 00      MOV dword ptr [EBP + -0x8],0x2
LAB_004fa0d5:
004FA0D5  C7 45 FC 06 00 00 00      MOV dword ptr [EBP + -0x4],0x6
LAB_004fa0dc:
004FA0DC  6A 00                     PUSH 0x0
004FA0DE  6A 00                     PUSH 0x0
004FA0E0  6A 01                     PUSH 0x1
004FA0E2  6A 00                     PUSH 0x0
004FA0E4  6A 06                     PUSH 0x6
004FA0E6  6A 00                     PUSH 0x0
004FA0E8  6A 00                     PUSH 0x0
004FA0EA  E8 18 95 F0 FF            CALL 0x00403607
004FA0EF  83 C4 08                  ADD ESP,0x8
004FA0F2  50                        PUSH EAX
004FA0F3  A1 94 67 80 00            MOV EAX,[0x00806794]
004FA0F8  6A 1F                     PUSH 0x1f
004FA0FA  50                        PUSH EAX
004FA0FB  E8 F0 F9 20 00            CALL 0x00709af0
004FA100  89 46 B8                  MOV dword ptr [ESI + -0x48],EAX
004FA103  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004FA106  C6 47 F4 00               MOV byte ptr [EDI + -0xc],0x0
004FA10A  C6 07 04                  MOV byte ptr [EDI],0x4
004FA10D  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
004FA110  83 C4 20                  ADD ESP,0x20
004FA113  89 0E                     MOV dword ptr [ESI],ECX
004FA115  83 C6 04                  ADD ESI,0x4
004FA118  47                        INC EDI
004FA119  48                        DEC EAX
004FA11A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004FA11D  75 BD                     JNZ 0x004fa0dc
004FA11F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004FA122  48                        DEC EAX
004FA123  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004FA126  75 AD                     JNZ 0x004fa0d5
004FA128  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
004FA12B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FA131  5F                        POP EDI
004FA132  5E                        POP ESI
004FA133  5B                        POP EBX
004FA134  8B E5                     MOV ESP,EBP
004FA136  5D                        POP EBP
004FA137  C3                        RET
switchD_004f9f52::caseD_3:
004FA138  68 B0 00 00 00            PUSH 0xb0
004FA13D  66 C7 83 3F 02 00 00 04 00  MOV word ptr [EBX + 0x23f],0x4
004FA146  E8 E4 BC F0 FF            CALL 0x00405e2f
004FA14B  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
004FA14E  83 C4 04                  ADD ESP,0x4
004FA151  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FA157  5F                        POP EDI
004FA158  5E                        POP ESI
004FA159  5B                        POP EBX
004FA15A  8B E5                     MOV ESP,EBP
004FA15C  5D                        POP EBP
004FA15D  C3                        RET
switchD_004f9f52::caseD_2:
004FA15E  68 AF 00 00 00            PUSH 0xaf
004FA163  66 C7 83 3F 02 00 00 03 00  MOV word ptr [EBX + 0x23f],0x3
004FA16C  E8 BE BC F0 FF            CALL 0x00405e2f
004FA171  8B 0D E8 16 80 00         MOV ECX,dword ptr [0x008016e8]
004FA177  83 C4 04                  ADD ESP,0x4
004FA17A  85 C9                     TEST ECX,ECX
004FA17C  74 07                     JZ 0x004fa185
004FA17E  6A 00                     PUSH 0x0
004FA180  E8 EE 78 F0 FF            CALL 0x00401a73
LAB_004fa185:
004FA185  8B 0D 7C 16 80 00         MOV ECX,dword ptr [0x0080167c]
004FA18B  85 C9                     TEST ECX,ECX
004FA18D  74 07                     JZ 0x004fa196
004FA18F  6A 00                     PUSH 0x0
004FA191  E8 DD 78 F0 FF            CALL 0x00401a73
LAB_004fa196:
004FA196  8B 0D 84 16 80 00         MOV ECX,dword ptr [0x00801684]
004FA19C  85 C9                     TEST ECX,ECX
004FA19E  74 07                     JZ 0x004fa1a7
004FA1A0  6A 00                     PUSH 0x0
004FA1A2  E8 CC 78 F0 FF            CALL 0x00401a73
LAB_004fa1a7:
004FA1A7  8B 0D 80 16 80 00         MOV ECX,dword ptr [0x00801680]
004FA1AD  85 C9                     TEST ECX,ECX
004FA1AF  74 07                     JZ 0x004fa1b8
004FA1B1  6A 00                     PUSH 0x0
004FA1B3  E8 BB 78 F0 FF            CALL 0x00401a73
LAB_004fa1b8:
004FA1B8  8B 0D 98 16 80 00         MOV ECX,dword ptr [0x00801698]
004FA1BE  85 C9                     TEST ECX,ECX
004FA1C0  74 07                     JZ 0x004fa1c9
004FA1C2  8B 11                     MOV EDX,dword ptr [ECX]
004FA1C4  6A 00                     PUSH 0x0
004FA1C6  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004fa1c9:
004FA1C9  8B 0D 44 2A 80 00         MOV ECX,dword ptr [0x00802a44]
004FA1CF  85 C9                     TEST ECX,ECX
004FA1D1  74 09                     JZ 0x004fa1dc
004FA1D3  6A 00                     PUSH 0x0
004FA1D5  6A 00                     PUSH 0x0
004FA1D7  E8 1B A9 F0 FF            CALL 0x00404af7
LAB_004fa1dc:
004FA1DC  8B 0D 78 16 80 00         MOV ECX,dword ptr [0x00801678]
004FA1E2  85 C9                     TEST ECX,ECX
004FA1E4  74 07                     JZ 0x004fa1ed
004FA1E6  8B 01                     MOV EAX,dword ptr [ECX]
004FA1E8  6A 00                     PUSH 0x0
004FA1EA  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_004fa1ed:
004FA1ED  8B 0D EC 16 80 00         MOV ECX,dword ptr [0x008016ec]
004FA1F3  85 C9                     TEST ECX,ECX
004FA1F5  74 07                     JZ 0x004fa1fe
004FA1F7  8B 11                     MOV EDX,dword ptr [ECX]
004FA1F9  6A 00                     PUSH 0x0
004FA1FB  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004fa1fe:
004FA1FE  8B 0D 48 2A 80 00         MOV ECX,dword ptr [0x00802a48]
004FA204  85 C9                     TEST ECX,ECX
004FA206  74 07                     JZ 0x004fa20f
004FA208  8B 01                     MOV EAX,dword ptr [ECX]
004FA20A  6A 00                     PUSH 0x0
004FA20C  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
LAB_004fa20f:
004FA20F  8B 0D 8C 16 80 00         MOV ECX,dword ptr [0x0080168c]
004FA215  85 C9                     TEST ECX,ECX
004FA217  74 07                     JZ 0x004fa220
004FA219  8B 11                     MOV EDX,dword ptr [ECX]
004FA21B  6A 00                     PUSH 0x0
004FA21D  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
LAB_004fa220:
004FA220  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
004FA226  85 C9                     TEST ECX,ECX
004FA228  74 07                     JZ 0x004fa231
004FA22A  8B 01                     MOV EAX,dword ptr [ECX]
004FA22C  6A 00                     PUSH 0x0
004FA22E  FF 50 18                  CALL dword ptr [EAX + 0x18]
LAB_004fa231:
004FA231  8B 0D DC 16 80 00         MOV ECX,dword ptr [0x008016dc]
004FA237  85 C9                     TEST ECX,ECX
004FA239  74 05                     JZ 0x004fa240
004FA23B  E8 F0 83 F0 FF            CALL 0x00402630
switchD_004f9f52::default:
004FA240  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
004FA243  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FA249  5F                        POP EDI
004FA24A  5E                        POP ESI
004FA24B  5B                        POP EBX
004FA24C  8B E5                     MOV ESP,EBP
004FA24E  5D                        POP EBP
004FA24F  C3                        RET
LAB_004fa250:
004FA250  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004FA253  68 84 22 7C 00            PUSH 0x7c2284
004FA258  68 CC 4C 7A 00            PUSH 0x7a4ccc
004FA25D  56                        PUSH ESI
004FA25E  6A 00                     PUSH 0x0
004FA260  68 0F 04 00 00            PUSH 0x40f
004FA265  68 D8 1B 7C 00            PUSH 0x7c1bd8
004FA26A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004FA270  E8 5B 32 1B 00            CALL 0x006ad4d0
004FA275  83 C4 18                  ADD ESP,0x18
004FA278  85 C0                     TEST EAX,EAX
004FA27A  74 01                     JZ 0x004fa27d
004FA27C  CC                        INT3
LAB_004fa27d:
004FA27D  68 0F 04 00 00            PUSH 0x40f
004FA282  68 D8 1B 7C 00            PUSH 0x7c1bd8
004FA287  6A 00                     PUSH 0x0
004FA289  56                        PUSH ESI
004FA28A  E8 B1 BB 1A 00            CALL 0x006a5e40
LAB_004fa28f:
004FA28F  5F                        POP EDI
004FA290  5E                        POP ESI
004FA291  5B                        POP EBX
004FA292  8B E5                     MOV ESP,EBP
004FA294  5D                        POP EBP
004FA295  C3                        RET
