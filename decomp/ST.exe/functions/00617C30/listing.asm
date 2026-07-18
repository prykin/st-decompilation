FUN_00617c30:
00617C30  55                        PUSH EBP
00617C31  8B EC                     MOV EBP,ESP
00617C33  8B 51 5E                  MOV EDX,dword ptr [ECX + 0x5e]
00617C36  53                        PUSH EBX
00617C37  56                        PUSH ESI
00617C38  57                        PUSH EDI
00617C39  85 D2                     TEST EDX,EDX
00617C3B  74 35                     JZ 0x00617c72
00617C3D  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
00617C40  33 C9                     XOR ECX,ECX
00617C42  85 F6                     TEST ESI,ESI
00617C44  7E 2C                     JLE 0x00617c72
00617C46  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00617C49  3B CE                     CMP ECX,ESI
LAB_00617c4b:
00617C4B  73 0D                     JNC 0x00617c5a
00617C4D  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00617C50  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
00617C53  0F AF C1                  IMUL EAX,ECX
00617C56  03 C3                     ADD EAX,EBX
00617C58  EB 02                     JMP 0x00617c5c
LAB_00617c5a:
00617C5A  33 C0                     XOR EAX,EAX
LAB_00617c5c:
00617C5C  0F BF 58 0A               MOVSX EBX,word ptr [EAX + 0xa]
00617C60  3B 5D 08                  CMP EBX,dword ptr [EBP + 0x8]
00617C63  75 08                     JNZ 0x00617c6d
00617C65  0F BF 40 0C               MOVSX EAX,word ptr [EAX + 0xc]
00617C69  3B C7                     CMP EAX,EDI
00617C6B  74 05                     JZ 0x00617c72
LAB_00617c6d:
00617C6D  41                        INC ECX
00617C6E  3B CE                     CMP ECX,ESI
00617C70  7C D9                     JL 0x00617c4b
LAB_00617c72:
00617C72  5F                        POP EDI
00617C73  5E                        POP ESI
00617C74  B8 01 00 00 00            MOV EAX,0x1
00617C79  5B                        POP EBX
00617C7A  5D                        POP EBP
00617C7B  C2 08 00                  RET 0x8
