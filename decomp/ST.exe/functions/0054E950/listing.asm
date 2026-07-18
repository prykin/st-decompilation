STPlaySystemC::AddToRep:
0054E950  55                        PUSH EBP
0054E951  8B EC                     MOV EBP,ESP
0054E953  83 EC 4C                  SUB ESP,0x4c
0054E956  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054E959  56                        PUSH ESI
0054E95A  85 C0                     TEST EAX,EAX
0054E95C  57                        PUSH EDI
0054E95D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0054E960  0F 84 E5 00 00 00         JZ 0x0054ea4b
0054E966  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0054E969  85 C0                     TEST EAX,EAX
0054E96B  0F 84 DA 00 00 00         JZ 0x0054ea4b
0054E971  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054E976  8D 55 B8                  LEA EDX,[EBP + -0x48]
0054E979  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0054E97C  6A 00                     PUSH 0x0
0054E97E  52                        PUSH EDX
0054E97F  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0054E982  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054E988  E8 63 EE 1D 00            CALL 0x0072d7f0
0054E98D  8B F0                     MOV ESI,EAX
0054E98F  83 C4 08                  ADD ESP,0x8
0054E992  85 F6                     TEST ESI,ESI
0054E994  75 76                     JNZ 0x0054ea0c
0054E996  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0054E999  8D 46 08                  LEA EAX,[ESI + 0x8]
0054E99C  50                        PUSH EAX
0054E99D  E8 6E C2 15 00            CALL 0x006aac10
0054E9A2  8B CE                     MOV ECX,ESI
0054E9A4  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
0054E9A7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0054E9AA  8B D1                     MOV EDX,ECX
0054E9AC  8D 78 08                  LEA EDI,[EAX + 0x8]
0054E9AF  50                        PUSH EAX
0054E9B0  C1 E9 02                  SHR ECX,0x2
0054E9B3  F3 A5                     MOVSD.REP ES:EDI,ESI
0054E9B5  8B CA                     MOV ECX,EDX
0054E9B7  83 E1 03                  AND ECX,0x3
0054E9BA  F3 A4                     MOVSB.REP ES:EDI,ESI
0054E9BC  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0054E9BF  8D 7E 65                  LEA EDI,[ESI + 0x65]
0054E9C2  57                        PUSH EDI
0054E9C3  E8 48 AF 16 00            CALL 0x006b9910
0054E9C8  8B 4E 69                  MOV ECX,dword ptr [ESI + 0x69]
0054E9CB  41                        INC ECX
0054E9CC  8B C1                     MOV EAX,ECX
0054E9CE  89 4E 69                  MOV dword ptr [ESI + 0x69],ECX
0054E9D1  3D D2 00 00 00            CMP EAX,0xd2
0054E9D6  76 23                     JBE 0x0054e9fb
0054E9D8  8B 07                     MOV EAX,dword ptr [EDI]
0054E9DA  50                        PUSH EAX
0054E9DB  57                        PUSH EDI
0054E9DC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0054E9DF  E8 DC AE 16 00            CALL 0x006b98c0
0054E9E4  85 C0                     TEST EAX,EAX
0054E9E6  74 13                     JZ 0x0054e9fb
0054E9E8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054E9EB  85 C0                     TEST EAX,EAX
0054E9ED  74 09                     JZ 0x0054e9f8
0054E9EF  8D 45 FC                  LEA EAX,[EBP + -0x4]
0054E9F2  50                        PUSH EAX
0054E9F3  E8 68 C6 15 00            CALL 0x006ab060
LAB_0054e9f8:
0054E9F8  FF 4E 69                  DEC dword ptr [ESI + 0x69]
LAB_0054e9fb:
0054E9FB  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0054E9FE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054EA04  5F                        POP EDI
0054EA05  5E                        POP ESI
0054EA06  8B E5                     MOV ESP,EBP
0054EA08  5D                        POP EBP
0054EA09  C2 08 00                  RET 0x8
LAB_0054ea0c:
0054EA0C  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0054EA0F  68 7C 85 7C 00            PUSH 0x7c857c
0054EA14  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054EA19  56                        PUSH ESI
0054EA1A  6A 00                     PUSH 0x0
0054EA1C  68 82 04 00 00            PUSH 0x482
0054EA21  68 30 84 7C 00            PUSH 0x7c8430
0054EA26  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054EA2C  E8 9F EA 15 00            CALL 0x006ad4d0
0054EA31  83 C4 18                  ADD ESP,0x18
0054EA34  85 C0                     TEST EAX,EAX
0054EA36  74 01                     JZ 0x0054ea39
0054EA38  CC                        INT3
LAB_0054ea39:
0054EA39  68 84 04 00 00            PUSH 0x484
0054EA3E  68 30 84 7C 00            PUSH 0x7c8430
0054EA43  6A 00                     PUSH 0x0
0054EA45  56                        PUSH ESI
0054EA46  E8 F5 73 15 00            CALL 0x006a5e40
LAB_0054ea4b:
0054EA4B  5F                        POP EDI
0054EA4C  5E                        POP ESI
0054EA4D  8B E5                     MOV ESP,EBP
0054EA4F  5D                        POP EBP
0054EA50  C2 08 00                  RET 0x8
