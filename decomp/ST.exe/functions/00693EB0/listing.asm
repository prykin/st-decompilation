FUN_00693eb0:
00693EB0  55                        PUSH EBP
00693EB1  8B EC                     MOV EBP,ESP
00693EB3  B8 A8 19 00 00            MOV EAX,0x19a8
00693EB8  E8 83 9B 09 00            CALL 0x0072da40
00693EBD  53                        PUSH EBX
00693EBE  56                        PUSH ESI
00693EBF  8B D9                     MOV EBX,ECX
00693EC1  57                        PUSH EDI
00693EC2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00693EC5  B9 66 06 00 00            MOV ECX,0x666
00693ECA  8B F3                     MOV ESI,EBX
00693ECC  8D BD 58 E6 FF FF         LEA EDI,[EBP + 0xffffe658]
00693ED2  F3 A5                     MOVSD.REP ES:EDI,ESI
00693ED4  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00693ED7  50                        PUSH EAX
00693ED8  A4                        MOVSB ES:EDI,ESI
00693ED9  8D 14 CB                  LEA EDX,[EBX + ECX*0x8]
00693EDC  03 CA                     ADD ECX,EDX
00693EDE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00693EE1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00693EE4  8D 71 11                  LEA ESI,[ECX + 0x11]
00693EE7  8D 0C D2                  LEA ECX,[EDX + EDX*0x8]
00693EEA  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00693EED  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00693EF0  8D 7C 19 11               LEA EDI,[ECX + EBX*0x1 + 0x11]
00693EF4  B9 14 00 00 00            MOV ECX,0x14
00693EF9  F3 A5                     MOVSD.REP ES:EDI,ESI
00693EFB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00693EFE  A4                        MOVSB ES:EDI,ESI
00693EFF  88 54 19 33               MOV byte ptr [ECX + EBX*0x1 + 0x33],DL
00693F03  8B CB                     MOV ECX,EBX
00693F05  E8 CB E7 D6 FF            CALL 0x004026d5
00693F0A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00693F0D  80 BC 05 8B E6 FF FF FF   CMP byte ptr [EBP + EAX*0x1 + 0xffffe68b],0xff
00693F15  74 1F                     JZ 0x00693f36
00693F17  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00693F1A  8D B4 05 69 E6 FF FF      LEA ESI,[EBP + EAX*0x1 + 0xffffe669]
00693F21  B9 14 00 00 00            MOV ECX,0x14
00693F26  8B C2                     MOV EAX,EDX
00693F28  8D 7A 11                  LEA EDI,[EDX + 0x11]
00693F2B  F3 A5                     MOVSD.REP ES:EDI,ESI
00693F2D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00693F30  A4                        MOVSB ES:EDI,ESI
00693F31  88 48 33                  MOV byte ptr [EAX + 0x33],CL
00693F34  EB 03                     JMP 0x00693f39
LAB_00693f36:
00693F36  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_00693f39:
00693F39  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00693F3C  8D BC CB 99 02 00 00      LEA EDI,[EBX + ECX*0x8 + 0x299]
00693F43  33 C0                     XOR EAX,EAX
00693F45  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_00693f48:
00693F48  8A 14 07                  MOV DL,byte ptr [EDI + EAX*0x1]
00693F4B  8D BC F3 99 02 00 00      LEA EDI,[EBX + ESI*0x8 + 0x299]
00693F52  88 14 07                  MOV byte ptr [EDI + EAX*0x1],DL
00693F55  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00693F58  C6 04 07 00               MOV byte ptr [EDI + EAX*0x1],0x0
00693F5C  40                        INC EAX
00693F5D  83 F8 08                  CMP EAX,0x8
00693F60  7C E6                     JL 0x00693f48
00693F62  8D 3C CE                  LEA EDI,[ESI + ECX*0x8]
00693F65  8D 04 F1                  LEA EAX,[ECX + ESI*0x8]
00693F68  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00693F6B  C7 45 0C 08 00 00 00      MOV dword ptr [EBP + 0xc],0x8
00693F72  8A 94 3D F1 E8 FF FF      MOV DL,byte ptr [EBP + EDI*0x1 + 0xffffe8f1]
00693F79  88 55 0B                  MOV byte ptr [EBP + 0xb],DL
00693F7C  88 94 18 99 02 00 00      MOV byte ptr [EAX + EBX*0x1 + 0x299],DL
00693F83  8D 84 19 99 02 00 00      LEA EAX,[ECX + EBX*0x1 + 0x299]
00693F8A  8B D6                     MOV EDX,ESI
00693F8C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00693F8F  2B D1                     SUB EDX,ECX
LAB_00693f91:
00693F91  8A 08                     MOV CL,byte ptr [EAX]
00693F93  88 0C 02                  MOV byte ptr [EDX + EAX*0x1],CL
00693F96  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00693F99  C6 00 00                  MOV byte ptr [EAX],0x0
00693F9C  83 C0 08                  ADD EAX,0x8
00693F9F  49                        DEC ECX
00693FA0  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00693FA3  75 EC                     JNZ 0x00693f91
00693FA5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00693FA8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00693FAB  8A 84 15 F1 E8 FF FF      MOV AL,byte ptr [EBP + EDX*0x1 + 0xffffe8f1]
00693FB2  8B 94 F5 F1 E8 FF FF      MOV EDX,dword ptr [EBP + ESI*0x8 + 0xffffe8f1]
00693FB9  88 84 1F 99 02 00 00      MOV byte ptr [EDI + EBX*0x1 + 0x299],AL
00693FC0  89 11                     MOV dword ptr [ECX],EDX
00693FC2  8B 94 F5 F5 E8 FF FF      MOV EDX,dword ptr [EBP + ESI*0x8 + 0xffffe8f5]
00693FC9  8D B4 35 F1 E8 FF FF      LEA ESI,[EBP + ESI*0x1 + 0xffffe8f1]
00693FD0  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
00693FD3  88 84 1F 99 02 00 00      MOV byte ptr [EDI + EBX*0x1 + 0x299],AL
00693FDA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00693FDD  BF 08 00 00 00            MOV EDI,0x8
LAB_00693fe2:
00693FE2  8A 0E                     MOV CL,byte ptr [ESI]
00693FE4  83 C6 08                  ADD ESI,0x8
00693FE7  88 08                     MOV byte ptr [EAX],CL
00693FE9  83 C0 08                  ADD EAX,0x8
00693FEC  4F                        DEC EDI
00693FED  75 F3                     JNZ 0x00693fe2
00693FEF  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00693FF2  8A 55 0B                  MOV DL,byte ptr [EBP + 0xb]
00693FF5  5F                        POP EDI
00693FF6  5E                        POP ESI
00693FF7  88 94 18 99 02 00 00      MOV byte ptr [EAX + EBX*0x1 + 0x299],DL
00693FFE  B8 01 00 00 00            MOV EAX,0x1
00694003  5B                        POP EBX
00694004  8B E5                     MOV ESP,EBP
00694006  5D                        POP EBP
00694007  C2 08 00                  RET 0x8
