FUN_004eb300:
004EB300  55                        PUSH EBP
004EB301  8B EC                     MOV EBP,ESP
004EB303  53                        PUSH EBX
004EB304  56                        PUSH ESI
004EB305  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004EB308  57                        PUSH EDI
004EB309  8B F9                     MOV EDI,ECX
004EB30B  56                        PUSH ESI
004EB30C  E8 A6 96 F1 FF            CALL 0x004049b7
004EB311  3C 03                     CMP AL,0x3
004EB313  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004EB316  0F 84 1A 01 00 00         JZ 0x004eb436
004EB31C  2D DC 00 00 00            SUB EAX,0xdc
004EB321  0F 84 82 00 00 00         JZ 0x004eb3a9
004EB327  48                        DEC EAX
004EB328  74 43                     JZ 0x004eb36d
004EB32A  48                        DEC EAX
004EB32B  0F 85 09 02 00 00         JNZ 0x004eb53a
004EB331  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004EB334  56                        PUSH ESI
004EB335  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
004EB338  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
004EB33B  8B CF                     MOV ECX,EDI
004EB33D  C1 E2 04                  SHL EDX,0x4
004EB340  03 D6                     ADD EDX,ESI
004EB342  8B 04 55 DA 57 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f57da]
004EB349  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004EB34C  E8 33 6F F1 FF            CALL 0x00402284
004EB351  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004EB354  3B C3                     CMP EAX,EBX
004EB356  0F 8C DE 01 00 00         JL 0x004eb53a
004EB35C  53                        PUSH EBX
004EB35D  56                        PUSH ESI
004EB35E  8B CF                     MOV ECX,EDI
004EB360  E8 02 A0 F1 FF            CALL 0x00405367
004EB365  8B C3                     MOV EAX,EBX
004EB367  99                        CDQ
004EB368  F7 7D 0C                  IDIV dword ptr [EBP + 0xc]
004EB36B  EB 5A                     JMP 0x004eb3c7
LAB_004eb36d:
004EB36D  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004EB370  56                        PUSH ESI
004EB371  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004EB374  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004EB377  C1 E0 04                  SHL EAX,0x4
004EB37A  03 C6                     ADD EAX,ESI
004EB37C  8B 0C 45 CA 57 7F 00      MOV ECX,dword ptr [EAX*0x2 + 0x7f57ca]
004EB383  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004EB386  8B CF                     MOV ECX,EDI
004EB388  E8 C7 85 F1 FF            CALL 0x00403954
004EB38D  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004EB390  3B C3                     CMP EAX,EBX
004EB392  0F 8C A2 01 00 00         JL 0x004eb53a
004EB398  53                        PUSH EBX
004EB399  56                        PUSH ESI
004EB39A  8B CF                     MOV ECX,EDI
004EB39C  E8 77 80 F1 FF            CALL 0x00403418
004EB3A1  8B C3                     MOV EAX,EBX
004EB3A3  99                        CDQ
004EB3A4  F7 7D 0C                  IDIV dword ptr [EBP + 0xc]
004EB3A7  EB 1E                     JMP 0x004eb3c7
LAB_004eb3a9:
004EB3A9  56                        PUSH ESI
004EB3AA  8B CF                     MOV ECX,EDI
004EB3AC  E8 2F 63 F1 FF            CALL 0x004016e0
004EB3B1  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004EB3B4  3B C3                     CMP EAX,EBX
004EB3B6  0F 8C 7E 01 00 00         JL 0x004eb53a
004EB3BC  53                        PUSH EBX
004EB3BD  56                        PUSH ESI
004EB3BE  8B CF                     MOV ECX,EDI
004EB3C0  E8 A1 7D F1 FF            CALL 0x00403166
004EB3C5  8B C3                     MOV EAX,EBX
LAB_004eb3c7:
004EB3C7  85 C0                     TEST EAX,EAX
004EB3C9  0F 84 6B 01 00 00         JZ 0x004eb53a
004EB3CF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004EB3D2  81 E9 DC 00 00 00         SUB ECX,0xdc
004EB3D8  74 4E                     JZ 0x004eb428
004EB3DA  49                        DEC ECX
004EB3DB  74 2D                     JZ 0x004eb40a
004EB3DD  49                        DEC ECX
004EB3DE  0F 85 56 01 00 00         JNZ 0x004eb53a
004EB3E4  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004EB3E7  8D 0C D6                  LEA ECX,[ESI + EDX*0x8]
004EB3EA  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
004EB3ED  C1 E2 04                  SHL EDX,0x4
004EB3F0  03 D6                     ADD EDX,ESI
004EB3F2  8B 0C 55 D2 57 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f57d2]
004EB3F9  0F AF C8                  IMUL ECX,EAX
004EB3FC  51                        PUSH ECX
004EB3FD  56                        PUSH ESI
004EB3FE  8B CF                     MOV ECX,EDI
004EB400  E8 E2 A1 F1 FF            CALL 0x004055e7
004EB405  E9 30 01 00 00            JMP 0x004eb53a
LAB_004eb40a:
004EB40A  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004EB40D  8D 0C D6                  LEA ECX,[ESI + EDX*0x8]
004EB410  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
004EB413  C1 E2 04                  SHL EDX,0x4
004EB416  03 D6                     ADD EDX,ESI
004EB418  8B 0C 55 C2 57 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f57c2]
004EB41F  0F AF C8                  IMUL ECX,EAX
004EB422  51                        PUSH ECX
004EB423  E9 0A 01 00 00            JMP 0x004eb532
LAB_004eb428:
004EB428  50                        PUSH EAX
004EB429  56                        PUSH ESI
004EB42A  8B CF                     MOV ECX,EDI
004EB42C  E8 05 8F F1 FF            CALL 0x00404336
004EB431  E9 04 01 00 00            JMP 0x004eb53a
LAB_004eb436:
004EB436  2D DD 00 00 00            SUB EAX,0xdd
004EB43B  74 66                     JZ 0x004eb4a3
004EB43D  83 E8 05                  SUB EAX,0x5
004EB440  74 25                     JZ 0x004eb467
004EB442  48                        DEC EAX
004EB443  0F 85 F1 00 00 00         JNZ 0x004eb53a
004EB449  56                        PUSH ESI
004EB44A  8B CF                     MOV ECX,EDI
004EB44C  E8 56 82 F1 FF            CALL 0x004036a7
004EB451  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004EB454  3B C3                     CMP EAX,EBX
004EB456  0F 8C DE 00 00 00         JL 0x004eb53a
004EB45C  53                        PUSH EBX
004EB45D  56                        PUSH ESI
004EB45E  8B CF                     MOV ECX,EDI
004EB460  E8 94 8F F1 FF            CALL 0x004043f9
004EB465  EB 6D                     JMP 0x004eb4d4
LAB_004eb467:
004EB467  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004EB46A  56                        PUSH ESI
004EB46B  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004EB46E  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
004EB471  C1 E1 04                  SHL ECX,0x4
004EB474  03 CE                     ADD ECX,ESI
004EB476  8B 14 4D DA 57 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f57da]
004EB47D  8B CF                     MOV ECX,EDI
004EB47F  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
004EB482  E8 FD 6D F1 FF            CALL 0x00402284
004EB487  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004EB48A  3B C3                     CMP EAX,EBX
004EB48C  0F 8C A8 00 00 00         JL 0x004eb53a
004EB492  53                        PUSH EBX
004EB493  56                        PUSH ESI
004EB494  8B CF                     MOV ECX,EDI
004EB496  E8 79 83 F1 FF            CALL 0x00403814
004EB49B  8B C3                     MOV EAX,EBX
004EB49D  99                        CDQ
004EB49E  F7 7D 0C                  IDIV dword ptr [EBP + 0xc]
004EB4A1  EB 33                     JMP 0x004eb4d6
LAB_004eb4a3:
004EB4A3  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004EB4A6  56                        PUSH ESI
004EB4A7  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
004EB4AA  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
004EB4AD  8B CF                     MOV ECX,EDI
004EB4AF  C1 E2 04                  SHL EDX,0x4
004EB4B2  03 D6                     ADD EDX,ESI
004EB4B4  8B 1C 55 CA 57 7F 00      MOV EBX,dword ptr [EDX*0x2 + 0x7f57ca]
004EB4BB  E8 94 84 F1 FF            CALL 0x00403954
004EB4C0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004EB4C3  3B C1                     CMP EAX,ECX
004EB4C5  7C 73                     JL 0x004eb53a
004EB4C7  51                        PUSH ECX
004EB4C8  56                        PUSH ESI
004EB4C9  8B CF                     MOV ECX,EDI
004EB4CB  E8 48 7F F1 FF            CALL 0x00403418
004EB4D0  0F AF 5D 14               IMUL EBX,dword ptr [EBP + 0x14]
LAB_004eb4d4:
004EB4D4  8B C3                     MOV EAX,EBX
LAB_004eb4d6:
004EB4D6  85 C0                     TEST EAX,EAX
004EB4D8  74 60                     JZ 0x004eb53a
004EB4DA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004EB4DD  81 E9 DD 00 00 00         SUB ECX,0xdd
004EB4E3  74 36                     JZ 0x004eb51b
004EB4E5  83 E9 05                  SUB ECX,0x5
004EB4E8  74 0E                     JZ 0x004eb4f8
004EB4EA  49                        DEC ECX
004EB4EB  75 4D                     JNZ 0x004eb53a
004EB4ED  50                        PUSH EAX
004EB4EE  56                        PUSH ESI
004EB4EF  8B CF                     MOV ECX,EDI
004EB4F1  E8 3C 7E F1 FF            CALL 0x00403332
004EB4F6  EB 42                     JMP 0x004eb53a
LAB_004eb4f8:
004EB4F8  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004EB4FB  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004EB4FE  8D 0C 56                  LEA ECX,[ESI + EDX*0x2]
004EB501  C1 E1 04                  SHL ECX,0x4
004EB504  03 CE                     ADD ECX,ESI
004EB506  8B 14 4D D2 57 7F 00      MOV EDX,dword ptr [ECX*0x2 + 0x7f57d2]
004EB50D  8B CF                     MOV ECX,EDI
004EB50F  0F AF D0                  IMUL EDX,EAX
004EB512  52                        PUSH EDX
004EB513  56                        PUSH ESI
004EB514  E8 52 A9 F1 FF            CALL 0x00405e6b
004EB519  EB 1F                     JMP 0x004eb53a
LAB_004eb51b:
004EB51B  8D 0C B6                  LEA ECX,[ESI + ESI*0x4]
004EB51E  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
004EB521  8D 0C 56                  LEA ECX,[ESI + EDX*0x2]
004EB524  C1 E1 04                  SHL ECX,0x4
004EB527  03 CE                     ADD ECX,ESI
004EB529  99                        CDQ
004EB52A  F7 3C 4D C2 57 7F 00      IDIV dword ptr [ECX*0x2 + 0x7f57c2]
004EB531  50                        PUSH EAX
LAB_004eb532:
004EB532  56                        PUSH ESI
004EB533  8B CF                     MOV ECX,EDI
004EB535  E8 D8 8E F1 FF            CALL 0x00404412
LAB_004eb53a:
004EB53A  56                        PUSH ESI
004EB53B  8B CF                     MOV ECX,EDI
004EB53D  E8 B4 73 F1 FF            CALL 0x004028f6
004EB542  33 D2                     XOR EDX,EDX
004EB544  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
004EB54A  3B F2                     CMP ESI,EDX
004EB54C  75 08                     JNZ 0x004eb556
004EB54E  56                        PUSH ESI
004EB54F  8B CF                     MOV ECX,EDI
004EB551  E8 37 96 F1 FF            CALL 0x00404b8d
LAB_004eb556:
004EB556  5F                        POP EDI
004EB557  5E                        POP ESI
004EB558  33 C0                     XOR EAX,EAX
004EB55A  5B                        POP EBX
004EB55B  5D                        POP EBP
004EB55C  C2 10 00                  RET 0x10
