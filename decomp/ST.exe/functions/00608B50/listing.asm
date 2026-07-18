FUN_00608b50:
00608B50  55                        PUSH EBP
00608B51  8B EC                     MOV EBP,ESP
00608B53  81 EC C8 00 00 00         SUB ESP,0xc8
00608B59  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00608B5C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00608B5F  53                        PUSH EBX
00608B60  56                        PUSH ESI
00608B61  8B F1                     MOV ESI,ECX
00608B63  25 FF FF 00 00            AND EAX,0xffff
00608B68  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00608B6B  57                        PUSH EDI
00608B6C  81 E2 FF FF 00 00         AND EDX,0xffff
00608B72  81 E1 FF FF 00 00         AND ECX,0xffff
00608B78  50                        PUSH EAX
00608B79  8D 58 CE                  LEA EBX,[EAX + -0x32]
00608B7C  52                        PUSH EDX
00608B7D  51                        PUSH ECX
00608B7E  53                        PUSH EBX
00608B7F  33 FF                     XOR EDI,EDI
00608B81  52                        PUSH EDX
00608B82  51                        PUSH ECX
00608B83  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00608B86  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00608B89  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00608B8C  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00608B8F  E8 79 43 0A 00            CALL 0x006acf0d
00608B94  8B 8E FD 01 00 00         MOV ECX,dword ptr [ESI + 0x1fd]
00608B9A  83 C4 18                  ADD ESP,0x18
00608B9D  8B C1                     MOV EAX,ECX
00608B9F  2B C7                     SUB EAX,EDI
00608BA1  74 22                     JZ 0x00608bc5
00608BA3  48                        DEC EAX
00608BA4  74 11                     JZ 0x00608bb7
00608BA6  48                        DEC EAX
00608BA7  74 28                     JZ 0x00608bd1
00608BA9  BF 09 00 00 00            MOV EDI,0x9
00608BAE  C7 45 FC 05 00 00 00      MOV dword ptr [EBP + -0x4],0x5
00608BB5  EB 1A                     JMP 0x00608bd1
LAB_00608bb7:
00608BB7  BF 01 00 00 00            MOV EDI,0x1
00608BBC  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00608BC3  EB 0C                     JMP 0x00608bd1
LAB_00608bc5:
00608BC5  BF 03 00 00 00            MOV EDI,0x3
00608BCA  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
LAB_00608bd1:
00608BD1  85 C9                     TEST ECX,ECX
00608BD3  75 21                     JNZ 0x00608bf6
00608BD5  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00608BD8  8D 4F FF                  LEA ECX,[EDI + -0x1]
00608BDB  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00608BE1  05 39 30 00 00            ADD EAX,0x3039
00608BE6  33 D2                     XOR EDX,EDX
00608BE8  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00608BEB  C1 E8 10                  SHR EAX,0x10
00608BEE  F7 F1                     DIV ECX
00608BF0  8B DA                     MOV EBX,EDX
00608BF2  03 DF                     ADD EBX,EDI
00608BF4  EB 02                     JMP 0x00608bf8
LAB_00608bf6:
00608BF6  8B DF                     MOV EBX,EDI
LAB_00608bf8:
00608BF8  B9 08 00 00 00            MOV ECX,0x8
00608BFD  33 C0                     XOR EAX,EAX
00608BFF  8D 7D 88                  LEA EDI,[EBP + -0x78]
00608C02  53                        PUSH EBX
00608C03  F3 AB                     STOSD.REP ES:EDI
00608C05  8B CE                     MOV ECX,ESI
00608C07  C7 45 98 02 00 00 00      MOV dword ptr [EBP + -0x68],0x2
00608C0E  E8 79 B1 DF FF            CALL 0x00403d8c
00608C13  3B C3                     CMP EAX,EBX
00608C15  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00608C18  74 0C                     JZ 0x00608c26
00608C1A  5F                        POP EDI
00608C1B  5E                        POP ESI
00608C1C  83 C8 FF                  OR EAX,0xffffffff
00608C1F  5B                        POP EBX
00608C20  8B E5                     MOV ESP,EBP
00608C22  5D                        POP EBP
00608C23  C2 24 00                  RET 0x24
LAB_00608c26:
00608C26  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00608C29  85 D2                     TEST EDX,EDX
00608C2B  7E 35                     JLE 0x00608c62
00608C2D  8D 8D 38 FF FF FF         LEA ECX,[EBP + 0xffffff38]
00608C33  8B FA                     MOV EDI,EDX
LAB_00608c35:
00608C35  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00608C38  BB 03 00 00 00            MOV EBX,0x3
00608C3D  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00608C43  83 C1 04                  ADD ECX,0x4
00608C46  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00608C4C  33 D2                     XOR EDX,EDX
00608C4E  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00608C51  C1 E8 10                  SHR EAX,0x10
00608C54  F7 F3                     DIV EBX
00608C56  4F                        DEC EDI
00608C57  89 51 FC                  MOV dword ptr [ECX + -0x4],EDX
00608C5A  75 D9                     JNZ 0x00608c35
00608C5C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00608C5F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_00608c62:
00608C62  3B D0                     CMP EDX,EAX
00608C64  7D 36                     JGE 0x00608c9c
00608C66  8B F8                     MOV EDI,EAX
00608C68  8D 8C 95 38 FF FF FF      LEA ECX,[EBP + EDX*0x4 + 0xffffff38]
00608C6F  2B FA                     SUB EDI,EDX
LAB_00608c71:
00608C71  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00608C74  33 D2                     XOR EDX,EDX
00608C76  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00608C7C  05 39 30 00 00            ADD EAX,0x3039
00608C81  BB 03 00 00 00            MOV EBX,0x3
00608C86  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00608C89  83 C1 04                  ADD ECX,0x4
00608C8C  C1 E8 10                  SHR EAX,0x10
00608C8F  F7 F3                     DIV EBX
00608C91  03 D3                     ADD EDX,EBX
00608C93  4F                        DEC EDI
00608C94  89 51 FC                  MOV dword ptr [ECX + -0x4],EDX
00608C97  75 D8                     JNZ 0x00608c71
00608C99  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_00608c9c:
00608C9C  33 D2                     XOR EDX,EDX
00608C9E  33 DB                     XOR EBX,EBX
00608CA0  3B C2                     CMP EAX,EDX
00608CA2  0F 8E 23 01 00 00         JLE 0x00608dcb
00608CA8  8D 8D 38 FF FF FF         LEA ECX,[EBP + 0xffffff38]
00608CAE  8D 86 19 02 00 00         LEA EAX,[ESI + 0x219]
00608CB4  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00608CB7  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00608CBA  EB 02                     JMP 0x00608cbe
LAB_00608cbc:
00608CBC  33 D2                     XOR EDX,EDX
LAB_00608cbe:
00608CBE  B9 11 00 00 00            MOV ECX,0x11
00608CC3  33 C0                     XOR EAX,EAX
00608CC5  8D 7D A8                  LEA EDI,[EBP + -0x58]
00608CC8  F3 AB                     STOSD.REP ES:EDI
00608CCA  8A 4D 28                  MOV CL,byte ptr [EBP + 0x28]
00608CCD  66 AB                     STOSW ES:EDI
00608CCF  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00608CD2  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
00608CD5  C7 45 A8 64 00 00 00      MOV dword ptr [EBP + -0x58],0x64
00608CDC  C7 45 AC FF 00 00 00      MOV dword ptr [EBP + -0x54],0xff
00608CE3  8B 08                     MOV ECX,dword ptr [EAX]
00608CE5  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00608CE8  3B C2                     CMP EAX,EDX
00608CEA  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
00608CED  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
00608CF0  89 5D EA                  MOV dword ptr [EBP + -0x16],EBX
00608CF3  7E 03                     JLE 0x00608cf8
00608CF5  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_00608cf8:
00608CF8  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00608CFB  80 CD 04                  OR CH,0x4
00608CFE  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00608D04  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
00608D07  B9 3D 00 00 00            MOV ECX,0x3d
00608D0C  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00608D12  33 D2                     XOR EDX,EDX
00608D14  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00608D17  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00608D1A  C1 E8 10                  SHR EAX,0x10
00608D1D  83 E0 03                  AND EAX,0x3
00608D20  C6 45 E9 01               MOV byte ptr [EBP + -0x17],0x1
00608D24  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00608D27  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00608D2A  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00608D30  05 39 30 00 00            ADD EAX,0x3039
00608D35  C7 45 E0 C4 09 00 00      MOV dword ptr [EBP + -0x20],0x9c4
00608D3C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00608D3F  C1 E8 10                  SHR EAX,0x10
00608D42  F7 F1                     DIV ECX
00608D44  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00608D47  B8 78 00 00 00            MOV EAX,0x78
00608D4C  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00608D52  2B C2                     SUB EAX,EDX
00608D54  33 D2                     XOR EDX,EDX
00608D56  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00608D59  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
00608D5F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00608D62  B9 69 01 00 00            MOV ECX,0x169
00608D67  C1 E8 10                  SHR EAX,0x10
00608D6A  F7 F1                     DIV ECX
00608D6C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00608D6F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00608D72  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00608D75  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
00608D78  8D 4D 88                  LEA ECX,[EBP + -0x78]
00608D7B  51                        PUSH ECX
00608D7C  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00608D7F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00608D82  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00608D85  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00608D88  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00608D8E  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00608D94  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00608D97  8B 0F                     MOV ECX,dword ptr [EDI]
00608D99  C1 E8 10                  SHR EAX,0x10
00608D9C  83 E0 03                  AND EAX,0x3
00608D9F  83 C0 09                  ADD EAX,0x9
00608DA2  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00608DA5  8D 45 A8                  LEA EAX,[EBP + -0x58]
00608DA8  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
00608DAB  E8 EA CE DF FF            CALL 0x00405c9a
00608DB0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00608DB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00608DB6  43                        INC EBX
00608DB7  83 C2 04                  ADD EDX,0x4
00608DBA  83 C7 04                  ADD EDI,0x4
00608DBD  3B D8                     CMP EBX,EAX
00608DBF  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00608DC2  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00608DC5  0F 8C F1 FE FF FF         JL 0x00608cbc
LAB_00608dcb:
00608DCB  5F                        POP EDI
00608DCC  5E                        POP ESI
00608DCD  5B                        POP EBX
00608DCE  8B E5                     MOV ESP,EBP
00608DD0  5D                        POP EBP
00608DD1  C2 24 00                  RET 0x24
