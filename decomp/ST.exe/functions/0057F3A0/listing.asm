FUN_0057f3a0:
0057F3A0  55                        PUSH EBP
0057F3A1  8B EC                     MOV EBP,ESP
0057F3A3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0057F3A6  83 F8 FF                  CMP EAX,-0x1
0057F3A9  75 2A                     JNZ 0x0057f3d5
0057F3AB  8B 89 59 02 00 00         MOV ECX,dword ptr [ECX + 0x259]
0057F3B1  B8 E9 E2 1B 43            MOV EAX,0x431be2e9
0057F3B6  F7 E9                     IMUL ECX
0057F3B8  C1 FA 12                  SAR EDX,0x12
0057F3BB  8B C2                     MOV EAX,EDX
0057F3BD  C1 E8 1F                  SHR EAX,0x1f
0057F3C0  03 D0                     ADD EDX,EAX
0057F3C2  83 FA 01                  CMP EDX,0x1
0057F3C5  7C 02                     JL 0x0057f3c9
0057F3C7  33 D2                     XOR EDX,EDX
LAB_0057f3c9:
0057F3C9  8B 0D 94 B0 7C 00         MOV ECX,dword ptr [0x007cb094]
0057F3CF  F7 DA                     NEG EDX
0057F3D1  52                        PUSH EDX
0057F3D2  51                        PUSH ECX
0057F3D3  EB 08                     JMP 0x0057f3dd
LAB_0057f3d5:
0057F3D5  8B 15 98 B0 7C 00         MOV EDX,dword ptr [0x007cb098]
0057F3DB  50                        PUSH EAX
0057F3DC  52                        PUSH EDX
LAB_0057f3dd:
0057F3DD  68 50 16 81 00            PUSH 0x811650
0057F3E2  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0057F3E8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057F3EB  83 C4 0C                  ADD ESP,0xc
0057F3EE  85 C0                     TEST EAX,EAX
0057F3F0  74 3A                     JZ 0x0057f42c
0057F3F2  56                        PUSH ESI
0057F3F3  57                        PUSH EDI
0057F3F4  BF 60 B2 7C 00            MOV EDI,0x7cb260
0057F3F9  83 C9 FF                  OR ECX,0xffffffff
0057F3FC  33 C0                     XOR EAX,EAX
0057F3FE  F2 AE                     SCASB.REPNE ES:EDI
0057F400  F7 D1                     NOT ECX
0057F402  2B F9                     SUB EDI,ECX
0057F404  8B F7                     MOV ESI,EDI
0057F406  8B D1                     MOV EDX,ECX
0057F408  BF 50 16 81 00            MOV EDI,0x811650
0057F40D  83 C9 FF                  OR ECX,0xffffffff
0057F410  F2 AE                     SCASB.REPNE ES:EDI
0057F412  8B CA                     MOV ECX,EDX
0057F414  4F                        DEC EDI
0057F415  C1 E9 02                  SHR ECX,0x2
0057F418  F3 A5                     MOVSD.REP ES:EDI,ESI
0057F41A  8B CA                     MOV ECX,EDX
0057F41C  B8 50 16 81 00            MOV EAX,0x811650
0057F421  83 E1 03                  AND ECX,0x3
0057F424  F3 A4                     MOVSB.REP ES:EDI,ESI
0057F426  5F                        POP EDI
0057F427  5E                        POP ESI
0057F428  5D                        POP EBP
0057F429  C2 08 00                  RET 0x8
LAB_0057f42c:
0057F42C  B8 50 16 81 00            MOV EAX,0x811650
0057F431  5D                        POP EBP
0057F432  C2 08 00                  RET 0x8
