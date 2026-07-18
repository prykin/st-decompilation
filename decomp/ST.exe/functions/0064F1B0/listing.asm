FUN_0064f1b0:
0064F1B0  55                        PUSH EBP
0064F1B1  8B EC                     MOV EBP,ESP
0064F1B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064F1B6  56                        PUSH ESI
0064F1B7  33 F6                     XOR ESI,ESI
0064F1B9  33 C9                     XOR ECX,ECX
0064F1BB  BA 08 00 00 00            MOV EDX,0x8
LAB_0064f1c0:
0064F1C0  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
0064F1C7  75 3E                     JNZ 0x0064f207
0064F1C9  41                        INC ECX
0064F1CA  83 F9 03                  CMP ECX,0x3
0064F1CD  7C F1                     JL 0x0064f1c0
0064F1CF  B9 03 00 00 00            MOV ECX,0x3
LAB_0064f1d4:
0064F1D4  80 BC 08 D0 00 00 00 0A   CMP byte ptr [EAX + ECX*0x1 + 0xd0],0xa
0064F1DC  75 29                     JNZ 0x0064f207
0064F1DE  41                        INC ECX
0064F1DF  83 F9 04                  CMP ECX,0x4
0064F1E2  7C F0                     JL 0x0064f1d4
0064F1E4  66 8B 08                  MOV CX,word ptr [EAX]
0064F1E7  66 83 F9 05               CMP CX,0x5
0064F1EB  7D 12                     JGE 0x0064f1ff
0064F1ED  89 70 18                  MOV dword ptr [EAX + 0x18],ESI
LAB_0064f1f0:
0064F1F0  66 83 F9 06               CMP CX,0x6
0064F1F4  7D 16                     JGE 0x0064f20c
0064F1F6  C7 40 1C 01 00 00 00      MOV dword ptr [EAX + 0x1c],0x1
0064F1FD  EB 1A                     JMP 0x0064f219
LAB_0064f1ff:
0064F1FF  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
0064F205  74 E9                     JZ 0x0064f1f0
LAB_0064f207:
0064F207  5E                        POP ESI
0064F208  33 C0                     XOR EAX,EAX
0064F20A  5D                        POP EBP
0064F20B  C3                        RET
LAB_0064f20c:
0064F20C  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
0064F212  74 05                     JZ 0x0064f219
0064F214  5E                        POP ESI
0064F215  33 C0                     XOR EAX,EAX
0064F217  5D                        POP EBP
0064F218  C3                        RET
LAB_0064f219:
0064F219  66 83 F9 07               CMP CX,0x7
0064F21D  7D 11                     JGE 0x0064f230
0064F21F  C7 40 20 02 00 00 00      MOV dword ptr [EAX + 0x20],0x2
LAB_0064f226:
0064F226  66 3B CA                  CMP CX,DX
0064F229  7D 12                     JGE 0x0064f23d
0064F22B  89 70 24                  MOV dword ptr [EAX + 0x24],ESI
0064F22E  EB 1A                     JMP 0x0064f24a
LAB_0064f230:
0064F230  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
0064F236  74 EE                     JZ 0x0064f226
0064F238  5E                        POP ESI
0064F239  33 C0                     XOR EAX,EAX
0064F23B  5D                        POP EBP
0064F23C  C3                        RET
LAB_0064f23d:
0064F23D  38 90 D7 00 00 00         CMP byte ptr [EAX + 0xd7],DL
0064F243  74 05                     JZ 0x0064f24a
0064F245  5E                        POP ESI
0064F246  33 C0                     XOR EAX,EAX
0064F248  5D                        POP EBP
0064F249  C3                        RET
LAB_0064f24a:
0064F24A  66 83 F9 09               CMP CX,0x9
0064F24E  7D 12                     JGE 0x0064f262
0064F250  89 70 28                  MOV dword ptr [EAX + 0x28],ESI
LAB_0064f253:
0064F253  66 83 F9 0A               CMP CX,0xa
0064F257  7D 16                     JGE 0x0064f26f
0064F259  C7 40 2C 80 02 00 00      MOV dword ptr [EAX + 0x2c],0x280
0064F260  EB 1A                     JMP 0x0064f27c
LAB_0064f262:
0064F262  38 90 D8 00 00 00         CMP byte ptr [EAX + 0xd8],DL
0064F268  74 E9                     JZ 0x0064f253
0064F26A  5E                        POP ESI
0064F26B  33 C0                     XOR EAX,EAX
0064F26D  5D                        POP EBP
0064F26E  C3                        RET
LAB_0064f26f:
0064F26F  38 90 D9 00 00 00         CMP byte ptr [EAX + 0xd9],DL
0064F275  74 05                     JZ 0x0064f27c
0064F277  5E                        POP ESI
0064F278  33 C0                     XOR EAX,EAX
0064F27A  5D                        POP EBP
0064F27B  C3                        RET
LAB_0064f27c:
0064F27C  66 83 F9 0B               CMP CX,0xb
0064F280  7D 1F                     JGE 0x0064f2a1
0064F282  C7 40 30 E0 01 00 00      MOV dword ptr [EAX + 0x30],0x1e0
LAB_0064f289:
0064F289  66 83 F9 0C               CMP CX,0xc
0064F28D  7D 1F                     JGE 0x0064f2ae
0064F28F  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0064F292  33 C9                     XOR ECX,ECX
0064F294  3B D6                     CMP EDX,ESI
0064F296  89 70 34                  MOV dword ptr [EAX + 0x34],ESI
0064F299  0F 95 C1                  SETNZ CL
0064F29C  5E                        POP ESI
0064F29D  8B C1                     MOV EAX,ECX
0064F29F  5D                        POP EBP
0064F2A0  C3                        RET
LAB_0064f2a1:
0064F2A1  38 90 DA 00 00 00         CMP byte ptr [EAX + 0xda],DL
0064F2A7  74 E0                     JZ 0x0064f289
0064F2A9  5E                        POP ESI
0064F2AA  33 C0                     XOR EAX,EAX
0064F2AC  5D                        POP EBP
0064F2AD  C3                        RET
LAB_0064f2ae:
0064F2AE  38 90 DB 00 00 00         CMP byte ptr [EAX + 0xdb],DL
0064F2B4  74 05                     JZ 0x0064f2bb
0064F2B6  5E                        POP ESI
0064F2B7  33 C0                     XOR EAX,EAX
0064F2B9  5D                        POP EBP
0064F2BA  C3                        RET
LAB_0064f2bb:
0064F2BB  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0064F2BE  33 C9                     XOR ECX,ECX
0064F2C0  3B D6                     CMP EDX,ESI
0064F2C2  5E                        POP ESI
0064F2C3  0F 95 C1                  SETNZ CL
0064F2C6  8B C1                     MOV EAX,ECX
0064F2C8  5D                        POP EBP
0064F2C9  C3                        RET
