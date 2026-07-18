FUN_00690650:
00690650  55                        PUSH EBP
00690651  8B EC                     MOV EBP,ESP
00690653  81 EC 94 00 00 00         SUB ESP,0x94
00690659  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0069065C  53                        PUSH EBX
0069065D  56                        PUSH ESI
0069065E  57                        PUSH EDI
0069065F  66 8B 42 16               MOV AX,word ptr [EDX + 0x16]
00690663  66 8B 7A 1A               MOV DI,word ptr [EDX + 0x1a]
00690667  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0069066A  8A 42 18                  MOV AL,byte ptr [EDX + 0x18]
0069066D  3C 08                     CMP AL,0x8
0069066F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00690672  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
00690675  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00690678  0F 83 E8 02 00 00         JNC 0x00690966
0069067E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00690684  85 D2                     TEST EDX,EDX
00690686  74 14                     JZ 0x0069069c
00690688  0F BE F0                  MOVSX ESI,AL
0069068B  8D 34 F6                  LEA ESI,[ESI + ESI*0x8]
0069068E  80 BC F6 E9 87 80 00 08   CMP byte ptr [ESI + ESI*0x8 + 0x8087e9],0x8
00690696  0F 83 CA 02 00 00         JNC 0x00690966
LAB_0069069c:
0069069C  8B 71 24                  MOV ESI,dword ptr [ECX + 0x24]
0069069F  0F BE D0                  MOVSX EDX,AL
006906A2  3B D6                     CMP EDX,ESI
006906A4  0F 84 BC 02 00 00         JZ 0x00690966
006906AA  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
006906B0  8A 49 24                  MOV CL,byte ptr [ECX + 0x24]
006906B3  84 D2                     TEST DL,DL
006906B5  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
006906B8  74 2D                     JZ 0x006906e7
006906BA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006906BD  33 D2                     XOR EDX,EDX
006906BF  25 FF 00 00 00            AND EAX,0xff
006906C4  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006906C7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006906CA  25 FF 00 00 00            AND EAX,0xff
006906CF  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
006906D6  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006906D9  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
006906E0  0F 95 C2                  SETNZ DL
006906E3  8B C2                     MOV EAX,EDX
006906E5  EB 7C                     JMP 0x00690763
LAB_006906e7:
006906E7  3A C1                     CMP AL,CL
006906E9  74 6D                     JZ 0x00690758
006906EB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006906EE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006906F1  25 FF 00 00 00            AND EAX,0xff
006906F6  81 E1 FF 00 00 00         AND ECX,0xff
006906FC  8A 9C C1 4F 8A 80 00      MOV BL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00690703  84 DB                     TEST BL,BL
00690705  75 12                     JNZ 0x00690719
00690707  8A 94 C8 4F 8A 80 00      MOV DL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0069070E  84 D2                     TEST DL,DL
00690710  75 07                     JNZ 0x00690719
00690712  B8 FE FF FF FF            MOV EAX,0xfffffffe
00690717  EB 41                     JMP 0x0069075a
LAB_00690719:
00690719  80 FB 01                  CMP BL,0x1
0069071C  75 10                     JNZ 0x0069072e
0069071E  8A 94 C8 4F 8A 80 00      MOV DL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
00690725  84 D2                     TEST DL,DL
00690727  75 05                     JNZ 0x0069072e
00690729  83 C8 FF                  OR EAX,0xffffffff
0069072C  EB 2C                     JMP 0x0069075a
LAB_0069072e:
0069072E  84 DB                     TEST BL,BL
00690730  75 11                     JNZ 0x00690743
00690732  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0069073A  75 07                     JNZ 0x00690743
0069073C  B8 01 00 00 00            MOV EAX,0x1
00690741  EB 17                     JMP 0x0069075a
LAB_00690743:
00690743  80 FB 01                  CMP BL,0x1
00690746  75 10                     JNZ 0x00690758
00690748  38 9C C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],BL
0069074F  75 07                     JNZ 0x00690758
00690751  B8 02 00 00 00            MOV EAX,0x2
00690756  EB 02                     JMP 0x0069075a
LAB_00690758:
00690758  33 C0                     XOR EAX,EAX
LAB_0069075a:
0069075A  33 C9                     XOR ECX,ECX
0069075C  85 C0                     TEST EAX,EAX
0069075E  0F 9C C1                  SETL CL
00690761  8B C1                     MOV EAX,ECX
LAB_00690763:
00690763  85 C0                     TEST EAX,EAX
00690765  0F 84 FB 01 00 00         JZ 0x00690966
0069076B  66 81 FF FF FF            CMP DI,0xffff
00690770  0F 84 F0 01 00 00         JZ 0x00690966
00690776  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0069077C  8D 8D 70 FF FF FF         LEA ECX,[EBP + 0xffffff70]
00690782  8D 85 6C FF FF FF         LEA EAX,[EBP + 0xffffff6c]
00690788  6A 00                     PUSH 0x0
0069078A  51                        PUSH ECX
0069078B  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
00690791  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00690796  E8 55 D0 09 00            CALL 0x0072d7f0
0069079B  8B F0                     MOV ESI,EAX
0069079D  83 C4 08                  ADD ESP,0x8
006907A0  85 F6                     TEST ESI,ESI
006907A2  0F 85 7C 01 00 00         JNZ 0x00690924
006907A8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
006907AE  85 C9                     TEST ECX,ECX
006907B0  74 14                     JZ 0x006907c6
006907B2  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006907B5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006907B8  6A 01                     PUSH 0x1
006907BA  52                        PUSH EDX
006907BB  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
006907BE  50                        PUSH EAX
006907BF  E8 F6 20 D7 FF            CALL 0x004028ba
006907C4  EB 05                     JMP 0x006907cb
LAB_006907c6:
006907C6  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
006907C9  33 C0                     XOR EAX,EAX
LAB_006907cb:
006907CB  85 C0                     TEST EAX,EAX
006907CD  0F 84 3D 01 00 00         JZ 0x00690910
006907D3  66 8B 48 30               MOV CX,word ptr [EAX + 0x30]
006907D7  51                        PUSH ECX
006907D8  8B CE                     MOV ECX,ESI
006907DA  E8 44 53 D7 FF            CALL 0x00405b23
006907DF  8B D8                     MOV EBX,EAX
006907E1  85 DB                     TEST EBX,EBX
006907E3  0F 84 27 01 00 00         JZ 0x00690910
006907E9  66 83 7B 7B 01            CMP word ptr [EBX + 0x7b],0x1
006907EE  75 0A                     JNZ 0x006907fa
006907F0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006907F3  25 FF FF 00 00            AND EAX,0xffff
006907F8  EB 05                     JMP 0x006907ff
LAB_006907fa:
006907FA  B8 FF FF 00 00            MOV EAX,0xffff
LAB_006907ff:
006907FF  66 8B 53 7D               MOV DX,word ptr [EBX + 0x7d]
00690803  50                        PUSH EAX
00690804  52                        PUSH EDX
00690805  8B CE                     MOV ECX,ESI
00690807  E8 38 46 D7 FF            CALL 0x00404e44
0069080C  85 C0                     TEST EAX,EAX
0069080E  0F 8D FC 00 00 00         JGE 0x00690910
00690814  8B 86 A5 00 00 00         MOV EAX,dword ptr [ESI + 0xa5]
0069081A  33 FF                     XOR EDI,EDI
0069081C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0069081F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00690822  85 C9                     TEST ECX,ECX
00690824  0F 8E E6 00 00 00         JLE 0x00690910
0069082A  3B F9                     CMP EDI,ECX
LAB_0069082c:
0069082C  73 0D                     JNC 0x0069083b
0069082E  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00690831  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00690834  0F AF F7                  IMUL ESI,EDI
00690837  03 F1                     ADD ESI,ECX
00690839  EB 02                     JMP 0x0069083d
LAB_0069083b:
0069083B  33 F6                     XOR ESI,ESI
LAB_0069083d:
0069083D  85 F6                     TEST ESI,ESI
0069083F  74 65                     JZ 0x006908a6
00690841  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00690844  85 D2                     TEST EDX,EDX
00690846  74 5E                     JZ 0x006908a6
00690848  B9 0D 00 00 00            MOV ECX,0xd
0069084D  33 C0                     XOR EAX,EAX
0069084F  8D 7D B0                  LEA EDI,[EBP + -0x50]
00690852  F3 AB                     STOSD.REP ES:EDI
00690854  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00690857  C7 45 B0 64 00 00 00      MOV dword ptr [EBP + -0x50],0x64
0069085E  C6 45 B9 01               MOV byte ptr [EBP + -0x47],0x1
00690862  8B 88 2C 01 00 00         MOV ECX,dword ptr [EAX + 0x12c]
00690868  66 8B 45 F4               MOV AX,word ptr [EBP + -0xc]
0069086C  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0069086F  66 8B 4B 7D               MOV CX,word ptr [EBX + 0x7d]
00690873  66 89 4D BC               MOV word ptr [EBP + -0x44],CX
00690877  66 8B 4D E4               MOV CX,word ptr [EBP + -0x1c]
0069087B  66 89 45 BA               MOV word ptr [EBP + -0x46],AX
0069087F  66 8B 43 7B               MOV AX,word ptr [EBX + 0x7b]
00690883  66 89 4D C0               MOV word ptr [EBP + -0x40],CX
00690887  8D 4D B0                  LEA ECX,[EBP + -0x50]
0069088A  66 89 45 BE               MOV word ptr [EBP + -0x42],AX
0069088E  8A 45 F0                  MOV AL,byte ptr [EBP + -0x10]
00690891  51                        PUSH ECX
00690892  8B CA                     MOV ECX,EDX
00690894  88 45 C2                  MOV byte ptr [EBP + -0x3e],AL
00690897  E8 B9 0C D7 FF            CALL 0x00401555
0069089C  8A 45 B8                  MOV AL,byte ptr [EBP + -0x48]
0069089F  84 C0                     TEST AL,AL
006908A1  7F 2F                     JG 0x006908d2
006908A3  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_006908a6:
006908A6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006908A9  47                        INC EDI
006908AA  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006908AD  8B 82 A5 00 00 00         MOV EAX,dword ptr [EDX + 0xa5]
006908B3  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006908B6  3B F9                     CMP EDI,ECX
006908B8  0F 8C 6E FF FF FF         JL 0x0069082c
006908BE  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
006908C4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006908C9  5F                        POP EDI
006908CA  5E                        POP ESI
006908CB  5B                        POP EBX
006908CC  8B E5                     MOV ESP,EBP
006908CE  5D                        POP EBP
006908CF  C2 04 00                  RET 0x4
LAB_006908d2:
006908D2  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006908D5  33 C0                     XOR EAX,EAX
006908D7  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006908DA  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006908DD  66 8B 51 7D               MOV DX,word ptr [ECX + 0x7d]
006908E1  66 8B 4D F4               MOV CX,word ptr [EBP + -0xc]
006908E5  66 8B 43 7D               MOV AX,word ptr [EBX + 0x7d]
006908E9  66 89 55 E8               MOV word ptr [EBP + -0x18],DX
006908ED  66 8B 53 7B               MOV DX,word ptr [EBX + 0x7b]
006908F1  66 89 4D EC               MOV word ptr [EBP + -0x14],CX
006908F5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006908F8  66 89 45 EA               MOV word ptr [EBP + -0x16],AX
006908FC  66 89 55 EE               MOV word ptr [EBP + -0x12],DX
00690900  8B 91 C9 00 00 00         MOV EDX,dword ptr [ECX + 0xc9]
00690906  8D 45 E8                  LEA EAX,[EBP + -0x18]
00690909  50                        PUSH EAX
0069090A  52                        PUSH EDX
0069090B  E8 B0 D8 01 00            CALL 0x006ae1c0
LAB_00690910:
00690910  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
00690916  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0069091B  5F                        POP EDI
0069091C  5E                        POP ESI
0069091D  5B                        POP EBX
0069091E  8B E5                     MOV ESP,EBP
00690920  5D                        POP EBP
00690921  C2 04 00                  RET 0x4
LAB_00690924:
00690924  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
0069092A  68 94 58 7D 00            PUSH 0x7d5894
0069092F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00690934  56                        PUSH ESI
00690935  6A 00                     PUSH 0x0
00690937  68 33 04 00 00            PUSH 0x433
0069093C  68 E0 56 7D 00            PUSH 0x7d56e0
00690941  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00690947  E8 84 CB 01 00            CALL 0x006ad4d0
0069094C  83 C4 18                  ADD ESP,0x18
0069094F  85 C0                     TEST EAX,EAX
00690951  74 01                     JZ 0x00690954
00690953  CC                        INT3
LAB_00690954:
00690954  68 34 04 00 00            PUSH 0x434
00690959  68 E0 56 7D 00            PUSH 0x7d56e0
0069095E  6A 00                     PUSH 0x0
00690960  56                        PUSH ESI
00690961  E8 DA 54 01 00            CALL 0x006a5e40
LAB_00690966:
00690966  5F                        POP EDI
00690967  5E                        POP ESI
00690968  5B                        POP EBX
00690969  8B E5                     MOV ESP,EBP
0069096B  5D                        POP EBP
0069096C  C2 04 00                  RET 0x4
