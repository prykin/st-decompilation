STAllPlayersC::CreateBoat:
004455C0  55                        PUSH EBP
004455C1  8B EC                     MOV EBP,ESP
004455C3  83 EC 54                  SUB ESP,0x54
004455C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004455CB  56                        PUSH ESI
004455CC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004455CF  57                        PUSH EDI
004455D0  8D 55 B0                  LEA EDX,[EBP + -0x50]
004455D3  83 CF FF                  OR EDI,0xffffffff
004455D6  8D 4D AC                  LEA ECX,[EBP + -0x54]
004455D9  6A 00                     PUSH 0x0
004455DB  52                        PUSH EDX
004455DC  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
004455DF  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004455E2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004455E8  E8 03 82 2E 00            CALL 0x0072d7f0
004455ED  8B F0                     MOV ESI,EAX
004455EF  83 C4 08                  ADD ESP,0x8
004455F2  85 F6                     TEST ESI,ESI
004455F4  0F 85 E5 01 00 00         JNZ 0x004457df
004455FA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004455FD  83 7E 04 07               CMP dword ptr [ESI + 0x4],0x7
00445601  76 3F                     JBE 0x00445642
00445603  68 EC 82 7A 00            PUSH 0x7a82ec
00445608  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044560D  6A 00                     PUSH 0x0
0044560F  6A 00                     PUSH 0x0
00445611  68 B5 27 00 00            PUSH 0x27b5
00445616  68 04 60 7A 00            PUSH 0x7a6004
0044561B  E8 B0 7E 26 00            CALL 0x006ad4d0
00445620  83 C4 18                  ADD ESP,0x18
00445623  85 C0                     TEST EAX,EAX
00445625  74 01                     JZ 0x00445628
00445627  CC                        INT3
LAB_00445628:
00445628  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044562D  68 B6 27 00 00            PUSH 0x27b6
00445632  68 04 60 7A 00            PUSH 0x7a6004
00445637  50                        PUSH EAX
00445638  68 02 00 FE AF            PUSH 0xaffe0002
0044563D  E8 FE 07 26 00            CALL 0x006a5e40
LAB_00445642:
00445642  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00445645  83 F8 07                  CMP EAX,0x7
00445648  76 44                     JBE 0x0044568e
0044564A  3B C7                     CMP EAX,EDI
0044564C  74 40                     JZ 0x0044568e
0044564E  68 AC 82 7A 00            PUSH 0x7a82ac
00445653  68 CC 4C 7A 00            PUSH 0x7a4ccc
00445658  6A 00                     PUSH 0x0
0044565A  6A 00                     PUSH 0x0
0044565C  68 C2 27 00 00            PUSH 0x27c2
00445661  68 04 60 7A 00            PUSH 0x7a6004
00445666  E8 65 7E 26 00            CALL 0x006ad4d0
0044566B  83 C4 18                  ADD ESP,0x18
0044566E  85 C0                     TEST EAX,EAX
00445670  74 01                     JZ 0x00445673
00445672  CC                        INT3
LAB_00445673:
00445673  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00445679  68 C3 27 00 00            PUSH 0x27c3
0044567E  68 04 60 7A 00            PUSH 0x7a6004
00445683  51                        PUSH ECX
00445684  68 02 00 FE AF            PUSH 0xaffe0002
00445689  E8 B2 07 26 00            CALL 0x006a5e40
LAB_0044568e:
0044568E  66 8B 46 1C               MOV AX,word ptr [ESI + 0x1c]
00445692  66 85 C0                  TEST AX,AX
00445695  7C 2D                     JL 0x004456c4
00445697  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0044569E  7D 24                     JGE 0x004456c4
004456A0  66 8B 46 1E               MOV AX,word ptr [ESI + 0x1e]
004456A4  66 85 C0                  TEST AX,AX
004456A7  7C 1B                     JL 0x004456c4
004456A9  66 3B 05 42 B2 7F 00      CMP AX,word ptr [0x007fb242]
004456B0  7D 12                     JGE 0x004456c4
004456B2  66 8B 46 20               MOV AX,word ptr [ESI + 0x20]
004456B6  66 85 C0                  TEST AX,AX
004456B9  7C 09                     JL 0x004456c4
004456BB  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004456C2  7C 40                     JL 0x00445704
LAB_004456c4:
004456C4  68 74 82 7A 00            PUSH 0x7a8274
004456C9  68 CC 4C 7A 00            PUSH 0x7a4ccc
004456CE  6A 00                     PUSH 0x0
004456D0  6A 00                     PUSH 0x0
004456D2  68 C8 27 00 00            PUSH 0x27c8
004456D7  68 04 60 7A 00            PUSH 0x7a6004
004456DC  E8 EF 7D 26 00            CALL 0x006ad4d0
004456E1  83 C4 18                  ADD ESP,0x18
004456E4  85 C0                     TEST EAX,EAX
004456E6  74 01                     JZ 0x004456e9
004456E8  CC                        INT3
LAB_004456e9:
004456E9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004456EF  68 C9 27 00 00            PUSH 0x27c9
004456F4  68 04 60 7A 00            PUSH 0x7a6004
004456F9  52                        PUSH EDX
004456FA  68 0B 00 FE AF            PUSH 0xaffe000b
004456FF  E8 3C 07 26 00            CALL 0x006a5e40
LAB_00445704:
00445704  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
00445707  C7 06 14 00 00 00         MOV dword ptr [ESI],0x14
0044570D  3B C7                     CMP EAX,EDI
0044570F  C7 46 08 01 00 00 00      MOV dword ptr [ESI + 0x8],0x1
00445716  C7 46 0C 00 00 00 00      MOV dword ptr [ESI + 0xc],0x0
0044571D  C7 46 10 00 00 00 00      MOV dword ptr [ESI + 0x10],0x0
00445724  75 06                     JNZ 0x0044572c
00445726  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00445729  89 46 14                  MOV dword ptr [ESI + 0x14],EAX
LAB_0044572c:
0044572C  66 8B 4E 24               MOV CX,word ptr [ESI + 0x24]
00445730  8A 56 04                  MOV DL,byte ptr [ESI + 0x4]
00445733  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00445736  51                        PUSH ECX
00445737  52                        PUSH EDX
00445738  8B CF                     MOV ECX,EDI
0044573A  E8 BA 05 FC FF            CALL 0x00405cf9
0044573F  85 C0                     TEST EAX,EAX
00445741  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00445744  75 37                     JNZ 0x0044577d
00445746  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
00445749  8D 45 FC                  LEA EAX,[EBP + -0x4]
0044574C  50                        PUSH EAX
0044574D  6A 00                     PUSH 0x0
0044574F  51                        PUSH ECX
00445750  8B CF                     MOV ECX,EDI
00445752  E8 40 C7 FB FF            CALL 0x00401e97
00445757  66 89 46 24               MOV word ptr [ESI + 0x24],AX
0044575B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044575E  85 C0                     TEST EAX,EAX
00445760  75 1B                     JNZ 0x0044577d
00445762  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00445768  68 D8 27 00 00            PUSH 0x27d8
0044576D  68 04 60 7A 00            PUSH 0x7a6004
00445772  52                        PUSH EDX
00445773  68 04 00 FE AF            PUSH 0xaffe0004
00445778  E8 C3 06 26 00            CALL 0x006a5e40
LAB_0044577d:
0044577D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00445783  6A 00                     PUSH 0x0
00445785  8D 45 F8                  LEA EAX,[EBP + -0x8]
00445788  56                        PUSH ESI
00445789  50                        PUSH EAX
0044578A  6A 00                     PUSH 0x0
0044578C  6A 14                     PUSH 0x14
0044578E  E8 2F C4 FB FF            CALL 0x00401bc2
00445793  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00445796  85 C0                     TEST EAX,EAX
00445798  75 1B                     JNZ 0x004457b5
0044579A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004457A0  68 DB 27 00 00            PUSH 0x27db
004457A5  68 04 60 7A 00            PUSH 0x7a6004
004457AA  51                        PUSH ECX
004457AB  68 04 00 FE AF            PUSH 0xaffe0004
004457B0  E8 8B 06 26 00            CALL 0x006a5e40
LAB_004457b5:
004457B5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004457B8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004457BB  6A 00                     PUSH 0x0
004457BD  66 8B 42 32               MOV AX,word ptr [EDX + 0x32]
004457C1  50                        PUSH EAX
004457C2  E8 47 DC FB FF            CALL 0x0040340e
004457C7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004457CA  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004457CD  66 8B 41 32               MOV AX,word ptr [ECX + 0x32]
004457D1  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004457D7  5F                        POP EDI
004457D8  5E                        POP ESI
004457D9  8B E5                     MOV ESP,EBP
004457DB  5D                        POP EBP
004457DC  C2 04 00                  RET 0x4
LAB_004457df:
004457DF  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004457E2  68 54 82 7A 00            PUSH 0x7a8254
004457E7  68 CC 4C 7A 00            PUSH 0x7a4ccc
004457EC  56                        PUSH ESI
004457ED  6A 00                     PUSH 0x0
004457EF  68 DF 27 00 00            PUSH 0x27df
004457F4  68 04 60 7A 00            PUSH 0x7a6004
004457F9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004457FE  E8 CD 7C 26 00            CALL 0x006ad4d0
00445803  83 C4 18                  ADD ESP,0x18
00445806  85 C0                     TEST EAX,EAX
00445808  74 01                     JZ 0x0044580b
0044580A  CC                        INT3
LAB_0044580b:
0044580B  68 E0 27 00 00            PUSH 0x27e0
00445810  68 04 60 7A 00            PUSH 0x7a6004
00445815  6A 00                     PUSH 0x0
00445817  56                        PUSH ESI
00445818  E8 23 06 26 00            CALL 0x006a5e40
0044581D  66 8B 45 F0               MOV AX,word ptr [EBP + -0x10]
00445821  5F                        POP EDI
00445822  5E                        POP ESI
00445823  8B E5                     MOV ESP,EBP
00445825  5D                        POP EBP
00445826  C2 04 00                  RET 0x4
