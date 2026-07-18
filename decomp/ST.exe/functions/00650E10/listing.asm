FUN_00650e10:
00650E10  55                        PUSH EBP
00650E11  8B EC                     MOV EBP,ESP
00650E13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00650E16  53                        PUSH EBX
00650E17  33 C9                     XOR ECX,ECX
00650E19  BB 08 00 00 00            MOV EBX,0x8
LAB_00650e1e:
00650E1E  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
00650E25  0F 85 DF 00 00 00         JNZ 0x00650f0a
00650E2B  41                        INC ECX
00650E2C  83 F9 02                  CMP ECX,0x2
00650E2F  7C ED                     JL 0x00650e1e
00650E31  B9 02 00 00 00            MOV ECX,0x2
LAB_00650e36:
00650E36  80 BC 08 D0 00 00 00 0A   CMP byte ptr [EAX + ECX*0x1 + 0xd0],0xa
00650E3E  0F 85 C6 00 00 00         JNZ 0x00650f0a
00650E44  41                        INC ECX
00650E45  83 F9 03                  CMP ECX,0x3
00650E48  7C EC                     JL 0x00650e36
00650E4A  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00650E4D  85 C9                     TEST ECX,ECX
00650E4F  75 05                     JNZ 0x00650e56
00650E51  33 C0                     XOR EAX,EAX
00650E53  5B                        POP EBX
00650E54  5D                        POP EBP
00650E55  C3                        RET
LAB_00650e56:
00650E56  66 8B 08                  MOV CX,word ptr [EAX]
00650E59  83 CA FF                  OR EDX,0xffffffff
00650E5C  66 83 F9 04               CMP CX,0x4
00650E60  7D 12                     JGE 0x00650e74
00650E62  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
LAB_00650e65:
00650E65  66 83 F9 05               CMP CX,0x5
00650E69  7D 16                     JGE 0x00650e81
00650E6B  C7 40 18 00 00 00 00      MOV dword ptr [EAX + 0x18],0x0
00650E72  EB 1A                     JMP 0x00650e8e
LAB_00650e74:
00650E74  38 98 D3 00 00 00         CMP byte ptr [EAX + 0xd3],BL
00650E7A  74 E9                     JZ 0x00650e65
00650E7C  33 C0                     XOR EAX,EAX
00650E7E  5B                        POP EBX
00650E7F  5D                        POP EBP
00650E80  C3                        RET
LAB_00650e81:
00650E81  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
00650E87  74 05                     JZ 0x00650e8e
00650E89  33 C0                     XOR EAX,EAX
00650E8B  5B                        POP EBX
00650E8C  5D                        POP EBP
00650E8D  C3                        RET
LAB_00650e8e:
00650E8E  66 83 F9 06               CMP CX,0x6
00650E92  7D 16                     JGE 0x00650eaa
00650E94  C7 40 1C 00 00 00 00      MOV dword ptr [EAX + 0x1c],0x0
LAB_00650e9b:
00650E9B  66 83 F9 07               CMP CX,0x7
00650E9F  7D 16                     JGE 0x00650eb7
00650EA1  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
00650EA8  EB 1A                     JMP 0x00650ec4
LAB_00650eaa:
00650EAA  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
00650EB0  74 E9                     JZ 0x00650e9b
00650EB2  33 C0                     XOR EAX,EAX
00650EB4  5B                        POP EBX
00650EB5  5D                        POP EBP
00650EB6  C3                        RET
LAB_00650eb7:
00650EB7  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
00650EBD  74 05                     JZ 0x00650ec4
00650EBF  33 C0                     XOR EAX,EAX
00650EC1  5B                        POP EBX
00650EC2  5D                        POP EBP
00650EC3  C3                        RET
LAB_00650ec4:
00650EC4  66 3B CB                  CMP CX,BX
00650EC7  7D 0E                     JGE 0x00650ed7
00650EC9  89 50 24                  MOV dword ptr [EAX + 0x24],EDX
LAB_00650ecc:
00650ECC  66 83 F9 09               CMP CX,0x9
00650ED0  7D 12                     JGE 0x00650ee4
00650ED2  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
00650ED5  EB 1A                     JMP 0x00650ef1
LAB_00650ed7:
00650ED7  38 98 D7 00 00 00         CMP byte ptr [EAX + 0xd7],BL
00650EDD  74 ED                     JZ 0x00650ecc
00650EDF  33 C0                     XOR EAX,EAX
00650EE1  5B                        POP EBX
00650EE2  5D                        POP EBP
00650EE3  C3                        RET
LAB_00650ee4:
00650EE4  38 98 D8 00 00 00         CMP byte ptr [EAX + 0xd8],BL
00650EEA  74 05                     JZ 0x00650ef1
00650EEC  33 C0                     XOR EAX,EAX
00650EEE  5B                        POP EBX
00650EEF  5D                        POP EBP
00650EF0  C3                        RET
LAB_00650ef1:
00650EF1  66 83 F9 0A               CMP CX,0xa
00650EF5  7D 0B                     JGE 0x00650f02
00650EF7  89 50 2C                  MOV dword ptr [EAX + 0x2c],EDX
LAB_00650efa:
00650EFA  B8 01 00 00 00            MOV EAX,0x1
00650EFF  5B                        POP EBX
00650F00  5D                        POP EBP
00650F01  C3                        RET
LAB_00650f02:
00650F02  38 98 D9 00 00 00         CMP byte ptr [EAX + 0xd9],BL
00650F08  74 F0                     JZ 0x00650efa
LAB_00650f0a:
00650F0A  33 C0                     XOR EAX,EAX
00650F0C  5B                        POP EBX
00650F0D  5D                        POP EBP
00650F0E  C3                        RET
