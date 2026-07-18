FUN_00757360:
00757360  55                        PUSH EBP
00757361  8B EC                     MOV EBP,ESP
00757363  83 EC 48                  SUB ESP,0x48
00757366  56                        PUSH ESI
00757367  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0075736A  57                        PUSH EDI
0075736B  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00757372  8A 4E 36                  MOV CL,byte ptr [ESI + 0x36]
00757375  8D 46 36                  LEA EAX,[ESI + 0x36]
00757378  84 C9                     TEST CL,CL
0075737A  75 1A                     JNZ 0x00757396
0075737C  0F BF 4E 28               MOVSX ECX,word ptr [ESI + 0x28]
00757380  51                        PUSH ECX
00757381  68 E8 2C 7F 00            PUSH 0x7f2ce8
00757386  50                        PUSH EAX
00757387  E8 B4 98 FD FF            CALL 0x00730c40
0075738C  83 C4 0C                  ADD ESP,0xc
0075738F  C7 46 14 01 00 00 00      MOV dword ptr [ESI + 0x14],0x1
LAB_00757396:
00757396  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0075739C  8D 4D BC                  LEA ECX,[EBP + -0x44]
0075739F  8D 45 B8                  LEA EAX,[EBP + -0x48]
007573A2  6A 00                     PUSH 0x0
007573A4  51                        PUSH ECX
007573A5  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
007573A8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
007573AD  E8 3E 64 FD FF            CALL 0x0072d7f0
007573B2  83 C4 08                  ADD ESP,0x8
007573B5  85 C0                     TEST EAX,EAX
007573B7  75 59                     JNZ 0x00757412
007573B9  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007573BC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007573BF  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
007573C2  85 C0                     TEST EAX,EAX
007573C4  74 1F                     JZ 0x007573e5
007573C6  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
007573C9  6A 20                     PUSH 0x20
007573CB  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
007573CE  83 CA 10                  OR EDX,0x10
007573D1  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
007573D4  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
007573D7  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
007573DA  8D 56 20                  LEA EDX,[ESI + 0x20]
007573DD  52                        PUSH EDX
007573DE  50                        PUSH EAX
007573DF  51                        PUSH ECX
007573E0  E8 7B D4 F7 FF            CALL 0x006d4860
LAB_007573e5:
007573E5  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
007573E8  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
007573EB  0F BF 50 16               MOVSX EDX,word ptr [EAX + 0x16]
007573EF  52                        PUSH EDX
007573F0  51                        PUSH ECX
007573F1  50                        PUSH EAX
007573F2  E8 59 D8 F7 FF            CALL 0x006d4c50
007573F7  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
007573FA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007573FD  C7 46 14 00 00 00 00      MOV dword ptr [ESI + 0x14],0x0
00757404  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0075740A  5F                        POP EDI
0075740B  5E                        POP ESI
0075740C  8B E5                     MOV ESP,EBP
0075740E  5D                        POP EBP
0075740F  C2 08 00                  RET 0x8
LAB_00757412:
00757412  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00757415  5F                        POP EDI
00757416  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0075741C  5E                        POP ESI
0075741D  8B E5                     MOV ESP,EBP
0075741F  5D                        POP EBP
00757420  C2 08 00                  RET 0x8
