FUN_00533470:
00533470  55                        PUSH EBP
00533471  8B EC                     MOV EBP,ESP
00533473  83 EC 50                  SUB ESP,0x50
00533476  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053347B  53                        PUSH EBX
0053347C  56                        PUSH ESI
0053347D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00533480  57                        PUSH EDI
00533481  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00533484  8D 4D B0                  LEA ECX,[EBP + -0x50]
00533487  6A 00                     PUSH 0x0
00533489  52                        PUSH EDX
0053348A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00533491  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00533494  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053349A  E8 51 A3 1F 00            CALL 0x0072d7f0
0053349F  8B F0                     MOV ESI,EAX
005334A1  83 C4 08                  ADD ESP,0x8
005334A4  85 F6                     TEST ESI,ESI
005334A6  0F 85 8E 00 00 00         JNZ 0x0053353a
005334AC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005334AF  33 FF                     XOR EDI,EDI
005334B1  8B 80 E9 01 00 00         MOV EAX,dword ptr [EAX + 0x1e9]
005334B7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005334BA  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005334BD  85 D2                     TEST EDX,EDX
005334BF  76 64                     JBE 0x00533525
005334C1  EB 03                     JMP 0x005334c6
LAB_005334c3:
005334C3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_005334c6:
005334C6  3B FA                     CMP EDI,EDX
005334C8  7D 08                     JGE 0x005334d2
005334CA  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005334CD  8B 04 B9                  MOV EAX,dword ptr [ECX + EDI*0x4]
005334D0  EB 02                     JMP 0x005334d4
LAB_005334d2:
005334D2  33 C0                     XOR EAX,EAX
LAB_005334d4:
005334D4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_005334d7:
005334D7  8A 18                     MOV BL,byte ptr [EAX]
005334D9  8A CB                     MOV CL,BL
005334DB  3A 1E                     CMP BL,byte ptr [ESI]
005334DD  75 1C                     JNZ 0x005334fb
005334DF  84 C9                     TEST CL,CL
005334E1  74 14                     JZ 0x005334f7
005334E3  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
005334E6  8A CB                     MOV CL,BL
005334E8  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
005334EB  75 0E                     JNZ 0x005334fb
005334ED  83 C0 02                  ADD EAX,0x2
005334F0  83 C6 02                  ADD ESI,0x2
005334F3  84 C9                     TEST CL,CL
005334F5  75 E0                     JNZ 0x005334d7
LAB_005334f7:
005334F7  33 C0                     XOR EAX,EAX
005334F9  EB 05                     JMP 0x00533500
LAB_005334fb:
005334FB  1B C0                     SBB EAX,EAX
005334FD  83 D8 FF                  SBB EAX,-0x1
LAB_00533500:
00533500  85 C0                     TEST EAX,EAX
00533502  74 1A                     JZ 0x0053351e
00533504  47                        INC EDI
00533505  3B FA                     CMP EDI,EDX
00533507  72 BA                     JC 0x005334c3
00533509  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0053350C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053350F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00533515  5F                        POP EDI
00533516  5E                        POP ESI
00533517  5B                        POP EBX
00533518  8B E5                     MOV ESP,EBP
0053351A  5D                        POP EBP
0053351B  C2 04 00                  RET 0x4
LAB_0053351e:
0053351E  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
LAB_00533525:
00533525  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00533528  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053352B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00533531  5F                        POP EDI
00533532  5E                        POP ESI
00533533  5B                        POP EBX
00533534  8B E5                     MOV ESP,EBP
00533536  5D                        POP EBP
00533537  C2 04 00                  RET 0x4
LAB_0053353a:
0053353A  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0053353D  68 DC 72 7C 00            PUSH 0x7c72dc
00533542  68 CC 4C 7A 00            PUSH 0x7a4ccc
00533547  56                        PUSH ESI
00533548  6A 00                     PUSH 0x0
0053354A  68 59 04 00 00            PUSH 0x459
0053354F  68 A0 70 7C 00            PUSH 0x7c70a0
00533554  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00533559  E8 72 9F 17 00            CALL 0x006ad4d0
0053355E  83 C4 18                  ADD ESP,0x18
00533561  85 C0                     TEST EAX,EAX
00533563  74 01                     JZ 0x00533566
00533565  CC                        INT3
LAB_00533566:
00533566  68 59 04 00 00            PUSH 0x459
0053356B  68 A0 70 7C 00            PUSH 0x7c70a0
00533570  6A 00                     PUSH 0x0
00533572  56                        PUSH ESI
00533573  E8 C8 28 17 00            CALL 0x006a5e40
00533578  5F                        POP EDI
00533579  5E                        POP ESI
0053357A  33 C0                     XOR EAX,EAX
0053357C  5B                        POP EBX
0053357D  8B E5                     MOV ESP,EBP
0053357F  5D                        POP EBP
00533580  C2 04 00                  RET 0x4
