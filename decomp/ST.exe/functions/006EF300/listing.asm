mfTmapGetParam:
006EF300  55                        PUSH EBP
006EF301  8B EC                     MOV EBP,ESP
006EF303  83 EC 50                  SUB ESP,0x50
006EF306  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006EF30B  56                        PUSH ESI
006EF30C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006EF30F  8D 4D B0                  LEA ECX,[EBP + -0x50]
006EF312  6A 00                     PUSH 0x0
006EF314  52                        PUSH EDX
006EF315  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006EF318  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006EF31E  E8 CD E4 03 00            CALL 0x0072d7f0
006EF323  8B F0                     MOV ESI,EAX
006EF325  83 C4 08                  ADD ESP,0x8
006EF328  85 F6                     TEST ESI,ESI
006EF32A  75 66                     JNZ 0x006ef392
006EF32C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EF32F  8D 45 F4                  LEA EAX,[EBP + -0xc]
006EF332  6A 01                     PUSH 0x1
006EF334  50                        PUSH EAX
006EF335  51                        PUSH ECX
006EF336  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006EF339  6A 0F                     PUSH 0xf
006EF33B  E8 D0 2F 00 00            CALL 0x006f2310
006EF340  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006EF343  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006EF346  85 C0                     TEST EAX,EAX
006EF348  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006EF34E  74 07                     JZ 0x006ef357
006EF350  66 8B 4D F6               MOV CX,word ptr [EBP + -0xa]
006EF354  66 89 08                  MOV word ptr [EAX],CX
LAB_006ef357:
006EF357  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006EF35A  85 C0                     TEST EAX,EAX
006EF35C  74 07                     JZ 0x006ef365
006EF35E  66 8B 55 F8               MOV DX,word ptr [EBP + -0x8]
006EF362  66 89 10                  MOV word ptr [EAX],DX
LAB_006ef365:
006EF365  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006EF368  85 C0                     TEST EAX,EAX
006EF36A  74 05                     JZ 0x006ef371
006EF36C  8A 4D FA                  MOV CL,byte ptr [EBP + -0x6]
006EF36F  88 08                     MOV byte ptr [EAX],CL
LAB_006ef371:
006EF371  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006EF374  85 C0                     TEST EAX,EAX
006EF376  74 05                     JZ 0x006ef37d
006EF378  8A 55 FB                  MOV DL,byte ptr [EBP + -0x5]
006EF37B  88 10                     MOV byte ptr [EAX],DL
LAB_006ef37d:
006EF37D  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006EF380  85 C0                     TEST EAX,EAX
006EF382  74 05                     JZ 0x006ef389
006EF384  8A 4D FC                  MOV CL,byte ptr [EBP + -0x4]
006EF387  88 08                     MOV byte ptr [EAX],CL
LAB_006ef389:
006EF389  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
006EF38D  5E                        POP ESI
006EF38E  8B E5                     MOV ESP,EBP
006EF390  5D                        POP EBP
006EF391  C3                        RET
LAB_006ef392:
006EF392  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006EF395  68 A0 EF 7E 00            PUSH 0x7eefa0
006EF39A  68 CC 4C 7A 00            PUSH 0x7a4ccc
006EF39F  56                        PUSH ESI
006EF3A0  6A 00                     PUSH 0x0
006EF3A2  6A 1F                     PUSH 0x1f
006EF3A4  68 88 EF 7E 00            PUSH 0x7eef88
006EF3A9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006EF3AF  E8 1C E1 FB FF            CALL 0x006ad4d0
006EF3B4  83 C4 18                  ADD ESP,0x18
006EF3B7  85 C0                     TEST EAX,EAX
006EF3B9  74 01                     JZ 0x006ef3bc
006EF3BB  CC                        INT3
LAB_006ef3bc:
006EF3BC  6A 21                     PUSH 0x21
006EF3BE  68 88 EF 7E 00            PUSH 0x7eef88
006EF3C3  6A 00                     PUSH 0x0
006EF3C5  56                        PUSH ESI
006EF3C6  E8 75 6A FB FF            CALL 0x006a5e40
006EF3CB  85 F6                     TEST ESI,ESI
006EF3CD  7D 07                     JGE 0x006ef3d6
006EF3CF  8B C6                     MOV EAX,ESI
006EF3D1  5E                        POP ESI
006EF3D2  8B E5                     MOV ESP,EBP
006EF3D4  5D                        POP EBP
006EF3D5  C3                        RET
LAB_006ef3d6:
006EF3D6  83 C8 FF                  OR EAX,0xffffffff
006EF3D9  5E                        POP ESI
006EF3DA  8B E5                     MOV ESP,EBP
006EF3DC  5D                        POP EBP
006EF3DD  C3                        RET
