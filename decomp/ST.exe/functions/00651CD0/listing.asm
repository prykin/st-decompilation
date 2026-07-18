FUN_00651cd0:
00651CD0  55                        PUSH EBP
00651CD1  8B EC                     MOV EBP,ESP
00651CD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00651CD6  56                        PUSH ESI
00651CD7  33 F6                     XOR ESI,ESI
00651CD9  33 C9                     XOR ECX,ECX
00651CDB  BA 08 00 00 00            MOV EDX,0x8
LAB_00651ce0:
00651CE0  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00651CE7  0F 85 8C 00 00 00         JNZ 0x00651d79
00651CED  41                        INC ECX
00651CEE  83 F9 06                  CMP ECX,0x6
00651CF1  7C ED                     JL 0x00651ce0
00651CF3  66 8B 08                  MOV CX,word ptr [EAX]
00651CF6  66 83 F9 07               CMP CX,0x7
00651CFA  7D 05                     JGE 0x00651d01
00651CFC  89 70 20                  MOV dword ptr [EAX + 0x20],ESI
00651CFF  EB 08                     JMP 0x00651d09
LAB_00651d01:
00651D01  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
00651D07  75 70                     JNZ 0x00651d79
LAB_00651d09:
00651D09  66 3B CA                  CMP CX,DX
00651D0C  7D 05                     JGE 0x00651d13
00651D0E  89 70 24                  MOV dword ptr [EAX + 0x24],ESI
00651D11  EB 08                     JMP 0x00651d1b
LAB_00651d13:
00651D13  38 90 D7 00 00 00         CMP byte ptr [EAX + 0xd7],DL
00651D19  75 5E                     JNZ 0x00651d79
LAB_00651d1b:
00651D1B  66 83 F9 09               CMP CX,0x9
00651D1F  7D 05                     JGE 0x00651d26
00651D21  89 70 28                  MOV dword ptr [EAX + 0x28],ESI
00651D24  EB 08                     JMP 0x00651d2e
LAB_00651d26:
00651D26  38 90 D8 00 00 00         CMP byte ptr [EAX + 0xd8],DL
00651D2C  75 4B                     JNZ 0x00651d79
LAB_00651d2e:
00651D2E  66 83 F9 0A               CMP CX,0xa
00651D32  7D 05                     JGE 0x00651d39
00651D34  89 70 2C                  MOV dword ptr [EAX + 0x2c],ESI
00651D37  EB 08                     JMP 0x00651d41
LAB_00651d39:
00651D39  38 90 D9 00 00 00         CMP byte ptr [EAX + 0xd9],DL
00651D3F  75 38                     JNZ 0x00651d79
LAB_00651d41:
00651D41  66 83 F9 0B               CMP CX,0xb
00651D45  7D 05                     JGE 0x00651d4c
00651D47  89 70 30                  MOV dword ptr [EAX + 0x30],ESI
00651D4A  EB 08                     JMP 0x00651d54
LAB_00651d4c:
00651D4C  38 90 DA 00 00 00         CMP byte ptr [EAX + 0xda],DL
00651D52  75 25                     JNZ 0x00651d79
LAB_00651d54:
00651D54  39 70 10                  CMP dword ptr [EAX + 0x10],ESI
00651D57  7C 20                     JL 0x00651d79
00651D59  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
00651D5C  3B CE                     CMP ECX,ESI
00651D5E  7C 19                     JL 0x00651d79
00651D60  83 F9 05                  CMP ECX,0x5
00651D63  7F 14                     JG 0x00651d79
00651D65  8B 40 2C                  MOV EAX,dword ptr [EAX + 0x2c]
00651D68  3B C6                     CMP EAX,ESI
00651D6A  7C 0D                     JL 0x00651d79
00651D6C  83 F8 09                  CMP EAX,0x9
00651D6F  7F 08                     JG 0x00651d79
00651D71  5E                        POP ESI
00651D72  B8 01 00 00 00            MOV EAX,0x1
00651D77  5D                        POP EBP
00651D78  C3                        RET
LAB_00651d79:
00651D79  5E                        POP ESI
00651D7A  33 C0                     XOR EAX,EAX
00651D7C  5D                        POP EBP
00651D7D  C3                        RET
