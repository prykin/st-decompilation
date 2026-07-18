FUN_006519e0:
006519E0  55                        PUSH EBP
006519E1  8B EC                     MOV EBP,ESP
006519E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006519E6  53                        PUSH EBX
006519E7  56                        PUSH ESI
006519E8  33 F6                     XOR ESI,ESI
006519EA  33 C9                     XOR ECX,ECX
006519EC  BB 08 00 00 00            MOV EBX,0x8
LAB_006519f1:
006519F1  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
006519F8  0F 85 E1 00 00 00         JNZ 0x00651adf
006519FE  41                        INC ECX
006519FF  83 F9 04                  CMP ECX,0x4
00651A02  7C ED                     JL 0x006519f1
00651A04  66 8B 08                  MOV CX,word ptr [EAX]
00651A07  83 CA FF                  OR EDX,0xffffffff
00651A0A  66 83 F9 05               CMP CX,0x5
00651A0E  7D 05                     JGE 0x00651a15
00651A10  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
00651A13  EB 0C                     JMP 0x00651a21
LAB_00651a15:
00651A15  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
00651A1B  0F 85 BE 00 00 00         JNZ 0x00651adf
LAB_00651a21:
00651A21  66 83 F9 06               CMP CX,0x6
00651A25  7D 05                     JGE 0x00651a2c
00651A27  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
00651A2A  EB 0C                     JMP 0x00651a38
LAB_00651a2c:
00651A2C  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
00651A32  0F 85 A7 00 00 00         JNZ 0x00651adf
LAB_00651a38:
00651A38  66 83 F9 07               CMP CX,0x7
00651A3C  7D 05                     JGE 0x00651a43
00651A3E  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
00651A41  EB 0C                     JMP 0x00651a4f
LAB_00651a43:
00651A43  38 98 D6 00 00 00         CMP byte ptr [EAX + 0xd6],BL
00651A49  0F 85 90 00 00 00         JNZ 0x00651adf
LAB_00651a4f:
00651A4F  66 3B CB                  CMP CX,BX
00651A52  7D 05                     JGE 0x00651a59
00651A54  89 70 24                  MOV dword ptr [EAX + 0x24],ESI
00651A57  EB 08                     JMP 0x00651a61
LAB_00651a59:
00651A59  38 98 D7 00 00 00         CMP byte ptr [EAX + 0xd7],BL
00651A5F  75 7E                     JNZ 0x00651adf
LAB_00651a61:
00651A61  66 83 F9 09               CMP CX,0x9
00651A65  7D 05                     JGE 0x00651a6c
00651A67  89 70 28                  MOV dword ptr [EAX + 0x28],ESI
00651A6A  EB 08                     JMP 0x00651a74
LAB_00651a6c:
00651A6C  38 98 D8 00 00 00         CMP byte ptr [EAX + 0xd8],BL
00651A72  75 6B                     JNZ 0x00651adf
LAB_00651a74:
00651A74  66 83 F9 0A               CMP CX,0xa
00651A78  7D 05                     JGE 0x00651a7f
00651A7A  89 70 2C                  MOV dword ptr [EAX + 0x2c],ESI
00651A7D  EB 08                     JMP 0x00651a87
LAB_00651a7f:
00651A7F  38 98 D9 00 00 00         CMP byte ptr [EAX + 0xd9],BL
00651A85  75 58                     JNZ 0x00651adf
LAB_00651a87:
00651A87  66 83 F9 0B               CMP CX,0xb
00651A8B  7D 05                     JGE 0x00651a92
00651A8D  89 70 30                  MOV dword ptr [EAX + 0x30],ESI
00651A90  EB 08                     JMP 0x00651a9a
LAB_00651a92:
00651A92  38 98 DA 00 00 00         CMP byte ptr [EAX + 0xda],BL
00651A98  75 45                     JNZ 0x00651adf
LAB_00651a9a:
00651A9A  66 83 F9 0C               CMP CX,0xc
00651A9E  7D 05                     JGE 0x00651aa5
00651AA0  89 70 34                  MOV dword ptr [EAX + 0x34],ESI
00651AA3  EB 08                     JMP 0x00651aad
LAB_00651aa5:
00651AA5  38 98 DB 00 00 00         CMP byte ptr [EAX + 0xdb],BL
00651AAB  75 32                     JNZ 0x00651adf
LAB_00651aad:
00651AAD  39 70 10                  CMP dword ptr [EAX + 0x10],ESI
00651AB0  7C 2D                     JL 0x00651adf
00651AB2  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00651AB5  3B CE                     CMP ECX,ESI
00651AB7  7C 26                     JL 0x00651adf
00651AB9  83 F9 02                  CMP ECX,0x2
00651ABC  7F 21                     JG 0x00651adf
00651ABE  8B 48 2C                  MOV ECX,dword ptr [EAX + 0x2c]
00651AC1  3B CE                     CMP ECX,ESI
00651AC3  7C 1A                     JL 0x00651adf
00651AC5  83 F9 05                  CMP ECX,0x5
00651AC8  7F 15                     JG 0x00651adf
00651ACA  8B 40 30                  MOV EAX,dword ptr [EAX + 0x30]
00651ACD  3B C6                     CMP EAX,ESI
00651ACF  7C 0E                     JL 0x00651adf
00651AD1  83 F8 09                  CMP EAX,0x9
00651AD4  7F 09                     JG 0x00651adf
00651AD6  5E                        POP ESI
00651AD7  B8 01 00 00 00            MOV EAX,0x1
00651ADC  5B                        POP EBX
00651ADD  5D                        POP EBP
00651ADE  C3                        RET
LAB_00651adf:
00651ADF  5E                        POP ESI
00651AE0  33 C0                     XOR EAX,EAX
00651AE2  5B                        POP EBX
00651AE3  5D                        POP EBP
00651AE4  C3                        RET
