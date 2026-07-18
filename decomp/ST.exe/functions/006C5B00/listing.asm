FUN_006c5b00:
006C5B00  55                        PUSH EBP
006C5B01  8B EC                     MOV EBP,ESP
006C5B03  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C5B06  53                        PUSH EBX
006C5B07  56                        PUSH ESI
006C5B08  57                        PUSH EDI
006C5B09  F6 80 9C 04 00 00 01      TEST byte ptr [EAX + 0x49c],0x1
006C5B10  8B 88 98 04 00 00         MOV ECX,dword ptr [EAX + 0x498]
006C5B16  75 57                     JNZ 0x006c5b6f
006C5B18  83 F9 07                  CMP ECX,0x7
006C5B1B  75 28                     JNZ 0x006c5b45
006C5B1D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C5B20  8B C8                     MOV ECX,EAX
006C5B22  48                        DEC EAX
006C5B23  85 C9                     TEST ECX,ECX
006C5B25  0F 84 BD 00 00 00         JZ 0x006c5be8
006C5B2B  8A 55 1C                  MOV DL,byte ptr [EBP + 0x1c]
006C5B2E  8D 48 01                  LEA ECX,[EAX + 0x1]
006C5B31  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5b34:
006C5B34  8A 18                     MOV BL,byte ptr [EAX]
006C5B36  32 DA                     XOR BL,DL
006C5B38  88 18                     MOV byte ptr [EAX],BL
006C5B3A  40                        INC EAX
006C5B3B  49                        DEC ECX
006C5B3C  75 F6                     JNZ 0x006c5b34
006C5B3E  5F                        POP EDI
006C5B3F  5E                        POP ESI
006C5B40  5B                        POP EBX
006C5B41  5D                        POP EBP
006C5B42  C2 1C 00                  RET 0x1c
LAB_006c5b45:
006C5B45  8A 45 1C                  MOV AL,byte ptr [EBP + 0x1c]
006C5B48  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C5B4B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006C5B4E  8A D8                     MOV BL,AL
006C5B50  8A FB                     MOV BH,BL
006C5B52  8B D1                     MOV EDX,ECX
006C5B54  8B C3                     MOV EAX,EBX
006C5B56  C1 E0 10                  SHL EAX,0x10
006C5B59  66 8B C3                  MOV AX,BX
006C5B5C  C1 E9 02                  SHR ECX,0x2
006C5B5F  F3 AB                     STOSD.REP ES:EDI
006C5B61  8B CA                     MOV ECX,EDX
006C5B63  83 E1 03                  AND ECX,0x3
006C5B66  F3 AA                     STOSB.REP ES:EDI
006C5B68  5F                        POP EDI
006C5B69  5E                        POP ESI
006C5B6A  5B                        POP EBX
006C5B6B  5D                        POP EBP
006C5B6C  C2 1C 00                  RET 0x1c
LAB_006c5b6f:
006C5B6F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C5B72  83 F9 07                  CMP ECX,0x7
006C5B75  75 3C                     JNZ 0x006c5bb3
006C5B77  8B C8                     MOV ECX,EAX
006C5B79  48                        DEC EAX
006C5B7A  85 C9                     TEST ECX,ECX
006C5B7C  74 6A                     JZ 0x006c5be8
006C5B7E  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C5B81  8A 5D 1C                  MOV BL,byte ptr [EBP + 0x1c]
006C5B84  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006C5B87  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C5B8A  8D 78 01                  LEA EDI,[EAX + 0x1]
006C5B8D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5b90:
006C5B90  85 F1                     TEST ECX,ESI
006C5B92  74 04                     JZ 0x006c5b98
006C5B94  30 18                     XOR byte ptr [EAX],BL
006C5B96  EB 07                     JMP 0x006c5b9f
LAB_006c5b98:
006C5B98  83 FA FF                  CMP EDX,-0x1
006C5B9B  74 02                     JZ 0x006c5b9f
006C5B9D  30 10                     XOR byte ptr [EAX],DL
LAB_006c5b9f:
006C5B9F  40                        INC EAX
006C5BA0  D1 E9                     SHR ECX,0x1
006C5BA2  75 05                     JNZ 0x006c5ba9
006C5BA4  B9 00 00 00 80            MOV ECX,0x80000000
LAB_006c5ba9:
006C5BA9  4F                        DEC EDI
006C5BAA  75 E4                     JNZ 0x006c5b90
006C5BAC  5F                        POP EDI
006C5BAD  5E                        POP ESI
006C5BAE  5B                        POP EBX
006C5BAF  5D                        POP EBP
006C5BB0  C2 1C 00                  RET 0x1c
LAB_006c5bb3:
006C5BB3  8B D0                     MOV EDX,EAX
006C5BB5  48                        DEC EAX
006C5BB6  85 D2                     TEST EDX,EDX
006C5BB8  74 2E                     JZ 0x006c5be8
006C5BBA  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C5BBD  8A 5D 1C                  MOV BL,byte ptr [EBP + 0x1c]
006C5BC0  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006C5BC3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C5BC6  8D 78 01                  LEA EDI,[EAX + 0x1]
006C5BC9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5bcc:
006C5BCC  85 F1                     TEST ECX,ESI
006C5BCE  74 04                     JZ 0x006c5bd4
006C5BD0  88 18                     MOV byte ptr [EAX],BL
006C5BD2  EB 07                     JMP 0x006c5bdb
LAB_006c5bd4:
006C5BD4  83 FA FF                  CMP EDX,-0x1
006C5BD7  74 02                     JZ 0x006c5bdb
006C5BD9  88 10                     MOV byte ptr [EAX],DL
LAB_006c5bdb:
006C5BDB  40                        INC EAX
006C5BDC  D1 E9                     SHR ECX,0x1
006C5BDE  75 05                     JNZ 0x006c5be5
006C5BE0  B9 00 00 00 80            MOV ECX,0x80000000
LAB_006c5be5:
006C5BE5  4F                        DEC EDI
006C5BE6  75 E4                     JNZ 0x006c5bcc
LAB_006c5be8:
006C5BE8  5F                        POP EDI
006C5BE9  5E                        POP ESI
006C5BEA  5B                        POP EBX
006C5BEB  5D                        POP EBP
006C5BEC  C2 1C 00                  RET 0x1c
