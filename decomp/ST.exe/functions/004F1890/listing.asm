FUN_004f1890:
004F1890  55                        PUSH EBP
004F1891  8B EC                     MOV EBP,ESP
004F1893  A0 4E 87 80 00            MOV AL,[0x0080874e]
004F1898  53                        PUSH EBX
004F1899  56                        PUSH ESI
004F189A  3C 03                     CMP AL,0x3
004F189C  57                        PUSH EDI
004F189D  8B F1                     MOV ESI,ECX
004F189F  75 12                     JNZ 0x004f18b3
004F18A1  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004F18A4  8A C3                     MOV AL,BL
004F18A6  F6 D8                     NEG AL
004F18A8  1B C0                     SBB EAX,EAX
004F18AA  24 FD                     AND AL,0xfd
004F18AC  83 C0 05                  ADD EAX,0x5
004F18AF  8B F8                     MOV EDI,EAX
004F18B1  EB 0F                     JMP 0x004f18c2
LAB_004f18b3:
004F18B3  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004F18B6  33 C9                     XOR ECX,ECX
004F18B8  84 DB                     TEST BL,BL
004F18BA  0F 95 C1                  SETNZ CL
004F18BD  83 C1 02                  ADD ECX,0x2
004F18C0  8B F9                     MOV EDI,ECX
LAB_004f18c2:
004F18C2  8B C3                     MOV EAX,EBX
004F18C4  33 D2                     XOR EDX,EDX
004F18C6  25 FF 00 00 00            AND EAX,0xff
004F18CB  8A 94 30 EA 02 00 00      MOV DL,byte ptr [EAX + ESI*0x1 + 0x2ea]
004F18D2  8B 84 86 E2 02 00 00      MOV EAX,dword ptr [ESI + EAX*0x4 + 0x2e2]
004F18D9  52                        PUSH EDX
004F18DA  50                        PUSH EAX
004F18DB  E8 70 9D 21 00            CALL 0x0070b650
004F18E0  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
004F18E6  33 C9                     XOR ECX,ECX
004F18E8  80 FA 03                  CMP DL,0x3
004F18EB  50                        PUSH EAX
004F18EC  0F 94 C1                  SETZ CL
004F18EF  83 C1 06                  ADD ECX,0x6
004F18F2  6A 06                     PUSH 0x6
004F18F4  F6 DB                     NEG BL
004F18F6  1B DB                     SBB EBX,EBX
004F18F8  51                        PUSH ECX
004F18F9  83 E3 08                  AND EBX,0x8
004F18FC  57                        PUSH EDI
004F18FD  8B 94 9E 80 01 00 00      MOV EDX,dword ptr [ESI + EBX*0x4 + 0x180]
004F1904  52                        PUSH EDX
004F1905  E8 1F 19 F1 FF            CALL 0x00403229
004F190A  83 C4 1C                  ADD ESP,0x1c
004F190D  5F                        POP EDI
004F190E  5E                        POP ESI
004F190F  5B                        POP EBX
004F1910  5D                        POP EBP
004F1911  C2 04 00                  RET 0x4
