FUN_00690b90:
00690B90  55                        PUSH EBP
00690B91  8B EC                     MOV EBP,ESP
00690B93  83 EC 54                  SUB ESP,0x54
00690B96  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00690B9B  53                        PUSH EBX
00690B9C  56                        PUSH ESI
00690B9D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00690BA0  33 DB                     XOR EBX,EBX
00690BA2  57                        PUSH EDI
00690BA3  8D 55 B0                  LEA EDX,[EBP + -0x50]
00690BA6  8D 4D AC                  LEA ECX,[EBP + -0x54]
00690BA9  53                        PUSH EBX
00690BAA  52                        PUSH EDX
00690BAB  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00690BAE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00690BB4  E8 37 CC 09 00            CALL 0x0072d7f0
00690BB9  8B F0                     MOV ESI,EAX
00690BBB  83 C4 08                  ADD ESP,0x8
00690BBE  3B F3                     CMP ESI,EBX
00690BC0  0F 85 AE 01 00 00         JNZ 0x00690d74
00690BC6  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00690BCB  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00690BCE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00690BD1  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00690BD7  89 8F 2C 01 00 00         MOV dword ptr [EDI + 0x12c],ECX
00690BDD  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00690BE0  3D 0F 01 00 00            CMP EAX,0x10f
00690BE5  0F 87 E4 00 00 00         JA 0x00690ccf
00690BEB  0F 84 A2 00 00 00         JZ 0x00690c93
00690BF1  2B C3                     SUB EAX,EBX
00690BF3  74 6D                     JZ 0x00690c62
00690BF5  83 E8 02                  SUB EAX,0x2
00690BF8  74 13                     JZ 0x00690c0d
00690BFA  48                        DEC EAX
00690BFB  0F 85 58 01 00 00         JNZ 0x00690d59
00690C01  8B CF                     MOV ECX,EDI
00690C03  E8 44 1C D7 FF            CALL 0x0040284c
00690C08  E9 4C 01 00 00            JMP 0x00690d59
LAB_00690c0d:
00690C0D  8B 5E 14                  MOV EBX,dword ptr [ESI + 0x14]
00690C10  85 DB                     TEST EBX,EBX
00690C12  75 18                     JNZ 0x00690c2c
00690C14  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00690C1A  68 5E 04 00 00            PUSH 0x45e
00690C1F  68 E0 56 7D 00            PUSH 0x7d56e0
00690C24  52                        PUSH EDX
00690C25  6A FA                     PUSH -0x6
00690C27  E8 14 52 01 00            CALL 0x006a5e40
LAB_00690c2c:
00690C2C  53                        PUSH EBX
00690C2D  8B CF                     MOV ECX,EDI
00690C2F  E8 95 2B D7 FF            CALL 0x004037c9
00690C34  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00690C37  85 C0                     TEST EAX,EAX
00690C39  75 0A                     JNZ 0x00690c45
00690C3B  A1 54 87 80 00            MOV EAX,[0x00808754]
00690C40  89 47 1C                  MOV dword ptr [EDI + 0x1c],EAX
00690C43  EB 06                     JMP 0x00690c4b
LAB_00690c45:
00690C45  8B 4F 7E                  MOV ECX,dword ptr [EDI + 0x7e]
00690C48  89 4F 1C                  MOV dword ptr [EDI + 0x1c],ECX
LAB_00690c4b:
00690C4B  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
00690C4E  85 C0                     TEST EAX,EAX
00690C50  0F 85 03 01 00 00         JNZ 0x00690d59
00690C56  8B CF                     MOV ECX,EDI
00690C58  E8 E4 3A D7 FF            CALL 0x00404741
00690C5D  E9 F7 00 00 00            JMP 0x00690d59
LAB_00690c62:
00690C62  39 9F 99 00 00 00         CMP dword ptr [EDI + 0x99],EBX
00690C68  75 16                     JNZ 0x00690c80
00690C6A  8B CF                     MOV ECX,EDI
00690C6C  C7 87 99 00 00 00 01 00 00 00  MOV dword ptr [EDI + 0x99],0x1
00690C76  E8 04 20 D7 FF            CALL 0x00402c7f
00690C7B  E9 D9 00 00 00            JMP 0x00690d59
LAB_00690c80:
00690C80  8B CF                     MOV ECX,EDI
00690C82  E8 C2 1E D7 FF            CALL 0x00402b49
00690C87  8B CF                     MOV ECX,EDI
00690C89  E8 0A 39 D7 FF            CALL 0x00404598
00690C8E  E9 C6 00 00 00            JMP 0x00690d59
LAB_00690c93:
00690C93  8D 55 F8                  LEA EDX,[EBP + -0x8]
00690C96  8B CF                     MOV ECX,EDI
00690C98  52                        PUSH EDX
00690C99  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00690C9C  E8 70 38 D7 FF            CALL 0x00404511
00690CA1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00690CA4  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
00690CA7  51                        PUSH ECX
00690CA8  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00690CAE  50                        PUSH EAX
00690CAF  52                        PUSH EDX
00690CB0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00690CB3  E8 41 19 D7 FF            CALL 0x004025f9
00690CB8  39 5D F4                  CMP dword ptr [EBP + -0xc],EBX
00690CBB  0F 84 98 00 00 00         JZ 0x00690d59
00690CC1  8D 45 F4                  LEA EAX,[EBP + -0xc]
00690CC4  50                        PUSH EAX
00690CC5  E8 96 A3 01 00            CALL 0x006ab060
00690CCA  E9 8A 00 00 00            JMP 0x00690d59
LAB_00690ccf:
00690CCF  3D 11 01 00 00            CMP EAX,0x111
00690CD4  74 11                     JZ 0x00690ce7
00690CD6  3D D5 5D 00 00            CMP EAX,0x5dd5
00690CDB  75 7C                     JNZ 0x00690d59
00690CDD  56                        PUSH ESI
00690CDE  8B CF                     MOV ECX,EDI
00690CE0  E8 FD 39 D7 FF            CALL 0x004046e2
00690CE5  EB 72                     JMP 0x00690d59
LAB_00690ce7:
00690CE7  8B 87 A5 00 00 00         MOV EAX,dword ptr [EDI + 0xa5]
00690CED  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00690CF0  85 C9                     TEST ECX,ECX
00690CF2  7E 65                     JLE 0x00690d59
00690CF4  3B D9                     CMP EBX,ECX
LAB_00690cf6:
00690CF6  73 0D                     JNC 0x00690d05
00690CF8  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00690CFB  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00690CFE  0F AF F3                  IMUL ESI,EBX
00690D01  03 F1                     ADD ESI,ECX
00690D03  EB 02                     JMP 0x00690d07
LAB_00690d05:
00690D05  33 F6                     XOR ESI,ESI
LAB_00690d07:
00690D07  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00690D0E  8B 06                     MOV EAX,dword ptr [ESI]
00690D10  85 C0                     TEST EAX,EAX
00690D12  74 29                     JZ 0x00690d3d
00690D14  8D 4D FC                  LEA ECX,[EBP + -0x4]
00690D17  51                        PUSH ECX
00690D18  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00690D1E  50                        PUSH EAX
00690D1F  E8 AC 55 05 00            CALL 0x006e62d0
00690D24  85 C0                     TEST EAX,EAX
00690D26  75 15                     JNZ 0x00690d3d
00690D28  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00690D2B  85 C0                     TEST EAX,EAX
00690D2D  74 0E                     JZ 0x00690d3d
00690D2F  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
00690D32  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00690D35  89 BA 84 02 00 00         MOV dword ptr [EDX + 0x284],EDI
00690D3B  EB 0D                     JMP 0x00690d4a
LAB_00690d3d:
00690D3D  C7 46 04 00 00 00 00      MOV dword ptr [ESI + 0x4],0x0
00690D44  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_00690d4a:
00690D4A  8B 87 A5 00 00 00         MOV EAX,dword ptr [EDI + 0xa5]
00690D50  43                        INC EBX
00690D51  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
00690D54  7C A0                     JL 0x00690cf6
00690D56  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_00690d59:
00690D59  56                        PUSH ESI
00690D5A  8B CF                     MOV ECX,EDI
00690D5C  E8 6F 52 05 00            CALL 0x006e5fd0
00690D61  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00690D64  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00690D69  33 C0                     XOR EAX,EAX
00690D6B  5F                        POP EDI
00690D6C  5E                        POP ESI
00690D6D  5B                        POP EBX
00690D6E  8B E5                     MOV ESP,EBP
00690D70  5D                        POP EBP
00690D71  C2 04 00                  RET 0x4
LAB_00690d74:
00690D74  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00690D77  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00690D7A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00690D80  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00690D83  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
00690D86  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00690D89  50                        PUSH EAX
00690D8A  52                        PUSH EDX
00690D8B  68 B8 58 7D 00            PUSH 0x7d58b8
00690D90  56                        PUSH ESI
00690D91  53                        PUSH EBX
00690D92  68 AD 04 00 00            PUSH 0x4ad
00690D97  68 E0 56 7D 00            PUSH 0x7d56e0
00690D9C  E8 2F C7 01 00            CALL 0x006ad4d0
00690DA1  83 C4 1C                  ADD ESP,0x1c
00690DA4  85 C0                     TEST EAX,EAX
00690DA6  74 01                     JZ 0x00690da9
00690DA8  CC                        INT3
LAB_00690da9:
00690DA9  68 AE 04 00 00            PUSH 0x4ae
00690DAE  68 E0 56 7D 00            PUSH 0x7d56e0
00690DB3  53                        PUSH EBX
00690DB4  56                        PUSH ESI
00690DB5  E8 86 50 01 00            CALL 0x006a5e40
00690DBA  5F                        POP EDI
00690DBB  5E                        POP ESI
00690DBC  B8 FF FF 00 00            MOV EAX,0xffff
00690DC1  5B                        POP EBX
00690DC2  8B E5                     MOV ESP,EBP
00690DC4  5D                        POP EBP
00690DC5  C2 04 00                  RET 0x4
