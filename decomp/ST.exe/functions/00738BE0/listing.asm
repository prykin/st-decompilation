FUN_00738be0:
00738BE0  55                        PUSH EBP
00738BE1  8B EC                     MOV EBP,ESP
00738BE3  51                        PUSH ECX
00738BE4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00738BE7  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
00738BEA  72 04                     JC 0x00738bf0
00738BEC  33 C0                     XOR EAX,EAX
00738BEE  EB 78                     JMP 0x00738c68
LAB_00738bf0:
00738BF0  83 3D 6C A3 85 00 00      CMP dword ptr [0x0085a36c],0x0
00738BF7  75 0E                     JNZ 0x00738c07
00738BF9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00738BFC  83 E9 01                  SUB ECX,0x1
00738BFF  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00738C02  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00738C05  EB 61                     JMP 0x00738c68
LAB_00738c07:
00738C07  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00738C0A  83 EA 01                  SUB EDX,0x1
00738C0D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00738C10  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00738C13  33 C9                     XOR ECX,ECX
00738C15  8A 08                     MOV CL,byte ptr [EAX]
00738C17  33 D2                     XOR EDX,EDX
00738C19  8A 91 81 A4 85 00         MOV DL,byte ptr [ECX + 0x85a481]
00738C1F  83 E2 04                  AND EDX,0x4
00738C22  85 D2                     TEST EDX,EDX
00738C24  74 08                     JZ 0x00738c2e
00738C26  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00738C29  83 E8 01                  SUB EAX,0x1
00738C2C  EB 3A                     JMP 0x00738c68
LAB_00738c2e:
00738C2E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00738C31  83 E8 01                  SUB EAX,0x1
00738C34  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00738C37  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00738C3A  3B 4D FC                  CMP ECX,dword ptr [EBP + -0x4]
00738C3D  77 18                     JA 0x00738c57
00738C3F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00738C42  33 C0                     XOR EAX,EAX
00738C44  8A 02                     MOV AL,byte ptr [EDX]
00738C46  33 C9                     XOR ECX,ECX
00738C48  8A 88 81 A4 85 00         MOV CL,byte ptr [EAX + 0x85a481]
00738C4E  83 E1 04                  AND ECX,0x4
00738C51  85 C9                     TEST ECX,ECX
00738C53  74 02                     JZ 0x00738c57
00738C55  EB D7                     JMP 0x00738c2e
LAB_00738c57:
00738C57  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00738C5A  83 E8 01                  SUB EAX,0x1
00738C5D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00738C60  2B 55 FC                  SUB EDX,dword ptr [EBP + -0x4]
00738C63  83 E2 01                  AND EDX,0x1
00738C66  2B C2                     SUB EAX,EDX
LAB_00738c68:
00738C68  8B E5                     MOV ESP,EBP
00738C6A  5D                        POP EBP
00738C6B  C3                        RET
