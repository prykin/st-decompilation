mfRSprLoadAsQSpr:
007171C0  55                        PUSH EBP
007171C1  8B EC                     MOV EBP,ESP
007171C3  83 EC 58                  SUB ESP,0x58
007171C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007171CB  56                        PUSH ESI
007171CC  57                        PUSH EDI
007171CD  8D 55 AC                  LEA EDX,[EBP + -0x54]
007171D0  8D 4D A8                  LEA ECX,[EBP + -0x58]
007171D3  6A 00                     PUSH 0x0
007171D5  52                        PUSH EDX
007171D6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
007171DD  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
007171E4  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
007171E7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007171ED  E8 FE 65 01 00            CALL 0x0072d7f0
007171F2  8B F0                     MOV ESI,EAX
007171F4  83 C4 08                  ADD ESP,0x8
007171F7  85 F6                     TEST ESI,ESI
007171F9  0F 85 12 01 00 00         JNZ 0x00717311
007171FF  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00717202  85 F6                     TEST ESI,ESI
00717204  75 17                     JNZ 0x0071721d
00717206  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071720B  68 2F 01 00 00            PUSH 0x12f
00717210  68 04 05 7F 00            PUSH 0x7f0504
00717215  50                        PUSH EAX
00717216  6A CC                     PUSH -0x34
00717218  E8 23 EC F8 FF            CALL 0x006a5e40
LAB_0071721d:
0071721D  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00717220  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00717223  57                        PUSH EDI
00717224  6A 00                     PUSH 0x0
00717226  51                        PUSH ECX
00717227  6A 1D                     PUSH 0x1d
00717229  8B CE                     MOV ECX,ESI
0071722B  E8 B0 AA FD FF            CALL 0x006f1ce0
00717230  85 C0                     TEST EAX,EAX
00717232  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00717235  75 1B                     JNZ 0x00717252
00717237  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071723D  68 31 01 00 00            PUSH 0x131
00717242  68 04 05 7F 00            PUSH 0x7f0504
00717247  52                        PUSH EDX
00717248  6A FC                     PUSH -0x4
0071724A  E8 F1 EB F8 FF            CALL 0x006a5e40
0071724F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_00717252:
00717252  8D 4D EC                  LEA ECX,[EBP + -0x14]
00717255  57                        PUSH EDI
00717256  51                        PUSH ECX
00717257  50                        PUSH EAX
00717258  6A 06                     PUSH 0x6
0071725A  8B CE                     MOV ECX,ESI
0071725C  E8 AF B0 FD FF            CALL 0x006f2310
00717261  85 C0                     TEST EAX,EAX
00717263  75 18                     JNZ 0x0071727d
00717265  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0071726B  68 33 01 00 00            PUSH 0x133
00717270  68 04 05 7F 00            PUSH 0x7f0504
00717275  52                        PUSH EDX
00717276  6A FC                     PUSH -0x4
00717278  E8 C3 EB F8 FF            CALL 0x006a5e40
LAB_0071727d:
0071727D  0F BF 45 F6               MOVSX EAX,word ptr [EBP + -0xa]
00717281  8D 04 85 0E 00 00 00      LEA EAX,[EAX*0x4 + 0xe]
00717288  50                        PUSH EAX
00717289  E8 82 39 F9 FF            CALL 0x006aac10
0071728E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00717291  89 70 02                  MOV dword ptr [EAX + 0x2],ESI
00717294  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00717297  66 8B 55 F6               MOV DX,word ptr [EBP + -0xa]
0071729B  6A 01                     PUSH 0x1
0071729D  66 89 11                  MOV word ptr [ECX],DX
007172A0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007172A3  66 8B 4D EC               MOV CX,word ptr [EBP + -0x14]
007172A7  66 89 48 06               MOV word ptr [EAX + 0x6],CX
007172AB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007172AE  66 8B 45 EE               MOV AX,word ptr [EBP + -0x12]
007172B2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007172B5  66 89 42 08               MOV word ptr [EDX + 0x8],AX
007172B9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007172BC  51                        PUSH ECX
007172BD  52                        PUSH EDX
007172BE  56                        PUSH ESI
007172BF  E8 8C 37 FF FF            CALL 0x0070aa50
007172C4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007172C7  83 C4 10                  ADD ESP,0x10
007172CA  89 41 0A                  MOV dword ptr [ECX + 0xa],EAX
007172CD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007172D0  B9 01 00 00 00            MOV ECX,0x1
007172D5  66 39 08                  CMP word ptr [EAX],CX
007172D8  8B 50 0A                  MOV EDX,dword ptr [EAX + 0xa]
007172DB  7E 17                     JLE 0x007172f4
LAB_007172dd:
007172DD  8B 3A                     MOV EDI,dword ptr [EDX]
007172DF  03 FA                     ADD EDI,EDX
007172E1  89 7C 88 0A               MOV dword ptr [EAX + ECX*0x4 + 0xa],EDI
007172E5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007172E8  0F BF 38                  MOVSX EDI,word ptr [EAX]
007172EB  8B 54 88 0A               MOV EDX,dword ptr [EAX + ECX*0x4 + 0xa]
007172EF  41                        INC ECX
007172F0  3B CF                     CMP ECX,EDI
007172F2  7C E9                     JL 0x007172dd
LAB_007172f4:
007172F4  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
007172F7  8D 45 F8                  LEA EAX,[EBP + -0x8]
007172FA  50                        PUSH EAX
007172FB  8B CE                     MOV ECX,ESI
007172FD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00717303  E8 D8 AD FD FF            CALL 0x006f20e0
00717308  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071730B  5F                        POP EDI
0071730C  5E                        POP ESI
0071730D  8B E5                     MOV ESP,EBP
0071730F  5D                        POP EBP
00717310  C3                        RET
LAB_00717311:
00717311  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00717314  8D 55 F8                  LEA EDX,[EBP + -0x8]
00717317  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071731D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00717320  52                        PUSH EDX
00717321  E8 BA AD FD FF            CALL 0x006f20e0
00717326  8D 45 FC                  LEA EAX,[EBP + -0x4]
00717329  50                        PUSH EAX
0071732A  E8 A1 F8 00 00            CALL 0x00726bd0
0071732F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00717332  83 C4 04                  ADD ESP,0x4
00717335  85 C0                     TEST EAX,EAX
00717337  75 05                     JNZ 0x0071733e
00717339  83 FE FC                  CMP ESI,-0x4
0071733C  74 36                     JZ 0x00717374
LAB_0071733e:
0071733E  68 40 05 7F 00            PUSH 0x7f0540
00717343  68 CC 4C 7A 00            PUSH 0x7a4ccc
00717348  56                        PUSH ESI
00717349  6A 00                     PUSH 0x0
0071734B  68 49 01 00 00            PUSH 0x149
00717350  68 04 05 7F 00            PUSH 0x7f0504
00717355  E8 76 61 F9 FF            CALL 0x006ad4d0
0071735A  83 C4 18                  ADD ESP,0x18
0071735D  85 C0                     TEST EAX,EAX
0071735F  74 01                     JZ 0x00717362
00717361  CC                        INT3
LAB_00717362:
00717362  68 4B 01 00 00            PUSH 0x14b
00717367  68 04 05 7F 00            PUSH 0x7f0504
0071736C  6A 00                     PUSH 0x0
0071736E  56                        PUSH ESI
0071736F  E8 CC EA F8 FF            CALL 0x006a5e40
LAB_00717374:
00717374  5F                        POP EDI
00717375  33 C0                     XOR EAX,EAX
00717377  5E                        POP ESI
00717378  8B E5                     MOV ESP,EBP
0071737A  5D                        POP EBP
0071737B  C3                        RET
