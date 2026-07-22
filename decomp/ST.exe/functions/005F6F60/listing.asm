STColl3C::sub_005F6F60:
005F6F60  55                        PUSH EBP
005F6F61  8B EC                     MOV EBP,ESP
005F6F63  83 EC 28                  SUB ESP,0x28
005F6F66  53                        PUSH EBX
005F6F67  8B D9                     MOV EBX,ECX
005F6F69  56                        PUSH ESI
005F6F6A  57                        PUSH EDI
005F6F6B  8B 83 DD 02 00 00         MOV EAX,dword ptr [EBX + 0x2dd]
005F6F71  48                        DEC EAX
005F6F72  83 F8 0C                  CMP EAX,0xc
005F6F75  0F 87 F5 11 00 00         JA 0x005f8170
005F6F7B  BF 01 00 00 00            MOV EDI,0x1
005F6F80  33 F6                     XOR ESI,ESI
switchD_005f6f82::switchD:
005F6F82  FF 24 85 78 81 5F 00      JMP dword ptr [EAX*0x4 + 0x5f8178]
switchD_005f6f82::caseD_1:
005F6F89  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F6F8F  8B 83 E1 02 00 00         MOV EAX,dword ptr [EBX + 0x2e1]
005F6F95  3B 81 E4 00 00 00         CMP EAX,dword ptr [ECX + 0xe4]
005F6F9B  0F 87 CF 11 00 00         JA 0x005f8170
005F6FA1  8B 83 EA 02 00 00         MOV EAX,dword ptr [EBX + 0x2ea]
005F6FA7  85 C0                     TEST EAX,EAX
005F6FA9  0F 85 C1 11 00 00         JNZ 0x005f8170
005F6FAF  8B 83 B7 02 00 00         MOV EAX,dword ptr [EBX + 0x2b7]
005F6FB5  85 C0                     TEST EAX,EAX
005F6FB7  7D 79                     JGE 0x005f7032
005F6FB9  8B 93 4D 02 00 00         MOV EDX,dword ptr [EBX + 0x24d]
005F6FBF  8B 83 49 02 00 00         MOV EAX,dword ptr [EBX + 0x249]
005F6FC5  8B 8B 45 02 00 00         MOV ECX,dword ptr [EBX + 0x245]
005F6FCB  52                        PUSH EDX
005F6FCC  50                        PUSH EAX
005F6FCD  51                        PUSH ECX
005F6FCE  8B CB                     MOV ECX,EBX
005F6FD0  E8 AC BA E0 FF            CALL 0x00402a81
005F6FD5  85 C0                     TEST EAX,EAX
005F6FD7  0F 84 93 11 00 00         JZ 0x005f8170
005F6FDD  8B 93 C9 02 00 00         MOV EDX,dword ptr [EBX + 0x2c9]
005F6FE3  8B 83 C5 02 00 00         MOV EAX,dword ptr [EBX + 0x2c5]
005F6FE9  8B 8B C1 02 00 00         MOV ECX,dword ptr [EBX + 0x2c1]
005F6FEF  52                        PUSH EDX
005F6FF0  50                        PUSH EAX
005F6FF1  51                        PUSH ECX
005F6FF2  8B CB                     MOV ECX,EBX
005F6FF4  E8 6A C9 E0 FF            CALL 0x00403963
005F6FF9  84 C0                     TEST AL,AL
005F6FFB  88 83 B6 02 00 00         MOV byte ptr [EBX + 0x2b6],AL
005F7001  74 09                     JZ 0x005f700c
005F7003  6A 01                     PUSH 0x1
005F7005  8B CB                     MOV ECX,EBX
005F7007  E8 82 AD E0 FF            CALL 0x00401d8e
LAB_005f700c:
005F700C  C6 83 BB 02 00 00 01      MOV byte ptr [EBX + 0x2bb],0x1
005F7013  C6 83 9D 02 00 00 01      MOV byte ptr [EBX + 0x29d],0x1
005F701A  C7 83 DD 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x2dd],0x2
005F7024  5F                        POP EDI
005F7025  C6 83 E5 02 00 00 00      MOV byte ptr [EBX + 0x2e5],0x0
005F702C  5E                        POP ESI
005F702D  5B                        POP EBX
005F702E  8B E5                     MOV ESP,EBP
005F7030  5D                        POP EBP
005F7031  C3                        RET
LAB_005f7032:
005F7032  8D 93 85 02 00 00         LEA EDX,[EBX + 0x285]
005F7038  8D 83 81 02 00 00         LEA EAX,[EBX + 0x281]
005F703E  52                        PUSH EDX
005F703F  8D 8B 7D 02 00 00         LEA ECX,[EBX + 0x27d]
005F7045  50                        PUSH EAX
005F7046  51                        PUSH ECX
005F7047  8B CB                     MOV ECX,EBX
005F7049  E8 ED A5 E0 FF            CALL 0x0040163b
005F704E  85 C0                     TEST EAX,EAX
005F7050  0F 84 1A 11 00 00         JZ 0x005f8170
005F7056  6A 02                     PUSH 0x2
005F7058  8B CB                     MOV ECX,EBX
005F705A  E8 61 A3 E0 FF            CALL 0x004013c0
005F705F  85 C0                     TEST EAX,EAX
005F7061  0F 84 09 11 00 00         JZ 0x005f8170
005F7067  66 8B 93 99 02 00 00      MOV DX,word ptr [EBX + 0x299]
005F706E  66 8B 83 95 02 00 00      MOV AX,word ptr [EBX + 0x295]
005F7075  66 8B 8B 91 02 00 00      MOV CX,word ptr [EBX + 0x291]
005F707C  6A 01                     PUSH 0x1
005F707E  52                        PUSH EDX
005F707F  50                        PUSH EAX
005F7080  51                        PUSH ECX
005F7081  8B CB                     MOV ECX,EBX
005F7083  E8 D7 B8 E0 FF            CALL 0x0040295f
005F7088  85 C0                     TEST EAX,EAX
005F708A  0F 85 E0 10 00 00         JNZ 0x005f8170
005F7090  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
005F7096  C7 83 DD 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x2dd],0x3
005F70A0  8B CE                     MOV ECX,ESI
005F70A2  E8 E9 B9 E0 FF            CALL 0x00402a90
005F70A7  C6 83 BB 02 00 00 02      MOV byte ptr [EBX + 0x2bb],0x2
005F70AE  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
005F70B4  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
005F70B8  48                        DEC EAX
005F70B9  89 83 D1 02 00 00         MOV dword ptr [EBX + 0x2d1],EAX
005F70BF  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
005F70C5  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
005F70C9  8B 44 81 30               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x30]
005F70CD  52                        PUSH EDX
005F70CE  50                        PUSH EAX
005F70CF  8B CE                     MOV ECX,ESI
005F70D1  E8 97 A0 E0 FF            CALL 0x0040116d
005F70D6  6A 02                     PUSH 0x2
005F70D8  6A 00                     PUSH 0x0
005F70DA  6A 00                     PUSH 0x0
005F70DC  8B CB                     MOV ECX,EBX
005F70DE  E8 D0 C8 E0 FF            CALL 0x004039b3
005F70E3  8B 83 A0 02 00 00         MOV EAX,dword ptr [EBX + 0x2a0]
005F70E9  85 C0                     TEST EAX,EAX
005F70EB  0F 85 7F 10 00 00         JNZ 0x005f8170
005F70F1  5F                        POP EDI
005F70F2  C6 83 9F 02 00 00 00      MOV byte ptr [EBX + 0x29f],0x0
005F70F9  5E                        POP ESI
005F70FA  5B                        POP EBX
005F70FB  8B E5                     MOV ESP,EBP
005F70FD  5D                        POP EBP
005F70FE  C3                        RET
switchD_005f6f82::caseD_2:
005F70FF  8A 83 E5 02 00 00         MOV AL,byte ptr [EBX + 0x2e5]
005F7105  84 C0                     TEST AL,AL
005F7107  74 11                     JZ 0x005f711a
005F7109  5F                        POP EDI
005F710A  C7 83 DD 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x2dd],0x1
005F7114  5E                        POP ESI
005F7115  5B                        POP EBX
005F7116  8B E5                     MOV ESP,EBP
005F7118  5D                        POP EBP
005F7119  C3                        RET
LAB_005f711a:
005F711A  8B 83 EA 02 00 00         MOV EAX,dword ptr [EBX + 0x2ea]
005F7120  85 C0                     TEST EAX,EAX
005F7122  74 26                     JZ 0x005f714a
005F7124  8A 83 9E 02 00 00         MOV AL,byte ptr [EBX + 0x29e]
005F712A  84 C0                     TEST AL,AL
005F712C  74 07                     JZ 0x005f7135
005F712E  8B CB                     MOV ECX,EBX
005F7130  E8 AE D9 E0 FF            CALL 0x00404ae3
LAB_005f7135:
005F7135  8B 83 A0 02 00 00         MOV EAX,dword ptr [EBX + 0x2a0]
005F713B  85 C0                     TEST EAX,EAX
005F713D  0F 8E 25 09 00 00         JLE 0x005f7a68
005F7143  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
LAB_005f714a:
005F714A  8A 83 9F 02 00 00         MOV AL,byte ptr [EBX + 0x29f]
005F7150  84 C0                     TEST AL,AL
005F7152  0F 84 8B 00 00 00         JZ 0x005f71e3
005F7158  8D 8B 85 02 00 00         LEA ECX,[EBX + 0x285]
005F715E  8D 93 81 02 00 00         LEA EDX,[EBX + 0x281]
005F7164  51                        PUSH ECX
005F7165  8D 83 7D 02 00 00         LEA EAX,[EBX + 0x27d]
005F716B  52                        PUSH EDX
005F716C  50                        PUSH EAX
005F716D  8B CB                     MOV ECX,EBX
005F716F  E8 C7 A4 E0 FF            CALL 0x0040163b
005F7174  85 C0                     TEST EAX,EAX
005F7176  0F 84 D2 02 00 00         JZ 0x005f744e
005F717C  6A 02                     PUSH 0x2
005F717E  8B CB                     MOV ECX,EBX
005F7180  E8 3B A2 E0 FF            CALL 0x004013c0
005F7185  85 C0                     TEST EAX,EAX
005F7187  0F 84 E3 0F 00 00         JZ 0x005f8170
005F718D  66 8B 8B 99 02 00 00      MOV CX,word ptr [EBX + 0x299]
005F7194  66 8B 93 95 02 00 00      MOV DX,word ptr [EBX + 0x295]
005F719B  66 8B 83 91 02 00 00      MOV AX,word ptr [EBX + 0x291]
005F71A2  6A 01                     PUSH 0x1
005F71A4  51                        PUSH ECX
005F71A5  52                        PUSH EDX
005F71A6  50                        PUSH EAX
005F71A7  8B CB                     MOV ECX,EBX
005F71A9  E8 B1 B7 E0 FF            CALL 0x0040295f
005F71AE  85 C0                     TEST EAX,EAX
005F71B0  0F 85 BA 0F 00 00         JNZ 0x005f8170
005F71B6  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
005F71BC  C7 83 DD 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x2dd],0x3
005F71C6  8B CE                     MOV ECX,ESI
005F71C8  E8 C3 B8 E0 FF            CALL 0x00402a90
005F71CD  C6 83 BB 02 00 00 02      MOV byte ptr [EBX + 0x2bb],0x2
005F71D4  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
005F71DA  0F BF 41 23               MOVSX EAX,word ptr [ECX + 0x23]
005F71DE  E9 1D 02 00 00            JMP 0x005f7400
LAB_005f71e3:
005F71E3  8A 83 9E 02 00 00         MOV AL,byte ptr [EBX + 0x29e]
005F71E9  84 C0                     TEST AL,AL
005F71EB  0F 84 5E 01 00 00         JZ 0x005f734f
005F71F1  8B 8B 89 02 00 00         MOV ECX,dword ptr [EBX + 0x289]
005F71F7  6A 00                     PUSH 0x0
005F71F9  6A 00                     PUSH 0x0
005F71FB  6A 00                     PUSH 0x0
005F71FD  6A 00                     PUSH 0x0
005F71FF  51                        PUSH ECX
005F7200  8B CB                     MOV ECX,EBX
005F7202  E8 D3 DC E0 FF            CALL 0x00404eda
005F7207  85 C0                     TEST EAX,EAX
005F7209  0F 84 32 01 00 00         JZ 0x005f7341
005F720F  6A 02                     PUSH 0x2
005F7211  8B CB                     MOV ECX,EBX
005F7213  E8 A8 A1 E0 FF            CALL 0x004013c0
005F7218  85 C0                     TEST EAX,EAX
005F721A  0F 84 50 0F 00 00         JZ 0x005f8170
005F7220  66 8B 93 99 02 00 00      MOV DX,word ptr [EBX + 0x299]
005F7227  66 8B 83 95 02 00 00      MOV AX,word ptr [EBX + 0x295]
005F722E  66 8B 8B 91 02 00 00      MOV CX,word ptr [EBX + 0x291]
005F7235  6A 01                     PUSH 0x1
005F7237  52                        PUSH EDX
005F7238  50                        PUSH EAX
005F7239  51                        PUSH ECX
005F723A  8B CB                     MOV ECX,EBX
005F723C  E8 1E B7 E0 FF            CALL 0x0040295f
005F7241  85 C0                     TEST EAX,EAX
005F7243  0F 85 27 0F 00 00         JNZ 0x005f8170
005F7249  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
005F724F  C7 83 DD 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x2dd],0x3
005F7259  8B CE                     MOV ECX,ESI
005F725B  E8 30 B8 E0 FF            CALL 0x00402a90
005F7260  C6 83 BB 02 00 00 02      MOV byte ptr [EBX + 0x2bb],0x2
005F7267  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
005F726D  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
005F7271  48                        DEC EAX
005F7272  89 83 D1 02 00 00         MOV dword ptr [EBX + 0x2d1],EAX
005F7278  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
005F727E  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
005F7282  8B 44 81 30               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x30]
005F7286  52                        PUSH EDX
005F7287  50                        PUSH EAX
005F7288  8B CE                     MOV ECX,ESI
005F728A  E8 DE 9E E0 FF            CALL 0x0040116d
005F728F  6A 02                     PUSH 0x2
005F7291  6A 00                     PUSH 0x0
005F7293  6A 00                     PUSH 0x0
005F7295  8B CB                     MOV ECX,EBX
005F7297  E8 17 C7 E0 FF            CALL 0x004039b3
005F729C  C6 83 BB 02 00 00 01      MOV byte ptr [EBX + 0x2bb],0x1
005F72A3  C6 83 9D 02 00 00 00      MOV byte ptr [EBX + 0x29d],0x0
LAB_005f72aa:
005F72AA  66 8B 8B 99 02 00 00      MOV CX,word ptr [EBX + 0x299]
005F72B1  66 8B 83 95 02 00 00      MOV AX,word ptr [EBX + 0x295]
005F72B8  66 69 C9 C8 00            IMUL CX,CX,0xc8
005F72BD  66 69 C0 C9 00            IMUL AX,AX,0xc9
005F72C2  83 C1 64                  ADD ECX,0x64
005F72C5  83 C0 64                  ADD EAX,0x64
005F72C8  0F BF D1                  MOVSX EDX,CX
005F72CB  52                        PUSH EDX
005F72CC  66 8B 93 91 02 00 00      MOV DX,word ptr [EBX + 0x291]
005F72D3  66 69 D2 C9 00            IMUL DX,DX,0xc9
005F72D8  83 C2 64                  ADD EDX,0x64
005F72DB  0F BF C8                  MOVSX ECX,AX
005F72DE  0F BF C2                  MOVSX EAX,DX
005F72E1  51                        PUSH ECX
005F72E2  50                        PUSH EAX
005F72E3  8B CB                     MOV ECX,EBX
005F72E5  E8 97 B7 E0 FF            CALL 0x00402a81
005F72EA  85 C0                     TEST EAX,EAX
005F72EC  0F 84 7E 0E 00 00         JZ 0x005f8170
005F72F2  8B CB                     MOV ECX,EBX
005F72F4  E8 19 B8 E0 FF            CALL 0x00402b12
005F72F9  6A 00                     PUSH 0x0
005F72FB  8B CE                     MOV ECX,ESI
005F72FD  E8 80 B6 E0 FF            CALL 0x00402982
005F7302  6A 02                     PUSH 0x2
005F7304  8B CB                     MOV ECX,EBX
005F7306  E8 96 B0 E0 FF            CALL 0x004023a1
005F730B  C6 83 BB 02 00 00 02      MOV byte ptr [EBX + 0x2bb],0x2
005F7312  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
005F7318  0F BF 41 23               MOVSX EAX,word ptr [ECX + 0x23]
005F731C  48                        DEC EAX
005F731D  89 83 D1 02 00 00         MOV dword ptr [EBX + 0x2d1],EAX
005F7323  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
005F7329  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
005F732D  8B 44 81 30               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x30]
005F7331  52                        PUSH EDX
005F7332  50                        PUSH EAX
005F7333  8B CE                     MOV ECX,ESI
005F7335  E8 33 9E E0 FF            CALL 0x0040116d
005F733A  5F                        POP EDI
005F733B  5E                        POP ESI
005F733C  5B                        POP EBX
005F733D  8B E5                     MOV ESP,EBP
005F733F  5D                        POP EBP
005F7340  C3                        RET
LAB_005f7341:
005F7341  8B CB                     MOV ECX,EBX
005F7343  E8 9B D7 E0 FF            CALL 0x00404ae3
005F7348  5F                        POP EDI
005F7349  5E                        POP ESI
005F734A  5B                        POP EBX
005F734B  8B E5                     MOV ESP,EBP
005F734D  5D                        POP EBP
005F734E  C3                        RET
LAB_005f734f:
005F734F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F7355  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F735B  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
005F735E  03 D1                     ADD EDX,ECX
005F7360  F6 C2 03                  TEST DL,0x3
005F7363  0F 85 07 0E 00 00         JNZ 0x005f8170
005F7369  6A 00                     PUSH 0x0
005F736B  8B CB                     MOV ECX,EBX
005F736D  E8 D7 C6 E0 FF            CALL 0x00403a49
005F7372  85 C0                     TEST EAX,EAX
005F7374  74 11                     JZ 0x005f7387
005F7376  5F                        POP EDI
005F7377  C7 83 8D 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x28d],0x0
005F7381  5E                        POP ESI
005F7382  5B                        POP EBX
005F7383  8B E5                     MOV ESP,EBP
005F7385  5D                        POP EBP
005F7386  C3                        RET
LAB_005f7387:
005F7387  8B 93 8D 02 00 00         MOV EDX,dword ptr [EBX + 0x28d]
005F738D  42                        INC EDX
005F738E  8B C2                     MOV EAX,EDX
005F7390  89 93 8D 02 00 00         MOV dword ptr [EBX + 0x28d],EDX
005F7396  83 F8 05                  CMP EAX,0x5
005F7399  0F 8E A6 00 00 00         JLE 0x005f7445
005F739F  6A 02                     PUSH 0x2
005F73A1  8B CB                     MOV ECX,EBX
005F73A3  E8 18 A0 E0 FF            CALL 0x004013c0
005F73A8  85 C0                     TEST EAX,EAX
005F73AA  0F 84 C0 0D 00 00         JZ 0x005f8170
005F73B0  66 8B 83 99 02 00 00      MOV AX,word ptr [EBX + 0x299]
005F73B7  66 8B 8B 95 02 00 00      MOV CX,word ptr [EBX + 0x295]
005F73BE  66 8B 93 91 02 00 00      MOV DX,word ptr [EBX + 0x291]
005F73C5  6A 01                     PUSH 0x1
005F73C7  50                        PUSH EAX
005F73C8  51                        PUSH ECX
005F73C9  52                        PUSH EDX
005F73CA  8B CB                     MOV ECX,EBX
005F73CC  E8 8E B5 E0 FF            CALL 0x0040295f
005F73D1  85 C0                     TEST EAX,EAX
005F73D3  0F 85 97 0D 00 00         JNZ 0x005f8170
005F73D9  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
005F73DF  C7 83 DD 02 00 00 03 00 00 00  MOV dword ptr [EBX + 0x2dd],0x3
005F73E9  8B CE                     MOV ECX,ESI
005F73EB  E8 A0 B6 E0 FF            CALL 0x00402a90
005F73F0  C6 83 BB 02 00 00 02      MOV byte ptr [EBX + 0x2bb],0x2
005F73F7  A1 24 67 80 00            MOV EAX,[0x00806724]
005F73FC  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
LAB_005f7400:
005F7400  48                        DEC EAX
005F7401  89 83 D1 02 00 00         MOV dword ptr [EBX + 0x2d1],EAX
005F7407  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
005F740D  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
005F7411  8B 44 81 30               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x30]
005F7415  52                        PUSH EDX
005F7416  50                        PUSH EAX
005F7417  8B CE                     MOV ECX,ESI
005F7419  E8 4F 9D E0 FF            CALL 0x0040116d
005F741E  6A 02                     PUSH 0x2
005F7420  6A 00                     PUSH 0x0
005F7422  6A 00                     PUSH 0x0
005F7424  8B CB                     MOV ECX,EBX
005F7426  E8 88 C5 E0 FF            CALL 0x004039b3
005F742B  8B 83 A0 02 00 00         MOV EAX,dword ptr [EBX + 0x2a0]
005F7431  85 C0                     TEST EAX,EAX
005F7433  0F 85 71 FE FF FF         JNZ 0x005f72aa
005F7439  C6 83 9F 02 00 00 00      MOV byte ptr [EBX + 0x29f],0x0
005F7440  E9 65 FE FF FF            JMP 0x005f72aa
LAB_005f7445:
005F7445  83 F8 0A                  CMP EAX,0xa
005F7448  0F 8E 22 0D 00 00         JLE 0x005f8170
LAB_005f744e:
005F744E  68 C8 00 00 00            PUSH 0xc8
005F7453  8B CB                     MOV ECX,EBX
005F7455  E8 D9 CC E0 FF            CALL 0x00404133
005F745A  5F                        POP EDI
005F745B  5E                        POP ESI
005F745C  5B                        POP EBX
005F745D  8B E5                     MOV ESP,EBP
005F745F  5D                        POP EBP
005F7460  C3                        RET
switchD_005f6f82::caseD_3:
005F7461  8B 83 E6 02 00 00         MOV EAX,dword ptr [EBX + 0x2e6]
005F7467  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
005F746A  42                        INC EDX
005F746B  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
005F746E  8B 83 E6 02 00 00         MOV EAX,dword ptr [EBX + 0x2e6]
005F7474  83 78 20 23               CMP dword ptr [EAX + 0x20],0x23
005F7478  7D 09                     JGE 0x005f7483
005F747A  8B CB                     MOV ECX,EBX
005F747C  E8 D0 CC E0 FF            CALL 0x00404151
005F7481  EB 35                     JMP 0x005f74b8
LAB_005f7483:
005F7483  C7 83 DD 02 00 00 04 00 00 00  MOV dword ptr [EBX + 0x2dd],0x4
005F748D  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005F7490  3B C6                     CMP EAX,ESI
005F7492  7C 24                     JL 0x005f74b8
005F7494  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
005F749A  56                        PUSH ESI
005F749B  6A FF                     PUSH -0x1
005F749D  57                        PUSH EDI
005F749E  50                        PUSH EAX
005F749F  E8 AC 2B 0F 00            CALL 0x006ea050
005F74A4  8B 8B E6 02 00 00         MOV ECX,dword ptr [EBX + 0x2e6]
005F74AA  C7 41 04 FF FF FF FF      MOV dword ptr [ECX + 0x4],0xffffffff
005F74B1  8B CB                     MOV ECX,EBX
005F74B3  E8 5F C0 E0 FF            CALL 0x00403517
switchD_005f6f82::caseD_4:
005F74B8  8B CB                     MOV ECX,EBX
005F74BA  E8 F4 E2 E0 FF            CALL 0x004057b3
005F74BF  85 C0                     TEST EAX,EAX
005F74C1  0F 8D A9 0C 00 00         JGE 0x005f8170
005F74C7  39 B3 EA 02 00 00         CMP dword ptr [EBX + 0x2ea],ESI
005F74CD  74 24                     JZ 0x005f74f3
005F74CF  8A 83 9E 02 00 00         MOV AL,byte ptr [EBX + 0x29e]
005F74D5  84 C0                     TEST AL,AL
005F74D7  74 07                     JZ 0x005f74e0
005F74D9  8B CB                     MOV ECX,EBX
005F74DB  E8 03 D6 E0 FF            CALL 0x00404ae3
LAB_005f74e0:
005F74E0  39 B3 A0 02 00 00         CMP dword ptr [EBX + 0x2a0],ESI
005F74E6  0F 8E 7C 05 00 00         JLE 0x005f7a68
005F74EC  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
LAB_005f74f3:
005F74F3  8A 83 9E 02 00 00         MOV AL,byte ptr [EBX + 0x29e]
005F74F9  84 C0                     TEST AL,AL
005F74FB  75 41                     JNZ 0x005f753e
005F74FD  C7 83 DD 02 00 00 0C 00 00 00  MOV dword ptr [EBX + 0x2dd],0xc
005F7507  89 B3 EF 02 00 00         MOV dword ptr [EBX + 0x2ef],ESI
005F750D  89 7B 76                  MOV dword ptr [EBX + 0x76],EDI
005F7510  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F7516  5F                        POP EDI
005F7517  5E                        POP ESI
005F7518  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005F751E  89 83 D5 02 00 00         MOV dword ptr [EBX + 0x2d5],EAX
005F7524  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F752A  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F7530  83 C2 32                  ADD EDX,0x32
005F7533  89 93 D9 02 00 00         MOV dword ptr [EBX + 0x2d9],EDX
005F7539  5B                        POP EBX
005F753A  8B E5                     MOV ESP,EBP
005F753C  5D                        POP EBP
005F753D  C3                        RET
LAB_005f753e:
005F753E  8B CB                     MOV ECX,EBX
005F7540  E8 69 BA E0 FF            CALL 0x00402fae
005F7545  3B C6                     CMP EAX,ESI
005F7547  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005F754A  7C 3A                     JL 0x005f7586
005F754C  83 F8 02                  CMP EAX,0x2
005F754F  75 1D                     JNZ 0x005f756e
005F7551  8A 83 9F 02 00 00         MOV AL,byte ptr [EBX + 0x29f]
005F7557  5F                        POP EDI
005F7558  F6 D8                     NEG AL
005F755A  1B C0                     SBB EAX,EAX
005F755C  5E                        POP ESI
005F755D  83 E0 02                  AND EAX,0x2
005F7560  83 C0 08                  ADD EAX,0x8
005F7563  89 83 DD 02 00 00         MOV dword ptr [EBX + 0x2dd],EAX
005F7569  5B                        POP EBX
005F756A  8B E5                     MOV ESP,EBP
005F756C  5D                        POP EBP
005F756D  C3                        RET
LAB_005f756e:
005F756E  C7 83 DD 02 00 00 05 00 00 00  MOV dword ptr [EBX + 0x2dd],0x5
005F7578  5F                        POP EDI
005F7579  C6 83 9D 02 00 00 00      MOV byte ptr [EBX + 0x29d],0x0
005F7580  5E                        POP ESI
005F7581  5B                        POP EBX
005F7582  8B E5                     MOV ESP,EBP
005F7584  5D                        POP EBP
005F7585  C3                        RET
LAB_005f7586:
005F7586  C7 83 DD 02 00 00 0C 00 00 00  MOV dword ptr [EBX + 0x2dd],0xc
005F7590  89 B3 EF 02 00 00         MOV dword ptr [EBX + 0x2ef],ESI
005F7596  89 7B 76                  MOV dword ptr [EBX + 0x76],EDI
005F7599  E9 0C 04 00 00            JMP 0x005f79aa
switchD_005f6f82::caseD_c:
005F759E  8B 43 76                  MOV EAX,dword ptr [EBX + 0x76]
005F75A1  33 FF                     XOR EDI,EDI
005F75A3  83 F8 01                  CMP EAX,0x1
005F75A6  74 0B                     JZ 0x005f75b3
005F75A8  3B C7                     CMP EAX,EDI
005F75AA  75 0E                     JNZ 0x005f75ba
005F75AC  66 83 7B 6E 2F            CMP word ptr [EBX + 0x6e],0x2f
005F75B1  74 07                     JZ 0x005f75ba
LAB_005f75b3:
005F75B3  8B CB                     MOV ECX,EBX
005F75B5  E8 F2 CF E0 FF            CALL 0x004045ac
LAB_005f75ba:
005F75BA  39 BB EA 02 00 00         CMP dword ptr [EBX + 0x2ea],EDI
005F75C0  74 24                     JZ 0x005f75e6
005F75C2  8A 83 9E 02 00 00         MOV AL,byte ptr [EBX + 0x29e]
005F75C8  84 C0                     TEST AL,AL
005F75CA  74 07                     JZ 0x005f75d3
005F75CC  8B CB                     MOV ECX,EBX
005F75CE  E8 10 D5 E0 FF            CALL 0x00404ae3
LAB_005f75d3:
005F75D3  39 BB A0 02 00 00         CMP dword ptr [EBX + 0x2a0],EDI
005F75D9  0F 8E 89 04 00 00         JLE 0x005f7a68
005F75DF  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
LAB_005f75e6:
005F75E6  8A 83 9F 02 00 00         MOV AL,byte ptr [EBX + 0x29f]
005F75EC  84 C0                     TEST AL,AL
005F75EE  0F 84 63 01 00 00         JZ 0x005f7757
005F75F4  39 BB A0 02 00 00         CMP dword ptr [EBX + 0x2a0],EDI
005F75FA  0F 84 70 0B 00 00         JZ 0x005f8170
005F7600  8B 83 EF 02 00 00         MOV EAX,dword ptr [EBX + 0x2ef]
005F7606  3B C7                     CMP EAX,EDI
005F7608  0F 85 19 03 00 00         JNZ 0x005f7927
005F760E  0F BF 53 5D               MOVSX EDX,word ptr [EBX + 0x5d]
005F7612  0F BF 43 5B               MOVSX EAX,word ptr [EBX + 0x5b]
005F7616  8B 8B 61 02 00 00         MOV ECX,dword ptr [EBX + 0x261]
005F761C  52                        PUSH EDX
005F761D  8B 93 5D 02 00 00         MOV EDX,dword ptr [EBX + 0x25d]
005F7623  50                        PUSH EAX
005F7624  51                        PUSH ECX
005F7625  52                        PUSH EDX
005F7626  E8 A5 59 0B 00            CALL 0x006acfd0
005F762B  83 F8 03                  CMP EAX,0x3
005F762E  0F 8E AF 00 00 00         JLE 0x005f76e3
005F7634  8D 83 85 02 00 00         LEA EAX,[EBX + 0x285]
005F763A  8D 8B 81 02 00 00         LEA ECX,[EBX + 0x281]
005F7640  50                        PUSH EAX
005F7641  8D 93 7D 02 00 00         LEA EDX,[EBX + 0x27d]
005F7647  51                        PUSH ECX
005F7648  52                        PUSH EDX
005F7649  8B CB                     MOV ECX,EBX
005F764B  E8 EB 9F E0 FF            CALL 0x0040163b
005F7650  85 C0                     TEST EAX,EAX
005F7652  BE 05 00 00 00            MOV ESI,0x5
005F7657  74 6D                     JZ 0x005f76c6
005F7659  8D 45 FA                  LEA EAX,[EBP + -0x6]
005F765C  8D 4D FE                  LEA ECX,[EBP + -0x2]
005F765F  50                        PUSH EAX
005F7660  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F7663  51                        PUSH ECX
005F7664  52                        PUSH EDX
005F7665  8B CB                     MOV ECX,EBX
005F7667  E8 59 A2 E0 FF            CALL 0x004018c5
005F766C  8D 45 F4                  LEA EAX,[EBP + -0xc]
005F766F  8D 4D EC                  LEA ECX,[EBP + -0x14]
005F7672  50                        PUSH EAX
005F7673  8D 55 F0                  LEA EDX,[EBP + -0x10]
005F7676  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
005F767A  51                        PUSH ECX
005F767B  52                        PUSH EDX
005F767C  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
005F7680  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
005F7684  50                        PUSH EAX
005F7685  51                        PUSH ECX
005F7686  8D 45 E8                  LEA EAX,[EBP + -0x18]
005F7689  52                        PUSH EDX
005F768A  50                        PUSH EAX
005F768B  8B CB                     MOV ECX,EBX
005F768D  E8 35 AA E0 FF            CALL 0x004020c7
005F7692  85 C0                     TEST EAX,EAX
005F7694  74 30                     JZ 0x005f76c6
005F7696  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F7699  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005F769C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005F769F  51                        PUSH ECX
005F76A0  52                        PUSH EDX
005F76A1  50                        PUSH EAX
005F76A2  8B CB                     MOV ECX,EBX
005F76A4  E8 7B C5 E0 FF            CALL 0x00403c24
005F76A9  85 C0                     TEST EAX,EAX
005F76AB  74 19                     JZ 0x005f76c6
005F76AD  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
005F76B0  89 B3 DD 02 00 00         MOV dword ptr [EBX + 0x2dd],ESI
005F76B6  C6 83 BB 02 00 00 01      MOV byte ptr [EBX + 0x2bb],0x1
005F76BD  88 8B 9D 02 00 00         MOV byte ptr [EBX + 0x29d],CL
005F76C3  89 7B 76                  MOV dword ptr [EBX + 0x76],EDI
LAB_005f76c6:
005F76C6  39 B3 DD 02 00 00         CMP dword ptr [EBX + 0x2dd],ESI
005F76CC  0F 84 9E 0A 00 00         JZ 0x005f8170
STColl3C::sub_005F6F60::cf_common_exit_005F76D2:
005F76D2  5F                        POP EDI
005F76D3  C7 83 EF 02 00 00 10 00 00 00  MOV dword ptr [EBX + 0x2ef],0x10
005F76DD  5E                        POP ESI
005F76DE  5B                        POP EBX
005F76DF  8B E5                     MOV ESP,EBP
005F76E1  5D                        POP EBP
005F76E2  C3                        RET
LAB_005f76e3:
005F76E3  8D 93 85 02 00 00         LEA EDX,[EBX + 0x285]
005F76E9  8D 83 81 02 00 00         LEA EAX,[EBX + 0x281]
005F76EF  52                        PUSH EDX
005F76F0  8D 8B 7D 02 00 00         LEA ECX,[EBX + 0x27d]
005F76F6  50                        PUSH EAX
005F76F7  51                        PUSH ECX
005F76F8  8B CB                     MOV ECX,EBX
005F76FA  E8 3C 9F E0 FF            CALL 0x0040163b
005F76FF  85 C0                     TEST EAX,EAX
005F7701  74 CF                     JZ 0x005f76d2
005F7703  8B CB                     MOV ECX,EBX
005F7705  E8 A4 B8 E0 FF            CALL 0x00402fae
005F770A  3B C7                     CMP EAX,EDI
005F770C  0F 8C 5E 0A 00 00         JL 0x005f8170
005F7712  83 F8 02                  CMP EAX,0x2
005F7715  75 1E                     JNZ 0x005f7735
005F7717  8A 83 9F 02 00 00         MOV AL,byte ptr [EBX + 0x29f]
005F771D  84 C0                     TEST AL,AL
005F771F  74 14                     JZ 0x005f7735
005F7721  89 7B 76                  MOV dword ptr [EBX + 0x76],EDI
005F7724  5F                        POP EDI
005F7725  C7 83 DD 02 00 00 0A 00 00 00  MOV dword ptr [EBX + 0x2dd],0xa
005F772F  5E                        POP ESI
005F7730  5B                        POP EBX
005F7731  8B E5                     MOV ESP,EBP
005F7733  5D                        POP EBP
005F7734  C3                        RET
LAB_005f7735:
005F7735  C6 83 BB 02 00 00 01      MOV byte ptr [EBX + 0x2bb],0x1
005F773C  89 7B 76                  MOV dword ptr [EBX + 0x76],EDI
005F773F  C6 83 9D 02 00 00 00      MOV byte ptr [EBX + 0x29d],0x0
005F7746  5F                        POP EDI
005F7747  C7 83 DD 02 00 00 05 00 00 00  MOV dword ptr [EBX + 0x2dd],0x5
005F7751  5E                        POP ESI
005F7752  5B                        POP EBX
005F7753  8B E5                     MOV ESP,EBP
005F7755  5D                        POP EBP
005F7756  C3                        RET
LAB_005f7757:
005F7757  8A 83 9E 02 00 00         MOV AL,byte ptr [EBX + 0x29e]
005F775D  84 C0                     TEST AL,AL
005F775F  0F 84 B2 00 00 00         JZ 0x005f7817
005F7765  8B 93 89 02 00 00         MOV EDX,dword ptr [EBX + 0x289]
005F776B  57                        PUSH EDI
005F776C  57                        PUSH EDI
005F776D  57                        PUSH EDI
005F776E  57                        PUSH EDI
005F776F  52                        PUSH EDX
005F7770  8B CB                     MOV ECX,EBX
005F7772  E8 63 D7 E0 FF            CALL 0x00404eda
005F7777  85 C0                     TEST EAX,EAX
005F7779  0F 84 F1 09 00 00         JZ 0x005f8170
005F777F  6A 02                     PUSH 0x2
005F7781  8B CB                     MOV ECX,EBX
005F7783  E8 38 9C E0 FF            CALL 0x004013c0
005F7788  85 C0                     TEST EAX,EAX
005F778A  0F 84 E0 09 00 00         JZ 0x005f8170
005F7790  8D 45 FA                  LEA EAX,[EBP + -0x6]
005F7793  8D 4D FE                  LEA ECX,[EBP + -0x2]
005F7796  50                        PUSH EAX
005F7797  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F779A  51                        PUSH ECX
005F779B  52                        PUSH EDX
005F779C  8B CB                     MOV ECX,EBX
005F779E  E8 22 A1 E0 FF            CALL 0x004018c5
005F77A3  8D 45 F4                  LEA EAX,[EBP + -0xc]
005F77A6  8D 4D EC                  LEA ECX,[EBP + -0x14]
005F77A9  50                        PUSH EAX
005F77AA  8D 55 F0                  LEA EDX,[EBP + -0x10]
005F77AD  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
005F77B1  51                        PUSH ECX
005F77B2  52                        PUSH EDX
005F77B3  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
005F77B7  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
005F77BB  50                        PUSH EAX
005F77BC  51                        PUSH ECX
005F77BD  8D 45 E8                  LEA EAX,[EBP + -0x18]
005F77C0  52                        PUSH EDX
005F77C1  50                        PUSH EAX
005F77C2  8B CB                     MOV ECX,EBX
005F77C4  E8 FE A8 E0 FF            CALL 0x004020c7
005F77C9  85 C0                     TEST EAX,EAX
005F77CB  0F 84 9F 09 00 00         JZ 0x005f8170
005F77D1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F77D4  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005F77D7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005F77DA  51                        PUSH ECX
005F77DB  52                        PUSH EDX
005F77DC  50                        PUSH EAX
005F77DD  8B CB                     MOV ECX,EBX
005F77DF  E8 40 C4 E0 FF            CALL 0x00403c24
005F77E4  85 C0                     TEST EAX,EAX
005F77E6  0F 84 84 09 00 00         JZ 0x005f8170
005F77EC  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
005F77EF  C7 83 DD 02 00 00 05 00 00 00  MOV dword ptr [EBX + 0x2dd],0x5
005F77F9  C6 83 BB 02 00 00 01      MOV byte ptr [EBX + 0x2bb],0x1
005F7800  89 7B 76                  MOV dword ptr [EBX + 0x76],EDI
005F7803  88 8B 9D 02 00 00         MOV byte ptr [EBX + 0x29d],CL
005F7809  5F                        POP EDI
005F780A  C6 83 9F 02 00 00 00      MOV byte ptr [EBX + 0x29f],0x0
005F7811  5E                        POP ESI
005F7812  5B                        POP EBX
005F7813  8B E5                     MOV ESP,EBP
005F7815  5D                        POP EBP
005F7816  C3                        RET
LAB_005f7817:
005F7817  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F781D  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
005F7820  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005F7826  03 C8                     ADD ECX,EAX
005F7828  F6 C1 03                  TEST CL,0x3
005F782B  75 0F                     JNZ 0x005f783c
005F782D  57                        PUSH EDI
005F782E  8B CB                     MOV ECX,EBX
005F7830  E8 14 C2 E0 FF            CALL 0x00403a49
005F7835  5F                        POP EDI
005F7836  5E                        POP ESI
005F7837  5B                        POP EBX
005F7838  8B E5                     MOV ESP,EBP
005F783A  5D                        POP EBP
005F783B  C3                        RET
LAB_005f783c:
005F783C  3B 83 D9 02 00 00         CMP EAX,dword ptr [EBX + 0x2d9]
005F7842  0F 86 28 09 00 00         JBE 0x005f8170
005F7848  0F BF 53 5D               MOVSX EDX,word ptr [EBX + 0x5d]
005F784C  0F BF 43 5B               MOVSX EAX,word ptr [EBX + 0x5b]
005F7850  8B 8B 61 02 00 00         MOV ECX,dword ptr [EBX + 0x261]
005F7856  52                        PUSH EDX
005F7857  8B 93 5D 02 00 00         MOV EDX,dword ptr [EBX + 0x25d]
005F785D  50                        PUSH EAX
005F785E  51                        PUSH ECX
005F785F  52                        PUSH EDX
005F7860  E8 6B 57 0B 00            CALL 0x006acfd0
005F7865  83 F8 03                  CMP EAX,0x3
005F7868  0F 8E 02 09 00 00         JLE 0x005f8170
005F786E  8B 83 EF 02 00 00         MOV EAX,dword ptr [EBX + 0x2ef]
005F7874  3B C7                     CMP EAX,EDI
005F7876  0F 85 AB 00 00 00         JNZ 0x005f7927
005F787C  8D 83 85 02 00 00         LEA EAX,[EBX + 0x285]
005F7882  8D 8B 81 02 00 00         LEA ECX,[EBX + 0x281]
005F7888  50                        PUSH EAX
005F7889  8D 93 7D 02 00 00         LEA EDX,[EBX + 0x27d]
005F788F  51                        PUSH ECX
005F7890  52                        PUSH EDX
005F7891  8B CB                     MOV ECX,EBX
005F7893  E8 A3 9D E0 FF            CALL 0x0040163b
005F7898  85 C0                     TEST EAX,EAX
005F789A  0F 84 32 FE FF FF         JZ 0x005f76d2
005F78A0  8D 45 FA                  LEA EAX,[EBP + -0x6]
005F78A3  8D 4D FE                  LEA ECX,[EBP + -0x2]
005F78A6  50                        PUSH EAX
005F78A7  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F78AA  51                        PUSH ECX
005F78AB  52                        PUSH EDX
005F78AC  8B CB                     MOV ECX,EBX
005F78AE  E8 12 A0 E0 FF            CALL 0x004018c5
005F78B3  8D 45 F4                  LEA EAX,[EBP + -0xc]
005F78B6  8D 4D EC                  LEA ECX,[EBP + -0x14]
005F78B9  50                        PUSH EAX
005F78BA  8D 55 F0                  LEA EDX,[EBP + -0x10]
005F78BD  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
005F78C1  51                        PUSH ECX
005F78C2  52                        PUSH EDX
005F78C3  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
005F78C7  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
005F78CB  50                        PUSH EAX
005F78CC  51                        PUSH ECX
005F78CD  8D 45 E8                  LEA EAX,[EBP + -0x18]
005F78D0  52                        PUSH EDX
005F78D1  50                        PUSH EAX
005F78D2  8B CB                     MOV ECX,EBX
005F78D4  E8 EE A7 E0 FF            CALL 0x004020c7
005F78D9  85 C0                     TEST EAX,EAX
005F78DB  0F 84 8F 08 00 00         JZ 0x005f8170
005F78E1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F78E4  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005F78E7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005F78EA  51                        PUSH ECX
005F78EB  52                        PUSH EDX
005F78EC  50                        PUSH EAX
005F78ED  8B CB                     MOV ECX,EBX
005F78EF  E8 30 C3 E0 FF            CALL 0x00403c24
005F78F4  85 C0                     TEST EAX,EAX
005F78F6  0F 84 74 08 00 00         JZ 0x005f8170
005F78FC  8A 4D E8                  MOV CL,byte ptr [EBP + -0x18]
005F78FF  C7 83 DD 02 00 00 05 00 00 00  MOV dword ptr [EBX + 0x2dd],0x5
005F7909  C6 83 BB 02 00 00 01      MOV byte ptr [EBX + 0x2bb],0x1
005F7910  89 7B 76                  MOV dword ptr [EBX + 0x76],EDI
005F7913  88 8B 9D 02 00 00         MOV byte ptr [EBX + 0x29d],CL
005F7919  5F                        POP EDI
005F791A  C6 83 9F 02 00 00 00      MOV byte ptr [EBX + 0x29f],0x0
005F7921  5E                        POP ESI
005F7922  5B                        POP EBX
005F7923  8B E5                     MOV ESP,EBP
005F7925  5D                        POP EBP
005F7926  C3                        RET
LAB_005f7927:
005F7927  48                        DEC EAX
005F7928  5F                        POP EDI
005F7929  89 83 EF 02 00 00         MOV dword ptr [EBX + 0x2ef],EAX
005F792F  5E                        POP ESI
005F7930  5B                        POP EBX
005F7931  8B E5                     MOV ESP,EBP
005F7933  5D                        POP EBP
005F7934  C3                        RET
switchD_005f6f82::caseD_5:
005F7935  8B 83 EA 02 00 00         MOV EAX,dword ptr [EBX + 0x2ea]
005F793B  85 C0                     TEST EAX,EAX
005F793D  74 07                     JZ 0x005f7946
005F793F  8B 13                     MOV EDX,dword ptr [EBX]
005F7941  8B CB                     MOV ECX,EBX
005F7943  FF 52 20                  CALL dword ptr [EDX + 0x20]
LAB_005f7946:
005F7946  8B CB                     MOV ECX,EBX
005F7948  E8 F4 A5 E0 FF            CALL 0x00401f41
005F794D  5F                        POP EDI
005F794E  89 83 DD 02 00 00         MOV dword ptr [EBX + 0x2dd],EAX
005F7954  5E                        POP ESI
005F7955  5B                        POP EBX
005F7956  8B E5                     MOV ESP,EBP
005F7958  5D                        POP EBP
005F7959  C3                        RET
switchD_005f6f82::caseD_a:
005F795A  8D 45 E4                  LEA EAX,[EBP + -0x1c]
005F795D  8D 4D F4                  LEA ECX,[EBP + -0xc]
005F7960  50                        PUSH EAX
005F7961  51                        PUSH ECX
005F7962  8B CB                     MOV ECX,EBX
005F7964  E8 07 C7 E0 FF            CALL 0x00404070
005F7969  85 C0                     TEST EAX,EAX
005F796B  74 22                     JZ 0x005f798f
005F796D  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
005F7970  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F7973  6A 01                     PUSH 0x1
005F7975  52                        PUSH EDX
005F7976  50                        PUSH EAX
005F7977  8B CB                     MOV ECX,EBX
005F7979  C7 83 DD 02 00 00 0B 00 00 00  MOV dword ptr [EBX + 0x2dd],0xb
005F7983  E8 2B C0 E0 FF            CALL 0x004039b3
005F7988  5F                        POP EDI
005F7989  5E                        POP ESI
005F798A  5B                        POP EBX
005F798B  8B E5                     MOV ESP,EBP
005F798D  5D                        POP EBP
005F798E  C3                        RET
LAB_005f798f:
005F798F  C7 83 DD 02 00 00 0C 00 00 00  MOV dword ptr [EBX + 0x2dd],0xc
005F7999  C7 43 76 01 00 00 00      MOV dword ptr [EBX + 0x76],0x1
005F79A0  C7 83 EF 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x2ef],0x0
LAB_005f79aa:
005F79AA  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F79B0  5F                        POP EDI
005F79B1  5E                        POP ESI
005F79B2  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F79B8  89 93 D5 02 00 00         MOV dword ptr [EBX + 0x2d5],EDX
005F79BE  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F79C3  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005F79C9  83 C1 32                  ADD ECX,0x32
005F79CC  89 8B D9 02 00 00         MOV dword ptr [EBX + 0x2d9],ECX
005F79D2  5B                        POP EBX
005F79D3  8B E5                     MOV ESP,EBP
005F79D5  5D                        POP EBP
005F79D6  C3                        RET
switchD_005f6f82::caseD_b:
005F79D7  8B CB                     MOV ECX,EBX
005F79D9  E8 71 D3 E0 FF            CALL 0x00404d4f
005F79DE  85 C0                     TEST EAX,EAX
005F79E0  0F 84 1D 02 00 00         JZ 0x005f7c03
005F79E6  8B 83 A0 02 00 00         MOV EAX,dword ptr [EBX + 0x2a0]
005F79EC  33 F6                     XOR ESI,ESI
005F79EE  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
005F79F1  8A 8C 53 9E 02 00 00      MOV CL,byte ptr [EBX + EDX*0x2 + 0x29e]
005F79F8  84 C9                     TEST CL,CL
005F79FA  74 50                     JZ 0x005f7a4c
005F79FC  8D 94 40 50 01 00 00      LEA EDX,[EAX + EAX*0x2 + 0x150]
005F7A03  8D 48 FF                  LEA ECX,[EAX + -0x1]
005F7A06  51                        PUSH ECX
005F7A07  8B CB                     MOV ECX,EBX
005F7A09  8B 04 53                  MOV EAX,dword ptr [EBX + EDX*0x2]
005F7A0C  50                        PUSH EAX
005F7A0D  E8 E9 E0 E0 FF            CALL 0x00405afb
005F7A12  8B 83 A0 02 00 00         MOV EAX,dword ptr [EBX + 0x2a0]
005F7A18  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
005F7A1B  C6 84 4B 9E 02 00 00 00   MOV byte ptr [EBX + ECX*0x2 + 0x29e],0x0
005F7A23  8B 8B A0 02 00 00         MOV ECX,dword ptr [EBX + 0x2a0]
005F7A29  49                        DEC ECX
005F7A2A  8B C1                     MOV EAX,ECX
005F7A2C  89 8B A0 02 00 00         MOV dword ptr [EBX + 0x2a0],ECX
005F7A32  3B C6                     CMP EAX,ESI
005F7A34  7E 16                     JLE 0x005f7a4c
005F7A36  56                        PUSH ESI
005F7A37  56                        PUSH ESI
005F7A38  56                        PUSH ESI
005F7A39  56                        PUSH ESI
005F7A3A  6A 01                     PUSH 0x1
005F7A3C  6A 01                     PUSH 0x1
005F7A3E  8B CB                     MOV ECX,EBX
005F7A40  E8 1E DD E0 FF            CALL 0x00405763
005F7A45  5F                        POP EDI
005F7A46  5E                        POP ESI
005F7A47  5B                        POP EBX
005F7A48  8B E5                     MOV ESP,EBP
005F7A4A  5D                        POP EBP
005F7A4B  C3                        RET
LAB_005f7a4c:
005F7A4C  8B CB                     MOV ECX,EBX
005F7A4E  E8 C4 BA E0 FF            CALL 0x00403517
005F7A53  C6 83 9F 02 00 00 00      MOV byte ptr [EBX + 0x29f],0x0
005F7A5A  89 B3 A0 02 00 00         MOV dword ptr [EBX + 0x2a0],ESI
005F7A60  39 B3 EA 02 00 00         CMP dword ptr [EBX + 0x2ea],ESI
005F7A66  74 0E                     JZ 0x005f7a76
STColl3C::sub_005F6F60::cf_common_exit_005F7A68:
005F7A68  8B CB                     MOV ECX,EBX
005F7A6A  E8 F9 E1 E0 FF            CALL 0x00405c68
005F7A6F  5F                        POP EDI
005F7A70  5E                        POP ESI
005F7A71  5B                        POP EBX
005F7A72  8B E5                     MOV ESP,EBP
005F7A74  5D                        POP EBP
005F7A75  C3                        RET
LAB_005f7a76:
005F7A76  56                        PUSH ESI
005F7A77  8B CB                     MOV ECX,EBX
005F7A79  E8 CB BF E0 FF            CALL 0x00403a49
005F7A7E  8A 83 9E 02 00 00         MOV AL,byte ptr [EBX + 0x29e]
005F7A84  6A 02                     PUSH 0x2
005F7A86  84 C0                     TEST AL,AL
005F7A88  8B CB                     MOV ECX,EBX
005F7A8A  0F 84 9B 00 00 00         JZ 0x005f7b2b
005F7A90  E8 2B 99 E0 FF            CALL 0x004013c0
005F7A95  85 C0                     TEST EAX,EAX
005F7A97  0F 84 66 01 00 00         JZ 0x005f7c03
005F7A9D  8D 55 FA                  LEA EDX,[EBP + -0x6]
005F7AA0  8D 45 FE                  LEA EAX,[EBP + -0x2]
005F7AA3  52                        PUSH EDX
005F7AA4  8D 4D FC                  LEA ECX,[EBP + -0x4]
005F7AA7  50                        PUSH EAX
005F7AA8  51                        PUSH ECX
005F7AA9  8B CB                     MOV ECX,EBX
005F7AAB  E8 15 9E E0 FF            CALL 0x004018c5
005F7AB0  8D 55 F4                  LEA EDX,[EBP + -0xc]
005F7AB3  8D 45 EC                  LEA EAX,[EBP + -0x14]
005F7AB6  52                        PUSH EDX
005F7AB7  8D 4D F0                  LEA ECX,[EBP + -0x10]
005F7ABA  0F BF 55 FA               MOVSX EDX,word ptr [EBP + -0x6]
005F7ABE  50                        PUSH EAX
005F7ABF  51                        PUSH ECX
005F7AC0  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
005F7AC4  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
005F7AC8  52                        PUSH EDX
005F7AC9  50                        PUSH EAX
005F7ACA  8D 55 E8                  LEA EDX,[EBP + -0x18]
005F7ACD  51                        PUSH ECX
005F7ACE  52                        PUSH EDX
005F7ACF  8B CB                     MOV ECX,EBX
005F7AD1  E8 F1 A5 E0 FF            CALL 0x004020c7
005F7AD6  85 C0                     TEST EAX,EAX
005F7AD8  0F 84 25 01 00 00         JZ 0x005f7c03
005F7ADE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F7AE1  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005F7AE4  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005F7AE7  50                        PUSH EAX
005F7AE8  51                        PUSH ECX
005F7AE9  52                        PUSH EDX
005F7AEA  8B CB                     MOV ECX,EBX
005F7AEC  E8 33 C1 E0 FF            CALL 0x00403c24
005F7AF1  85 C0                     TEST EAX,EAX
005F7AF3  0F 84 0A 01 00 00         JZ 0x005f7c03
005F7AF9  8A 45 E8                  MOV AL,byte ptr [EBP + -0x18]
005F7AFC  C7 83 DD 02 00 00 05 00 00 00  MOV dword ptr [EBX + 0x2dd],0x5
005F7B06  C6 83 BB 02 00 00 01      MOV byte ptr [EBX + 0x2bb],0x1
005F7B0D  88 83 9D 02 00 00         MOV byte ptr [EBX + 0x29d],AL
005F7B13  8B CB                     MOV ECX,EBX
005F7B15  C6 83 9F 02 00 00 00      MOV byte ptr [EBX + 0x29f],0x0
005F7B1C  89 73 76                  MOV dword ptr [EBX + 0x76],ESI
005F7B1F  E8 2D C6 E0 FF            CALL 0x00404151
005F7B24  5F                        POP EDI
005F7B25  5E                        POP ESI
005F7B26  5B                        POP EBX
005F7B27  8B E5                     MOV ESP,EBP
005F7B29  5D                        POP EBP
005F7B2A  C3                        RET
LAB_005f7b2b:
005F7B2B  E8 90 98 E0 FF            CALL 0x004013c0
005F7B30  85 C0                     TEST EAX,EAX
005F7B32  0F 84 8D 00 00 00         JZ 0x005f7bc5
005F7B38  8B 8B 99 02 00 00         MOV ECX,dword ptr [EBX + 0x299]
005F7B3E  8B 93 95 02 00 00         MOV EDX,dword ptr [EBX + 0x295]
005F7B44  8B 83 91 02 00 00         MOV EAX,dword ptr [EBX + 0x291]
005F7B4A  51                        PUSH ECX
005F7B4B  52                        PUSH EDX
005F7B4C  50                        PUSH EAX
005F7B4D  8B CB                     MOV ECX,EBX
005F7B4F  E8 D0 C0 E0 FF            CALL 0x00403c24
005F7B54  3B C6                     CMP EAX,ESI
005F7B56  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005F7B59  7C 1F                     JL 0x005f7b7a
005F7B5B  C7 83 DD 02 00 00 05 00 00 00  MOV dword ptr [EBX + 0x2dd],0x5
005F7B65  8B CB                     MOV ECX,EBX
005F7B67  C6 83 9D 02 00 00 03      MOV byte ptr [EBX + 0x29d],0x3
005F7B6E  E8 DE C5 E0 FF            CALL 0x00404151
005F7B73  5F                        POP EDI
005F7B74  5E                        POP ESI
005F7B75  5B                        POP EBX
005F7B76  8B E5                     MOV ESP,EBP
005F7B78  5D                        POP EBP
005F7B79  C3                        RET
LAB_005f7b7a:
005F7B7A  C7 83 DD 02 00 00 0C 00 00 00  MOV dword ptr [EBX + 0x2dd],0xc
005F7B84  89 B3 EF 02 00 00         MOV dword ptr [EBX + 0x2ef],ESI
005F7B8A  C7 43 76 01 00 00 00      MOV dword ptr [EBX + 0x76],0x1
005F7B91  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F7B97  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F7B9D  89 93 D5 02 00 00         MOV dword ptr [EBX + 0x2d5],EDX
005F7BA3  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F7BA8  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005F7BAE  83 C1 32                  ADD ECX,0x32
005F7BB1  89 8B D9 02 00 00         MOV dword ptr [EBX + 0x2d9],ECX
005F7BB7  8B CB                     MOV ECX,EBX
005F7BB9  E8 93 C5 E0 FF            CALL 0x00404151
005F7BBE  5F                        POP EDI
005F7BBF  5E                        POP ESI
005F7BC0  5B                        POP EBX
005F7BC1  8B E5                     MOV ESP,EBP
005F7BC3  5D                        POP EBP
005F7BC4  C3                        RET
LAB_005f7bc5:
005F7BC5  C7 83 DD 02 00 00 0C 00 00 00  MOV dword ptr [EBX + 0x2dd],0xc
005F7BCF  89 B3 EF 02 00 00         MOV dword ptr [EBX + 0x2ef],ESI
005F7BD5  C7 43 76 01 00 00 00      MOV dword ptr [EBX + 0x76],0x1
005F7BDC  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F7BE2  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005F7BE8  89 83 D5 02 00 00         MOV dword ptr [EBX + 0x2d5],EAX
005F7BEE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F7BF4  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F7BFA  83 C2 32                  ADD EDX,0x32
005F7BFD  89 93 D9 02 00 00         MOV dword ptr [EBX + 0x2d9],EDX
LAB_005f7c03:
005F7C03  8B CB                     MOV ECX,EBX
005F7C05  E8 47 C5 E0 FF            CALL 0x00404151
005F7C0A  5F                        POP EDI
005F7C0B  5E                        POP ESI
005F7C0C  5B                        POP EBX
005F7C0D  8B E5                     MOV ESP,EBP
005F7C0F  5D                        POP EBP
005F7C10  C3                        RET
switchD_005f6f82::caseD_8:
005F7C11  8B 83 EA 02 00 00         MOV EAX,dword ptr [EBX + 0x2ea]
005F7C17  33 F6                     XOR ESI,ESI
005F7C19  3B C6                     CMP EAX,ESI
005F7C1B  74 67                     JZ 0x005f7c84
005F7C1D  8B CB                     MOV ECX,EBX
LAB_005f7c1f:
005F7C1F  E8 BF CE E0 FF            CALL 0x00404ae3
005F7C24  C7 83 DD 02 00 00 0C 00 00 00  MOV dword ptr [EBX + 0x2dd],0xc
005F7C2E  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F7C33  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005F7C39  89 8B D5 02 00 00         MOV dword ptr [EBX + 0x2d5],ECX
005F7C3F  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F7C45  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005F7C4B  C6 83 BB 02 00 00 01      MOV byte ptr [EBX + 0x2bb],0x1
005F7C52  83 C0 32                  ADD EAX,0x32
005F7C55  89 B3 EF 02 00 00         MOV dword ptr [EBX + 0x2ef],ESI
005F7C5B  89 83 D9 02 00 00         MOV dword ptr [EBX + 0x2d9],EAX
005F7C61  8B 83 A0 02 00 00         MOV EAX,dword ptr [EBX + 0x2a0]
005F7C67  3B C6                     CMP EAX,ESI
005F7C69  C7 43 76 01 00 00 00      MOV dword ptr [EBX + 0x76],0x1
005F7C70  0F 8E 86 02 00 00         JLE 0x005f7efc
005F7C76  5F                        POP EDI
005F7C77  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
005F7C7E  5E                        POP ESI
005F7C7F  5B                        POP EBX
005F7C80  8B E5                     MOV ESP,EBP
005F7C82  5D                        POP EBP
005F7C83  C3                        RET
LAB_005f7c84:
005F7C84  8D 4D FA                  LEA ECX,[EBP + -0x6]
005F7C87  8D 55 FE                  LEA EDX,[EBP + -0x2]
005F7C8A  51                        PUSH ECX
005F7C8B  8D 45 FC                  LEA EAX,[EBP + -0x4]
005F7C8E  52                        PUSH EDX
005F7C8F  50                        PUSH EAX
005F7C90  8B CB                     MOV ECX,EBX
005F7C92  E8 2E 9C E0 FF            CALL 0x004018c5
005F7C97  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
005F7C9B  3B 8B 91 02 00 00         CMP ECX,dword ptr [EBX + 0x291]
005F7CA1  0F 85 C9 04 00 00         JNZ 0x005f8170
005F7CA7  0F BF 55 FE               MOVSX EDX,word ptr [EBP + -0x2]
005F7CAB  3B 93 95 02 00 00         CMP EDX,dword ptr [EBX + 0x295]
005F7CB1  0F 85 B9 04 00 00         JNZ 0x005f8170
005F7CB7  8D 45 DC                  LEA EAX,[EBP + -0x24]
005F7CBA  8D 4D D8                  LEA ECX,[EBP + -0x28]
005F7CBD  50                        PUSH EAX
005F7CBE  8B 83 89 02 00 00         MOV EAX,dword ptr [EBX + 0x289]
005F7CC4  8D 55 E0                  LEA EDX,[EBP + -0x20]
005F7CC7  51                        PUSH ECX
005F7CC8  52                        PUSH EDX
005F7CC9  6A 01                     PUSH 0x1
005F7CCB  50                        PUSH EAX
005F7CCC  8B CB                     MOV ECX,EBX
005F7CCE  E8 07 D2 E0 FF            CALL 0x00404eda
005F7CD3  85 C0                     TEST EAX,EAX
005F7CD5  8B CB                     MOV ECX,EBX
005F7CD7  0F 84 42 FF FF FF         JZ 0x005f7c1f
005F7CDD  E8 86 94 E0 FF            CALL 0x00401168
005F7CE2  3B C6                     CMP EAX,ESI
005F7CE4  0F 8E 86 04 00 00         JLE 0x005f8170
005F7CEA  8B BB E6 02 00 00         MOV EDI,dword ptr [EBX + 0x2e6]
005F7CF0  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
005F7CF3  B9 0A 00 00 00            MOV ECX,0xa
005F7CF8  83 C7 08                  ADD EDI,0x8
005F7CFB  F3 A5                     MOVSD.REP ES:EDI,ESI
005F7CFD  66 A5                     MOVSW ES:EDI,ESI
005F7CFF  8B 8B A0 02 00 00         MOV ECX,dword ptr [EBX + 0x2a0]
005F7D05  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005F7D08  C6 84 4B A4 02 00 00 01   MOV byte ptr [EBX + ECX*0x2 + 0x2a4],0x1
005F7D10  8B 8B A0 02 00 00         MOV ECX,dword ptr [EBX + 0x2a0]
005F7D16  83 C1 71                  ADD ECX,0x71
005F7D19  83 F8 02                  CMP EAX,0x2
005F7D1C  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
005F7D1F  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
005F7D22  89 0C 53                  MOV dword ptr [EBX + EDX*0x2],ECX
005F7D25  8B 8B A0 02 00 00         MOV ECX,dword ptr [EBX + 0x2a0]
005F7D2B  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
005F7D2E  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
005F7D31  88 8C 53 A5 02 00 00      MOV byte ptr [EBX + EDX*0x2 + 0x2a5],CL
005F7D38  75 0B                     JNZ 0x005f7d45
005F7D3A  8B 93 E6 02 00 00         MOV EDX,dword ptr [EBX + 0x2e6]
005F7D40  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
005F7D43  89 02                     MOV dword ptr [EDX],EAX
LAB_005f7d45:
005F7D45  8B 8B E6 02 00 00         MOV ECX,dword ptr [EBX + 0x2e6]
005F7D4B  8B 09                     MOV ECX,dword ptr [ECX]
005F7D4D  85 C9                     TEST ECX,ECX
005F7D4F  74 1E                     JZ 0x005f7d6f
005F7D51  68 30 75 00 00            PUSH 0x7530
005F7D56  6A 00                     PUSH 0x0
005F7D58  6A 00                     PUSH 0x0
005F7D5A  6A 01                     PUSH 0x1
005F7D5C  6A 0E                     PUSH 0xe
005F7D5E  E8 69 D5 E0 FF            CALL 0x004052cc
005F7D63  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
005F7D69  50                        PUSH EAX
005F7D6A  E8 81 21 0F 00            CALL 0x006e9ef0
LAB_005f7d6f:
005F7D6F  8B 93 89 02 00 00         MOV EDX,dword ptr [EBX + 0x289]
005F7D75  8B CB                     MOV ECX,EBX
005F7D77  52                        PUSH EDX
005F7D78  E8 94 B8 E0 FF            CALL 0x00403611
005F7D7D  8B CB                     MOV ECX,EBX
005F7D7F  E8 F8 D4 E0 FF            CALL 0x0040527c
005F7D84  85 C0                     TEST EAX,EAX
005F7D86  0F 84 E4 03 00 00         JZ 0x005f8170
005F7D8C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F7D92  8B 83 E6 02 00 00         MOV EAX,dword ptr [EBX + 0x2e6]
005F7D98  5F                        POP EDI
005F7D99  5E                        POP ESI
005F7D9A  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F7DA0  89 50 68                  MOV dword ptr [EAX + 0x68],EDX
005F7DA3  8B 83 E6 02 00 00         MOV EAX,dword ptr [EBX + 0x2e6]
005F7DA9  C7 83 DD 02 00 00 09 00 00 00  MOV dword ptr [EBX + 0x2dd],0x9
005F7DB3  C7 40 64 01 00 00 00      MOV dword ptr [EAX + 0x64],0x1
005F7DBA  8B 8B E6 02 00 00         MOV ECX,dword ptr [EBX + 0x2e6]
005F7DC0  66 C7 41 32 FF FF         MOV word ptr [ECX + 0x32],0xffff
005F7DC6  8B 9B E6 02 00 00         MOV EBX,dword ptr [EBX + 0x2e6]
005F7DCC  8B 53 5C                  MOV EDX,dword ptr [EBX + 0x5c]
005F7DCF  4A                        DEC EDX
005F7DD0  89 53 60                  MOV dword ptr [EBX + 0x60],EDX
005F7DD3  5B                        POP EBX
005F7DD4  8B E5                     MOV ESP,EBP
005F7DD6  5D                        POP EBP
005F7DD7  C3                        RET
switchD_005f6f82::caseD_9:
005F7DD8  8D 4D F4                  LEA ECX,[EBP + -0xc]
005F7DDB  8D 55 EC                  LEA EDX,[EBP + -0x14]
005F7DDE  51                        PUSH ECX
005F7DDF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F7DE5  52                        PUSH EDX
005F7DE6  8D 45 F0                  LEA EAX,[EBP + -0x10]
005F7DE9  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F7DEF  50                        PUSH EAX
005F7DF0  52                        PUSH EDX
005F7DF1  8B CB                     MOV ECX,EBX
005F7DF3  E8 24 D5 E0 FF            CALL 0x0040531c
005F7DF8  48                        DEC EAX
005F7DF9  0F 84 4E 01 00 00         JZ 0x005f7f4d
005F7DFF  83 E8 02                  SUB EAX,0x2
005F7E02  0F 85 68 03 00 00         JNZ 0x005f8170
005F7E08  8B CB                     MOV ECX,EBX
005F7E0A  E8 08 B7 E0 FF            CALL 0x00403517
005F7E0F  8D B3 85 02 00 00         LEA ESI,[EBX + 0x285]
005F7E15  8D BB 81 02 00 00         LEA EDI,[EBX + 0x281]
005F7E1B  8D 83 7D 02 00 00         LEA EAX,[EBX + 0x27d]
005F7E21  56                        PUSH ESI
005F7E22  57                        PUSH EDI
005F7E23  50                        PUSH EAX
005F7E24  8B CB                     MOV ECX,EBX
005F7E26  E8 10 98 E0 FF            CALL 0x0040163b
005F7E2B  85 C0                     TEST EAX,EAX
005F7E2D  75 25                     JNZ 0x005f7e54
005F7E2F  8B 8B 61 02 00 00         MOV ECX,dword ptr [EBX + 0x261]
005F7E35  8B 83 5D 02 00 00         MOV EAX,dword ptr [EBX + 0x25d]
005F7E3B  8B 93 65 02 00 00         MOV EDX,dword ptr [EBX + 0x265]
005F7E41  89 0F                     MOV dword ptr [EDI],ECX
005F7E43  8B CB                     MOV ECX,EBX
005F7E45  89 83 7D 02 00 00         MOV dword ptr [EBX + 0x27d],EAX
005F7E4B  89 16                     MOV dword ptr [ESI],EDX
005F7E4D  E8 91 CC E0 FF            CALL 0x00404ae3
005F7E52  EB 07                     JMP 0x005f7e5b
LAB_005f7e54:
005F7E54  C6 83 9E 02 00 00 01      MOV byte ptr [EBX + 0x29e],0x1
LAB_005f7e5b:
005F7E5B  8D 45 FA                  LEA EAX,[EBP + -0x6]
005F7E5E  8D 4D FE                  LEA ECX,[EBP + -0x2]
005F7E61  50                        PUSH EAX
005F7E62  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F7E65  51                        PUSH ECX
005F7E66  52                        PUSH EDX
005F7E67  8B CB                     MOV ECX,EBX
005F7E69  E8 57 9A E0 FF            CALL 0x004018c5
005F7E6E  8D 45 F4                  LEA EAX,[EBP + -0xc]
005F7E71  8D 4D EC                  LEA ECX,[EBP + -0x14]
005F7E74  50                        PUSH EAX
005F7E75  8D 55 F0                  LEA EDX,[EBP + -0x10]
005F7E78  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
005F7E7C  51                        PUSH ECX
005F7E7D  52                        PUSH EDX
005F7E7E  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
005F7E82  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
005F7E86  50                        PUSH EAX
005F7E87  51                        PUSH ECX
005F7E88  8D 45 E8                  LEA EAX,[EBP + -0x18]
005F7E8B  52                        PUSH EDX
005F7E8C  50                        PUSH EAX
005F7E8D  8B CB                     MOV ECX,EBX
005F7E8F  E8 33 A2 E0 FF            CALL 0x004020c7
005F7E94  85 C0                     TEST EAX,EAX
005F7E96  0F 84 D4 02 00 00         JZ 0x005f8170
005F7E9C  8B 93 A0 02 00 00         MOV EDX,dword ptr [EBX + 0x2a0]
005F7EA2  8B CB                     MOV ECX,EBX
005F7EA4  42                        INC EDX
005F7EA5  89 93 A0 02 00 00         MOV dword ptr [EBX + 0x2a0],EDX
005F7EAB  E8 B0 95 E0 FF            CALL 0x00401460
005F7EB0  85 C0                     TEST EAX,EAX
005F7EB2  74 56                     JZ 0x005f7f0a
005F7EB4  C7 83 DD 02 00 00 0C 00 00 00  MOV dword ptr [EBX + 0x2dd],0xc
005F7EBE  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F7EC4  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
005F7ECA  89 93 D5 02 00 00         MOV dword ptr [EBX + 0x2d5],EDX
005F7ED0  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F7ED5  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005F7EDB  C7 83 EF 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x2ef],0x0
005F7EE5  83 C1 32                  ADD ECX,0x32
005F7EE8  C6 83 BB 02 00 00 01      MOV byte ptr [EBX + 0x2bb],0x1
005F7EEF  89 8B D9 02 00 00         MOV dword ptr [EBX + 0x2d9],ECX
005F7EF5  C7 43 76 01 00 00 00      MOV dword ptr [EBX + 0x76],0x1
LAB_005f7efc:
005F7EFC  5F                        POP EDI
005F7EFD  C6 83 9F 02 00 00 00      MOV byte ptr [EBX + 0x29f],0x0
005F7F04  5E                        POP ESI
005F7F05  5B                        POP EBX
005F7F06  8B E5                     MOV ESP,EBP
005F7F08  5D                        POP EBP
005F7F09  C3                        RET
LAB_005f7f0a:
005F7F0A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005F7F0D  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005F7F10  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005F7F13  52                        PUSH EDX
005F7F14  50                        PUSH EAX
005F7F15  51                        PUSH ECX
005F7F16  8B CB                     MOV ECX,EBX
005F7F18  E8 07 BD E0 FF            CALL 0x00403c24
005F7F1D  85 C0                     TEST EAX,EAX
005F7F1F  0F 84 4B 02 00 00         JZ 0x005f8170
005F7F25  8A 55 E8                  MOV DL,byte ptr [EBP + -0x18]
005F7F28  C7 83 DD 02 00 00 05 00 00 00  MOV dword ptr [EBX + 0x2dd],0x5
005F7F32  C6 83 BB 02 00 00 01      MOV byte ptr [EBX + 0x2bb],0x1
005F7F39  88 93 9D 02 00 00         MOV byte ptr [EBX + 0x29d],DL
005F7F3F  5F                        POP EDI
005F7F40  C6 83 9F 02 00 00 01      MOV byte ptr [EBX + 0x29f],0x1
005F7F47  5E                        POP ESI
005F7F48  5B                        POP EBX
005F7F49  8B E5                     MOV ESP,EBP
005F7F4B  5D                        POP EBP
005F7F4C  C3                        RET
LAB_005f7f4d:
005F7F4D  8B 83 E6 02 00 00         MOV EAX,dword ptr [EBX + 0x2e6]
005F7F53  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005F7F56  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
005F7F59  8B 93 E6 02 00 00         MOV EDX,dword ptr [EBX + 0x2e6]
005F7F5F  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005F7F62  89 42 18                  MOV dword ptr [EDX + 0x18],EAX
005F7F65  8B 8B E6 02 00 00         MOV ECX,dword ptr [EBX + 0x2e6]
005F7F6B  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005F7F6E  89 51 1C                  MOV dword ptr [ECX + 0x1c],EDX
005F7F71  8B 83 E6 02 00 00         MOV EAX,dword ptr [EBX + 0x2e6]
005F7F77  8B 70 20                  MOV ESI,dword ptr [EAX + 0x20]
005F7F7A  46                        INC ESI
005F7F7B  89 70 20                  MOV dword ptr [EAX + 0x20],ESI
005F7F7E  8B 83 E6 02 00 00         MOV EAX,dword ptr [EBX + 0x2e6]
005F7F84  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
005F7F87  8B 50 24                  MOV EDX,dword ptr [EAX + 0x24]
005F7F8A  3B CA                     CMP ECX,EDX
005F7F8C  7C 07                     JL 0x005f7f95
005F7F8E  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
LAB_005f7f95:
005F7F95  8B CB                     MOV ECX,EBX
005F7F97  E8 B5 C1 E0 FF            CALL 0x00404151
005F7F9C  5F                        POP EDI
005F7F9D  5E                        POP ESI
005F7F9E  5B                        POP EBX
005F7F9F  8B E5                     MOV ESP,EBP
005F7FA1  5D                        POP EBP
005F7FA2  C3                        RET
switchD_005f6f82::caseD_6:
005F7FA3  8B CB                     MOV ECX,EBX
005F7FA5  E8 09 D8 E0 FF            CALL 0x004057b3
005F7FAA  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
005F7FB0  0F BF 4A 23               MOVSX ECX,word ptr [EDX + 0x23]
005F7FB4  3B C1                     CMP EAX,ECX
005F7FB6  0F 8C B4 01 00 00         JL 0x005f8170
005F7FBC  5F                        POP EDI
005F7FBD  C7 83 DD 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x2dd],0x2
005F7FC7  5E                        POP ESI
005F7FC8  5B                        POP EBX
005F7FC9  8B E5                     MOV ESP,EBP
005F7FCB  5D                        POP EBP
005F7FCC  C3                        RET
switchD_005f6f82::caseD_7:
005F7FCD  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F7FD3  8B 8B E1 02 00 00         MOV ECX,dword ptr [EBX + 0x2e1]
005F7FD9  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005F7FDF  3B C1                     CMP EAX,ECX
005F7FE1  0F 82 89 01 00 00         JC 0x005f8170
005F7FE7  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
005F7FEA  66 8B 53 5F               MOV DX,word ptr [EBX + 0x5f]
005F7FEE  66 8B 43 5D               MOV AX,word ptr [EBX + 0x5d]
005F7FF2  51                        PUSH ECX
005F7FF3  66 8B 4B 5B               MOV CX,word ptr [EBX + 0x5b]
005F7FF7  53                        PUSH EBX
005F7FF8  6A 00                     PUSH 0x0
005F7FFA  52                        PUSH EDX
005F7FFB  50                        PUSH EAX
005F7FFC  C6 83 EE 02 00 00 00      MOV byte ptr [EBX + 0x2ee],0x0
005F8003  C7 83 DD 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x2dd],0x1
005F800D  51                        PUSH ECX
005F800E  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005F8014  E8 A8 CE E0 FF            CALL 0x00404ec1
005F8019  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
005F801F  E8 EB BC E0 FF            CALL 0x00403d0f
005F8024  8B CB                     MOV ECX,EBX
005F8026  C6 83 BB 02 00 00 00      MOV byte ptr [EBX + 0x2bb],0x0
005F802D  E8 1A C6 E0 FF            CALL 0x0040464c
005F8032  5F                        POP EDI
005F8033  5E                        POP ESI
005F8034  5B                        POP EBX
005F8035  8B E5                     MOV ESP,EBP
005F8037  5D                        POP EBP
005F8038  C3                        RET
switchD_005f6f82::caseD_d:
005F8039  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
005F803F  6A 08                     PUSH 0x8
005F8041  8B CE                     MOV ECX,ESI
005F8043  E8 67 C2 E0 FF            CALL 0x004042af
005F8048  8B F8                     MOV EDI,EAX
005F804A  83 FF 01                  CMP EDI,0x1
005F804D  75 21                     JNZ 0x005f8070
005F804F  8A 83 BB 02 00 00         MOV AL,byte ptr [EBX + 0x2bb]
005F8055  84 C0                     TEST AL,AL
005F8057  74 0E                     JZ 0x005f8067
005F8059  8B CB                     MOV ECX,EBX
005F805B  E8 EC C5 E0 FF            CALL 0x0040464c
005F8060  8B CB                     MOV ECX,EBX
005F8062  E8 C2 C5 E0 FF            CALL 0x00404629
LAB_005f8067:
005F8067  6A 0F                     PUSH 0xf
005F8069  8B CE                     MOV ECX,ESI
005F806B  E8 F4 C1 E0 FF            CALL 0x00404264
LAB_005f8070:
005F8070  8B 83 CD 02 00 00         MOV EAX,dword ptr [EBX + 0x2cd]
005F8076  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
005F8079  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
005F807C  3B BC 40 3D E7 7C 00      CMP EDI,dword ptr [EAX + EAX*0x2 + 0x7ce73d]
005F8083  75 5E                     JNZ 0x005f80e3
005F8085  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
005F8088  66 8B 4B 5F               MOV CX,word ptr [EBX + 0x5f]
005F808C  66 8B 53 5D               MOV DX,word ptr [EBX + 0x5d]
005F8090  50                        PUSH EAX
005F8091  66 8B 43 5B               MOV AX,word ptr [EBX + 0x5b]
005F8095  53                        PUSH EBX
005F8096  6A 00                     PUSH 0x0
005F8098  51                        PUSH ECX
005F8099  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005F809F  52                        PUSH EDX
005F80A0  50                        PUSH EAX
005F80A1  E8 1B CE E0 FF            CALL 0x00404ec1
005F80A6  6A 0E                     PUSH 0xe
005F80A8  8B CE                     MOV ECX,ESI
005F80AA  E8 B5 C1 E0 FF            CALL 0x00404264
005F80AF  6A 0C                     PUSH 0xc
005F80B1  8B CE                     MOV ECX,ESI
005F80B3  E8 AC C1 E0 FF            CALL 0x00404264
005F80B8  6A 00                     PUSH 0x0
005F80BA  6A FF                     PUSH -0x1
005F80BC  8B CE                     MOV ECX,ESI
005F80BE  E8 09 D2 E0 FF            CALL 0x004052cc
005F80C3  0F BF 4B 6C               MOVSX ECX,word ptr [EBX + 0x6c]
005F80C7  0F BF 53 45               MOVSX EDX,word ptr [EBX + 0x45]
005F80CB  50                        PUSH EAX
005F80CC  51                        PUSH ECX
005F80CD  0F BF 43 43               MOVSX EAX,word ptr [EBX + 0x43]
005F80D1  0F BF 4B 41               MOVSX ECX,word ptr [EBX + 0x41]
005F80D5  53                        PUSH EBX
005F80D6  6A 2B                     PUSH 0x2b
005F80D8  52                        PUSH EDX
005F80D9  50                        PUSH EAX
005F80DA  51                        PUSH ECX
005F80DB  E8 5E A1 E0 FF            CALL 0x0040223e
005F80E0  83 C4 24                  ADD ESP,0x24
LAB_005f80e3:
005F80E3  8B 83 CD 02 00 00         MOV EAX,dword ptr [EBX + 0x2cd]
005F80E9  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
005F80EC  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
005F80EF  3B BC 40 41 E7 7C 00      CMP EDI,dword ptr [EAX + EAX*0x2 + 0x7ce741]
005F80F6  75 07                     JNZ 0x005f80ff
005F80F8  8B CE                     MOV ECX,ESI
005F80FA  E8 91 A9 E0 FF            CALL 0x00402a90
LAB_005f80ff:
005F80FF  8B 83 CD 02 00 00         MOV EAX,dword ptr [EBX + 0x2cd]
005F8105  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
005F8108  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
005F810B  3B BC 40 45 E7 7C 00      CMP EDI,dword ptr [EAX + EAX*0x2 + 0x7ce745]
005F8112  75 16                     JNZ 0x005f812a
005F8114  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F811A  8B CE                     MOV ECX,ESI
005F811C  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005F8122  50                        PUSH EAX
005F8123  6A 09                     PUSH 0x9
005F8125  E8 16 D1 E0 FF            CALL 0x00405240
LAB_005f812a:
005F812A  8B 83 CD 02 00 00         MOV EAX,dword ptr [EBX + 0x2cd]
005F8130  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
005F8133  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
005F8136  8B 94 40 39 E7 7C 00      MOV EDX,dword ptr [EAX + EAX*0x2 + 0x7ce739]
005F813D  4A                        DEC EDX
005F813E  3B FA                     CMP EDI,EDX
005F8140  75 09                     JNZ 0x005f814b
005F8142  6A 08                     PUSH 0x8
005F8144  8B CE                     MOV ECX,ESI
005F8146  E8 19 C1 E0 FF            CALL 0x00404264
LAB_005f814b:
005F814B  6A 09                     PUSH 0x9
005F814D  8B CE                     MOV ECX,ESI
005F814F  E8 5B C1 E0 FF            CALL 0x004042af
005F8154  8B 8B CD 02 00 00         MOV ECX,dword ptr [EBX + 0x2cd]
005F815A  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
005F815D  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
005F8160  3B 84 49 49 E7 7C 00      CMP EAX,dword ptr [ECX + ECX*0x2 + 0x7ce749]
005F8167  75 07                     JNZ 0x005f8170
005F8169  8B CB                     MOV ECX,EBX
005F816B  E8 94 99 E0 FF            CALL 0x00401b04
switchD_005f6f82::default:
005F8170  5F                        POP EDI
005F8171  5E                        POP ESI
005F8172  5B                        POP EBX
005F8173  8B E5                     MOV ESP,EBP
005F8175  5D                        POP EBP
005F8176  C3                        RET
