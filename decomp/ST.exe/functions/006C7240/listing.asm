FUN_006c7240:
006C7240  55                        PUSH EBP
006C7241  8B EC                     MOV EBP,ESP
006C7243  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7246  53                        PUSH EBX
006C7247  56                        PUSH ESI
006C7248  57                        PUSH EDI
006C7249  8B 78 3A                  MOV EDI,dword ptr [EAX + 0x3a]
006C724C  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
006C724F  85 C9                     TEST ECX,ECX
006C7251  7D 02                     JGE 0x006c7255
006C7253  F7 D9                     NEG ECX
LAB_006c7255:
006C7255  8B 70 1E                  MOV ESI,dword ptr [EAX + 0x1e]
006C7258  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006C725B  03 F2                     ADD ESI,EDX
006C725D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C7260  03 D6                     ADD EDX,ESI
006C7262  3B D1                     CMP EDX,ECX
006C7264  7D 6F                     JGE 0x006c72d5
006C7266  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
006C7269  8B 30                     MOV ESI,dword ptr [EAX]
006C726B  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006C726E  8B 48 1A                  MOV ECX,dword ptr [EAX + 0x1a]
006C7271  03 CE                     ADD ECX,ESI
006C7273  8B 70 22                  MOV ESI,dword ptr [EAX + 0x22]
006C7276  8D 1C 0E                  LEA EBX,[ESI + ECX*0x1]
006C7279  3B 5D 08                  CMP EBX,dword ptr [EBP + 0x8]
006C727C  7E 05                     JLE 0x006c7283
006C727E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C7281  2B F1                     SUB ESI,ECX
LAB_006c7283:
006C7283  F6 40 5E 01               TEST byte ptr [EAX + 0x5e],0x1
006C7287  74 28                     JZ 0x006c72b1
006C7289  8A 58 61                  MOV BL,byte ptr [EAX + 0x61]
006C728C  53                        PUSH EBX
006C728D  6A 01                     PUSH 0x1
006C728F  56                        PUSH ESI
006C7290  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C7293  6A 00                     PUSH 0x0
006C7295  6A 00                     PUSH 0x0
006C7297  56                        PUSH ESI
006C7298  8B 70 2E                  MOV ESI,dword ptr [EAX + 0x2e]
006C729B  56                        PUSH ESI
006C729C  52                        PUSH EDX
006C729D  8B 50 3E                  MOV EDX,dword ptr [EAX + 0x3e]
006C72A0  51                        PUSH ECX
006C72A1  52                        PUSH EDX
006C72A2  57                        PUSH EDI
006C72A3  E8 68 DE FE FF            CALL 0x006b5110
LAB_006c72a8:
006C72A8  5F                        POP EDI
006C72A9  5E                        POP ESI
006C72AA  33 C0                     XOR EAX,EAX
006C72AC  5B                        POP EBX
006C72AD  5D                        POP EBP
006C72AE  C2 0C 00                  RET 0xc
LAB_006c72b1:
006C72B1  6A 01                     PUSH 0x1
006C72B3  56                        PUSH ESI
006C72B4  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C72B7  6A 00                     PUSH 0x0
006C72B9  6A 00                     PUSH 0x0
006C72BB  56                        PUSH ESI
006C72BC  8B 70 2E                  MOV ESI,dword ptr [EAX + 0x2e]
006C72BF  8B 40 3E                  MOV EAX,dword ptr [EAX + 0x3e]
006C72C2  56                        PUSH ESI
006C72C3  52                        PUSH EDX
006C72C4  51                        PUSH ECX
006C72C5  50                        PUSH EAX
006C72C6  57                        PUSH EDI
006C72C7  E8 24 E3 FE FF            CALL 0x006b55f0
006C72CC  5F                        POP EDI
006C72CD  5E                        POP ESI
006C72CE  33 C0                     XOR EAX,EAX
006C72D0  5B                        POP EBX
006C72D1  5D                        POP EBP
006C72D2  C2 0C 00                  RET 0xc
LAB_006c72d5:
006C72D5  8A 48 16                  MOV CL,byte ptr [EAX + 0x16]
006C72D8  84 C9                     TEST CL,CL
006C72DA  74 CC                     JZ 0x006c72a8
006C72DC  8A 48 18                  MOV CL,byte ptr [EAX + 0x18]
006C72DF  84 C9                     TEST CL,CL
006C72E1  75 C5                     JNZ 0x006c72a8
006C72E3  5F                        POP EDI
006C72E4  5E                        POP ESI
006C72E5  83 C8 FF                  OR EAX,0xffffffff
006C72E8  5B                        POP EBX
006C72E9  5D                        POP EBP
006C72EA  C2 0C 00                  RET 0xc
