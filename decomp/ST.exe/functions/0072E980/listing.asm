FUN_0072e980:
0072E980  55                        PUSH EBP
0072E981  8B EC                     MOV EBP,ESP
0072E983  83 EC 08                  SUB ESP,0x8
0072E986  53                        PUSH EBX
0072E987  56                        PUSH ESI
0072E988  57                        PUSH EDI
LAB_0072e989:
0072E989  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072E98D  75 1E                     JNZ 0x0072e9ad
0072E98F  68 34 FE 79 00            PUSH 0x79fe34
0072E994  6A 00                     PUSH 0x0
0072E996  6A 35                     PUSH 0x35
0072E998  68 2C FE 79 00            PUSH 0x79fe2c
0072E99D  6A 02                     PUSH 0x2
0072E99F  E8 FC 25 00 00            CALL 0x00730fa0
0072E9A4  83 C4 14                  ADD ESP,0x14
0072E9A7  83 F8 01                  CMP EAX,0x1
0072E9AA  75 01                     JNZ 0x0072e9ad
0072E9AC  CC                        INT3
LAB_0072e9ad:
0072E9AD  33 C0                     XOR EAX,EAX
0072E9AF  85 C0                     TEST EAX,EAX
0072E9B1  75 D6                     JNZ 0x0072e989
LAB_0072e9b3:
0072E9B3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072E9B6  0F BE 11                  MOVSX EDX,byte ptr [ECX]
0072E9B9  85 D2                     TEST EDX,EDX
0072E9BB  75 1E                     JNZ 0x0072e9db
0072E9BD  68 18 FE 79 00            PUSH 0x79fe18
0072E9C2  6A 00                     PUSH 0x0
0072E9C4  6A 36                     PUSH 0x36
0072E9C6  68 2C FE 79 00            PUSH 0x79fe2c
0072E9CB  6A 02                     PUSH 0x2
0072E9CD  E8 CE 25 00 00            CALL 0x00730fa0
0072E9D2  83 C4 14                  ADD ESP,0x14
0072E9D5  83 F8 01                  CMP EAX,0x1
0072E9D8  75 01                     JNZ 0x0072e9db
0072E9DA  CC                        INT3
LAB_0072e9db:
0072E9DB  33 C0                     XOR EAX,EAX
0072E9DD  85 C0                     TEST EAX,EAX
0072E9DF  75 D2                     JNZ 0x0072e9b3
LAB_0072e9e1:
0072E9E1  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0072E9E5  75 1E                     JNZ 0x0072ea05
0072E9E7  68 08 FE 79 00            PUSH 0x79fe08
0072E9EC  6A 00                     PUSH 0x0
0072E9EE  6A 37                     PUSH 0x37
0072E9F0  68 2C FE 79 00            PUSH 0x79fe2c
0072E9F5  6A 02                     PUSH 0x2
0072E9F7  E8 A4 25 00 00            CALL 0x00730fa0
0072E9FC  83 C4 14                  ADD ESP,0x14
0072E9FF  83 F8 01                  CMP EAX,0x1
0072EA02  75 01                     JNZ 0x0072ea05
0072EA04  CC                        INT3
LAB_0072ea05:
0072EA05  33 C9                     XOR ECX,ECX
0072EA07  85 C9                     TEST ECX,ECX
0072EA09  75 D6                     JNZ 0x0072e9e1
LAB_0072ea0b:
0072EA0B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072EA0E  0F BE 02                  MOVSX EAX,byte ptr [EDX]
0072EA11  85 C0                     TEST EAX,EAX
0072EA13  75 1E                     JNZ 0x0072ea33
0072EA15  68 F4 FD 79 00            PUSH 0x79fdf4
0072EA1A  6A 00                     PUSH 0x0
0072EA1C  6A 38                     PUSH 0x38
0072EA1E  68 2C FE 79 00            PUSH 0x79fe2c
0072EA23  6A 02                     PUSH 0x2
0072EA25  E8 76 25 00 00            CALL 0x00730fa0
0072EA2A  83 C4 14                  ADD ESP,0x14
0072EA2D  83 F8 01                  CMP EAX,0x1
0072EA30  75 01                     JNZ 0x0072ea33
0072EA32  CC                        INT3
LAB_0072ea33:
0072EA33  33 C9                     XOR ECX,ECX
0072EA35  85 C9                     TEST ECX,ECX
0072EA37  75 D2                     JNZ 0x0072ea0b
0072EA39  E8 E2 85 00 00            CALL 0x00737020
0072EA3E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072EA41  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0072EA45  75 04                     JNZ 0x0072ea4b
0072EA47  33 C0                     XOR EAX,EAX
0072EA49  EB 1E                     JMP 0x0072ea69
LAB_0072ea4b:
0072EA4B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072EA4E  52                        PUSH EDX
0072EA4F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0072EA52  50                        PUSH EAX
0072EA53  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072EA56  51                        PUSH ECX
0072EA57  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072EA5A  52                        PUSH EDX
0072EA5B  E8 30 82 00 00            CALL 0x00736c90
0072EA60  83 C4 10                  ADD ESP,0x10
0072EA63  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0072EA66  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0072ea69:
0072EA69  5F                        POP EDI
0072EA6A  5E                        POP ESI
0072EA6B  5B                        POP EBX
0072EA6C  8B E5                     MOV ESP,EBP
0072EA6E  5D                        POP EBP
0072EA6F  C3                        RET
