FUN_005104b0:
005104B0  55                        PUSH EBP
005104B1  8B EC                     MOV EBP,ESP
005104B3  83 EC 50                  SUB ESP,0x50
005104B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005104BB  53                        PUSH EBX
005104BC  56                        PUSH ESI
005104BD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005104C0  57                        PUSH EDI
005104C1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005104C4  8D 4D B0                  LEA ECX,[EBP + -0x50]
005104C7  6A 00                     PUSH 0x0
005104C9  52                        PUSH EDX
005104CA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005104CD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005104D3  E8 18 D3 21 00            CALL 0x0072d7f0
005104D8  8B F0                     MOV ESI,EAX
005104DA  83 C4 08                  ADD ESP,0x8
005104DD  85 F6                     TEST ESI,ESI
005104DF  75 77                     JNZ 0x00510558
005104E1  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
005104E4  8D B3 AB 01 00 00         LEA ESI,[EBX + 0x1ab]
005104EA  8B C6                     MOV EAX,ESI
005104EC  56                        PUSH ESI
005104ED  6A 11                     PUSH 0x11
005104EF  8B 08                     MOV ECX,dword ptr [EAX]
005104F1  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005104F4  8B CE                     MOV ECX,ESI
005104F6  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005104F9  33 C0                     XOR EAX,EAX
005104FB  89 01                     MOV dword ptr [ECX],EAX
005104FD  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00510500  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00510503  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00510509  E8 AE 30 EF FF            CALL 0x004035bc
0051050E  B9 02 00 00 00            MOV ECX,0x2
00510513  8D 7D F4                  LEA EDI,[EBP + -0xc]
00510516  33 D2                     XOR EDX,EDX
00510518  F3 A7                     CMPSD.REPE ES:EDI,ESI
0051051A  74 2C                     JZ 0x00510548
0051051C  C7 43 28 05 00 00 00      MOV dword ptr [EBX + 0x28],0x5
00510523  8D B3 B3 01 00 00         LEA ESI,[EBX + 0x1b3]
00510529  BF 08 00 00 00            MOV EDI,0x8
LAB_0051052e:
0051052E  8B 06                     MOV EAX,dword ptr [ESI]
00510530  85 C0                     TEST EAX,EAX
00510532  74 0E                     JZ 0x00510542
00510534  8D 4B 18                  LEA ECX,[EBX + 0x18]
00510537  51                        PUSH ECX
00510538  50                        PUSH EAX
00510539  6A 02                     PUSH 0x2
0051053B  8B CB                     MOV ECX,EBX
0051053D  E8 3E 5B 1D 00            CALL 0x006e6080
LAB_00510542:
00510542  83 C6 04                  ADD ESI,0x4
00510545  4F                        DEC EDI
00510546  75 E6                     JNZ 0x0051052e
LAB_00510548:
00510548  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0051054B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00510551  5F                        POP EDI
00510552  5E                        POP ESI
00510553  5B                        POP EBX
00510554  8B E5                     MOV ESP,EBP
00510556  5D                        POP EBP
00510557  C3                        RET
LAB_00510558:
00510558  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0051055B  68 AC 2A 7C 00            PUSH 0x7c2aac
00510560  68 CC 4C 7A 00            PUSH 0x7a4ccc
00510565  56                        PUSH ESI
00510566  6A 00                     PUSH 0x0
00510568  6A 70                     PUSH 0x70
0051056A  68 58 29 7C 00            PUSH 0x7c2958
0051056F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00510574  E8 57 CF 19 00            CALL 0x006ad4d0
00510579  83 C4 18                  ADD ESP,0x18
0051057C  85 C0                     TEST EAX,EAX
0051057E  74 01                     JZ 0x00510581
00510580  CC                        INT3
LAB_00510581:
00510581  6A 70                     PUSH 0x70
00510583  68 58 29 7C 00            PUSH 0x7c2958
00510588  6A 00                     PUSH 0x0
0051058A  56                        PUSH ESI
0051058B  E8 B0 58 19 00            CALL 0x006a5e40
00510590  5F                        POP EDI
00510591  5E                        POP ESI
00510592  5B                        POP EBX
00510593  8B E5                     MOV ESP,EBP
00510595  5D                        POP EBP
00510596  C3                        RET
