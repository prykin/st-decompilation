FUN_00709670:
00709670  55                        PUSH EBP
00709671  8B EC                     MOV EBP,ESP
00709673  6A FF                     PUSH -0x1
00709675  68 10 E2 79 00            PUSH 0x79e210
0070967A  68 64 D9 72 00            PUSH 0x72d964
0070967F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00709685  50                        PUSH EAX
00709686  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0070968D  83 EC 1C                  SUB ESP,0x1c
00709690  53                        PUSH EBX
00709691  56                        PUSH ESI
00709692  57                        PUSH EDI
00709693  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00709696  8B F1                     MOV ESI,ECX
00709698  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
0070969B  33 C0                     XOR EAX,EAX
0070969D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007096A0  3B 96 10 03 00 00         CMP EDX,dword ptr [ESI + 0x310]
007096A6  0F 83 EF 00 00 00         JNC 0x0070979b
007096AC  8D 0C 52                  LEA ECX,[EDX + EDX*0x2]
007096AF  C1 E1 03                  SHL ECX,0x3
007096B2  2B CA                     SUB ECX,EDX
007096B4  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
007096B7  8B 96 1C 03 00 00         MOV EDX,dword ptr [ESI + 0x31c]
007096BD  8D 34 8A                  LEA ESI,[EDX + ECX*0x4]
007096C0  8B 0E                     MOV ECX,dword ptr [ESI]
007096C2  F6 C5 80                  TEST CH,0x80
007096C5  0F 84 D0 00 00 00         JZ 0x0070979b
007096CB  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
007096CE  F6 C5 60                  TEST CH,0x60
007096D1  0F 85 C4 00 00 00         JNZ 0x0070979b
007096D7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007096DA  8B BE 94 00 00 00         MOV EDI,dword ptr [ESI + 0x94]
007096E0  C1 E7 02                  SHL EDI,0x2
007096E3  8B C7                     MOV EAX,EDI
007096E5  83 C0 03                  ADD EAX,0x3
007096E8  24 FC                     AND AL,0xfc
007096EA  E8 51 43 02 00            CALL 0x0072da40
007096EF  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
007096F2  8B DC                     MOV EBX,ESP
007096F4  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
007096F7  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
007096FE  8B CF                     MOV ECX,EDI
00709700  33 C0                     XOR EAX,EAX
00709702  8B FB                     MOV EDI,EBX
00709704  8B D1                     MOV EDX,ECX
00709706  C1 E9 02                  SHR ECX,0x2
00709709  F3 AB                     STOSD.REP ES:EDI
0070970B  8B CA                     MOV ECX,EDX
0070970D  83 E1 03                  AND ECX,0x3
00709710  F3 AA                     STOSB.REP ES:EDI
00709712  33 C0                     XOR EAX,EAX
00709714  8B 8E 94 00 00 00         MOV ECX,dword ptr [ESI + 0x94]
0070971A  85 C9                     TEST ECX,ECX
0070971C  7E 36                     JLE 0x00709754
LAB_0070971e:
0070971E  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
00709724  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
00709727  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
0070972B  F6 C6 C0                  TEST DH,0xc0
0070972E  74 1B                     JZ 0x0070974b
00709730  F7 C2 15 21 00 00         TEST EDX,0x2115
00709736  75 13                     JNZ 0x0070974b
00709738  8B 96 A0 00 00 00         MOV EDX,dword ptr [ESI + 0xa0]
0070973E  0F BF 09                  MOVSX ECX,word ptr [ECX]
00709741  8B 54 C2 04               MOV EDX,dword ptr [EDX + EAX*0x8 + 0x4]
00709745  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
00709748  89 0C 83                  MOV dword ptr [EBX + EAX*0x4],ECX
LAB_0070974b:
0070974B  40                        INC EAX
0070974C  3B 86 94 00 00 00         CMP EAX,dword ptr [ESI + 0x94]
00709752  7C CA                     JL 0x0070971e
LAB_00709754:
00709754  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00709757  52                        PUSH EDX
00709758  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070975B  50                        PUSH EAX
0070975C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070975F  51                        PUSH ECX
00709760  8B 96 94 00 00 00         MOV EDX,dword ptr [ESI + 0x94]
00709766  52                        PUSH EDX
00709767  53                        PUSH EBX
00709768  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0070976B  E8 00 FD FF FF            CALL 0x00709470
00709770  EB 29                     JMP 0x0070979b
LAB_0070979b:
0070979B  8D 65 C8                  LEA ESP,[EBP + -0x38]
0070979E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007097A1  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
007097A8  5F                        POP EDI
007097A9  5E                        POP ESI
007097AA  5B                        POP EBX
007097AB  8B E5                     MOV ESP,EBP
007097AD  5D                        POP EBP
007097AE  C2 10 00                  RET 0x10
