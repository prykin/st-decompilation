FUN_00675950:
00675950  55                        PUSH EBP
00675951  8B EC                     MOV EBP,ESP
00675953  83 EC 28                  SUB ESP,0x28
00675956  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00675959  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067595C  53                        PUSH EBX
0067595D  56                        PUSH ESI
0067595E  BE 01 00 00 00            MOV ESI,0x1
00675963  2B C8                     SUB ECX,EAX
00675965  57                        PUSH EDI
00675966  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00675969  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0067596C  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0067596F  EB 06                     JMP 0x00675977
LAB_00675971:
00675971  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00675974  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_00675977:
00675977  03 C8                     ADD ECX,EAX
00675979  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067597C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0067597F  8D 45 EC                  LEA EAX,[EBP + -0x14]
00675982  8D 4D F0                  LEA ECX,[EBP + -0x10]
00675985  50                        PUSH EAX
00675986  8D 55 FC                  LEA EDX,[EBP + -0x4]
00675989  51                        PUSH ECX
0067598A  8D 45 F4                  LEA EAX,[EBP + -0xc]
0067598D  52                        PUSH EDX
0067598E  50                        PUSH EAX
0067598F  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
00675992  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00675995  E8 6C BF D8 FF            CALL 0x00401906
0067599A  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0067599D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006759A0  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006759A3  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006759A6  8D 44 19 FF               LEA EAX,[ECX + EBX*0x1 + -0x1]
006759AA  83 C4 10                  ADD ESP,0x10
006759AD  8D 4C 3A FF               LEA ECX,[EDX + EDI*0x1 + -0x1]
006759B1  66 3B D8                  CMP BX,AX
006759B4  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006759B7  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006759BA  0F 8F 85 00 00 00         JG 0x00675a45
LAB_006759c0:
006759C0  66 3B 7D E4               CMP DI,word ptr [EBP + -0x1c]
006759C4  7F 75                     JG 0x00675a3b
LAB_006759c6:
006759C6  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006759C9  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_006759d0:
006759D0  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
006759D6  56                        PUSH ESI
006759D7  57                        PUSH EDI
006759D8  53                        PUSH EBX
006759D9  E8 5D F3 D8 FF            CALL 0x00404d3b
006759DE  85 C0                     TEST EAX,EAX
006759E0  74 33                     JZ 0x00675a15
006759E2  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
006759E9  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
006759F0  0F BF C6                  MOVSX EAX,SI
006759F3  0F AF D0                  IMUL EDX,EAX
006759F6  0F BF C7                  MOVSX EAX,DI
006759F9  0F AF C8                  IMUL ECX,EAX
006759FC  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006759FF  03 D1                     ADD EDX,ECX
00675A01  0F BF CB                  MOVSX ECX,BX
00675A04  03 D1                     ADD EDX,ECX
00675A06  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
00675A09  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00675A0F  83 3C 8A 00               CMP dword ptr [EDX + ECX*0x4],0x0
00675A13  74 6E                     JZ 0x00675a83
LAB_00675a15:
00675A15  46                        INC ESI
00675A16  66 83 FE 05               CMP SI,0x5
00675A1A  7C 02                     JL 0x00675a1e
00675A1C  33 F6                     XOR ESI,ESI
LAB_00675a1e:
00675A1E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00675A21  40                        INC EAX
00675A22  66 3D 05 00               CMP AX,0x5
00675A26  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00675A29  7C A5                     JL 0x006759d0
00675A2B  47                        INC EDI
00675A2C  66 3B 7D E4               CMP DI,word ptr [EBP + -0x1c]
00675A30  7E 94                     JLE 0x006759c6
00675A32  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00675A35  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00675A38  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
LAB_00675a3b:
00675A3B  43                        INC EBX
00675A3C  66 3B D8                  CMP BX,AX
00675A3F  0F 8E 7B FF FF FF         JLE 0x006759c0
LAB_00675a45:
00675A45  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00675A48  83 C6 02                  ADD ESI,0x2
00675A4B  4A                        DEC EDX
00675A4C  66 83 FE 09               CMP SI,0x9
00675A50  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00675A53  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00675A56  0F 8C 15 FF FF FF         JL 0x00675971
00675A5C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00675A5F  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
00675A63  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00675A66  5F                        POP EDI
00675A67  66 89 08                  MOV word ptr [EAX],CX
00675A6A  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
00675A6E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00675A71  66 89 02                  MOV word ptr [EDX],AX
00675A74  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
00675A78  5E                        POP ESI
00675A79  66 89 11                  MOV word ptr [ECX],DX
00675A7C  33 C0                     XOR EAX,EAX
00675A7E  5B                        POP EBX
00675A7F  8B E5                     MOV ESP,EBP
00675A81  5D                        POP EBP
00675A82  C3                        RET
LAB_00675a83:
00675A83  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00675A86  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00675A89  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00675A8C  66 89 18                  MOV word ptr [EAX],BX
00675A8F  66 89 39                  MOV word ptr [ECX],DI
00675A92  66 89 32                  MOV word ptr [EDX],SI
00675A95  5F                        POP EDI
00675A96  5E                        POP ESI
00675A97  B8 01 00 00 00            MOV EAX,0x1
00675A9C  5B                        POP EBX
00675A9D  8B E5                     MOV ESP,EBP
00675A9F  5D                        POP EBP
00675AA0  C3                        RET
