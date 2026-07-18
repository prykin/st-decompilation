FUN_00753c80:
00753C80  55                        PUSH EBP
00753C81  8B EC                     MOV EBP,ESP
00753C83  53                        PUSH EBX
00753C84  56                        PUSH ESI
00753C85  57                        PUSH EDI
00753C86  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00753C89  33 F6                     XOR ESI,ESI
00753C8B  83 CB FF                  OR EBX,0xffffffff
00753C8E  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00753C91  8B 4F 10                  MOV ECX,dword ptr [EDI + 0x10]
00753C94  8B 50 34                  MOV EDX,dword ptr [EAX + 0x34]
00753C97  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753C9A  03 D1                     ADD EDX,ECX
00753C9C  85 C0                     TEST EAX,EAX
00753C9E  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00753CA1  7E 29                     JLE 0x00753ccc
LAB_00753ca3:
00753CA3  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00753CA6  8B DE                     MOV EBX,ESI
00753CA8  66 8B 48 34               MOV CX,word ptr [EAX + 0x34]
00753CAC  66 85 C9                  TEST CX,CX
00753CAF  74 05                     JZ 0x00753cb6
00753CB1  0F BF C1                  MOVSX EAX,CX
00753CB4  EB 0B                     JMP 0x00753cc1
LAB_00753cb6:
00753CB6  8D 4C 16 18               LEA ECX,[ESI + EDX*0x1 + 0x18]
00753CBA  51                        PUSH ECX
00753CBB  FF 50 08                  CALL dword ptr [EAX + 0x8]
00753CBE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
LAB_00753cc1:
00753CC1  8D 74 06 08               LEA ESI,[ESI + EAX*0x1 + 0x8]
00753CC5  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00753CC8  3B F0                     CMP ESI,EAX
00753CCA  7C D7                     JL 0x00753ca3
LAB_00753ccc:
00753CCC  8B 7F 0C                  MOV EDI,dword ptr [EDI + 0xc]
00753CCF  8B C3                     MOV EAX,EBX
00753CD1  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
00753CD4  89 5C D7 44               MOV dword ptr [EDI + EDX*0x8 + 0x44],EBX
00753CD8  5F                        POP EDI
00753CD9  5E                        POP ESI
00753CDA  5B                        POP EBX
00753CDB  5D                        POP EBP
00753CDC  C2 08 00                  RET 0x8
