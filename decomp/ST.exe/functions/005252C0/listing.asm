FUN_005252c0:
005252C0  55                        PUSH EBP
005252C1  8B EC                     MOV EBP,ESP
005252C3  83 EC 48                  SUB ESP,0x48
005252C6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005252C9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005252D0  83 F8 FF                  CMP EAX,-0x1
005252D3  74 72                     JZ 0x00525347
005252D5  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005252DA  8D 55 BC                  LEA EDX,[EBP + -0x44]
005252DD  8D 4D B8                  LEA ECX,[EBP + -0x48]
005252E0  6A 00                     PUSH 0x0
005252E2  52                        PUSH EDX
005252E3  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005252E6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005252EC  E8 FF 84 20 00            CALL 0x0072d7f0
005252F1  83 C4 08                  ADD ESP,0x8
005252F4  85 C0                     TEST EAX,EAX
005252F6  75 46                     JNZ 0x0052533e
005252F8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005252FB  8D 81 51 FF FF FF         LEA EAX,[ECX + 0xffffff51]
00525301  83 F8 0A                  CMP EAX,0xa
00525304  77 16                     JA 0x0052531c
00525306  33 D2                     XOR EDX,EDX
00525308  8A 90 54 53 52 00         MOV DL,byte ptr [EAX + 0x525354]
switchD_0052530e::switchD:
0052530E  FF 24 95 4C 53 52 00      JMP dword ptr [EDX*0x4 + 0x52534c]
switchD_0052530e::caseD_af:
00525315  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
switchD_0052530e::caseD_b1:
0052531C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0052531F  50                        PUSH EAX
00525320  6A 00                     PUSH 0x0
00525322  51                        PUSH ECX
00525323  6A 00                     PUSH 0x0
00525325  6A 05                     PUSH 0x5
00525327  B9 58 76 80 00            MOV ECX,0x807658
0052532C  E8 A7 F8 ED FF            CALL 0x00404bd8
00525331  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00525334  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052533A  8B E5                     MOV ESP,EBP
0052533C  5D                        POP EBP
0052533D  C3                        RET
LAB_0052533e:
0052533E  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00525341  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_00525347:
00525347  8B E5                     MOV ESP,EBP
00525349  5D                        POP EBP
0052534A  C3                        RET
