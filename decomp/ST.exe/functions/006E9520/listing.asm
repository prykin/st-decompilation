FUN_006e9520:
006E9520  55                        PUSH EBP
006E9521  8B EC                     MOV EBP,ESP
006E9523  51                        PUSH ECX
006E9524  53                        PUSH EBX
006E9525  8B D9                     MOV EBX,ECX
006E9527  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E952A  56                        PUSH ESI
006E952B  8B 83 10 03 00 00         MOV EAX,dword ptr [EBX + 0x310]
006E9531  57                        PUSH EDI
006E9532  3B C8                     CMP ECX,EAX
006E9534  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006E9537  0F 83 72 01 00 00         JNC 0x006e96af
006E953D  8B 93 1C 03 00 00         MOV EDX,dword ptr [EBX + 0x31c]
006E9543  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006E9546  C1 E0 03                  SHL EAX,0x3
006E9549  2B C1                     SUB EAX,ECX
006E954B  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E954E  8D 34 82                  LEA ESI,[EDX + EAX*0x4]
006E9551  8B 04 82                  MOV EAX,dword ptr [EDX + EAX*0x4]
006E9554  F6 C4 80                  TEST AH,0x80
006E9557  0F 84 52 01 00 00         JZ 0x006e96af
006E955D  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006E9560  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006E9563  85 FF                     TEST EDI,EDI
006E9565  0F 85 DA 00 00 00         JNZ 0x006e9645
006E956B  F6 C5 80                  TEST CH,0x80
006E956E  0F 84 4A 01 00 00         JZ 0x006e96be
006E9574  80 E5 7F                  AND CH,0x7f
006E9577  0D 4C 20 00 00            OR EAX,0x204c
006E957C  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
006E957F  8B 8E E0 00 00 00         MOV ECX,dword ptr [ESI + 0xe0]
006E9585  33 FF                     XOR EDI,EDI
006E9587  89 06                     MOV dword ptr [ESI],EAX
006E9589  8B 86 E4 00 00 00         MOV EAX,dword ptr [ESI + 0xe4]
006E958F  85 C9                     TEST ECX,ECX
006E9591  7E 19                     JLE 0x006e95ac
006E9593  8D 58 08                  LEA EBX,[EAX + 0x8]
LAB_006e9596:
006E9596  8B 03                     MOV EAX,dword ptr [EBX]
006E9598  50                        PUSH EAX
006E9599  E8 F2 C8 FB FF            CALL 0x006a5e90
006E959E  8B 86 E0 00 00 00         MOV EAX,dword ptr [ESI + 0xe0]
006E95A4  83 C3 0C                  ADD EBX,0xc
006E95A7  47                        INC EDI
006E95A8  3B F8                     CMP EDI,EAX
006E95AA  7C EA                     JL 0x006e9596
LAB_006e95ac:
006E95AC  8D 86 E4 00 00 00         LEA EAX,[ESI + 0xe4]
006E95B2  50                        PUSH EAX
006E95B3  E8 A8 1A FC FF            CALL 0x006ab060
006E95B8  8B 8E E0 00 00 00         MOV ECX,dword ptr [ESI + 0xe0]
006E95BE  8B 86 F0 00 00 00         MOV EAX,dword ptr [ESI + 0xf0]
006E95C4  33 FF                     XOR EDI,EDI
006E95C6  85 C9                     TEST ECX,ECX
006E95C8  7E 19                     JLE 0x006e95e3
006E95CA  8D 58 0C                  LEA EBX,[EAX + 0xc]
LAB_006e95cd:
006E95CD  8B 0B                     MOV ECX,dword ptr [EBX]
006E95CF  51                        PUSH ECX
006E95D0  E8 BB C8 FB FF            CALL 0x006a5e90
006E95D5  8B 86 E0 00 00 00         MOV EAX,dword ptr [ESI + 0xe0]
006E95DB  83 C3 10                  ADD EBX,0x10
006E95DE  47                        INC EDI
006E95DF  3B F8                     CMP EDI,EAX
006E95E1  7C EA                     JL 0x006e95cd
LAB_006e95e3:
006E95E3  8D 86 F0 00 00 00         LEA EAX,[ESI + 0xf0]
006E95E9  50                        PUSH EAX
006E95EA  E8 71 1A FC FF            CALL 0x006ab060
006E95EF  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
006E95F2  C7 86 E0 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0xe0],0x0
006E95FC  A8 40                     TEST AL,0x40
006E95FE  0F 84 BA 00 00 00         JZ 0x006e96be
006E9604  8B 76 1C                  MOV ESI,dword ptr [ESI + 0x1c]
006E9607  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
006E960A  C1 E0 03                  SHL EAX,0x3
006E960D  2B C6                     SUB EAX,ESI
006E960F  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006E9612  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006E9615  8B 88 1C 03 00 00         MOV ECX,dword ptr [EAX + 0x31c]
006E961B  8D 04 91                  LEA EAX,[ECX + EDX*0x4]
LAB_006e961e:
006E961E  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006E9621  85 C9                     TEST ECX,ECX
006E9623  0F 85 95 00 00 00         JNZ 0x006e96be
006E9629  8B 08                     MOV ECX,dword ptr [EAX]
006E962B  F7 C1 00 00 01 00         TEST ECX,0x10000
006E9631  0F 84 87 00 00 00         JZ 0x006e96be
006E9637  83 C9 04                  OR ECX,0x4
006E963A  5F                        POP EDI
006E963B  5E                        POP ESI
006E963C  89 08                     MOV dword ptr [EAX],ECX
006E963E  5B                        POP EBX
006E963F  8B E5                     MOV ESP,EBP
006E9641  5D                        POP EBP
006E9642  C2 10 00                  RET 0x10
LAB_006e9645:
006E9645  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E9648  F6 C5 80                  TEST CH,0x80
006E964B  74 1E                     JZ 0x006e966b
006E964D  39 BE F4 00 00 00         CMP dword ptr [ESI + 0xf4],EDI
006E9653  75 16                     JNZ 0x006e966b
006E9655  39 96 F8 00 00 00         CMP dword ptr [ESI + 0xf8],EDX
006E965B  75 0E                     JNZ 0x006e966b
006E965D  8B 9E 04 01 00 00         MOV EBX,dword ptr [ESI + 0x104]
006E9663  3B 5D 0C                  CMP EBX,dword ptr [EBP + 0xc]
006E9666  74 56                     JZ 0x006e96be
006E9668  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_006e966b:
006E966B  80 CD 80                  OR CH,0x80
006E966E  80 E4 DF                  AND AH,0xdf
006E9671  0C 4C                     OR AL,0x4c
006E9673  89 4E 04                  MOV dword ptr [ESI + 0x4],ECX
006E9676  F6 C1 40                  TEST CL,0x40
006E9679  89 06                     MOV dword ptr [ESI],EAX
006E967B  89 BE F4 00 00 00         MOV dword ptr [ESI + 0xf4],EDI
006E9681  89 96 F8 00 00 00         MOV dword ptr [ESI + 0xf8],EDX
006E9687  C7 86 04 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x104],0x0
006E9691  74 2B                     JZ 0x006e96be
006E9693  8B 76 1C                  MOV ESI,dword ptr [ESI + 0x1c]
006E9696  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
006E9699  C1 E0 03                  SHL EAX,0x3
006E969C  2B C6                     SUB EAX,ESI
006E969E  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006E96A1  8B 83 1C 03 00 00         MOV EAX,dword ptr [EBX + 0x31c]
006E96A7  8D 04 90                  LEA EAX,[EAX + EDX*0x4]
006E96AA  E9 6F FF FF FF            JMP 0x006e961e
LAB_006e96af:
006E96AF  83 F9 FF                  CMP ECX,-0x1
006E96B2  74 0A                     JZ 0x006e96be
006E96B4  68 48 ED 7E 00            PUSH 0x7eed48
006E96B9  E8 92 F5 FF FF            CALL 0x006e8c50
LAB_006e96be:
006E96BE  5F                        POP EDI
006E96BF  5E                        POP ESI
006E96C0  5B                        POP EBX
006E96C1  8B E5                     MOV ESP,EBP
006E96C3  5D                        POP EBP
006E96C4  C2 10 00                  RET 0x10
