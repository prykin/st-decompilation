FUN_006a12b0:
006A12B0  55                        PUSH EBP
006A12B1  8B EC                     MOV EBP,ESP
006A12B3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A12B6  53                        PUSH EBX
006A12B7  56                        PUSH ESI
006A12B8  57                        PUSH EDI
006A12B9  85 C9                     TEST ECX,ECX
006A12BB  7C 69                     JL 0x006a1326
006A12BD  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006A12C0  3B 0F                     CMP ECX,dword ptr [EDI]
006A12C2  7D 62                     JGE 0x006a1326
006A12C4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A12C7  85 D2                     TEST EDX,EDX
006A12C9  7C 5B                     JL 0x006a1326
006A12CB  3B 57 04                  CMP EDX,dword ptr [EDI + 0x4]
006A12CE  7D 56                     JGE 0x006a1326
006A12D0  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006A12D3  85 DB                     TEST EBX,EBX
006A12D5  7C 4F                     JL 0x006a1326
006A12D7  83 FB 06                  CMP EBX,0x6
006A12DA  7D 4A                     JGE 0x006a1326
006A12DC  BE 2C F8 7D 00            MOV ESI,0x7df82c
006A12E1  EB 03                     JMP 0x006a12e6
LAB_006a12e3:
006A12E3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
LAB_006a12e6:
006A12E6  8B 46 FC                  MOV EAX,dword ptr [ESI + -0x4]
006A12E9  03 C1                     ADD EAX,ECX
006A12EB  8B 0E                     MOV ECX,dword ptr [ESI]
006A12ED  03 CA                     ADD ECX,EDX
006A12EF  85 C0                     TEST EAX,EAX
006A12F1  7C 28                     JL 0x006a131b
006A12F3  3B 07                     CMP EAX,dword ptr [EDI]
006A12F5  7D 24                     JGE 0x006a131b
006A12F7  85 C9                     TEST ECX,ECX
006A12F9  7C 20                     JL 0x006a131b
006A12FB  3B 4F 04                  CMP ECX,dword ptr [EDI + 0x4]
006A12FE  7D 1B                     JGE 0x006a131b
006A1300  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A1303  52                        PUSH EDX
006A1304  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A1307  52                        PUSH EDX
006A1308  53                        PUSH EBX
006A1309  51                        PUSH ECX
006A130A  50                        PUSH EAX
006A130B  57                        PUSH EDI
006A130C  E8 1F 1D D6 FF            CALL 0x00403030
006A1311  83 C4 18                  ADD ESP,0x18
006A1314  85 C0                     TEST EAX,EAX
006A1316  74 18                     JZ 0x006a1330
006A1318  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
LAB_006a131b:
006A131B  83 C6 08                  ADD ESI,0x8
006A131E  81 FE 6C F8 7D 00         CMP ESI,0x7df86c
006A1324  7C BD                     JL 0x006a12e3
LAB_006a1326:
006A1326  5F                        POP EDI
006A1327  5E                        POP ESI
006A1328  B8 01 00 00 00            MOV EAX,0x1
006A132D  5B                        POP EBX
006A132E  5D                        POP EBP
006A132F  C3                        RET
LAB_006a1330:
006A1330  5F                        POP EDI
006A1331  5E                        POP ESI
006A1332  33 C0                     XOR EAX,EAX
006A1334  5B                        POP EBX
006A1335  5D                        POP EBP
006A1336  C3                        RET
