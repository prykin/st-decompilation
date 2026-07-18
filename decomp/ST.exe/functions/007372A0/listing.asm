FUN_007372a0:
007372A0  55                        PUSH EBP
007372A1  8B EC                     MOV EBP,ESP
007372A3  83 EC 08                  SUB ESP,0x8
007372A6  53                        PUSH EBX
007372A7  56                        PUSH ESI
007372A8  57                        PUSH EDI
LAB_007372a9:
007372A9  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
007372AD  75 1E                     JNZ 0x007372cd
007372AF  68 50 FE 79 00            PUSH 0x79fe50
007372B4  6A 00                     PUSH 0x0
007372B6  6A 41                     PUSH 0x41
007372B8  68 98 02 7A 00            PUSH 0x7a0298
007372BD  6A 02                     PUSH 0x2
007372BF  E8 DC 9C FF FF            CALL 0x00730fa0
007372C4  83 C4 14                  ADD ESP,0x14
007372C7  83 F8 01                  CMP EAX,0x1
007372CA  75 01                     JNZ 0x007372cd
007372CC  CC                        INT3
LAB_007372cd:
007372CD  33 C0                     XOR EAX,EAX
007372CF  85 C0                     TEST EAX,EAX
007372D1  75 D6                     JNZ 0x007372a9
007372D3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007372D6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007372D9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007372DC  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
007372DF  50                        PUSH EAX
007372E0  E8 9B 9D 00 00            CALL 0x00741080
007372E5  83 C4 04                  ADD ESP,0x4
007372E8  85 C0                     TEST EAX,EAX
007372EA  75 07                     JNZ 0x007372f3
007372EC  33 C0                     XOR EAX,EAX
007372EE  E9 FD 00 00 00            JMP 0x007373f0
LAB_007372f3:
007372F3  81 7D FC B0 20 7F 00      CMP dword ptr [EBP + -0x4],0x7f20b0
007372FA  75 09                     JNZ 0x00737305
007372FC  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00737303  EB 19                     JMP 0x0073731e
LAB_00737305:
00737305  81 7D FC D0 20 7F 00      CMP dword ptr [EBP + -0x4],0x7f20d0
0073730C  75 09                     JNZ 0x00737317
0073730E  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
00737315  EB 07                     JMP 0x0073731e
LAB_00737317:
00737317  33 C0                     XOR EAX,EAX
00737319  E9 D2 00 00 00            JMP 0x007373f0
LAB_0073731e:
0073731E  8B 0D 04 74 85 00         MOV ECX,dword ptr [0x00857404]
00737324  83 C1 01                  ADD ECX,0x1
00737327  89 0D 04 74 85 00         MOV dword ptr [0x00857404],ECX
0073732D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00737330  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00737333  25 0C 01 00 00            AND EAX,0x10c
00737338  85 C0                     TEST EAX,EAX
0073733A  74 07                     JZ 0x00737343
0073733C  33 C0                     XOR EAX,EAX
0073733E  E9 AD 00 00 00            JMP 0x007373f0
LAB_00737343:
00737343  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00737346  83 3C 8D 2C 72 85 00 00   CMP dword ptr [ECX*0x4 + 0x85722c],0x0
0073734E  75 5A                     JNZ 0x007373aa
00737350  6A 5E                     PUSH 0x5e
00737352  68 98 02 7A 00            PUSH 0x7a0298
00737357  6A 02                     PUSH 0x2
00737359  68 00 10 00 00            PUSH 0x1000
0073735E  E8 A1 9D CC FF            CALL 0x00401104
00737363  83 C4 10                  ADD ESP,0x10
00737366  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00737369  89 04 95 2C 72 85 00      MOV dword ptr [EDX*0x4 + 0x85722c],EAX
00737370  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00737373  83 3C 85 2C 72 85 00 00   CMP dword ptr [EAX*0x4 + 0x85722c],0x0
0073737B  75 2D                     JNZ 0x007373aa
0073737D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00737380  83 C1 14                  ADD ECX,0x14
00737383  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00737386  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
00737389  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073738C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073738F  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00737392  89 10                     MOV dword ptr [EAX],EDX
00737394  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00737397  C7 40 18 02 00 00 00      MOV dword ptr [EAX + 0x18],0x2
0073739E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007373A1  C7 41 04 02 00 00 00      MOV dword ptr [ECX + 0x4],0x2
007373A8  EB 2F                     JMP 0x007373d9
LAB_007373aa:
007373AA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007373AD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007373B0  8B 0C 85 2C 72 85 00      MOV ECX,dword ptr [EAX*0x4 + 0x85722c]
007373B7  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
007373BA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007373BD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007373C0  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
007373C3  89 0A                     MOV dword ptr [EDX],ECX
007373C5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007373C8  C7 42 18 00 10 00 00      MOV dword ptr [EDX + 0x18],0x1000
007373CF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007373D2  C7 40 04 00 10 00 00      MOV dword ptr [EAX + 0x4],0x1000
LAB_007373d9:
007373D9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007373DC  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
007373DF  81 CA 02 11 00 00         OR EDX,0x1102
007373E5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007373E8  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
007373EB  B8 01 00 00 00            MOV EAX,0x1
LAB_007373f0:
007373F0  5F                        POP EDI
007373F1  5E                        POP ESI
007373F2  5B                        POP EBX
007373F3  8B E5                     MOV ESP,EBP
007373F5  5D                        POP EBP
007373F6  C3                        RET
