SubmarineTitans::Recovered::HiddenThis::AnonReceiver_00678E00::FUN_00679120:
00679120  55                        PUSH EBP
00679121  8B EC                     MOV EBP,ESP
00679123  83 EC 64                  SUB ESP,0x64
00679126  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067912B  53                        PUSH EBX
0067912C  56                        PUSH ESI
0067912D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00679130  57                        PUSH EDI
00679131  8D 55 A0                  LEA EDX,[EBP + -0x60]
00679134  8D 4D 9C                  LEA ECX,[EBP + -0x64]
00679137  6A 00                     PUSH 0x0
00679139  52                        PUSH EDX
0067913A  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0067913D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00679143  E8 A8 46 0B 00            CALL 0x0072d7f0
00679148  83 C4 08                  ADD ESP,0x8
0067914B  85 C0                     TEST EAX,EAX
0067914D  0F 85 32 01 00 00         JNZ 0x00679285
00679153  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00679156  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00679159  50                        PUSH EAX
0067915A  8B CF                     MOV ECX,EDI
0067915C  E8 03 93 D8 FF            CALL 0x00402464
00679161  85 C0                     TEST EAX,EAX
00679163  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00679166  0F 8C 07 01 00 00         JL 0x00679273
0067916C  8B 8F 95 06 00 00         MOV ECX,dword ptr [EDI + 0x695]
00679172  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
00679175  73 0D                     JNC 0x00679184
00679177  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0067917A  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0067917D  0F AF F0                  IMUL ESI,EAX
00679180  03 F2                     ADD ESI,EDX
00679182  EB 02                     JMP 0x00679186
LAB_00679184:
00679184  33 F6                     XOR ESI,ESI
LAB_00679186:
00679186  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00679189  85 C9                     TEST ECX,ECX
0067918B  0F 85 E2 00 00 00         JNZ 0x00679273
00679191  83 3E 00                  CMP dword ptr [ESI],0x0
00679194  0F 84 D9 00 00 00         JZ 0x00679273
0067919A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0067919D  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
006791A4  85 C9                     TEST ECX,ECX
006791A6  7C 0E                     JL 0x006791b6
006791A8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006791AB  85 C0                     TEST EAX,EAX
006791AD  7C 07                     JL 0x006791b6
006791AF  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006791B2  85 DB                     TEST EBX,EBX
006791B4  7D 1E                     JGE 0x006791d4
LAB_006791b6:
006791B6  0F BF 8F 3A 06 00 00      MOVSX ECX,word ptr [EDI + 0x63a]
006791BD  0F BF 87 3C 06 00 00      MOVSX EAX,word ptr [EDI + 0x63c]
006791C4  0F BF 9F 3E 06 00 00      MOVSX EBX,word ptr [EDI + 0x63e]
006791CB  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
006791CE  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006791D1  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
LAB_006791d4:
006791D4  83 C0 FE                  ADD EAX,-0x2
006791D7  83 C1 FE                  ADD ECX,-0x2
006791DA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006791DD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006791E0  B8 05 00 00 00            MOV EAX,0x5
006791E5  8D 4D EC                  LEA ECX,[EBP + -0x14]
006791E8  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006791EB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006791EE  8D 55 E8                  LEA EDX,[EBP + -0x18]
006791F1  51                        PUSH ECX
006791F2  8D 45 F8                  LEA EAX,[EBP + -0x8]
006791F5  52                        PUSH EDX
006791F6  8D 4D FC                  LEA ECX,[EBP + -0x4]
006791F9  50                        PUSH EAX
006791FA  51                        PUSH ECX
006791FB  E8 06 87 D8 FF            CALL 0x00401906
00679200  8B 16                     MOV EDX,dword ptr [ESI]
00679202  8B 87 D7 05 00 00         MOV EAX,dword ptr [EDI + 0x5d7]
00679208  83 C4 10                  ADD ESP,0x10
0067920B  89 42 04                  MOV dword ptr [EDX + 0x4],EAX
0067920E  8B 0E                     MOV ECX,dword ptr [ESI]
00679210  8B 97 40 06 00 00         MOV EDX,dword ptr [EDI + 0x640]
00679216  6A 00                     PUSH 0x0
00679218  89 51 7D                  MOV dword ptr [ECX + 0x7d],EDX
0067921B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067921E  8B 0E                     MOV ECX,dword ptr [ESI]
00679220  83 C0 02                  ADD EAX,0x2
00679223  66 89 41 62               MOV word ptr [ECX + 0x62],AX
00679227  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0067922A  8B 06                     MOV EAX,dword ptr [ESI]
0067922C  83 C2 02                  ADD EDX,0x2
0067922F  66 89 50 64               MOV word ptr [EAX + 0x64],DX
00679233  8B 0E                     MOV ECX,dword ptr [ESI]
00679235  66 89 59 66               MOV word ptr [ECX + 0x66],BX
00679239  8B 16                     MOV EDX,dword ptr [ESI]
0067923B  8A 87 4F 06 00 00         MOV AL,byte ptr [EDI + 0x64f]
00679241  88 42 68                  MOV byte ptr [EDX + 0x68],AL
00679244  8B 0E                     MOV ECX,dword ptr [ESI]
00679246  8D 55 F4                  LEA EDX,[EBP + -0xc]
00679249  51                        PUSH ECX
0067924A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00679250  8D 45 E0                  LEA EAX,[EBP + -0x20]
00679253  52                        PUSH EDX
00679254  50                        PUSH EAX
00679255  68 8E 03 00 00            PUSH 0x38e
0067925A  E8 63 89 D8 FF            CALL 0x00401bc2
0067925F  56                        PUSH ESI
00679260  E8 FB 1D 03 00            CALL 0x006ab060
00679265  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00679268  89 06                     MOV dword ptr [ESI],EAX
0067926A  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
0067926D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00679270  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
LAB_00679273:
00679273  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00679276  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067927C  5F                        POP EDI
0067927D  5E                        POP ESI
0067927E  5B                        POP EBX
0067927F  8B E5                     MOV ESP,EBP
00679281  5D                        POP EBP
00679282  C2 10 00                  RET 0x10
LAB_00679285:
00679285  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00679288  85 C0                     TEST EAX,EAX
0067928A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00679290  7C 03                     JL 0x00679295
00679292  83 C8 FF                  OR EAX,0xffffffff
LAB_00679295:
00679295  5F                        POP EDI
00679296  5E                        POP ESI
00679297  5B                        POP EBX
00679298  8B E5                     MOV ESP,EBP
0067929A  5D                        POP EBP
0067929B  C2 10 00                  RET 0x10
