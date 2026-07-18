FUN_00651b40:
00651B40  55                        PUSH EBP
00651B41  8B EC                     MOV EBP,ESP
00651B43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00651B46  33 C9                     XOR ECX,ECX
00651B48  B2 08                     MOV DL,0x8
LAB_00651b4a:
00651B4A  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00651B51  75 51                     JNZ 0x00651ba4
00651B53  41                        INC ECX
00651B54  83 F9 04                  CMP ECX,0x4
00651B57  7C F1                     JL 0x00651b4a
00651B59  66 8B 08                  MOV CX,word ptr [EAX]
00651B5C  66 83 F9 05               CMP CX,0x5
00651B60  7D 09                     JGE 0x00651b6b
00651B62  C7 40 18 DD 00 00 00      MOV dword ptr [EAX + 0x18],0xdd
00651B69  EB 08                     JMP 0x00651b73
LAB_00651b6b:
00651B6B  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
00651B71  75 31                     JNZ 0x00651ba4
LAB_00651b73:
00651B73  66 83 F9 06               CMP CX,0x6
00651B77  7D 09                     JGE 0x00651b82
00651B79  C7 40 1C 00 00 00 00      MOV dword ptr [EAX + 0x1c],0x0
00651B80  EB 08                     JMP 0x00651b8a
LAB_00651b82:
00651B82  38 90 D5 00 00 00         CMP byte ptr [EAX + 0xd5],DL
00651B88  75 1A                     JNZ 0x00651ba4
LAB_00651b8a:
00651B8A  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00651B8D  85 C9                     TEST ECX,ECX
00651B8F  7C 13                     JL 0x00651ba4
00651B91  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00651B94  85 C0                     TEST EAX,EAX
00651B96  7C 0C                     JL 0x00651ba4
00651B98  83 F8 02                  CMP EAX,0x2
00651B9B  7F 07                     JG 0x00651ba4
00651B9D  B8 01 00 00 00            MOV EAX,0x1
00651BA2  5D                        POP EBP
00651BA3  C3                        RET
LAB_00651ba4:
00651BA4  33 C0                     XOR EAX,EAX
00651BA6  5D                        POP EBP
00651BA7  C3                        RET
