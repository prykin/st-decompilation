FUN_0069c790:
0069C790  55                        PUSH EBP
0069C791  8B EC                     MOV EBP,ESP
0069C793  83 EC 0C                  SUB ESP,0xc
0069C796  53                        PUSH EBX
0069C797  56                        PUSH ESI
0069C798  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0069C79B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0069C79E  57                        PUSH EDI
0069C79F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0069C7A2  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0069C7A5  33 C0                     XOR EAX,EAX
0069C7A7  3B F9                     CMP EDI,ECX
0069C7A9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0069C7AC  73 0E                     JNC 0x0069c7bc
0069C7AE  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0069C7B1  0F AF D7                  IMUL EDX,EDI
0069C7B4  03 56 1C                  ADD EDX,dword ptr [ESI + 0x1c]
0069C7B7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0069C7BA  EB 05                     JMP 0x0069c7c1
LAB_0069c7bc:
0069C7BC  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0069C7BF  8B D0                     MOV EDX,EAX
LAB_0069c7c1:
0069C7C1  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0069C7C4  3B D9                     CMP EBX,ECX
0069C7C6  73 0D                     JNC 0x0069c7d5
0069C7C8  8B 7E 08                  MOV EDI,dword ptr [ESI + 0x8]
0069C7CB  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0069C7CE  0F AF FB                  IMUL EDI,EBX
0069C7D1  03 F9                     ADD EDI,ECX
0069C7D3  EB 02                     JMP 0x0069c7d7
LAB_0069c7d5:
0069C7D5  33 FF                     XOR EDI,EDI
LAB_0069c7d7:
0069C7D7  3B D0                     CMP EDX,EAX
0069C7D9  0F 84 81 00 00 00         JZ 0x0069c860
0069C7DF  3B F8                     CMP EDI,EAX
0069C7E1  74 7D                     JZ 0x0069c860
0069C7E3  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0069C7E6  33 DB                     XOR EBX,EBX
0069C7E8  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0069C7EB  85 C0                     TEST EAX,EAX
0069C7ED  7E 54                     JLE 0x0069c843
0069C7EF  EB 03                     JMP 0x0069c7f4
LAB_0069c7f1:
0069C7F1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0069c7f4:
0069C7F4  3B D8                     CMP EBX,EAX
0069C7F6  73 0D                     JNC 0x0069c805
0069C7F8  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0069C7FB  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
0069C7FE  0F AF C3                  IMUL EAX,EBX
0069C801  03 C6                     ADD EAX,ESI
0069C803  EB 02                     JMP 0x0069c807
LAB_0069c805:
0069C805  33 C0                     XOR EAX,EAX
LAB_0069c807:
0069C807  8B 30                     MOV ESI,dword ptr [EAX]
0069C809  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069C80C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0069C80F  52                        PUSH EDX
0069C810  56                        PUSH ESI
0069C811  50                        PUSH EAX
0069C812  E8 C9 62 D6 FF            CALL 0x00402ae0
0069C817  85 C0                     TEST EAX,EAX
0069C819  7C 1A                     JL 0x0069c835
0069C81B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069C81E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069C821  8D 0C F5 00 00 00 00      LEA ECX,[ESI*0x8 + 0x0]
0069C828  2B CE                     SUB ECX,ESI
0069C82A  89 54 48 0A               MOV dword ptr [EAX + ECX*0x2 + 0xa],EDX
0069C82E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0069C831  40                        INC EAX
0069C832  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0069c835:
0069C835  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0069C838  43                        INC EBX
0069C839  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0069C83C  3B D8                     CMP EBX,EAX
0069C83E  7C B1                     JL 0x0069c7f1
0069C840  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0069c843:
0069C843  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0069C846  51                        PUSH ECX
0069C847  E8 C4 18 01 00            CALL 0x006ae110
0069C84C  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0069C84F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069C852  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0069C855  52                        PUSH EDX
0069C856  50                        PUSH EAX
0069C857  56                        PUSH ESI
0069C858  E8 DA 6A D6 FF            CALL 0x00403337
0069C85D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0069c860:
0069C860  5F                        POP EDI
0069C861  5E                        POP ESI
0069C862  5B                        POP EBX
0069C863  8B E5                     MOV ESP,EBP
0069C865  5D                        POP EBP
0069C866  C2 10 00                  RET 0x10
