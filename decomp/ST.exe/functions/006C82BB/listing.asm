FUN_006c82bb:
006C82BB  8B 1D 8C DA 7E 00         MOV EBX,dword ptr [0x007eda8c]
006C82C1  83 FB 64                  CMP EBX,0x64
006C82C4  75 06                     JNZ 0x006c82cc
006C82C6  8B C2                     MOV EAX,EDX
006C82C8  F7 EB                     IMUL EBX
006C82CA  8B D0                     MOV EDX,EAX
LAB_006c82cc:
006C82CC  33 C9                     XOR ECX,ECX
006C82CE  0B D2                     OR EDX,EDX
006C82D0  7D 03                     JGE 0x006c82d5
006C82D2  F7 DA                     NEG EDX
006C82D4  41                        INC ECX
LAB_006c82d5:
006C82D5  81 FA 10 27 00 00         CMP EDX,0x2710
006C82DB  77 28                     JA 0x006c8305
006C82DD  33 F6                     XOR ESI,ESI
006C82DF  BF 5A 00 00 00            MOV EDI,0x5a
LAB_006c82e4:
006C82E4  8B C7                     MOV EAX,EDI
006C82E6  2B C6                     SUB EAX,ESI
006C82E8  D1 E8                     SHR EAX,0x1
006C82EA  74 20                     JZ 0x006c830c
006C82EC  03 C6                     ADD EAX,ESI
006C82EE  8B D8                     MOV EBX,EAX
006C82F0  D1 E3                     SHL EBX,0x1
006C82F2  66 3B 93 A0 E9 6C 00      CMP DX,word ptr [EBX + 0x6ce9a0]
006C82F9  74 2F                     JZ 0x006c832a
006C82FB  77 04                     JA 0x006c8301
006C82FD  8B F8                     MOV EDI,EAX
006C82FF  EB E3                     JMP 0x006c82e4
LAB_006c8301:
006C8301  8B F0                     MOV ESI,EAX
006C8303  EB DF                     JMP 0x006c82e4
LAB_006c8305:
006C8305  B8 5A 00 00 00            MOV EAX,0x5a
006C830A  EB 1E                     JMP 0x006c832a
LAB_006c830c:
006C830C  8B C6                     MOV EAX,ESI
006C830E  D1 E6                     SHL ESI,0x1
006C8310  D1 E7                     SHL EDI,0x1
006C8312  66 8B 9F A0 E9 6C 00      MOV BX,word ptr [EDI + 0x6ce9a0]
006C8319  2B DA                     SUB EBX,EDX
006C831B  66 2B 96 A0 E9 6C 00      SUB DX,word ptr [ESI + 0x6ce9a0]
006C8322  3B DA                     CMP EBX,EDX
006C8324  73 04                     JNC 0x006c832a
006C8326  8B C7                     MOV EAX,EDI
006C8328  D1 E8                     SHR EAX,0x1
LAB_006c832a:
006C832A  0B C9                     OR ECX,ECX
006C832C  74 02                     JZ 0x006c8330
006C832E  F7 D8                     NEG EAX
LAB_006c8330:
006C8330  C3                        RET
