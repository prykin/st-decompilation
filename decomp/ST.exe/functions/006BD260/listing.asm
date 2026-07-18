FUN_006bd260:
006BD260  55                        PUSH EBP
006BD261  8B EC                     MOV EBP,ESP
006BD263  6A FF                     PUSH -0x1
006BD265  68 40 D9 79 00            PUSH 0x79d940
006BD26A  68 64 D9 72 00            PUSH 0x72d964
006BD26F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006BD275  50                        PUSH EAX
006BD276  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006BD27D  83 EC 08                  SUB ESP,0x8
006BD280  53                        PUSH EBX
006BD281  56                        PUSH ESI
006BD282  57                        PUSH EDI
006BD283  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006BD286  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BD28B  8B 88 C0 01 00 00         MOV ECX,dword ptr [EAX + 0x1c0]
006BD291  33 FF                     XOR EDI,EDI
006BD293  89 39                     MOV dword ptr [ECX],EDI
006BD295  8B 15 D4 4F 85 00         MOV EDX,dword ptr [0x00854fd4]
006BD29B  8B 82 C0 01 00 00         MOV EAX,dword ptr [EDX + 0x1c0]
006BD2A1  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
006BD2A4  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
006BD2AA  39 BE D8 01 00 00         CMP dword ptr [ESI + 0x1d8],EDI
006BD2B0  0F 85 85 00 00 00         JNZ 0x006bd33b
006BD2B6  39 BE 2C 02 00 00         CMP dword ptr [ESI + 0x22c],EDI
006BD2BC  0F 84 83 00 00 00         JZ 0x006bd345
006BD2C2  8B 8E 34 02 00 00         MOV ECX,dword ptr [ESI + 0x234]
006BD2C8  51                        PUSH ECX
006BD2C9  8B 15 E8 4E 85 00         MOV EDX,dword ptr [0x00854ee8]
006BD2CF  52                        PUSH EDX
006BD2D0  FF 96 28 02 00 00         CALL dword ptr [ESI + 0x228]
006BD2D6  A3 EC 4F 85 00            MOV [0x00854fec],EAX
006BD2DB  3B C7                     CMP EAX,EDI
006BD2DD  0F 85 EB 00 00 00         JNZ 0x006bd3ce
006BD2E3  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006BD2E6  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BD2EB  8B 88 34 02 00 00         MOV ECX,dword ptr [EAX + 0x234]
006BD2F1  51                        PUSH ECX
006BD2F2  57                        PUSH EDI
006BD2F3  FF 90 2C 02 00 00         CALL dword ptr [EAX + 0x22c]
006BD2F9  A3 EC 4F 85 00            MOV [0x00854fec],EAX
006BD2FE  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006BD305  EB 1C                     JMP 0x006bd323
LAB_006bd323:
006BD323  A1 D4 4F 85 00            MOV EAX,[0x00854fd4]
006BD328  8B 90 34 02 00 00         MOV EDX,dword ptr [EAX + 0x234]
006BD32E  52                        PUSH EDX
006BD32F  FF 90 30 02 00 00         CALL dword ptr [EAX + 0x230]
006BD335  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
LAB_006bd33b:
006BD33B  A1 EC 4F 85 00            MOV EAX,[0x00854fec]
006BD340  E9 8F 00 00 00            JMP 0x006bd3d4
LAB_006bd345:
006BD345  89 3D D8 4E 85 00         MOV dword ptr [0x00854ed8],EDI
006BD34B  8B 35 6C BC 85 00         MOV ESI,dword ptr [0x0085bc6c]
LAB_006bd351:
006BD351  8B 0D E8 4E 85 00         MOV ECX,dword ptr [0x00854ee8]
006BD357  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
006BD35A  8B 10                     MOV EDX,dword ptr [EAX]
006BD35C  57                        PUSH EDI
006BD35D  68 00 00 00 01            PUSH 0x1000000
006BD362  57                        PUSH EDI
006BD363  8B 49 40                  MOV ECX,dword ptr [ECX + 0x40]
006BD366  51                        PUSH ECX
006BD367  57                        PUSH EDI
006BD368  50                        PUSH EAX
006BD369  FF 52 14                  CALL dword ptr [EDX + 0x14]
006BD36C  A3 EC 4F 85 00            MOV [0x00854fec],EAX
006BD371  3B C7                     CMP EAX,EDI
006BD373  74 44                     JZ 0x006bd3b9
006BD375  3D C2 01 76 88            CMP EAX,0x887601c2
006BD37A  75 0E                     JNZ 0x006bd38a
006BD37C  8B 15 E8 4E 85 00         MOV EDX,dword ptr [0x00854ee8]
006BD382  52                        PUSH EDX
006BD383  E8 B8 18 01 00            CALL 0x006cec40
006BD388  EB 1A                     JMP 0x006bd3a4
LAB_006bd38a:
006BD38A  3D A0 00 76 88            CMP EAX,0x887600a0
006BD38F  74 07                     JZ 0x006bd398
006BD391  3D AE 01 76 88            CMP EAX,0x887601ae
006BD396  75 21                     JNZ 0x006bd3b9
LAB_006bd398:
006BD398  39 3D D8 4E 85 00         CMP dword ptr [0x00854ed8],EDI
006BD39E  75 19                     JNZ 0x006bd3b9
006BD3A0  6A 02                     PUSH 0x2
006BD3A2  FF D6                     CALL ESI
LAB_006bd3a4:
006BD3A4  A1 D8 4E 85 00            MOV EAX,[0x00854ed8]
006BD3A9  40                        INC EAX
006BD3AA  A3 D8 4E 85 00            MOV [0x00854ed8],EAX
006BD3AF  83 F8 02                  CMP EAX,0x2
006BD3B2  7C 9D                     JL 0x006bd351
006BD3B4  A1 EC 4F 85 00            MOV EAX,[0x00854fec]
LAB_006bd3b9:
006BD3B9  3D A0 00 76 88            CMP EAX,0x887600a0
006BD3BE  74 07                     JZ 0x006bd3c7
006BD3C0  3D AE 01 76 88            CMP EAX,0x887601ae
006BD3C5  75 07                     JNZ 0x006bd3ce
LAB_006bd3c7:
006BD3C7  33 C0                     XOR EAX,EAX
006BD3C9  A3 EC 4F 85 00            MOV [0x00854fec],EAX
LAB_006bd3ce:
006BD3CE  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
LAB_006bd3d4:
006BD3D4  39 3D E4 4F 85 00         CMP dword ptr [0x00854fe4],EDI
006BD3DA  75 05                     JNZ 0x006bd3e1
006BD3DC  A3 E4 4F 85 00            MOV [0x00854fe4],EAX
LAB_006bd3e1:
006BD3E1  33 C0                     XOR EAX,EAX
006BD3E3  A3 60 4F 85 00            MOV [0x00854f60],EAX
006BD3E8  39 3D C8 4F 85 00         CMP dword ptr [0x00854fc8],EDI
006BD3EE  7E 37                     JLE 0x006bd427
006BD3F0  B9 05 00 00 00            MOV ECX,0x5
LAB_006bd3f5:
006BD3F5  8B 15 DC 4F 85 00         MOV EDX,dword ptr [0x00854fdc]
006BD3FB  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
006BD3FE  A3 44 4F 85 00            MOV [0x00854f44],EAX
006BD403  83 08 02                  OR dword ptr [EAX],0x2
006BD406  A1 44 4F 85 00            MOV EAX,[0x00854f44]
006BD40B  89 48 68                  MOV dword ptr [EAX + 0x68],ECX
006BD40E  A1 60 4F 85 00            MOV EAX,[0x00854f60]
006BD413  40                        INC EAX
006BD414  A3 60 4F 85 00            MOV [0x00854f60],EAX
006BD419  3B 05 C8 4F 85 00         CMP EAX,dword ptr [0x00854fc8]
006BD41F  7C D4                     JL 0x006bd3f5
006BD421  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
LAB_006bd427:
006BD427  39 3D 94 4F 85 00         CMP dword ptr [0x00854f94],EDI
006BD42D  74 6A                     JZ 0x006bd499
006BD42F  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BD435  83 C0 07                  ADD EAX,0x7
006BD438  99                        CDQ
006BD439  83 E2 07                  AND EDX,0x7
006BD43C  03 C2                     ADD EAX,EDX
006BD43E  8B C8                     MOV ECX,EAX
006BD440  C1 F9 03                  SAR ECX,0x3
006BD443  0F AF 8E F8 01 00 00      IMUL ECX,dword ptr [ESI + 0x1f8]
006BD44A  83 C8 FF                  OR EAX,0xffffffff
006BD44D  8B BE 10 02 00 00         MOV EDI,dword ptr [ESI + 0x210]
006BD453  8B D1                     MOV EDX,ECX
006BD455  C1 E9 02                  SHR ECX,0x2
006BD458  F3 AB                     STOSD.REP ES:EDI
006BD45A  8B CA                     MOV ECX,EDX
006BD45C  83 E1 03                  AND ECX,0x3
006BD45F  F3 AA                     STOSB.REP ES:EDI
006BD461  8B 35 D4 4F 85 00         MOV ESI,dword ptr [0x00854fd4]
006BD467  8B 86 F4 01 00 00         MOV EAX,dword ptr [ESI + 0x1f4]
006BD46D  83 C0 07                  ADD EAX,0x7
006BD470  99                        CDQ
006BD471  83 E2 07                  AND EDX,0x7
006BD474  03 C2                     ADD EAX,EDX
006BD476  8B C8                     MOV ECX,EAX
006BD478  C1 F9 03                  SAR ECX,0x3
006BD47B  0F AF 8E F8 01 00 00      IMUL ECX,dword ptr [ESI + 0x1f8]
006BD482  83 C8 FF                  OR EAX,0xffffffff
006BD485  8B BE 20 02 00 00         MOV EDI,dword ptr [ESI + 0x220]
006BD48B  8B D1                     MOV EDX,ECX
006BD48D  C1 E9 02                  SHR ECX,0x2
006BD490  F3 AB                     STOSD.REP ES:EDI
006BD492  8B CA                     MOV ECX,EDX
006BD494  83 E1 03                  AND ECX,0x3
006BD497  F3 AA                     STOSB.REP ES:EDI
LAB_006bd499:
006BD499  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006BD49C  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006BD4A3  5F                        POP EDI
006BD4A4  5E                        POP ESI
006BD4A5  5B                        POP EBX
006BD4A6  8B E5                     MOV ESP,EBP
006BD4A8  5D                        POP EBP
006BD4A9  C3                        RET
