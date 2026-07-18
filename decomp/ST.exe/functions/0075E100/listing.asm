FUN_0075e100:
0075E100  55                        PUSH EBP
0075E101  8B EC                     MOV EBP,ESP
0075E103  83 EC 18                  SUB ESP,0x18
0075E106  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075E109  53                        PUSH EBX
0075E10A  56                        PUSH ESI
0075E10B  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075E10E  8B 82 B2 01 00 00         MOV EAX,dword ptr [EDX + 0x1b2]
0075E114  8B 8A 32 01 00 00         MOV ECX,dword ptr [EDX + 0x132]
0075E11A  8B 52 68                  MOV EDX,dword ptr [EDX + 0x68]
0075E11D  57                        PUSH EDI
0075E11E  8B 70 10                  MOV ESI,dword ptr [EAX + 0x10]
0075E121  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0075E124  8B 70 14                  MOV ESI,dword ptr [EAX + 0x14]
0075E127  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0075E12A  8B 70 18                  MOV ESI,dword ptr [EAX + 0x18]
0075E12D  8B 40 1C                  MOV EAX,dword ptr [EAX + 0x1c]
0075E130  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0075E133  8B 33                     MOV ESI,dword ptr [EBX]
0075E135  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0075E138  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075E13B  D1 EA                     SHR EDX,0x1
0075E13D  8B 3C 86                  MOV EDI,dword ptr [ESI + EAX*0x4]
0075E140  8B 73 04                  MOV ESI,dword ptr [EBX + 0x4]
0075E143  8B 5B 08                  MOV EBX,dword ptr [EBX + 0x8]
0075E146  8B 34 86                  MOV ESI,dword ptr [ESI + EAX*0x4]
0075E149  8B 1C 83                  MOV EBX,dword ptr [EBX + EAX*0x4]
0075E14C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0075E14F  8B 00                     MOV EAX,dword ptr [EAX]
0075E151  0F 84 9D 00 00 00         JZ 0x0075e1f4
0075E157  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
LAB_0075e15a:
0075E15A  33 D2                     XOR EDX,EDX
0075E15C  83 C0 03                  ADD EAX,0x3
0075E15F  8A 16                     MOV DL,byte ptr [ESI]
0075E161  46                        INC ESI
0075E162  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0075E165  33 D2                     XOR EDX,EDX
0075E167  8A 13                     MOV DL,byte ptr [EBX]
0075E169  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0075E16C  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0075E16F  43                        INC EBX
0075E170  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0075E173  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075E176  8B 34 96                  MOV ESI,dword ptr [ESI + EDX*0x4]
0075E179  83 C0 03                  ADD EAX,0x3
0075E17C  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
0075E17F  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0075E182  8B 34 9E                  MOV ESI,dword ptr [ESI + EBX*0x4]
0075E185  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0075E188  03 34 93                  ADD ESI,dword ptr [EBX + EDX*0x4]
0075E18B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075E18E  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075E191  C1 FE 10                  SAR ESI,0x10
0075E194  8B 14 9A                  MOV EDX,dword ptr [EDX + EBX*0x4]
0075E197  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075E19A  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0075E19D  33 D2                     XOR EDX,EDX
0075E19F  8A 17                     MOV DL,byte ptr [EDI]
0075E1A1  47                        INC EDI
0075E1A2  03 DA                     ADD EBX,EDX
0075E1A4  8A 1C 0B                  MOV BL,byte ptr [EBX + ECX*0x1]
0075E1A7  88 58 FC                  MOV byte ptr [EAX + -0x4],BL
0075E1AA  8D 1C 32                  LEA EBX,[EDX + ESI*0x1]
0075E1AD  8A 1C 0B                  MOV BL,byte ptr [EBX + ECX*0x1]
0075E1B0  88 58 FB                  MOV byte ptr [EAX + -0x5],BL
0075E1B3  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075E1B6  03 D3                     ADD EDX,EBX
0075E1B8  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0075E1BB  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
0075E1BE  88 50 FA                  MOV byte ptr [EAX + -0x6],DL
0075E1C1  33 D2                     XOR EDX,EDX
0075E1C3  8A 17                     MOV DL,byte ptr [EDI]
0075E1C5  47                        INC EDI
0075E1C6  03 DA                     ADD EBX,EDX
0075E1C8  03 F2                     ADD ESI,EDX
0075E1CA  8A 1C 0B                  MOV BL,byte ptr [EBX + ECX*0x1]
0075E1CD  88 58 FF                  MOV byte ptr [EAX + -0x1],BL
0075E1D0  8A 1C 0E                  MOV BL,byte ptr [ESI + ECX*0x1]
0075E1D3  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0075E1D6  88 58 FE                  MOV byte ptr [EAX + -0x2],BL
0075E1D9  03 D6                     ADD EDX,ESI
0075E1DB  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0075E1DE  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0075E1E1  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
0075E1E4  88 50 FD                  MOV byte ptr [EAX + -0x3],DL
0075E1E7  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0075E1EA  4A                        DEC EDX
0075E1EB  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0075E1EE  0F 85 66 FF FF FF         JNZ 0x0075e15a
LAB_0075e1f4:
0075E1F4  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075E1F7  F6 42 68 01               TEST byte ptr [EDX + 0x68],0x1
0075E1FB  74 55                     JZ 0x0075e252
0075E1FD  33 D2                     XOR EDX,EDX
0075E1FF  8A 16                     MOV DL,byte ptr [ESI]
0075E201  8B F2                     MOV ESI,EDX
0075E203  33 D2                     XOR EDX,EDX
0075E205  8A 13                     MOV DL,byte ptr [EBX]
0075E207  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0075E20A  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
0075E20D  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0075E210  8B 34 B3                  MOV ESI,dword ptr [EBX + ESI*0x4]
0075E213  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0075E216  03 34 93                  ADD ESI,dword ptr [EBX + EDX*0x4]
0075E219  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0075E21C  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0075E21F  C1 FE 10                  SAR ESI,0x10
0075E222  8B 14 9A                  MOV EDX,dword ptr [EDX + EBX*0x4]
0075E225  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075E228  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0075E22B  33 D2                     XOR EDX,EDX
0075E22D  8A 17                     MOV DL,byte ptr [EDI]
0075E22F  8B FA                     MOV EDI,EDX
0075E231  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0075E234  8B 14 9A                  MOV EDX,dword ptr [EDX + EBX*0x4]
0075E237  03 D7                     ADD EDX,EDI
0075E239  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
0075E23C  88 50 02                  MOV byte ptr [EAX + 0x2],DL
0075E23F  8D 14 37                  LEA EDX,[EDI + ESI*0x1]
0075E242  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
0075E245  88 50 01                  MOV byte ptr [EAX + 0x1],DL
0075E248  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0075E24B  03 FA                     ADD EDI,EDX
0075E24D  8A 0C 0F                  MOV CL,byte ptr [EDI + ECX*0x1]
0075E250  88 08                     MOV byte ptr [EAX],CL
LAB_0075e252:
0075E252  5F                        POP EDI
0075E253  5E                        POP ESI
0075E254  5B                        POP EBX
0075E255  8B E5                     MOV ESP,EBP
0075E257  5D                        POP EBP
0075E258  C2 10 00                  RET 0x10
