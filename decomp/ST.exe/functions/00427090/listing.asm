SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004248D0::sub_00427090:
00427090  55                        PUSH EBP
00427091  8B EC                     MOV EBP,ESP
00427093  83 EC 0C                  SUB ESP,0xc
00427096  A1 84 4D 7F 00            MOV EAX,[0x007f4d84]
0042709B  53                        PUSH EBX
0042709C  56                        PUSH ESI
0042709D  8B F1                     MOV ESI,ECX
0042709F  8B 0D 78 4D 7F 00         MOV ECX,dword ptr [0x007f4d78]
004270A5  57                        PUSH EDI
004270A6  3B C8                     CMP ECX,EAX
004270A8  7C 2E                     JL 0x004270d8
004270AA  8B 0D 6C 4D 7F 00         MOV ECX,dword ptr [0x007f4d6c]
004270B0  8D 44 40 1E               LEA EAX,[EAX + EAX*0x2 + 0x1e]
004270B4  C1 E0 02                  SHL EAX,0x2
004270B7  50                        PUSH EAX
004270B8  51                        PUSH ECX
004270B9  E8 92 5E 28 00            CALL 0x006acf50
004270BE  85 C0                     TEST EAX,EAX
004270C0  0F 84 98 08 00 00         JZ 0x0042795e
004270C6  A3 6C 4D 7F 00            MOV [0x007f4d6c],EAX
004270CB  A1 84 4D 7F 00            MOV EAX,[0x007f4d84]
004270D0  83 C0 0A                  ADD EAX,0xa
004270D3  A3 84 4D 7F 00            MOV [0x007f4d84],EAX
LAB_004270d8:
004270D8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004270DB  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004270DE  8B D0                     MOV EDX,EAX
004270E0  C1 E2 1C                  SHL EDX,0x1c
004270E3  2B D0                     SUB EDX,EAX
004270E5  8D 44 1A 02               LEA EAX,[EDX + EBX*0x1 + 0x2]
004270E9  C1 E0 04                  SHL EAX,0x4
004270EC  50                        PUSH EAX
004270ED  E8 7E 3B 28 00            CALL 0x006aac70
004270F2  8B F8                     MOV EDI,EAX
004270F4  85 FF                     TEST EDI,EDI
004270F6  0F 84 62 08 00 00         JZ 0x0042795e
004270FC  A1 78 4D 7F 00            MOV EAX,[0x007f4d78]
00427101  8B 15 6C 4D 7F 00         MOV EDX,dword ptr [0x007f4d6c]
00427107  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0042710A  89 7C 8A 08               MOV dword ptr [EDX + ECX*0x4 + 0x8],EDI
0042710E  A1 78 4D 7F 00            MOV EAX,[0x007f4d78]
00427113  8B 0D 6C 4D 7F 00         MOV ECX,dword ptr [0x007f4d6c]
00427119  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0042711C  C7 04 81 00 00 00 00      MOV dword ptr [ECX + EAX*0x4],0x0
00427123  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00427126  85 C0                     TEST EAX,EAX
00427128  0F 85 82 02 00 00         JNZ 0x004273b0
0042712E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00427131  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
00427137  8B C1                     MOV EAX,ECX
00427139  6A FF                     PUSH -0x1
0042713B  C1 E0 04                  SHL EAX,0x4
0042713E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00427141  6A 00                     PUSH 0x0
00427143  8B 04 10                  MOV EAX,dword ptr [EAX + EDX*0x1]
00427146  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
0042714C  03 C2                     ADD EAX,EDX
0042714E  8B 96 8C 03 00 00         MOV EDX,dword ptr [ESI + 0x38c]
00427154  0F AF 86 7C 03 00 00      IMUL EAX,dword ptr [ESI + 0x37c]
0042715B  03 C2                     ADD EAX,EDX
0042715D  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
00427163  03 C2                     ADD EAX,EDX
00427165  33 D2                     XOR EDX,EDX
00427167  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
0042716A  A1 78 4D 7F 00            MOV EAX,[0x007f4d78]
0042716F  8B 0D 6C 4D 7F 00         MOV ECX,dword ptr [0x007f4d6c]
00427175  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00427178  C1 EA 07                  SHR EDX,0x7
0042717B  89 14 81                  MOV dword ptr [ECX + EAX*0x4],EDX
0042717E  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
00427184  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00427187  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
0042718D  03 D0                     ADD EDX,EAX
0042718F  52                        PUSH EDX
00427190  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00427193  8B 04 0A                  MOV EAX,dword ptr [EDX + ECX*0x1]
00427196  8B 0D 7C 4D 7F 00         MOV ECX,dword ptr [0x007f4d7c]
0042719C  03 C1                     ADD EAX,ECX
0042719E  8B CE                     MOV ECX,ESI
004271A0  50                        PUSH EAX
004271A1  6A 00                     PUSH 0x0
004271A3  57                        PUSH EDI
004271A4  E8 67 DE FD FF            CALL 0x00405010
004271A9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004271AC  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
004271B2  8B 0C 11                  MOV ECX,dword ptr [ECX + EDX*0x1]
004271B5  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
004271B8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004271BB  3B CB                     CMP ECX,EBX
004271BD  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004271C0  0F 8F BD 00 00 00         JG 0x00427283
004271C6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004271C9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_004271cc:
004271CC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004271CF  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
004271D5  8B 0C 11                  MOV ECX,dword ptr [ECX + EDX*0x1]
004271D8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004271DB  3B D1                     CMP EDX,ECX
004271DD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004271E0  7E 25                     JLE 0x00427207
004271E2  8B 0D 80 4D 7F 00         MOV ECX,dword ptr [0x007f4d80]
004271E8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004271EB  6A FF                     PUSH -0x1
004271ED  03 CA                     ADD ECX,EDX
004271EF  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
004271F5  6A 00                     PUSH 0x0
004271F7  51                        PUSH ECX
004271F8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004271FB  03 CA                     ADD ECX,EDX
004271FD  51                        PUSH ECX
004271FE  50                        PUSH EAX
004271FF  57                        PUSH EDI
00427200  8B CE                     MOV ECX,ESI
00427202  E8 09 DE FD FF            CALL 0x00405010
LAB_00427207:
00427207  39 5D 0C                  CMP dword ptr [EBP + 0xc],EBX
0042720A  7D 50                     JGE 0x0042725c
0042720C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042720F  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
00427215  8B 0C 11                  MOV ECX,dword ptr [ECX + EDX*0x1]
00427218  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
0042721E  03 CA                     ADD ECX,EDX
00427220  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
00427226  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00427229  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042722C  8B 4C 11 10               MOV ECX,dword ptr [ECX + EDX*0x1 + 0x10]
00427230  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
00427236  03 CA                     ADD ECX,EDX
00427238  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0042723B  3B D1                     CMP EDX,ECX
0042723D  7D 1D                     JGE 0x0042725c
0042723F  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
00427245  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00427248  6A FF                     PUSH -0x1
0042724A  03 D1                     ADD EDX,ECX
0042724C  6A 01                     PUSH 0x1
0042724E  52                        PUSH EDX
0042724F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00427252  8B CE                     MOV ECX,ESI
00427254  52                        PUSH EDX
00427255  50                        PUSH EAX
00427256  57                        PUSH EDI
00427257  E8 B4 DD FD FF            CALL 0x00405010
LAB_0042725c:
0042725C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042725F  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
00427265  8B 0C 11                  MOV ECX,dword ptr [ECX + EDX*0x1]
00427268  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0042726B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
0042726E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00427271  41                        INC ECX
00427272  83 C2 10                  ADD EDX,0x10
00427275  3B CB                     CMP ECX,EBX
00427277  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0042727A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0042727D  0F 8E 49 FF FF FF         JLE 0x004271cc
LAB_00427283:
00427283  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
00427289  6A FF                     PUSH -0x1
0042728B  03 D3                     ADD EDX,EBX
0042728D  8B CB                     MOV ECX,EBX
0042728F  6A 01                     PUSH 0x1
00427291  52                        PUSH EDX
00427292  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
00427298  C1 E1 04                  SHL ECX,0x4
0042729B  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0042729E  8B 0C 11                  MOV ECX,dword ptr [ECX + EDX*0x1]
004272A1  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
004272A7  03 CA                     ADD ECX,EDX
004272A9  51                        PUSH ECX
004272AA  50                        PUSH EAX
004272AB  57                        PUSH EDI
004272AC  8B CE                     MOV ECX,ESI
004272AE  E8 5D DD FD FF            CALL 0x00405010
004272B3  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
004272B9  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
004272BF  6A FF                     PUSH -0x1
004272C1  03 D3                     ADD EDX,EBX
004272C3  6A 03                     PUSH 0x3
004272C5  52                        PUSH EDX
004272C6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004272C9  8B 4C 0A 0C               MOV ECX,dword ptr [EDX + ECX*0x1 + 0xc]
004272CD  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
004272D3  03 CA                     ADD ECX,EDX
004272D5  51                        PUSH ECX
004272D6  50                        PUSH EAX
004272D7  57                        PUSH EDI
004272D8  8B CE                     MOV ECX,ESI
004272DA  E8 31 DD FD FF            CALL 0x00405010
004272DF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004272E2  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
004272E5  3B D9                     CMP EBX,ECX
004272E7  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
004272EA  0F 8E 23 06 00 00         JLE 0x00427913
004272F0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004272F3  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
004272F9  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004272FC  EB 03                     JMP 0x00427301
LAB_004272fe:
004272FE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_00427301:
00427301  8B 44 11 0C               MOV EAX,dword ptr [ECX + EDX*0x1 + 0xc]
00427305  39 44 11 FC               CMP dword ptr [ECX + EDX*0x1 + -0x4],EAX
00427309  7E 36                     JLE 0x00427341
0042730B  39 5D 0C                  CMP dword ptr [EBP + 0xc],EBX
0042730E  74 31                     JZ 0x00427341
00427310  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
00427316  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00427319  6A FF                     PUSH -0x1
0042731B  03 D1                     ADD EDX,ECX
0042731D  6A 03                     PUSH 0x3
0042731F  52                        PUSH EDX
00427320  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
00427326  8B CE                     MOV ECX,ESI
00427328  03 C2                     ADD EAX,EDX
0042732A  50                        PUSH EAX
0042732B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042732E  50                        PUSH EAX
0042732F  57                        PUSH EDI
00427330  E8 DB DC FD FF            CALL 0x00405010
00427335  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
0042733B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0042733E  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00427341:
00427341  8B 44 11 0C               MOV EAX,dword ptr [ECX + EDX*0x1 + 0xc]
00427345  39 44 11 FC               CMP dword ptr [ECX + EDX*0x1 + -0x4],EAX
00427349  7D 30                     JGE 0x0042737b
0042734B  8B 0D 80 4D 7F 00         MOV ECX,dword ptr [0x007f4d80]
00427351  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00427354  6A FF                     PUSH -0x1
00427356  03 CA                     ADD ECX,EDX
00427358  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0042735B  6A 02                     PUSH 0x2
0042735D  51                        PUSH ECX
0042735E  8B 0D 7C 4D 7F 00         MOV ECX,dword ptr [0x007f4d7c]
00427364  03 C1                     ADD EAX,ECX
00427366  8B CE                     MOV ECX,ESI
00427368  50                        PUSH EAX
00427369  52                        PUSH EDX
0042736A  57                        PUSH EDI
0042736B  E8 A0 DC FD FF            CALL 0x00405010
00427370  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
00427376  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00427379  EB 03                     JMP 0x0042737e
LAB_0042737b:
0042737B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
LAB_0042737e:
0042737E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00427381  4A                        DEC EDX
00427382  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00427385  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00427388  83 EA 10                  SUB EDX,0x10
0042738B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0042738E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00427391  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
00427394  0F 8F 64 FF FF FF         JG 0x004272fe
0042739A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0042739D  8B 54 0B 0C               MOV EDX,dword ptr [EBX + ECX*0x1 + 0xc]
004273A1  3B 54 0B 1C               CMP EDX,dword ptr [EBX + ECX*0x1 + 0x1c]
004273A5  0F 8E 6E 05 00 00         JLE 0x00427919
004273AB  E9 41 05 00 00            JMP 0x004278f1
LAB_004273b0:
004273B0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004273B3  83 F8 FF                  CMP EAX,-0x1
004273B6  8B C1                     MOV EAX,ECX
004273B8  0F 85 B8 02 00 00         JNZ 0x00427676
004273BE  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
004273C4  6A FF                     PUSH -0x1
004273C6  C1 E0 04                  SHL EAX,0x4
004273C9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004273CC  6A 00                     PUSH 0x0
004273CE  8B 04 10                  MOV EAX,dword ptr [EAX + EDX*0x1]
004273D1  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
004273D7  03 C2                     ADD EAX,EDX
004273D9  8B 96 8C 03 00 00         MOV EDX,dword ptr [ESI + 0x38c]
004273DF  0F AF 86 7C 03 00 00      IMUL EAX,dword ptr [ESI + 0x37c]
004273E6  03 C2                     ADD EAX,EDX
004273E8  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
004273EE  03 C2                     ADD EAX,EDX
004273F0  33 D2                     XOR EDX,EDX
004273F2  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
004273F5  A1 78 4D 7F 00            MOV EAX,[0x007f4d78]
004273FA  8B 0D 6C 4D 7F 00         MOV ECX,dword ptr [0x007f4d6c]
00427400  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00427403  C1 EA 07                  SHR EDX,0x7
00427406  89 14 81                  MOV dword ptr [ECX + EAX*0x4],EDX
00427409  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
0042740F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00427412  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
00427418  03 D0                     ADD EDX,EAX
0042741A  52                        PUSH EDX
0042741B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042741E  8B 04 0A                  MOV EAX,dword ptr [EDX + ECX*0x1]
00427421  8B 0D 7C 4D 7F 00         MOV ECX,dword ptr [0x007f4d7c]
00427427  03 C1                     ADD EAX,ECX
00427429  8B CE                     MOV ECX,ESI
0042742B  50                        PUSH EAX
0042742C  6A 00                     PUSH 0x0
0042742E  57                        PUSH EDI
0042742F  E8 DC DB FD FF            CALL 0x00405010
00427434  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00427437  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
0042743D  8B 0C 11                  MOV ECX,dword ptr [ECX + EDX*0x1]
00427440  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00427443  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00427446  3B CB                     CMP ECX,EBX
00427448  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0042744B  0F 8F BD 00 00 00         JG 0x0042750e
00427451  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00427454  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00427457:
00427457  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042745A  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
00427460  8B 0C 11                  MOV ECX,dword ptr [ECX + EDX*0x1]
00427463  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00427466  3B D1                     CMP EDX,ECX
00427468  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0042746B  7E 25                     JLE 0x00427492
0042746D  8B 0D 80 4D 7F 00         MOV ECX,dword ptr [0x007f4d80]
00427473  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00427476  6A FF                     PUSH -0x1
00427478  03 CA                     ADD ECX,EDX
0042747A  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
00427480  6A 00                     PUSH 0x0
00427482  51                        PUSH ECX
00427483  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00427486  03 CA                     ADD ECX,EDX
00427488  51                        PUSH ECX
00427489  50                        PUSH EAX
0042748A  57                        PUSH EDI
0042748B  8B CE                     MOV ECX,ESI
0042748D  E8 7E DB FD FF            CALL 0x00405010
LAB_00427492:
00427492  39 5D 0C                  CMP dword ptr [EBP + 0xc],EBX
00427495  7D 50                     JGE 0x004274e7
00427497  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042749A  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
004274A0  8B 0C 11                  MOV ECX,dword ptr [ECX + EDX*0x1]
004274A3  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
004274A9  03 CA                     ADD ECX,EDX
004274AB  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
004274B1  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
004274B4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004274B7  8B 4C 11 10               MOV ECX,dword ptr [ECX + EDX*0x1 + 0x10]
004274BB  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
004274C1  03 CA                     ADD ECX,EDX
004274C3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004274C6  3B D1                     CMP EDX,ECX
004274C8  7D 1D                     JGE 0x004274e7
004274CA  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
004274D0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004274D3  6A FF                     PUSH -0x1
004274D5  03 D1                     ADD EDX,ECX
004274D7  6A 01                     PUSH 0x1
004274D9  52                        PUSH EDX
004274DA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004274DD  8B CE                     MOV ECX,ESI
004274DF  52                        PUSH EDX
004274E0  50                        PUSH EAX
004274E1  57                        PUSH EDI
004274E2  E8 29 DB FD FF            CALL 0x00405010
LAB_004274e7:
004274E7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004274EA  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
004274F0  8B 0C 11                  MOV ECX,dword ptr [ECX + EDX*0x1]
004274F3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004274F6  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
004274F9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004274FC  41                        INC ECX
004274FD  83 C2 10                  ADD EDX,0x10
00427500  3B CB                     CMP ECX,EBX
00427502  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00427505  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00427508  0F 8E 49 FF FF FF         JLE 0x00427457
LAB_0042750e:
0042750E  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
00427514  6A FF                     PUSH -0x1
00427516  03 D3                     ADD EDX,EBX
00427518  8B CB                     MOV ECX,EBX
0042751A  6A 01                     PUSH 0x1
0042751C  52                        PUSH EDX
0042751D  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
00427523  C1 E1 04                  SHL ECX,0x4
00427526  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00427529  8B 0C 11                  MOV ECX,dword ptr [ECX + EDX*0x1]
0042752C  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
00427532  03 CA                     ADD ECX,EDX
00427534  51                        PUSH ECX
00427535  50                        PUSH EAX
00427536  57                        PUSH EDI
00427537  8B CE                     MOV ECX,ESI
00427539  E8 D2 DA FD FF            CALL 0x00405010
0042753E  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
00427544  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
0042754A  6A FF                     PUSH -0x1
0042754C  03 D3                     ADD EDX,EBX
0042754E  6A 03                     PUSH 0x3
00427550  52                        PUSH EDX
00427551  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00427554  8B 4C 0A 04               MOV ECX,dword ptr [EDX + ECX*0x1 + 0x4]
00427558  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
0042755E  03 CA                     ADD ECX,EDX
00427560  51                        PUSH ECX
00427561  50                        PUSH EAX
00427562  57                        PUSH EDI
00427563  8B CE                     MOV ECX,ESI
00427565  E8 A6 DA FD FF            CALL 0x00405010
0042756A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042756D  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00427570  3B D9                     CMP EBX,ECX
00427572  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
00427575  0F 8E D9 00 00 00         JLE 0x00427654
0042757B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0042757E  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
00427584  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00427587  EB 03                     JMP 0x0042758c
LAB_00427589:
00427589  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_0042758c:
0042758C  8B 44 0A 04               MOV EAX,dword ptr [EDX + ECX*0x1 + 0x4]
00427590  39 44 0A F4               CMP dword ptr [EDX + ECX*0x1 + -0xc],EAX
00427594  7E 36                     JLE 0x004275cc
00427596  39 5D 0C                  CMP dword ptr [EBP + 0xc],EBX
00427599  74 31                     JZ 0x004275cc
0042759B  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
004275A1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004275A4  6A FF                     PUSH -0x1
004275A6  03 D1                     ADD EDX,ECX
004275A8  6A 03                     PUSH 0x3
004275AA  52                        PUSH EDX
004275AB  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
004275B1  8B CE                     MOV ECX,ESI
004275B3  03 C2                     ADD EAX,EDX
004275B5  50                        PUSH EAX
004275B6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004275B9  50                        PUSH EAX
004275BA  57                        PUSH EDI
004275BB  E8 50 DA FD FF            CALL 0x00405010
004275C0  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
004275C6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004275C9  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_004275cc:
004275CC  8B 44 0A 04               MOV EAX,dword ptr [EDX + ECX*0x1 + 0x4]
004275D0  39 44 0A F4               CMP dword ptr [EDX + ECX*0x1 + -0xc],EAX
004275D4  7D 30                     JGE 0x00427606
004275D6  8B 0D 80 4D 7F 00         MOV ECX,dword ptr [0x007f4d80]
004275DC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004275DF  6A FF                     PUSH -0x1
004275E1  03 CA                     ADD ECX,EDX
004275E3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004275E6  6A 02                     PUSH 0x2
004275E8  51                        PUSH ECX
004275E9  8B 0D 7C 4D 7F 00         MOV ECX,dword ptr [0x007f4d7c]
004275EF  03 C1                     ADD EAX,ECX
004275F1  8B CE                     MOV ECX,ESI
004275F3  50                        PUSH EAX
004275F4  52                        PUSH EDX
004275F5  57                        PUSH EDI
004275F6  E8 15 DA FD FF            CALL 0x00405010
004275FB  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
00427601  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00427604  EB 03                     JMP 0x00427609
LAB_00427606:
00427606  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
LAB_00427609:
00427609  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0042760C  4A                        DEC EDX
0042760D  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00427610  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00427613  83 EA 10                  SUB EDX,0x10
00427616  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00427619  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0042761C  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
0042761F  0F 8F 64 FF FF FF         JG 0x00427589
00427625  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00427628  8B 54 0B 04               MOV EDX,dword ptr [EBX + ECX*0x1 + 0x4]
0042762C  3B 54 0B 14               CMP EDX,dword ptr [EBX + ECX*0x1 + 0x14]
00427630  7E 28                     JLE 0x0042765a
00427632  8B 0D 80 4D 7F 00         MOV ECX,dword ptr [0x007f4d80]
00427638  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0042763B  6A FF                     PUSH -0x1
0042763D  03 CB                     ADD ECX,EBX
0042763F  6A 03                     PUSH 0x3
00427641  51                        PUSH ECX
00427642  8B 0D 7C 4D 7F 00         MOV ECX,dword ptr [0x007f4d7c]
00427648  03 D1                     ADD EDX,ECX
0042764A  8B CE                     MOV ECX,ESI
0042764C  52                        PUSH EDX
0042764D  50                        PUSH EAX
0042764E  57                        PUSH EDI
0042764F  E8 BC D9 FD FF            CALL 0x00405010
LAB_00427654:
00427654  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
LAB_0042765a:
0042765A  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
00427660  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00427663  6A FF                     PUSH -0x1
00427665  03 D3                     ADD EDX,EBX
00427667  6A 02                     PUSH 0x2
00427669  52                        PUSH EDX
0042766A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042766D  8B 4C 0A 04               MOV ECX,dword ptr [EDX + ECX*0x1 + 0x4]
00427671  E9 BA 02 00 00            JMP 0x00427930
LAB_00427676:
00427676  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
0042767C  6A FF                     PUSH -0x1
0042767E  C1 E0 04                  SHL EAX,0x4
00427681  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00427684  6A 00                     PUSH 0x0
00427686  8B 44 10 08               MOV EAX,dword ptr [EAX + EDX*0x1 + 0x8]
0042768A  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
00427690  03 C2                     ADD EAX,EDX
00427692  8B 96 8C 03 00 00         MOV EDX,dword ptr [ESI + 0x38c]
00427698  0F AF 86 7C 03 00 00      IMUL EAX,dword ptr [ESI + 0x37c]
0042769F  03 C2                     ADD EAX,EDX
004276A1  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
004276A7  03 C2                     ADD EAX,EDX
004276A9  33 D2                     XOR EDX,EDX
004276AB  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
004276AE  A1 78 4D 7F 00            MOV EAX,[0x007f4d78]
004276B3  8B 0D 6C 4D 7F 00         MOV ECX,dword ptr [0x007f4d6c]
004276B9  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004276BC  C1 EA 07                  SHR EDX,0x7
004276BF  89 14 81                  MOV dword ptr [ECX + EAX*0x4],EDX
004276C2  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
004276C8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004276CB  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
004276D1  03 D0                     ADD EDX,EAX
004276D3  52                        PUSH EDX
004276D4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004276D7  8B 44 0A 08               MOV EAX,dword ptr [EDX + ECX*0x1 + 0x8]
004276DB  8B 0D 7C 4D 7F 00         MOV ECX,dword ptr [0x007f4d7c]
004276E1  03 C1                     ADD EAX,ECX
004276E3  8B CE                     MOV ECX,ESI
004276E5  50                        PUSH EAX
004276E6  6A 00                     PUSH 0x0
004276E8  57                        PUSH EDI
004276E9  E8 22 D9 FD FF            CALL 0x00405010
004276EE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004276F1  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
004276F7  8B 4C 11 08               MOV ECX,dword ptr [ECX + EDX*0x1 + 0x8]
004276FB  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
004276FE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00427701  3B CB                     CMP ECX,EBX
00427703  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00427706  0F 8F C0 00 00 00         JG 0x004277cc
0042770C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042770F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00427712:
00427712  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00427715  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
0042771B  8B 4C 11 08               MOV ECX,dword ptr [ECX + EDX*0x1 + 0x8]
0042771F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00427722  3B D1                     CMP EDX,ECX
00427724  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00427727  7E 25                     JLE 0x0042774e
00427729  8B 0D 80 4D 7F 00         MOV ECX,dword ptr [0x007f4d80]
0042772F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00427732  6A FF                     PUSH -0x1
00427734  03 CA                     ADD ECX,EDX
00427736  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
0042773C  6A 00                     PUSH 0x0
0042773E  51                        PUSH ECX
0042773F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00427742  03 CA                     ADD ECX,EDX
00427744  51                        PUSH ECX
00427745  50                        PUSH EAX
00427746  57                        PUSH EDI
00427747  8B CE                     MOV ECX,ESI
00427749  E8 C2 D8 FD FF            CALL 0x00405010
LAB_0042774e:
0042774E  39 5D 0C                  CMP dword ptr [EBP + 0xc],EBX
00427751  7D 51                     JGE 0x004277a4
00427753  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00427756  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
0042775C  8B 4C 11 08               MOV ECX,dword ptr [ECX + EDX*0x1 + 0x8]
00427760  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
00427766  03 CA                     ADD ECX,EDX
00427768  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
0042776E  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00427771  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00427774  8B 4C 11 18               MOV ECX,dword ptr [ECX + EDX*0x1 + 0x18]
00427778  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
0042777E  03 CA                     ADD ECX,EDX
00427780  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00427783  3B D1                     CMP EDX,ECX
00427785  7D 1D                     JGE 0x004277a4
00427787  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
0042778D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00427790  6A FF                     PUSH -0x1
00427792  03 D1                     ADD EDX,ECX
00427794  6A 01                     PUSH 0x1
00427796  52                        PUSH EDX
00427797  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0042779A  8B CE                     MOV ECX,ESI
0042779C  52                        PUSH EDX
0042779D  50                        PUSH EAX
0042779E  57                        PUSH EDI
0042779F  E8 6C D8 FD FF            CALL 0x00405010
LAB_004277a4:
004277A4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004277A7  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
004277AD  8B 4C 11 08               MOV ECX,dword ptr [ECX + EDX*0x1 + 0x8]
004277B1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004277B4  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
004277B7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004277BA  41                        INC ECX
004277BB  83 C2 10                  ADD EDX,0x10
004277BE  3B CB                     CMP ECX,EBX
004277C0  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004277C3  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004277C6  0F 8E 46 FF FF FF         JLE 0x00427712
LAB_004277cc:
004277CC  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
004277D2  6A FF                     PUSH -0x1
004277D4  03 D3                     ADD EDX,EBX
004277D6  8B CB                     MOV ECX,EBX
004277D8  6A 01                     PUSH 0x1
004277DA  52                        PUSH EDX
004277DB  8B 15 74 4D 7F 00         MOV EDX,dword ptr [0x007f4d74]
004277E1  C1 E1 04                  SHL ECX,0x4
004277E4  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004277E7  8B 4C 11 08               MOV ECX,dword ptr [ECX + EDX*0x1 + 0x8]
004277EB  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
004277F1  03 CA                     ADD ECX,EDX
004277F3  51                        PUSH ECX
004277F4  50                        PUSH EAX
004277F5  57                        PUSH EDI
004277F6  8B CE                     MOV ECX,ESI
004277F8  E8 13 D8 FD FF            CALL 0x00405010
004277FD  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
00427803  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
00427809  6A FF                     PUSH -0x1
0042780B  03 D3                     ADD EDX,EBX
0042780D  6A 03                     PUSH 0x3
0042780F  52                        PUSH EDX
00427810  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00427813  8B 4C 0A 0C               MOV ECX,dword ptr [EDX + ECX*0x1 + 0xc]
00427817  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
0042781D  03 CA                     ADD ECX,EDX
0042781F  51                        PUSH ECX
00427820  50                        PUSH EAX
00427821  57                        PUSH EDI
00427822  8B CE                     MOV ECX,ESI
00427824  E8 E7 D7 FD FF            CALL 0x00405010
00427829  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042782C  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0042782F  3B D9                     CMP EBX,ECX
00427831  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
00427834  0F 8E D9 00 00 00         JLE 0x00427913
0042783A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0042783D  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
00427843  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00427846  EB 03                     JMP 0x0042784b
LAB_00427848:
00427848  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_0042784b:
0042784B  8B 44 0A 0C               MOV EAX,dword ptr [EDX + ECX*0x1 + 0xc]
0042784F  39 44 0A FC               CMP dword ptr [EDX + ECX*0x1 + -0x4],EAX
00427853  7E 36                     JLE 0x0042788b
00427855  39 5D 0C                  CMP dword ptr [EBP + 0xc],EBX
00427858  74 31                     JZ 0x0042788b
0042785A  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
00427860  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00427863  6A FF                     PUSH -0x1
00427865  03 D1                     ADD EDX,ECX
00427867  6A 03                     PUSH 0x3
00427869  52                        PUSH EDX
0042786A  8B 15 7C 4D 7F 00         MOV EDX,dword ptr [0x007f4d7c]
00427870  8B CE                     MOV ECX,ESI
00427872  03 C2                     ADD EAX,EDX
00427874  50                        PUSH EAX
00427875  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00427878  50                        PUSH EAX
00427879  57                        PUSH EDI
0042787A  E8 91 D7 FD FF            CALL 0x00405010
0042787F  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
00427885  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00427888  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0042788b:
0042788B  8B 44 0A 0C               MOV EAX,dword ptr [EDX + ECX*0x1 + 0xc]
0042788F  39 44 0A FC               CMP dword ptr [EDX + ECX*0x1 + -0x4],EAX
00427893  7D 30                     JGE 0x004278c5
00427895  8B 0D 80 4D 7F 00         MOV ECX,dword ptr [0x007f4d80]
0042789B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0042789E  6A FF                     PUSH -0x1
004278A0  03 CA                     ADD ECX,EDX
004278A2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004278A5  6A 02                     PUSH 0x2
004278A7  51                        PUSH ECX
004278A8  8B 0D 7C 4D 7F 00         MOV ECX,dword ptr [0x007f4d7c]
004278AE  03 C1                     ADD EAX,ECX
004278B0  8B CE                     MOV ECX,ESI
004278B2  50                        PUSH EAX
004278B3  52                        PUSH EDX
004278B4  57                        PUSH EDI
004278B5  E8 56 D7 FD FF            CALL 0x00405010
004278BA  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
004278C0  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
004278C3  EB 03                     JMP 0x004278c8
LAB_004278c5:
004278C5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
LAB_004278c8:
004278C8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004278CB  4A                        DEC EDX
004278CC  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
004278CF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004278D2  83 EA 10                  SUB EDX,0x10
004278D5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004278D8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004278DB  3B 55 08                  CMP EDX,dword ptr [EBP + 0x8]
004278DE  0F 8F 64 FF FF FF         JG 0x00427848
004278E4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004278E7  8B 54 0B 0C               MOV EDX,dword ptr [EBX + ECX*0x1 + 0xc]
004278EB  3B 54 0B 1C               CMP EDX,dword ptr [EBX + ECX*0x1 + 0x1c]
004278EF  7E 28                     JLE 0x00427919
LAB_004278f1:
004278F1  8B 0D 80 4D 7F 00         MOV ECX,dword ptr [0x007f4d80]
004278F7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004278FA  6A FF                     PUSH -0x1
004278FC  03 CB                     ADD ECX,EBX
004278FE  6A 03                     PUSH 0x3
00427900  51                        PUSH ECX
00427901  8B 0D 7C 4D 7F 00         MOV ECX,dword ptr [0x007f4d7c]
00427907  03 D1                     ADD EDX,ECX
00427909  8B CE                     MOV ECX,ESI
0042790B  52                        PUSH EDX
0042790C  50                        PUSH EAX
0042790D  57                        PUSH EDI
0042790E  E8 FD D6 FD FF            CALL 0x00405010
LAB_00427913:
00427913  8B 0D 74 4D 7F 00         MOV ECX,dword ptr [0x007f4d74]
LAB_00427919:
00427919  8B 15 80 4D 7F 00         MOV EDX,dword ptr [0x007f4d80]
0042791F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00427922  6A FF                     PUSH -0x1
00427924  03 D3                     ADD EDX,EBX
00427926  6A 02                     PUSH 0x2
00427928  52                        PUSH EDX
00427929  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042792C  8B 4C 0A 0C               MOV ECX,dword ptr [EDX + ECX*0x1 + 0xc]
LAB_00427930:
00427930  03 0D 7C 4D 7F 00         ADD ECX,dword ptr [0x007f4d7c]
00427936  51                        PUSH ECX
00427937  50                        PUSH EAX
00427938  57                        PUSH EDI
00427939  8B CE                     MOV ECX,ESI
0042793B  E8 D0 D6 FD FF            CALL 0x00405010
00427940  8B 0D 78 4D 7F 00         MOV ECX,dword ptr [0x007f4d78]
00427946  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
00427949  8B 0D 6C 4D 7F 00         MOV ECX,dword ptr [0x007f4d6c]
0042794F  89 44 91 04               MOV dword ptr [ECX + EDX*0x4 + 0x4],EAX
00427953  A1 78 4D 7F 00            MOV EAX,[0x007f4d78]
00427958  40                        INC EAX
00427959  A3 78 4D 7F 00            MOV [0x007f4d78],EAX
LAB_0042795e:
0042795E  5F                        POP EDI
0042795F  5E                        POP ESI
00427960  33 C0                     XOR EAX,EAX
00427962  5B                        POP EBX
00427963  8B E5                     MOV ESP,EBP
00427965  5D                        POP EBP
00427966  C2 0C 00                  RET 0xc
