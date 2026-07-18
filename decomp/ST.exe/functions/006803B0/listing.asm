FUN_006803b0:
006803B0  55                        PUSH EBP
006803B1  8B EC                     MOV EBP,ESP
006803B3  81 EC A4 00 00 00         SUB ESP,0xa4
006803B9  A1 00 8A 84 00            MOV EAX,[0x00848a00]
006803BE  53                        PUSH EBX
006803BF  8B 1D 04 8A 84 00         MOV EBX,dword ptr [0x00848a04]
006803C5  56                        PUSH ESI
006803C6  85 DB                     TEST EBX,EBX
006803C8  57                        PUSH EDI
006803C9  7E 6C                     JLE 0x00680437
006803CB  85 C0                     TEST EAX,EAX
006803CD  7C 6C                     JL 0x0068043b
006803CF  8D 45 DC                  LEA EAX,[EBP + -0x24]
006803D2  6A 0A                     PUSH 0xa
006803D4  50                        PUSH EAX
006803D5  53                        PUSH EBX
006803D6  E8 85 DA 0A 00            CALL 0x0072de60
006803DB  8B 35 E8 BD 85 00         MOV ESI,dword ptr [0x0085bde8]
006803E1  8D 4D DC                  LEA ECX,[EBP + -0x24]
006803E4  68 30 56 7D 00            PUSH 0x7d5630
006803E9  51                        PUSH ECX
006803EA  68 28 56 7D 00            PUSH 0x7d5628
006803EF  8D 95 5C FF FF FF         LEA EDX,[EBP + 0xffffff5c]
006803F5  68 DC 6E 7C 00            PUSH 0x7c6edc
006803FA  52                        PUSH EDX
006803FB  FF D6                     CALL ESI
006803FD  A1 00 8A 84 00            MOV EAX,[0x00848a00]
00680402  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
00680408  50                        PUSH EAX
00680409  68 E0 89 84 00            PUSH 0x8489e0
0068040E  51                        PUSH ECX
0068040F  68 AC 78 84 00            PUSH 0x8478ac
00680414  FF D6                     CALL ESI
00680416  8B 15 A0 3F 7D 00         MOV EDX,dword ptr [0x007d3fa0]
0068041C  A1 00 8A 84 00            MOV EAX,[0x00848a00]
00680421  83 C4 30                  ADD ESP,0x30
00680424  03 C2                     ADD EAX,EDX
00680426  A3 00 8A 84 00            MOV [0x00848a00],EAX
0068042B  B8 AC 78 84 00            MOV EAX,0x8478ac
00680430  5F                        POP EDI
00680431  5E                        POP ESI
00680432  5B                        POP EBX
00680433  8B E5                     MOV ESP,EBP
00680435  5D                        POP EBP
00680436  C3                        RET
LAB_00680437:
00680437  85 C0                     TEST EAX,EAX
00680439  7D 39                     JGE 0x00680474
LAB_0068043b:
0068043B  A1 D0 89 84 00            MOV EAX,[0x008489d0]
00680440  85 C0                     TEST EAX,EAX
00680442  74 30                     JZ 0x00680474
00680444  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00680447  33 F6                     XOR ESI,ESI
LAB_00680449:
00680449  56                        PUSH ESI
0068044A  53                        PUSH EBX
0068044B  68 E0 89 84 00            PUSH 0x8489e0
00680450  E8 AB 27 07 00            CALL 0x006f2c00
00680455  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00680458  83 C4 0C                  ADD ESP,0xc
0068045B  8B F8                     MOV EDI,EAX
0068045D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00680460  57                        PUSH EDI
00680461  50                        PUSH EAX
00680462  E8 59 1D 07 00            CALL 0x006f21c0
00680467  85 C0                     TEST EAX,EAX
00680469  75 3A                     JNZ 0x006804a5
0068046B  46                        INC ESI
0068046C  81 FE F0 FF FF 7F         CMP ESI,0x7ffffff0
00680472  7C D5                     JL 0x00680449
LAB_00680474:
00680474  BF E0 89 84 00            MOV EDI,0x8489e0
00680479  83 C9 FF                  OR ECX,0xffffffff
0068047C  33 C0                     XOR EAX,EAX
0068047E  F2 AE                     SCASB.REPNE ES:EDI
00680480  F7 D1                     NOT ECX
00680482  2B F9                     SUB EDI,ECX
00680484  8B C1                     MOV EAX,ECX
00680486  8B F7                     MOV ESI,EDI
00680488  BF AC 78 84 00            MOV EDI,0x8478ac
0068048D  C1 E9 02                  SHR ECX,0x2
00680490  F3 A5                     MOVSD.REP ES:EDI,ESI
00680492  8B C8                     MOV ECX,EAX
00680494  B8 AC 78 84 00            MOV EAX,0x8478ac
00680499  83 E1 03                  AND ECX,0x3
0068049C  F3 A4                     MOVSB.REP ES:EDI,ESI
0068049E  5F                        POP EDI
0068049F  5E                        POP ESI
006804A0  5B                        POP EBX
006804A1  8B E5                     MOV ESP,EBP
006804A3  5D                        POP EBP
006804A4  C3                        RET
LAB_006804a5:
006804A5  85 FF                     TEST EDI,EDI
006804A7  74 CB                     JZ 0x00680474
006804A9  83 C9 FF                  OR ECX,0xffffffff
006804AC  33 C0                     XOR EAX,EAX
006804AE  F2 AE                     SCASB.REPNE ES:EDI
006804B0  F7 D1                     NOT ECX
006804B2  2B F9                     SUB EDI,ECX
006804B4  B8 AC 78 84 00            MOV EAX,0x8478ac
006804B9  8B D1                     MOV EDX,ECX
006804BB  8B F7                     MOV ESI,EDI
006804BD  BF AC 78 84 00            MOV EDI,0x8478ac
006804C2  C1 E9 02                  SHR ECX,0x2
006804C5  F3 A5                     MOVSD.REP ES:EDI,ESI
006804C7  8B CA                     MOV ECX,EDX
006804C9  83 E1 03                  AND ECX,0x3
006804CC  F3 A4                     MOVSB.REP ES:EDI,ESI
006804CE  5F                        POP EDI
006804CF  5E                        POP ESI
006804D0  5B                        POP EBX
006804D1  8B E5                     MOV ESP,EBP
006804D3  5D                        POP EBP
006804D4  C3                        RET
