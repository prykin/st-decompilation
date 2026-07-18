FUN_006503b0:
006503B0  55                        PUSH EBP
006503B1  8B EC                     MOV EBP,ESP
006503B3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006503B6  33 C9                     XOR ECX,ECX
006503B8  BA 08 00 00 00            MOV EDX,0x8
LAB_006503bd:
006503BD  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
006503C4  75 72                     JNZ 0x00650438
006503C6  41                        INC ECX
006503C7  83 F9 06                  CMP ECX,0x6
006503CA  7C F1                     JL 0x006503bd
006503CC  66 8B 08                  MOV CX,word ptr [EAX]
006503CF  66 83 F9 07               CMP CX,0x7
006503D3  7D 15                     JGE 0x006503ea
006503D5  C7 40 20 FF FF FF FF      MOV dword ptr [EAX + 0x20],0xffffffff
LAB_006503dc:
006503DC  66 3B CA                  CMP CX,DX
006503DF  7D 15                     JGE 0x006503f6
006503E1  C7 40 24 00 00 00 00      MOV dword ptr [EAX + 0x24],0x0
006503E8  EB 19                     JMP 0x00650403
LAB_006503ea:
006503EA  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
006503F0  74 EA                     JZ 0x006503dc
006503F2  33 C0                     XOR EAX,EAX
006503F4  5D                        POP EBP
006503F5  C3                        RET
LAB_006503f6:
006503F6  80 B8 D7 00 00 00 0A      CMP byte ptr [EAX + 0xd7],0xa
006503FD  74 04                     JZ 0x00650403
006503FF  33 C0                     XOR EAX,EAX
00650401  5D                        POP EBP
00650402  C3                        RET
LAB_00650403:
00650403  66 83 F9 09               CMP CX,0x9
00650407  7D 1B                     JGE 0x00650424
00650409  C7 40 28 01 00 00 00      MOV dword ptr [EAX + 0x28],0x1
LAB_00650410:
00650410  66 83 F9 0A               CMP CX,0xa
00650414  7D 1A                     JGE 0x00650430
00650416  C7 40 2C 00 00 00 00      MOV dword ptr [EAX + 0x2c],0x0
0065041D  B8 01 00 00 00            MOV EAX,0x1
00650422  5D                        POP EBP
00650423  C3                        RET
LAB_00650424:
00650424  38 90 D8 00 00 00         CMP byte ptr [EAX + 0xd8],DL
0065042A  74 E4                     JZ 0x00650410
0065042C  33 C0                     XOR EAX,EAX
0065042E  5D                        POP EBP
0065042F  C3                        RET
LAB_00650430:
00650430  38 90 D9 00 00 00         CMP byte ptr [EAX + 0xd9],DL
00650436  74 04                     JZ 0x0065043c
LAB_00650438:
00650438  33 C0                     XOR EAX,EAX
0065043A  5D                        POP EBP
0065043B  C3                        RET
LAB_0065043c:
0065043C  B8 01 00 00 00            MOV EAX,0x1
00650441  5D                        POP EBP
00650442  C3                        RET
