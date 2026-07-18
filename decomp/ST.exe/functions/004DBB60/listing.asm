FUN_004dbb60:
004DBB60  55                        PUSH EBP
004DBB61  8B EC                     MOV EBP,ESP
004DBB63  53                        PUSH EBX
004DBB64  56                        PUSH ESI
004DBB65  57                        PUSH EDI
004DBB66  8B F9                     MOV EDI,ECX
004DBB68  33 F6                     XOR ESI,ESI
004DBB6A  8D 87 D0 04 00 00         LEA EAX,[EDI + 0x4d0]
LAB_004dbb70:
004DBB70  83 38 00                  CMP dword ptr [EAX],0x0
004DBB73  74 12                     JZ 0x004dbb87
004DBB75  46                        INC ESI
004DBB76  83 C0 04                  ADD EAX,0x4
004DBB79  83 FE 02                  CMP ESI,0x2
004DBB7C  7C F2                     JL 0x004dbb70
004DBB7E  5F                        POP EDI
004DBB7F  5E                        POP ESI
004DBB80  33 C0                     XOR EAX,EAX
004DBB82  5B                        POP EBX
004DBB83  5D                        POP EBP
004DBB84  C2 08 00                  RET 0x8
LAB_004dbb87:
004DBB87  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004DBB8A  8B CB                     MOV ECX,EBX
004DBB8C  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
004DBB8F  89 84 B7 D0 04 00 00      MOV dword ptr [EDI + ESI*0x4 + 0x4d0],EAX
004DBB96  8B 13                     MOV EDX,dword ptr [EBX]
004DBB98  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004DBB9B  89 84 B7 D8 04 00 00      MOV dword ptr [EDI + ESI*0x4 + 0x4d8],EAX
004DBBA2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004DBBA5  83 F8 64                  CMP EAX,0x64
004DBBA8  89 84 B7 E0 04 00 00      MOV dword ptr [EDI + ESI*0x4 + 0x4e0],EAX
004DBBAF  7E 0B                     JLE 0x004dbbbc
004DBBB1  C7 84 B7 E0 04 00 00 64 00 00 00  MOV dword ptr [EDI + ESI*0x4 + 0x4e0],0x64
LAB_004dbbbc:
004DBBBC  8B 84 B7 E0 04 00 00      MOV EAX,dword ptr [EDI + ESI*0x4 + 0x4e0]
004DBBC3  85 C0                     TEST EAX,EAX
004DBBC5  7D 0B                     JGE 0x004dbbd2
004DBBC7  C7 84 B7 E0 04 00 00 00 00 00 00  MOV dword ptr [EDI + ESI*0x4 + 0x4e0],0x0
LAB_004dbbd2:
004DBBD2  BA 35 01 00 00            MOV EDX,0x135
004DBBD7  C7 84 B7 E8 04 00 00 01 00 00 00  MOV dword ptr [EDI + ESI*0x4 + 0x4e8],0x1
004DBBE2  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004DBBE5  8B 8C B7 E0 04 00 00      MOV ECX,dword ptr [EDI + ESI*0x4 + 0x4e0]
004DBBEC  2B D6                     SUB EDX,ESI
004DBBEE  89 83 C4 04 00 00         MOV dword ptr [EBX + 0x4c4],EAX
004DBBF4  89 8B C0 04 00 00         MOV dword ptr [EBX + 0x4c0],ECX
004DBBFA  8B 0C 97                  MOV ECX,dword ptr [EDI + EDX*0x4]
004DBBFD  8D 04 97                  LEA EAX,[EDI + EDX*0x4]
004DBC00  85 C9                     TEST ECX,ECX
004DBC02  74 55                     JZ 0x004dbc59
004DBC04  B9 39 01 00 00            MOV ECX,0x139
004DBC09  BA 64 00 00 00            MOV EDX,0x64
004DBC0E  2B CE                     SUB ECX,ESI
004DBC10  8D 1C 8F                  LEA EBX,[EDI + ECX*0x4]
004DBC13  8B 8C B7 E0 04 00 00      MOV ECX,dword ptr [EDI + ESI*0x4 + 0x4e0]
004DBC1A  2B D1                     SUB EDX,ECX
004DBC1C  B9 3B 01 00 00            MOV ECX,0x13b
004DBC21  2B CE                     SUB ECX,ESI
004DBC23  89 13                     MOV dword ptr [EBX],EDX
004DBC25  83 3C 8F 00               CMP dword ptr [EDI + ECX*0x4],0x0
004DBC29  74 2E                     JZ 0x004dbc59
004DBC2B  8B 00                     MOV EAX,dword ptr [EAX]
004DBC2D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DBC33  8D 55 08                  LEA EDX,[EBP + 0x8]
004DBC36  52                        PUSH EDX
004DBC37  50                        PUSH EAX
004DBC38  E8 93 A6 20 00            CALL 0x006e62d0
004DBC3D  85 C0                     TEST EAX,EAX
004DBC3F  75 18                     JNZ 0x004dbc59
004DBC41  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004DBC44  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
004DBC47  8B 88 C4 04 00 00         MOV ECX,dword ptr [EAX + 0x4c4]
004DBC4D  3B CA                     CMP ECX,EDX
004DBC4F  75 08                     JNZ 0x004dbc59
004DBC51  8B 13                     MOV EDX,dword ptr [EBX]
004DBC53  89 90 C0 04 00 00         MOV dword ptr [EAX + 0x4c0],EDX
LAB_004dbc59:
004DBC59  5F                        POP EDI
004DBC5A  5E                        POP ESI
004DBC5B  33 C0                     XOR EAX,EAX
004DBC5D  5B                        POP EBX
004DBC5E  5D                        POP EBP
004DBC5F  C2 08 00                  RET 0x8
