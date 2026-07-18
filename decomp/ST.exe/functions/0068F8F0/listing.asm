FUN_0068f8f0:
0068F8F0  55                        PUSH EBP
0068F8F1  8B EC                     MOV EBP,ESP
0068F8F3  83 EC 34                  SUB ESP,0x34
0068F8F6  66 83 7D 08 01            CMP word ptr [EBP + 0x8],0x1
0068F8FB  53                        PUSH EBX
0068F8FC  56                        PUSH ESI
0068F8FD  57                        PUSH EDI
0068F8FE  8B D9                     MOV EBX,ECX
0068F900  75 3B                     JNZ 0x0068f93d
0068F902  66 83 7B 39 03            CMP word ptr [EBX + 0x39],0x3
0068F907  75 26                     JNZ 0x0068f92f
0068F909  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0068F90F  85 C9                     TEST ECX,ECX
0068F911  0F 84 93 00 00 00         JZ 0x0068f9aa
0068F917  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0068F91A  6A FF                     PUSH -0x1
0068F91C  6A 00                     PUSH 0x0
0068F91E  6A 62                     PUSH 0x62
0068F920  50                        PUSH EAX
0068F921  E8 FD 16 D7 FF            CALL 0x00401023
0068F926  25 FF FF 00 00            AND EAX,0xffff
0068F92B  85 C0                     TEST EAX,EAX
0068F92D  7E 7B                     JLE 0x0068f9aa
LAB_0068f92f:
0068F92F  5F                        POP EDI
0068F930  5E                        POP ESI
0068F931  B8 01 00 00 00            MOV EAX,0x1
0068F936  5B                        POP EBX
0068F937  8B E5                     MOV ESP,EBP
0068F939  5D                        POP EBP
0068F93A  C2 04 00                  RET 0x4
LAB_0068f93d:
0068F93D  8B 8B A5 00 00 00         MOV ECX,dword ptr [EBX + 0xa5]
0068F943  33 F6                     XOR ESI,ESI
0068F945  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068F948  85 C0                     TEST EAX,EAX
0068F94A  7E 5E                     JLE 0x0068f9aa
0068F94C  3B F0                     CMP ESI,EAX
LAB_0068f94e:
0068F94E  73 0D                     JNC 0x0068f95d
0068F950  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068F953  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0068F956  0F AF C6                  IMUL EAX,ESI
0068F959  03 C2                     ADD EAX,EDX
0068F95B  EB 02                     JMP 0x0068f95f
LAB_0068f95d:
0068F95D  33 C0                     XOR EAX,EAX
LAB_0068f95f:
0068F95F  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0068F962  85 D2                     TEST EDX,EDX
0068F964  74 36                     JZ 0x0068f99c
0068F966  66 81 7A 7B 00 80         CMP word ptr [EDX + 0x7b],0x8000
0068F96C  75 2E                     JNZ 0x0068f99c
0068F96E  B9 0D 00 00 00            MOV ECX,0xd
0068F973  33 C0                     XOR EAX,EAX
0068F975  8D 7D CC                  LEA EDI,[EBP + -0x34]
0068F978  F3 AB                     STOSD.REP ES:EDI
0068F97A  8B 8B 2C 01 00 00         MOV ECX,dword ptr [EBX + 0x12c]
0068F980  8D 45 CC                  LEA EAX,[EBP + -0x34]
0068F983  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0068F986  50                        PUSH EAX
0068F987  8B CA                     MOV ECX,EDX
0068F989  C7 45 CC 75 00 00 00      MOV dword ptr [EBP + -0x34],0x75
0068F990  E8 C0 1B D7 FF            CALL 0x00401555
0068F995  8A 45 D4                  MOV AL,byte ptr [EBP + -0x2c]
0068F998  84 C0                     TEST AL,AL
0068F99A  7F 93                     JG 0x0068f92f
LAB_0068f99c:
0068F99C  8B 8B A5 00 00 00         MOV ECX,dword ptr [EBX + 0xa5]
0068F9A2  46                        INC ESI
0068F9A3  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068F9A6  3B F0                     CMP ESI,EAX
0068F9A8  7C A4                     JL 0x0068f94e
LAB_0068f9aa:
0068F9AA  5F                        POP EDI
0068F9AB  5E                        POP ESI
0068F9AC  33 C0                     XOR EAX,EAX
0068F9AE  5B                        POP EBX
0068F9AF  8B E5                     MOV ESP,EBP
0068F9B1  5D                        POP EBP
0068F9B2  C2 04 00                  RET 0x4
