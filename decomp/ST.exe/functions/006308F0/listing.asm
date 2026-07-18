FUN_006308f0:
006308F0  55                        PUSH EBP
006308F1  8B EC                     MOV EBP,ESP
006308F3  83 EC 1C                  SUB ESP,0x1c
006308F6  53                        PUSH EBX
006308F7  56                        PUSH ESI
006308F8  0F BF 35 40 B2 7F 00      MOVSX ESI,word ptr [0x007fb240]
006308FF  0F AF 75 10               IMUL ESI,dword ptr [EBP + 0x10]
00630903  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0063090A  8B D9                     MOV EBX,ECX
0063090C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0063090F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00630912  57                        PUSH EDI
00630913  03 F1                     ADD ESI,ECX
00630915  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00630918  0F AF F0                  IMUL ESI,EAX
0063091B  83 CF FF                  OR EDI,0xffffffff
0063091E  03 F2                     ADD ESI,EDX
00630920  83 F9 01                  CMP ECX,0x1
00630923  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0063092A  75 0F                     JNZ 0x0063093b
0063092C  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
0063092F  80 3C 30 00               CMP byte ptr [EAX + ESI*0x1],0x0
00630933  0F 85 1B 01 00 00         JNZ 0x00630a54
00630939  EB 34                     JMP 0x0063096f
LAB_0063093b:
0063093B  8B 4B 34                  MOV ECX,dword ptr [EBX + 0x34]
0063093E  03 C6                     ADD EAX,ESI
00630940  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00630943  80 3C 31 00               CMP byte ptr [ECX + ESI*0x1],0x0
00630947  0F 85 07 01 00 00         JNZ 0x00630a54
0063094D  8A 54 31 01               MOV DL,byte ptr [ECX + ESI*0x1 + 0x1]
00630951  84 D2                     TEST DL,DL
00630953  0F 85 FB 00 00 00         JNZ 0x00630a54
00630959  80 3C 01 00               CMP byte ptr [ECX + EAX*0x1],0x0
0063095D  0F 85 F1 00 00 00         JNZ 0x00630a54
00630963  8A 54 01 01               MOV DL,byte ptr [ECX + EAX*0x1 + 0x1]
00630967  84 D2                     TEST DL,DL
00630969  0F 85 E5 00 00 00         JNZ 0x00630a54
LAB_0063096f:
0063096F  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
00630972  85 C0                     TEST EAX,EAX
00630974  75 10                     JNZ 0x00630986
00630976  6A 0A                     PUSH 0xa
00630978  6A 75                     PUSH 0x75
0063097A  6A 0A                     PUSH 0xa
0063097C  6A 00                     PUSH 0x0
0063097E  E8 0D D9 07 00            CALL 0x006ae290
00630983  89 43 38                  MOV dword ptr [EBX + 0x38],EAX
LAB_00630986:
00630986  8B 53 38                  MOV EDX,dword ptr [EBX + 0x38]
00630989  85 D2                     TEST EDX,EDX
0063098B  0F 84 C3 00 00 00         JZ 0x00630a54
00630991  81 7A 0C FE 00 00 00      CMP dword ptr [EDX + 0xc],0xfe
00630998  0F 83 B6 00 00 00         JNC 0x00630a54
0063099E  B9 06 00 00 00            MOV ECX,0x6
006309A3  33 C0                     XOR EAX,EAX
006309A5  8D 7D E4                  LEA EDI,[EBP + -0x1c]
006309A8  F3 AB                     STOSD.REP ES:EDI
006309AA  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
006309AE  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006309B1  66 89 4D EA               MOV word ptr [EBP + -0x16],CX
006309B5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006309BB  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006309BE  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
006309C4  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
006309C8  66 89 4D E4               MOV word ptr [EBP + -0x1c],CX
006309CC  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
006309D0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006309D3  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
006309D7  66 89 4D E8               MOV word ptr [EBP + -0x18],CX
006309DB  8D 4D E4                  LEA ECX,[EBP + -0x1c]
006309DE  66 89 45 E6               MOV word ptr [EBP + -0x1a],AX
006309E2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006309E5  51                        PUSH ECX
006309E6  52                        PUSH EDX
006309E7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006309EA  E8 D1 D7 07 00            CALL 0x006ae1c0
006309EF  8B F8                     MOV EDI,EAX
006309F1  85 FF                     TEST EDI,EDI
006309F3  7C 5F                     JL 0x00630a54
006309F5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006309F8  83 F9 01                  CMP ECX,0x1
006309FB  75 08                     JNZ 0x00630a05
006309FD  8B 53 34                  MOV EDX,dword ptr [EBX + 0x34]
00630A00  88 0C 32                  MOV byte ptr [EDX + ESI*0x1],CL
00630A03  EB 21                     JMP 0x00630a26
LAB_00630a05:
00630A05  8B 43 34                  MOV EAX,dword ptr [EBX + 0x34]
00630A08  C6 04 30 01               MOV byte ptr [EAX + ESI*0x1],0x1
00630A0C  8B 53 34                  MOV EDX,dword ptr [EBX + 0x34]
00630A0F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00630A12  C6 44 32 01 01            MOV byte ptr [EDX + ESI*0x1 + 0x1],0x1
00630A17  8B 53 34                  MOV EDX,dword ptr [EBX + 0x34]
00630A1A  C6 04 02 01               MOV byte ptr [EDX + EAX*0x1],0x1
00630A1E  8B 53 34                  MOV EDX,dword ptr [EBX + 0x34]
00630A21  C6 44 02 01 01            MOV byte ptr [EDX + EAX*0x1 + 0x1],0x1
LAB_00630a26:
00630A26  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00630A29  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00630A2C  50                        PUSH EAX
00630A2D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00630A30  52                        PUSH EDX
00630A31  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00630A34  51                        PUSH ECX
00630A35  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00630A38  50                        PUSH EAX
00630A39  51                        PUSH ECX
00630A3A  52                        PUSH EDX
00630A3B  57                        PUSH EDI
00630A3C  8B CB                     MOV ECX,EBX
00630A3E  E8 E2 30 DD FF            CALL 0x00403b25
00630A43  85 C0                     TEST EAX,EAX
00630A45  75 0D                     JNZ 0x00630a54
00630A47  8B 43 38                  MOV EAX,dword ptr [EBX + 0x38]
00630A4A  57                        PUSH EDI
00630A4B  50                        PUSH EAX
00630A4C  E8 1F 02 08 00            CALL 0x006b0c70
00630A51  83 CF FF                  OR EDI,0xffffffff
LAB_00630a54:
00630A54  8B C7                     MOV EAX,EDI
00630A56  5F                        POP EDI
00630A57  5E                        POP ESI
00630A58  5B                        POP EBX
00630A59  8B E5                     MOV ESP,EBP
00630A5B  5D                        POP EBP
00630A5C  C2 18 00                  RET 0x18
