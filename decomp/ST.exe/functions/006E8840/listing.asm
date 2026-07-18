FUN_006e8840:
006E8840  55                        PUSH EBP
006E8841  8B EC                     MOV EBP,ESP
006E8843  83 EC 08                  SUB ESP,0x8
006E8846  53                        PUSH EBX
006E8847  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006E884A  8B 8B A0 00 00 00         MOV ECX,dword ptr [EBX + 0xa0]
006E8850  85 C9                     TEST ECX,ECX
006E8852  74 5C                     JZ 0x006e88b0
006E8854  8B 83 94 00 00 00         MOV EAX,dword ptr [EBX + 0x94]
006E885A  56                        PUSH ESI
006E885B  57                        PUSH EDI
006E885C  33 F6                     XOR ESI,ESI
006E885E  33 FF                     XOR EDI,EDI
006E8860  85 C0                     TEST EAX,EAX
006E8862  7E 44                     JLE 0x006e88a8
006E8864  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E8867  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_006e886a:
006E886A  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006E886D  85 D2                     TEST EDX,EDX
006E886F  74 28                     JZ 0x006e8899
006E8871  8B 01                     MOV EAX,dword ptr [ECX]
006E8873  85 C0                     TEST EAX,EAX
006E8875  7E 22                     JLE 0x006e8899
006E8877  8B D8                     MOV EBX,EAX
LAB_006e8879:
006E8879  8B 02                     MOV EAX,dword ptr [EDX]
006E887B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E887E  3B F1                     CMP ESI,ECX
006E8880  7D 02                     JGE 0x006e8884
006E8882  8B F1                     MOV ESI,ECX
LAB_006e8884:
006E8884  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
006E8887  3B F8                     CMP EDI,EAX
006E8889  7D 02                     JGE 0x006e888d
006E888B  8B F8                     MOV EDI,EAX
LAB_006e888d:
006E888D  83 C2 04                  ADD EDX,0x4
006E8890  4B                        DEC EBX
006E8891  75 E6                     JNZ 0x006e8879
006E8893  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006E8896  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006e8899:
006E8899  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006E889C  83 C1 08                  ADD ECX,0x8
006E889F  48                        DEC EAX
006E88A0  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E88A3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006E88A6  75 C2                     JNZ 0x006e886a
LAB_006e88a8:
006E88A8  89 7B 38                  MOV dword ptr [EBX + 0x38],EDI
006E88AB  89 73 34                  MOV dword ptr [EBX + 0x34],ESI
006E88AE  5F                        POP EDI
006E88AF  5E                        POP ESI
LAB_006e88b0:
006E88B0  5B                        POP EBX
006E88B1  8B E5                     MOV ESP,EBP
006E88B3  5D                        POP EBP
006E88B4  C2 04 00                  RET 0x4
