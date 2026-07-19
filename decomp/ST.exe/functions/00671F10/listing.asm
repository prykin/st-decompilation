FUN_00671f10:
00671F10  55                        PUSH EBP
00671F11  8B EC                     MOV EBP,ESP
00671F13  83 EC 6C                  SUB ESP,0x6c
00671F16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00671F1B  53                        PUSH EBX
00671F1C  56                        PUSH ESI
00671F1D  57                        PUSH EDI
00671F1E  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00671F21  33 FF                     XOR EDI,EDI
00671F23  8D 55 98                  LEA EDX,[EBP + -0x68]
00671F26  8D 4D 94                  LEA ECX,[EBP + -0x6c]
00671F29  57                        PUSH EDI
00671F2A  52                        PUSH EDX
00671F2B  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00671F2E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00671F31  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00671F34  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00671F37  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00671F3A  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00671F3D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00671F43  E8 A8 B8 0B 00            CALL 0x0072d7f0
00671F48  8B F0                     MOV ESI,EAX
00671F4A  83 C4 08                  ADD ESP,0x8
00671F4D  3B F7                     CMP ESI,EDI
00671F4F  0F 85 73 03 00 00         JNZ 0x006722c8
00671F55  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
00671F58  6A 7F                     PUSH 0x7f
00671F5A  68 A0 16 80 00            PUSH 0x8016a0
00671F5F  8D 43 04                  LEA EAX,[EBX + 0x4]
00671F62  50                        PUSH EAX
00671F63  E8 D8 C3 0B 00            CALL 0x0072e340
00671F68  6A 0A                     PUSH 0xa
00671F6A  C7 83 84 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x84],0xffffffff
00671F74  E8 C6 01 D9 FF            CALL 0x0040213f
00671F79  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00671F7C  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00671F7F  83 C4 10                  ADD ESP,0x10
00671F82  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00671F85  8D 79 01                  LEA EDI,[ECX + 0x1]
LAB_00671f88:
00671F88  8A 4F FF                  MOV CL,byte ptr [EDI + -0x1]
00671F8B  8D 77 FF                  LEA ESI,[EDI + -0x1]
00671F8E  80 F9 07                  CMP CL,0x7
00671F91  75 0A                     JNZ 0x00671f9d
00671F93  66 83 3F 1D               CMP word ptr [EDI],0x1d
00671F97  0F 84 19 02 00 00         JZ 0x006721b6
LAB_00671f9d:
00671F9D  56                        PUSH ESI
00671F9E  50                        PUSH EAX
00671F9F  E8 A5 01 D9 FF            CALL 0x00402149
00671FA4  8A 06                     MOV AL,byte ptr [ESI]
00671FA6  83 C4 08                  ADD ESP,0x8
00671FA9  3C 07                     CMP AL,0x7
00671FAB  0F 85 F3 01 00 00         JNZ 0x006721a4
00671FB1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00671FB4  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
00671FB8  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
00671FBB  2B F2                     SUB ESI,EDX
00671FBD  4E                        DEC ESI
00671FBE  79 18                     JNS 0x00671fd8
00671FC0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00671FC6  68 3E 05 00 00            PUSH 0x53e
00671FCB  68 F4 2C 7D 00            PUSH 0x7d2cf4
00671FD0  51                        PUSH ECX
00671FD1  6A 95                     PUSH -0x6b
00671FD3  E8 68 3E 03 00            CALL 0x006a5e40
LAB_00671fd8:
00671FD8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00671FDB  85 C0                     TEST EAX,EAX
00671FDD  75 6D                     JNZ 0x0067204c
00671FDF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00671FE2  85 C0                     TEST EAX,EAX
00671FE4  75 66                     JNZ 0x0067204c
00671FE6  0F BF 17                  MOVSX EDX,word ptr [EDI]
00671FE9  52                        PUSH EDX
00671FEA  E8 C0 18 D9 FF            CALL 0x004038af
00671FEF  83 C4 04                  ADD ESP,0x4
00671FF2  85 C0                     TEST EAX,EAX
00671FF4  7C 33                     JL 0x00672029
00671FF6  0F BF 07                  MOVSX EAX,word ptr [EDI]
00671FF9  50                        PUSH EAX
00671FFA  E8 B4 F6 D8 FF            CALL 0x004016b3
00671FFF  83 C4 04                  ADD ESP,0x4
00672002  85 C0                     TEST EAX,EAX
00672004  75 23                     JNZ 0x00672029
00672006  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
0067200A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067200D  8D 4D E8                  LEA ECX,[EBP + -0x18]
00672010  51                        PUSH ECX
00672011  52                        PUSH EDX
00672012  56                        PUSH ESI
00672013  50                        PUSH EAX
00672014  E8 60 17 D9 FF            CALL 0x00403779
00672019  83 C4 08                  ADD ESP,0x8
0067201C  8B CB                     MOV ECX,EBX
0067201E  50                        PUSH EAX
0067201F  E8 21 05 D9 FF            CALL 0x00402545
00672024  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00672027  EB 40                     JMP 0x00672069
LAB_00672029:
00672029  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
0067202D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00672030  8D 4D E8                  LEA ECX,[EBP + -0x18]
00672033  51                        PUSH ECX
00672034  52                        PUSH EDX
00672035  56                        PUSH ESI
00672036  50                        PUSH EAX
00672037  E8 3D 17 D9 FF            CALL 0x00403779
0067203C  83 C4 08                  ADD ESP,0x8
0067203F  8B CB                     MOV ECX,EBX
00672041  50                        PUSH EAX
00672042  E8 BD F5 D8 FF            CALL 0x00401604
00672047  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067204A  EB 1D                     JMP 0x00672069
LAB_0067204c:
0067204C  6A 04                     PUSH 0x4
0067204E  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
00672055  E8 B6 8B 03 00            CALL 0x006aac10
0067205A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0067205D  33 C9                     XOR ECX,ECX
0067205F  85 D2                     TEST EDX,EDX
00672061  0F 94 C1                  SETZ CL
00672064  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00672067  89 08                     MOV dword ptr [EAX],ECX
LAB_00672069:
00672069  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067206C  85 C0                     TEST EAX,EAX
0067206E  0F 84 17 01 00 00         JZ 0x0067218b
00672074  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00672077  56                        PUSH ESI
00672078  52                        PUSH EDX
00672079  E8 99 3C D9 FF            CALL 0x00405d17
0067207E  83 C4 08                  ADD ESP,0x8
00672081  85 C0                     TEST EAX,EAX
00672083  75 17                     JNZ 0x0067209c
00672085  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067208A  68 4C 05 00 00            PUSH 0x54c
0067208F  68 F4 2C 7D 00            PUSH 0x7d2cf4
00672094  50                        PUSH EAX
00672095  6A 95                     PUSH -0x6b
00672097  E8 A4 3D 03 00            CALL 0x006a5e40
LAB_0067209c:
0067209C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0067209F  48                        DEC EAX
006720A0  74 61                     JZ 0x00672103
006720A2  48                        DEC EAX
006720A3  74 50                     JZ 0x006720f5
006720A5  48                        DEC EAX
006720A6  74 1A                     JZ 0x006720c2
006720A8  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006720AE  68 5E 05 00 00            PUSH 0x55e
006720B3  68 F4 2C 7D 00            PUSH 0x7d2cf4
006720B8  51                        PUSH ECX
006720B9  6A 95                     PUSH -0x6b
006720BB  E8 80 3D 03 00            CALL 0x006a5e40
006720C0  EB 4D                     JMP 0x0067210f
LAB_006720c2:
006720C2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006720C5  8B 13                     MOV EDX,dword ptr [EBX]
006720C7  50                        PUSH EAX
006720C8  8B CB                     MOV ECX,EBX
006720CA  FF 52 0C                  CALL dword ptr [EDX + 0xc]
006720CD  8B F0                     MOV ESI,EAX
006720CF  85 F6                     TEST ESI,ESI
006720D1  7D 18                     JGE 0x006720eb
006720D3  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006720D9  68 59 05 00 00            PUSH 0x559
006720DE  68 F4 2C 7D 00            PUSH 0x7d2cf4
006720E3  51                        PUSH ECX
006720E4  6A FE                     PUSH -0x2
006720E6  E8 55 3D 03 00            CALL 0x006a5e40
LAB_006720eb:
006720EB  C6 45 D8 03               MOV byte ptr [EBP + -0x28],0x3
006720EF  66 89 75 D9               MOV word ptr [EBP + -0x27],SI
006720F3  EB 1A                     JMP 0x0067210f
LAB_006720f5:
006720F5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006720F8  C6 45 D8 02               MOV byte ptr [EBP + -0x28],0x2
006720FC  8B 02                     MOV EAX,dword ptr [EDX]
006720FE  89 45 D9                  MOV dword ptr [EBP + -0x27],EAX
00672101  EB 0C                     JMP 0x0067210f
LAB_00672103:
00672103  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00672106  C6 45 D8 01               MOV byte ptr [EBP + -0x28],0x1
0067210A  8B 11                     MOV EDX,dword ptr [ECX]
0067210C  89 55 D9                  MOV dword ptr [EBP + -0x27],EDX
LAB_0067210f:
0067210F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00672112  8D 45 D8                  LEA EAX,[EBP + -0x28]
00672115  50                        PUSH EAX
00672116  51                        PUSH ECX
00672117  E8 2D 00 D9 FF            CALL 0x00402149
0067211C  83 C4 08                  ADD ESP,0x8
0067211F  8D 55 FC                  LEA EDX,[EBP + -0x4]
00672122  52                        PUSH EDX
00672123  E8 38 8F 03 00            CALL 0x006ab060
00672128  66 8B 07                  MOV AX,word ptr [EDI]
0067212B  8B 4D D9                  MOV ECX,dword ptr [EBP + -0x27]
0067212E  66 3D 20 03               CMP AX,0x320
00672132  75 0E                     JNZ 0x00672142
00672134  85 C9                     TEST ECX,ECX
00672136  75 0A                     JNZ 0x00672142
00672138  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0067213B  85 D2                     TEST EDX,EDX
0067213D  75 03                     JNZ 0x00672142
0067213F  FF 45 F4                  INC dword ptr [EBP + -0xc]
LAB_00672142:
00672142  66 3D 03 00               CMP AX,0x3
00672146  75 0B                     JNZ 0x00672153
00672148  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0067214B  85 D2                     TEST EDX,EDX
0067214D  7E 04                     JLE 0x00672153
0067214F  4A                        DEC EDX
00672150  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00672153:
00672153  66 3D 21 03               CMP AX,0x321
00672157  75 0F                     JNZ 0x00672168
00672159  83 F9 01                  CMP ECX,0x1
0067215C  75 0A                     JNZ 0x00672168
0067215E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00672161  85 C9                     TEST ECX,ECX
00672163  75 03                     JNZ 0x00672168
00672165  FF 45 F0                  INC dword ptr [EBP + -0x10]
LAB_00672168:
00672168  66 3D 34 00               CMP AX,0x34
0067216C  75 36                     JNZ 0x006721a4
0067216E  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00672171  85 C0                     TEST EAX,EAX
00672173  7E 2F                     JLE 0x006721a4
00672175  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00672178  48                        DEC EAX
00672179  41                        INC ECX
0067217A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0067217D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00672180  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00672183  83 C7 05                  ADD EDI,0x5
00672186  E9 FD FD FF FF            JMP 0x00671f88
LAB_0067218b:
0067218B  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00672190  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00672193  68 6C 05 00 00            PUSH 0x56c
00672198  68 F4 2C 7D 00            PUSH 0x7d2cf4
0067219D  50                        PUSH EAX
0067219E  51                        PUSH ECX
0067219F  E8 9C 3C 03 00            CALL 0x006a5e40
FUN_00671f10::cf_continue_loop_006721A4:
006721A4  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006721A7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006721AA  41                        INC ECX
006721AB  83 C7 05                  ADD EDI,0x5
006721AE  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006721B1  E9 D2 FD FF FF            JMP 0x00671f88
LAB_006721b6:
006721B6  83 78 04 01               CMP dword ptr [EAX + 0x4],0x1
006721BA  74 1B                     JZ 0x006721d7
006721BC  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006721C2  68 70 05 00 00            PUSH 0x570
006721C7  68 F4 2C 7D 00            PUSH 0x7d2cf4
006721CC  52                        PUSH EDX
006721CD  6A 95                     PUSH -0x6b
006721CF  E8 6C 3C 03 00            CALL 0x006a5e40
006721D4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_006721d7:
006721D7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006721DA  85 C9                     TEST ECX,ECX
006721DC  74 06                     JZ 0x006721e4
006721DE  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006721E1  42                        INC EDX
006721E2  89 11                     MOV dword ptr [ECX],EDX
LAB_006721e4:
006721E4  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
006721E7  33 C9                     XOR ECX,ECX
006721E9  8A 08                     MOV CL,byte ptr [EAX]
006721EB  49                        DEC ECX
006721EC  83 F9 05                  CMP ECX,0x5
006721EF  0F 87 9B 00 00 00         JA 0x00672290
switchD_006721f5::switchD:
006721F5  FF 24 8D 18 23 67 00      JMP dword ptr [ECX*0x4 + 0x672318]
switchD_006721f5::caseD_1:
006721FC  8B 13                     MOV EDX,dword ptr [EBX]
006721FE  50                        PUSH EAX
006721FF  8B CB                     MOV ECX,EBX
00672201  FF 12                     CALL dword ptr [EDX]
00672203  6A 04                     PUSH 0x4
00672205  8B F0                     MOV ESI,EAX
00672207  E8 04 8A 03 00            CALL 0x006aac10
0067220C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0067220F  89 30                     MOV dword ptr [EAX],ESI
00672211  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00672214  85 C0                     TEST EAX,EAX
00672216  0F 84 8C 00 00 00         JZ 0x006722a8
0067221C  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
00672222  E9 81 00 00 00            JMP 0x006722a8
switchD_006721f5::caseD_2:
00672227  8B 13                     MOV EDX,dword ptr [EBX]
00672229  50                        PUSH EAX
0067222A  8B CB                     MOV ECX,EBX
0067222C  FF 52 04                  CALL dword ptr [EDX + 0x4]
0067222F  D9 5D E4                  FSTP float ptr [EBP + -0x1c]
00672232  6A 04                     PUSH 0x4
00672234  E8 D7 89 03 00            CALL 0x006aac10
00672239  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0067223C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0067223F  89 08                     MOV dword ptr [EAX],ECX
00672241  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00672244  85 C0                     TEST EAX,EAX
00672246  74 60                     JZ 0x006722a8
00672248  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
0067224E  EB 58                     JMP 0x006722a8
switchD_006721f5::caseD_3:
00672250  8B 13                     MOV EDX,dword ptr [EBX]
00672252  50                        PUSH EAX
00672253  8B CB                     MOV ECX,EBX
00672255  FF 52 08                  CALL dword ptr [EDX + 0x8]
00672258  8B F0                     MOV ESI,EAX
0067225A  85 F6                     TEST ESI,ESI
0067225C  75 17                     JNZ 0x00672275
0067225E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00672263  68 85 05 00 00            PUSH 0x585
00672268  68 F4 2C 7D 00            PUSH 0x7d2cf4
0067226D  50                        PUSH EAX
0067226E  6A 95                     PUSH -0x6b
00672270  E8 CB 3B 03 00            CALL 0x006a5e40
LAB_00672275:
00672275  6A 04                     PUSH 0x4
00672277  E8 94 89 03 00            CALL 0x006aac10
0067227C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0067227F  89 30                     MOV dword ptr [EAX],ESI
00672281  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00672284  85 C0                     TEST EAX,EAX
00672286  74 20                     JZ 0x006722a8
00672288  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
0067228E  EB 18                     JMP 0x006722a8
switchD_006721f5::default:
00672290  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00672296  68 8B 05 00 00            PUSH 0x58b
0067229B  68 F4 2C 7D 00            PUSH 0x7d2cf4
006722A0  51                        PUSH ECX
006722A1  6A 95                     PUSH -0x6b
006722A3  E8 98 3B 03 00            CALL 0x006a5e40
LAB_006722a8:
006722A8  8D 55 F8                  LEA EDX,[EBP + -0x8]
006722AB  52                        PUSH EDX
006722AC  E8 8C F6 D8 FF            CALL 0x0040193d
006722B1  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006722B4  83 C4 04                  ADD ESP,0x4
006722B7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006722BC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006722BF  5F                        POP EDI
006722C0  5E                        POP ESI
006722C1  5B                        POP EBX
006722C2  8B E5                     MOV ESP,EBP
006722C4  5D                        POP EBP
006722C5  C2 0C 00                  RET 0xc
LAB_006722c8:
006722C8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006722CB  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
006722CE  3B C7                     CMP EAX,EDI
006722D0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006722D6  74 09                     JZ 0x006722e1
006722D8  8D 55 FC                  LEA EDX,[EBP + -0x4]
006722DB  52                        PUSH EDX
006722DC  E8 7F 8D 03 00            CALL 0x006ab060
LAB_006722e1:
006722E1  39 7D EC                  CMP dword ptr [EBP + -0x14],EDI
006722E4  74 09                     JZ 0x006722ef
006722E6  8D 45 EC                  LEA EAX,[EBP + -0x14]
006722E9  50                        PUSH EAX
006722EA  E8 71 8D 03 00            CALL 0x006ab060
LAB_006722ef:
006722EF  8D 4D F8                  LEA ECX,[EBP + -0x8]
006722F2  51                        PUSH ECX
006722F3  E8 45 F6 D8 FF            CALL 0x0040193d
006722F8  83 C4 04                  ADD ESP,0x4
006722FB  3B F7                     CMP ESI,EDI
006722FD  7E 05                     JLE 0x00672304
006722FF  BE 95 FF FF FF            MOV ESI,0xffffff95
LAB_00672304:
00672304  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00672307  3B C7                     CMP EAX,EDI
00672309  74 02                     JZ 0x0067230d
0067230B  89 30                     MOV dword ptr [EAX],ESI
LAB_0067230d:
0067230D  5F                        POP EDI
0067230E  5E                        POP ESI
0067230F  33 C0                     XOR EAX,EAX
00672311  5B                        POP EBX
00672312  8B E5                     MOV ESP,EBP
00672314  5D                        POP EBP
00672315  C2 0C 00                  RET 0xc
