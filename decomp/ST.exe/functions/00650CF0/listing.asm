FUN_00650cf0:
00650CF0  55                        PUSH EBP
00650CF1  8B EC                     MOV EBP,ESP
00650CF3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00650CF6  56                        PUSH ESI
00650CF7  33 C9                     XOR ECX,ECX
00650CF9  BA 08 00 00 00            MOV EDX,0x8
LAB_00650cfe:
00650CFE  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00650D05  0F 85 BA 00 00 00         JNZ 0x00650dc5
00650D0B  41                        INC ECX
00650D0C  83 F9 03                  CMP ECX,0x3
00650D0F  7C ED                     JL 0x00650cfe
00650D11  66 8B 08                  MOV CX,word ptr [EAX]
00650D14  83 CE FF                  OR ESI,0xffffffff
00650D17  66 83 F9 04               CMP CX,0x4
00650D1B  7D 12                     JGE 0x00650d2f
00650D1D  89 70 14                  MOV dword ptr [EAX + 0x14],ESI
LAB_00650d20:
00650D20  66 83 F9 05               CMP CX,0x5
00650D24  7D 16                     JGE 0x00650d3c
00650D26  C7 40 18 00 00 00 00      MOV dword ptr [EAX + 0x18],0x0
00650D2D  EB 1A                     JMP 0x00650d49
LAB_00650d2f:
00650D2F  38 90 D3 00 00 00         CMP byte ptr [EAX + 0xd3],DL
00650D35  74 E9                     JZ 0x00650d20
00650D37  5E                        POP ESI
00650D38  33 C0                     XOR EAX,EAX
00650D3A  5D                        POP EBP
00650D3B  C3                        RET
LAB_00650d3c:
00650D3C  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
00650D42  74 05                     JZ 0x00650d49
00650D44  5E                        POP ESI
00650D45  33 C0                     XOR EAX,EAX
00650D47  5D                        POP EBP
00650D48  C3                        RET
LAB_00650d49:
00650D49  66 83 F9 06               CMP CX,0x6
00650D4D  7D 16                     JGE 0x00650d65
00650D4F  C7 40 1C 00 00 00 00      MOV dword ptr [EAX + 0x1c],0x0
LAB_00650d56:
00650D56  66 83 F9 07               CMP CX,0x7
00650D5A  7D 16                     JGE 0x00650d72
00650D5C  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
00650D63  EB 1A                     JMP 0x00650d7f
LAB_00650d65:
00650D65  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
00650D6B  74 E9                     JZ 0x00650d56
00650D6D  5E                        POP ESI
00650D6E  33 C0                     XOR EAX,EAX
00650D70  5D                        POP EBP
00650D71  C3                        RET
LAB_00650d72:
00650D72  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
00650D78  74 05                     JZ 0x00650d7f
00650D7A  5E                        POP ESI
00650D7B  33 C0                     XOR EAX,EAX
00650D7D  5D                        POP EBP
00650D7E  C3                        RET
LAB_00650d7f:
00650D7F  66 3B CA                  CMP CX,DX
00650D82  7D 0E                     JGE 0x00650d92
00650D84  89 70 24                  MOV dword ptr [EAX + 0x24],ESI
LAB_00650d87:
00650D87  66 83 F9 09               CMP CX,0x9
00650D8B  7D 12                     JGE 0x00650d9f
00650D8D  89 70 28                  MOV dword ptr [EAX + 0x28],ESI
00650D90  EB 1A                     JMP 0x00650dac
LAB_00650d92:
00650D92  38 90 D7 00 00 00         CMP byte ptr [EAX + 0xd7],DL
00650D98  74 ED                     JZ 0x00650d87
00650D9A  5E                        POP ESI
00650D9B  33 C0                     XOR EAX,EAX
00650D9D  5D                        POP EBP
00650D9E  C3                        RET
LAB_00650d9f:
00650D9F  38 90 D8 00 00 00         CMP byte ptr [EAX + 0xd8],DL
00650DA5  74 05                     JZ 0x00650dac
00650DA7  5E                        POP ESI
00650DA8  33 C0                     XOR EAX,EAX
00650DAA  5D                        POP EBP
00650DAB  C3                        RET
LAB_00650dac:
00650DAC  66 83 F9 0A               CMP CX,0xa
00650DB0  7D 0B                     JGE 0x00650dbd
00650DB2  89 70 2C                  MOV dword ptr [EAX + 0x2c],ESI
LAB_00650db5:
00650DB5  5E                        POP ESI
00650DB6  B8 01 00 00 00            MOV EAX,0x1
00650DBB  5D                        POP EBP
00650DBC  C3                        RET
LAB_00650dbd:
00650DBD  38 90 D9 00 00 00         CMP byte ptr [EAX + 0xd9],DL
00650DC3  74 F0                     JZ 0x00650db5
LAB_00650dc5:
00650DC5  5E                        POP ESI
00650DC6  33 C0                     XOR EAX,EAX
00650DC8  5D                        POP EBP
00650DC9  C3                        RET
