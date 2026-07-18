FUN_00651df0:
00651DF0  55                        PUSH EBP
00651DF1  8B EC                     MOV EBP,ESP
00651DF3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00651DF6  56                        PUSH ESI
00651DF7  33 F6                     XOR ESI,ESI
00651DF9  33 C9                     XOR ECX,ECX
00651DFB  BA 08 00 00 00            MOV EDX,0x8
LAB_00651e00:
00651E00  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00651E07  0F 85 8C 00 00 00         JNZ 0x00651e99
00651E0D  41                        INC ECX
00651E0E  83 F9 06                  CMP ECX,0x6
00651E11  7C ED                     JL 0x00651e00
00651E13  66 8B 08                  MOV CX,word ptr [EAX]
00651E16  66 83 F9 07               CMP CX,0x7
00651E1A  7D 05                     JGE 0x00651e21
00651E1C  89 70 20                  MOV dword ptr [EAX + 0x20],ESI
00651E1F  EB 08                     JMP 0x00651e29
LAB_00651e21:
00651E21  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
00651E27  75 70                     JNZ 0x00651e99
LAB_00651e29:
00651E29  66 3B CA                  CMP CX,DX
00651E2C  7D 05                     JGE 0x00651e33
00651E2E  89 70 24                  MOV dword ptr [EAX + 0x24],ESI
00651E31  EB 08                     JMP 0x00651e3b
LAB_00651e33:
00651E33  38 90 D7 00 00 00         CMP byte ptr [EAX + 0xd7],DL
00651E39  75 5E                     JNZ 0x00651e99
LAB_00651e3b:
00651E3B  66 83 F9 09               CMP CX,0x9
00651E3F  7D 05                     JGE 0x00651e46
00651E41  89 70 28                  MOV dword ptr [EAX + 0x28],ESI
00651E44  EB 08                     JMP 0x00651e4e
LAB_00651e46:
00651E46  38 90 D8 00 00 00         CMP byte ptr [EAX + 0xd8],DL
00651E4C  75 4B                     JNZ 0x00651e99
LAB_00651e4e:
00651E4E  66 83 F9 0A               CMP CX,0xa
00651E52  7D 05                     JGE 0x00651e59
00651E54  89 70 2C                  MOV dword ptr [EAX + 0x2c],ESI
00651E57  EB 08                     JMP 0x00651e61
LAB_00651e59:
00651E59  38 90 D9 00 00 00         CMP byte ptr [EAX + 0xd9],DL
00651E5F  75 38                     JNZ 0x00651e99
LAB_00651e61:
00651E61  66 83 F9 0B               CMP CX,0xb
00651E65  7D 05                     JGE 0x00651e6c
00651E67  89 70 30                  MOV dword ptr [EAX + 0x30],ESI
00651E6A  EB 08                     JMP 0x00651e74
LAB_00651e6c:
00651E6C  38 90 DA 00 00 00         CMP byte ptr [EAX + 0xda],DL
00651E72  75 25                     JNZ 0x00651e99
LAB_00651e74:
00651E74  39 70 10                  CMP dword ptr [EAX + 0x10],ESI
00651E77  7C 20                     JL 0x00651e99
00651E79  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
00651E7C  3B CE                     CMP ECX,ESI
00651E7E  7C 19                     JL 0x00651e99
00651E80  83 F9 05                  CMP ECX,0x5
00651E83  7F 14                     JG 0x00651e99
00651E85  8B 40 2C                  MOV EAX,dword ptr [EAX + 0x2c]
00651E88  3B C6                     CMP EAX,ESI
00651E8A  7C 0D                     JL 0x00651e99
00651E8C  83 F8 09                  CMP EAX,0x9
00651E8F  7F 08                     JG 0x00651e99
00651E91  5E                        POP ESI
00651E92  B8 01 00 00 00            MOV EAX,0x1
00651E97  5D                        POP EBP
00651E98  C3                        RET
LAB_00651e99:
00651E99  5E                        POP ESI
00651E9A  33 C0                     XOR EAX,EAX
00651E9C  5D                        POP EBP
00651E9D  C3                        RET
