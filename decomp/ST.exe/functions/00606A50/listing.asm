FUN_00606a50:
00606A50  55                        PUSH EBP
00606A51  8B EC                     MOV EBP,ESP
00606A53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00606A56  3D B4 00 00 00            CMP EAX,0xb4
00606A5B  7F 33                     JG 0x00606a90
00606A5D  74 4C                     JZ 0x00606aab
00606A5F  3D A5 00 00 00            CMP EAX,0xa5
00606A64  77 69                     JA 0x00606acf
00606A66  33 C9                     XOR ECX,ECX
00606A68  8A 88 F0 6A 60 00         MOV CL,byte ptr [EAX + 0x606af0]
switchD_00606a6e::switchD:
00606A6E  FF 24 8D D8 6A 60 00      JMP dword ptr [ECX*0x4 + 0x606ad8]
switchD_00606a6e::caseD_1e:
00606A75  B8 01 00 00 00            MOV EAX,0x1
00606A7A  5D                        POP EBP
00606A7B  C2 04 00                  RET 0x4
switchD_00606a6e::caseD_4b:
00606A7E  B8 02 00 00 00            MOV EAX,0x2
00606A83  5D                        POP EBP
00606A84  C2 04 00                  RET 0x4
switchD_00606a6e::caseD_78:
00606A87  B8 03 00 00 00            MOV EAX,0x3
00606A8C  5D                        POP EBP
00606A8D  C2 04 00                  RET 0x4
LAB_00606a90:
00606A90  05 3D FF FF FF            ADD EAX,0xffffff3d
00606A95  3D 96 00 00 00            CMP EAX,0x96
00606A9A  77 33                     JA 0x00606acf
00606A9C  33 D2                     XOR EDX,EDX
00606A9E  8A 90 B0 6B 60 00         MOV DL,byte ptr [EAX + 0x606bb0]
switchD_00606aa4::switchD:
00606AA4  FF 24 95 98 6B 60 00      JMP dword ptr [EDX*0x4 + 0x606b98]
switchD_00606a6e::caseD_a5:
00606AAB  B8 04 00 00 00            MOV EAX,0x4
00606AB0  5D                        POP EBP
00606AB1  C2 04 00                  RET 0x4
switchD_00606aa4::caseD_d2:
00606AB4  B8 05 00 00 00            MOV EAX,0x5
00606AB9  5D                        POP EBP
00606ABA  C2 04 00                  RET 0x4
switchD_00606aa4::caseD_ff:
00606ABD  B8 06 00 00 00            MOV EAX,0x6
00606AC2  5D                        POP EBP
00606AC3  C2 04 00                  RET 0x4
switchD_00606aa4::caseD_12c:
00606AC6  B8 07 00 00 00            MOV EAX,0x7
00606ACB  5D                        POP EBP
00606ACC  C2 04 00                  RET 0x4
switchD_00606a6e::caseD_0:
00606ACF  33 C0                     XOR EAX,EAX
00606AD1  5D                        POP EBP
00606AD2  C2 04 00                  RET 0x4
