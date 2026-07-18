FUN_00759860:
00759860  55                        PUSH EBP
00759861  8B EC                     MOV EBP,ESP
00759863  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00759866  53                        PUSH EBX
00759867  56                        PUSH ESI
00759868  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075986B  57                        PUSH EDI
0075986C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0075986F  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00759872  8D 1C 07                  LEA EBX,[EDI + EAX*0x1]
00759875  3B D9                     CMP EBX,ECX
00759877  77 0A                     JA 0x00759883
00759879  3B 46 0C                  CMP EAX,dword ptr [ESI + 0xc]
0075987C  77 05                     JA 0x00759883
0075987E  83 3E 00                  CMP dword ptr [ESI],0x0
00759881  75 17                     JNZ 0x0075989a
LAB_00759883:
00759883  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00759888  68 FD 02 00 00            PUSH 0x2fd
0075988D  68 C8 2D 7F 00            PUSH 0x7f2dc8
00759892  50                        PUSH EAX
00759893  6A 14                     PUSH 0x14
00759895  E8 A6 C5 F4 FF            CALL 0x006a5e40
LAB_0075989a:
0075989A  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0075989D  3B F8                     CMP EDI,EAX
0075989F  72 09                     JC 0x007598aa
007598A1  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
007598A4  03 C8                     ADD ECX,EAX
007598A6  3B D9                     CMP EBX,ECX
007598A8  76 5D                     JBE 0x00759907
LAB_007598aa:
007598AA  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
007598AD  85 C0                     TEST EAX,EAX
007598AF  75 18                     JNZ 0x007598c9
007598B1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
007598B7  68 03 03 00 00            PUSH 0x303
007598BC  68 C8 2D 7F 00            PUSH 0x7f2dc8
007598C1  52                        PUSH EDX
007598C2  6A 44                     PUSH 0x44
007598C4  E8 77 C5 F4 FF            CALL 0x006a5e40
LAB_007598c9:
007598C9  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
007598CC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007598CF  85 C0                     TEST EAX,EAX
007598D1  74 10                     JZ 0x007598e3
007598D3  6A 01                     PUSH 0x1
007598D5  56                        PUSH ESI
007598D6  57                        PUSH EDI
007598D7  E8 F4 00 00 00            CALL 0x007599d0
007598DC  C7 46 24 00 00 00 00      MOV dword ptr [ESI + 0x24],0x0
LAB_007598e3:
007598E3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007598E6  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
007598E9  3B C1                     CMP EAX,ECX
007598EB  77 0B                     JA 0x007598f8
007598ED  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
007598F0  8B C3                     MOV EAX,EBX
007598F2  2B C1                     SUB EAX,ECX
007598F4  79 02                     JNS 0x007598f8
007598F6  33 C0                     XOR EAX,EAX
LAB_007598f8:
007598F8  6A 00                     PUSH 0x0
007598FA  56                        PUSH ESI
007598FB  57                        PUSH EDI
007598FC  89 46 18                  MOV dword ptr [ESI + 0x18],EAX
007598FF  E8 CC 00 00 00            CALL 0x007599d0
00759904  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_00759907:
00759907  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0075990A  3B C3                     CMP EAX,EBX
0075990C  73 5F                     JNC 0x0075996d
0075990E  3B C7                     CMP EAX,EDI
00759910  73 20                     JNC 0x00759932
00759912  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00759915  85 C0                     TEST EAX,EAX
00759917  74 1B                     JZ 0x00759934
00759919  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0075991E  68 28 03 00 00            PUSH 0x328
00759923  68 C8 2D 7F 00            PUSH 0x7f2dc8
00759928  50                        PUSH EAX
00759929  6A 14                     PUSH 0x14
0075992B  E8 10 C5 F4 FF            CALL 0x006a5e40
00759930  EB 02                     JMP 0x00759934
LAB_00759932:
00759932  8B F8                     MOV EDI,EAX
LAB_00759934:
00759934  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00759937  85 C0                     TEST EAX,EAX
00759939  74 03                     JZ 0x0075993e
0075993B  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
LAB_0075993e:
0075993E  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
00759941  85 C9                     TEST ECX,ECX
00759943  74 31                     JZ 0x00759976
00759945  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00759948  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0075994B  2B F8                     SUB EDI,EAX
0075994D  2B D8                     SUB EBX,EAX
0075994F  3B FB                     CMP EDI,EBX
00759951  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00759954  73 14                     JNC 0x0075996a
LAB_00759956:
00759956  8B 06                     MOV EAX,dword ptr [ESI]
00759958  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0075995B  52                        PUSH EDX
0075995C  8B 0C B8                  MOV ECX,dword ptr [EAX + EDI*0x4]
0075995F  51                        PUSH ECX
00759960  E8 CB 05 00 00            CALL 0x00759f30
00759965  47                        INC EDI
00759966  3B FB                     CMP EDI,EBX
00759968  72 EC                     JC 0x00759956
LAB_0075996a:
0075996A  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_0075996d:
0075996D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00759970  85 C0                     TEST EAX,EAX
00759972  74 3C                     JZ 0x007599b0
00759974  EB 33                     JMP 0x007599a9
LAB_00759976:
00759976  85 C0                     TEST EAX,EAX
00759978  75 2C                     JNZ 0x007599a6
0075997A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00759980  68 39 03 00 00            PUSH 0x339
00759985  68 C8 2D 7F 00            PUSH 0x7f2dc8
0075998A  52                        PUSH EDX
0075998B  6A 14                     PUSH 0x14
0075998D  E8 AE C4 F4 FF            CALL 0x006a5e40
00759992  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00759995  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00759998  2B F8                     SUB EDI,EAX
0075999A  8B 06                     MOV EAX,dword ptr [ESI]
0075999C  8D 04 B8                  LEA EAX,[EAX + EDI*0x4]
0075999F  5F                        POP EDI
007599A0  5E                        POP ESI
007599A1  5B                        POP EBX
007599A2  5D                        POP EBP
007599A3  C2 14 00                  RET 0x14
LAB_007599a6:
007599A6  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_007599a9:
007599A9  C7 46 24 01 00 00 00      MOV dword ptr [ESI + 0x24],0x1
LAB_007599b0:
007599B0  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
007599B3  2B F8                     SUB EDI,EAX
007599B5  8B 06                     MOV EAX,dword ptr [ESI]
007599B7  8D 04 B8                  LEA EAX,[EAX + EDI*0x4]
007599BA  5F                        POP EDI
007599BB  5E                        POP ESI
007599BC  5B                        POP EBX
007599BD  5D                        POP EBP
007599BE  C2 14 00                  RET 0x14
