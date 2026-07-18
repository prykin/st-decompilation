STRubbishC::RubbishCreatePart:
0062ED90  55                        PUSH EBP
0062ED91  8B EC                     MOV EBP,ESP
0062ED93  83 EC 4C                  SUB ESP,0x4c
0062ED96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0062ED9B  53                        PUSH EBX
0062ED9C  56                        PUSH ESI
0062ED9D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062EDA0  57                        PUSH EDI
0062EDA1  8D 55 B8                  LEA EDX,[EBP + -0x48]
0062EDA4  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0062EDA7  6A 00                     PUSH 0x0
0062EDA9  52                        PUSH EDX
0062EDAA  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0062EDB1  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0062EDB4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062EDBA  E8 31 EA 0F 00            CALL 0x0072d7f0
0062EDBF  8B F0                     MOV ESI,EAX
0062EDC1  83 C4 08                  ADD ESP,0x8
0062EDC4  85 F6                     TEST ESI,ESI
0062EDC6  0F 85 99 00 00 00         JNZ 0x0062ee65
0062EDCC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062EDCF  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0062EDD2  05 E5 01 00 00            ADD EAX,0x1e5
LAB_0062edd7:
0062EDD7  83 38 00                  CMP dword ptr [EAX],0x0
0062EDDA  74 21                     JZ 0x0062edfd
0062EDDC  BB 05 00 00 00            MOV EBX,0x5
0062EDE1  46                        INC ESI
0062EDE2  83 C0 04                  ADD EAX,0x4
0062EDE5  3B F3                     CMP ESI,EBX
0062EDE7  7C EE                     JL 0x0062edd7
0062EDE9  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0062EDEC  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0062EDEF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0062EDF4  8B C3                     MOV EAX,EBX
0062EDF6  5F                        POP EDI
0062EDF7  5E                        POP ESI
0062EDF8  5B                        POP EBX
0062EDF9  8B E5                     MOV ESP,EBP
0062EDFB  5D                        POP EBP
0062EDFC  C3                        RET
LAB_0062edfd:
0062EDFD  6A 3E                     PUSH 0x3e
0062EDFF  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0062EE02  E8 69 BE 07 00            CALL 0x006aac70
0062EE07  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0062EE0A  8B F8                     MOV EDI,EAX
0062EE0C  85 FF                     TEST EDI,EDI
0062EE0E  89 BC B2 E5 01 00 00      MOV dword ptr [EDX + ESI*0x4 + 0x1e5],EDI
0062EE15  74 3D                     JZ 0x0062ee54
0062EE17  B9 0F 00 00 00            MOV ECX,0xf
0062EE1C  33 C0                     XOR EAX,EAX
0062EE1E  F3 AB                     STOSD.REP ES:EDI
0062EE20  66 AB                     STOSW ES:EDI
0062EE22  8A 82 F9 01 00 00         MOV AL,byte ptr [EDX + 0x1f9]
0062EE28  84 C0                     TEST AL,AL
0062EE2A  74 26                     JZ 0x0062ee52
0062EE2C  6A 40                     PUSH 0x40
0062EE2E  E8 FD F6 0F 00            CALL 0x0072e530
0062EE33  83 C4 04                  ADD ESP,0x4
0062EE36  85 C0                     TEST EAX,EAX
0062EE38  74 09                     JZ 0x0062ee43
0062EE3A  8B C8                     MOV ECX,EAX
0062EE3C  E8 D5 24 DD FF            CALL 0x00401316
0062EE41  EB 02                     JMP 0x0062ee45
LAB_0062ee43:
0062EE43  33 C0                     XOR EAX,EAX
LAB_0062ee45:
0062EE45  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0062EE48  8B 94 B1 E5 01 00 00      MOV EDX,dword ptr [ECX + ESI*0x4 + 0x1e5]
0062EE4F  89 42 10                  MOV dword ptr [EDX + 0x10],EAX
LAB_0062ee52:
0062EE52  8B DE                     MOV EBX,ESI
LAB_0062ee54:
0062EE54  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0062EE57  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0062EE5C  8B C3                     MOV EAX,EBX
0062EE5E  5F                        POP EDI
0062EE5F  5E                        POP ESI
0062EE60  5B                        POP EBX
0062EE61  8B E5                     MOV ESP,EBP
0062EE63  5D                        POP EBP
0062EE64  C3                        RET
LAB_0062ee65:
0062EE65  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0062EE68  68 D8 17 7D 00            PUSH 0x7d17d8
0062EE6D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0062EE72  56                        PUSH ESI
0062EE73  6A 00                     PUSH 0x0
0062EE75  68 D9 00 00 00            PUSH 0xd9
0062EE7A  68 98 17 7D 00            PUSH 0x7d1798
0062EE7F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0062EE85  E8 46 E6 07 00            CALL 0x006ad4d0
0062EE8A  83 C4 18                  ADD ESP,0x18
0062EE8D  85 C0                     TEST EAX,EAX
0062EE8F  74 01                     JZ 0x0062ee92
0062EE91  CC                        INT3
LAB_0062ee92:
0062EE92  68 DB 00 00 00            PUSH 0xdb
0062EE97  68 98 17 7D 00            PUSH 0x7d1798
0062EE9C  6A 00                     PUSH 0x0
0062EE9E  56                        PUSH ESI
0062EE9F  E8 9C 6F 07 00            CALL 0x006a5e40
0062EEA4  5F                        POP EDI
0062EEA5  5E                        POP ESI
0062EEA6  B8 FF FF 00 00            MOV EAX,0xffff
0062EEAB  5B                        POP EBX
0062EEAC  8B E5                     MOV ESP,EBP
0062EEAE  5D                        POP EBP
0062EEAF  C3                        RET
