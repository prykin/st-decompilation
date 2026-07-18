FUN_005145e0:
005145E0  55                        PUSH EBP
005145E1  8B EC                     MOV EBP,ESP
005145E3  83 EC 48                  SUB ESP,0x48
005145E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005145EB  56                        PUSH ESI
005145EC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005145EF  57                        PUSH EDI
005145F0  8D 55 BC                  LEA EDX,[EBP + -0x44]
005145F3  8D 4D B8                  LEA ECX,[EBP + -0x48]
005145F6  6A 00                     PUSH 0x0
005145F8  52                        PUSH EDX
005145F9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005145FC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00514602  E8 E9 91 21 00            CALL 0x0072d7f0
00514607  8B F0                     MOV ESI,EAX
00514609  83 C4 08                  ADD ESP,0x8
0051460C  85 F6                     TEST ESI,ESI
0051460E  0F 85 78 01 00 00         JNZ 0x0051478c
00514614  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00514617  8B 81 CB 01 00 00         MOV EAX,dword ptr [ECX + 0x1cb]
0051461D  8B 91 CF 01 00 00         MOV EDX,dword ptr [ECX + 0x1cf]
00514623  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
00514626  4E                        DEC ESI
00514627  3B D6                     CMP EDX,ESI
00514629  0F 8D 4F 01 00 00         JGE 0x0051477e
0051462F  42                        INC EDX
00514630  89 91 CF 01 00 00         MOV dword ptr [ECX + 0x1cf],EDX
00514636  8B 70 0C                  MOV ESI,dword ptr [EAX + 0xc]
00514639  3B D6                     CMP EDX,ESI
0051463B  73 0B                     JNC 0x00514648
0051463D  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00514640  0F AF F2                  IMUL ESI,EDX
00514643  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
00514646  EB 02                     JMP 0x0051464a
LAB_00514648:
00514648  33 F6                     XOR ESI,ESI
LAB_0051464a:
0051464A  85 F6                     TEST ESI,ESI
0051464C  0F 84 2C 01 00 00         JZ 0x0051477e
00514652  33 D2                     XOR EDX,EDX
00514654  C6 81 A1 01 00 00 00      MOV byte ptr [ECX + 0x1a1],0x0
0051465B  C7 81 A7 01 00 00 00 00 00 00  MOV dword ptr [ECX + 0x1a7],0x0
00514665  C7 81 A3 01 00 00 00 00 00 00  MOV dword ptr [ECX + 0x1a3],0x0
0051466F  8A 16                     MOV DL,byte ptr [ESI]
00514671  8B 7E 05                  MOV EDI,dword ptr [ESI + 0x5]
00514674  8B 46 01                  MOV EAX,dword ptr [ESI + 0x1]
00514677  83 FA 0C                  CMP EDX,0xc
0051467A  0F 87 FE 00 00 00         JA 0x0051477e
switchD_00514680::switchD:
00514680  FF 24 95 D4 47 51 00      JMP dword ptr [EDX*0x4 + 0x5147d4]
switchD_00514680::caseD_0:
00514687  E8 3C E3 EE FF            CALL 0x004029c8
0051468C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051468F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514694  5F                        POP EDI
00514695  5E                        POP ESI
00514696  8B E5                     MOV ESP,EBP
00514698  5D                        POP EBP
00514699  C3                        RET
switchD_00514680::caseD_a:
0051469A  E8 64 11 EF FF            CALL 0x00405803
0051469F  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005146A2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005146A7  5F                        POP EDI
005146A8  5E                        POP ESI
005146A9  8B E5                     MOV ESP,EBP
005146AB  5D                        POP EBP
005146AC  C3                        RET
switchD_00514680::caseD_7:
005146AD  E8 4C CB EE FF            CALL 0x004011fe
005146B2  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005146B5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005146BA  5F                        POP EDI
005146BB  5E                        POP ESI
005146BC  8B E5                     MOV ESP,EBP
005146BE  5D                        POP EBP
005146BF  C3                        RET
switchD_00514680::caseD_1:
005146C0  6A 00                     PUSH 0x0
005146C2  57                        PUSH EDI
005146C3  50                        PUSH EAX
005146C4  E8 BC 07 EF FF            CALL 0x00404e85
005146C9  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005146CC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005146D1  5F                        POP EDI
005146D2  5E                        POP ESI
005146D3  8B E5                     MOV ESP,EBP
005146D5  5D                        POP EBP
005146D6  C3                        RET
switchD_00514680::caseD_6:
005146D7  6A 00                     PUSH 0x0
005146D9  50                        PUSH EAX
005146DA  E8 82 17 EF FF            CALL 0x00405e61
005146DF  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005146E2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005146E7  5F                        POP EDI
005146E8  5E                        POP ESI
005146E9  8B E5                     MOV ESP,EBP
005146EB  5D                        POP EBP
005146EC  C3                        RET
switchD_00514680::caseD_5:
005146ED  6A 00                     PUSH 0x0
005146EF  57                        PUSH EDI
005146F0  50                        PUSH EAX
005146F1  E8 3D E1 EE FF            CALL 0x00402833
005146F6  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005146F9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005146FE  5F                        POP EDI
005146FF  5E                        POP ESI
00514700  8B E5                     MOV ESP,EBP
00514702  5D                        POP EBP
00514703  C3                        RET
switchD_00514680::caseD_3:
00514704  6A 00                     PUSH 0x0
00514706  50                        PUSH EAX
00514707  E8 6C F1 EE FF            CALL 0x00403878
0051470C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051470F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514714  5F                        POP EDI
00514715  5E                        POP ESI
00514716  8B E5                     MOV ESP,EBP
00514718  5D                        POP EBP
00514719  C3                        RET
switchD_00514680::caseD_2:
0051471A  6A 00                     PUSH 0x0
0051471C  57                        PUSH EDI
0051471D  50                        PUSH EAX
0051471E  E8 24 F0 EE FF            CALL 0x00403747
00514723  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00514726  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051472B  5F                        POP EDI
0051472C  5E                        POP ESI
0051472D  8B E5                     MOV ESP,EBP
0051472F  5D                        POP EBP
00514730  C3                        RET
switchD_00514680::caseD_4:
00514731  6A 00                     PUSH 0x0
00514733  57                        PUSH EDI
00514734  50                        PUSH EAX
00514735  E8 A6 10 EF FF            CALL 0x004057e0
0051473A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051473D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514742  5F                        POP EDI
00514743  5E                        POP ESI
00514744  8B E5                     MOV ESP,EBP
00514746  5D                        POP EBP
00514747  C3                        RET
switchD_00514680::caseD_b:
00514748  6A 00                     PUSH 0x0
0051474A  57                        PUSH EDI
0051474B  50                        PUSH EAX
0051474C  E8 5B E5 EE FF            CALL 0x00402cac
00514751  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00514754  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514759  5F                        POP EDI
0051475A  5E                        POP ESI
0051475B  8B E5                     MOV ESP,EBP
0051475D  5D                        POP EBP
0051475E  C3                        RET
switchD_00514680::caseD_c:
0051475F  6A 00                     PUSH 0x0
00514761  50                        PUSH EAX
00514762  E8 59 F4 EE FF            CALL 0x00403bc0
00514767  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0051476A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051476F  5F                        POP EDI
00514770  5E                        POP ESI
00514771  8B E5                     MOV ESP,EBP
00514773  5D                        POP EBP
00514774  C3                        RET
switchD_00514680::caseD_8:
00514775  6A 00                     PUSH 0x0
00514777  57                        PUSH EDI
00514778  50                        PUSH EAX
00514779  E8 3A D9 EE FF            CALL 0x004020b8
switchD_00514680::caseD_9:
0051477E  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00514781  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00514786  5F                        POP EDI
00514787  5E                        POP ESI
00514788  8B E5                     MOV ESP,EBP
0051478A  5D                        POP EBP
0051478B  C3                        RET
LAB_0051478c:
0051478C  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0051478F  68 08 3B 7C 00            PUSH 0x7c3b08
00514794  68 CC 4C 7A 00            PUSH 0x7a4ccc
00514799  56                        PUSH ESI
0051479A  6A 00                     PUSH 0x0
0051479C  68 27 03 00 00            PUSH 0x327
005147A1  68 3C 38 7C 00            PUSH 0x7c383c
005147A6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005147AC  E8 1F 8D 19 00            CALL 0x006ad4d0
005147B1  83 C4 18                  ADD ESP,0x18
005147B4  85 C0                     TEST EAX,EAX
005147B6  74 01                     JZ 0x005147b9
005147B8  CC                        INT3
LAB_005147b9:
005147B9  68 27 03 00 00            PUSH 0x327
005147BE  68 3C 38 7C 00            PUSH 0x7c383c
005147C3  6A 00                     PUSH 0x0
005147C5  56                        PUSH ESI
005147C6  E8 75 16 19 00            CALL 0x006a5e40
005147CB  5F                        POP EDI
005147CC  5E                        POP ESI
005147CD  8B E5                     MOV ESP,EBP
005147CF  5D                        POP EBP
005147D0  C3                        RET
