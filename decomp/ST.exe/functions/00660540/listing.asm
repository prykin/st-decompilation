FUN_00660540:
00660540  55                        PUSH EBP
00660541  8B EC                     MOV EBP,ESP
00660543  83 EC 20                  SUB ESP,0x20
00660546  56                        PUSH ESI
00660547  8B F1                     MOV ESI,ECX
00660549  57                        PUSH EDI
0066054A  B9 07 00 00 00            MOV ECX,0x7
0066054F  33 C0                     XOR EAX,EAX
00660551  8D 7D E0                  LEA EDI,[EBP + -0x20]
00660554  F3 AB                     STOSD.REP ES:EDI
00660556  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
0066055A  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0066055E  66 AB                     STOSW ES:EDI
00660560  AA                        STOSB ES:EDI
00660561  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00660564  66 89 55 E2               MOV word ptr [EBP + -0x1e],DX
00660568  0F BE 55 1C               MOVSX EDX,byte ptr [EBP + 0x1c]
0066056C  89 45 E6                  MOV dword ptr [EBP + -0x1a],EAX
0066056F  66 8B 45 14               MOV AX,word ptr [EBP + 0x14]
00660573  66 89 45 E4               MOV word ptr [EBP + -0x1c],AX
00660577  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0066057A  66 89 4D E0               MOV word ptr [EBP + -0x20],CX
0066057E  66 8B 4D 18               MOV CX,word ptr [EBP + 0x18]
00660582  85 C0                     TEST EAX,EAX
00660584  C7 86 A7 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xa7],0x0
0066058E  66 89 4D FD               MOV word ptr [EBP + -0x3],CX
00660592  89 55 EA                  MOV dword ptr [EBP + -0x16],EDX
00660595  74 0F                     JZ 0x006605a6
00660597  6A 0E                     PUSH 0xe
00660599  50                        PUSH EAX
0066059A  8D 45 EE                  LEA EAX,[EBP + -0x12]
0066059D  50                        PUSH EAX
0066059E  E8 9D DD 0C 00            CALL 0x0072e340
006605A3  83 C4 0C                  ADD ESP,0xc
LAB_006605a6:
006605A6  66 8B 46 7D               MOV AX,word ptr [ESI + 0x7d]
006605AA  66 3D FE FF               CMP AX,0xfffe
006605AE  74 2F                     JZ 0x006605df
006605B0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006605B6  85 C9                     TEST ECX,ECX
006605B8  74 25                     JZ 0x006605df
006605BA  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
006605BD  50                        PUSH EAX
006605BE  52                        PUSH EDX
006605BF  E8 35 57 DA FF            CALL 0x00405cf9
006605C4  85 C0                     TEST EAX,EAX
006605C6  74 17                     JZ 0x006605df
006605C8  8B 10                     MOV EDX,dword ptr [EAX]
006605CA  8D 4D E0                  LEA ECX,[EBP + -0x20]
006605CD  51                        PUSH ECX
006605CE  6A 09                     PUSH 0x9
006605D0  8B C8                     MOV ECX,EAX
006605D2  FF 52 08                  CALL dword ptr [EDX + 0x8]
006605D5  5F                        POP EDI
006605D6  33 C0                     XOR EAX,EAX
006605D8  5E                        POP ESI
006605D9  8B E5                     MOV ESP,EBP
006605DB  5D                        POP EBP
006605DC  C2 1C 00                  RET 0x1c
LAB_006605df:
006605DF  5F                        POP EDI
006605E0  83 C8 FF                  OR EAX,0xffffffff
006605E3  5E                        POP ESI
006605E4  8B E5                     MOV ESP,EBP
006605E6  5D                        POP EBP
006605E7  C2 1C 00                  RET 0x1c
