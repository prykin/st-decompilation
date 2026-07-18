FUN_00652460:
00652460  55                        PUSH EBP
00652461  8B EC                     MOV EBP,ESP
00652463  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00652466  53                        PUSH EBX
00652467  33 C9                     XOR ECX,ECX
00652469  BB 08 00 00 00            MOV EBX,0x8
LAB_0065246e:
0065246E  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
00652475  75 27                     JNZ 0x0065249e
00652477  41                        INC ECX
00652478  83 F9 06                  CMP ECX,0x6
0065247B  7C F1                     JL 0x0065246e
0065247D  66 8B 08                  MOV CX,word ptr [EAX]
00652480  83 CA FF                  OR EDX,0xffffffff
00652483  66 83 F9 07               CMP CX,0x7
00652487  7D 0D                     JGE 0x00652496
00652489  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
LAB_0065248c:
0065248C  66 3B CB                  CMP CX,BX
0065248F  7D 12                     JGE 0x006524a3
00652491  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
00652494  EB 1A                     JMP 0x006524b0
LAB_00652496:
00652496  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
0065249C  74 EE                     JZ 0x0065248c
LAB_0065249e:
0065249E  33 C0                     XOR EAX,EAX
006524A0  5B                        POP EBX
006524A1  5D                        POP EBP
006524A2  C3                        RET
LAB_006524a3:
006524A3  38 98 D7 00 00 00         CMP byte ptr [EAX + 0xd7],BL
006524A9  74 05                     JZ 0x006524b0
006524AB  33 C0                     XOR EAX,EAX
006524AD  5B                        POP EBX
006524AE  5D                        POP EBP
006524AF  C3                        RET
LAB_006524b0:
006524B0  66 83 F9 09               CMP CX,0x9
006524B4  7D 12                     JGE 0x006524c8
006524B6  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
LAB_006524b9:
006524B9  66 83 F9 0A               CMP CX,0xa
006524BD  7D 16                     JGE 0x006524d5
006524BF  C7 40 2C 00 00 00 00      MOV dword ptr [EAX + 0x2c],0x0
006524C6  EB 1A                     JMP 0x006524e2
LAB_006524c8:
006524C8  38 98 D8 00 00 00         CMP byte ptr [EAX + 0xd8],BL
006524CE  74 E9                     JZ 0x006524b9
006524D0  33 C0                     XOR EAX,EAX
006524D2  5B                        POP EBX
006524D3  5D                        POP EBP
006524D4  C3                        RET
LAB_006524d5:
006524D5  38 98 D9 00 00 00         CMP byte ptr [EAX + 0xd9],BL
006524DB  74 05                     JZ 0x006524e2
006524DD  33 C0                     XOR EAX,EAX
006524DF  5B                        POP EBX
006524E0  5D                        POP EBP
006524E1  C3                        RET
LAB_006524e2:
006524E2  66 83 F9 0B               CMP CX,0xb
006524E6  7D 16                     JGE 0x006524fe
006524E8  C7 40 30 00 00 00 00      MOV dword ptr [EAX + 0x30],0x0
LAB_006524ef:
006524EF  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
006524F2  33 C9                     XOR ECX,ECX
006524F4  85 D2                     TEST EDX,EDX
006524F6  0F 9D C1                  SETGE CL
006524F9  8B C1                     MOV EAX,ECX
006524FB  5B                        POP EBX
006524FC  5D                        POP EBP
006524FD  C3                        RET
LAB_006524fe:
006524FE  38 98 DA 00 00 00         CMP byte ptr [EAX + 0xda],BL
00652504  74 E9                     JZ 0x006524ef
00652506  33 C0                     XOR EAX,EAX
00652508  5B                        POP EBX
00652509  5D                        POP EBP
0065250A  C3                        RET
