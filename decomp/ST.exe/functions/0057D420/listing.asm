FUN_0057d420:
0057D420  55                        PUSH EBP
0057D421  8B EC                     MOV EBP,ESP
0057D423  83 EC 0C                  SUB ESP,0xc
0057D426  53                        PUSH EBX
0057D427  56                        PUSH ESI
0057D428  8B F1                     MOV ESI,ECX
0057D42A  BB 06 00 00 00            MOV EBX,0x6
0057D42F  8B 86 67 02 00 00         MOV EAX,dword ptr [ESI + 0x267]
0057D435  2D E7 00 00 00            SUB EAX,0xe7
0057D43A  74 0D                     JZ 0x0057d449
0057D43C  48                        DEC EAX
0057D43D  74 0A                     JZ 0x0057d449
0057D43F  48                        DEC EAX
0057D440  75 0C                     JNZ 0x0057d44e
0057D442  BB 04 00 00 00            MOV EBX,0x4
0057D447  EB 05                     JMP 0x0057d44e
LAB_0057d449:
0057D449  BB 03 00 00 00            MOV EBX,0x3
LAB_0057d44e:
0057D44E  0F BF 86 37 02 00 00      MOVSX EAX,word ptr [ESI + 0x237]
0057D455  0F BF 8E 35 02 00 00      MOVSX ECX,word ptr [ESI + 0x235]
0057D45C  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0057D460  57                        PUSH EDI
0057D461  50                        PUSH EAX
0057D462  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0057D466  51                        PUSH ECX
0057D467  52                        PUSH EDX
0057D468  50                        PUSH EAX
0057D469  E8 A2 E4 15 00            CALL 0x006db910
0057D46E  6A 08                     PUSH 0x8
0057D470  50                        PUSH EAX
0057D471  E8 1A E5 15 00            CALL 0x006db990
0057D476  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0057D479  8B F8                     MOV EDI,EAX
0057D47B  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0057D481  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0057D487  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057D48A  C1 E8 10                  SHR EAX,0x10
0057D48D  50                        PUSH EAX
0057D48E  8D 45 FC                  LEA EAX,[EBP + -0x4]
0057D491  50                        PUSH EAX
0057D492  8D 45 F8                  LEA EAX,[EBP + -0x8]
0057D495  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0057D499  0F BF 56 47               MOVSX EDX,word ptr [ESI + 0x47]
0057D49D  50                        PUSH EAX
0057D49E  8D 45 F4                  LEA EAX,[EBP + -0xc]
0057D4A1  50                        PUSH EAX
0057D4A2  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0057D4A6  50                        PUSH EAX
0057D4A7  51                        PUSH ECX
0057D4A8  0F BF 86 37 02 00 00      MOVSX EAX,word ptr [ESI + 0x237]
0057D4AF  52                        PUSH EDX
0057D4B0  50                        PUSH EAX
0057D4B1  0F BF 86 35 02 00 00      MOVSX EAX,word ptr [ESI + 0x235]
0057D4B8  50                        PUSH EAX
0057D4B9  51                        PUSH ECX
0057D4BA  52                        PUSH EDX
0057D4BB  E8 D0 FA 12 00            CALL 0x006acf90
0057D4C0  0F BF 8E 39 02 00 00      MOVSX ECX,word ptr [ESI + 0x239]
0057D4C7  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
0057D4CB  2B CA                     SUB ECX,EDX
0057D4CD  50                        PUSH EAX
0057D4CE  51                        PUSH ECX
0057D4CF  57                        PUSH EDI
0057D4D0  E8 76 4F E8 FF            CALL 0x0040244b
0057D4D5  83 C4 28                  ADD ESP,0x28
0057D4D8  8B CE                     MOV ECX,ESI
0057D4DA  85 C0                     TEST EAX,EAX
0057D4DC  5F                        POP EDI
0057D4DD  53                        PUSH EBX
0057D4DE  74 54                     JZ 0x0057d534
0057D4E0  E8 AB 87 E8 FF            CALL 0x00405c90
0057D4E5  FE CB                     DEC BL
0057D4E7  8B CE                     MOV ECX,ESI
0057D4E9  53                        PUSH EBX
0057D4EA  E8 16 7C E8 FF            CALL 0x00405105
0057D4EF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0057D4F2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0057D4F5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0057D4F8  50                        PUSH EAX
0057D4F9  51                        PUSH ECX
0057D4FA  52                        PUSH EDX
0057D4FB  8B CE                     MOV ECX,ESI
0057D4FD  E8 16 6E E8 FF            CALL 0x00404318
0057D502  85 C0                     TEST EAX,EAX
0057D504  74 23                     JZ 0x0057d529
0057D506  66 8B 86 39 02 00 00      MOV AX,word ptr [ESI + 0x239]
0057D50D  66 8B 8E 37 02 00 00      MOV CX,word ptr [ESI + 0x237]
0057D514  66 8B 96 35 02 00 00      MOV DX,word ptr [ESI + 0x235]
0057D51B  50                        PUSH EAX
0057D51C  51                        PUSH ECX
0057D51D  52                        PUSH EDX
0057D51E  8B CE                     MOV ECX,ESI
0057D520  E8 F3 6D E8 FF            CALL 0x00404318
0057D525  85 C0                     TEST EAX,EAX
0057D527  75 52                     JNZ 0x0057d57b
LAB_0057d529:
0057D529  5E                        POP ESI
0057D52A  B8 01 00 00 00            MOV EAX,0x1
0057D52F  5B                        POP EBX
0057D530  8B E5                     MOV ESP,EBP
0057D532  5D                        POP EBP
0057D533  C3                        RET
LAB_0057d534:
0057D534  E8 57 87 E8 FF            CALL 0x00405c90
0057D539  FE CB                     DEC BL
0057D53B  8B CE                     MOV ECX,ESI
0057D53D  53                        PUSH EBX
0057D53E  E8 C2 7B E8 FF            CALL 0x00405105
0057D543  66 8B 86 39 02 00 00      MOV AX,word ptr [ESI + 0x239]
0057D54A  66 8B 8E 37 02 00 00      MOV CX,word ptr [ESI + 0x237]
0057D551  66 8B 96 35 02 00 00      MOV DX,word ptr [ESI + 0x235]
0057D558  50                        PUSH EAX
0057D559  51                        PUSH ECX
0057D55A  52                        PUSH EDX
0057D55B  8B CE                     MOV ECX,ESI
0057D55D  E8 B6 6D E8 FF            CALL 0x00404318
0057D562  85 C0                     TEST EAX,EAX
0057D564  75 0B                     JNZ 0x0057d571
0057D566  5E                        POP ESI
0057D567  B8 01 00 00 00            MOV EAX,0x1
0057D56C  5B                        POP EBX
0057D56D  8B E5                     MOV ESP,EBP
0057D56F  5D                        POP EBP
0057D570  C3                        RET
LAB_0057d571:
0057D571  C7 86 3F 02 00 00 10 00 00 00  MOV dword ptr [ESI + 0x23f],0x10
LAB_0057d57b:
0057D57B  5E                        POP ESI
0057D57C  33 C0                     XOR EAX,EAX
0057D57E  5B                        POP EBX
0057D57F  8B E5                     MOV ESP,EBP
0057D581  5D                        POP EBP
0057D582  C3                        RET
