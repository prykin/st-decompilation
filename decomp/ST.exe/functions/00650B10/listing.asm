FUN_00650b10:
00650B10  55                        PUSH EBP
00650B11  8B EC                     MOV EBP,ESP
00650B13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00650B16  53                        PUSH EBX
00650B17  33 C9                     XOR ECX,ECX
00650B19  B3 08                     MOV BL,0x8
LAB_00650b1b:
00650B1B  38 9C 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],BL
00650B22  75 75                     JNZ 0x00650b99
00650B24  41                        INC ECX
00650B25  83 F9 02                  CMP ECX,0x2
00650B28  7C F1                     JL 0x00650b1b
00650B2A  B9 02 00 00 00            MOV ECX,0x2
00650B2F  B2 0A                     MOV DL,0xa
LAB_00650b31:
00650B31  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00650B38  75 5F                     JNZ 0x00650b99
00650B3A  41                        INC ECX
00650B3B  83 F9 03                  CMP ECX,0x3
00650B3E  7C F1                     JL 0x00650b31
00650B40  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00650B43  85 C9                     TEST ECX,ECX
00650B45  75 05                     JNZ 0x00650b4c
00650B47  33 C0                     XOR EAX,EAX
00650B49  5B                        POP EBX
00650B4A  5D                        POP EBP
00650B4B  C3                        RET
LAB_00650b4c:
00650B4C  66 8B 08                  MOV CX,word ptr [EAX]
00650B4F  83 CA FF                  OR EDX,0xffffffff
00650B52  66 83 F9 04               CMP CX,0x4
00650B56  7D 0E                     JGE 0x00650b66
00650B58  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
LAB_00650b5b:
00650B5B  66 83 F9 05               CMP CX,0x5
00650B5F  7D 12                     JGE 0x00650b73
00650B61  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
00650B64  EB 1A                     JMP 0x00650b80
LAB_00650b66:
00650B66  38 98 D3 00 00 00         CMP byte ptr [EAX + 0xd3],BL
00650B6C  74 ED                     JZ 0x00650b5b
00650B6E  33 C0                     XOR EAX,EAX
00650B70  5B                        POP EBX
00650B71  5D                        POP EBP
00650B72  C3                        RET
LAB_00650b73:
00650B73  38 98 D4 00 00 00         CMP byte ptr [EAX + 0xd4],BL
00650B79  74 05                     JZ 0x00650b80
00650B7B  33 C0                     XOR EAX,EAX
00650B7D  5B                        POP EBX
00650B7E  5D                        POP EBP
00650B7F  C3                        RET
LAB_00650b80:
00650B80  66 83 F9 06               CMP CX,0x6
00650B84  7D 0B                     JGE 0x00650b91
00650B86  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
LAB_00650b89:
00650B89  B8 01 00 00 00            MOV EAX,0x1
00650B8E  5B                        POP EBX
00650B8F  5D                        POP EBP
00650B90  C3                        RET
LAB_00650b91:
00650B91  38 98 D5 00 00 00         CMP byte ptr [EAX + 0xd5],BL
00650B97  74 F0                     JZ 0x00650b89
LAB_00650b99:
00650B99  33 C0                     XOR EAX,EAX
00650B9B  5B                        POP EBX
00650B9C  5D                        POP EBP
00650B9D  C3                        RET
