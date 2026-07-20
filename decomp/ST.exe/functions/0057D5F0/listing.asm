STFishC::sub_0057D5F0:
0057D5F0  55                        PUSH EBP
0057D5F1  8B EC                     MOV EBP,ESP
0057D5F3  83 EC 0C                  SUB ESP,0xc
0057D5F6  56                        PUSH ESI
0057D5F7  8B F1                     MOV ESI,ECX
0057D5F9  57                        PUSH EDI
0057D5FA  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0057D601  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
0057D605  66 3B 86 35 02 00 00      CMP AX,word ptr [ESI + 0x235]
0057D60C  75 1A                     JNZ 0x0057d628
0057D60E  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
0057D612  66 3B 8E 37 02 00 00      CMP CX,word ptr [ESI + 0x237]
0057D619  75 0D                     JNZ 0x0057d628
0057D61B  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
0057D61F  66 3B 96 39 02 00 00      CMP DX,word ptr [ESI + 0x239]
0057D626  74 07                     JZ 0x0057d62f
LAB_0057d628:
0057D628  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057D62B  85 C0                     TEST EAX,EAX
0057D62D  74 41                     JZ 0x0057d670
LAB_0057d62f:
0057D62F  8D 45 FC                  LEA EAX,[EBP + -0x4]
0057D632  8D 4D F4                  LEA ECX,[EBP + -0xc]
0057D635  50                        PUSH EAX
0057D636  8D 55 F8                  LEA EDX,[EBP + -0x8]
0057D639  51                        PUSH ECX
0057D63A  8D 45 08                  LEA EAX,[EBP + 0x8]
0057D63D  52                        PUSH EDX
0057D63E  50                        PUSH EAX
0057D63F  8B CE                     MOV ECX,ESI
0057D641  E8 87 58 E8 FF            CALL 0x00402ecd
0057D646  8B F8                     MOV EDI,EAX
0057D648  83 FF 01                  CMP EDI,0x1
0057D64B  75 3D                     JNZ 0x0057d68a
0057D64D  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
0057D651  66 8B 55 F8               MOV DX,word ptr [EBP + -0x8]
0057D655  66 8B 45 F4               MOV AX,word ptr [EBP + -0xc]
0057D659  66 89 8E 35 02 00 00      MOV word ptr [ESI + 0x235],CX
0057D660  66 89 96 37 02 00 00      MOV word ptr [ESI + 0x237],DX
0057D667  66 89 86 39 02 00 00      MOV word ptr [ESI + 0x239],AX
0057D66E  EB 05                     JMP 0x0057d675
LAB_0057d670:
0057D670  BF 01 00 00 00            MOV EDI,0x1
LAB_0057d675:
0057D675  8B CE                     MOV ECX,ESI
0057D677  E8 0A 45 E8 FF            CALL 0x00401b86
0057D67C  85 C0                     TEST EAX,EAX
0057D67E  75 2D                     JNZ 0x0057d6ad
LAB_0057d680:
0057D680  5F                        POP EDI
0057D681  33 C0                     XOR EAX,EAX
0057D683  5E                        POP ESI
0057D684  8B E5                     MOV ESP,EBP
0057D686  5D                        POP EBP
0057D687  C2 04 00                  RET 0x4
LAB_0057d68a:
0057D68A  83 FF 02                  CMP EDI,0x2
0057D68D  75 F1                     JNZ 0x0057d680
0057D68F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0057D692  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
0057D696  51                        PUSH ECX
0057D697  52                        PUSH EDX
0057D698  8B CE                     MOV ECX,ESI
0057D69A  E8 4A 4B E8 FF            CALL 0x004021e9
0057D69F  85 C0                     TEST EAX,EAX
0057D6A1  74 0A                     JZ 0x0057d6ad
0057D6A3  5F                        POP EDI
0057D6A4  33 C0                     XOR EAX,EAX
0057D6A6  5E                        POP ESI
0057D6A7  8B E5                     MOV ESP,EBP
0057D6A9  5D                        POP EBP
0057D6AA  C2 04 00                  RET 0x4
LAB_0057d6ad:
0057D6AD  8B C7                     MOV EAX,EDI
0057D6AF  5F                        POP EDI
0057D6B0  5E                        POP ESI
0057D6B1  8B E5                     MOV ESP,EBP
0057D6B3  5D                        POP EBP
0057D6B4  C2 04 00                  RET 0x4
