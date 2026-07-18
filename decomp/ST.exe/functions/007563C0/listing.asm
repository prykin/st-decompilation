FUN_007563c0:
007563C0  55                        PUSH EBP
007563C1  8B EC                     MOV EBP,ESP
007563C3  56                        PUSH ESI
007563C4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007563C7  57                        PUSH EDI
007563C8  33 FF                     XOR EDI,EDI
007563CA  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
007563CD  05 38 FF FF FF            ADD EAX,0xffffff38
007563D2  83 F8 0A                  CMP EAX,0xa
007563D5  77 66                     JA 0x0075643d
007563D7  33 C9                     XOR ECX,ECX
007563D9  8A 88 70 64 75 00         MOV CL,byte ptr [EAX + 0x756470]
switchD_007563df::switchD:
007563DF  FF 24 8D 5C 64 75 00      JMP dword ptr [ECX*0x4 + 0x75645c]
switchD_007563df::caseD_c8:
007563E6  8B 96 A2 01 00 00         MOV EDX,dword ptr [ESI + 0x1a2]
007563EC  56                        PUSH ESI
007563ED  FF 52 04                  CALL dword ptr [EDX + 0x4]
007563F0  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
007563F3  56                        PUSH ESI
007563F4  FF 50 08                  CALL dword ptr [EAX + 0x8]
007563F7  C7 46 0C C9 00 00 00      MOV dword ptr [ESI + 0xc],0xc9
switchD_007563df::caseD_c9:
007563FE  8B 8E A2 01 00 00         MOV ECX,dword ptr [ESI + 0x1a2]
00756404  56                        PUSH ESI
00756405  FF 11                     CALL dword ptr [ECX]
00756407  8B F8                     MOV EDI,EAX
00756409  83 FF 01                  CMP EDI,0x1
0075640C  75 46                     JNZ 0x00756454
0075640E  56                        PUSH ESI
0075640F  E8 6C 00 00 00            CALL 0x00756480
00756414  8B C7                     MOV EAX,EDI
00756416  C7 46 0C CA 00 00 00      MOV dword ptr [ESI + 0xc],0xca
0075641D  5F                        POP EDI
0075641E  5E                        POP ESI
0075641F  5D                        POP EBP
00756420  C2 04 00                  RET 0x4
switchD_007563df::caseD_ca:
00756423  5F                        POP EDI
00756424  B8 01 00 00 00            MOV EAX,0x1
00756429  5E                        POP ESI
0075642A  5D                        POP EBP
0075642B  C2 04 00                  RET 0x4
switchD_007563df::caseD_cb:
0075642E  8B 96 A2 01 00 00         MOV EDX,dword ptr [ESI + 0x1a2]
00756434  56                        PUSH ESI
00756435  FF 12                     CALL dword ptr [EDX]
00756437  5F                        POP EDI
00756438  5E                        POP ESI
00756439  5D                        POP EBP
0075643A  C2 04 00                  RET 0x4
switchD_007563df::caseD_d1:
0075643D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00756442  68 4E 01 00 00            PUSH 0x14e
00756447  68 38 2D 7F 00            PUSH 0x7f2d38
0075644C  50                        PUSH EAX
0075644D  6A 12                     PUSH 0x12
0075644F  E8 EC F9 F4 FF            CALL 0x006a5e40
LAB_00756454:
00756454  8B C7                     MOV EAX,EDI
00756456  5F                        POP EDI
00756457  5E                        POP ESI
00756458  5D                        POP EBP
00756459  C2 04 00                  RET 0x4
