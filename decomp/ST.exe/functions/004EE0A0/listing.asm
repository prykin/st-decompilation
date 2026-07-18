BehPanelTy::Update:
004EE0A0  55                        PUSH EBP
004EE0A1  8B EC                     MOV EBP,ESP
004EE0A3  83 EC 68                  SUB ESP,0x68
004EE0A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004EE0AB  53                        PUSH EBX
004EE0AC  56                        PUSH ESI
004EE0AD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004EE0B0  57                        PUSH EDI
004EE0B1  8D 55 9C                  LEA EDX,[EBP + -0x64]
004EE0B4  8D 4D 98                  LEA ECX,[EBP + -0x68]
004EE0B7  6A 00                     PUSH 0x0
004EE0B9  52                        PUSH EDX
004EE0BA  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
004EE0BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EE0C3  E8 28 F7 23 00            CALL 0x0072d7f0
004EE0C8  8B F0                     MOV ESI,EAX
004EE0CA  83 C4 08                  ADD ESP,0x8
004EE0CD  85 F6                     TEST ESI,ESI
004EE0CF  0F 85 9B 01 00 00         JNZ 0x004ee270
004EE0D5  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
004EE0D8  8D 83 AB 01 00 00         LEA EAX,[EBX + 0x1ab]
004EE0DE  8B C8                     MOV ECX,EAX
004EE0E0  50                        PUSH EAX
004EE0E1  6A 0B                     PUSH 0xb
004EE0E3  8B 11                     MOV EDX,dword ptr [ECX]
004EE0E5  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
004EE0E8  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
004EE0EB  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
004EE0EE  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
004EE0F1  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
004EE0F4  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
004EE0F7  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004EE0FA  66 8B 51 10               MOV DX,word ptr [ECX + 0x10]
004EE0FE  66 89 55 EC               MOV word ptr [EBP + -0x14],DX
004EE102  8A 49 12                  MOV CL,byte ptr [ECX + 0x12]
004EE105  88 4D EE                  MOV byte ptr [EBP + -0x12],CL
004EE108  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EE10E  E8 A9 54 F1 FF            CALL 0x004035bc
004EE113  B8 51 FE FF FF            MOV EAX,0xfffffe51
004EE118  8D 55 E0                  LEA EDX,[EBP + -0x20]
004EE11B  2B C3                     SUB EAX,EBX
004EE11D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004EE120  8D BB AF 01 00 00         LEA EDI,[EBX + 0x1af]
004EE126  8D B3 CF 01 00 00         LEA ESI,[EBX + 0x1cf]
004EE12C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004EE12F  C7 45 F8 06 00 00 00      MOV dword ptr [EBP + -0x8],0x6
004EE136  EB 03                     JMP 0x004ee13b
LAB_004ee138:
004EE138  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_004ee13b:
004EE13B  8B 93 BE 01 00 00         MOV EDX,dword ptr [EBX + 0x1be]
004EE141  33 C9                     XOR ECX,ECX
004EE143  C7 43 28 54 00 00 00      MOV dword ptr [EBX + 0x28],0x54
004EE14A  8A 4F 06                  MOV CL,byte ptr [EDI + 0x6]
004EE14D  03 C7                     ADD EAX,EDI
004EE14F  89 4B 2C                  MOV dword ptr [EBX + 0x2c],ECX
004EE152  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
004EE155  8D 43 18                  LEA EAX,[EBX + 0x18]
004EE158  50                        PUSH EAX
004EE159  52                        PUSH EDX
004EE15A  6A 02                     PUSH 0x2
004EE15C  8B CB                     MOV ECX,EBX
004EE15E  E8 1D 7F 1F 00            CALL 0x006e6080
004EE163  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004EE166  8A 07                     MOV AL,byte ptr [EDI]
004EE168  3A 01                     CMP AL,byte ptr [ECX]
004EE16A  74 27                     JZ 0x004ee193
004EE16C  C6 46 FF 01               MOV byte ptr [ESI + -0x1],0x1
004EE170  8B 93 AB 01 00 00         MOV EDX,dword ptr [EBX + 0x1ab]
004EE176  8A 07                     MOV AL,byte ptr [EDI]
004EE178  52                        PUSH EDX
004EE179  50                        PUSH EAX
004EE17A  E8 F9 38 F1 FF            CALL 0x00401a78
004EE17F  89 06                     MOV dword ptr [ESI],EAX
004EE181  8A 0F                     MOV CL,byte ptr [EDI]
004EE183  51                        PUSH ECX
004EE184  E8 96 55 F1 FF            CALL 0x0040371f
004EE189  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
004EE18C  83 C4 0C                  ADD ESP,0xc
004EE18F  C6 46 0C 03               MOV byte ptr [ESI + 0xc],0x3
LAB_004ee193:
004EE193  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004EE196  83 C6 27                  ADD ESI,0x27
004EE199  40                        INC EAX
004EE19A  47                        INC EDI
004EE19B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004EE19E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004EE1A1  48                        DEC EAX
004EE1A2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004EE1A5  75 91                     JNZ 0x004ee138
004EE1A7  B9 03 00 00 00            MOV ECX,0x3
004EE1AC  8D 7D E0                  LEA EDI,[EBP + -0x20]
004EE1AF  8D B3 AF 01 00 00         LEA ESI,[EBX + 0x1af]
004EE1B5  33 D2                     XOR EDX,EDX
004EE1B7  66 F3 A7                  CMPSW.REPE ES:EDI,ESI
004EE1BA  74 1B                     JZ 0x004ee1d7
004EE1BC  8D 43 18                  LEA EAX,[EBX + 0x18]
004EE1BF  8B CB                     MOV ECX,EBX
004EE1C1  50                        PUSH EAX
004EE1C2  8B 83 BE 01 00 00         MOV EAX,dword ptr [EBX + 0x1be]
004EE1C8  50                        PUSH EAX
004EE1C9  6A 02                     PUSH 0x2
004EE1CB  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
004EE1D2  E8 A9 7E 1F 00            CALL 0x006e6080
LAB_004ee1d7:
004EE1D7  8A 83 BB 01 00 00         MOV AL,byte ptr [EBX + 0x1bb]
004EE1DD  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
004EE1E0  3A C1                     CMP AL,CL
004EE1E2  BE 20 00 00 00            MOV ESI,0x20
004EE1E7  74 1F                     JZ 0x004ee208
004EE1E9  8B 8B C2 01 00 00         MOV ECX,dword ptr [EBX + 0x1c2]
004EE1EF  25 FF 00 00 00            AND EAX,0xff
004EE1F4  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
004EE1F7  8D 43 18                  LEA EAX,[EBX + 0x18]
004EE1FA  50                        PUSH EAX
004EE1FB  51                        PUSH ECX
004EE1FC  6A 02                     PUSH 0x2
004EE1FE  8B CB                     MOV ECX,EBX
004EE200  89 73 28                  MOV dword ptr [EBX + 0x28],ESI
004EE203  E8 78 7E 1F 00            CALL 0x006e6080
LAB_004ee208:
004EE208  8A 83 BC 01 00 00         MOV AL,byte ptr [EBX + 0x1bc]
004EE20E  8A 4D ED                  MOV CL,byte ptr [EBP + -0x13]
004EE211  3A C1                     CMP AL,CL
004EE213  74 1F                     JZ 0x004ee234
004EE215  8B 93 C6 01 00 00         MOV EDX,dword ptr [EBX + 0x1c6]
004EE21B  25 FF 00 00 00            AND EAX,0xff
004EE220  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
004EE223  8D 43 18                  LEA EAX,[EBX + 0x18]
004EE226  50                        PUSH EAX
004EE227  52                        PUSH EDX
004EE228  6A 02                     PUSH 0x2
004EE22A  8B CB                     MOV ECX,EBX
004EE22C  89 73 28                  MOV dword ptr [EBX + 0x28],ESI
004EE22F  E8 4C 7E 1F 00            CALL 0x006e6080
LAB_004ee234:
004EE234  8A 83 BD 01 00 00         MOV AL,byte ptr [EBX + 0x1bd]
004EE23A  8A 4D EE                  MOV CL,byte ptr [EBP + -0x12]
004EE23D  3A C1                     CMP AL,CL
004EE23F  74 1F                     JZ 0x004ee260
004EE241  25 FF 00 00 00            AND EAX,0xff
004EE246  8B CB                     MOV ECX,EBX
004EE248  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
004EE24B  8D 43 18                  LEA EAX,[EBX + 0x18]
004EE24E  50                        PUSH EAX
004EE24F  8B 83 CA 01 00 00         MOV EAX,dword ptr [EBX + 0x1ca]
004EE255  50                        PUSH EAX
004EE256  6A 02                     PUSH 0x2
004EE258  89 73 28                  MOV dword ptr [EBX + 0x28],ESI
004EE25B  E8 20 7E 1F 00            CALL 0x006e6080
LAB_004ee260:
004EE260  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
004EE263  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004EE269  5F                        POP EDI
004EE26A  5E                        POP ESI
004EE26B  5B                        POP EBX
004EE26C  8B E5                     MOV ESP,EBP
004EE26E  5D                        POP EBP
004EE26F  C3                        RET
LAB_004ee270:
004EE270  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
004EE273  68 58 17 7C 00            PUSH 0x7c1758
004EE278  68 CC 4C 7A 00            PUSH 0x7a4ccc
004EE27D  56                        PUSH ESI
004EE27E  6A 00                     PUSH 0x0
004EE280  68 B2 00 00 00            PUSH 0xb2
004EE285  68 94 16 7C 00            PUSH 0x7c1694
004EE28A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004EE290  E8 3B F2 1B 00            CALL 0x006ad4d0
004EE295  83 C4 18                  ADD ESP,0x18
004EE298  85 C0                     TEST EAX,EAX
004EE29A  74 01                     JZ 0x004ee29d
004EE29C  CC                        INT3
LAB_004ee29d:
004EE29D  68 B2 00 00 00            PUSH 0xb2
004EE2A2  68 94 16 7C 00            PUSH 0x7c1694
004EE2A7  6A 00                     PUSH 0x0
004EE2A9  56                        PUSH ESI
004EE2AA  E8 91 7B 1B 00            CALL 0x006a5e40
004EE2AF  5F                        POP EDI
004EE2B0  5E                        POP ESI
004EE2B1  5B                        POP EBX
004EE2B2  8B E5                     MOV ESP,EBP
004EE2B4  5D                        POP EBP
004EE2B5  C3                        RET
