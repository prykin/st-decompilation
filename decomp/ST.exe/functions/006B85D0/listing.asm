FUN_006b85d0:
006B85D0  55                        PUSH EBP
006B85D1  8B EC                     MOV EBP,ESP
006B85D3  51                        PUSH ECX
006B85D4  56                        PUSH ESI
006B85D5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B85D8  57                        PUSH EDI
006B85D9  33 FF                     XOR EDI,EDI
006B85DB  8B 06                     MOV EAX,dword ptr [ESI]
006B85DD  F7 40 08 00 00 00 04      TEST dword ptr [EAX + 0x8],0x4000000
006B85E4  74 0C                     JZ 0x006b85f2
006B85E6  05 F0 04 00 00            ADD EAX,0x4f0
006B85EB  50                        PUSH EAX
006B85EC  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006b85f2:
006B85F2  53                        PUSH EBX
006B85F3  56                        PUSH ESI
006B85F4  E8 57 02 00 00            CALL 0x006b8850
006B85F9  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B85FC  33 D2                     XOR EDX,EDX
006B85FE  3B DA                     CMP EBX,EDX
006B8600  0F 84 F5 01 00 00         JZ 0x006b87fb
006B8606  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B8609  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B860C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B860F  3B FA                     CMP EDI,EDX
006B8611  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
006B8614  89 4E 24                  MOV dword ptr [ESI + 0x24],ECX
006B8617  7F 0A                     JG 0x006b8623
006B8619  C7 45 0C 01 00 00 00      MOV dword ptr [EBP + 0xc],0x1
006B8620  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_006b8623:
006B8623  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B8626  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B8629  25 FF FF FF 00            AND EAX,0xffffff
006B862E  89 7E 2C                  MOV dword ptr [ESI + 0x2c],EDI
006B8631  F7 C1 00 00 00 08         TEST ECX,0x8000000
006B8637  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006B863A  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006B863D  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006B8640  74 3A                     JZ 0x006b867c
006B8642  0D 00 00 00 08            OR EAX,0x8000000
006B8647  3B FA                     CMP EDI,EDX
006B8649  89 5E 38                  MOV dword ptr [ESI + 0x38],EBX
006B864C  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006B864F  0F 8E 6C 01 00 00         JLE 0x006b87c1
LAB_006b8655:
006B8655  8B 03                     MOV EAX,dword ptr [EBX]
006B8657  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B865A  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006B865D  3B D1                     CMP EDX,ECX
006B865F  7D 03                     JGE 0x006b8664
006B8661  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006b8664:
006B8664  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
006B8667  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B866A  3B C8                     CMP ECX,EAX
006B866C  7D 03                     JGE 0x006b8671
006B866E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006b8671:
006B8671  83 C3 04                  ADD EBX,0x4
006B8674  4F                        DEC EDI
006B8675  75 DE                     JNZ 0x006b8655
006B8677  E9 45 01 00 00            JMP 0x006b87c1
LAB_006b867c:
006B867C  F7 C1 00 00 00 40         TEST ECX,0x40000000
006B8682  74 6B                     JZ 0x006b86ef
006B8684  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006B8687  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006B868A  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
006B868D  6A 00                     PUSH 0x0
006B868F  57                        PUSH EDI
006B8690  8D 56 38                  LEA EDX,[ESI + 0x38]
006B8693  50                        PUSH EAX
006B8694  51                        PUSH ECX
006B8695  52                        PUSH EDX
006B8696  8B 16                     MOV EDX,dword ptr [ESI]
006B8698  52                        PUSH EDX
006B8699  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006B869C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B869F  E8 1C 30 00 00            CALL 0x006bb6c0
006B86A4  8B F8                     MOV EDI,EAX
006B86A6  85 FF                     TEST EDI,EDI
006B86A8  74 0C                     JZ 0x006b86b6
006B86AA  C7 46 38 00 00 00 00      MOV dword ptr [ESI + 0x38],0x0
006B86B1  E9 45 01 00 00            JMP 0x006b87fb
LAB_006b86b6:
006B86B6  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006B86B9  8B 0E                     MOV ECX,dword ptr [ESI]
006B86BB  6A 00                     PUSH 0x0
006B86BD  53                        PUSH EBX
006B86BE  50                        PUSH EAX
006B86BF  51                        PUSH ECX
006B86C0  E8 FB 85 01 00            CALL 0x006d0cc0
006B86C5  8B F8                     MOV EDI,EAX
006B86C7  85 FF                     TEST EDI,EDI
006B86C9  0F 85 2C 01 00 00         JNZ 0x006b87fb
006B86CF  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B86D2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B86D5  0D 00 00 00 20            OR EAX,0x20000000
006B86DA  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
006B86DD  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006B86E0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B86E3  99                        CDQ
006B86E4  F7 7D 0C                  IDIV dword ptr [EBP + 0xc]
006B86E7  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
006B86EA  E9 D2 00 00 00            JMP 0x006b87c1
LAB_006b86ef:
006B86EF  F7 C1 00 00 00 C0         TEST ECX,0xc0000000
006B86F5  0F 84 FB 00 00 00         JZ 0x006b87f6
006B86FB  8D 04 BD 00 00 00 00      LEA EAX,[EDI*0x4 + 0x0]
006B8702  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
006B8705  50                        PUSH EAX
006B8706  E8 C5 7D FF FF            CALL 0x006b04d0
006B870B  85 C0                     TEST EAX,EAX
006B870D  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
006B8710  75 0A                     JNZ 0x006b871c
006B8712  BF FE FF FF FF            MOV EDI,0xfffffffe
006B8717  E9 DF 00 00 00            JMP 0x006b87fb
LAB_006b871c:
006B871C  85 FF                     TEST EDI,EDI
006B871E  C7 45 20 00 00 00 00      MOV dword ptr [EBP + 0x20],0x0
006B8725  0F 8E 8F 00 00 00         JLE 0x006b87ba
LAB_006b872b:
006B872B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B872E  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B8731  6A 00                     PUSH 0x0
006B8733  8B 01                     MOV EAX,dword ptr [ECX]
006B8735  8D 1C 95 00 00 00 00      LEA EBX,[EDX*0x4 + 0x0]
006B873C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B873F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006B8742  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
006B8745  52                        PUSH EDX
006B8746  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B8749  50                        PUSH EAX
006B874A  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
006B874D  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006B8750  51                        PUSH ECX
006B8751  8B 0E                     MOV ECX,dword ptr [ESI]
006B8753  03 C3                     ADD EAX,EBX
006B8755  50                        PUSH EAX
006B8756  51                        PUSH ECX
006B8757  E8 64 2F 00 00            CALL 0x006bb6c0
006B875C  8B F8                     MOV EDI,EAX
006B875E  85 FF                     TEST EDI,EDI
006B8760  0F 85 81 00 00 00         JNZ 0x006b87e7
006B8766  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B8769  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006B876C  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006B876F  8B 00                     MOV EAX,dword ptr [EAX]
006B8771  52                        PUSH EDX
006B8772  8B 14 19                  MOV EDX,dword ptr [ECX + EBX*0x1]
006B8775  50                        PUSH EAX
006B8776  8B 06                     MOV EAX,dword ptr [ESI]
006B8778  52                        PUSH EDX
006B8779  50                        PUSH EAX
006B877A  E8 41 85 01 00            CALL 0x006d0cc0
006B877F  8B F8                     MOV EDI,EAX
006B8781  85 FF                     TEST EDI,EDI
006B8783  75 76                     JNZ 0x006b87fb
006B8785  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B8788  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B878B  3B C8                     CMP ECX,EAX
006B878D  7D 03                     JGE 0x006b8792
006B878F  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006b8792:
006B8792  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B8795  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B8798  3B C8                     CMP ECX,EAX
006B879A  7D 03                     JGE 0x006b879f
006B879C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_006b879f:
006B879F  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006B87A2  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006B87A5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B87A8  83 C7 08                  ADD EDI,0x8
006B87AB  40                        INC EAX
006B87AC  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
006B87AF  3B C1                     CMP EAX,ECX
006B87B1  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006B87B4  0F 8C 71 FF FF FF         JL 0x006b872b
LAB_006b87ba:
006B87BA  81 4E 04 00 00 00 A0      OR dword ptr [ESI + 0x4],0xa0000000
LAB_006b87c1:
006B87C1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B87C4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B87C7  8B 16                     MOV EDX,dword ptr [ESI]
006B87C9  6A 00                     PUSH 0x0
006B87CB  6A FF                     PUSH -0x1
006B87CD  8D 5E 3C                  LEA EBX,[ESI + 0x3c]
006B87D0  50                        PUSH EAX
006B87D1  51                        PUSH ECX
006B87D2  53                        PUSH EBX
006B87D3  52                        PUSH EDX
006B87D4  E8 E7 2E 00 00            CALL 0x006bb6c0
006B87D9  8B F8                     MOV EDI,EAX
006B87DB  85 FF                     TEST EDI,EDI
006B87DD  74 1C                     JZ 0x006b87fb
006B87DF  C7 03 00 00 00 00         MOV dword ptr [EBX],0x0
006B87E5  EB 14                     JMP 0x006b87fb
LAB_006b87e7:
006B87E7  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
006B87EA  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B87ED  C7 04 91 00 00 00 00      MOV dword ptr [ECX + EDX*0x4],0x0
006B87F4  EB 05                     JMP 0x006b87fb
LAB_006b87f6:
006B87F6  BF CC FF FF FF            MOV EDI,0xffffffcc
LAB_006b87fb:
006B87FB  8B 36                     MOV ESI,dword ptr [ESI]
006B87FD  5B                        POP EBX
006B87FE  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006B8805  74 0D                     JZ 0x006b8814
006B8807  81 C6 F0 04 00 00         ADD ESI,0x4f0
006B880D  56                        PUSH ESI
006B880E  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006b8814:
006B8814  85 FF                     TEST EDI,EDI
006B8816  74 20                     JZ 0x006b8838
006B8818  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B881D  68 95 00 00 00            PUSH 0x95
006B8822  68 18 DC 7E 00            PUSH 0x7edc18
006B8827  50                        PUSH EAX
006B8828  57                        PUSH EDI
006B8829  E8 12 D6 FE FF            CALL 0x006a5e40
006B882E  8B C7                     MOV EAX,EDI
006B8830  5F                        POP EDI
006B8831  5E                        POP ESI
006B8832  8B E5                     MOV ESP,EBP
006B8834  5D                        POP EBP
006B8835  C2 1C 00                  RET 0x1c
LAB_006b8838:
006B8838  5F                        POP EDI
006B8839  33 C0                     XOR EAX,EAX
006B883B  5E                        POP ESI
006B883C  8B E5                     MOV ESP,EBP
006B883E  5D                        POP EBP
006B883F  C2 1C 00                  RET 0x1c
