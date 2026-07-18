FUN_005dd470:
005DD470  55                        PUSH EBP
005DD471  8B EC                     MOV EBP,ESP
005DD473  83 EC 70                  SUB ESP,0x70
005DD476  53                        PUSH EBX
005DD477  56                        PUSH ESI
005DD478  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DD47B  57                        PUSH EDI
005DD47C  B9 08 00 00 00            MOV ECX,0x8
005DD481  33 C0                     XOR EAX,EAX
005DD483  8D 7D D4                  LEA EDI,[EBP + -0x2c]
005DD486  8D 55 94                  LEA EDX,[EBP + -0x6c]
005DD489  F3 AB                     STOSD.REP ES:EDI
005DD48B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DD490  8D 4D 90                  LEA ECX,[EBP + -0x70]
005DD493  6A 00                     PUSH 0x0
005DD495  52                        PUSH EDX
005DD496  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
005DD499  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DD49F  E8 4C 03 15 00            CALL 0x0072d7f0
005DD4A4  8B F0                     MOV ESI,EAX
005DD4A6  83 C4 08                  ADD ESP,0x8
005DD4A9  85 F6                     TEST ESI,ESI
005DD4AB  0F 85 86 02 00 00         JNZ 0x005dd737
005DD4B1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DD4B4  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
005DD4B7  2D 3F 63 00 00            SUB EAX,0x633f
005DD4BC  0F 84 4C 01 00 00         JZ 0x005dd60e
005DD4C2  2D 61 5D 00 00            SUB EAX,0x5d61
005DD4C7  74 6C                     JZ 0x005dd535
005DD4C9  48                        DEC EAX
005DD4CA  0F 85 55 02 00 00         JNZ 0x005dd725
005DD4D0  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005DD4D3  8B 86 4C 05 00 00         MOV EAX,dword ptr [ESI + 0x54c]
005DD4D9  85 C0                     TEST EAX,EAX
005DD4DB  0F 84 44 02 00 00         JZ 0x005dd725
005DD4E1  8D 4D D4                  LEA ECX,[EBP + -0x2c]
005DD4E4  C7 45 E4 21 00 00 00      MOV dword ptr [EBP + -0x1c],0x21
005DD4EB  51                        PUSH ECX
005DD4EC  50                        PUSH EAX
005DD4ED  6A 02                     PUSH 0x2
005DD4EF  8B CE                     MOV ECX,ESI
005DD4F1  E8 7A 84 10 00            CALL 0x006e5970
005DD4F6  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005DD4F9  85 C0                     TEST EAX,EAX
005DD4FB  0F 85 24 02 00 00         JNZ 0x005dd725
005DD501  8B 86 4C 05 00 00         MOV EAX,dword ptr [ESI + 0x54c]
005DD507  8D 55 D4                  LEA EDX,[EBP + -0x2c]
005DD50A  52                        PUSH EDX
005DD50B  50                        PUSH EAX
005DD50C  6A 02                     PUSH 0x2
005DD50E  8B CE                     MOV ECX,ESI
005DD510  C7 45 E4 20 00 00 00      MOV dword ptr [EBP + -0x1c],0x20
005DD517  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
005DD51E  E8 4D 84 10 00            CALL 0x006e5970
005DD523  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
005DD526  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DD52C  5F                        POP EDI
005DD52D  5E                        POP ESI
005DD52E  5B                        POP EBX
005DD52F  8B E5                     MOV ESP,EBP
005DD531  5D                        POP EBP
005DD532  C2 04 00                  RET 0x4
LAB_005dd535:
005DD535  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005DD538  8B 86 82 06 00 00         MOV EAX,dword ptr [ESI + 0x682]
005DD53E  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005DD541  85 DB                     TEST EBX,EBX
005DD543  75 18                     JNZ 0x005dd55d
005DD545  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005DD549  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005DD54D  83 C3 1F                  ADD EBX,0x1f
005DD550  C1 EB 03                  SHR EBX,0x3
005DD553  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005DD559  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005dd55d:
005DD55D  50                        PUSH EAX
005DD55E  E8 3D 7A 0D 00            CALL 0x006b4fa0
005DD563  8B CB                     MOV ECX,EBX
005DD565  8B F8                     MOV EDI,EAX
005DD567  8B D1                     MOV EDX,ECX
005DD569  83 C8 FF                  OR EAX,0xffffffff
005DD56C  C1 E9 02                  SHR ECX,0x2
005DD56F  F3 AB                     STOSD.REP ES:EDI
005DD571  8B CA                     MOV ECX,EDX
005DD573  6A 00                     PUSH 0x0
005DD575  83 E1 03                  AND ECX,0x3
005DD578  6A 00                     PUSH 0x0
005DD57A  F3 AA                     STOSB.REP ES:EDI
005DD57C  8B 86 82 06 00 00         MOV EAX,dword ptr [ESI + 0x682]
005DD582  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
005DD585  6A 00                     PUSH 0x0
005DD587  6A 00                     PUSH 0x0
005DD589  6A 00                     PUSH 0x0
005DD58B  50                        PUSH EAX
005DD58C  E8 FF 34 13 00            CALL 0x00710a90
005DD591  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
005DD594  8B 47 14                  MOV EAX,dword ptr [EDI + 0x14]
005DD597  85 C0                     TEST EAX,EAX
005DD599  74 11                     JZ 0x005dd5ac
005DD59B  8B 08                     MOV ECX,dword ptr [EAX]
005DD59D  6A 02                     PUSH 0x2
005DD59F  6A FF                     PUSH -0x1
005DD5A1  6A 00                     PUSH 0x0
005DD5A3  51                        PUSH ECX
005DD5A4  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
005DD5A7  E8 14 44 13 00            CALL 0x007119c0
LAB_005dd5ac:
005DD5AC  66 8B 4F 18               MOV CX,word ptr [EDI + 0x18]
005DD5B0  66 81 F9 FF FF            CMP CX,0xffff
005DD5B5  75 06                     JNZ 0x005dd5bd
005DD5B7  66 39 4F 1A               CMP word ptr [EDI + 0x1a],CX
005DD5BB  74 2D                     JZ 0x005dd5ea
LAB_005dd5bd:
005DD5BD  8B 96 82 06 00 00         MOV EDX,dword ptr [ESI + 0x682]
005DD5C3  33 C0                     XOR EAX,EAX
005DD5C5  66 8B 47 1A               MOV AX,word ptr [EDI + 0x1a]
005DD5C9  6A 0D                     PUSH 0xd
005DD5CB  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
005DD5CE  81 E1 FF FF 00 00         AND ECX,0xffff
005DD5D4  2B F8                     SUB EDI,EAX
005DD5D6  6A 09                     PUSH 0x9
005DD5D8  83 EF 05                  SUB EDI,0x5
005DD5DB  83 C0 02                  ADD EAX,0x2
005DD5DE  57                        PUSH EDI
005DD5DF  51                        PUSH ECX
005DD5E0  50                        PUSH EAX
005DD5E1  51                        PUSH ECX
005DD5E2  6A 00                     PUSH 0x0
005DD5E4  52                        PUSH EDX
005DD5E5  E8 26 85 0D 00            CALL 0x006b5b10
LAB_005dd5ea:
005DD5EA  8B 96 54 05 00 00         MOV EDX,dword ptr [ESI + 0x554]
005DD5F0  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005DD5F5  52                        PUSH EDX
005DD5F6  50                        PUSH EAX
005DD5F7  E8 D4 5F 0D 00            CALL 0x006b35d0
005DD5FC  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
005DD5FF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DD605  5F                        POP EDI
005DD606  5E                        POP ESI
005DD607  5B                        POP EBX
005DD608  8B E5                     MOV ESP,EBP
005DD60A  5D                        POP EBP
005DD60B  C2 04 00                  RET 0x4
LAB_005dd60e:
005DD60E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005DD611  8B 87 7E 06 00 00         MOV EAX,dword ptr [EDI + 0x67e]
005DD617  85 C0                     TEST EAX,EAX
005DD619  0F 84 06 01 00 00         JZ 0x005dd725
005DD61F  A1 FA C4 80 00            MOV EAX,[0x0080c4fa]
005DD624  85 C0                     TEST EAX,EAX
005DD626  0F 84 F9 00 00 00         JZ 0x005dd725
005DD62C  8B 87 58 05 00 00         MOV EAX,dword ptr [EDI + 0x558]
005DD632  85 C0                     TEST EAX,EAX
005DD634  0F 8C EB 00 00 00         JL 0x005dd725
005DD63A  85 C9                     TEST ECX,ECX
005DD63C  0F 84 E3 00 00 00         JZ 0x005dd725
005DD642  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
005DD645  85 DB                     TEST EBX,EBX
005DD647  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
005DD64A  0F 84 D5 00 00 00         JZ 0x005dd725
005DD650  8B 77 34                  MOV ESI,dword ptr [EDI + 0x34]
005DD653  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
005DD659  85 C0                     TEST EAX,EAX
005DD65B  74 09                     JZ 0x005dd666
005DD65D  56                        PUSH ESI
005DD65E  E8 2D 31 13 00            CALL 0x00710790
005DD663  83 C4 04                  ADD ESP,0x4
LAB_005dd666:
005DD666  8B 87 7E 06 00 00         MOV EAX,dword ptr [EDI + 0x67e]
005DD66C  8B 8E 8A 00 00 00         MOV ECX,dword ptr [ESI + 0x8a]
005DD672  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005DD675  68 FF 00 00 00            PUSH 0xff
005DD67A  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005DD67D  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005DD680  52                        PUSH EDX
005DD681  51                        PUSH ECX
005DD682  6A 00                     PUSH 0x0
005DD684  6A 00                     PUSH 0x0
005DD686  6A 00                     PUSH 0x0
005DD688  50                        PUSH EAX
005DD689  E8 E2 6A 0D 00            CALL 0x006b4170
005DD68E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005DD691  33 C0                     XOR EAX,EAX
005DD693  66 8B 42 16               MOV AX,word ptr [EDX + 0x16]
005DD697  8B 93 E0 01 00 00         MOV EDX,dword ptr [EBX + 0x1e0]
005DD69D  8B C8                     MOV ECX,EAX
005DD69F  8B F0                     MOV ESI,EAX
005DD6A1  03 CA                     ADD ECX,EDX
005DD6A3  3B F1                     CMP ESI,ECX
005DD6A5  7D 6B                     JGE 0x005dd712
005DD6A7  8B 0D FA C4 80 00         MOV ECX,dword ptr [0x0080c4fa]
LAB_005dd6ad:
005DD6AD  3B 71 08                  CMP ESI,dword ptr [ECX + 0x8]
005DD6B0  7D 08                     JGE 0x005dd6ba
005DD6B2  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
005DD6B5  8B 1C B2                  MOV EBX,dword ptr [EDX + ESI*0x4]
005DD6B8  EB 02                     JMP 0x005dd6bc
LAB_005dd6ba:
005DD6BA  33 DB                     XOR EBX,EBX
LAB_005dd6bc:
005DD6BC  85 DB                     TEST EBX,EBX
005DD6BE  74 39                     JZ 0x005dd6f9
005DD6C0  8B 8F 7E 06 00 00         MOV ECX,dword ptr [EDI + 0x67e]
005DD6C6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005DD6C9  52                        PUSH EDX
005DD6CA  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005DD6CD  52                        PUSH EDX
005DD6CE  8B D6                     MOV EDX,ESI
005DD6D0  2B D0                     SUB EDX,EAX
005DD6D2  0F AF 55 F8               IMUL EDX,dword ptr [EBP + -0x8]
005DD6D6  52                        PUSH EDX
005DD6D7  6A 00                     PUSH 0x0
005DD6D9  6A 00                     PUSH 0x0
005DD6DB  51                        PUSH ECX
005DD6DC  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
005DD6DF  E8 AC 33 13 00            CALL 0x00710a90
005DD6E4  8B 4F 34                  MOV ECX,dword ptr [EDI + 0x34]
005DD6E7  6A 00                     PUSH 0x0
005DD6E9  6A FF                     PUSH -0x1
005DD6EB  6A 00                     PUSH 0x0
005DD6ED  53                        PUSH EBX
005DD6EE  E8 CD 42 13 00            CALL 0x007119c0
005DD6F3  8B 0D FA C4 80 00         MOV ECX,dword ptr [0x0080c4fa]
LAB_005dd6f9:
005DD6F9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005DD6FC  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
005DD6FF  33 C0                     XOR EAX,EAX
005DD701  46                        INC ESI
005DD702  66 8B 42 16               MOV AX,word ptr [EDX + 0x16]
005DD706  8B D0                     MOV EDX,EAX
005DD708  03 93 E0 01 00 00         ADD EDX,dword ptr [EBX + 0x1e0]
005DD70E  3B F2                     CMP ESI,EDX
005DD710  7C 9B                     JL 0x005dd6ad
LAB_005dd712:
005DD712  8B 87 58 05 00 00         MOV EAX,dword ptr [EDI + 0x558]
005DD718  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005DD71E  50                        PUSH EAX
005DD71F  51                        PUSH ECX
005DD720  E8 AB 5E 0D 00            CALL 0x006b35d0
LAB_005dd725:
005DD725  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
005DD728  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DD72E  5F                        POP EDI
005DD72F  5E                        POP ESI
005DD730  5B                        POP EBX
005DD731  8B E5                     MOV ESP,EBP
005DD733  5D                        POP EBP
005DD734  C2 04 00                  RET 0x4
LAB_005dd737:
005DD737  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
005DD73A  68 6C D8 7C 00            PUSH 0x7cd86c
005DD73F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DD744  56                        PUSH ESI
005DD745  6A 00                     PUSH 0x0
005DD747  68 49 03 00 00            PUSH 0x349
005DD74C  68 18 D7 7C 00            PUSH 0x7cd718
005DD751  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DD756  E8 75 FD 0C 00            CALL 0x006ad4d0
005DD75B  83 C4 18                  ADD ESP,0x18
005DD75E  85 C0                     TEST EAX,EAX
005DD760  74 01                     JZ 0x005dd763
005DD762  CC                        INT3
LAB_005dd763:
005DD763  68 49 03 00 00            PUSH 0x349
005DD768  68 18 D7 7C 00            PUSH 0x7cd718
005DD76D  6A 00                     PUSH 0x0
005DD76F  56                        PUSH ESI
005DD770  E8 CB 86 0C 00            CALL 0x006a5e40
005DD775  5F                        POP EDI
005DD776  5E                        POP ESI
005DD777  5B                        POP EBX
005DD778  8B E5                     MOV ESP,EBP
005DD77A  5D                        POP EBP
005DD77B  C2 04 00                  RET 0x4
