FUN_00623600:
00623600  55                        PUSH EBP
00623601  8B EC                     MOV EBP,ESP
00623603  83 EC 08                  SUB ESP,0x8
00623606  53                        PUSH EBX
00623607  56                        PUSH ESI
00623608  57                        PUSH EDI
00623609  8B 3D 88 2A 80 00         MOV EDI,dword ptr [0x00802a88]
0062360F  85 FF                     TEST EDI,EDI
00623611  8B F1                     MOV ESI,ECX
00623613  0F 84 8D 02 00 00         JZ 0x006238a6
00623619  A0 4D 87 80 00            MOV AL,[0x0080874d]
0062361E  0F BF 5E 4B               MOVSX EBX,word ptr [ESI + 0x4b]
00623622  3C FF                     CMP AL,0xff
00623624  74 71                     JZ 0x00623697
00623626  8B 87 F8 00 00 00         MOV EAX,dword ptr [EDI + 0xf8]
0062362C  85 C0                     TEST EAX,EAX
0062362E  74 67                     JZ 0x00623697
00623630  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
00623634  8D 45 F8                  LEA EAX,[EBP + -0x8]
00623637  8D 4D FC                  LEA ECX,[EBP + -0x4]
0062363A  50                        PUSH EAX
0062363B  51                        PUSH ECX
0062363C  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
00623640  8B 8F 0C 01 00 00         MOV ECX,dword ptr [EDI + 0x10c]
00623646  52                        PUSH EDX
00623647  50                        PUSH EAX
00623648  51                        PUSH ECX
00623649  8B CF                     MOV ECX,EDI
0062364B  E8 03 09 DE FF            CALL 0x00403f53
00623650  85 DB                     TEST EBX,EBX
00623652  7C 43                     JL 0x00623697
00623654  83 FB 05                  CMP EBX,0x5
00623657  7D 3E                     JGE 0x00623697
00623659  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0062365C  85 D2                     TEST EDX,EDX
0062365E  7C 37                     JL 0x00623697
00623660  8B 4F 30                  MOV ECX,dword ptr [EDI + 0x30]
00623663  3B D1                     CMP EDX,ECX
00623665  7D 30                     JGE 0x00623697
00623667  8B 04 9D D0 AE 79 00      MOV EAX,dword ptr [EBX*0x4 + 0x79aed0]
0062366E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00623671  03 C3                     ADD EAX,EBX
00623673  85 C0                     TEST EAX,EAX
00623675  7C 20                     JL 0x00623697
00623677  3B 47 34                  CMP EAX,dword ptr [EDI + 0x34]
0062367A  7D 1B                     JGE 0x00623697
0062367C  8B 7F 4C                  MOV EDI,dword ptr [EDI + 0x4c]
0062367F  85 FF                     TEST EDI,EDI
00623681  74 14                     JZ 0x00623697
00623683  0F AF C1                  IMUL EAX,ECX
00623686  03 C7                     ADD EAX,EDI
00623688  33 C9                     XOR ECX,ECX
0062368A  8A 0C 10                  MOV CL,byte ptr [EAX + EDX*0x1]
0062368D  8B C1                     MOV EAX,ECX
0062368F  85 C0                     TEST EAX,EAX
00623691  0F 84 03 02 00 00         JZ 0x0062389a
LAB_00623697:
00623697  8B 86 AE 02 00 00         MOV EAX,dword ptr [ESI + 0x2ae]
0062369D  33 C9                     XOR ECX,ECX
0062369F  3B C1                     CMP EAX,ECX
006236A1  0F 85 28 01 00 00         JNZ 0x006237cf
006236A7  8A 96 AD 02 00 00         MOV DL,byte ptr [ESI + 0x2ad]
006236AD  BB 01 00 00 00            MOV EBX,0x1
006236B2  80 FA 03                  CMP DL,0x3
006236B5  74 05                     JZ 0x006236bc
006236B7  80 FA 02                  CMP DL,0x2
006236BA  75 63                     JNZ 0x0062371f
LAB_006236bc:
006236BC  8A 86 0E 03 00 00         MOV AL,byte ptr [ESI + 0x30e]
006236C2  84 C0                     TEST AL,AL
006236C4  74 29                     JZ 0x006236ef
006236C6  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006236CB  84 98 E4 00 00 00         TEST byte ptr [EAX + 0xe4],BL
006236D1  74 4A                     JZ 0x0062371d
006236D3  8B BE 0A 03 00 00         MOV EDI,dword ptr [ESI + 0x30a]
006236D9  47                        INC EDI
006236DA  8B C7                     MOV EAX,EDI
006236DC  89 BE 0A 03 00 00         MOV dword ptr [ESI + 0x30a],EDI
006236E2  83 F8 2F                  CMP EAX,0x2f
006236E5  75 36                     JNZ 0x0062371d
006236E7  89 8E 0A 03 00 00         MOV dword ptr [ESI + 0x30a],ECX
006236ED  EB 2E                     JMP 0x0062371d
LAB_006236ef:
006236EF  8B 86 0A 03 00 00         MOV EAX,dword ptr [ESI + 0x30a]
006236F5  85 C0                     TEST EAX,EAX
006236F7  74 26                     JZ 0x0062371f
006236F9  8B 3D 38 2A 80 00         MOV EDI,dword ptr [0x00802a38]
006236FF  84 9F E4 00 00 00         TEST byte ptr [EDI + 0xe4],BL
00623705  74 18                     JZ 0x0062371f
00623707  40                        INC EAX
00623708  83 F8 2F                  CMP EAX,0x2f
0062370B  89 86 0A 03 00 00         MOV dword ptr [ESI + 0x30a],EAX
00623711  75 0A                     JNZ 0x0062371d
00623713  C7 86 0A 03 00 00 00 00 00 00  MOV dword ptr [ESI + 0x30a],0x0
LAB_0062371d:
0062371D  8B CB                     MOV ECX,EBX
LAB_0062371f:
0062371F  A1 2C 73 80 00            MOV EAX,[0x0080732c]
00623724  85 C0                     TEST EAX,EAX
00623726  75 12                     JNZ 0x0062373a
00623728  8B 86 CE 02 00 00         MOV EAX,dword ptr [ESI + 0x2ce]
0062372E  85 C0                     TEST EAX,EAX
00623730  75 08                     JNZ 0x0062373a
00623732  85 C9                     TEST ECX,ECX
00623734  0F 84 32 01 00 00         JZ 0x0062386c
LAB_0062373a:
0062373A  80 FA 03                  CMP DL,0x3
0062373D  74 05                     JZ 0x00623744
0062373F  80 FA 02                  CMP DL,0x2
00623742  75 0E                     JNZ 0x00623752
LAB_00623744:
00623744  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0062374A  84 99 E4 00 00 00         TEST byte ptr [ECX + 0xe4],BL
00623750  74 06                     JZ 0x00623758
LAB_00623752:
00623752  FF 86 CE 02 00 00         INC dword ptr [ESI + 0x2ce]
LAB_00623758:
00623758  8B 96 CE 02 00 00         MOV EDX,dword ptr [ESI + 0x2ce]
0062375E  8B 86 D2 02 00 00         MOV EAX,dword ptr [ESI + 0x2d2]
00623764  3B D0                     CMP EDX,EAX
00623766  7C 0A                     JL 0x00623772
00623768  C7 86 CE 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2ce],0x0
LAB_00623772:
00623772  8B 86 CE 02 00 00         MOV EAX,dword ptr [ESI + 0x2ce]
00623778  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0062377E  50                        PUSH EAX
0062377F  6A 0E                     PUSH 0xe
00623781  8B CF                     MOV ECX,EDI
00623783  E8 DC D8 DD FF            CALL 0x00401064
00623788  6A 0E                     PUSH 0xe
0062378A  8B CF                     MOV ECX,EDI
0062378C  E8 2B F9 DD FF            CALL 0x004030bc
00623791  8A 86 52 03 00 00         MOV AL,byte ptr [ESI + 0x352]
00623797  84 C0                     TEST AL,AL
00623799  74 19                     JZ 0x006237b4
0062379B  8B 8E CE 02 00 00         MOV ECX,dword ptr [ESI + 0x2ce]
006237A1  51                        PUSH ECX
006237A2  6A 0C                     PUSH 0xc
006237A4  8B CF                     MOV ECX,EDI
006237A6  E8 B9 D8 DD FF            CALL 0x00401064
006237AB  6A 0C                     PUSH 0xc
006237AD  8B CF                     MOV ECX,EDI
006237AF  E8 08 F9 DD FF            CALL 0x004030bc
LAB_006237b4:
006237B4  A0 26 73 80 00            MOV AL,[0x00807326]
006237B9  84 C0                     TEST AL,AL
006237BB  0F 84 AB 00 00 00         JZ 0x0062386c
006237C1  33 D2                     XOR EDX,EDX
006237C3  8A 96 D6 02 00 00         MOV DL,byte ptr [ESI + 0x2d6]
006237C9  52                        PUSH EDX
006237CA  E9 94 00 00 00            JMP 0x00623863
LAB_006237cf:
006237CF  8A 86 AD 02 00 00         MOV AL,byte ptr [ESI + 0x2ad]
006237D5  BB 01 00 00 00            MOV EBX,0x1
006237DA  3C 03                     CMP AL,0x3
006237DC  74 04                     JZ 0x006237e2
006237DE  3C 02                     CMP AL,0x2
006237E0  75 0D                     JNZ 0x006237ef
LAB_006237e2:
006237E2  A1 38 2A 80 00            MOV EAX,[0x00802a38]
006237E7  84 98 E4 00 00 00         TEST byte ptr [EAX + 0xe4],BL
006237ED  74 06                     JZ 0x006237f5
LAB_006237ef:
006237EF  FF 86 CE 02 00 00         INC dword ptr [ESI + 0x2ce]
LAB_006237f5:
006237F5  8B 8E CE 02 00 00         MOV ECX,dword ptr [ESI + 0x2ce]
006237FB  8B 86 D2 02 00 00         MOV EAX,dword ptr [ESI + 0x2d2]
00623801  3B C8                     CMP ECX,EAX
00623803  7C 0A                     JL 0x0062380f
00623805  C7 86 CE 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2ce],0x0
LAB_0062380f:
0062380F  8B 96 CE 02 00 00         MOV EDX,dword ptr [ESI + 0x2ce]
00623815  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
0062381B  52                        PUSH EDX
0062381C  6A 0E                     PUSH 0xe
0062381E  8B CF                     MOV ECX,EDI
00623820  E8 3F D8 DD FF            CALL 0x00401064
00623825  6A 0E                     PUSH 0xe
00623827  8B CF                     MOV ECX,EDI
00623829  E8 8E F8 DD FF            CALL 0x004030bc
0062382E  8A 86 52 03 00 00         MOV AL,byte ptr [ESI + 0x352]
00623834  84 C0                     TEST AL,AL
00623836  74 19                     JZ 0x00623851
00623838  8B 86 CE 02 00 00         MOV EAX,dword ptr [ESI + 0x2ce]
0062383E  8B CF                     MOV ECX,EDI
00623840  50                        PUSH EAX
00623841  6A 0C                     PUSH 0xc
00623843  E8 1C D8 DD FF            CALL 0x00401064
00623848  6A 0C                     PUSH 0xc
0062384A  8B CF                     MOV ECX,EDI
0062384C  E8 6B F8 DD FF            CALL 0x004030bc
LAB_00623851:
00623851  A0 26 73 80 00            MOV AL,[0x00807326]
00623856  84 C0                     TEST AL,AL
00623858  74 12                     JZ 0x0062386c
0062385A  33 C9                     XOR ECX,ECX
0062385C  8A 8E D6 02 00 00         MOV CL,byte ptr [ESI + 0x2d6]
00623862  51                        PUSH ECX
LAB_00623863:
00623863  6A 0E                     PUSH 0xe
00623865  8B CF                     MOV ECX,EDI
00623867  E8 92 1A DE FF            CALL 0x004052fe
LAB_0062386c:
0062386C  8A 86 E9 02 00 00         MOV AL,byte ptr [ESI + 0x2e9]
00623872  84 C0                     TEST AL,AL
00623874  75 4C                     JNZ 0x006238c2
00623876  6A 00                     PUSH 0x0
00623878  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
0062387E  E8 FF F0 DD FF            CALL 0x00402982
00623883  8B 16                     MOV EDX,dword ptr [ESI]
00623885  8B CE                     MOV ECX,ESI
00623887  88 9E E9 02 00 00         MOV byte ptr [ESI + 0x2e9],BL
0062388D  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00623893  5F                        POP EDI
00623894  5E                        POP ESI
00623895  5B                        POP EBX
00623896  8B E5                     MOV ESP,EBP
00623898  5D                        POP EBP
00623899  C3                        RET
LAB_0062389a:
0062389A  8A 86 E9 02 00 00         MOV AL,byte ptr [ESI + 0x2e9]
006238A0  84 C0                     TEST AL,AL
006238A2  74 1E                     JZ 0x006238c2
006238A4  EB 0A                     JMP 0x006238b0
LAB_006238a6:
006238A6  8A 86 E9 02 00 00         MOV AL,byte ptr [ESI + 0x2e9]
006238AC  84 C0                     TEST AL,AL
006238AE  74 12                     JZ 0x006238c2
LAB_006238b0:
006238B0  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
006238B6  E8 54 04 DE FF            CALL 0x00403d0f
006238BB  C6 86 E9 02 00 00 00      MOV byte ptr [ESI + 0x2e9],0x0
LAB_006238c2:
006238C2  8B 16                     MOV EDX,dword ptr [ESI]
006238C4  8B CE                     MOV ECX,ESI
006238C6  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
006238CC  5F                        POP EDI
006238CD  5E                        POP ESI
006238CE  5B                        POP EBX
006238CF  8B E5                     MOV ESP,EBP
006238D1  5D                        POP EBP
006238D2  C3                        RET
