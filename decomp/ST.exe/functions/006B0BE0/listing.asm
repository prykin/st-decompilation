FUN_006b0be0:
006B0BE0  55                        PUSH EBP
006B0BE1  8B EC                     MOV EBP,ESP
006B0BE3  81 EC 00 04 00 00         SUB ESP,0x400
006B0BE9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B0BEC  85 C0                     TEST EAX,EAX
006B0BEE  74 71                     JZ 0x006b0c61
006B0BF0  8B 40 3C                  MOV EAX,dword ptr [EAX + 0x3c]
006B0BF3  85 C0                     TEST EAX,EAX
006B0BF5  74 6A                     JZ 0x006b0c61
006B0BF7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B0BFA  8B 08                     MOV ECX,dword ptr [EAX]
006B0BFC  53                        PUSH EBX
006B0BFD  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B0C00  56                        PUSH ESI
006B0C01  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006B0C04  57                        PUSH EDI
006B0C05  52                        PUSH EDX
006B0C06  56                        PUSH ESI
006B0C07  53                        PUSH EBX
006B0C08  6A 00                     PUSH 0x0
006B0C0A  50                        PUSH EAX
006B0C0B  FF 51 10                  CALL dword ptr [ECX + 0x10]
006B0C0E  6A 00                     PUSH 0x0
006B0C10  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B0C13  FF 15 4C BE 85 00         CALL dword ptr [0x0085be4c]
006B0C19  8B F8                     MOV EDI,EAX
006B0C1B  8D 85 00 FC FF FF         LEA EAX,[EBP + 0xfffffc00]
006B0C21  50                        PUSH EAX
006B0C22  56                        PUSH ESI
006B0C23  53                        PUSH EBX
006B0C24  57                        PUSH EDI
006B0C25  FF 15 80 BA 85 00         CALL dword ptr [0x0085ba80]
006B0C2B  57                        PUSH EDI
006B0C2C  6A 00                     PUSH 0x0
006B0C2E  FF 15 48 BE 85 00         CALL dword ptr [0x0085be48]
006B0C34  85 F6                     TEST ESI,ESI
006B0C36  7E 1D                     JLE 0x006b0c55
006B0C38  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B0C3B  B1 02                     MOV CL,0x2
LAB_006b0c3d:
006B0C3D  84 48 03                  TEST byte ptr [EAX + 0x3],CL
006B0C40  74 0D                     JZ 0x006b0c4f
006B0C42  33 D2                     XOR EDX,EDX
006B0C44  8A 10                     MOV DL,byte ptr [EAX]
006B0C46  8B 94 95 00 FC FF FF      MOV EDX,dword ptr [EBP + EDX*0x4 + 0xfffffc00]
006B0C4D  89 10                     MOV dword ptr [EAX],EDX
LAB_006b0c4f:
006B0C4F  83 C0 04                  ADD EAX,0x4
006B0C52  4E                        DEC ESI
006B0C53  75 E8                     JNZ 0x006b0c3d
LAB_006b0c55:
006B0C55  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B0C58  5F                        POP EDI
006B0C59  5E                        POP ESI
006B0C5A  5B                        POP EBX
006B0C5B  8B E5                     MOV ESP,EBP
006B0C5D  5D                        POP EBP
006B0C5E  C2 10 00                  RET 0x10
LAB_006b0c61:
006B0C61  B8 AF FF FF FF            MOV EAX,0xffffffaf
006B0C66  8B E5                     MOV ESP,EBP
006B0C68  5D                        POP EBP
006B0C69  C2 10 00                  RET 0x10
