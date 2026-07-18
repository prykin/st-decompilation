FUN_00571810:
00571810  55                        PUSH EBP
00571811  8B EC                     MOV EBP,ESP
00571813  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00571816  85 C0                     TEST EAX,EAX
00571818  75 04                     JNZ 0x0057181e
0057181A  5D                        POP EBP
0057181B  C2 04 00                  RET 0x4
LAB_0057181e:
0057181E  53                        PUSH EBX
0057181F  56                        PUSH ESI
00571820  6A 04                     PUSH 0x4
00571822  50                        PUSH EAX
00571823  8D 45 08                  LEA EAX,[EBP + 0x8]
00571826  50                        PUSH EAX
00571827  E8 14 CB 1B 00            CALL 0x0072e340
0057182C  83 C4 0C                  ADD ESP,0xc
0057182F  8D 4D 08                  LEA ECX,[EBP + 0x8]
00571832  8D 55 08                  LEA EDX,[EBP + 0x8]
00571835  C6 45 0B 00               MOV byte ptr [EBP + 0xb],0x0
00571839  51                        PUSH ECX
0057183A  52                        PUSH EDX
0057183B  E8 A0 5F 14 00            CALL 0x006b77e0
00571840  BE E4 A2 7C 00            MOV ESI,0x7ca2e4
00571845  8D 45 08                  LEA EAX,[EBP + 0x8]
LAB_00571848:
00571848  8A 10                     MOV DL,byte ptr [EAX]
0057184A  8A 1E                     MOV BL,byte ptr [ESI]
0057184C  8A CA                     MOV CL,DL
0057184E  3A D3                     CMP DL,BL
00571850  75 2B                     JNZ 0x0057187d
00571852  84 C9                     TEST CL,CL
00571854  74 16                     JZ 0x0057186c
00571856  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
00571859  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
0057185C  8A CA                     MOV CL,DL
0057185E  3A D3                     CMP DL,BL
00571860  75 1B                     JNZ 0x0057187d
00571862  83 C0 02                  ADD EAX,0x2
00571865  83 C6 02                  ADD ESI,0x2
00571868  84 C9                     TEST CL,CL
0057186A  75 DC                     JNZ 0x00571848
LAB_0057186c:
0057186C  33 C0                     XOR EAX,EAX
0057186E  33 C9                     XOR ECX,ECX
00571870  85 C0                     TEST EAX,EAX
00571872  0F 94 C1                  SETZ CL
00571875  5E                        POP ESI
00571876  8B C1                     MOV EAX,ECX
00571878  5B                        POP EBX
00571879  5D                        POP EBP
0057187A  C2 04 00                  RET 0x4
LAB_0057187d:
0057187D  1B C0                     SBB EAX,EAX
0057187F  5E                        POP ESI
00571880  83 D8 FF                  SBB EAX,-0x1
00571883  33 C9                     XOR ECX,ECX
00571885  85 C0                     TEST EAX,EAX
00571887  0F 94 C1                  SETZ CL
0057188A  8B C1                     MOV EAX,ECX
0057188C  5B                        POP EBX
0057188D  5D                        POP EBP
0057188E  C2 04 00                  RET 0x4
