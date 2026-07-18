FUN_00740c80:
00740C80  55                        PUSH EBP
00740C81  8B EC                     MOV EBP,ESP
00740C83  83 EC 0C                  SUB ESP,0xc
00740C86  C7 45 F8 FF FF FF FF      MOV dword ptr [EBP + -0x8],0xffffffff
00740C8D  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00740C94  EB 09                     JMP 0x00740c9f
LAB_00740c96:
00740C96  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00740C99  83 C0 01                  ADD EAX,0x1
00740C9C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00740c9f:
00740C9F  83 7D F4 40               CMP dword ptr [EBP + -0xc],0x40
00740CA3  0F 8D FD 00 00 00         JGE 0x00740da6
00740CA9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00740CAC  83 3C 8D A0 A1 85 00 00   CMP dword ptr [ECX*0x4 + 0x85a1a0],0x0
00740CB4  74 6F                     JZ 0x00740d25
00740CB6  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00740CB9  8B 04 95 A0 A1 85 00      MOV EAX,dword ptr [EDX*0x4 + 0x85a1a0]
00740CC0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00740CC3  EB 09                     JMP 0x00740cce
LAB_00740cc5:
00740CC5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00740CC8  83 C1 08                  ADD ECX,0x8
00740CCB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00740cce:
00740CCE  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00740CD1  8B 04 95 A0 A1 85 00      MOV EAX,dword ptr [EDX*0x4 + 0x85a1a0]
00740CD8  05 00 01 00 00            ADD EAX,0x100
00740CDD  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
00740CE0  73 36                     JNC 0x00740d18
00740CE2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00740CE5  0F BE 51 04               MOVSX EDX,byte ptr [ECX + 0x4]
00740CE9  83 E2 01                  AND EDX,0x1
00740CEC  85 D2                     TEST EDX,EDX
00740CEE  75 26                     JNZ 0x00740d16
00740CF0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00740CF3  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
00740CF9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00740CFC  C1 E1 05                  SHL ECX,0x5
00740CFF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00740D02  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00740D05  2B 04 95 A0 A1 85 00      SUB EAX,dword ptr [EDX*0x4 + 0x85a1a0]
00740D0C  C1 F8 03                  SAR EAX,0x3
00740D0F  03 C8                     ADD ECX,EAX
00740D11  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00740D14  EB 02                     JMP 0x00740d18
LAB_00740d16:
00740D16  EB AD                     JMP 0x00740cc5
LAB_00740d18:
00740D18  83 7D F8 FF               CMP dword ptr [EBP + -0x8],-0x1
00740D1C  74 05                     JZ 0x00740d23
00740D1E  E9 83 00 00 00            JMP 0x00740da6
LAB_00740d23:
00740D23  EB 7C                     JMP 0x00740da1
LAB_00740d25:
00740D25  6A 79                     PUSH 0x79
00740D27  68 10 0E 7A 00            PUSH 0x7a0e10
00740D2C  6A 02                     PUSH 0x2
00740D2E  68 00 01 00 00            PUSH 0x100
00740D33  E8 CC 03 CC FF            CALL 0x00401104
00740D38  83 C4 10                  ADD ESP,0x10
00740D3B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00740D3E  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
00740D42  74 5B                     JZ 0x00740d9f
00740D44  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00740D47  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00740D4A  89 14 8D A0 A1 85 00      MOV dword ptr [ECX*0x4 + 0x85a1a0],EDX
00740D51  A1 DC A2 85 00            MOV EAX,[0x0085a2dc]
00740D56  83 C0 20                  ADD EAX,0x20
00740D59  A3 DC A2 85 00            MOV [0x0085a2dc],EAX
00740D5E  EB 09                     JMP 0x00740d69
LAB_00740d60:
00740D60  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00740D63  83 C1 08                  ADD ECX,0x8
00740D66  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00740d69:
00740D69  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00740D6C  8B 04 95 A0 A1 85 00      MOV EAX,dword ptr [EDX*0x4 + 0x85a1a0]
00740D73  05 00 01 00 00            ADD EAX,0x100
00740D78  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
00740D7B  73 19                     JNC 0x00740d96
00740D7D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00740D80  C6 41 04 00               MOV byte ptr [ECX + 0x4],0x0
00740D84  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00740D87  C7 02 FF FF FF FF         MOV dword ptr [EDX],0xffffffff
00740D8D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00740D90  C6 40 05 0A               MOV byte ptr [EAX + 0x5],0xa
00740D94  EB CA                     JMP 0x00740d60
LAB_00740d96:
00740D96  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00740D99  C1 E1 05                  SHL ECX,0x5
00740D9C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_00740d9f:
00740D9F  EB 05                     JMP 0x00740da6
LAB_00740da1:
00740DA1  E9 F0 FE FF FF            JMP 0x00740c96
LAB_00740da6:
00740DA6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00740DA9  8B E5                     MOV ESP,EBP
00740DAB  5D                        POP EBP
00740DAC  C3                        RET
