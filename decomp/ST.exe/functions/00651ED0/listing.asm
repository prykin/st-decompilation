FUN_00651ed0:
00651ED0  55                        PUSH EBP
00651ED1  8B EC                     MOV EBP,ESP
00651ED3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00651ED6  56                        PUSH ESI
00651ED7  33 F6                     XOR ESI,ESI
00651ED9  33 C9                     XOR ECX,ECX
00651EDB  BA 08 00 00 00            MOV EDX,0x8
LAB_00651ee0:
00651EE0  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00651EE7  75 2D                     JNZ 0x00651f16
00651EE9  41                        INC ECX
00651EEA  83 F9 03                  CMP ECX,0x3
00651EED  7C F1                     JL 0x00651ee0
00651EEF  66 8B 08                  MOV CX,word ptr [EAX]
00651EF2  66 83 F9 04               CMP CX,0x4
00651EF6  7D 16                     JGE 0x00651f0e
00651EF8  C7 40 14 FF 00 00 00      MOV dword ptr [EAX + 0x14],0xff
LAB_00651eff:
00651EFF  66 83 F9 05               CMP CX,0x5
00651F03  7D 16                     JGE 0x00651f1b
00651F05  C7 40 18 FF FF FF 3F      MOV dword ptr [EAX + 0x18],0x3fffffff
00651F0C  EB 1A                     JMP 0x00651f28
LAB_00651f0e:
00651F0E  38 90 D3 00 00 00         CMP byte ptr [EAX + 0xd3],DL
00651F14  74 E9                     JZ 0x00651eff
LAB_00651f16:
00651F16  5E                        POP ESI
00651F17  33 C0                     XOR EAX,EAX
00651F19  5D                        POP EBP
00651F1A  C3                        RET
LAB_00651f1b:
00651F1B  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
00651F21  74 05                     JZ 0x00651f28
00651F23  5E                        POP ESI
00651F24  33 C0                     XOR EAX,EAX
00651F26  5D                        POP EBP
00651F27  C3                        RET
LAB_00651f28:
00651F28  66 83 F9 06               CMP CX,0x6
00651F2C  7D 12                     JGE 0x00651f40
00651F2E  89 70 1C                  MOV dword ptr [EAX + 0x1c],ESI
LAB_00651f31:
00651F31  66 83 F9 07               CMP CX,0x7
00651F35  7D 16                     JGE 0x00651f4d
00651F37  C7 40 20 FF FF FF FF      MOV dword ptr [EAX + 0x20],0xffffffff
00651F3E  EB 1A                     JMP 0x00651f5a
LAB_00651f40:
00651F40  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
00651F46  74 E9                     JZ 0x00651f31
00651F48  5E                        POP ESI
00651F49  33 C0                     XOR EAX,EAX
00651F4B  5D                        POP EBP
00651F4C  C3                        RET
LAB_00651f4d:
00651F4D  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
00651F53  74 05                     JZ 0x00651f5a
00651F55  5E                        POP ESI
00651F56  33 C0                     XOR EAX,EAX
00651F58  5D                        POP EBP
00651F59  C3                        RET
LAB_00651f5a:
00651F5A  66 3B CA                  CMP CX,DX
00651F5D  7D 0E                     JGE 0x00651f6d
00651F5F  89 70 24                  MOV dword ptr [EAX + 0x24],ESI
LAB_00651f62:
00651F62  66 83 F9 09               CMP CX,0x9
00651F66  7D 13                     JGE 0x00651f7b
00651F68  89 70 28                  MOV dword ptr [EAX + 0x28],ESI
00651F6B  EB 1B                     JMP 0x00651f88
LAB_00651f6d:
00651F6D  80 B8 D7 00 00 00 0A      CMP byte ptr [EAX + 0xd7],0xa
00651F74  74 EC                     JZ 0x00651f62
00651F76  5E                        POP ESI
00651F77  33 C0                     XOR EAX,EAX
00651F79  5D                        POP EBP
00651F7A  C3                        RET
LAB_00651f7b:
00651F7B  38 90 D8 00 00 00         CMP byte ptr [EAX + 0xd8],DL
00651F81  74 05                     JZ 0x00651f88
00651F83  5E                        POP ESI
00651F84  33 C0                     XOR EAX,EAX
00651F86  5D                        POP EBP
00651F87  C3                        RET
LAB_00651f88:
00651F88  66 83 F9 0A               CMP CX,0xa
00651F8C  7D 1B                     JGE 0x00651fa9
00651F8E  89 70 2C                  MOV dword ptr [EAX + 0x2c],ESI
LAB_00651f91:
00651F91  66 83 F9 0B               CMP CX,0xb
00651F95  7D 1F                     JGE 0x00651fb6
00651F97  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
00651F9A  33 C9                     XOR ECX,ECX
00651F9C  3B D6                     CMP EDX,ESI
00651F9E  89 70 30                  MOV dword ptr [EAX + 0x30],ESI
00651FA1  0F 9D C1                  SETGE CL
00651FA4  5E                        POP ESI
00651FA5  8B C1                     MOV EAX,ECX
00651FA7  5D                        POP EBP
00651FA8  C3                        RET
LAB_00651fa9:
00651FA9  38 90 D9 00 00 00         CMP byte ptr [EAX + 0xd9],DL
00651FAF  74 E0                     JZ 0x00651f91
00651FB1  5E                        POP ESI
00651FB2  33 C0                     XOR EAX,EAX
00651FB4  5D                        POP EBP
00651FB5  C3                        RET
LAB_00651fb6:
00651FB6  38 90 DA 00 00 00         CMP byte ptr [EAX + 0xda],DL
00651FBC  74 05                     JZ 0x00651fc3
00651FBE  5E                        POP ESI
00651FBF  33 C0                     XOR EAX,EAX
00651FC1  5D                        POP EBP
00651FC2  C3                        RET
LAB_00651fc3:
00651FC3  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
00651FC6  33 C9                     XOR ECX,ECX
00651FC8  3B D6                     CMP EDX,ESI
00651FCA  5E                        POP ESI
00651FCB  0F 9D C1                  SETGE CL
00651FCE  8B C1                     MOV EAX,ECX
00651FD0  5D                        POP EBP
00651FD1  C3                        RET
