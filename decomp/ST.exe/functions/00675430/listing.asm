FUN_00675430:
00675430  55                        PUSH EBP
00675431  8B EC                     MOV EBP,ESP
00675433  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00675436  3D 00 01 00 00            CMP EAX,0x100
0067543B  77 4B                     JA 0x00675488
0067543D  74 43                     JZ 0x00675482
0067543F  48                        DEC EAX
00675440  83 F8 7F                  CMP EAX,0x7f
00675443  0F 87 8D 00 00 00         JA 0x006754d6
00675449  33 C9                     XOR ECX,ECX
0067544B  8A 88 FC 54 67 00         MOV CL,byte ptr [EAX + 0x6754fc]
switchD_00675451::switchD:
00675451  FF 24 8D DC 54 67 00      JMP dword ptr [ECX*0x4 + 0x6754dc]
switchD_00675451::caseD_1:
00675458  66 B8 1E 00               MOV AX,0x1e
0067545C  5D                        POP EBP
0067545D  C3                        RET
switchD_00675451::caseD_4:
0067545E  66 B8 5F 00               MOV AX,0x5f
00675462  5D                        POP EBP
00675463  C3                        RET
switchD_00675451::caseD_8:
00675464  66 B8 64 00               MOV AX,0x64
00675468  5D                        POP EBP
00675469  C3                        RET
switchD_00675451::caseD_10:
0067546A  66 B8 46 00               MOV AX,0x46
0067546E  5D                        POP EBP
0067546F  C3                        RET
switchD_00675451::caseD_20:
00675470  66 B8 28 00               MOV AX,0x28
00675474  5D                        POP EBP
00675475  C3                        RET
switchD_00675451::caseD_40:
00675476  66 B8 5A 00               MOV AX,0x5a
0067547A  5D                        POP EBP
0067547B  C3                        RET
switchD_00675451::caseD_80:
0067547C  66 B8 6E 00               MOV AX,0x6e
00675480  5D                        POP EBP
00675481  C3                        RET
LAB_00675482:
00675482  66 B8 32 00               MOV AX,0x32
00675486  5D                        POP EBP
00675487  C3                        RET
LAB_00675488:
00675488  3D 00 00 10 00            CMP EAX,0x100000
0067548D  77 32                     JA 0x006754c1
0067548F  74 17                     JZ 0x006754a8
00675491  3D 00 00 04 00            CMP EAX,0x40000
00675496  77 1C                     JA 0x006754b4
00675498  74 14                     JZ 0x006754ae
0067549A  3D 00 00 01 00            CMP EAX,0x10000
0067549F  74 07                     JZ 0x006754a8
006754A1  3D 00 00 02 00            CMP EAX,0x20000
006754A6  75 2E                     JNZ 0x006754d6
FUN_00675430::cf_common_exit_006754A8:
006754A8  66 B8 0A 00               MOV AX,0xa
006754AC  5D                        POP EBP
006754AD  C3                        RET
LAB_006754ae:
006754AE  66 B8 3C 00               MOV AX,0x3c
006754B2  5D                        POP EBP
006754B3  C3                        RET
LAB_006754b4:
006754B4  3D 00 00 08 00            CMP EAX,0x80000
006754B9  75 1B                     JNZ 0x006754d6
006754BB  66 B8 50 00               MOV AX,0x50
006754BF  5D                        POP EBP
006754C0  C3                        RET
LAB_006754c1:
006754C1  3D 00 00 20 00            CMP EAX,0x200000
006754C6  74 E0                     JZ 0x006754a8
006754C8  3D 00 00 40 00            CMP EAX,0x400000
006754CD  74 D9                     JZ 0x006754a8
006754CF  3D 00 00 80 00            CMP EAX,0x800000
006754D4  74 D2                     JZ 0x006754a8
switchD_00675451::caseD_3:
006754D6  66 33 C0                  XOR AX,AX
006754D9  5D                        POP EBP
006754DA  C3                        RET
