mfSndLibLoad:
0071A270  55                        PUSH EBP
0071A271  8B EC                     MOV EBP,ESP
0071A273  81 EC 54 04 00 00         SUB ESP,0x454
0071A279  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071A27E  53                        PUSH EBX
0071A27F  56                        PUSH ESI
0071A280  57                        PUSH EDI
0071A281  33 FF                     XOR EDI,EDI
0071A283  8D 55 B8                  LEA EDX,[EBP + -0x48]
0071A286  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0071A289  57                        PUSH EDI
0071A28A  52                        PUSH EDX
0071A28B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0071A28E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0071A291  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071A297  E8 54 35 01 00            CALL 0x0072d7f0
0071A29C  8B F0                     MOV ESI,EAX
0071A29E  83 C4 08                  ADD ESP,0x8
0071A2A1  3B F7                     CMP ESI,EDI
0071A2A3  0F 85 4D 01 00 00         JNZ 0x0071a3f6
0071A2A9  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0071A2AC  3B DF                     CMP EBX,EDI
0071A2AE  75 17                     JNZ 0x0071a2c7
0071A2B0  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071A2B5  68 D6 00 00 00            PUSH 0xd6
0071A2BA  68 00 08 7F 00            PUSH 0x7f0800
0071A2BF  50                        PUSH EAX
0071A2C0  6A CC                     PUSH -0x34
0071A2C2  E8 79 BB F8 FF            CALL 0x006a5e40
LAB_0071a2c7:
0071A2C7  6A 09                     PUSH 0x9
0071A2C9  E8 42 09 F9 FF            CALL 0x006aac10
0071A2CE  8A 55 10                  MOV DL,byte ptr [EBP + 0x10]
0071A2D1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071A2D4  89 58 01                  MOV dword ptr [EAX + 0x1],EBX
0071A2D7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071A2DA  6A 14                     PUSH 0x14
0071A2DC  68 04 02 00 00            PUSH 0x204
0071A2E1  6A 14                     PUSH 0x14
0071A2E3  57                        PUSH EDI
0071A2E4  88 11                     MOV byte ptr [ECX],DL
0071A2E6  E8 A5 3F F9 FF            CALL 0x006ae290
0071A2EB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071A2EE  8D 95 AD FB FF FF         LEA EDX,[EBP + 0xfffffbad]
0071A2F4  89 41 05                  MOV dword ptr [ECX + 0x5],EAX
0071A2F7  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
0071A2FA  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0071A2FD  83 C9 FF                  OR ECX,0xffffffff
0071A300  33 C0                     XOR EAX,EAX
0071A302  C6 85 AC FB FF FF 02      MOV byte ptr [EBP + 0xfffffbac],0x2
0071A309  F2 AE                     SCASB.REPNE ES:EDI
0071A30B  F7 D1                     NOT ECX
0071A30D  2B F9                     SUB EDI,ECX
0071A30F  8B C1                     MOV EAX,ECX
0071A311  8B F7                     MOV ESI,EDI
0071A313  8B FA                     MOV EDI,EDX
0071A315  C1 E9 02                  SHR ECX,0x2
0071A318  F3 A5                     MOVSD.REP ES:EDI,ESI
0071A31A  8B C8                     MOV ECX,EAX
0071A31C  83 E1 03                  AND ECX,0x3
0071A31F  F3 A4                     MOVSB.REP ES:EDI,ESI
0071A321  8D 8D AC FB FF FF         LEA ECX,[EBP + 0xfffffbac]
0071A327  51                        PUSH ECX
0071A328  68 10 2D 6F 00            PUSH 0x6f2d10
0071A32D  8B CB                     MOV ECX,EBX
0071A32F  E8 7C 6F FD FF            CALL 0x006f12b0
0071A334  8B CB                     MOV ECX,EBX
0071A336  E8 55 84 FD FF            CALL 0x006f2790
0071A33B  8B D8                     MOV EBX,EAX
0071A33D  85 DB                     TEST EBX,EBX
0071A33F  0F 84 81 00 00 00         JZ 0x0071a3c6
0071A345  66 0F B6 55 10            MOVZX DX,byte ptr [EBP + 0x10]
0071A34A  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
LAB_0071a34e:
0071A34E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0071A351  6A 01                     PUSH 0x1
0071A353  53                        PUSH EBX
0071A354  50                        PUSH EAX
0071A355  E8 96 FA FF FF            CALL 0x00719df0
0071A35A  83 C4 0C                  ADD ESP,0xc
0071A35D  66 39 45 FA               CMP word ptr [EBP + -0x6],AX
0071A361  75 55                     JNZ 0x0071a3b8
0071A363  8B FB                     MOV EDI,EBX
0071A365  83 C9 FF                  OR ECX,0xffffffff
0071A368  33 C0                     XOR EAX,EAX
0071A36A  8D 95 B0 FD FF FF         LEA EDX,[EBP + 0xfffffdb0]
0071A370  F2 AE                     SCASB.REPNE ES:EDI
0071A372  F7 D1                     NOT ECX
0071A374  2B F9                     SUB EDI,ECX
0071A376  6A 01                     PUSH 0x1
0071A378  8B C1                     MOV EAX,ECX
0071A37A  8B F7                     MOV ESI,EDI
0071A37C  8B FA                     MOV EDI,EDX
0071A37E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0071A381  C1 E9 02                  SHR ECX,0x2
0071A384  F3 A5                     MOVSD.REP ES:EDI,ESI
0071A386  8B C8                     MOV ECX,EAX
0071A388  83 E1 03                  AND ECX,0x3
0071A38B  F3 A4                     MOVSB.REP ES:EDI,ESI
0071A38D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0071A390  51                        PUSH ECX
0071A391  53                        PUSH EBX
0071A392  52                        PUSH EDX
0071A393  E8 68 F9 FF FF            CALL 0x00719d00
0071A398  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071A39B  83 C4 10                  ADD ESP,0x10
0071A39E  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0071A3A1  8D 85 B0 FD FF FF         LEA EAX,[EBP + 0xfffffdb0]
0071A3A7  8B 51 05                  MOV EDX,dword ptr [ECX + 0x5]
0071A3AA  50                        PUSH EAX
0071A3AB  52                        PUSH EDX
0071A3AC  E8 0F 3E F9 FF            CALL 0x006ae1c0
0071A3B1  C7 45 B0 00 00 00 00      MOV dword ptr [EBP + -0x50],0x0
LAB_0071a3b8:
0071A3B8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0071A3BB  E8 D0 83 FD FF            CALL 0x006f2790
0071A3C0  8B D8                     MOV EBX,EAX
0071A3C2  85 DB                     TEST EBX,EBX
0071A3C4  75 88                     JNZ 0x0071a34e
LAB_0071a3c6:
0071A3C6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A3C9  8B 40 05                  MOV EAX,dword ptr [EAX + 0x5]
0071A3CC  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0071A3CF  85 C9                     TEST ECX,ECX
0071A3D1  75 10                     JNZ 0x0071a3e3
0071A3D3  50                        PUSH EAX
0071A3D4  E8 37 3D F9 FF            CALL 0x006ae110
0071A3D9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071A3DC  C7 41 05 00 00 00 00      MOV dword ptr [ECX + 0x5],0x0
LAB_0071a3e3:
0071A3E3  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0071A3E6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A3E9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0071A3EF  5F                        POP EDI
0071A3F0  5E                        POP ESI
0071A3F1  5B                        POP EBX
0071A3F2  8B E5                     MOV ESP,EBP
0071A3F4  5D                        POP EBP
0071A3F5  C3                        RET
LAB_0071a3f6:
0071A3F6  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0071A3F9  68 60 08 7F 00            PUSH 0x7f0860
0071A3FE  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071A403  56                        PUSH ESI
0071A404  57                        PUSH EDI
0071A405  68 F5 00 00 00            PUSH 0xf5
0071A40A  68 00 08 7F 00            PUSH 0x7f0800
0071A40F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071A414  E8 B7 30 F9 FF            CALL 0x006ad4d0
0071A419  83 C4 18                  ADD ESP,0x18
0071A41C  85 C0                     TEST EAX,EAX
0071A41E  74 01                     JZ 0x0071a421
0071A420  CC                        INT3
LAB_0071a421:
0071A421  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A424  3B C7                     CMP EAX,EDI
0071A426  74 6D                     JZ 0x0071a495
0071A428  8D 4D B0                  LEA ECX,[EBP + -0x50]
0071A42B  51                        PUSH ECX
0071A42C  8B 48 01                  MOV ECX,dword ptr [EAX + 0x1]
0071A42F  E8 AC 7C FD FF            CALL 0x006f20e0
0071A434  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071A437  8B 42 05                  MOV EAX,dword ptr [EDX + 0x5]
0071A43A  3B C7                     CMP EAX,EDI
0071A43C  74 4E                     JZ 0x0071a48c
0071A43E  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
0071A441  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A444  8D 95 B0 FD FF FF         LEA EDX,[EBP + 0xfffffdb0]
0071A44A  8B 48 05                  MOV ECX,dword ptr [EAX + 0x5]
0071A44D  E8 3E 6D F9 FF            CALL 0x006b1190
0071A452  85 C0                     TEST EAX,EAX
0071A454  7C 24                     JL 0x0071a47a
LAB_0071a456:
0071A456  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0071A459  8D 4D B0                  LEA ECX,[EBP + -0x50]
0071A45C  51                        PUSH ECX
0071A45D  8B 4A 01                  MOV ECX,dword ptr [EDX + 0x1]
0071A460  E8 7B 7C FD FF            CALL 0x006f20e0
0071A465  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A468  8D 95 B0 FD FF FF         LEA EDX,[EBP + 0xfffffdb0]
0071A46E  8B 48 05                  MOV ECX,dword ptr [EAX + 0x5]
0071A471  E8 1A 6D F9 FF            CALL 0x006b1190
0071A476  85 C0                     TEST EAX,EAX
0071A478  7D DC                     JGE 0x0071a456
LAB_0071a47a:
0071A47A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0071A47D  8B 51 05                  MOV EDX,dword ptr [ECX + 0x5]
0071A480  52                        PUSH EDX
0071A481  E8 8A 3C F9 FF            CALL 0x006ae110
0071A486  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A489  89 78 05                  MOV dword ptr [EAX + 0x5],EDI
LAB_0071a48c:
0071A48C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0071A48F  51                        PUSH ECX
0071A490  E8 CB 0B F9 FF            CALL 0x006ab060
LAB_0071a495:
0071A495  68 05 01 00 00            PUSH 0x105
0071A49A  68 00 08 7F 00            PUSH 0x7f0800
0071A49F  57                        PUSH EDI
0071A4A0  56                        PUSH ESI
0071A4A1  E8 9A B9 F8 FF            CALL 0x006a5e40
0071A4A6  5F                        POP EDI
0071A4A7  5E                        POP ESI
0071A4A8  33 C0                     XOR EAX,EAX
0071A4AA  5B                        POP EBX
0071A4AB  8B E5                     MOV ESP,EBP
0071A4AD  5D                        POP EBP
0071A4AE  C3                        RET
