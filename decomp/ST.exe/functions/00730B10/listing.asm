FUN_00730b10:
00730B10  55                        PUSH EBP
00730B11  8B EC                     MOV EBP,ESP
00730B13  83 EC 14                  SUB ESP,0x14
00730B16  53                        PUSH EBX
00730B17  56                        PUSH ESI
00730B18  57                        PUSH EDI
00730B19  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00730B1C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00730B1F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00730B22  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_00730b25:
00730B25  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
00730B29  75 1E                     JNZ 0x00730b49
00730B2B  68 74 FE 79 00            PUSH 0x79fe74
00730B30  6A 00                     PUSH 0x0
00730B32  6A 3B                     PUSH 0x3b
00730B34  68 24 FF 79 00            PUSH 0x79ff24
00730B39  6A 02                     PUSH 0x2
00730B3B  E8 60 04 00 00            CALL 0x00730fa0
00730B40  83 C4 14                  ADD ESP,0x14
00730B43  83 F8 01                  CMP EAX,0x1
00730B46  75 01                     JNZ 0x00730b49
00730B48  CC                        INT3
LAB_00730b49:
00730B49  33 D2                     XOR EDX,EDX
00730B4B  85 D2                     TEST EDX,EDX
00730B4D  75 D6                     JNZ 0x00730b25
LAB_00730b4f:
00730B4F  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00730B53  75 1E                     JNZ 0x00730b73
00730B55  68 50 FE 79 00            PUSH 0x79fe50
00730B5A  6A 00                     PUSH 0x0
00730B5C  6A 3C                     PUSH 0x3c
00730B5E  68 24 FF 79 00            PUSH 0x79ff24
00730B63  6A 02                     PUSH 0x2
00730B65  E8 36 04 00 00            CALL 0x00730fa0
00730B6A  83 C4 14                  ADD ESP,0x14
00730B6D  83 F8 01                  CMP EAX,0x1
00730B70  75 01                     JNZ 0x00730b73
00730B72  CC                        INT3
LAB_00730b73:
00730B73  33 C0                     XOR EAX,EAX
00730B75  85 C0                     TEST EAX,EAX
00730B77  75 D6                     JNZ 0x00730b4f
00730B79  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00730B7D  7F 07                     JG 0x00730b86
00730B7F  33 C0                     XOR EAX,EAX
00730B81  E9 A8 00 00 00            JMP 0x00730c2e
LAB_00730b86:
00730B86  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00730B89  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00730b8c:
00730B8C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00730B8F  83 EA 01                  SUB EDX,0x1
00730B92  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00730B95  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00730B99  0F 84 86 00 00 00         JZ 0x00730c25
00730B9F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00730BA2  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00730BA5  83 E9 01                  SUB ECX,0x1
00730BA8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00730BAB  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00730BAE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00730BB1  83 78 04 00               CMP dword ptr [EAX + 0x4],0x0
00730BB5  7C 1F                     JL 0x00730bd6
00730BB7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00730BBA  8B 11                     MOV EDX,dword ptr [ECX]
00730BBC  0F BE 02                  MOVSX EAX,byte ptr [EDX]
00730BBF  25 FF 00 00 00            AND EAX,0xff
00730BC4  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00730BC7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00730BCA  8B 11                     MOV EDX,dword ptr [ECX]
00730BCC  83 C2 01                  ADD EDX,0x1
00730BCF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00730BD2  89 10                     MOV dword ptr [EAX],EDX
00730BD4  EB 0F                     JMP 0x00730be5
LAB_00730bd6:
00730BD6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00730BD9  51                        PUSH ECX
00730BDA  E8 91 C1 00 00            CALL 0x0073cd70
00730BDF  83 C4 04                  ADD ESP,0x4
00730BE2  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_00730be5:
00730BE5  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00730BE8  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00730BEB  83 7D F4 FF               CMP dword ptr [EBP + -0xc],-0x1
00730BEF  75 13                     JNZ 0x00730c04
00730BF1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00730BF4  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
00730BF7  75 09                     JNZ 0x00730c02
00730BF9  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00730C00  EB 29                     JMP 0x00730c2b
LAB_00730c02:
00730C02  EB 21                     JMP 0x00730c25
LAB_00730c04:
00730C04  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00730C07  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
00730C0A  88 11                     MOV byte ptr [ECX],DL
00730C0C  0F BE 45 F4               MOVSX EAX,byte ptr [EBP + -0xc]
00730C10  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00730C13  83 C1 01                  ADD ECX,0x1
00730C16  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00730C19  83 F8 0A                  CMP EAX,0xa
00730C1C  75 02                     JNZ 0x00730c20
00730C1E  EB 05                     JMP 0x00730c25
LAB_00730c20:
00730C20  E9 67 FF FF FF            JMP 0x00730b8c
LAB_00730c25:
00730C25  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00730C28  C6 02 00                  MOV byte ptr [EDX],0x0
LAB_00730c2b:
00730C2B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_00730c2e:
00730C2E  5F                        POP EDI
00730C2F  5E                        POP ESI
00730C30  5B                        POP EBX
00730C31  8B E5                     MOV ESP,EBP
00730C33  5D                        POP EBP
00730C34  C3                        RET
